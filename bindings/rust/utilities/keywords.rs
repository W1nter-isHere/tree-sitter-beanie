pub const AS: &str = "as";

pub mod types {
    pub const DECIMAL: &str = "decimal";
    pub const IMAGINARY_DECIMAL: &str = "idecimal";
    pub const COMPLEX: &str = "complex";
    pub const FRACTION: &str = "frac";
    pub const IMAGINARY_FRACTION: &str = "ifrac";
    pub const IRRATIONAL: &str = "irrational";
}

pub mod instructions {
    pub const PRINT: &str = "print";
    pub const GRAPH: &str = "graph";
    pub const USE: &str = "use";
    pub const IN: &str = "in";
    pub const OUT: &str = "out";
}

#[allow(dead_code)]
pub(crate) mod tokens {
    pub const SOURCE: &str = "source";
    
    pub const IDENTIFIER: &str = "identifier";
    pub const FILE_PATH: &str = "file_path";
    pub const STRING: &str = "string";
    pub const BOOLEAN: &str = "boolean";
    pub const DATA_TYPE: &str = "data_types";
    
    pub const NATURAL_NUMBERS: &str = "natural_numbers";
    pub const INTEGERS: &str = "integers";
    pub const RATIONALS: &str = "rationals";
    pub const DECIMALS: &str = "decimals";
    
    pub const FUNCTION_CALL: &str = "function_call_expression";
    pub const BRACKET_EXPRESSION: &str = "bracket_expression";
    pub const BINARY_EXPRESSION: &str = "binary_expression";
    pub const MATH_EXPRESSION: &str = "math_expression";
    
    pub const FUNCTION_DECLARATION: &str = "function_declaration";
    pub const CONST_DECLARATION: &str = "const_declaration";
    
    pub const INSTRUCTION_ARGUMENT: &str = "instruction_argument";
    pub const INSTRUCTION: &str = "instruction";
    pub const OPERATION: &str = "operation";
}