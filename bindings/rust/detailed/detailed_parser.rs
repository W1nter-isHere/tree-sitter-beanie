use std::collections::HashMap;
use tree_sitter::Tree;
use crate::{language, parse_expression, parse_instruction_expression};
use crate::data::expression::data_type::DataType;
use crate::data::instructions::types::OperationType;
use crate::detailed::detailed_parsing_ctx::{DetailedBeanieParsingContext, DetailedExpressionSignature, DetailedFuncSignature, DetailedInstruction};
use crate::utilities::keywords;
use crate::utilities::parse_error::ParsingError;

pub fn parse(text: &str, default_data_type: DataType, old_tree: Option<&Tree>) -> Result<DetailedBeanieParsingContext, ParsingError> {
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

            for (line_index, statement) in source_file.children(&mut source_cursor).enumerate() {
                let kind = statement.kind();
                let mut statement_cursor = statement.walk();

                match kind {
                    "\n" => continue,
                    keywords::tokens::INSTRUCTION => {
                        let operation = statement.child_by_field_name("operation").unwrap().utf8_text(file_bytes).unwrap().parse::<OperationType>().unwrap();

                        if operation == OperationType::In {
                            inputs.push(parse_expression(file_bytes, &default_data_type, &statement.child_by_field_name("operand").unwrap()))
                        }

                        instructions.push(DetailedInstruction {
                            operation_type: operation,
                            expression: (
                                parse_instruction_expression(file_bytes, &default_data_type, &statement.child_by_field_name("operand").unwrap())?,
                                line_index,
                            ),
                            arguments: HashMap::new(),
                        })
                    }
                    keywords::tokens::INSTRUCTION_ARGUMENT => {
                        let argument_name = statement.child_by_field_name("argument_name").unwrap().utf8_text(file_bytes).unwrap().to_string();

                        match instructions.last_mut() {
                            None => return Err(ParsingError::NoOperation(argument_name)),
                            Some(instruction) => {
                                instruction.arguments.insert(
                                    argument_name,
                                    (
                                        parse_instruction_expression(file_bytes, &default_data_type, &statement.child_by_field_name("argument_value").unwrap())?,
                                        line_index
                                    ),
                                );
                            }
                        }
                    }
                    keywords::tokens::FUNCTION_DECLARATION => {
                        let function_name = statement.child_by_field_name("function_name").unwrap().utf8_text(file_bytes).unwrap();
                        let parameters = statement.children_by_field_name("identifier", &mut statement_cursor).map(|node| String::from(node.utf8_text(file_bytes).unwrap())).collect::<Vec<String>>();
                        let evaluation = parse_expression(file_bytes, &default_data_type, &statement.child_by_field_name("evaluation").unwrap());
                        functions.insert(String::from(function_name), DetailedFuncSignature { parameters, evaluation: DetailedExpressionSignature { signature: evaluation, line_index } });
                    }
                    keywords::tokens::CONST_DECLARATION => {
                        let identifiers = statement.children_by_field_name("identifier", &mut statement_cursor).map(|node| String::from(node.utf8_text(file_bytes).unwrap())).collect::<Vec<String>>();
                        let evaluation = parse_expression(file_bytes, &default_data_type, &statement.child_by_field_name("evaluation").unwrap());
                        constants.insert(identifiers, DetailedExpressionSignature { signature: evaluation, line_index });
                    }
                    _ => return Err(ParsingError::NotAStatement(kind.to_string())),
                };
            }

            Ok(DetailedBeanieParsingContext {
                constants,
                functions,
                inputs,
                instructions,
            })
        }
    }
}

