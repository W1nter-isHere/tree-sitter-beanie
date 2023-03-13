use std::collections::HashMap;
use lazy_static::lazy_static;
use maplit::hashmap;
use crate::data::expression::expression_type::ExpressionType;

pub const MIN_X: &str = "MIN_X";
pub const MIN_Y: &str = "MIN_Y";
pub const MAX_X: &str = "MAX_X";
pub const MAX_Y: &str = "MAX_Y";
pub const STEP_X: &str = "STEP_X";
pub const STEP_Y: &str = "STEP_Y";
pub const TITLE: &str = "TITLE";
pub const LABEL_X: &str = "LABEL_X";
pub const LABEL_Y: &str = "LABEL_Y";

lazy_static! {
    pub static ref GRAPH_ARGUMENTS: HashMap<String, ExpressionType> = hashmap!{
        String::from(MIN_X) => ExpressionType::MathExpression,
        String::from(MIN_Y) => ExpressionType::MathExpression,
        String::from(MAX_X) => ExpressionType::MathExpression,
        String::from(MAX_Y) => ExpressionType::MathExpression,
        String::from(STEP_X) => ExpressionType::MathExpression,
        String::from(STEP_Y) => ExpressionType::MathExpression,
        String::from(TITLE) => ExpressionType::String,
        String::from(LABEL_X) => ExpressionType::String,
        String::from(LABEL_Y) => ExpressionType::String,
    };
}