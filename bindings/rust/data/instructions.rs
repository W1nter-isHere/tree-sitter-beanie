use std::collections::HashMap;
use crate::data::expression::instruction_expression::InstructionExpression;
use crate::data::instructions::types::OperationType;

pub mod graph_operation_args;
pub mod out_operation_args;
pub mod types;

#[derive(Debug, Clone, Eq, PartialEq)]
pub struct Instruction {
    pub operation_type: OperationType,
    pub expression: InstructionExpression,
    pub arguments: HashMap<String, InstructionExpression>,
}
