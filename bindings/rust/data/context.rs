use std::collections::HashMap;
use tree_sitter::Tree;
use crate::data::expression::data_type::DataType;
use crate::data::instructions::Instruction;

#[derive(Debug, Clone, Eq, PartialEq)]
pub struct ExpressionSignature {
    pub evaluation: String,
    pub data_type: DataType,
}

#[derive(Debug, Clone, Eq, PartialEq)]
pub struct FuncSignature {
    pub parameters: Vec<String>,
    pub evaluation: ExpressionSignature,
}

#[derive(Debug)]
pub struct BeanieParsingContext {
    pub abstract_syntax_tree: Tree,
    pub constants: HashMap<Vec<String>, ExpressionSignature>,
    pub functions: HashMap<String, FuncSignature>,
    pub instructions: Vec<Instruction>,
    pub inputs: Vec<ExpressionSignature>,
}

impl BeanieParsingContext {
    pub fn has_constant(&self, name: &str) -> bool {
        for key in self.constants.keys() {
            if key.iter().any(|s| s == name) {
                return true;
            }
        }
        false
    }

    pub fn has_function(&self, name: &str) -> bool {
        self.functions.contains_key(name)
    }

    pub fn get_constant(&self, name: &str) -> Option<(ExpressionSignature, usize)> {
        for key in self.constants.keys() {
            let mut iterator = key.iter();
            if iterator.any(|s| s == name) {
                return Some((self.constants[key].clone(), iterator.position(|s| s == name).unwrap()));
            }
        }

        None
    }
    
    pub fn get_function(&self, name: &str) -> Option<FuncSignature> {
        if !self.has_function(name) { return None; }
        Some(self.functions[name].clone())
    }
}
