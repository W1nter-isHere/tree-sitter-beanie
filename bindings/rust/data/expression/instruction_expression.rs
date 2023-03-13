use crate::data::context::ExpressionSignature;
use crate::data::expression::expression_type::ExpressionType;

#[derive(Clone, Debug, Eq, PartialEq)]
pub enum InstructionExpression {
    Math(ExpressionSignature),
    FilePath(String),
    Boolean(bool),
    String(String),
}

impl InstructionExpression {
    pub fn get_expression_type(&self) -> ExpressionType {
        match self {
            InstructionExpression::Math(_) => ExpressionType::MathExpression,
            InstructionExpression::FilePath(_) => ExpressionType::FilePath,
            InstructionExpression::Boolean(_) => ExpressionType::Boolean,
            InstructionExpression::String(_) => ExpressionType::String,
        }
    }
}