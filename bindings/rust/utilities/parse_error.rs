use thiserror::Error;

#[derive(Error, Debug)]
pub enum ParsingError {
    #[error("Error loading language")]
    LoadLang,
    
    #[error("Failed to create abstract syntax tree")]
    CreateTree,
    
    #[error("`{0}` is not a statement")]
    NotAStatement(String),

    #[error("`{0}` is not a valid instruction expression")]
    NotValidInstructionExpression(String),
    
    #[error("Operation argument `{0}` is not following an instruction")]
    NoOperation(String)
}