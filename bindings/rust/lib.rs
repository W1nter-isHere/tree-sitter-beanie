pub mod data;
pub mod utilities;

use std::collections::HashMap;
use data::instructions::types::OperationType;
use tree_sitter::{Language, Node, Tree};
use crate::data::context::{BeanieParsingContext, ExpressionSignature, FuncSignature};
use crate::data::expression::data_type::DataType;
use crate::data::expression::instruction_expression::InstructionExpression;
use crate::data::instructions::Instruction;
use crate::utilities::keywords;
use crate::utilities::parse_error::ParsingError;

extern "C" { fn tree_sitter_beanie() -> Language; }
fn language() -> Language { unsafe { tree_sitter_beanie() } }
// pub const NODE_TYPES: &'static str = include_str!("../../src/node-types.json");

pub fn parse(text: &str, default_data_type: DataType, old_tree: Option<&Tree>) -> Result<BeanieParsingContext, ParsingError> {
    let mut parser = tree_sitter::Parser::new();
    parser.set_language(language()).map_err(|_| ParsingError::LoadLang)?;
    let tree = parser.parse(text, old_tree);

    match tree {
        None => Err(ParsingError::CreateTree), 
        Some(tree) => {
            let mut constants = HashMap::new();
            let mut functions = HashMap::new();
            let mut inputs = Vec::new();
            let mut instructions = Vec::new();
            
            let file_bytes = text.as_bytes();
            let source_file = tree.root_node();
            let mut source_cursor = source_file.walk();

            for statement in source_file.children(&mut source_cursor) {
                let kind = statement.kind();
                let mut statement_cursor = statement.walk();
                
                match kind { 
                    "\n" => continue,
                    keywords::tokens::INSTRUCTION => {
                        let operation = statement.child_by_field_name("operation").unwrap().utf8_text(file_bytes).unwrap().parse::<OperationType>().unwrap();

                        if operation == OperationType::In {
                            inputs.push(parse_expression(file_bytes, &default_data_type, &statement.child_by_field_name("operand").unwrap()))
                        }
                   
                        instructions.push(Instruction { 
                            operation_type: operation, 
                            expression: parse_instruction_expression(file_bytes, &default_data_type, &statement.child_by_field_name("operand").unwrap())?,
                            arguments: HashMap::new(),
                        })
                    },
                    keywords::tokens::INSTRUCTION_ARGUMENT => {
                        let argument_name = statement.child_by_field_name("argument_name").unwrap().utf8_text(file_bytes).unwrap().to_string();
                        
                        match instructions.last_mut() {
                            None => return Err(ParsingError::NoOperation(argument_name)),
                            Some(instruction) => {
                                instruction.arguments.insert(argument_name, parse_instruction_expression(file_bytes, &default_data_type, &statement.child_by_field_name("argument_value").unwrap())?);
                            }
                        }
                    },
                    keywords::tokens::FUNCTION_DECLARATION => {
                        let function_name = statement.child_by_field_name("function_name").unwrap().utf8_text(file_bytes).unwrap();
                        let parameters = statement.children_by_field_name("identifier", &mut statement_cursor).map(|node| String::from(node.utf8_text(file_bytes).unwrap())).collect::<Vec<String>>();
                        let evaluation = parse_expression(file_bytes, &default_data_type, &statement.child_by_field_name("evaluation").unwrap());
                        functions.insert(String::from(function_name), FuncSignature { parameters, evaluation });
                    },
                    keywords::tokens::CONST_DECLARATION => {
                        let identifiers  = statement.children_by_field_name("identifier", &mut statement_cursor).map(|node| String::from(node.utf8_text(file_bytes).unwrap())).collect::<Vec<String>>();
                        let evaluation = parse_expression(file_bytes, &default_data_type, &statement.child_by_field_name("evaluation").unwrap());
                        constants.insert(identifiers, evaluation);
                    }, 
                    _ => return Err(ParsingError::NotAStatement(kind.to_string())),
                };
            }
            
            Ok(BeanieParsingContext {
                abstract_syntax_tree: tree.clone(),
                constants,
                functions,
                inputs,
                instructions,
            })
        }
    }
}

fn parse_expression(file_bytes: &[u8], default_data_type: &DataType, evaluation_node: &Node) -> ExpressionSignature {
    let math = evaluation_node.child_by_field_name("math").unwrap().utf8_text(file_bytes).unwrap();
    let data_type = match evaluation_node.child_by_field_name("data_type") {
        None => default_data_type.clone(),
        Some(node) => {
            node.utf8_text(file_bytes).unwrap().parse::<DataType>().unwrap()
        },
    };
    
    ExpressionSignature { evaluation: math.to_string(), data_type }
}

fn parse_instruction_expression(file_bytes: &[u8], default_data_type: &DataType, evaluation_node: &Node) -> Result<InstructionExpression, ParsingError>{
    match evaluation_node.kind(){
        keywords::tokens::MATH_EXPRESSION => Ok(InstructionExpression::Math(parse_expression(file_bytes, default_data_type, evaluation_node))),
        keywords::tokens::FILE_PATH => Ok(InstructionExpression::FilePath(evaluation_node.utf8_text(file_bytes).unwrap().to_string())),
        keywords::tokens::BOOLEAN => Ok(InstructionExpression::Boolean(evaluation_node.utf8_text(file_bytes).unwrap().parse::<bool>().unwrap())),
        keywords::tokens::STRING => Ok(InstructionExpression::String(evaluation_node.utf8_text(file_bytes).unwrap().trim_matches('\"').to_string())),
        _ => Err(ParsingError::NotValidInstructionExpression(evaluation_node.kind().to_string())), 
    }
}

#[cfg(test)]
mod tests {
    use std::fs;
    use crate::data::expression::data_type::DataType;

    #[test]
    fn can_parse() {
        let context = super::parse(&fs::read_to_string("examples/test.bn").unwrap(), DataType::Decimal, None).unwrap();
        println!("{:#?}", context);
    }
}
