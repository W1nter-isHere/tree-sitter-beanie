/*

in h 

f(x) = x * 2
x = 10 + 2 * 6^2

print f(h) * x

 */

module.exports = grammar({
    name: 'beanie',

    rules: {
        // SPECIAL
        word: $ => $.identifier,

        // SPECIFICS
        identifier: $ => /[a-zA-Z][a-zA-Z0-9_]*/,
        file_path: $ => /(?:\/?[\w-]+)*\/?[\w-]+\.\w+/,
        string: $ => /[a-zA-Z0-9,.!?;:'"()\[\]{}<>\/\\\-+*=_%&@#$€£¥₹₽₱₩₪₨]+/,
        boolean: $ => choice("true", "false"),

        natural_numbers: $ => /\d/,
        integers: $ => seq(optional("-"), $.natural_numbers),
        rationals: $ => seq($.integers, "/", $.integers),
        decimals: $ => seq($.integers, ".", $.natural_numbers),
        _real_numbers: $ => choice(
            $.decimals,
            $.rationals,
            $.integers,
        ),

        function_call_expression: $ => seq(
            $.identifier,
            "(",
            $.math_expression,
            ")"
        ),
        bracket_expression: $ => seq(
            "(",
            $.math_expression,
            ")",
        ),
        binary_expression: $ => choice (
            prec.left(3, seq($.math_expression, "^", $.math_expression)),
            prec.left(2, seq($.math_expression, "*", $.math_expression)),
            prec.left(2, seq($.math_expression, "/", $.math_expression)),
            prec.left(2, seq($.math_expression, "%", $.math_expression)),
            prec.left(1, seq($.math_expression, "+", $.math_expression)),
            prec.left(1, seq($.math_expression, "-", $.math_expression)),
        ),
        math_expression: $ => choice(
            prec(4, $.bracket_expression),
            prec(3, $.function_call_expression),
            prec(2, $.binary_expression),
            prec(1, choice($.identifier, $._real_numbers))
        ),
        
        // STATEMENTS
        statements: $ => seq(
            choice(
                prec(4, $.instruction),
                prec(3, $.instruction_argument),
                prec(2, $.function_declaration),
                prec(1, $.const_declaration),
            ),
            optional("\n"),
        ),
        
        // INSTRUCTION
        instruction_argument: $ => seq(
            field("argument_name", $.identifier),
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
        
        function_declaration: $ => seq(
            field("function_name", $.identifier),
            "(",
            field("parameters", seq(
                $.identifier,
                optional(seq(",", $.identifier)),
            )),
            ")",
            "=",
            field("evaluation", $.math_expression),
        ),
        const_declaration: $ => seq(
            $.identifier,
            "=",
            $.math_expression
        )
    }
});
