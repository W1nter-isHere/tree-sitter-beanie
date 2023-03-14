use std::collections::HashMap;
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

#[derive(Debug, Clone, Eq, PartialEq)]
pub struct BeanieParsingContext {
    pub constants: HashMap<Vec<String>, ExpressionSignature>,
    pub functions: HashMap<String, FuncSignature>,
    pub instructions: Vec<Instruction>,
    pub inputs: Vec<ExpressionSignature>,
}