#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 78
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 52
#define ALIAS_COUNT 0
#define TOKEN_COUNT 32
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 11
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 10

enum {
  anon_sym_LF = 1,
  sym_identifier = 2,
  sym_file_path = 3,
  sym_string = 4,
  anon_sym_true = 5,
  anon_sym_false = 6,
  anon_sym_decimal = 7,
  anon_sym_idecimal = 8,
  anon_sym_complex = 9,
  anon_sym_frac = 10,
  anon_sym_ifrac = 11,
  anon_sym_irrational = 12,
  sym_natural_numbers = 13,
  anon_sym_DASH = 14,
  anon_sym_SLASH = 15,
  anon_sym_DOT = 16,
  anon_sym_COMMA = 17,
  anon_sym_LPAREN = 18,
  anon_sym_RPAREN = 19,
  anon_sym_CARET = 20,
  anon_sym_PERCENT = 21,
  anon_sym_STAR = 22,
  anon_sym_PLUS = 23,
  anon_sym_as = 24,
  anon_sym_EQ = 25,
  anon_sym_COLON = 26,
  anon_sym_in = 27,
  anon_sym_out = 28,
  anon_sym_print = 29,
  anon_sym_graph = 30,
  anon_sym_use = 31,
  sym_source = 32,
  sym__statements = 33,
  sym_boolean = 34,
  sym_data_types = 35,
  sym_integers = 36,
  sym_rationals = 37,
  sym_decimals = 38,
  sym__real_numbers = 39,
  sym__comma_separated_math_expressions = 40,
  sym_function_call_expression = 41,
  sym_bracket_expression = 42,
  sym_binary_expression = 43,
  sym_math_expression = 44,
  sym__comma_separated_identifiers = 45,
  sym_function_declaration = 46,
  sym_const_declaration = 47,
  sym_instruction_argument = 48,
  sym_instruction = 49,
  sym_operation = 50,
  aux_sym_source_repeat1 = 51,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [sym_identifier] = "identifier",
  [sym_file_path] = "file_path",
  [sym_string] = "string",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_decimal] = "decimal",
  [anon_sym_idecimal] = "idecimal",
  [anon_sym_complex] = "complex",
  [anon_sym_frac] = "frac",
  [anon_sym_ifrac] = "ifrac",
  [anon_sym_irrational] = "irrational",
  [sym_natural_numbers] = "natural_numbers",
  [anon_sym_DASH] = "-",
  [anon_sym_SLASH] = "/",
  [anon_sym_DOT] = ".",
  [anon_sym_COMMA] = ",",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_CARET] = "^",
  [anon_sym_PERCENT] = "%",
  [anon_sym_STAR] = "*",
  [anon_sym_PLUS] = "+",
  [anon_sym_as] = "as",
  [anon_sym_EQ] = "=",
  [anon_sym_COLON] = ":",
  [anon_sym_in] = "in",
  [anon_sym_out] = "out",
  [anon_sym_print] = "print",
  [anon_sym_graph] = "graph",
  [anon_sym_use] = "use",
  [sym_source] = "source",
  [sym__statements] = "_statements",
  [sym_boolean] = "boolean",
  [sym_data_types] = "data_types",
  [sym_integers] = "integers",
  [sym_rationals] = "rationals",
  [sym_decimals] = "decimals",
  [sym__real_numbers] = "_real_numbers",
  [sym__comma_separated_math_expressions] = "_comma_separated_math_expressions",
  [sym_function_call_expression] = "function_call_expression",
  [sym_bracket_expression] = "bracket_expression",
  [sym_binary_expression] = "binary_expression",
  [sym_math_expression] = "math_expression",
  [sym__comma_separated_identifiers] = "_comma_separated_identifiers",
  [sym_function_declaration] = "function_declaration",
  [sym_const_declaration] = "const_declaration",
  [sym_instruction_argument] = "instruction_argument",
  [sym_instruction] = "instruction",
  [sym_operation] = "operation",
  [aux_sym_source_repeat1] = "source_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LF] = anon_sym_LF,
  [sym_identifier] = sym_identifier,
  [sym_file_path] = sym_file_path,
  [sym_string] = sym_string,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_decimal] = anon_sym_decimal,
  [anon_sym_idecimal] = anon_sym_idecimal,
  [anon_sym_complex] = anon_sym_complex,
  [anon_sym_frac] = anon_sym_frac,
  [anon_sym_ifrac] = anon_sym_ifrac,
  [anon_sym_irrational] = anon_sym_irrational,
  [sym_natural_numbers] = sym_natural_numbers,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_as] = anon_sym_as,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_in] = anon_sym_in,
  [anon_sym_out] = anon_sym_out,
  [anon_sym_print] = anon_sym_print,
  [anon_sym_graph] = anon_sym_graph,
  [anon_sym_use] = anon_sym_use,
  [sym_source] = sym_source,
  [sym__statements] = sym__statements,
  [sym_boolean] = sym_boolean,
  [sym_data_types] = sym_data_types,
  [sym_integers] = sym_integers,
  [sym_rationals] = sym_rationals,
  [sym_decimals] = sym_decimals,
  [sym__real_numbers] = sym__real_numbers,
  [sym__comma_separated_math_expressions] = sym__comma_separated_math_expressions,
  [sym_function_call_expression] = sym_function_call_expression,
  [sym_bracket_expression] = sym_bracket_expression,
  [sym_binary_expression] = sym_binary_expression,
  [sym_math_expression] = sym_math_expression,
  [sym__comma_separated_identifiers] = sym__comma_separated_identifiers,
  [sym_function_declaration] = sym_function_declaration,
  [sym_const_declaration] = sym_const_declaration,
  [sym_instruction_argument] = sym_instruction_argument,
  [sym_instruction] = sym_instruction,
  [sym_operation] = sym_operation,
  [aux_sym_source_repeat1] = aux_sym_source_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_file_path] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_decimal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_idecimal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_complex] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_frac] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ifrac] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_irrational] = {
    .visible = true,
    .named = false,
  },
  [sym_natural_numbers] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_as] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_in] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_out] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_print] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_graph] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_use] = {
    .visible = true,
    .named = false,
  },
  [sym_source] = {
    .visible = true,
    .named = true,
  },
  [sym__statements] = {
    .visible = false,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym_data_types] = {
    .visible = true,
    .named = true,
  },
  [sym_integers] = {
    .visible = true,
    .named = true,
  },
  [sym_rationals] = {
    .visible = true,
    .named = true,
  },
  [sym_decimals] = {
    .visible = true,
    .named = true,
  },
  [sym__real_numbers] = {
    .visible = false,
    .named = true,
  },
  [sym__comma_separated_math_expressions] = {
    .visible = false,
    .named = true,
  },
  [sym_function_call_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_bracket_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_math_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__comma_separated_identifiers] = {
    .visible = false,
    .named = true,
  },
  [sym_function_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_const_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_instruction_argument] = {
    .visible = true,
    .named = true,
  },
  [sym_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_operation] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_argument_name = 1,
  field_argument_value = 2,
  field_data_type = 3,
  field_evaluation = 4,
  field_function_name = 5,
  field_identifier = 6,
  field_left = 7,
  field_math = 8,
  field_operand = 9,
  field_operation = 10,
  field_right = 11,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_argument_name] = "argument_name",
  [field_argument_value] = "argument_value",
  [field_data_type] = "data_type",
  [field_evaluation] = "evaluation",
  [field_function_name] = "function_name",
  [field_identifier] = "identifier",
  [field_left] = "left",
  [field_math] = "math",
  [field_operand] = "operand",
  [field_operation] = "operation",
  [field_right] = "right",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
  [4] = {.index = 4, .length = 2},
  [5] = {.index = 6, .length = 2},
  [6] = {.index = 8, .length = 2},
  [7] = {.index = 10, .length = 2},
  [8] = {.index = 12, .length = 2},
  [9] = {.index = 14, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_identifier, 0},
  [1] =
    {field_math, 0},
  [2] =
    {field_operand, 1},
    {field_operation, 0},
  [4] =
    {field_identifier, 0},
    {field_identifier, 2, .inherited = true},
  [6] =
    {field_argument_name, 0},
    {field_argument_value, 2},
  [8] =
    {field_evaluation, 2},
    {field_identifier, 0, .inherited = true},
  [10] =
    {field_data_type, 2},
    {field_math, 0},
  [12] =
    {field_left, 0},
    {field_right, 2},
  [14] =
    {field_evaluation, 5},
    {field_function_name, 0},
    {field_identifier, 2, .inherited = true},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 5,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 9,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 18,
  [22] = 22,
  [23] = 23,
  [24] = 10,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 26,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 32,
  [34] = 29,
  [35] = 3,
  [36] = 7,
  [37] = 5,
  [38] = 4,
  [39] = 5,
  [40] = 9,
  [41] = 16,
  [42] = 15,
  [43] = 14,
  [44] = 13,
  [45] = 12,
  [46] = 18,
  [47] = 10,
  [48] = 9,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 58,
  [60] = 57,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 70,
  [75] = 67,
  [76] = 72,
  [77] = 77,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(63);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '%') ADVANCE(110);
      if (lookahead == '(') ADVANCE(107);
      if (lookahead == ')') ADVANCE(108);
      if (lookahead == '*') ADVANCE(111);
      if (lookahead == '+') ADVANCE(112);
      if (lookahead == ',') ADVANCE(106);
      if (lookahead == '-') ADVANCE(102);
      if (lookahead == '.') ADVANCE(105);
      if (lookahead == '/') ADVANCE(104);
      if (lookahead == ':') ADVANCE(116);
      if (lookahead == '=') ADVANCE(115);
      if (lookahead == '^') ADVANCE(109);
      if (lookahead == 'a') ADVANCE(49);
      if (lookahead == 'c') ADVANCE(40);
      if (lookahead == 'd') ADVANCE(19);
      if (lookahead == 'f') ADVANCE(6);
      if (lookahead == 'g') ADVANCE(46);
      if (lookahead == 'i') ADVANCE(18);
      if (lookahead == 'o') ADVANCE(55);
      if (lookahead == 'p') ADVANCE(44);
      if (lookahead == 't') ADVANCE(45);
      if (lookahead == 'u') ADVANCE(50);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(101);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '(') ADVANCE(107);
      if (lookahead == '-') ADVANCE(103);
      if (lookahead == '/') ADVANCE(59);
      if (lookahead == '_') ADVANCE(5);
      if (lookahead == 'f') ADVANCE(65);
      if (lookahead == 't') ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(100);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(89);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '(') ADVANCE(107);
      if (lookahead == '-') ADVANCE(102);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 4:
      if (lookahead == '(') ADVANCE(107);
      if (lookahead == '-') ADVANCE(103);
      if (lookahead == '/') ADVANCE(59);
      if (lookahead == '_') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(100);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 5:
      if (lookahead == '.') ADVANCE(58);
      if (lookahead == '/') ADVANCE(59);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(34);
      if (lookahead == 'r') ADVANCE(7);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(14);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(54);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(42);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(15);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(30);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(31);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(32);
      END_STATE();
    case 14:
      if (lookahead == 'c') ADVANCE(97);
      END_STATE();
    case 15:
      if (lookahead == 'c') ADVANCE(98);
      END_STATE();
    case 16:
      if (lookahead == 'c') ADVANCE(28);
      END_STATE();
    case 17:
      if (lookahead == 'c') ADVANCE(29);
      END_STATE();
    case 18:
      if (lookahead == 'd') ADVANCE(24);
      if (lookahead == 'f') ADVANCE(48);
      if (lookahead == 'n') ADVANCE(117);
      if (lookahead == 'r') ADVANCE(47);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(16);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(125);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(90);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(92);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(17);
      END_STATE();
    case 25:
      if (lookahead == 'h') ADVANCE(123);
      END_STATE();
    case 26:
      if (lookahead == 'i') ADVANCE(38);
      END_STATE();
    case 27:
      if (lookahead == 'i') ADVANCE(41);
      END_STATE();
    case 28:
      if (lookahead == 'i') ADVANCE(36);
      END_STATE();
    case 29:
      if (lookahead == 'i') ADVANCE(37);
      END_STATE();
    case 30:
      if (lookahead == 'l') ADVANCE(94);
      END_STATE();
    case 31:
      if (lookahead == 'l') ADVANCE(95);
      END_STATE();
    case 32:
      if (lookahead == 'l') ADVANCE(99);
      END_STATE();
    case 33:
      if (lookahead == 'l') ADVANCE(23);
      END_STATE();
    case 34:
      if (lookahead == 'l') ADVANCE(51);
      END_STATE();
    case 35:
      if (lookahead == 'm') ADVANCE(43);
      END_STATE();
    case 36:
      if (lookahead == 'm') ADVANCE(11);
      END_STATE();
    case 37:
      if (lookahead == 'm') ADVANCE(12);
      END_STATE();
    case 38:
      if (lookahead == 'n') ADVANCE(53);
      END_STATE();
    case 39:
      if (lookahead == 'n') ADVANCE(13);
      END_STATE();
    case 40:
      if (lookahead == 'o') ADVANCE(35);
      END_STATE();
    case 41:
      if (lookahead == 'o') ADVANCE(39);
      END_STATE();
    case 42:
      if (lookahead == 'p') ADVANCE(25);
      END_STATE();
    case 43:
      if (lookahead == 'p') ADVANCE(33);
      END_STATE();
    case 44:
      if (lookahead == 'r') ADVANCE(26);
      END_STATE();
    case 45:
      if (lookahead == 'r') ADVANCE(56);
      END_STATE();
    case 46:
      if (lookahead == 'r') ADVANCE(9);
      END_STATE();
    case 47:
      if (lookahead == 'r') ADVANCE(8);
      END_STATE();
    case 48:
      if (lookahead == 'r') ADVANCE(10);
      END_STATE();
    case 49:
      if (lookahead == 's') ADVANCE(113);
      END_STATE();
    case 50:
      if (lookahead == 's') ADVANCE(20);
      END_STATE();
    case 51:
      if (lookahead == 's') ADVANCE(22);
      END_STATE();
    case 52:
      if (lookahead == 't') ADVANCE(119);
      END_STATE();
    case 53:
      if (lookahead == 't') ADVANCE(121);
      END_STATE();
    case 54:
      if (lookahead == 't') ADVANCE(27);
      END_STATE();
    case 55:
      if (lookahead == 'u') ADVANCE(52);
      END_STATE();
    case 56:
      if (lookahead == 'u') ADVANCE(21);
      END_STATE();
    case 57:
      if (lookahead == 'x') ADVANCE(96);
      END_STATE();
    case 58:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 59:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(5);
      END_STATE();
    case 60:
      if (eof) ADVANCE(63);
      if (lookahead == '\n') ADVANCE(64);
      if (lookahead == '%') ADVANCE(110);
      if (lookahead == '(') ADVANCE(107);
      if (lookahead == '*') ADVANCE(111);
      if (lookahead == '+') ADVANCE(112);
      if (lookahead == '-') ADVANCE(102);
      if (lookahead == '.') ADVANCE(105);
      if (lookahead == '/') ADVANCE(104);
      if (lookahead == '^') ADVANCE(109);
      if (lookahead == 'a') ADVANCE(83);
      if (lookahead == 'g') ADVANCE(80);
      if (lookahead == 'i') ADVANCE(77);
      if (lookahead == 'o') ADVANCE(86);
      if (lookahead == 'p') ADVANCE(81);
      if (lookahead == 'u') ADVANCE(82);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(60)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 61:
      if (eof) ADVANCE(63);
      if (lookahead == '\n') ADVANCE(64);
      if (lookahead == '%') ADVANCE(110);
      if (lookahead == '*') ADVANCE(111);
      if (lookahead == '+') ADVANCE(112);
      if (lookahead == '-') ADVANCE(102);
      if (lookahead == '/') ADVANCE(104);
      if (lookahead == '^') ADVANCE(109);
      if (lookahead == 'g') ADVANCE(80);
      if (lookahead == 'i') ADVANCE(77);
      if (lookahead == 'o') ADVANCE(86);
      if (lookahead == 'p') ADVANCE(81);
      if (lookahead == 'u') ADVANCE(82);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(61)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 62:
      if (eof) ADVANCE(63);
      if (lookahead == 'g') ADVANCE(80);
      if (lookahead == 'i') ADVANCE(77);
      if (lookahead == 'o') ADVANCE(86);
      if (lookahead == 'p') ADVANCE(81);
      if (lookahead == 'u') ADVANCE(82);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(62)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(64);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == '.') ADVANCE(58);
      if (lookahead == '/') ADVANCE(59);
      if (lookahead == 'a') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == '.') ADVANCE(58);
      if (lookahead == '/') ADVANCE(59);
      if (lookahead == 'e') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == '.') ADVANCE(58);
      if (lookahead == '/') ADVANCE(59);
      if (lookahead == 'e') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == '.') ADVANCE(58);
      if (lookahead == '/') ADVANCE(59);
      if (lookahead == 'l') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == '.') ADVANCE(58);
      if (lookahead == '/') ADVANCE(59);
      if (lookahead == 'r') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == '.') ADVANCE(58);
      if (lookahead == '/') ADVANCE(59);
      if (lookahead == 's') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == '.') ADVANCE(58);
      if (lookahead == '/') ADVANCE(59);
      if (lookahead == 'u') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == '.') ADVANCE(58);
      if (lookahead == '/') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_file_path);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(89);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == '.') ADVANCE(58);
      if (lookahead == '/') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == '.') ADVANCE(58);
      if (lookahead == '/') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_decimal);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_idecimal);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_complex);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_frac);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_ifrac);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_irrational);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_natural_numbers);
      if (lookahead == '.') ADVANCE(58);
      if (lookahead == '/') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(100);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(5);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_natural_numbers);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(101);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '.') ADVANCE(58);
      if (lookahead == '/') ADVANCE(59);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(5);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_as);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_in);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_out);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_out);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_print);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_print);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_graph);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_graph);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_use);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_use);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 62},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 60},
  [4] = {.lex_state = 60},
  [5] = {.lex_state = 60},
  [6] = {.lex_state = 60},
  [7] = {.lex_state = 60},
  [8] = {.lex_state = 62},
  [9] = {.lex_state = 60},
  [10] = {.lex_state = 60},
  [11] = {.lex_state = 60},
  [12] = {.lex_state = 60},
  [13] = {.lex_state = 60},
  [14] = {.lex_state = 60},
  [15] = {.lex_state = 60},
  [16] = {.lex_state = 60},
  [17] = {.lex_state = 62},
  [18] = {.lex_state = 60},
  [19] = {.lex_state = 61},
  [20] = {.lex_state = 61},
  [21] = {.lex_state = 61},
  [22] = {.lex_state = 61},
  [23] = {.lex_state = 61},
  [24] = {.lex_state = 61},
  [25] = {.lex_state = 4},
  [26] = {.lex_state = 3},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 3},
  [29] = {.lex_state = 3},
  [30] = {.lex_state = 3},
  [31] = {.lex_state = 3},
  [32] = {.lex_state = 3},
  [33] = {.lex_state = 3},
  [34] = {.lex_state = 3},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 61},
  [50] = {.lex_state = 61},
  [51] = {.lex_state = 61},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 61},
  [54] = {.lex_state = 61},
  [55] = {.lex_state = 61},
  [56] = {.lex_state = 62},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 4},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 3},
  [65] = {.lex_state = 3},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_decimal] = ACTIONS(1),
    [anon_sym_idecimal] = ACTIONS(1),
    [anon_sym_complex] = ACTIONS(1),
    [anon_sym_frac] = ACTIONS(1),
    [anon_sym_ifrac] = ACTIONS(1),
    [anon_sym_irrational] = ACTIONS(1),
    [sym_natural_numbers] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_as] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_out] = ACTIONS(1),
    [anon_sym_print] = ACTIONS(1),
    [anon_sym_graph] = ACTIONS(1),
    [anon_sym_use] = ACTIONS(1),
  },
  [1] = {
    [sym_source] = STATE(77),
    [sym__statements] = STATE(8),
    [sym__comma_separated_identifiers] = STATE(71),
    [sym_function_declaration] = STATE(51),
    [sym_const_declaration] = STATE(51),
    [sym_instruction_argument] = STATE(51),
    [sym_instruction] = STATE(51),
    [sym_operation] = STATE(25),
    [aux_sym_source_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_identifier] = ACTIONS(5),
    [anon_sym_in] = ACTIONS(7),
    [anon_sym_out] = ACTIONS(7),
    [anon_sym_print] = ACTIONS(7),
    [anon_sym_graph] = ACTIONS(7),
    [anon_sym_use] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 11,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(11), 1,
      sym_file_path,
    ACTIONS(13), 1,
      sym_string,
    ACTIONS(17), 1,
      sym_natural_numbers,
    ACTIONS(19), 1,
      anon_sym_DASH,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    STATE(4), 1,
      sym_integers,
    STATE(22), 1,
      sym_math_expression,
    STATE(53), 1,
      sym_boolean,
    ACTIONS(15), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(9), 6,
      sym_rationals,
      sym_decimals,
      sym__real_numbers,
      sym_function_call_expression,
      sym_bracket_expression,
      sym_binary_expression,
  [40] = 2,
    ACTIONS(23), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(25), 14,
      sym_identifier,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym_CARET,
      anon_sym_PERCENT,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_as,
      anon_sym_in,
      anon_sym_out,
      anon_sym_print,
      anon_sym_graph,
      anon_sym_use,
  [61] = 3,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(27), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(29), 13,
      sym_identifier,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_CARET,
      anon_sym_PERCENT,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_as,
      anon_sym_in,
      anon_sym_out,
      anon_sym_print,
      anon_sym_graph,
      anon_sym_use,
  [84] = 3,
    ACTIONS(37), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(35), 13,
      sym_identifier,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_CARET,
      anon_sym_PERCENT,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_as,
      anon_sym_in,
      anon_sym_out,
      anon_sym_print,
      anon_sym_graph,
      anon_sym_use,
  [107] = 4,
    ACTIONS(37), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      anon_sym_as,
    ACTIONS(33), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(35), 12,
      sym_identifier,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_CARET,
      anon_sym_PERCENT,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_in,
      anon_sym_out,
      anon_sym_print,
      anon_sym_graph,
      anon_sym_use,
  [132] = 2,
    ACTIONS(41), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(43), 14,
      sym_identifier,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym_CARET,
      anon_sym_PERCENT,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_as,
      anon_sym_in,
      anon_sym_out,
      anon_sym_print,
      anon_sym_graph,
      anon_sym_use,
  [153] = 7,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(45), 1,
      ts_builtin_sym_end,
    STATE(25), 1,
      sym_operation,
    STATE(71), 1,
      sym__comma_separated_identifiers,
    STATE(17), 2,
      sym__statements,
      aux_sym_source_repeat1,
    STATE(51), 4,
      sym_function_declaration,
      sym_const_declaration,
      sym_instruction_argument,
      sym_instruction,
    ACTIONS(7), 5,
      anon_sym_in,
      anon_sym_out,
      anon_sym_print,
      anon_sym_graph,
      anon_sym_use,
  [183] = 3,
    ACTIONS(39), 1,
      anon_sym_as,
    ACTIONS(33), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(35), 12,
      sym_identifier,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_CARET,
      anon_sym_PERCENT,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_in,
      anon_sym_out,
      anon_sym_print,
      anon_sym_graph,
      anon_sym_use,
  [205] = 2,
    ACTIONS(47), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(49), 13,
      sym_identifier,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_CARET,
      anon_sym_PERCENT,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_as,
      anon_sym_in,
      anon_sym_out,
      anon_sym_print,
      anon_sym_graph,
      anon_sym_use,
  [225] = 2,
    ACTIONS(33), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(35), 13,
      sym_identifier,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_CARET,
      anon_sym_PERCENT,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_as,
      anon_sym_in,
      anon_sym_out,
      anon_sym_print,
      anon_sym_graph,
      anon_sym_use,
  [245] = 2,
    ACTIONS(51), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(53), 13,
      sym_identifier,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_CARET,
      anon_sym_PERCENT,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_as,
      anon_sym_in,
      anon_sym_out,
      anon_sym_print,
      anon_sym_graph,
      anon_sym_use,
  [265] = 2,
    ACTIONS(55), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(57), 13,
      sym_identifier,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_CARET,
      anon_sym_PERCENT,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_as,
      anon_sym_in,
      anon_sym_out,
      anon_sym_print,
      anon_sym_graph,
      anon_sym_use,
  [285] = 2,
    ACTIONS(59), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(61), 13,
      sym_identifier,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_CARET,
      anon_sym_PERCENT,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_as,
      anon_sym_in,
      anon_sym_out,
      anon_sym_print,
      anon_sym_graph,
      anon_sym_use,
  [305] = 2,
    ACTIONS(63), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(65), 13,
      sym_identifier,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_CARET,
      anon_sym_PERCENT,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_as,
      anon_sym_in,
      anon_sym_out,
      anon_sym_print,
      anon_sym_graph,
      anon_sym_use,
  [325] = 2,
    ACTIONS(67), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(69), 13,
      sym_identifier,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_CARET,
      anon_sym_PERCENT,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_as,
      anon_sym_in,
      anon_sym_out,
      anon_sym_print,
      anon_sym_graph,
      anon_sym_use,
  [345] = 7,
    ACTIONS(71), 1,
      ts_builtin_sym_end,
    ACTIONS(73), 1,
      sym_identifier,
    STATE(25), 1,
      sym_operation,
    STATE(71), 1,
      sym__comma_separated_identifiers,
    STATE(17), 2,
      sym__statements,
      aux_sym_source_repeat1,
    STATE(51), 4,
      sym_function_declaration,
      sym_const_declaration,
      sym_instruction_argument,
      sym_instruction,
    ACTIONS(76), 5,
      anon_sym_in,
      anon_sym_out,
      anon_sym_print,
      anon_sym_graph,
      anon_sym_use,
  [375] = 2,
    ACTIONS(79), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(81), 13,
      sym_identifier,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_CARET,
      anon_sym_PERCENT,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_as,
      anon_sym_in,
      anon_sym_out,
      anon_sym_print,
      anon_sym_graph,
      anon_sym_use,
  [395] = 3,
    ACTIONS(83), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(85), 6,
      sym_identifier,
      anon_sym_in,
      anon_sym_out,
      anon_sym_print,
      anon_sym_graph,
      anon_sym_use,
    ACTIONS(87), 6,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_CARET,
      anon_sym_PERCENT,
      anon_sym_STAR,
      anon_sym_PLUS,
  [416] = 3,
    ACTIONS(89), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(87), 6,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_CARET,
      anon_sym_PERCENT,
      anon_sym_STAR,
      anon_sym_PLUS,
    ACTIONS(91), 6,
      sym_identifier,
      anon_sym_in,
      anon_sym_out,
      anon_sym_print,
      anon_sym_graph,
      anon_sym_use,
  [437] = 2,
    ACTIONS(79), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(81), 12,
      sym_identifier,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_CARET,
      anon_sym_PERCENT,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_in,
      anon_sym_out,
      anon_sym_print,
      anon_sym_graph,
      anon_sym_use,
  [456] = 3,
    ACTIONS(93), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(87), 6,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_CARET,
      anon_sym_PERCENT,
      anon_sym_STAR,
      anon_sym_PLUS,
    ACTIONS(95), 6,
      sym_identifier,
      anon_sym_in,
      anon_sym_out,
      anon_sym_print,
      anon_sym_graph,
      anon_sym_use,
  [477] = 3,
    ACTIONS(97), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(87), 6,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_CARET,
      anon_sym_PERCENT,
      anon_sym_STAR,
      anon_sym_PLUS,
    ACTIONS(99), 6,
      sym_identifier,
      anon_sym_in,
      anon_sym_out,
      anon_sym_print,
      anon_sym_graph,
      anon_sym_use,
  [498] = 2,
    ACTIONS(47), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(49), 12,
      sym_identifier,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_CARET,
      anon_sym_PERCENT,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_in,
      anon_sym_out,
      anon_sym_print,
      anon_sym_graph,
      anon_sym_use,
  [517] = 8,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(17), 1,
      sym_natural_numbers,
    ACTIONS(19), 1,
      anon_sym_DASH,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      sym_file_path,
    STATE(4), 1,
      sym_integers,
    STATE(19), 1,
      sym_math_expression,
    STATE(9), 6,
      sym_rationals,
      sym_decimals,
      sym__real_numbers,
      sym_function_call_expression,
      sym_bracket_expression,
      sym_binary_expression,
  [547] = 8,
    ACTIONS(103), 1,
      sym_identifier,
    ACTIONS(105), 1,
      sym_natural_numbers,
    ACTIONS(107), 1,
      anon_sym_DASH,
    ACTIONS(109), 1,
      anon_sym_LPAREN,
    STATE(38), 1,
      sym_integers,
    STATE(52), 1,
      sym_math_expression,
    STATE(76), 1,
      sym__comma_separated_math_expressions,
    STATE(48), 6,
      sym_rationals,
      sym_decimals,
      sym__real_numbers,
      sym_function_call_expression,
      sym_bracket_expression,
      sym_binary_expression,
  [577] = 8,
    ACTIONS(103), 1,
      sym_identifier,
    ACTIONS(105), 1,
      sym_natural_numbers,
    ACTIONS(107), 1,
      anon_sym_DASH,
    ACTIONS(109), 1,
      anon_sym_LPAREN,
    STATE(38), 1,
      sym_integers,
    STATE(52), 1,
      sym_math_expression,
    STATE(69), 1,
      sym__comma_separated_math_expressions,
    STATE(48), 6,
      sym_rationals,
      sym_decimals,
      sym__real_numbers,
      sym_function_call_expression,
      sym_bracket_expression,
      sym_binary_expression,
  [607] = 8,
    ACTIONS(103), 1,
      sym_identifier,
    ACTIONS(105), 1,
      sym_natural_numbers,
    ACTIONS(107), 1,
      anon_sym_DASH,
    ACTIONS(109), 1,
      anon_sym_LPAREN,
    STATE(38), 1,
      sym_integers,
    STATE(52), 1,
      sym_math_expression,
    STATE(72), 1,
      sym__comma_separated_math_expressions,
    STATE(48), 6,
      sym_rationals,
      sym_decimals,
      sym__real_numbers,
      sym_function_call_expression,
      sym_bracket_expression,
      sym_binary_expression,
  [637] = 7,
    ACTIONS(103), 1,
      sym_identifier,
    ACTIONS(105), 1,
      sym_natural_numbers,
    ACTIONS(107), 1,
      anon_sym_DASH,
    ACTIONS(109), 1,
      anon_sym_LPAREN,
    STATE(38), 1,
      sym_integers,
    STATE(59), 1,
      sym_math_expression,
    STATE(48), 6,
      sym_rationals,
      sym_decimals,
      sym__real_numbers,
      sym_function_call_expression,
      sym_bracket_expression,
      sym_binary_expression,
  [664] = 7,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(111), 1,
      sym_identifier,
    ACTIONS(113), 1,
      sym_natural_numbers,
    ACTIONS(115), 1,
      anon_sym_DASH,
    STATE(4), 1,
      sym_integers,
    STATE(20), 1,
      sym_math_expression,
    STATE(9), 6,
      sym_rationals,
      sym_decimals,
      sym__real_numbers,
      sym_function_call_expression,
      sym_bracket_expression,
      sym_binary_expression,
  [691] = 7,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(111), 1,
      sym_identifier,
    ACTIONS(113), 1,
      sym_natural_numbers,
    ACTIONS(115), 1,
      anon_sym_DASH,
    STATE(4), 1,
      sym_integers,
    STATE(23), 1,
      sym_math_expression,
    STATE(9), 6,
      sym_rationals,
      sym_decimals,
      sym__real_numbers,
      sym_function_call_expression,
      sym_bracket_expression,
      sym_binary_expression,
  [718] = 7,
    ACTIONS(105), 1,
      sym_natural_numbers,
    ACTIONS(107), 1,
      anon_sym_DASH,
    ACTIONS(109), 1,
      anon_sym_LPAREN,
    ACTIONS(117), 1,
      sym_identifier,
    STATE(38), 1,
      sym_integers,
    STATE(42), 1,
      sym_math_expression,
    STATE(40), 6,
      sym_rationals,
      sym_decimals,
      sym__real_numbers,
      sym_function_call_expression,
      sym_bracket_expression,
      sym_binary_expression,
  [745] = 7,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(113), 1,
      sym_natural_numbers,
    ACTIONS(115), 1,
      anon_sym_DASH,
    ACTIONS(119), 1,
      sym_identifier,
    STATE(4), 1,
      sym_integers,
    STATE(15), 1,
      sym_math_expression,
    STATE(11), 6,
      sym_rationals,
      sym_decimals,
      sym__real_numbers,
      sym_function_call_expression,
      sym_bracket_expression,
      sym_binary_expression,
  [772] = 7,
    ACTIONS(103), 1,
      sym_identifier,
    ACTIONS(105), 1,
      sym_natural_numbers,
    ACTIONS(107), 1,
      anon_sym_DASH,
    ACTIONS(109), 1,
      anon_sym_LPAREN,
    STATE(38), 1,
      sym_integers,
    STATE(58), 1,
      sym_math_expression,
    STATE(48), 6,
      sym_rationals,
      sym_decimals,
      sym__real_numbers,
      sym_function_call_expression,
      sym_bracket_expression,
      sym_binary_expression,
  [799] = 1,
    ACTIONS(23), 10,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_CARET,
      anon_sym_PERCENT,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_as,
  [812] = 1,
    ACTIONS(41), 10,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_CARET,
      anon_sym_PERCENT,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_as,
  [825] = 2,
    ACTIONS(121), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 9,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_CARET,
      anon_sym_PERCENT,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_as,
  [840] = 2,
    ACTIONS(123), 1,
      anon_sym_DOT,
    ACTIONS(27), 9,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_CARET,
      anon_sym_PERCENT,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_as,
  [855] = 3,
    ACTIONS(121), 1,
      anon_sym_LPAREN,
    ACTIONS(125), 1,
      anon_sym_as,
    ACTIONS(33), 8,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_CARET,
      anon_sym_PERCENT,
      anon_sym_STAR,
      anon_sym_PLUS,
  [872] = 1,
    ACTIONS(33), 9,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_CARET,
      anon_sym_PERCENT,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_as,
  [884] = 1,
    ACTIONS(67), 9,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_CARET,
      anon_sym_PERCENT,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_as,
  [896] = 1,
    ACTIONS(63), 9,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_CARET,
      anon_sym_PERCENT,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_as,
  [908] = 1,
    ACTIONS(59), 9,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_CARET,
      anon_sym_PERCENT,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_as,
  [920] = 1,
    ACTIONS(55), 9,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_CARET,
      anon_sym_PERCENT,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_as,
  [932] = 1,
    ACTIONS(51), 9,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_CARET,
      anon_sym_PERCENT,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_as,
  [944] = 1,
    ACTIONS(79), 9,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_CARET,
      anon_sym_PERCENT,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_as,
  [956] = 1,
    ACTIONS(47), 9,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_CARET,
      anon_sym_PERCENT,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_as,
  [968] = 2,
    ACTIONS(125), 1,
      anon_sym_as,
    ACTIONS(33), 8,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_CARET,
      anon_sym_PERCENT,
      anon_sym_STAR,
      anon_sym_PLUS,
  [982] = 2,
    ACTIONS(83), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(85), 6,
      sym_identifier,
      anon_sym_in,
      anon_sym_out,
      anon_sym_print,
      anon_sym_graph,
      anon_sym_use,
  [995] = 2,
    ACTIONS(93), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(95), 6,
      sym_identifier,
      anon_sym_in,
      anon_sym_out,
      anon_sym_print,
      anon_sym_graph,
      anon_sym_use,
  [1008] = 3,
    ACTIONS(127), 1,
      ts_builtin_sym_end,
    ACTIONS(129), 1,
      anon_sym_LF,
    ACTIONS(131), 6,
      sym_identifier,
      anon_sym_in,
      anon_sym_out,
      anon_sym_print,
      anon_sym_graph,
      anon_sym_use,
  [1023] = 3,
    ACTIONS(135), 1,
      anon_sym_COMMA,
    ACTIONS(137), 1,
      anon_sym_RPAREN,
    ACTIONS(133), 6,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_CARET,
      anon_sym_PERCENT,
      anon_sym_STAR,
      anon_sym_PLUS,
  [1038] = 2,
    ACTIONS(93), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(95), 6,
      sym_identifier,
      anon_sym_in,
      anon_sym_out,
      anon_sym_print,
      anon_sym_graph,
      anon_sym_use,
  [1051] = 2,
    ACTIONS(139), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(141), 6,
      sym_identifier,
      anon_sym_in,
      anon_sym_out,
      anon_sym_print,
      anon_sym_graph,
      anon_sym_use,
  [1064] = 2,
    ACTIONS(93), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(95), 6,
      sym_identifier,
      anon_sym_in,
      anon_sym_out,
      anon_sym_print,
      anon_sym_graph,
      anon_sym_use,
  [1077] = 2,
    ACTIONS(143), 1,
      ts_builtin_sym_end,
    ACTIONS(145), 6,
      sym_identifier,
      anon_sym_in,
      anon_sym_out,
      anon_sym_print,
      anon_sym_graph,
      anon_sym_use,
  [1089] = 2,
    STATE(46), 1,
      sym_data_types,
    ACTIONS(147), 6,
      anon_sym_decimal,
      anon_sym_idecimal,
      anon_sym_complex,
      anon_sym_frac,
      anon_sym_ifrac,
      anon_sym_irrational,
  [1101] = 2,
    ACTIONS(149), 1,
      anon_sym_RPAREN,
    ACTIONS(133), 6,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_CARET,
      anon_sym_PERCENT,
      anon_sym_STAR,
      anon_sym_PLUS,
  [1113] = 2,
    ACTIONS(151), 1,
      anon_sym_RPAREN,
    ACTIONS(133), 6,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_CARET,
      anon_sym_PERCENT,
      anon_sym_STAR,
      anon_sym_PLUS,
  [1125] = 2,
    STATE(21), 1,
      sym_data_types,
    ACTIONS(153), 6,
      anon_sym_decimal,
      anon_sym_idecimal,
      anon_sym_complex,
      anon_sym_frac,
      anon_sym_ifrac,
      anon_sym_irrational,
  [1137] = 2,
    ACTIONS(157), 2,
      sym_file_path,
      anon_sym_LPAREN,
    ACTIONS(155), 3,
      sym_identifier,
      sym_natural_numbers,
      anon_sym_DASH,
  [1147] = 4,
    ACTIONS(159), 1,
      anon_sym_COMMA,
    ACTIONS(161), 1,
      anon_sym_LPAREN,
    ACTIONS(163), 1,
      anon_sym_EQ,
    ACTIONS(165), 1,
      anon_sym_COLON,
  [1160] = 2,
    ACTIONS(159), 1,
      anon_sym_COMMA,
    ACTIONS(163), 2,
      anon_sym_RPAREN,
      anon_sym_EQ,
  [1168] = 2,
    ACTIONS(167), 1,
      sym_identifier,
    STATE(68), 1,
      sym__comma_separated_identifiers,
  [1175] = 2,
    ACTIONS(167), 1,
      sym_identifier,
    STATE(66), 1,
      sym__comma_separated_identifiers,
  [1182] = 1,
    ACTIONS(169), 2,
      anon_sym_RPAREN,
      anon_sym_EQ,
  [1187] = 1,
    ACTIONS(171), 1,
      sym_natural_numbers,
  [1191] = 1,
    ACTIONS(173), 1,
      anon_sym_RPAREN,
  [1195] = 1,
    ACTIONS(175), 1,
      anon_sym_RPAREN,
  [1199] = 1,
    ACTIONS(177), 1,
      sym_natural_numbers,
  [1203] = 1,
    ACTIONS(179), 1,
      anon_sym_EQ,
  [1207] = 1,
    ACTIONS(181), 1,
      anon_sym_RPAREN,
  [1211] = 1,
    ACTIONS(183), 1,
      anon_sym_EQ,
  [1215] = 1,
    ACTIONS(185), 1,
      sym_natural_numbers,
  [1219] = 1,
    ACTIONS(187), 1,
      sym_natural_numbers,
  [1223] = 1,
    ACTIONS(189), 1,
      anon_sym_RPAREN,
  [1227] = 1,
    ACTIONS(191), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 40,
  [SMALL_STATE(4)] = 61,
  [SMALL_STATE(5)] = 84,
  [SMALL_STATE(6)] = 107,
  [SMALL_STATE(7)] = 132,
  [SMALL_STATE(8)] = 153,
  [SMALL_STATE(9)] = 183,
  [SMALL_STATE(10)] = 205,
  [SMALL_STATE(11)] = 225,
  [SMALL_STATE(12)] = 245,
  [SMALL_STATE(13)] = 265,
  [SMALL_STATE(14)] = 285,
  [SMALL_STATE(15)] = 305,
  [SMALL_STATE(16)] = 325,
  [SMALL_STATE(17)] = 345,
  [SMALL_STATE(18)] = 375,
  [SMALL_STATE(19)] = 395,
  [SMALL_STATE(20)] = 416,
  [SMALL_STATE(21)] = 437,
  [SMALL_STATE(22)] = 456,
  [SMALL_STATE(23)] = 477,
  [SMALL_STATE(24)] = 498,
  [SMALL_STATE(25)] = 517,
  [SMALL_STATE(26)] = 547,
  [SMALL_STATE(27)] = 577,
  [SMALL_STATE(28)] = 607,
  [SMALL_STATE(29)] = 637,
  [SMALL_STATE(30)] = 664,
  [SMALL_STATE(31)] = 691,
  [SMALL_STATE(32)] = 718,
  [SMALL_STATE(33)] = 745,
  [SMALL_STATE(34)] = 772,
  [SMALL_STATE(35)] = 799,
  [SMALL_STATE(36)] = 812,
  [SMALL_STATE(37)] = 825,
  [SMALL_STATE(38)] = 840,
  [SMALL_STATE(39)] = 855,
  [SMALL_STATE(40)] = 872,
  [SMALL_STATE(41)] = 884,
  [SMALL_STATE(42)] = 896,
  [SMALL_STATE(43)] = 908,
  [SMALL_STATE(44)] = 920,
  [SMALL_STATE(45)] = 932,
  [SMALL_STATE(46)] = 944,
  [SMALL_STATE(47)] = 956,
  [SMALL_STATE(48)] = 968,
  [SMALL_STATE(49)] = 982,
  [SMALL_STATE(50)] = 995,
  [SMALL_STATE(51)] = 1008,
  [SMALL_STATE(52)] = 1023,
  [SMALL_STATE(53)] = 1038,
  [SMALL_STATE(54)] = 1051,
  [SMALL_STATE(55)] = 1064,
  [SMALL_STATE(56)] = 1077,
  [SMALL_STATE(57)] = 1089,
  [SMALL_STATE(58)] = 1101,
  [SMALL_STATE(59)] = 1113,
  [SMALL_STATE(60)] = 1125,
  [SMALL_STATE(61)] = 1137,
  [SMALL_STATE(62)] = 1147,
  [SMALL_STATE(63)] = 1160,
  [SMALL_STATE(64)] = 1168,
  [SMALL_STATE(65)] = 1175,
  [SMALL_STATE(66)] = 1182,
  [SMALL_STATE(67)] = 1187,
  [SMALL_STATE(68)] = 1191,
  [SMALL_STATE(69)] = 1195,
  [SMALL_STATE(70)] = 1199,
  [SMALL_STATE(71)] = 1203,
  [SMALL_STATE(72)] = 1207,
  [SMALL_STATE(73)] = 1211,
  [SMALL_STATE(74)] = 1215,
  [SMALL_STATE(75)] = 1219,
  [SMALL_STATE(76)] = 1223,
  [SMALL_STATE(77)] = 1227,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integers, 2),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integers, 2),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__real_numbers, 1),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__real_numbers, 1),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_math_expression, 1, .production_id = 2),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_math_expression, 1, .production_id = 2),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integers, 1),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integers, 1),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_types, 1),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_data_types, 1),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bracket_expression, 3),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bracket_expression, 3),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rationals, 3),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rationals, 3),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimals, 3),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decimals, 3),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 8),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 8),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call_expression, 4),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call_expression, 4),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(62),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(61),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_math_expression, 3, .production_id = 7),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_math_expression, 3, .production_id = 7),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 2, .production_id = 3),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 2, .production_id = 3),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 6, .production_id = 9),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 6, .production_id = 9),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction_argument, 3, .production_id = 5),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction_argument, 3, .production_id = 5),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const_declaration, 3, .production_id = 6),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_const_declaration, 3, .production_id = 6),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statements, 1),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statements, 1),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comma_separated_math_expressions, 1),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statements, 2),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statements, 2),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operation, 1),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operation, 1),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comma_separated_identifiers, 1, .production_id = 1),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comma_separated_identifiers, 3, .production_id = 4),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comma_separated_math_expressions, 3),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [191] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_beanie(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
