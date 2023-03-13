use std::collections::HashMap;
use std::str::FromStr;
use crate::data::expression::expression_type::ExpressionType;
use crate::data::instructions::{graph_operation_args, out_operation_args};
use crate::utilities::keywords;

#[derive(Debug, Clone, Eq, PartialEq)]
pub enum OperationType {
    Use,
    In,
    Out,
    Graph,
    Print,
}

impl OperationType {
    pub fn get_possible_arguments(&self) -> Option<HashMap<String, ExpressionType>> {
        match self {
            OperationType::Use => None, 
            OperationType::In => None,
            OperationType::Out => Some(out_operation_args::OUT_ARGUMENTS.clone()),
            OperationType::Graph => Some(graph_operation_args::GRAPH_ARGUMENTS.clone()), 
            OperationType::Print => None,
        }
    }
}

impl FromStr for OperationType {
    type Err = ();

    fn from_str(s: &str) -> Result<Self, Self::Err> {
        match s {
            keywords::instructions::USE => Ok(OperationType::Use),
            keywords::instructions::IN => Ok(OperationType::In),
            keywords::instructions::OUT => Ok(OperationType::Out),
            keywords::instructions::GRAPH => Ok(OperationType::Graph),
            keywords::instructions::PRINT => Ok(OperationType::Print),
            _ => unreachable!()
        }
    }
}
