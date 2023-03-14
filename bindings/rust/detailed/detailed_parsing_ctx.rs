use std::collections::HashMap;
use crate::data::context::ExpressionSignature;
use crate::data::expression::instruction_expression::InstructionExpression;
use crate::data::instructions::types::OperationType;

#[derive(Debug, Clone, Eq, PartialEq)]
pub struct DetailedExpressionSignature {
    pub signature: ExpressionSignature,
    pub line_index: usize,
}

#[derive(Debug, Clone, Eq, PartialEq)]
pub struct DetailedFuncSignature {
    pub parameters: Vec<String>,
    pub evaluation: DetailedExpressionSignature,
}

#[derive(Debug, Clone, Eq, PartialEq)]
pub struct DetailedInstruction {
    pub operation_type: OperationType,
    pub expression: (InstructionExpression, usize),
    pub arguments: HashMap<String, (InstructionExpression, usize)>,
}

#[derive(Debug, Clone, Eq, PartialEq)]
pub struct DetailedBeanieParsingContext {
    pub constants: HashMap<Vec<String>, DetailedExpressionSignature>,
    pub functions: HashMap<String, DetailedFuncSignature>,
    pub inputs: Vec<ExpressionSignature>,
    pub instructions: Vec<DetailedInstruction>,
}
