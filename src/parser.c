#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 144
#define LARGE_STATE_COUNT 11
#define SYMBOL_COUNT 61
#define ALIAS_COUNT 0
#define TOKEN_COUNT 31
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_EQ = 1,
  anon_sym_SEMI = 2,
  anon_sym_function = 3,
  anon_sym_class = 4,
  anon_sym_public = 5,
  anon_sym_private = 6,
  anon_sym_protected = 7,
  anon_sym_static = 8,
  anon_sym_final = 9,
  anon_sym_abstract = 10,
  anon_sym_synchronized = 11,
  anon_sym_LPAREN = 12,
  anon_sym_COMMA = 13,
  anon_sym_RPAREN = 14,
  anon_sym_COLON = 15,
  anon_sym_LBRACE = 16,
  anon_sym_RBRACE = 17,
  anon_sym_int = 18,
  anon_sym_float = 19,
  anon_sym_string = 20,
  anon_sym_boolean = 21,
  anon_sym_PLUS = 22,
  anon_sym_STAR = 23,
  sym_identifier = 24,
  sym_number = 25,
  sym_string = 26,
  sym_line_comment = 27,
  sym_block_comment = 28,
  anon_sym_extends = 29,
  anon_sym_implements = 30,
  sym_program = 31,
  sym__toplevel_statement = 32,
  sym_statement = 33,
  sym_variable_declaration = 34,
  sym_method_declaration = 35,
  sym_class_declaration = 36,
  sym_modifiers = 37,
  sym_parameters = 38,
  sym_parameter = 39,
  sym_return_type = 40,
  sym_class_body = 41,
  sym__class_body_declaration = 42,
  sym_field_declaration = 43,
  sym_type = 44,
  sym__simple_type = 45,
  sym_expression_statement = 46,
  sym_expression = 47,
  sym_assignment_expression = 48,
  sym_binary_expression = 49,
  sym_primary_expression = 50,
  sym_extends_clause = 51,
  sym_implements_clause = 52,
  sym_block = 53,
  sym__statement = 54,
  aux_sym_program_repeat1 = 55,
  aux_sym_modifiers_repeat1 = 56,
  aux_sym_parameters_repeat1 = 57,
  aux_sym_class_body_repeat1 = 58,
  aux_sym_implements_clause_repeat1 = 59,
  aux_sym_block_repeat1 = 60,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_EQ] = "=",
  [anon_sym_SEMI] = ";",
  [anon_sym_function] = "function",
  [anon_sym_class] = "class",
  [anon_sym_public] = "public",
  [anon_sym_private] = "private",
  [anon_sym_protected] = "protected",
  [anon_sym_static] = "static",
  [anon_sym_final] = "final",
  [anon_sym_abstract] = "abstract",
  [anon_sym_synchronized] = "synchronized",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym_COLON] = ":",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_int] = "int",
  [anon_sym_float] = "float",
  [anon_sym_string] = "string",
  [anon_sym_boolean] = "boolean",
  [anon_sym_PLUS] = "+",
  [anon_sym_STAR] = "*",
  [sym_identifier] = "identifier",
  [sym_number] = "number",
  [sym_string] = "string",
  [sym_line_comment] = "line_comment",
  [sym_block_comment] = "block_comment",
  [anon_sym_extends] = "extends",
  [anon_sym_implements] = "implements",
  [sym_program] = "program",
  [sym__toplevel_statement] = "_toplevel_statement",
  [sym_statement] = "statement",
  [sym_variable_declaration] = "variable_declaration",
  [sym_method_declaration] = "method_declaration",
  [sym_class_declaration] = "class_declaration",
  [sym_modifiers] = "modifiers",
  [sym_parameters] = "parameters",
  [sym_parameter] = "parameter",
  [sym_return_type] = "return_type",
  [sym_class_body] = "class_body",
  [sym__class_body_declaration] = "_class_body_declaration",
  [sym_field_declaration] = "field_declaration",
  [sym_type] = "type",
  [sym__simple_type] = "_simple_type",
  [sym_expression_statement] = "expression_statement",
  [sym_expression] = "expression",
  [sym_assignment_expression] = "assignment_expression",
  [sym_binary_expression] = "binary_expression",
  [sym_primary_expression] = "primary_expression",
  [sym_extends_clause] = "extends_clause",
  [sym_implements_clause] = "implements_clause",
  [sym_block] = "block",
  [sym__statement] = "_statement",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_modifiers_repeat1] = "modifiers_repeat1",
  [aux_sym_parameters_repeat1] = "parameters_repeat1",
  [aux_sym_class_body_repeat1] = "class_body_repeat1",
  [aux_sym_implements_clause_repeat1] = "implements_clause_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_function] = anon_sym_function,
  [anon_sym_class] = anon_sym_class,
  [anon_sym_public] = anon_sym_public,
  [anon_sym_private] = anon_sym_private,
  [anon_sym_protected] = anon_sym_protected,
  [anon_sym_static] = anon_sym_static,
  [anon_sym_final] = anon_sym_final,
  [anon_sym_abstract] = anon_sym_abstract,
  [anon_sym_synchronized] = anon_sym_synchronized,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_int] = anon_sym_int,
  [anon_sym_float] = anon_sym_float,
  [anon_sym_string] = anon_sym_string,
  [anon_sym_boolean] = anon_sym_boolean,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_STAR] = anon_sym_STAR,
  [sym_identifier] = sym_identifier,
  [sym_number] = sym_number,
  [sym_string] = sym_string,
  [sym_line_comment] = sym_line_comment,
  [sym_block_comment] = sym_block_comment,
  [anon_sym_extends] = anon_sym_extends,
  [anon_sym_implements] = anon_sym_implements,
  [sym_program] = sym_program,
  [sym__toplevel_statement] = sym__toplevel_statement,
  [sym_statement] = sym_statement,
  [sym_variable_declaration] = sym_variable_declaration,
  [sym_method_declaration] = sym_method_declaration,
  [sym_class_declaration] = sym_class_declaration,
  [sym_modifiers] = sym_modifiers,
  [sym_parameters] = sym_parameters,
  [sym_parameter] = sym_parameter,
  [sym_return_type] = sym_return_type,
  [sym_class_body] = sym_class_body,
  [sym__class_body_declaration] = sym__class_body_declaration,
  [sym_field_declaration] = sym_field_declaration,
  [sym_type] = sym_type,
  [sym__simple_type] = sym__simple_type,
  [sym_expression_statement] = sym_expression_statement,
  [sym_expression] = sym_expression,
  [sym_assignment_expression] = sym_assignment_expression,
  [sym_binary_expression] = sym_binary_expression,
  [sym_primary_expression] = sym_primary_expression,
  [sym_extends_clause] = sym_extends_clause,
  [sym_implements_clause] = sym_implements_clause,
  [sym_block] = sym_block,
  [sym__statement] = sym__statement,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym_modifiers_repeat1] = aux_sym_modifiers_repeat1,
  [aux_sym_parameters_repeat1] = aux_sym_parameters_repeat1,
  [aux_sym_class_body_repeat1] = aux_sym_class_body_repeat1,
  [aux_sym_implements_clause_repeat1] = aux_sym_implements_clause_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_function] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_class] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_public] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_private] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_protected] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_static] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_final] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_abstract] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_synchronized] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_float] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_string] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_boolean] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_line_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_block_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_extends] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_implements] = {
    .visible = true,
    .named = false,
  },
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym__toplevel_statement] = {
    .visible = false,
    .named = true,
  },
  [sym_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_method_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_class_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_modifiers] = {
    .visible = true,
    .named = true,
  },
  [sym_parameters] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_return_type] = {
    .visible = true,
    .named = true,
  },
  [sym_class_body] = {
    .visible = true,
    .named = true,
  },
  [sym__class_body_declaration] = {
    .visible = false,
    .named = true,
  },
  [sym_field_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym__simple_type] = {
    .visible = false,
    .named = true,
  },
  [sym_expression_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_assignment_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_primary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_extends_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_implements_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_program_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_modifiers_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameters_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_class_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_implements_clause_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_repeat1] = {
    .visible = false,
    .named = false,
  },
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
  [7] = 5,
  [8] = 4,
  [9] = 9,
  [10] = 4,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 16,
  [32] = 14,
  [33] = 30,
  [34] = 28,
  [35] = 21,
  [36] = 22,
  [37] = 26,
  [38] = 15,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 22,
  [43] = 17,
  [44] = 44,
  [45] = 39,
  [46] = 46,
  [47] = 47,
  [48] = 40,
  [49] = 23,
  [50] = 24,
  [51] = 15,
  [52] = 39,
  [53] = 40,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 60,
  [71] = 69,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 75,
  [80] = 80,
  [81] = 78,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 96,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 93,
  [102] = 83,
  [103] = 103,
  [104] = 95,
  [105] = 105,
  [106] = 98,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 111,
  [120] = 120,
  [121] = 118,
  [122] = 122,
  [123] = 123,
  [124] = 105,
  [125] = 123,
  [126] = 103,
  [127] = 127,
  [128] = 116,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 134,
  [137] = 137,
  [138] = 135,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 132,
  [143] = 139,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(92);
      ADVANCE_MAP(
        '"', 3,
        '(', 113,
        ')', 115,
        '*', 128,
        '+', 127,
        ',', 114,
        '/', 5,
        ':', 116,
        ';', 94,
        '=', 93,
        'a', 18,
        'b', 62,
        'c', 46,
        'e', 89,
        'f', 39,
        'i', 51,
        'p', 68,
        's', 76,
        '{', 117,
        '}', 118,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(201);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '"', 3,
        '*', 128,
        '+', 127,
        ',', 114,
        '/', 5,
        ';', 94,
        '=', 93,
        '{', 117,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(201);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '"', 3,
        '/', 5,
        'a', 136,
        'b', 175,
        'f', 156,
        'i', 167,
        'p', 180,
        's', 187,
        '{', 117,
        '}', 118,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(201);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(202);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == ')') ADVANCE(115);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == 'b') ADVANCE(175);
      if (lookahead == 'f') ADVANCE(166);
      if (lookahead == 'i') ADVANCE(167);
      if (lookahead == 's') ADVANCE(194);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(7);
      if (lookahead == '/') ADVANCE(203);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == '/') ADVANCE(204);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(6);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 8:
      ADVANCE_MAP(
        '/', 5,
        'a', 136,
        'b', 175,
        'f', 155,
        'i', 167,
        'p', 180,
        's', 187,
        '}', 118,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 9:
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == 'b') ADVANCE(175);
      if (lookahead == 'c') ADVANCE(161);
      if (lookahead == 'f') ADVANCE(165);
      if (lookahead == 'i') ADVANCE(167);
      if (lookahead == 's') ADVANCE(194);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(9);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 10:
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == 'b') ADVANCE(175);
      if (lookahead == 'f') ADVANCE(165);
      if (lookahead == 'i') ADVANCE(167);
      if (lookahead == 's') ADVANCE(194);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(10);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(74);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(47);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(87);
      if (lookahead == 'r') ADVANCE(44);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(80);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(56);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(24);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(85);
      END_STATE();
    case 18:
      if (lookahead == 'b') ADVANCE(75);
      END_STATE();
    case 19:
      if (lookahead == 'b') ADVANCE(49);
      END_STATE();
    case 20:
      if (lookahead == 'c') ADVANCE(38);
      END_STATE();
    case 21:
      if (lookahead == 'c') ADVANCE(99);
      END_STATE();
    case 22:
      if (lookahead == 'c') ADVANCE(105);
      END_STATE();
    case 23:
      if (lookahead == 'c') ADVANCE(82);
      END_STATE();
    case 24:
      if (lookahead == 'c') ADVANCE(81);
      END_STATE();
    case 25:
      if (lookahead == 'c') ADVANCE(86);
      END_STATE();
    case 26:
      if (lookahead == 'd') ADVANCE(103);
      END_STATE();
    case 27:
      if (lookahead == 'd') ADVANCE(111);
      END_STATE();
    case 28:
      if (lookahead == 'd') ADVANCE(72);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(101);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(25);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(54);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(15);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 37:
      if (lookahead == 'g') ADVANCE(123);
      END_STATE();
    case 38:
      if (lookahead == 'h') ADVANCE(70);
      END_STATE();
    case 39:
      if (lookahead == 'i') ADVANCE(58);
      if (lookahead == 'l') ADVANCE(64);
      if (lookahead == 'u') ADVANCE(53);
      END_STATE();
    case 40:
      if (lookahead == 'i') ADVANCE(88);
      if (lookahead == 'o') ADVANCE(83);
      END_STATE();
    case 41:
      if (lookahead == 'i') ADVANCE(90);
      END_STATE();
    case 42:
      if (lookahead == 'i') ADVANCE(65);
      END_STATE();
    case 43:
      if (lookahead == 'i') ADVANCE(21);
      END_STATE();
    case 44:
      if (lookahead == 'i') ADVANCE(55);
      END_STATE();
    case 45:
      if (lookahead == 'i') ADVANCE(22);
      END_STATE();
    case 46:
      if (lookahead == 'l') ADVANCE(11);
      END_STATE();
    case 47:
      if (lookahead == 'l') ADVANCE(107);
      END_STATE();
    case 48:
      if (lookahead == 'l') ADVANCE(35);
      END_STATE();
    case 49:
      if (lookahead == 'l') ADVANCE(43);
      END_STATE();
    case 50:
      if (lookahead == 'l') ADVANCE(29);
      END_STATE();
    case 51:
      if (lookahead == 'm') ADVANCE(67);
      if (lookahead == 'n') ADVANCE(78);
      END_STATE();
    case 52:
      if (lookahead == 'm') ADVANCE(36);
      END_STATE();
    case 53:
      if (lookahead == 'n') ADVANCE(23);
      END_STATE();
    case 54:
      if (lookahead == 'n') ADVANCE(28);
      END_STATE();
    case 55:
      if (lookahead == 'n') ADVANCE(37);
      END_STATE();
    case 56:
      if (lookahead == 'n') ADVANCE(125);
      END_STATE();
    case 57:
      if (lookahead == 'n') ADVANCE(95);
      END_STATE();
    case 58:
      if (lookahead == 'n') ADVANCE(12);
      END_STATE();
    case 59:
      if (lookahead == 'n') ADVANCE(20);
      END_STATE();
    case 60:
      if (lookahead == 'n') ADVANCE(41);
      END_STATE();
    case 61:
      if (lookahead == 'n') ADVANCE(84);
      END_STATE();
    case 62:
      if (lookahead == 'o') ADVANCE(63);
      END_STATE();
    case 63:
      if (lookahead == 'o') ADVANCE(48);
      END_STATE();
    case 64:
      if (lookahead == 'o') ADVANCE(14);
      END_STATE();
    case 65:
      if (lookahead == 'o') ADVANCE(57);
      END_STATE();
    case 66:
      if (lookahead == 'o') ADVANCE(60);
      END_STATE();
    case 67:
      if (lookahead == 'p') ADVANCE(50);
      END_STATE();
    case 68:
      if (lookahead == 'r') ADVANCE(40);
      if (lookahead == 'u') ADVANCE(19);
      END_STATE();
    case 69:
      if (lookahead == 'r') ADVANCE(16);
      END_STATE();
    case 70:
      if (lookahead == 'r') ADVANCE(66);
      END_STATE();
    case 71:
      if (lookahead == 's') ADVANCE(97);
      END_STATE();
    case 72:
      if (lookahead == 's') ADVANCE(205);
      END_STATE();
    case 73:
      if (lookahead == 's') ADVANCE(206);
      END_STATE();
    case 74:
      if (lookahead == 's') ADVANCE(71);
      END_STATE();
    case 75:
      if (lookahead == 's') ADVANCE(79);
      END_STATE();
    case 76:
      if (lookahead == 't') ADVANCE(13);
      if (lookahead == 'y') ADVANCE(59);
      END_STATE();
    case 77:
      if (lookahead == 't') ADVANCE(34);
      END_STATE();
    case 78:
      if (lookahead == 't') ADVANCE(119);
      END_STATE();
    case 79:
      if (lookahead == 't') ADVANCE(69);
      END_STATE();
    case 80:
      if (lookahead == 't') ADVANCE(121);
      END_STATE();
    case 81:
      if (lookahead == 't') ADVANCE(109);
      END_STATE();
    case 82:
      if (lookahead == 't') ADVANCE(42);
      END_STATE();
    case 83:
      if (lookahead == 't') ADVANCE(32);
      END_STATE();
    case 84:
      if (lookahead == 't') ADVANCE(73);
      END_STATE();
    case 85:
      if (lookahead == 't') ADVANCE(30);
      END_STATE();
    case 86:
      if (lookahead == 't') ADVANCE(31);
      END_STATE();
    case 87:
      if (lookahead == 't') ADVANCE(45);
      END_STATE();
    case 88:
      if (lookahead == 'v') ADVANCE(17);
      END_STATE();
    case 89:
      if (lookahead == 'x') ADVANCE(77);
      END_STATE();
    case 90:
      if (lookahead == 'z') ADVANCE(33);
      END_STATE();
    case 91:
      if (eof) ADVANCE(92);
      ADVANCE_MAP(
        '"', 3,
        '/', 5,
        'a', 136,
        'b', 175,
        'c', 161,
        'f', 155,
        'i', 167,
        'p', 180,
        's', 187,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(91);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(201);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_function);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_function);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_class);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_class);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_public);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_public);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_private);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_private);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_protected);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_protected);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_static);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_static);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_final);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_final);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_abstract);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_abstract);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_synchronized);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_synchronized);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_int);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_int);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_float);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_string);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_boolean);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_boolean);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(197);
      if (lookahead == 'r') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(198);
      if (lookahead == 'o') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(172);
      if (lookahead == 'l') ADVANCE(177);
      if (lookahead == 'u') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(172);
      if (lookahead == 'l') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(177);
      if (lookahead == 'u') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(153);
      if (lookahead == 'u') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(131);
      if (lookahead == 'y') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'z') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(200);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(201);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(203);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_block_comment);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_extends);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_implements);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 91},
  [2] = {.lex_state = 91},
  [3] = {.lex_state = 91},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 8},
  [12] = {.lex_state = 8},
  [13] = {.lex_state = 8},
  [14] = {.lex_state = 91},
  [15] = {.lex_state = 91},
  [16] = {.lex_state = 91},
  [17] = {.lex_state = 91},
  [18] = {.lex_state = 91},
  [19] = {.lex_state = 91},
  [20] = {.lex_state = 91},
  [21] = {.lex_state = 91},
  [22] = {.lex_state = 91},
  [23] = {.lex_state = 91},
  [24] = {.lex_state = 91},
  [25] = {.lex_state = 91},
  [26] = {.lex_state = 91},
  [27] = {.lex_state = 91},
  [28] = {.lex_state = 91},
  [29] = {.lex_state = 91},
  [30] = {.lex_state = 91},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 91},
  [40] = {.lex_state = 91},
  [41] = {.lex_state = 8},
  [42] = {.lex_state = 8},
  [43] = {.lex_state = 8},
  [44] = {.lex_state = 8},
  [45] = {.lex_state = 8},
  [46] = {.lex_state = 8},
  [47] = {.lex_state = 8},
  [48] = {.lex_state = 8},
  [49] = {.lex_state = 8},
  [50] = {.lex_state = 8},
  [51] = {.lex_state = 8},
  [52] = {.lex_state = 2},
  [53] = {.lex_state = 2},
  [54] = {.lex_state = 9},
  [55] = {.lex_state = 4},
  [56] = {.lex_state = 10},
  [57] = {.lex_state = 4},
  [58] = {.lex_state = 4},
  [59] = {.lex_state = 1},
  [60] = {.lex_state = 1},
  [61] = {.lex_state = 4},
  [62] = {.lex_state = 1},
  [63] = {.lex_state = 4},
  [64] = {.lex_state = 4},
  [65] = {.lex_state = 4},
  [66] = {.lex_state = 1},
  [67] = {.lex_state = 1},
  [68] = {.lex_state = 1},
  [69] = {.lex_state = 1},
  [70] = {.lex_state = 1},
  [71] = {.lex_state = 1},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 1},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 1},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 1},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 1},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 1},
  [132] = {.lex_state = 1},
  [133] = {.lex_state = 1},
  [134] = {.lex_state = 1},
  [135] = {.lex_state = 1},
  [136] = {.lex_state = 1},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 1},
  [139] = {.lex_state = 1},
  [140] = {.lex_state = 1},
  [141] = {.lex_state = 1},
  [142] = {.lex_state = 1},
  [143] = {.lex_state = 1},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_function] = ACTIONS(1),
    [anon_sym_class] = ACTIONS(1),
    [anon_sym_public] = ACTIONS(1),
    [anon_sym_private] = ACTIONS(1),
    [anon_sym_protected] = ACTIONS(1),
    [anon_sym_static] = ACTIONS(1),
    [anon_sym_final] = ACTIONS(1),
    [anon_sym_abstract] = ACTIONS(1),
    [anon_sym_synchronized] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_int] = ACTIONS(1),
    [anon_sym_float] = ACTIONS(1),
    [anon_sym_string] = ACTIONS(1),
    [anon_sym_boolean] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
    [anon_sym_extends] = ACTIONS(1),
    [anon_sym_implements] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(130),
    [sym__toplevel_statement] = STATE(2),
    [sym_statement] = STATE(2),
    [sym_variable_declaration] = STATE(14),
    [sym_method_declaration] = STATE(2),
    [sym_class_declaration] = STATE(2),
    [sym_modifiers] = STATE(54),
    [sym_type] = STATE(134),
    [sym__simple_type] = STATE(95),
    [sym_expression_statement] = STATE(14),
    [sym_expression] = STATE(96),
    [sym_assignment_expression] = STATE(99),
    [sym_binary_expression] = STATE(99),
    [sym_primary_expression] = STATE(99),
    [aux_sym_program_repeat1] = STATE(2),
    [aux_sym_modifiers_repeat1] = STATE(39),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_function] = ACTIONS(7),
    [anon_sym_class] = ACTIONS(9),
    [anon_sym_public] = ACTIONS(11),
    [anon_sym_private] = ACTIONS(11),
    [anon_sym_protected] = ACTIONS(11),
    [anon_sym_static] = ACTIONS(11),
    [anon_sym_final] = ACTIONS(11),
    [anon_sym_abstract] = ACTIONS(11),
    [anon_sym_synchronized] = ACTIONS(11),
    [anon_sym_int] = ACTIONS(13),
    [anon_sym_float] = ACTIONS(13),
    [anon_sym_string] = ACTIONS(13),
    [anon_sym_boolean] = ACTIONS(13),
    [sym_identifier] = ACTIONS(15),
    [sym_number] = ACTIONS(17),
    [sym_string] = ACTIONS(17),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [2] = {
    [sym__toplevel_statement] = STATE(3),
    [sym_statement] = STATE(3),
    [sym_variable_declaration] = STATE(14),
    [sym_method_declaration] = STATE(3),
    [sym_class_declaration] = STATE(3),
    [sym_modifiers] = STATE(54),
    [sym_type] = STATE(134),
    [sym__simple_type] = STATE(95),
    [sym_expression_statement] = STATE(14),
    [sym_expression] = STATE(96),
    [sym_assignment_expression] = STATE(99),
    [sym_binary_expression] = STATE(99),
    [sym_primary_expression] = STATE(99),
    [aux_sym_program_repeat1] = STATE(3),
    [aux_sym_modifiers_repeat1] = STATE(39),
    [ts_builtin_sym_end] = ACTIONS(19),
    [anon_sym_function] = ACTIONS(7),
    [anon_sym_class] = ACTIONS(9),
    [anon_sym_public] = ACTIONS(11),
    [anon_sym_private] = ACTIONS(11),
    [anon_sym_protected] = ACTIONS(11),
    [anon_sym_static] = ACTIONS(11),
    [anon_sym_final] = ACTIONS(11),
    [anon_sym_abstract] = ACTIONS(11),
    [anon_sym_synchronized] = ACTIONS(11),
    [anon_sym_int] = ACTIONS(13),
    [anon_sym_float] = ACTIONS(13),
    [anon_sym_string] = ACTIONS(13),
    [anon_sym_boolean] = ACTIONS(13),
    [sym_identifier] = ACTIONS(15),
    [sym_number] = ACTIONS(17),
    [sym_string] = ACTIONS(17),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [3] = {
    [sym__toplevel_statement] = STATE(3),
    [sym_statement] = STATE(3),
    [sym_variable_declaration] = STATE(14),
    [sym_method_declaration] = STATE(3),
    [sym_class_declaration] = STATE(3),
    [sym_modifiers] = STATE(54),
    [sym_type] = STATE(134),
    [sym__simple_type] = STATE(95),
    [sym_expression_statement] = STATE(14),
    [sym_expression] = STATE(96),
    [sym_assignment_expression] = STATE(99),
    [sym_binary_expression] = STATE(99),
    [sym_primary_expression] = STATE(99),
    [aux_sym_program_repeat1] = STATE(3),
    [aux_sym_modifiers_repeat1] = STATE(39),
    [ts_builtin_sym_end] = ACTIONS(21),
    [anon_sym_function] = ACTIONS(23),
    [anon_sym_class] = ACTIONS(26),
    [anon_sym_public] = ACTIONS(29),
    [anon_sym_private] = ACTIONS(29),
    [anon_sym_protected] = ACTIONS(29),
    [anon_sym_static] = ACTIONS(29),
    [anon_sym_final] = ACTIONS(29),
    [anon_sym_abstract] = ACTIONS(29),
    [anon_sym_synchronized] = ACTIONS(29),
    [anon_sym_int] = ACTIONS(32),
    [anon_sym_float] = ACTIONS(32),
    [anon_sym_string] = ACTIONS(32),
    [anon_sym_boolean] = ACTIONS(32),
    [sym_identifier] = ACTIONS(35),
    [sym_number] = ACTIONS(38),
    [sym_string] = ACTIONS(38),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [4] = {
    [sym_statement] = STATE(9),
    [sym_variable_declaration] = STATE(32),
    [sym_modifiers] = STATE(61),
    [sym_type] = STATE(136),
    [sym__simple_type] = STATE(95),
    [sym_expression_statement] = STATE(32),
    [sym_expression] = STATE(97),
    [sym_assignment_expression] = STATE(99),
    [sym_binary_expression] = STATE(99),
    [sym_primary_expression] = STATE(99),
    [sym_block] = STATE(9),
    [sym__statement] = STATE(9),
    [aux_sym_modifiers_repeat1] = STATE(52),
    [aux_sym_block_repeat1] = STATE(9),
    [anon_sym_public] = ACTIONS(41),
    [anon_sym_private] = ACTIONS(41),
    [anon_sym_protected] = ACTIONS(41),
    [anon_sym_static] = ACTIONS(41),
    [anon_sym_final] = ACTIONS(41),
    [anon_sym_abstract] = ACTIONS(41),
    [anon_sym_synchronized] = ACTIONS(41),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_RBRACE] = ACTIONS(45),
    [anon_sym_int] = ACTIONS(13),
    [anon_sym_float] = ACTIONS(13),
    [anon_sym_string] = ACTIONS(13),
    [anon_sym_boolean] = ACTIONS(13),
    [sym_identifier] = ACTIONS(15),
    [sym_number] = ACTIONS(17),
    [sym_string] = ACTIONS(17),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [5] = {
    [sym_statement] = STATE(8),
    [sym_variable_declaration] = STATE(32),
    [sym_modifiers] = STATE(61),
    [sym_type] = STATE(136),
    [sym__simple_type] = STATE(95),
    [sym_expression_statement] = STATE(32),
    [sym_expression] = STATE(97),
    [sym_assignment_expression] = STATE(99),
    [sym_binary_expression] = STATE(99),
    [sym_primary_expression] = STATE(99),
    [sym_block] = STATE(8),
    [sym__statement] = STATE(8),
    [aux_sym_modifiers_repeat1] = STATE(52),
    [aux_sym_block_repeat1] = STATE(8),
    [anon_sym_public] = ACTIONS(41),
    [anon_sym_private] = ACTIONS(41),
    [anon_sym_protected] = ACTIONS(41),
    [anon_sym_static] = ACTIONS(41),
    [anon_sym_final] = ACTIONS(41),
    [anon_sym_abstract] = ACTIONS(41),
    [anon_sym_synchronized] = ACTIONS(41),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_RBRACE] = ACTIONS(47),
    [anon_sym_int] = ACTIONS(13),
    [anon_sym_float] = ACTIONS(13),
    [anon_sym_string] = ACTIONS(13),
    [anon_sym_boolean] = ACTIONS(13),
    [sym_identifier] = ACTIONS(15),
    [sym_number] = ACTIONS(17),
    [sym_string] = ACTIONS(17),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [6] = {
    [sym_statement] = STATE(4),
    [sym_variable_declaration] = STATE(32),
    [sym_modifiers] = STATE(61),
    [sym_type] = STATE(136),
    [sym__simple_type] = STATE(95),
    [sym_expression_statement] = STATE(32),
    [sym_expression] = STATE(97),
    [sym_assignment_expression] = STATE(99),
    [sym_binary_expression] = STATE(99),
    [sym_primary_expression] = STATE(99),
    [sym_block] = STATE(4),
    [sym__statement] = STATE(4),
    [aux_sym_modifiers_repeat1] = STATE(52),
    [aux_sym_block_repeat1] = STATE(4),
    [anon_sym_public] = ACTIONS(41),
    [anon_sym_private] = ACTIONS(41),
    [anon_sym_protected] = ACTIONS(41),
    [anon_sym_static] = ACTIONS(41),
    [anon_sym_final] = ACTIONS(41),
    [anon_sym_abstract] = ACTIONS(41),
    [anon_sym_synchronized] = ACTIONS(41),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_RBRACE] = ACTIONS(49),
    [anon_sym_int] = ACTIONS(13),
    [anon_sym_float] = ACTIONS(13),
    [anon_sym_string] = ACTIONS(13),
    [anon_sym_boolean] = ACTIONS(13),
    [sym_identifier] = ACTIONS(15),
    [sym_number] = ACTIONS(17),
    [sym_string] = ACTIONS(17),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [7] = {
    [sym_statement] = STATE(10),
    [sym_variable_declaration] = STATE(32),
    [sym_modifiers] = STATE(61),
    [sym_type] = STATE(136),
    [sym__simple_type] = STATE(95),
    [sym_expression_statement] = STATE(32),
    [sym_expression] = STATE(97),
    [sym_assignment_expression] = STATE(99),
    [sym_binary_expression] = STATE(99),
    [sym_primary_expression] = STATE(99),
    [sym_block] = STATE(10),
    [sym__statement] = STATE(10),
    [aux_sym_modifiers_repeat1] = STATE(52),
    [aux_sym_block_repeat1] = STATE(10),
    [anon_sym_public] = ACTIONS(41),
    [anon_sym_private] = ACTIONS(41),
    [anon_sym_protected] = ACTIONS(41),
    [anon_sym_static] = ACTIONS(41),
    [anon_sym_final] = ACTIONS(41),
    [anon_sym_abstract] = ACTIONS(41),
    [anon_sym_synchronized] = ACTIONS(41),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_RBRACE] = ACTIONS(51),
    [anon_sym_int] = ACTIONS(13),
    [anon_sym_float] = ACTIONS(13),
    [anon_sym_string] = ACTIONS(13),
    [anon_sym_boolean] = ACTIONS(13),
    [sym_identifier] = ACTIONS(15),
    [sym_number] = ACTIONS(17),
    [sym_string] = ACTIONS(17),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [8] = {
    [sym_statement] = STATE(9),
    [sym_variable_declaration] = STATE(32),
    [sym_modifiers] = STATE(61),
    [sym_type] = STATE(136),
    [sym__simple_type] = STATE(95),
    [sym_expression_statement] = STATE(32),
    [sym_expression] = STATE(97),
    [sym_assignment_expression] = STATE(99),
    [sym_binary_expression] = STATE(99),
    [sym_primary_expression] = STATE(99),
    [sym_block] = STATE(9),
    [sym__statement] = STATE(9),
    [aux_sym_modifiers_repeat1] = STATE(52),
    [aux_sym_block_repeat1] = STATE(9),
    [anon_sym_public] = ACTIONS(41),
    [anon_sym_private] = ACTIONS(41),
    [anon_sym_protected] = ACTIONS(41),
    [anon_sym_static] = ACTIONS(41),
    [anon_sym_final] = ACTIONS(41),
    [anon_sym_abstract] = ACTIONS(41),
    [anon_sym_synchronized] = ACTIONS(41),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_RBRACE] = ACTIONS(53),
    [anon_sym_int] = ACTIONS(13),
    [anon_sym_float] = ACTIONS(13),
    [anon_sym_string] = ACTIONS(13),
    [anon_sym_boolean] = ACTIONS(13),
    [sym_identifier] = ACTIONS(15),
    [sym_number] = ACTIONS(17),
    [sym_string] = ACTIONS(17),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [9] = {
    [sym_statement] = STATE(9),
    [sym_variable_declaration] = STATE(32),
    [sym_modifiers] = STATE(61),
    [sym_type] = STATE(136),
    [sym__simple_type] = STATE(95),
    [sym_expression_statement] = STATE(32),
    [sym_expression] = STATE(97),
    [sym_assignment_expression] = STATE(99),
    [sym_binary_expression] = STATE(99),
    [sym_primary_expression] = STATE(99),
    [sym_block] = STATE(9),
    [sym__statement] = STATE(9),
    [aux_sym_modifiers_repeat1] = STATE(52),
    [aux_sym_block_repeat1] = STATE(9),
    [anon_sym_public] = ACTIONS(55),
    [anon_sym_private] = ACTIONS(55),
    [anon_sym_protected] = ACTIONS(55),
    [anon_sym_static] = ACTIONS(55),
    [anon_sym_final] = ACTIONS(55),
    [anon_sym_abstract] = ACTIONS(55),
    [anon_sym_synchronized] = ACTIONS(55),
    [anon_sym_LBRACE] = ACTIONS(58),
    [anon_sym_RBRACE] = ACTIONS(61),
    [anon_sym_int] = ACTIONS(63),
    [anon_sym_float] = ACTIONS(63),
    [anon_sym_string] = ACTIONS(63),
    [anon_sym_boolean] = ACTIONS(63),
    [sym_identifier] = ACTIONS(66),
    [sym_number] = ACTIONS(69),
    [sym_string] = ACTIONS(69),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [10] = {
    [sym_statement] = STATE(9),
    [sym_variable_declaration] = STATE(32),
    [sym_modifiers] = STATE(61),
    [sym_type] = STATE(136),
    [sym__simple_type] = STATE(95),
    [sym_expression_statement] = STATE(32),
    [sym_expression] = STATE(97),
    [sym_assignment_expression] = STATE(99),
    [sym_binary_expression] = STATE(99),
    [sym_primary_expression] = STATE(99),
    [sym_block] = STATE(9),
    [sym__statement] = STATE(9),
    [aux_sym_modifiers_repeat1] = STATE(52),
    [aux_sym_block_repeat1] = STATE(9),
    [anon_sym_public] = ACTIONS(41),
    [anon_sym_private] = ACTIONS(41),
    [anon_sym_protected] = ACTIONS(41),
    [anon_sym_static] = ACTIONS(41),
    [anon_sym_final] = ACTIONS(41),
    [anon_sym_abstract] = ACTIONS(41),
    [anon_sym_synchronized] = ACTIONS(41),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_RBRACE] = ACTIONS(72),
    [anon_sym_int] = ACTIONS(13),
    [anon_sym_float] = ACTIONS(13),
    [anon_sym_string] = ACTIONS(13),
    [anon_sym_boolean] = ACTIONS(13),
    [sym_identifier] = ACTIONS(15),
    [sym_number] = ACTIONS(17),
    [sym_string] = ACTIONS(17),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 11,
    ACTIONS(74), 1,
      anon_sym_function,
    ACTIONS(78), 1,
      anon_sym_RBRACE,
    ACTIONS(80), 1,
      sym_identifier,
    STATE(45), 1,
      aux_sym_modifiers_repeat1,
    STATE(56), 1,
      sym_modifiers,
    STATE(95), 1,
      sym__simple_type,
    STATE(140), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(13), 4,
      anon_sym_int,
      anon_sym_float,
      anon_sym_string,
      anon_sym_boolean,
    STATE(13), 4,
      sym_method_declaration,
      sym__class_body_declaration,
      sym_field_declaration,
      aux_sym_class_body_repeat1,
    ACTIONS(76), 7,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_static,
      anon_sym_final,
      anon_sym_abstract,
      anon_sym_synchronized,
  [47] = 11,
    ACTIONS(74), 1,
      anon_sym_function,
    ACTIONS(80), 1,
      sym_identifier,
    ACTIONS(82), 1,
      anon_sym_RBRACE,
    STATE(45), 1,
      aux_sym_modifiers_repeat1,
    STATE(56), 1,
      sym_modifiers,
    STATE(95), 1,
      sym__simple_type,
    STATE(140), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(13), 4,
      anon_sym_int,
      anon_sym_float,
      anon_sym_string,
      anon_sym_boolean,
    STATE(11), 4,
      sym_method_declaration,
      sym__class_body_declaration,
      sym_field_declaration,
      aux_sym_class_body_repeat1,
    ACTIONS(76), 7,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_static,
      anon_sym_final,
      anon_sym_abstract,
      anon_sym_synchronized,
  [94] = 11,
    ACTIONS(84), 1,
      anon_sym_function,
    ACTIONS(90), 1,
      anon_sym_RBRACE,
    ACTIONS(95), 1,
      sym_identifier,
    STATE(45), 1,
      aux_sym_modifiers_repeat1,
    STATE(56), 1,
      sym_modifiers,
    STATE(95), 1,
      sym__simple_type,
    STATE(140), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(92), 4,
      anon_sym_int,
      anon_sym_float,
      anon_sym_string,
      anon_sym_boolean,
    STATE(13), 4,
      sym_method_declaration,
      sym__class_body_declaration,
      sym_field_declaration,
      aux_sym_class_body_repeat1,
    ACTIONS(87), 7,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_static,
      anon_sym_final,
      anon_sym_abstract,
      anon_sym_synchronized,
  [141] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(98), 3,
      ts_builtin_sym_end,
      sym_number,
      sym_string,
    ACTIONS(100), 14,
      anon_sym_function,
      anon_sym_class,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_static,
      anon_sym_final,
      anon_sym_abstract,
      anon_sym_synchronized,
      anon_sym_int,
      anon_sym_float,
      anon_sym_string,
      anon_sym_boolean,
      sym_identifier,
  [167] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(102), 3,
      ts_builtin_sym_end,
      sym_number,
      sym_string,
    ACTIONS(104), 14,
      anon_sym_function,
      anon_sym_class,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_static,
      anon_sym_final,
      anon_sym_abstract,
      anon_sym_synchronized,
      anon_sym_int,
      anon_sym_float,
      anon_sym_string,
      anon_sym_boolean,
      sym_identifier,
  [193] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(106), 3,
      ts_builtin_sym_end,
      sym_number,
      sym_string,
    ACTIONS(108), 14,
      anon_sym_function,
      anon_sym_class,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_static,
      anon_sym_final,
      anon_sym_abstract,
      anon_sym_synchronized,
      anon_sym_int,
      anon_sym_float,
      anon_sym_string,
      anon_sym_boolean,
      sym_identifier,
  [219] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(110), 3,
      ts_builtin_sym_end,
      sym_number,
      sym_string,
    ACTIONS(112), 14,
      anon_sym_function,
      anon_sym_class,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_static,
      anon_sym_final,
      anon_sym_abstract,
      anon_sym_synchronized,
      anon_sym_int,
      anon_sym_float,
      anon_sym_string,
      anon_sym_boolean,
      sym_identifier,
  [245] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(114), 3,
      ts_builtin_sym_end,
      sym_number,
      sym_string,
    ACTIONS(116), 14,
      anon_sym_function,
      anon_sym_class,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_static,
      anon_sym_final,
      anon_sym_abstract,
      anon_sym_synchronized,
      anon_sym_int,
      anon_sym_float,
      anon_sym_string,
      anon_sym_boolean,
      sym_identifier,
  [271] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(118), 3,
      ts_builtin_sym_end,
      sym_number,
      sym_string,
    ACTIONS(120), 14,
      anon_sym_function,
      anon_sym_class,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_static,
      anon_sym_final,
      anon_sym_abstract,
      anon_sym_synchronized,
      anon_sym_int,
      anon_sym_float,
      anon_sym_string,
      anon_sym_boolean,
      sym_identifier,
  [297] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(122), 3,
      ts_builtin_sym_end,
      sym_number,
      sym_string,
    ACTIONS(124), 14,
      anon_sym_function,
      anon_sym_class,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_static,
      anon_sym_final,
      anon_sym_abstract,
      anon_sym_synchronized,
      anon_sym_int,
      anon_sym_float,
      anon_sym_string,
      anon_sym_boolean,
      sym_identifier,
  [323] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(126), 3,
      ts_builtin_sym_end,
      sym_number,
      sym_string,
    ACTIONS(128), 14,
      anon_sym_function,
      anon_sym_class,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_static,
      anon_sym_final,
      anon_sym_abstract,
      anon_sym_synchronized,
      anon_sym_int,
      anon_sym_float,
      anon_sym_string,
      anon_sym_boolean,
      sym_identifier,
  [349] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(130), 3,
      ts_builtin_sym_end,
      sym_number,
      sym_string,
    ACTIONS(132), 14,
      anon_sym_function,
      anon_sym_class,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_static,
      anon_sym_final,
      anon_sym_abstract,
      anon_sym_synchronized,
      anon_sym_int,
      anon_sym_float,
      anon_sym_string,
      anon_sym_boolean,
      sym_identifier,
  [375] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(134), 3,
      ts_builtin_sym_end,
      sym_number,
      sym_string,
    ACTIONS(136), 14,
      anon_sym_function,
      anon_sym_class,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_static,
      anon_sym_final,
      anon_sym_abstract,
      anon_sym_synchronized,
      anon_sym_int,
      anon_sym_float,
      anon_sym_string,
      anon_sym_boolean,
      sym_identifier,
  [401] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(138), 3,
      ts_builtin_sym_end,
      sym_number,
      sym_string,
    ACTIONS(140), 14,
      anon_sym_function,
      anon_sym_class,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_static,
      anon_sym_final,
      anon_sym_abstract,
      anon_sym_synchronized,
      anon_sym_int,
      anon_sym_float,
      anon_sym_string,
      anon_sym_boolean,
      sym_identifier,
  [427] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(142), 3,
      ts_builtin_sym_end,
      sym_number,
      sym_string,
    ACTIONS(144), 14,
      anon_sym_function,
      anon_sym_class,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_static,
      anon_sym_final,
      anon_sym_abstract,
      anon_sym_synchronized,
      anon_sym_int,
      anon_sym_float,
      anon_sym_string,
      anon_sym_boolean,
      sym_identifier,
  [453] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(146), 3,
      ts_builtin_sym_end,
      sym_number,
      sym_string,
    ACTIONS(148), 14,
      anon_sym_function,
      anon_sym_class,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_static,
      anon_sym_final,
      anon_sym_abstract,
      anon_sym_synchronized,
      anon_sym_int,
      anon_sym_float,
      anon_sym_string,
      anon_sym_boolean,
      sym_identifier,
  [479] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(150), 3,
      ts_builtin_sym_end,
      sym_number,
      sym_string,
    ACTIONS(152), 14,
      anon_sym_function,
      anon_sym_class,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_static,
      anon_sym_final,
      anon_sym_abstract,
      anon_sym_synchronized,
      anon_sym_int,
      anon_sym_float,
      anon_sym_string,
      anon_sym_boolean,
      sym_identifier,
  [505] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(154), 3,
      ts_builtin_sym_end,
      sym_number,
      sym_string,
    ACTIONS(156), 14,
      anon_sym_function,
      anon_sym_class,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_static,
      anon_sym_final,
      anon_sym_abstract,
      anon_sym_synchronized,
      anon_sym_int,
      anon_sym_float,
      anon_sym_string,
      anon_sym_boolean,
      sym_identifier,
  [531] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(158), 3,
      ts_builtin_sym_end,
      sym_number,
      sym_string,
    ACTIONS(160), 14,
      anon_sym_function,
      anon_sym_class,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_static,
      anon_sym_final,
      anon_sym_abstract,
      anon_sym_synchronized,
      anon_sym_int,
      anon_sym_float,
      anon_sym_string,
      anon_sym_boolean,
      sym_identifier,
  [557] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(162), 3,
      ts_builtin_sym_end,
      sym_number,
      sym_string,
    ACTIONS(164), 14,
      anon_sym_function,
      anon_sym_class,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_static,
      anon_sym_final,
      anon_sym_abstract,
      anon_sym_synchronized,
      anon_sym_int,
      anon_sym_float,
      anon_sym_string,
      anon_sym_boolean,
      sym_identifier,
  [583] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(106), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_number,
      sym_string,
    ACTIONS(108), 12,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_static,
      anon_sym_final,
      anon_sym_abstract,
      anon_sym_synchronized,
      anon_sym_int,
      anon_sym_float,
      anon_sym_string,
      anon_sym_boolean,
      sym_identifier,
  [608] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(98), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_number,
      sym_string,
    ACTIONS(100), 12,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_static,
      anon_sym_final,
      anon_sym_abstract,
      anon_sym_synchronized,
      anon_sym_int,
      anon_sym_float,
      anon_sym_string,
      anon_sym_boolean,
      sym_identifier,
  [633] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(162), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_number,
      sym_string,
    ACTIONS(164), 12,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_static,
      anon_sym_final,
      anon_sym_abstract,
      anon_sym_synchronized,
      anon_sym_int,
      anon_sym_float,
      anon_sym_string,
      anon_sym_boolean,
      sym_identifier,
  [658] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(154), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_number,
      sym_string,
    ACTIONS(156), 12,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_static,
      anon_sym_final,
      anon_sym_abstract,
      anon_sym_synchronized,
      anon_sym_int,
      anon_sym_float,
      anon_sym_string,
      anon_sym_boolean,
      sym_identifier,
  [683] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(126), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_number,
      sym_string,
    ACTIONS(128), 12,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_static,
      anon_sym_final,
      anon_sym_abstract,
      anon_sym_synchronized,
      anon_sym_int,
      anon_sym_float,
      anon_sym_string,
      anon_sym_boolean,
      sym_identifier,
  [708] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(130), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_number,
      sym_string,
    ACTIONS(132), 12,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_static,
      anon_sym_final,
      anon_sym_abstract,
      anon_sym_synchronized,
      anon_sym_int,
      anon_sym_float,
      anon_sym_string,
      anon_sym_boolean,
      sym_identifier,
  [733] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(146), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_number,
      sym_string,
    ACTIONS(148), 12,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_static,
      anon_sym_final,
      anon_sym_abstract,
      anon_sym_synchronized,
      anon_sym_int,
      anon_sym_float,
      anon_sym_string,
      anon_sym_boolean,
      sym_identifier,
  [758] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(102), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_number,
      sym_string,
    ACTIONS(104), 12,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_static,
      anon_sym_final,
      anon_sym_abstract,
      anon_sym_synchronized,
      anon_sym_int,
      anon_sym_float,
      anon_sym_string,
      anon_sym_boolean,
      sym_identifier,
  [783] = 4,
    STATE(40), 1,
      aux_sym_modifiers_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(166), 7,
      anon_sym_function,
      anon_sym_class,
      anon_sym_int,
      anon_sym_float,
      anon_sym_string,
      anon_sym_boolean,
      sym_identifier,
    ACTIONS(168), 7,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_static,
      anon_sym_final,
      anon_sym_abstract,
      anon_sym_synchronized,
  [809] = 4,
    STATE(40), 1,
      aux_sym_modifiers_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(170), 7,
      anon_sym_function,
      anon_sym_class,
      anon_sym_int,
      anon_sym_float,
      anon_sym_string,
      anon_sym_boolean,
      sym_identifier,
    ACTIONS(172), 7,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_static,
      anon_sym_final,
      anon_sym_abstract,
      anon_sym_synchronized,
  [835] = 3,
    ACTIONS(177), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(175), 13,
      anon_sym_function,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_static,
      anon_sym_final,
      anon_sym_abstract,
      anon_sym_synchronized,
      anon_sym_int,
      anon_sym_float,
      anon_sym_string,
      anon_sym_boolean,
      sym_identifier,
  [858] = 3,
    ACTIONS(130), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(132), 13,
      anon_sym_function,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_static,
      anon_sym_final,
      anon_sym_abstract,
      anon_sym_synchronized,
      anon_sym_int,
      anon_sym_float,
      anon_sym_string,
      anon_sym_boolean,
      sym_identifier,
  [881] = 3,
    ACTIONS(110), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(112), 13,
      anon_sym_function,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_static,
      anon_sym_final,
      anon_sym_abstract,
      anon_sym_synchronized,
      anon_sym_int,
      anon_sym_float,
      anon_sym_string,
      anon_sym_boolean,
      sym_identifier,
  [904] = 3,
    ACTIONS(181), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(179), 13,
      anon_sym_function,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_static,
      anon_sym_final,
      anon_sym_abstract,
      anon_sym_synchronized,
      anon_sym_int,
      anon_sym_float,
      anon_sym_string,
      anon_sym_boolean,
      sym_identifier,
  [927] = 4,
    STATE(48), 1,
      aux_sym_modifiers_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(166), 6,
      anon_sym_function,
      anon_sym_int,
      anon_sym_float,
      anon_sym_string,
      anon_sym_boolean,
      sym_identifier,
    ACTIONS(183), 7,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_static,
      anon_sym_final,
      anon_sym_abstract,
      anon_sym_synchronized,
  [952] = 3,
    ACTIONS(187), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(185), 13,
      anon_sym_function,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_static,
      anon_sym_final,
      anon_sym_abstract,
      anon_sym_synchronized,
      anon_sym_int,
      anon_sym_float,
      anon_sym_string,
      anon_sym_boolean,
      sym_identifier,
  [975] = 3,
    ACTIONS(191), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(189), 13,
      anon_sym_function,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_static,
      anon_sym_final,
      anon_sym_abstract,
      anon_sym_synchronized,
      anon_sym_int,
      anon_sym_float,
      anon_sym_string,
      anon_sym_boolean,
      sym_identifier,
  [998] = 4,
    STATE(48), 1,
      aux_sym_modifiers_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(170), 6,
      anon_sym_function,
      anon_sym_int,
      anon_sym_float,
      anon_sym_string,
      anon_sym_boolean,
      sym_identifier,
    ACTIONS(193), 7,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_static,
      anon_sym_final,
      anon_sym_abstract,
      anon_sym_synchronized,
  [1023] = 3,
    ACTIONS(134), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(136), 13,
      anon_sym_function,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_static,
      anon_sym_final,
      anon_sym_abstract,
      anon_sym_synchronized,
      anon_sym_int,
      anon_sym_float,
      anon_sym_string,
      anon_sym_boolean,
      sym_identifier,
  [1046] = 3,
    ACTIONS(138), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(140), 13,
      anon_sym_function,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_static,
      anon_sym_final,
      anon_sym_abstract,
      anon_sym_synchronized,
      anon_sym_int,
      anon_sym_float,
      anon_sym_string,
      anon_sym_boolean,
      sym_identifier,
  [1069] = 3,
    ACTIONS(102), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(104), 13,
      anon_sym_function,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_static,
      anon_sym_final,
      anon_sym_abstract,
      anon_sym_synchronized,
      anon_sym_int,
      anon_sym_float,
      anon_sym_string,
      anon_sym_boolean,
      sym_identifier,
  [1092] = 4,
    STATE(53), 1,
      aux_sym_modifiers_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(166), 5,
      anon_sym_int,
      anon_sym_float,
      anon_sym_string,
      anon_sym_boolean,
      sym_identifier,
    ACTIONS(196), 7,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_static,
      anon_sym_final,
      anon_sym_abstract,
      anon_sym_synchronized,
  [1116] = 4,
    STATE(53), 1,
      aux_sym_modifiers_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(170), 5,
      anon_sym_int,
      anon_sym_float,
      anon_sym_string,
      anon_sym_boolean,
      sym_identifier,
    ACTIONS(198), 7,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_static,
      anon_sym_final,
      anon_sym_abstract,
      anon_sym_synchronized,
  [1140] = 7,
    ACTIONS(80), 1,
      sym_identifier,
    ACTIONS(201), 1,
      anon_sym_function,
    ACTIONS(203), 1,
      anon_sym_class,
    STATE(95), 1,
      sym__simple_type,
    STATE(135), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(13), 4,
      anon_sym_int,
      anon_sym_float,
      anon_sym_string,
      anon_sym_boolean,
  [1166] = 7,
    ACTIONS(80), 1,
      sym_identifier,
    ACTIONS(205), 1,
      anon_sym_RPAREN,
    STATE(92), 1,
      sym_parameter,
    STATE(95), 1,
      sym__simple_type,
    STATE(133), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(13), 4,
      anon_sym_int,
      anon_sym_float,
      anon_sym_string,
      anon_sym_boolean,
  [1192] = 6,
    ACTIONS(80), 1,
      sym_identifier,
    ACTIONS(207), 1,
      anon_sym_function,
    STATE(95), 1,
      sym__simple_type,
    STATE(141), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(13), 4,
      anon_sym_int,
      anon_sym_float,
      anon_sym_string,
      anon_sym_boolean,
  [1215] = 6,
    ACTIONS(80), 1,
      sym_identifier,
    STATE(95), 1,
      sym__simple_type,
    STATE(112), 1,
      sym_parameter,
    STATE(133), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(13), 4,
      anon_sym_int,
      anon_sym_float,
      anon_sym_string,
      anon_sym_boolean,
  [1238] = 5,
    ACTIONS(80), 1,
      sym_identifier,
    STATE(95), 1,
      sym__simple_type,
    STATE(137), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(13), 4,
      anon_sym_int,
      anon_sym_float,
      anon_sym_string,
      anon_sym_boolean,
  [1258] = 5,
    ACTIONS(209), 1,
      sym_identifier,
    STATE(82), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_number,
      sym_string,
    STATE(99), 3,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
  [1278] = 5,
    ACTIONS(209), 1,
      sym_identifier,
    STATE(93), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_number,
      sym_string,
    STATE(99), 3,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
  [1298] = 5,
    ACTIONS(80), 1,
      sym_identifier,
    STATE(95), 1,
      sym__simple_type,
    STATE(138), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(13), 4,
      anon_sym_int,
      anon_sym_float,
      anon_sym_string,
      anon_sym_boolean,
  [1318] = 5,
    ACTIONS(209), 1,
      sym_identifier,
    STATE(86), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_number,
      sym_string,
    STATE(99), 3,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
  [1338] = 5,
    ACTIONS(80), 1,
      sym_identifier,
    STATE(88), 1,
      sym_type,
    STATE(95), 1,
      sym__simple_type,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(13), 4,
      anon_sym_int,
      anon_sym_float,
      anon_sym_string,
      anon_sym_boolean,
  [1358] = 5,
    ACTIONS(80), 1,
      sym_identifier,
    STATE(95), 1,
      sym__simple_type,
    STATE(122), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(13), 4,
      anon_sym_int,
      anon_sym_float,
      anon_sym_string,
      anon_sym_boolean,
  [1378] = 5,
    ACTIONS(213), 1,
      sym_identifier,
    STATE(104), 1,
      sym__simple_type,
    STATE(109), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(211), 4,
      anon_sym_int,
      anon_sym_float,
      anon_sym_string,
      anon_sym_boolean,
  [1398] = 5,
    ACTIONS(209), 1,
      sym_identifier,
    STATE(90), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_number,
      sym_string,
    STATE(99), 3,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
  [1418] = 5,
    ACTIONS(209), 1,
      sym_identifier,
    STATE(91), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_number,
      sym_string,
    STATE(99), 3,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
  [1438] = 5,
    ACTIONS(209), 1,
      sym_identifier,
    STATE(89), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_number,
      sym_string,
    STATE(99), 3,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
  [1458] = 5,
    ACTIONS(209), 1,
      sym_identifier,
    STATE(102), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_number,
      sym_string,
    STATE(99), 3,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
  [1478] = 5,
    ACTIONS(209), 1,
      sym_identifier,
    STATE(101), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_number,
      sym_string,
    STATE(99), 3,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
  [1498] = 5,
    ACTIONS(209), 1,
      sym_identifier,
    STATE(83), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_number,
      sym_string,
    STATE(99), 3,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
  [1518] = 7,
    ACTIONS(215), 1,
      anon_sym_LBRACE,
    ACTIONS(217), 1,
      anon_sym_extends,
    ACTIONS(219), 1,
      anon_sym_implements,
    STATE(19), 1,
      sym_class_body,
    STATE(77), 1,
      sym_extends_clause,
    STATE(113), 1,
      sym_implements_clause,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1541] = 7,
    ACTIONS(215), 1,
      anon_sym_LBRACE,
    ACTIONS(217), 1,
      anon_sym_extends,
    ACTIONS(219), 1,
      anon_sym_implements,
    STATE(29), 1,
      sym_class_body,
    STATE(76), 1,
      sym_extends_clause,
    STATE(117), 1,
      sym_implements_clause,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1564] = 4,
    ACTIONS(221), 1,
      anon_sym_EQ,
    ACTIONS(225), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(223), 3,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_STAR,
  [1580] = 5,
    ACTIONS(227), 1,
      anon_sym_COLON,
    ACTIONS(229), 1,
      anon_sym_LBRACE,
    STATE(23), 1,
      sym_block,
    STATE(111), 1,
      sym_return_type,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1597] = 5,
    ACTIONS(215), 1,
      anon_sym_LBRACE,
    ACTIONS(219), 1,
      anon_sym_implements,
    STATE(20), 1,
      sym_class_body,
    STATE(127), 1,
      sym_implements_clause,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1614] = 5,
    ACTIONS(215), 1,
      anon_sym_LBRACE,
    ACTIONS(219), 1,
      anon_sym_implements,
    STATE(29), 1,
      sym_class_body,
    STATE(117), 1,
      sym_implements_clause,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1631] = 5,
    ACTIONS(227), 1,
      anon_sym_COLON,
    ACTIONS(229), 1,
      anon_sym_LBRACE,
    STATE(17), 1,
      sym_block,
    STATE(126), 1,
      sym_return_type,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1648] = 5,
    ACTIONS(227), 1,
      anon_sym_COLON,
    ACTIONS(231), 1,
      anon_sym_LBRACE,
    STATE(49), 1,
      sym_block,
    STATE(119), 1,
      sym_return_type,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1665] = 3,
    ACTIONS(221), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(223), 3,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_STAR,
  [1678] = 5,
    ACTIONS(227), 1,
      anon_sym_COLON,
    ACTIONS(231), 1,
      anon_sym_LBRACE,
    STATE(43), 1,
      sym_block,
    STATE(103), 1,
      sym_return_type,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1695] = 4,
    ACTIONS(233), 1,
      anon_sym_SEMI,
    ACTIONS(235), 1,
      anon_sym_PLUS,
    ACTIONS(237), 1,
      anon_sym_STAR,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1709] = 4,
    ACTIONS(235), 1,
      anon_sym_PLUS,
    ACTIONS(237), 1,
      anon_sym_STAR,
    ACTIONS(239), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1723] = 4,
    ACTIONS(241), 1,
      anon_sym_COMMA,
    ACTIONS(244), 1,
      anon_sym_RPAREN,
    STATE(84), 1,
      aux_sym_parameters_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1737] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(223), 3,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_STAR,
  [1747] = 3,
    ACTIONS(237), 1,
      anon_sym_STAR,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(246), 2,
      anon_sym_SEMI,
      anon_sym_PLUS,
  [1759] = 4,
    ACTIONS(248), 1,
      anon_sym_COMMA,
    ACTIONS(251), 1,
      anon_sym_LBRACE,
    STATE(87), 1,
      aux_sym_implements_clause_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1773] = 4,
    ACTIONS(253), 1,
      anon_sym_COMMA,
    ACTIONS(255), 1,
      anon_sym_LBRACE,
    STATE(100), 1,
      aux_sym_implements_clause_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1787] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(246), 3,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_STAR,
  [1797] = 4,
    ACTIONS(235), 1,
      anon_sym_PLUS,
    ACTIONS(237), 1,
      anon_sym_STAR,
    ACTIONS(257), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1811] = 4,
    ACTIONS(235), 1,
      anon_sym_PLUS,
    ACTIONS(237), 1,
      anon_sym_STAR,
    ACTIONS(259), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1825] = 4,
    ACTIONS(261), 1,
      anon_sym_COMMA,
    ACTIONS(263), 1,
      anon_sym_RPAREN,
    STATE(94), 1,
      aux_sym_parameters_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1839] = 4,
    ACTIONS(235), 1,
      anon_sym_PLUS,
    ACTIONS(237), 1,
      anon_sym_STAR,
    ACTIONS(265), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1853] = 4,
    ACTIONS(261), 1,
      anon_sym_COMMA,
    ACTIONS(267), 1,
      anon_sym_RPAREN,
    STATE(84), 1,
      aux_sym_parameters_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1867] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(225), 3,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      sym_identifier,
  [1877] = 4,
    ACTIONS(235), 1,
      anon_sym_PLUS,
    ACTIONS(237), 1,
      anon_sym_STAR,
    ACTIONS(269), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1891] = 4,
    ACTIONS(235), 1,
      anon_sym_PLUS,
    ACTIONS(237), 1,
      anon_sym_STAR,
    ACTIONS(271), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1905] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(225), 3,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      sym_identifier,
  [1915] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(273), 3,
      anon_sym_SEMI,
      anon_sym_PLUS,
      anon_sym_STAR,
  [1925] = 4,
    ACTIONS(253), 1,
      anon_sym_COMMA,
    ACTIONS(275), 1,
      anon_sym_LBRACE,
    STATE(87), 1,
      aux_sym_implements_clause_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1939] = 4,
    ACTIONS(235), 1,
      anon_sym_PLUS,
    ACTIONS(237), 1,
      anon_sym_STAR,
    ACTIONS(277), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1953] = 4,
    ACTIONS(235), 1,
      anon_sym_PLUS,
    ACTIONS(237), 1,
      anon_sym_STAR,
    ACTIONS(279), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1967] = 3,
    ACTIONS(231), 1,
      anon_sym_LBRACE,
    STATE(50), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1978] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(225), 2,
      anon_sym_LBRACE,
      anon_sym_implements,
  [1987] = 3,
    ACTIONS(281), 1,
      anon_sym_LPAREN,
    STATE(75), 1,
      sym_parameters,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1998] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(225), 2,
      anon_sym_LBRACE,
      anon_sym_implements,
  [2007] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(283), 2,
      anon_sym_COLON,
      anon_sym_LBRACE,
  [2016] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(285), 2,
      anon_sym_COLON,
      anon_sym_LBRACE,
  [2025] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(287), 2,
      anon_sym_LBRACE,
      anon_sym_implements,
  [2034] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(289), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2043] = 3,
    ACTIONS(229), 1,
      anon_sym_LBRACE,
    STATE(17), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [2054] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(244), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2063] = 3,
    ACTIONS(215), 1,
      anon_sym_LBRACE,
    STATE(29), 1,
      sym_class_body,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [2074] = 3,
    ACTIONS(291), 1,
      anon_sym_EQ,
    ACTIONS(293), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [2085] = 3,
    ACTIONS(295), 1,
      anon_sym_EQ,
    ACTIONS(297), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [2096] = 3,
    ACTIONS(299), 1,
      anon_sym_EQ,
    ACTIONS(301), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [2107] = 3,
    ACTIONS(215), 1,
      anon_sym_LBRACE,
    STATE(20), 1,
      sym_class_body,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [2118] = 3,
    ACTIONS(303), 1,
      anon_sym_EQ,
    ACTIONS(305), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [2129] = 3,
    ACTIONS(231), 1,
      anon_sym_LBRACE,
    STATE(43), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [2140] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(307), 2,
      anon_sym_COLON,
      anon_sym_LBRACE,
  [2149] = 3,
    ACTIONS(309), 1,
      anon_sym_EQ,
    ACTIONS(311), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [2160] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(251), 2,
      anon_sym_COMMA,
      anon_sym_LBRACE,
  [2169] = 3,
    ACTIONS(281), 1,
      anon_sym_LPAREN,
    STATE(78), 1,
      sym_parameters,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [2180] = 3,
    ACTIONS(281), 1,
      anon_sym_LPAREN,
    STATE(79), 1,
      sym_parameters,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [2191] = 3,
    ACTIONS(281), 1,
      anon_sym_LPAREN,
    STATE(81), 1,
      sym_parameters,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [2202] = 3,
    ACTIONS(229), 1,
      anon_sym_LBRACE,
    STATE(24), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [2213] = 3,
    ACTIONS(215), 1,
      anon_sym_LBRACE,
    STATE(25), 1,
      sym_class_body,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [2224] = 3,
    ACTIONS(313), 1,
      anon_sym_EQ,
    ACTIONS(315), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [2235] = 2,
    ACTIONS(317), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [2243] = 2,
    ACTIONS(319), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [2251] = 2,
    ACTIONS(321), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [2259] = 2,
    ACTIONS(323), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [2267] = 2,
    ACTIONS(325), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [2275] = 2,
    ACTIONS(327), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [2283] = 2,
    ACTIONS(329), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [2291] = 2,
    ACTIONS(331), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [2299] = 2,
    ACTIONS(333), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [2307] = 2,
    ACTIONS(335), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [2315] = 2,
    ACTIONS(337), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [2323] = 2,
    ACTIONS(339), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [2331] = 2,
    ACTIONS(341), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [2339] = 2,
    ACTIONS(343), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [2347] = 2,
    ACTIONS(345), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(11)] = 0,
  [SMALL_STATE(12)] = 47,
  [SMALL_STATE(13)] = 94,
  [SMALL_STATE(14)] = 141,
  [SMALL_STATE(15)] = 167,
  [SMALL_STATE(16)] = 193,
  [SMALL_STATE(17)] = 219,
  [SMALL_STATE(18)] = 245,
  [SMALL_STATE(19)] = 271,
  [SMALL_STATE(20)] = 297,
  [SMALL_STATE(21)] = 323,
  [SMALL_STATE(22)] = 349,
  [SMALL_STATE(23)] = 375,
  [SMALL_STATE(24)] = 401,
  [SMALL_STATE(25)] = 427,
  [SMALL_STATE(26)] = 453,
  [SMALL_STATE(27)] = 479,
  [SMALL_STATE(28)] = 505,
  [SMALL_STATE(29)] = 531,
  [SMALL_STATE(30)] = 557,
  [SMALL_STATE(31)] = 583,
  [SMALL_STATE(32)] = 608,
  [SMALL_STATE(33)] = 633,
  [SMALL_STATE(34)] = 658,
  [SMALL_STATE(35)] = 683,
  [SMALL_STATE(36)] = 708,
  [SMALL_STATE(37)] = 733,
  [SMALL_STATE(38)] = 758,
  [SMALL_STATE(39)] = 783,
  [SMALL_STATE(40)] = 809,
  [SMALL_STATE(41)] = 835,
  [SMALL_STATE(42)] = 858,
  [SMALL_STATE(43)] = 881,
  [SMALL_STATE(44)] = 904,
  [SMALL_STATE(45)] = 927,
  [SMALL_STATE(46)] = 952,
  [SMALL_STATE(47)] = 975,
  [SMALL_STATE(48)] = 998,
  [SMALL_STATE(49)] = 1023,
  [SMALL_STATE(50)] = 1046,
  [SMALL_STATE(51)] = 1069,
  [SMALL_STATE(52)] = 1092,
  [SMALL_STATE(53)] = 1116,
  [SMALL_STATE(54)] = 1140,
  [SMALL_STATE(55)] = 1166,
  [SMALL_STATE(56)] = 1192,
  [SMALL_STATE(57)] = 1215,
  [SMALL_STATE(58)] = 1238,
  [SMALL_STATE(59)] = 1258,
  [SMALL_STATE(60)] = 1278,
  [SMALL_STATE(61)] = 1298,
  [SMALL_STATE(62)] = 1318,
  [SMALL_STATE(63)] = 1338,
  [SMALL_STATE(64)] = 1358,
  [SMALL_STATE(65)] = 1378,
  [SMALL_STATE(66)] = 1398,
  [SMALL_STATE(67)] = 1418,
  [SMALL_STATE(68)] = 1438,
  [SMALL_STATE(69)] = 1458,
  [SMALL_STATE(70)] = 1478,
  [SMALL_STATE(71)] = 1498,
  [SMALL_STATE(72)] = 1518,
  [SMALL_STATE(73)] = 1541,
  [SMALL_STATE(74)] = 1564,
  [SMALL_STATE(75)] = 1580,
  [SMALL_STATE(76)] = 1597,
  [SMALL_STATE(77)] = 1614,
  [SMALL_STATE(78)] = 1631,
  [SMALL_STATE(79)] = 1648,
  [SMALL_STATE(80)] = 1665,
  [SMALL_STATE(81)] = 1678,
  [SMALL_STATE(82)] = 1695,
  [SMALL_STATE(83)] = 1709,
  [SMALL_STATE(84)] = 1723,
  [SMALL_STATE(85)] = 1737,
  [SMALL_STATE(86)] = 1747,
  [SMALL_STATE(87)] = 1759,
  [SMALL_STATE(88)] = 1773,
  [SMALL_STATE(89)] = 1787,
  [SMALL_STATE(90)] = 1797,
  [SMALL_STATE(91)] = 1811,
  [SMALL_STATE(92)] = 1825,
  [SMALL_STATE(93)] = 1839,
  [SMALL_STATE(94)] = 1853,
  [SMALL_STATE(95)] = 1867,
  [SMALL_STATE(96)] = 1877,
  [SMALL_STATE(97)] = 1891,
  [SMALL_STATE(98)] = 1905,
  [SMALL_STATE(99)] = 1915,
  [SMALL_STATE(100)] = 1925,
  [SMALL_STATE(101)] = 1939,
  [SMALL_STATE(102)] = 1953,
  [SMALL_STATE(103)] = 1967,
  [SMALL_STATE(104)] = 1978,
  [SMALL_STATE(105)] = 1987,
  [SMALL_STATE(106)] = 1998,
  [SMALL_STATE(107)] = 2007,
  [SMALL_STATE(108)] = 2016,
  [SMALL_STATE(109)] = 2025,
  [SMALL_STATE(110)] = 2034,
  [SMALL_STATE(111)] = 2043,
  [SMALL_STATE(112)] = 2054,
  [SMALL_STATE(113)] = 2063,
  [SMALL_STATE(114)] = 2074,
  [SMALL_STATE(115)] = 2085,
  [SMALL_STATE(116)] = 2096,
  [SMALL_STATE(117)] = 2107,
  [SMALL_STATE(118)] = 2118,
  [SMALL_STATE(119)] = 2129,
  [SMALL_STATE(120)] = 2140,
  [SMALL_STATE(121)] = 2149,
  [SMALL_STATE(122)] = 2160,
  [SMALL_STATE(123)] = 2169,
  [SMALL_STATE(124)] = 2180,
  [SMALL_STATE(125)] = 2191,
  [SMALL_STATE(126)] = 2202,
  [SMALL_STATE(127)] = 2213,
  [SMALL_STATE(128)] = 2224,
  [SMALL_STATE(129)] = 2235,
  [SMALL_STATE(130)] = 2243,
  [SMALL_STATE(131)] = 2251,
  [SMALL_STATE(132)] = 2259,
  [SMALL_STATE(133)] = 2267,
  [SMALL_STATE(134)] = 2275,
  [SMALL_STATE(135)] = 2283,
  [SMALL_STATE(136)] = 2291,
  [SMALL_STATE(137)] = 2299,
  [SMALL_STATE(138)] = 2307,
  [SMALL_STATE(139)] = 2315,
  [SMALL_STATE(140)] = 2323,
  [SMALL_STATE(141)] = 2331,
  [SMALL_STATE(142)] = 2339,
  [SMALL_STATE(143)] = 2347,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1, 0, 0),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0),
  [23] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(132),
  [26] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(129),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(39),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(95),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(74),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(85),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(52),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(95),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(74),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(85),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_class_body_repeat1, 2, 0, 0), SHIFT_REPEAT(142),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_class_body_repeat1, 2, 0, 0), SHIFT_REPEAT(45),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_body_repeat1, 2, 0, 0),
  [92] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_class_body_repeat1, 2, 0, 0), SHIFT_REPEAT(95),
  [95] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_class_body_repeat1, 2, 0, 0), SHIFT_REPEAT(98),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1, 0, 0),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1, 0, 0),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2, 0, 0),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2, 0, 0),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_statement, 2, 0, 0),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_statement, 2, 0, 0),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_declaration, 5, 0, 0),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method_declaration, 5, 0, 0),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_body, 3, 0, 0),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_body, 3, 0, 0),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_declaration, 3, 0, 0),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_declaration, 3, 0, 0),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_declaration, 5, 0, 0),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_declaration, 5, 0, 0),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 5, 0, 0),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 5, 0, 0),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, 0, 0),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3, 0, 0),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_declaration, 4, 0, 0),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method_declaration, 4, 0, 0),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_declaration, 6, 0, 0),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method_declaration, 6, 0, 0),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_declaration, 6, 0, 0),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_declaration, 6, 0, 0),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 6, 0, 0),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 6, 0, 0),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_body, 2, 0, 0),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_body, 2, 0, 0),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 3, 0, 0),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 3, 0, 0),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_declaration, 4, 0, 0),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_declaration, 4, 0, 0),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 4, 0, 0),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 4, 0, 0),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_modifiers, 1, 0, 0),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_modifiers_repeat1, 2, 0, 0),
  [172] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_modifiers_repeat1, 2, 0, 0), SHIFT_REPEAT(40),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_declaration, 6, 0, 0),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_declaration, 6, 0, 0),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_declaration, 3, 0, 0),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_declaration, 3, 0, 0),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_declaration, 4, 0, 0),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_declaration, 4, 0, 0),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_declaration, 5, 0, 0),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_declaration, 5, 0, 0),
  [193] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_modifiers_repeat1, 2, 0, 0), SHIFT_REPEAT(48),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [198] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_modifiers_repeat1, 2, 0, 0), SHIFT_REPEAT(53),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_expression, 1, 0, 0),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1, 0, 0),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_expression, 3, 0, 0),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [241] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(57),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2, 0, 0),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, 0, 0),
  [248] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_implements_clause_repeat1, 2, 0, 0), SHIFT_REPEAT(64),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_implements_clause_repeat1, 2, 0, 0),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_implements_clause, 2, 0, 0),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1, 0, 0),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_implements_clause, 3, 0, 0),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 4, 0, 0),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 3, 0, 0),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extends_clause, 2, 0, 0),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2, 0, 0),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 2, 0, 0),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [319] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_type, 2, 0, 0),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_gosu(void) {
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
