use std::collections::HashMap;
use lazy_static::lazy_static;
use maplit::hashmap;
use crate::data::expression::expression_type::ExpressionType;

pub const OUT_TO_FILE: &str = "output_to_file";
pub const OUT_FILE: &str = "output_file";

lazy_static! {
    pub static ref OUT_ARGUMENTS: HashMap<String, ExpressionType> = hashmap!{
        String::from(OUT_TO_FILE) => ExpressionType::Boolean,
        String::from(OUT_FILE) => ExpressionType::FilePath,
    };
}