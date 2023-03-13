module.exports = grammar({
    name: 'beanie',

    rules: {
        // SOURCE
        source: $ => repeat($._statements),
        _statements: $ => seq(
            choice(
                prec(4, $.instruction),
                prec(3, $.instruction_argument),
                prec(2, $.function_declaration),
                prec(1, $.const_declaration),
            ),
            optional("\n"),
        ),

        // SPECIFICS
        identifier: $ => /[a-zA-Z][a-zA-Z0-9_]*/,
        file_path: $ => /(?:\/?[\w-]+)*\/?[\w-]+\.\w+/,
        string: $ => /".*?"/,
        boolean: $ => choice("true", "false"),
        data_types: $ => choice("decimal", "idecimal", "complex", "frac", "ifrac", "irrational"),

        natural_numbers: $ => /\d+/,
        integers: $ => seq(optional("-"), $.natural_numbers),
        rationals: $ => seq($.integers, "/", $.integers),
        decimals: $ => seq($.integers, ".", $.natural_numbers),
        _real_numbers: $ => choice(
            prec(3, $.decimals),
            prec(2, $.rationals),
            prec(1, $.integers),
        ),

        _comma_separated_math_expressions: $ => seq(
            $.math_expression,
            optional(seq(",", $._comma_separated_math_expressions))
        ),
        function_call_expression: $ => seq(
            $.identifier,
            "(",
            $._comma_separated_math_expressions,
            ")"
        ),
        bracket_expression: $ => seq(
            "(",
            $.math_expression,
            ")",
        ),
        binary_expression: $ => prec.left(seq(
            field("left", $.math_expression),
            choice(
                prec(6, "^"),
                prec(5, "/"),
                prec(4, "%"),
                prec(3, "*"),
                prec(2, "-"),
                prec(1, "+"),
            ),
            field("right", $.math_expression),
        )),
        math_expression: $ => prec.left(seq(
            field("math", choice(
                prec(4, $.bracket_expression), 
                prec(3, $.function_call_expression), 
                prec(2, $.binary_expression), 
                prec(1, choice($.identifier, $._real_numbers))
            )),
            optional(seq("as", field("data_type", $.data_types))),
        )),

        // DECLARATIONS
        _comma_separated_identifiers: $ => seq(
            field("identifier", $.identifier),
            optional(seq(",", $._comma_separated_identifiers))
        ),

        function_declaration: $ => seq(
            field("function_name", $.identifier),
            "(",
            $._comma_separated_identifiers,
            ")",
            "=",
            field("evaluation", $.math_expression),
        ),
        const_declaration: $ => seq(
            $._comma_separated_identifiers,
            "=",
            field("evaluation", $.math_expression), 
        ),

        // INSTRUCTION
        instruction_argument: $ => seq(
            field("argument_name", $.identifier),
            ":",
            field("argument_value", choice(
                prec(4, $.math_expression),
                prec(3, $.file_path),
                prec(2, $.boolean),
                prec(1, $.string),
            )),
        ),
        instruction: $ => seq(
            field("operation", $.operation),
            field("operand", choice(
                prec(2, $.math_expression),
                prec(1, $.file_path),
            ))
        ),
        operation: $ => choice("in", "out", "print", "graph", "use"),

        // SPECIAL
        word: $ => $.identifier
    }
});
