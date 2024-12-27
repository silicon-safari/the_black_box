#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 181
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 77
#define ALIAS_COUNT 0
#define TOKEN_COUNT 47
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_COLON = 1,
  anon_sym_EQ = 2,
  anon_sym_SEMI = 3,
  anon_sym_function = 4,
  anon_sym_class = 5,
  anon_sym_public = 6,
  anon_sym_private = 7,
  anon_sym_protected = 8,
  anon_sym_static = 9,
  anon_sym_final = 10,
  anon_sym_abstract = 11,
  anon_sym_synchronized = 12,
  anon_sym_LPAREN = 13,
  anon_sym_COMMA = 14,
  anon_sym_RPAREN = 15,
  anon_sym_LBRACE = 16,
  anon_sym_RBRACE = 17,
  anon_sym_int = 18,
  anon_sym_float = 19,
  anon_sym_string = 20,
  anon_sym_boolean = 21,
  anon_sym_PIPE_PIPE = 22,
  anon_sym_AMP_AMP = 23,
  anon_sym_PIPE = 24,
  anon_sym_CARET = 25,
  anon_sym_AMP = 26,
  anon_sym_EQ_EQ = 27,
  anon_sym_BANG_EQ = 28,
  anon_sym_LT = 29,
  anon_sym_LT_EQ = 30,
  anon_sym_GT = 31,
  anon_sym_GT_EQ = 32,
  anon_sym_LT_LT = 33,
  anon_sym_GT_GT = 34,
  anon_sym_PLUS = 35,
  anon_sym_DASH = 36,
  anon_sym_STAR = 37,
  anon_sym_SLASH = 38,
  anon_sym_PERCENT = 39,
  sym_identifier = 40,
  sym_number = 41,
  sym_string = 42,
  sym_line_comment = 43,
  sym_block_comment = 44,
  anon_sym_extends = 45,
  anon_sym_implements = 46,
  sym_program = 47,
  sym__toplevel_statement = 48,
  sym_statement = 49,
  sym_variable_declaration = 50,
  sym_method_declaration = 51,
  sym_class_declaration = 52,
  sym_modifiers = 53,
  sym_parameters = 54,
  sym_parameter = 55,
  sym_return_type = 56,
  sym_class_body = 57,
  sym__class_body_declaration = 58,
  sym_field_declaration = 59,
  sym_type = 60,
  sym__simple_type = 61,
  sym_expression_statement = 62,
  sym_expression = 63,
  sym_assignment_expression = 64,
  sym_binary_expression = 65,
  sym_primary_expression = 66,
  sym_extends_clause = 67,
  sym_implements_clause = 68,
  sym_block = 69,
  sym__statement = 70,
  aux_sym_program_repeat1 = 71,
  aux_sym_modifiers_repeat1 = 72,
  aux_sym_parameters_repeat1 = 73,
  aux_sym_class_body_repeat1 = 74,
  aux_sym_implements_clause_repeat1 = 75,
  aux_sym_block_repeat1 = 76,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_COLON] = ":",
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
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_int] = "int",
  [anon_sym_float] = "float",
  [anon_sym_string] = "string",
  [anon_sym_boolean] = "boolean",
  [anon_sym_PIPE_PIPE] = "||",
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_PIPE] = "|",
  [anon_sym_CARET] = "^",
  [anon_sym_AMP] = "&",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_LT] = "<",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT] = ">",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_LT_LT] = "<<",
  [anon_sym_GT_GT] = ">>",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_PERCENT] = "%",
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
  [anon_sym_COLON] = anon_sym_COLON,
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
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_int] = anon_sym_int,
  [anon_sym_float] = anon_sym_float,
  [anon_sym_string] = anon_sym_string,
  [anon_sym_boolean] = anon_sym_boolean,
  [anon_sym_PIPE_PIPE] = anon_sym_PIPE_PIPE,
  [anon_sym_AMP_AMP] = anon_sym_AMP_AMP,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_LT_LT] = anon_sym_LT_LT,
  [anon_sym_GT_GT] = anon_sym_GT_GT,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
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
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
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
  [anon_sym_PIPE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
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
    .visible = false,
    .named = true,
    .supertype = true,
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
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym__simple_type] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_expression_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = false,
    .named = true,
    .supertype = true,
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
    .visible = false,
    .named = true,
    .supertype = true,
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
  [7] = 4,
  [8] = 4,
  [9] = 5,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 14,
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
  [31] = 31,
  [32] = 32,
  [33] = 22,
  [34] = 26,
  [35] = 35,
  [36] = 24,
  [37] = 25,
  [38] = 38,
  [39] = 29,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
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
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 46,
  [67] = 51,
  [68] = 58,
  [69] = 49,
  [70] = 56,
  [71] = 71,
  [72] = 49,
  [73] = 43,
  [74] = 45,
  [75] = 55,
  [76] = 54,
  [77] = 42,
  [78] = 61,
  [79] = 56,
  [80] = 44,
  [81] = 50,
  [82] = 64,
  [83] = 65,
  [84] = 64,
  [85] = 65,
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
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 109,
  [112] = 91,
  [113] = 90,
  [114] = 97,
  [115] = 98,
  [116] = 95,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 120,
  [123] = 123,
  [124] = 124,
  [125] = 121,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 127,
  [140] = 130,
  [141] = 136,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 131,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 138,
  [153] = 153,
  [154] = 154,
  [155] = 149,
  [156] = 142,
  [157] = 157,
  [158] = 153,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 159,
  [163] = 148,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 166,
  [176] = 169,
  [177] = 177,
  [178] = 177,
  [179] = 179,
  [180] = 173,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(93);
      ADVANCE_MAP(
        '!', 11,
        '"', 3,
        '%', 145,
        '&', 132,
        '(', 115,
        ')', 117,
        '*', 143,
        '+', 141,
        ',', 116,
        '-', 142,
        '/', 144,
        ':', 94,
        ';', 96,
        '<', 135,
        '=', 95,
        '>', 137,
        '^', 131,
        'a', 19,
        'b', 63,
        'c', 47,
        'e', 90,
        'f', 40,
        'i', 52,
        'p', 69,
        's', 77,
        '{', 118,
        '|', 130,
        '}', 119,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(222);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == ',') ADVANCE(116);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == '{') ADVANCE(118);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(222);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '"', 3,
        '/', 5,
        ':', 94,
        'a', 154,
        'f', 173,
        'p', 199,
        's', 212,
        '{', 118,
        '}', 119,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(222);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(223);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == ')') ADVANCE(117);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == 'b') ADVANCE(194);
      if (lookahead == 'f') ADVANCE(184);
      if (lookahead == 'i') ADVANCE(193);
      if (lookahead == 's') ADVANCE(215);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(7);
      if (lookahead == '/') ADVANCE(224);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == '/') ADVANCE(225);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(6);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == 'c') ADVANCE(180);
      if (lookahead == 'f') ADVANCE(218);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 9:
      ADVANCE_MAP(
        '/', 5,
        'a', 154,
        'b', 194,
        'f', 171,
        'i', 193,
        'p', 199,
        's', 209,
        '}', 119,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(9);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 10:
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == 'b') ADVANCE(194);
      if (lookahead == 'f') ADVANCE(183);
      if (lookahead == 'i') ADVANCE(193);
      if (lookahead == 's') ADVANCE(215);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(10);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 11:
      if (lookahead == '=') ADVANCE(134);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(75);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(48);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(88);
      if (lookahead == 'r') ADVANCE(45);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(81);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(57);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(25);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(86);
      END_STATE();
    case 19:
      if (lookahead == 'b') ADVANCE(76);
      END_STATE();
    case 20:
      if (lookahead == 'b') ADVANCE(50);
      END_STATE();
    case 21:
      if (lookahead == 'c') ADVANCE(39);
      END_STATE();
    case 22:
      if (lookahead == 'c') ADVANCE(101);
      END_STATE();
    case 23:
      if (lookahead == 'c') ADVANCE(107);
      END_STATE();
    case 24:
      if (lookahead == 'c') ADVANCE(83);
      END_STATE();
    case 25:
      if (lookahead == 'c') ADVANCE(82);
      END_STATE();
    case 26:
      if (lookahead == 'c') ADVANCE(87);
      END_STATE();
    case 27:
      if (lookahead == 'd') ADVANCE(105);
      END_STATE();
    case 28:
      if (lookahead == 'd') ADVANCE(113);
      END_STATE();
    case 29:
      if (lookahead == 'd') ADVANCE(73);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(103);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(16);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 38:
      if (lookahead == 'g') ADVANCE(124);
      END_STATE();
    case 39:
      if (lookahead == 'h') ADVANCE(71);
      END_STATE();
    case 40:
      if (lookahead == 'i') ADVANCE(59);
      if (lookahead == 'l') ADVANCE(65);
      if (lookahead == 'u') ADVANCE(54);
      END_STATE();
    case 41:
      if (lookahead == 'i') ADVANCE(89);
      if (lookahead == 'o') ADVANCE(84);
      END_STATE();
    case 42:
      if (lookahead == 'i') ADVANCE(91);
      END_STATE();
    case 43:
      if (lookahead == 'i') ADVANCE(66);
      END_STATE();
    case 44:
      if (lookahead == 'i') ADVANCE(22);
      END_STATE();
    case 45:
      if (lookahead == 'i') ADVANCE(56);
      END_STATE();
    case 46:
      if (lookahead == 'i') ADVANCE(23);
      END_STATE();
    case 47:
      if (lookahead == 'l') ADVANCE(12);
      END_STATE();
    case 48:
      if (lookahead == 'l') ADVANCE(109);
      END_STATE();
    case 49:
      if (lookahead == 'l') ADVANCE(36);
      END_STATE();
    case 50:
      if (lookahead == 'l') ADVANCE(44);
      END_STATE();
    case 51:
      if (lookahead == 'l') ADVANCE(30);
      END_STATE();
    case 52:
      if (lookahead == 'm') ADVANCE(68);
      if (lookahead == 'n') ADVANCE(79);
      END_STATE();
    case 53:
      if (lookahead == 'm') ADVANCE(37);
      END_STATE();
    case 54:
      if (lookahead == 'n') ADVANCE(24);
      END_STATE();
    case 55:
      if (lookahead == 'n') ADVANCE(29);
      END_STATE();
    case 56:
      if (lookahead == 'n') ADVANCE(38);
      END_STATE();
    case 57:
      if (lookahead == 'n') ADVANCE(126);
      END_STATE();
    case 58:
      if (lookahead == 'n') ADVANCE(97);
      END_STATE();
    case 59:
      if (lookahead == 'n') ADVANCE(13);
      END_STATE();
    case 60:
      if (lookahead == 'n') ADVANCE(21);
      END_STATE();
    case 61:
      if (lookahead == 'n') ADVANCE(42);
      END_STATE();
    case 62:
      if (lookahead == 'n') ADVANCE(85);
      END_STATE();
    case 63:
      if (lookahead == 'o') ADVANCE(64);
      END_STATE();
    case 64:
      if (lookahead == 'o') ADVANCE(49);
      END_STATE();
    case 65:
      if (lookahead == 'o') ADVANCE(15);
      END_STATE();
    case 66:
      if (lookahead == 'o') ADVANCE(58);
      END_STATE();
    case 67:
      if (lookahead == 'o') ADVANCE(61);
      END_STATE();
    case 68:
      if (lookahead == 'p') ADVANCE(51);
      END_STATE();
    case 69:
      if (lookahead == 'r') ADVANCE(41);
      if (lookahead == 'u') ADVANCE(20);
      END_STATE();
    case 70:
      if (lookahead == 'r') ADVANCE(17);
      END_STATE();
    case 71:
      if (lookahead == 'r') ADVANCE(67);
      END_STATE();
    case 72:
      if (lookahead == 's') ADVANCE(99);
      END_STATE();
    case 73:
      if (lookahead == 's') ADVANCE(226);
      END_STATE();
    case 74:
      if (lookahead == 's') ADVANCE(227);
      END_STATE();
    case 75:
      if (lookahead == 's') ADVANCE(72);
      END_STATE();
    case 76:
      if (lookahead == 's') ADVANCE(80);
      END_STATE();
    case 77:
      if (lookahead == 't') ADVANCE(14);
      if (lookahead == 'y') ADVANCE(60);
      END_STATE();
    case 78:
      if (lookahead == 't') ADVANCE(35);
      END_STATE();
    case 79:
      if (lookahead == 't') ADVANCE(120);
      END_STATE();
    case 80:
      if (lookahead == 't') ADVANCE(70);
      END_STATE();
    case 81:
      if (lookahead == 't') ADVANCE(122);
      END_STATE();
    case 82:
      if (lookahead == 't') ADVANCE(111);
      END_STATE();
    case 83:
      if (lookahead == 't') ADVANCE(43);
      END_STATE();
    case 84:
      if (lookahead == 't') ADVANCE(33);
      END_STATE();
    case 85:
      if (lookahead == 't') ADVANCE(74);
      END_STATE();
    case 86:
      if (lookahead == 't') ADVANCE(31);
      END_STATE();
    case 87:
      if (lookahead == 't') ADVANCE(32);
      END_STATE();
    case 88:
      if (lookahead == 't') ADVANCE(46);
      END_STATE();
    case 89:
      if (lookahead == 'v') ADVANCE(18);
      END_STATE();
    case 90:
      if (lookahead == 'x') ADVANCE(78);
      END_STATE();
    case 91:
      if (lookahead == 'z') ADVANCE(34);
      END_STATE();
    case 92:
      if (eof) ADVANCE(93);
      ADVANCE_MAP(
        '"', 3,
        '/', 5,
        ':', 94,
        'a', 154,
        'c', 180,
        'f', 172,
        'p', 199,
        's', 212,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(92);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(222);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(133);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_function);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_function);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_class);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_class);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_public);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_public);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_private);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_private);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_protected);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_protected);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_static);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_static);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_final);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_final);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_abstract);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_abstract);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_synchronized);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_synchronized);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_int);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_int);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_float);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_string);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_boolean);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_boolean);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(128);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(129);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(139);
      if (lookahead == '=') ADVANCE(136);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(138);
      if (lookahead == '>') ADVANCE(140);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(7);
      if (lookahead == '/') ADVANCE(224);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(217);
      if (lookahead == 'r') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(191);
      if (lookahead == 'l') ADVANCE(198);
      if (lookahead == 'u') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(191);
      if (lookahead == 'u') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(219);
      if (lookahead == 'o') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(198);
      if (lookahead == 'u') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(174);
      if (lookahead == 'u') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(148);
      if (lookahead == 'y') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(149);
      if (lookahead == 'y') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'z') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(221);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(222);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(224);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_block_comment);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_extends);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_implements);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 92},
  [2] = {.lex_state = 92},
  [3] = {.lex_state = 92},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 9},
  [12] = {.lex_state = 9},
  [13] = {.lex_state = 9},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 92},
  [43] = {.lex_state = 92},
  [44] = {.lex_state = 92},
  [45] = {.lex_state = 92},
  [46] = {.lex_state = 92},
  [47] = {.lex_state = 92},
  [48] = {.lex_state = 92},
  [49] = {.lex_state = 92},
  [50] = {.lex_state = 92},
  [51] = {.lex_state = 92},
  [52] = {.lex_state = 92},
  [53] = {.lex_state = 92},
  [54] = {.lex_state = 92},
  [55] = {.lex_state = 92},
  [56] = {.lex_state = 92},
  [57] = {.lex_state = 9},
  [58] = {.lex_state = 92},
  [59] = {.lex_state = 92},
  [60] = {.lex_state = 9},
  [61] = {.lex_state = 92},
  [62] = {.lex_state = 9},
  [63] = {.lex_state = 9},
  [64] = {.lex_state = 9},
  [65] = {.lex_state = 9},
  [66] = {.lex_state = 9},
  [67] = {.lex_state = 9},
  [68] = {.lex_state = 9},
  [69] = {.lex_state = 9},
  [70] = {.lex_state = 9},
  [71] = {.lex_state = 92},
  [72] = {.lex_state = 2},
  [73] = {.lex_state = 2},
  [74] = {.lex_state = 2},
  [75] = {.lex_state = 2},
  [76] = {.lex_state = 2},
  [77] = {.lex_state = 2},
  [78] = {.lex_state = 2},
  [79] = {.lex_state = 2},
  [80] = {.lex_state = 2},
  [81] = {.lex_state = 2},
  [82] = {.lex_state = 92},
  [83] = {.lex_state = 92},
  [84] = {.lex_state = 2},
  [85] = {.lex_state = 2},
  [86] = {.lex_state = 4},
  [87] = {.lex_state = 4},
  [88] = {.lex_state = 10},
  [89] = {.lex_state = 4},
  [90] = {.lex_state = 1},
  [91] = {.lex_state = 1},
  [92] = {.lex_state = 4},
  [93] = {.lex_state = 1},
  [94] = {.lex_state = 4},
  [95] = {.lex_state = 4},
  [96] = {.lex_state = 1},
  [97] = {.lex_state = 1},
  [98] = {.lex_state = 4},
  [99] = {.lex_state = 4},
  [100] = {.lex_state = 1},
  [101] = {.lex_state = 1},
  [102] = {.lex_state = 1},
  [103] = {.lex_state = 1},
  [104] = {.lex_state = 1},
  [105] = {.lex_state = 1},
  [106] = {.lex_state = 1},
  [107] = {.lex_state = 1},
  [108] = {.lex_state = 1},
  [109] = {.lex_state = 1},
  [110] = {.lex_state = 1},
  [111] = {.lex_state = 1},
  [112] = {.lex_state = 1},
  [113] = {.lex_state = 1},
  [114] = {.lex_state = 1},
  [115] = {.lex_state = 4},
  [116] = {.lex_state = 4},
  [117] = {.lex_state = 1},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 8},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 1},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 1},
  [131] = {.lex_state = 1},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 1},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 1},
  [167] = {.lex_state = 1},
  [168] = {.lex_state = 1},
  [169] = {.lex_state = 1},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 1},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 1},
  [174] = {.lex_state = 1},
  [175] = {.lex_state = 1},
  [176] = {.lex_state = 1},
  [177] = {.lex_state = 1},
  [178] = {.lex_state = 1},
  [179] = {.lex_state = 1},
  [180] = {.lex_state = 1},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
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
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_int] = ACTIONS(1),
    [anon_sym_float] = ACTIONS(1),
    [anon_sym_string] = ACTIONS(1),
    [anon_sym_boolean] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_LT_LT] = ACTIONS(1),
    [anon_sym_GT_GT] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
    [anon_sym_extends] = ACTIONS(1),
    [anon_sym_implements] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(170),
    [sym__toplevel_statement] = STATE(2),
    [sym_statement] = STATE(2),
    [sym_variable_declaration] = STATE(42),
    [sym_method_declaration] = STATE(2),
    [sym_class_declaration] = STATE(2),
    [sym_modifiers] = STATE(123),
    [sym_expression_statement] = STATE(42),
    [sym_expression] = STATE(22),
    [sym_assignment_expression] = STATE(35),
    [sym_binary_expression] = STATE(35),
    [sym_primary_expression] = STATE(35),
    [aux_sym_program_repeat1] = STATE(2),
    [aux_sym_modifiers_repeat1] = STATE(82),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_COLON] = ACTIONS(7),
    [anon_sym_function] = ACTIONS(9),
    [anon_sym_class] = ACTIONS(11),
    [anon_sym_public] = ACTIONS(13),
    [anon_sym_private] = ACTIONS(13),
    [anon_sym_protected] = ACTIONS(13),
    [anon_sym_static] = ACTIONS(13),
    [anon_sym_final] = ACTIONS(13),
    [anon_sym_abstract] = ACTIONS(13),
    [anon_sym_synchronized] = ACTIONS(13),
    [sym_identifier] = ACTIONS(15),
    [sym_number] = ACTIONS(17),
    [sym_string] = ACTIONS(17),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 14,
    ACTIONS(7), 1,
      anon_sym_COLON,
    ACTIONS(9), 1,
      anon_sym_function,
    ACTIONS(11), 1,
      anon_sym_class,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    STATE(22), 1,
      sym_expression,
    STATE(82), 1,
      aux_sym_modifiers_repeat1,
    STATE(123), 1,
      sym_modifiers,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_number,
      sym_string,
    STATE(42), 2,
      sym_variable_declaration,
      sym_expression_statement,
    STATE(35), 3,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    STATE(3), 5,
      sym__toplevel_statement,
      sym_statement,
      sym_method_declaration,
      sym_class_declaration,
      aux_sym_program_repeat1,
    ACTIONS(13), 7,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_static,
      anon_sym_final,
      anon_sym_abstract,
      anon_sym_synchronized,
  [58] = 14,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    ACTIONS(23), 1,
      anon_sym_COLON,
    ACTIONS(26), 1,
      anon_sym_function,
    ACTIONS(29), 1,
      anon_sym_class,
    ACTIONS(35), 1,
      sym_identifier,
    STATE(22), 1,
      sym_expression,
    STATE(82), 1,
      aux_sym_modifiers_repeat1,
    STATE(123), 1,
      sym_modifiers,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(38), 2,
      sym_number,
      sym_string,
    STATE(42), 2,
      sym_variable_declaration,
      sym_expression_statement,
    STATE(35), 3,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    STATE(3), 5,
      sym__toplevel_statement,
      sym_statement,
      sym_method_declaration,
      sym_class_declaration,
      aux_sym_program_repeat1,
    ACTIONS(32), 7,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_static,
      anon_sym_final,
      anon_sym_abstract,
      anon_sym_synchronized,
  [116] = 13,
    ACTIONS(41), 1,
      anon_sym_COLON,
    ACTIONS(45), 1,
      anon_sym_LBRACE,
    ACTIONS(47), 1,
      anon_sym_RBRACE,
    ACTIONS(49), 1,
      sym_identifier,
    STATE(33), 1,
      sym_expression,
    STATE(84), 1,
      aux_sym_modifiers_repeat1,
    STATE(157), 1,
      sym_modifiers,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_number,
      sym_string,
    STATE(77), 2,
      sym_variable_declaration,
      sym_expression_statement,
    STATE(35), 3,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    STATE(6), 4,
      sym_statement,
      sym_block,
      sym__statement,
      aux_sym_block_repeat1,
    ACTIONS(43), 7,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_static,
      anon_sym_final,
      anon_sym_abstract,
      anon_sym_synchronized,
  [170] = 13,
    ACTIONS(41), 1,
      anon_sym_COLON,
    ACTIONS(45), 1,
      anon_sym_LBRACE,
    ACTIONS(49), 1,
      sym_identifier,
    ACTIONS(51), 1,
      anon_sym_RBRACE,
    STATE(33), 1,
      sym_expression,
    STATE(84), 1,
      aux_sym_modifiers_repeat1,
    STATE(157), 1,
      sym_modifiers,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_number,
      sym_string,
    STATE(77), 2,
      sym_variable_declaration,
      sym_expression_statement,
    STATE(35), 3,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    STATE(10), 4,
      sym_statement,
      sym_block,
      sym__statement,
      aux_sym_block_repeat1,
    ACTIONS(43), 7,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_static,
      anon_sym_final,
      anon_sym_abstract,
      anon_sym_synchronized,
  [224] = 13,
    ACTIONS(41), 1,
      anon_sym_COLON,
    ACTIONS(45), 1,
      anon_sym_LBRACE,
    ACTIONS(49), 1,
      sym_identifier,
    ACTIONS(53), 1,
      anon_sym_RBRACE,
    STATE(33), 1,
      sym_expression,
    STATE(84), 1,
      aux_sym_modifiers_repeat1,
    STATE(157), 1,
      sym_modifiers,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_number,
      sym_string,
    STATE(77), 2,
      sym_variable_declaration,
      sym_expression_statement,
    STATE(35), 3,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    STATE(10), 4,
      sym_statement,
      sym_block,
      sym__statement,
      aux_sym_block_repeat1,
    ACTIONS(43), 7,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_static,
      anon_sym_final,
      anon_sym_abstract,
      anon_sym_synchronized,
  [278] = 13,
    ACTIONS(41), 1,
      anon_sym_COLON,
    ACTIONS(45), 1,
      anon_sym_LBRACE,
    ACTIONS(49), 1,
      sym_identifier,
    ACTIONS(55), 1,
      anon_sym_RBRACE,
    STATE(33), 1,
      sym_expression,
    STATE(84), 1,
      aux_sym_modifiers_repeat1,
    STATE(157), 1,
      sym_modifiers,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_number,
      sym_string,
    STATE(77), 2,
      sym_variable_declaration,
      sym_expression_statement,
    STATE(35), 3,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    STATE(9), 4,
      sym_statement,
      sym_block,
      sym__statement,
      aux_sym_block_repeat1,
    ACTIONS(43), 7,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_static,
      anon_sym_final,
      anon_sym_abstract,
      anon_sym_synchronized,
  [332] = 13,
    ACTIONS(41), 1,
      anon_sym_COLON,
    ACTIONS(45), 1,
      anon_sym_LBRACE,
    ACTIONS(49), 1,
      sym_identifier,
    ACTIONS(57), 1,
      anon_sym_RBRACE,
    STATE(33), 1,
      sym_expression,
    STATE(84), 1,
      aux_sym_modifiers_repeat1,
    STATE(157), 1,
      sym_modifiers,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_number,
      sym_string,
    STATE(77), 2,
      sym_variable_declaration,
      sym_expression_statement,
    STATE(35), 3,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    STATE(5), 4,
      sym_statement,
      sym_block,
      sym__statement,
      aux_sym_block_repeat1,
    ACTIONS(43), 7,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_static,
      anon_sym_final,
      anon_sym_abstract,
      anon_sym_synchronized,
  [386] = 13,
    ACTIONS(41), 1,
      anon_sym_COLON,
    ACTIONS(45), 1,
      anon_sym_LBRACE,
    ACTIONS(49), 1,
      sym_identifier,
    ACTIONS(59), 1,
      anon_sym_RBRACE,
    STATE(33), 1,
      sym_expression,
    STATE(84), 1,
      aux_sym_modifiers_repeat1,
    STATE(157), 1,
      sym_modifiers,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_number,
      sym_string,
    STATE(77), 2,
      sym_variable_declaration,
      sym_expression_statement,
    STATE(35), 3,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    STATE(10), 4,
      sym_statement,
      sym_block,
      sym__statement,
      aux_sym_block_repeat1,
    ACTIONS(43), 7,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_static,
      anon_sym_final,
      anon_sym_abstract,
      anon_sym_synchronized,
  [440] = 13,
    ACTIONS(61), 1,
      anon_sym_COLON,
    ACTIONS(67), 1,
      anon_sym_LBRACE,
    ACTIONS(70), 1,
      anon_sym_RBRACE,
    ACTIONS(72), 1,
      sym_identifier,
    STATE(33), 1,
      sym_expression,
    STATE(84), 1,
      aux_sym_modifiers_repeat1,
    STATE(157), 1,
      sym_modifiers,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(75), 2,
      sym_number,
      sym_string,
    STATE(77), 2,
      sym_variable_declaration,
      sym_expression_statement,
    STATE(35), 3,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    STATE(10), 4,
      sym_statement,
      sym_block,
      sym__statement,
      aux_sym_block_repeat1,
    ACTIONS(64), 7,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_static,
      anon_sym_final,
      anon_sym_abstract,
      anon_sym_synchronized,
  [494] = 11,
    ACTIONS(78), 1,
      anon_sym_function,
    ACTIONS(84), 1,
      anon_sym_RBRACE,
    ACTIONS(89), 1,
      sym_identifier,
    STATE(64), 1,
      aux_sym_modifiers_repeat1,
    STATE(88), 1,
      sym_modifiers,
    STATE(131), 1,
      sym__simple_type,
    STATE(168), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(86), 4,
      anon_sym_int,
      anon_sym_float,
      anon_sym_string,
      anon_sym_boolean,
    STATE(11), 4,
      sym_method_declaration,
      sym__class_body_declaration,
      sym_field_declaration,
      aux_sym_class_body_repeat1,
    ACTIONS(81), 7,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_static,
      anon_sym_final,
      anon_sym_abstract,
      anon_sym_synchronized,
  [541] = 11,
    ACTIONS(92), 1,
      anon_sym_function,
    ACTIONS(96), 1,
      anon_sym_RBRACE,
    ACTIONS(100), 1,
      sym_identifier,
    STATE(64), 1,
      aux_sym_modifiers_repeat1,
    STATE(88), 1,
      sym_modifiers,
    STATE(131), 1,
      sym__simple_type,
    STATE(168), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(98), 4,
      anon_sym_int,
      anon_sym_float,
      anon_sym_string,
      anon_sym_boolean,
    STATE(13), 4,
      sym_method_declaration,
      sym__class_body_declaration,
      sym_field_declaration,
      aux_sym_class_body_repeat1,
    ACTIONS(94), 7,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_static,
      anon_sym_final,
      anon_sym_abstract,
      anon_sym_synchronized,
  [588] = 11,
    ACTIONS(92), 1,
      anon_sym_function,
    ACTIONS(100), 1,
      sym_identifier,
    ACTIONS(102), 1,
      anon_sym_RBRACE,
    STATE(64), 1,
      aux_sym_modifiers_repeat1,
    STATE(88), 1,
      sym_modifiers,
    STATE(131), 1,
      sym__simple_type,
    STATE(168), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(98), 4,
      anon_sym_int,
      anon_sym_float,
      anon_sym_string,
      anon_sym_boolean,
    STATE(11), 4,
      sym_method_declaration,
      sym__class_body_declaration,
      sym_field_declaration,
      aux_sym_class_body_repeat1,
    ACTIONS(94), 7,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_static,
      anon_sym_final,
      anon_sym_abstract,
      anon_sym_synchronized,
  [635] = 5,
    ACTIONS(104), 1,
      anon_sym_EQ,
    ACTIONS(106), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(110), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(108), 13,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [668] = 4,
    ACTIONS(112), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(110), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(108), 14,
      anon_sym_SEMI,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [699] = 5,
    ACTIONS(114), 1,
      anon_sym_EQ,
    ACTIONS(116), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(110), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(108), 13,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [732] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(110), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(108), 14,
      anon_sym_SEMI,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [760] = 9,
    ACTIONS(132), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(120), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(122), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(124), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(126), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(128), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(130), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(118), 6,
      anon_sym_SEMI,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [800] = 7,
    ACTIONS(132), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(126), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(128), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(130), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(120), 4,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(118), 8,
      anon_sym_SEMI,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [836] = 5,
    ACTIONS(132), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(130), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(120), 4,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(118), 12,
      anon_sym_SEMI,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
  [868] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(120), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(118), 14,
      anon_sym_SEMI,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [896] = 14,
    ACTIONS(132), 1,
      anon_sym_SLASH,
    ACTIONS(134), 1,
      anon_sym_SEMI,
    ACTIONS(136), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(138), 1,
      anon_sym_AMP_AMP,
    ACTIONS(140), 1,
      anon_sym_PIPE,
    ACTIONS(142), 1,
      anon_sym_CARET,
    ACTIONS(144), 1,
      anon_sym_AMP,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(122), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(124), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(126), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(128), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(130), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(146), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [946] = 6,
    ACTIONS(132), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(128), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(130), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(120), 4,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(118), 10,
      anon_sym_SEMI,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [980] = 14,
    ACTIONS(132), 1,
      anon_sym_SLASH,
    ACTIONS(136), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(138), 1,
      anon_sym_AMP_AMP,
    ACTIONS(140), 1,
      anon_sym_PIPE,
    ACTIONS(142), 1,
      anon_sym_CARET,
    ACTIONS(144), 1,
      anon_sym_AMP,
    ACTIONS(148), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(122), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(124), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(126), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(128), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(130), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(146), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [1030] = 14,
    ACTIONS(132), 1,
      anon_sym_SLASH,
    ACTIONS(136), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(138), 1,
      anon_sym_AMP_AMP,
    ACTIONS(140), 1,
      anon_sym_PIPE,
    ACTIONS(142), 1,
      anon_sym_CARET,
    ACTIONS(144), 1,
      anon_sym_AMP,
    ACTIONS(150), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(122), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(124), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(126), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(128), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(130), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(146), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [1080] = 14,
    ACTIONS(132), 1,
      anon_sym_SLASH,
    ACTIONS(136), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(138), 1,
      anon_sym_AMP_AMP,
    ACTIONS(140), 1,
      anon_sym_PIPE,
    ACTIONS(142), 1,
      anon_sym_CARET,
    ACTIONS(144), 1,
      anon_sym_AMP,
    ACTIONS(152), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(122), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(124), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(126), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(128), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(130), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(146), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [1130] = 13,
    ACTIONS(132), 1,
      anon_sym_SLASH,
    ACTIONS(138), 1,
      anon_sym_AMP_AMP,
    ACTIONS(140), 1,
      anon_sym_PIPE,
    ACTIONS(142), 1,
      anon_sym_CARET,
    ACTIONS(144), 1,
      anon_sym_AMP,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(118), 2,
      anon_sym_SEMI,
      anon_sym_PIPE_PIPE,
    ACTIONS(122), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(124), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(126), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(128), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(130), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(146), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [1178] = 14,
    ACTIONS(132), 1,
      anon_sym_SLASH,
    ACTIONS(136), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(138), 1,
      anon_sym_AMP_AMP,
    ACTIONS(140), 1,
      anon_sym_PIPE,
    ACTIONS(142), 1,
      anon_sym_CARET,
    ACTIONS(144), 1,
      anon_sym_AMP,
    ACTIONS(154), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(122), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(124), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(126), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(128), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(130), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(146), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [1228] = 14,
    ACTIONS(132), 1,
      anon_sym_SLASH,
    ACTIONS(136), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(138), 1,
      anon_sym_AMP_AMP,
    ACTIONS(140), 1,
      anon_sym_PIPE,
    ACTIONS(142), 1,
      anon_sym_CARET,
    ACTIONS(144), 1,
      anon_sym_AMP,
    ACTIONS(156), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(122), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(124), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(126), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(128), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(130), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(146), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [1278] = 14,
    ACTIONS(132), 1,
      anon_sym_SLASH,
    ACTIONS(136), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(138), 1,
      anon_sym_AMP_AMP,
    ACTIONS(140), 1,
      anon_sym_PIPE,
    ACTIONS(142), 1,
      anon_sym_CARET,
    ACTIONS(144), 1,
      anon_sym_AMP,
    ACTIONS(158), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(122), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(124), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(126), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(128), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(130), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(146), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [1328] = 14,
    ACTIONS(132), 1,
      anon_sym_SLASH,
    ACTIONS(136), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(138), 1,
      anon_sym_AMP_AMP,
    ACTIONS(140), 1,
      anon_sym_PIPE,
    ACTIONS(142), 1,
      anon_sym_CARET,
    ACTIONS(144), 1,
      anon_sym_AMP,
    ACTIONS(160), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(122), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(124), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(126), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(128), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(130), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(146), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [1378] = 12,
    ACTIONS(132), 1,
      anon_sym_SLASH,
    ACTIONS(140), 1,
      anon_sym_PIPE,
    ACTIONS(142), 1,
      anon_sym_CARET,
    ACTIONS(144), 1,
      anon_sym_AMP,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(122), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(124), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(126), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(128), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(130), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(146), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(118), 3,
      anon_sym_SEMI,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [1424] = 14,
    ACTIONS(132), 1,
      anon_sym_SLASH,
    ACTIONS(136), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(138), 1,
      anon_sym_AMP_AMP,
    ACTIONS(140), 1,
      anon_sym_PIPE,
    ACTIONS(142), 1,
      anon_sym_CARET,
    ACTIONS(144), 1,
      anon_sym_AMP,
    ACTIONS(162), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(122), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(124), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(126), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(128), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(130), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(146), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [1474] = 14,
    ACTIONS(132), 1,
      anon_sym_SLASH,
    ACTIONS(136), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(138), 1,
      anon_sym_AMP_AMP,
    ACTIONS(140), 1,
      anon_sym_PIPE,
    ACTIONS(142), 1,
      anon_sym_CARET,
    ACTIONS(144), 1,
      anon_sym_AMP,
    ACTIONS(164), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(122), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(124), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(126), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(128), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(130), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(146), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [1524] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(168), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(166), 14,
      anon_sym_SEMI,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [1552] = 14,
    ACTIONS(132), 1,
      anon_sym_SLASH,
    ACTIONS(136), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(138), 1,
      anon_sym_AMP_AMP,
    ACTIONS(140), 1,
      anon_sym_PIPE,
    ACTIONS(142), 1,
      anon_sym_CARET,
    ACTIONS(144), 1,
      anon_sym_AMP,
    ACTIONS(170), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(122), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(124), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(126), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(128), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(130), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(146), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [1602] = 14,
    ACTIONS(132), 1,
      anon_sym_SLASH,
    ACTIONS(136), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(138), 1,
      anon_sym_AMP_AMP,
    ACTIONS(140), 1,
      anon_sym_PIPE,
    ACTIONS(142), 1,
      anon_sym_CARET,
    ACTIONS(144), 1,
      anon_sym_AMP,
    ACTIONS(172), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(122), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(124), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(126), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(128), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(130), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(146), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [1652] = 12,
    ACTIONS(120), 1,
      anon_sym_PIPE,
    ACTIONS(132), 1,
      anon_sym_SLASH,
    ACTIONS(142), 1,
      anon_sym_CARET,
    ACTIONS(144), 1,
      anon_sym_AMP,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(122), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(124), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(126), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(128), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(130), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(146), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(118), 3,
      anon_sym_SEMI,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [1698] = 14,
    ACTIONS(132), 1,
      anon_sym_SLASH,
    ACTIONS(136), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(138), 1,
      anon_sym_AMP_AMP,
    ACTIONS(140), 1,
      anon_sym_PIPE,
    ACTIONS(142), 1,
      anon_sym_CARET,
    ACTIONS(144), 1,
      anon_sym_AMP,
    ACTIONS(174), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(122), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(124), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(126), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(128), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(130), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(146), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [1748] = 11,
    ACTIONS(120), 1,
      anon_sym_PIPE,
    ACTIONS(132), 1,
      anon_sym_SLASH,
    ACTIONS(144), 1,
      anon_sym_AMP,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(122), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(124), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(126), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(128), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(130), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(146), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(118), 4,
      anon_sym_SEMI,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
  [1792] = 10,
    ACTIONS(132), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(120), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(122), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(124), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(126), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(128), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(130), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(146), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(118), 4,
      anon_sym_SEMI,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
  [1834] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(176), 4,
      ts_builtin_sym_end,
      anon_sym_COLON,
      sym_number,
      sym_string,
    ACTIONS(178), 10,
      anon_sym_function,
      anon_sym_class,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_static,
      anon_sym_final,
      anon_sym_abstract,
      anon_sym_synchronized,
      sym_identifier,
  [1857] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(180), 4,
      ts_builtin_sym_end,
      anon_sym_COLON,
      sym_number,
      sym_string,
    ACTIONS(182), 10,
      anon_sym_function,
      anon_sym_class,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_static,
      anon_sym_final,
      anon_sym_abstract,
      anon_sym_synchronized,
      sym_identifier,
  [1880] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(184), 4,
      ts_builtin_sym_end,
      anon_sym_COLON,
      sym_number,
      sym_string,
    ACTIONS(186), 10,
      anon_sym_function,
      anon_sym_class,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_static,
      anon_sym_final,
      anon_sym_abstract,
      anon_sym_synchronized,
      sym_identifier,
  [1903] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(188), 4,
      ts_builtin_sym_end,
      anon_sym_COLON,
      sym_number,
      sym_string,
    ACTIONS(190), 10,
      anon_sym_function,
      anon_sym_class,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_static,
      anon_sym_final,
      anon_sym_abstract,
      anon_sym_synchronized,
      sym_identifier,
  [1926] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(192), 4,
      ts_builtin_sym_end,
      anon_sym_COLON,
      sym_number,
      sym_string,
    ACTIONS(194), 10,
      anon_sym_function,
      anon_sym_class,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_static,
      anon_sym_final,
      anon_sym_abstract,
      anon_sym_synchronized,
      sym_identifier,
  [1949] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(196), 4,
      ts_builtin_sym_end,
      anon_sym_COLON,
      sym_number,
      sym_string,
    ACTIONS(198), 10,
      anon_sym_function,
      anon_sym_class,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_static,
      anon_sym_final,
      anon_sym_abstract,
      anon_sym_synchronized,
      sym_identifier,
  [1972] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(200), 4,
      ts_builtin_sym_end,
      anon_sym_COLON,
      sym_number,
      sym_string,
    ACTIONS(202), 10,
      anon_sym_function,
      anon_sym_class,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_static,
      anon_sym_final,
      anon_sym_abstract,
      anon_sym_synchronized,
      sym_identifier,
  [1995] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(204), 4,
      ts_builtin_sym_end,
      anon_sym_COLON,
      sym_number,
      sym_string,
    ACTIONS(206), 10,
      anon_sym_function,
      anon_sym_class,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_static,
      anon_sym_final,
      anon_sym_abstract,
      anon_sym_synchronized,
      sym_identifier,
  [2018] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(208), 4,
      ts_builtin_sym_end,
      anon_sym_COLON,
      sym_number,
      sym_string,
    ACTIONS(210), 10,
      anon_sym_function,
      anon_sym_class,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_static,
      anon_sym_final,
      anon_sym_abstract,
      anon_sym_synchronized,
      sym_identifier,
  [2041] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(212), 4,
      ts_builtin_sym_end,
      anon_sym_COLON,
      sym_number,
      sym_string,
    ACTIONS(214), 10,
      anon_sym_function,
      anon_sym_class,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_static,
      anon_sym_final,
      anon_sym_abstract,
      anon_sym_synchronized,
      sym_identifier,
  [2064] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(216), 4,
      ts_builtin_sym_end,
      anon_sym_COLON,
      sym_number,
      sym_string,
    ACTIONS(218), 10,
      anon_sym_function,
      anon_sym_class,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_static,
      anon_sym_final,
      anon_sym_abstract,
      anon_sym_synchronized,
      sym_identifier,
  [2087] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(220), 4,
      ts_builtin_sym_end,
      anon_sym_COLON,
      sym_number,
      sym_string,
    ACTIONS(222), 10,
      anon_sym_function,
      anon_sym_class,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_static,
      anon_sym_final,
      anon_sym_abstract,
      anon_sym_synchronized,
      sym_identifier,
  [2110] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(224), 4,
      ts_builtin_sym_end,
      anon_sym_COLON,
      sym_number,
      sym_string,
    ACTIONS(226), 10,
      anon_sym_function,
      anon_sym_class,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_static,
      anon_sym_final,
      anon_sym_abstract,
      anon_sym_synchronized,
      sym_identifier,
  [2133] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(228), 4,
      ts_builtin_sym_end,
      anon_sym_COLON,
      sym_number,
      sym_string,
    ACTIONS(230), 10,
      anon_sym_function,
      anon_sym_class,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_static,
      anon_sym_final,
      anon_sym_abstract,
      anon_sym_synchronized,
      sym_identifier,
  [2156] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(232), 4,
      ts_builtin_sym_end,
      anon_sym_COLON,
      sym_number,
      sym_string,
    ACTIONS(234), 10,
      anon_sym_function,
      anon_sym_class,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_static,
      anon_sym_final,
      anon_sym_abstract,
      anon_sym_synchronized,
      sym_identifier,
  [2179] = 3,
    ACTIONS(238), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(236), 13,
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
  [2202] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(240), 4,
      ts_builtin_sym_end,
      anon_sym_COLON,
      sym_number,
      sym_string,
    ACTIONS(242), 10,
      anon_sym_function,
      anon_sym_class,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_static,
      anon_sym_final,
      anon_sym_abstract,
      anon_sym_synchronized,
      sym_identifier,
  [2225] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(244), 4,
      ts_builtin_sym_end,
      anon_sym_COLON,
      sym_number,
      sym_string,
    ACTIONS(246), 10,
      anon_sym_function,
      anon_sym_class,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_static,
      anon_sym_final,
      anon_sym_abstract,
      anon_sym_synchronized,
      sym_identifier,
  [2248] = 3,
    ACTIONS(250), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(248), 13,
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
  [2271] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(252), 4,
      ts_builtin_sym_end,
      anon_sym_COLON,
      sym_number,
      sym_string,
    ACTIONS(254), 10,
      anon_sym_function,
      anon_sym_class,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_static,
      anon_sym_final,
      anon_sym_abstract,
      anon_sym_synchronized,
      sym_identifier,
  [2294] = 3,
    ACTIONS(258), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(256), 13,
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
  [2317] = 3,
    ACTIONS(262), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(260), 13,
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
  [2340] = 4,
    STATE(65), 1,
      aux_sym_modifiers_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(264), 6,
      anon_sym_function,
      anon_sym_int,
      anon_sym_float,
      anon_sym_string,
      anon_sym_boolean,
      sym_identifier,
    ACTIONS(266), 7,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_static,
      anon_sym_final,
      anon_sym_abstract,
      anon_sym_synchronized,
  [2365] = 4,
    STATE(65), 1,
      aux_sym_modifiers_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(268), 6,
      anon_sym_function,
      anon_sym_int,
      anon_sym_float,
      anon_sym_string,
      anon_sym_boolean,
      sym_identifier,
    ACTIONS(270), 7,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_static,
      anon_sym_final,
      anon_sym_abstract,
      anon_sym_synchronized,
  [2390] = 3,
    ACTIONS(192), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(194), 13,
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
  [2413] = 3,
    ACTIONS(212), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(214), 13,
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
  [2436] = 3,
    ACTIONS(240), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(242), 13,
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
  [2459] = 3,
    ACTIONS(204), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(206), 13,
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
  [2482] = 3,
    ACTIONS(232), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(234), 13,
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
  [2505] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(273), 4,
      ts_builtin_sym_end,
      anon_sym_COLON,
      sym_number,
      sym_string,
    ACTIONS(275), 10,
      anon_sym_function,
      anon_sym_class,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_static,
      anon_sym_final,
      anon_sym_abstract,
      anon_sym_synchronized,
      sym_identifier,
  [2528] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(204), 5,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_number,
      sym_string,
    ACTIONS(206), 8,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_static,
      anon_sym_final,
      anon_sym_abstract,
      anon_sym_synchronized,
      sym_identifier,
  [2550] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(180), 5,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_number,
      sym_string,
    ACTIONS(182), 8,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_static,
      anon_sym_final,
      anon_sym_abstract,
      anon_sym_synchronized,
      sym_identifier,
  [2572] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(188), 5,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_number,
      sym_string,
    ACTIONS(190), 8,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_static,
      anon_sym_final,
      anon_sym_abstract,
      anon_sym_synchronized,
      sym_identifier,
  [2594] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(228), 5,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_number,
      sym_string,
    ACTIONS(230), 8,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_static,
      anon_sym_final,
      anon_sym_abstract,
      anon_sym_synchronized,
      sym_identifier,
  [2616] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(224), 5,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_number,
      sym_string,
    ACTIONS(226), 8,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_static,
      anon_sym_final,
      anon_sym_abstract,
      anon_sym_synchronized,
      sym_identifier,
  [2638] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(176), 5,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_number,
      sym_string,
    ACTIONS(178), 8,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_static,
      anon_sym_final,
      anon_sym_abstract,
      anon_sym_synchronized,
      sym_identifier,
  [2660] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(252), 5,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_number,
      sym_string,
    ACTIONS(254), 8,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_static,
      anon_sym_final,
      anon_sym_abstract,
      anon_sym_synchronized,
      sym_identifier,
  [2682] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(232), 5,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_number,
      sym_string,
    ACTIONS(234), 8,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_static,
      anon_sym_final,
      anon_sym_abstract,
      anon_sym_synchronized,
      sym_identifier,
  [2704] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(184), 5,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_number,
      sym_string,
    ACTIONS(186), 8,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_static,
      anon_sym_final,
      anon_sym_abstract,
      anon_sym_synchronized,
      sym_identifier,
  [2726] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(208), 5,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_number,
      sym_string,
    ACTIONS(210), 8,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_static,
      anon_sym_final,
      anon_sym_abstract,
      anon_sym_synchronized,
      sym_identifier,
  [2748] = 5,
    ACTIONS(277), 1,
      anon_sym_COLON,
    STATE(83), 1,
      aux_sym_modifiers_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(264), 3,
      anon_sym_function,
      anon_sym_class,
      sym_identifier,
    ACTIONS(279), 7,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_static,
      anon_sym_final,
      anon_sym_abstract,
      anon_sym_synchronized,
  [2773] = 5,
    ACTIONS(281), 1,
      anon_sym_COLON,
    STATE(83), 1,
      aux_sym_modifiers_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(268), 3,
      anon_sym_function,
      anon_sym_class,
      sym_identifier,
    ACTIONS(283), 7,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_static,
      anon_sym_final,
      anon_sym_abstract,
      anon_sym_synchronized,
  [2798] = 5,
    ACTIONS(264), 1,
      sym_identifier,
    ACTIONS(277), 1,
      anon_sym_COLON,
    STATE(85), 1,
      aux_sym_modifiers_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(286), 7,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_static,
      anon_sym_final,
      anon_sym_abstract,
      anon_sym_synchronized,
  [2821] = 5,
    ACTIONS(268), 1,
      sym_identifier,
    ACTIONS(281), 1,
      anon_sym_COLON,
    STATE(85), 1,
      aux_sym_modifiers_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(288), 7,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_static,
      anon_sym_final,
      anon_sym_abstract,
      anon_sym_synchronized,
  [2844] = 7,
    ACTIONS(100), 1,
      sym_identifier,
    ACTIONS(291), 1,
      anon_sym_RPAREN,
    STATE(129), 1,
      sym_parameter,
    STATE(131), 1,
      sym__simple_type,
    STATE(167), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(98), 4,
      anon_sym_int,
      anon_sym_float,
      anon_sym_string,
      anon_sym_boolean,
  [2870] = 6,
    ACTIONS(100), 1,
      sym_identifier,
    STATE(131), 1,
      sym__simple_type,
    STATE(145), 1,
      sym_parameter,
    STATE(167), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(98), 4,
      anon_sym_int,
      anon_sym_float,
      anon_sym_string,
      anon_sym_boolean,
  [2893] = 6,
    ACTIONS(100), 1,
      sym_identifier,
    ACTIONS(293), 1,
      anon_sym_function,
    STATE(131), 1,
      sym__simple_type,
    STATE(179), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(98), 4,
      anon_sym_int,
      anon_sym_float,
      anon_sym_string,
      anon_sym_boolean,
  [2916] = 5,
    ACTIONS(100), 1,
      sym_identifier,
    STATE(131), 1,
      sym__simple_type,
    STATE(134), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(98), 4,
      anon_sym_int,
      anon_sym_float,
      anon_sym_string,
      anon_sym_boolean,
  [2936] = 5,
    ACTIONS(295), 1,
      sym_identifier,
    STATE(25), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_number,
      sym_string,
    STATE(35), 3,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
  [2956] = 5,
    ACTIONS(295), 1,
      sym_identifier,
    STATE(24), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_number,
      sym_string,
    STATE(35), 3,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
  [2976] = 5,
    ACTIONS(100), 1,
      sym_identifier,
    STATE(131), 1,
      sym__simple_type,
    STATE(172), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(98), 4,
      anon_sym_int,
      anon_sym_float,
      anon_sym_string,
      anon_sym_boolean,
  [2996] = 5,
    ACTIONS(295), 1,
      sym_identifier,
    STATE(27), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_number,
      sym_string,
    STATE(35), 3,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
  [3016] = 5,
    ACTIONS(100), 1,
      sym_identifier,
    STATE(131), 1,
      sym__simple_type,
    STATE(154), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(98), 4,
      anon_sym_int,
      anon_sym_float,
      anon_sym_string,
      anon_sym_boolean,
  [3036] = 5,
    ACTIONS(100), 1,
      sym_identifier,
    STATE(131), 1,
      sym__simple_type,
    STATE(175), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(98), 4,
      anon_sym_int,
      anon_sym_float,
      anon_sym_string,
      anon_sym_boolean,
  [3056] = 5,
    ACTIONS(295), 1,
      sym_identifier,
    STATE(32), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_number,
      sym_string,
    STATE(35), 3,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
  [3076] = 5,
    ACTIONS(295), 1,
      sym_identifier,
    STATE(29), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_number,
      sym_string,
    STATE(35), 3,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
  [3096] = 5,
    ACTIONS(100), 1,
      sym_identifier,
    STATE(131), 1,
      sym__simple_type,
    STATE(176), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(98), 4,
      anon_sym_int,
      anon_sym_float,
      anon_sym_string,
      anon_sym_boolean,
  [3116] = 5,
    ACTIONS(299), 1,
      sym_identifier,
    STATE(144), 1,
      sym_type,
    STATE(147), 1,
      sym__simple_type,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(297), 4,
      anon_sym_int,
      anon_sym_float,
      anon_sym_string,
      anon_sym_boolean,
  [3136] = 5,
    ACTIONS(295), 1,
      sym_identifier,
    STATE(38), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_number,
      sym_string,
    STATE(35), 3,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
  [3156] = 5,
    ACTIONS(295), 1,
      sym_identifier,
    STATE(30), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_number,
      sym_string,
    STATE(35), 3,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
  [3176] = 5,
    ACTIONS(295), 1,
      sym_identifier,
    STATE(40), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_number,
      sym_string,
    STATE(35), 3,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
  [3196] = 5,
    ACTIONS(295), 1,
      sym_identifier,
    STATE(31), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_number,
      sym_string,
    STATE(35), 3,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
  [3216] = 5,
    ACTIONS(295), 1,
      sym_identifier,
    STATE(41), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_number,
      sym_string,
    STATE(35), 3,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
  [3236] = 5,
    ACTIONS(295), 1,
      sym_identifier,
    STATE(19), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_number,
      sym_string,
    STATE(35), 3,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
  [3256] = 5,
    ACTIONS(295), 1,
      sym_identifier,
    STATE(23), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_number,
      sym_string,
    STATE(35), 3,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
  [3276] = 5,
    ACTIONS(295), 1,
      sym_identifier,
    STATE(20), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_number,
      sym_string,
    STATE(35), 3,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
  [3296] = 5,
    ACTIONS(295), 1,
      sym_identifier,
    STATE(21), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_number,
      sym_string,
    STATE(35), 3,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
  [3316] = 5,
    ACTIONS(295), 1,
      sym_identifier,
    STATE(26), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_number,
      sym_string,
    STATE(35), 3,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
  [3336] = 5,
    ACTIONS(295), 1,
      sym_identifier,
    STATE(18), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_number,
      sym_string,
    STATE(35), 3,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
  [3356] = 5,
    ACTIONS(295), 1,
      sym_identifier,
    STATE(34), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_number,
      sym_string,
    STATE(35), 3,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
  [3376] = 5,
    ACTIONS(295), 1,
      sym_identifier,
    STATE(36), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_number,
      sym_string,
    STATE(35), 3,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
  [3396] = 5,
    ACTIONS(295), 1,
      sym_identifier,
    STATE(37), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_number,
      sym_string,
    STATE(35), 3,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
  [3416] = 5,
    ACTIONS(295), 1,
      sym_identifier,
    STATE(39), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_number,
      sym_string,
    STATE(35), 3,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
  [3436] = 5,
    ACTIONS(100), 1,
      sym_identifier,
    STATE(131), 1,
      sym__simple_type,
    STATE(169), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(98), 4,
      anon_sym_int,
      anon_sym_float,
      anon_sym_string,
      anon_sym_boolean,
  [3456] = 5,
    ACTIONS(100), 1,
      sym_identifier,
    STATE(131), 1,
      sym__simple_type,
    STATE(166), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(98), 4,
      anon_sym_int,
      anon_sym_float,
      anon_sym_string,
      anon_sym_boolean,
  [3476] = 5,
    ACTIONS(295), 1,
      sym_identifier,
    STATE(28), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_number,
      sym_string,
    STATE(35), 3,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
  [3496] = 7,
    ACTIONS(301), 1,
      anon_sym_LBRACE,
    ACTIONS(303), 1,
      anon_sym_extends,
    ACTIONS(305), 1,
      anon_sym_implements,
    STATE(48), 1,
      sym_class_body,
    STATE(124), 1,
      sym_extends_clause,
    STATE(151), 1,
      sym_implements_clause,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [3519] = 7,
    ACTIONS(301), 1,
      anon_sym_LBRACE,
    ACTIONS(303), 1,
      anon_sym_extends,
    ACTIONS(305), 1,
      anon_sym_implements,
    STATE(71), 1,
      sym_class_body,
    STATE(126), 1,
      sym_extends_clause,
    STATE(161), 1,
      sym_implements_clause,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [3542] = 5,
    ACTIONS(307), 1,
      anon_sym_COLON,
    ACTIONS(309), 1,
      anon_sym_LBRACE,
    STATE(46), 1,
      sym_block,
    STATE(138), 1,
      sym_return_type,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [3559] = 5,
    ACTIONS(307), 1,
      anon_sym_COLON,
    ACTIONS(309), 1,
      anon_sym_LBRACE,
    STATE(51), 1,
      sym_block,
    STATE(142), 1,
      sym_return_type,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [3576] = 5,
    ACTIONS(307), 1,
      anon_sym_COLON,
    ACTIONS(311), 1,
      anon_sym_LBRACE,
    STATE(66), 1,
      sym_block,
    STATE(152), 1,
      sym_return_type,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [3593] = 5,
    ACTIONS(313), 1,
      anon_sym_COLON,
    ACTIONS(315), 1,
      anon_sym_function,
    ACTIONS(317), 1,
      anon_sym_class,
    ACTIONS(319), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [3610] = 5,
    ACTIONS(301), 1,
      anon_sym_LBRACE,
    ACTIONS(305), 1,
      anon_sym_implements,
    STATE(53), 1,
      sym_class_body,
    STATE(143), 1,
      sym_implements_clause,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [3627] = 5,
    ACTIONS(307), 1,
      anon_sym_COLON,
    ACTIONS(311), 1,
      anon_sym_LBRACE,
    STATE(67), 1,
      sym_block,
    STATE(156), 1,
      sym_return_type,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [3644] = 5,
    ACTIONS(301), 1,
      anon_sym_LBRACE,
    ACTIONS(305), 1,
      anon_sym_implements,
    STATE(48), 1,
      sym_class_body,
    STATE(151), 1,
      sym_implements_clause,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [3661] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(321), 3,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      sym_identifier,
  [3671] = 4,
    ACTIONS(323), 1,
      anon_sym_COMMA,
    ACTIONS(325), 1,
      anon_sym_RPAREN,
    STATE(133), 1,
      aux_sym_parameters_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [3685] = 4,
    ACTIONS(323), 1,
      anon_sym_COMMA,
    ACTIONS(327), 1,
      anon_sym_RPAREN,
    STATE(128), 1,
      aux_sym_parameters_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [3699] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(329), 3,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      sym_identifier,
  [3709] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(329), 3,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      sym_identifier,
  [3719] = 4,
    ACTIONS(331), 1,
      anon_sym_COMMA,
    ACTIONS(333), 1,
      anon_sym_LBRACE,
    STATE(135), 1,
      aux_sym_implements_clause_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [3733] = 4,
    ACTIONS(335), 1,
      anon_sym_COMMA,
    ACTIONS(338), 1,
      anon_sym_RPAREN,
    STATE(133), 1,
      aux_sym_parameters_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [3747] = 4,
    ACTIONS(331), 1,
      anon_sym_COMMA,
    ACTIONS(340), 1,
      anon_sym_LBRACE,
    STATE(132), 1,
      aux_sym_implements_clause_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [3761] = 4,
    ACTIONS(342), 1,
      anon_sym_COMMA,
    ACTIONS(345), 1,
      anon_sym_LBRACE,
    STATE(135), 1,
      aux_sym_implements_clause_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [3775] = 3,
    ACTIONS(347), 1,
      anon_sym_LPAREN,
    STATE(122), 1,
      sym_parameters,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [3786] = 3,
    ACTIONS(349), 1,
      anon_sym_EQ,
    ACTIONS(351), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [3797] = 3,
    ACTIONS(309), 1,
      anon_sym_LBRACE,
    STATE(51), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [3808] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(321), 2,
      anon_sym_LBRACE,
      anon_sym_implements,
  [3817] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(329), 2,
      anon_sym_LBRACE,
      anon_sym_implements,
  [3826] = 3,
    ACTIONS(347), 1,
      anon_sym_LPAREN,
    STATE(120), 1,
      sym_parameters,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [3837] = 3,
    ACTIONS(309), 1,
      anon_sym_LBRACE,
    STATE(58), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [3848] = 3,
    ACTIONS(301), 1,
      anon_sym_LBRACE,
    STATE(59), 1,
      sym_class_body,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [3859] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(353), 2,
      anon_sym_LBRACE,
      anon_sym_implements,
  [3868] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(338), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3877] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(355), 2,
      anon_sym_COLON,
      anon_sym_LBRACE,
  [3886] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(329), 2,
      anon_sym_LBRACE,
      anon_sym_implements,
  [3895] = 3,
    ACTIONS(357), 1,
      anon_sym_EQ,
    ACTIONS(359), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [3906] = 3,
    ACTIONS(164), 1,
      anon_sym_SEMI,
    ACTIONS(361), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [3917] = 3,
    ACTIONS(363), 1,
      anon_sym_EQ,
    ACTIONS(365), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [3928] = 3,
    ACTIONS(301), 1,
      anon_sym_LBRACE,
    STATE(53), 1,
      sym_class_body,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [3939] = 3,
    ACTIONS(311), 1,
      anon_sym_LBRACE,
    STATE(67), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [3950] = 3,
    ACTIONS(170), 1,
      anon_sym_SEMI,
    ACTIONS(367), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [3961] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(345), 2,
      anon_sym_COMMA,
      anon_sym_LBRACE,
  [3970] = 3,
    ACTIONS(152), 1,
      anon_sym_SEMI,
    ACTIONS(369), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [3981] = 3,
    ACTIONS(311), 1,
      anon_sym_LBRACE,
    STATE(68), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [3992] = 3,
    ACTIONS(371), 1,
      anon_sym_COLON,
    ACTIONS(373), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4003] = 3,
    ACTIONS(148), 1,
      anon_sym_SEMI,
    ACTIONS(375), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4014] = 3,
    ACTIONS(347), 1,
      anon_sym_LPAREN,
    STATE(121), 1,
      sym_parameters,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4025] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(377), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4034] = 3,
    ACTIONS(301), 1,
      anon_sym_LBRACE,
    STATE(48), 1,
      sym_class_body,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4045] = 3,
    ACTIONS(347), 1,
      anon_sym_LPAREN,
    STATE(125), 1,
      sym_parameters,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4056] = 3,
    ACTIONS(379), 1,
      anon_sym_EQ,
    ACTIONS(381), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4067] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(383), 2,
      anon_sym_COLON,
      anon_sym_LBRACE,
  [4076] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(385), 2,
      anon_sym_COLON,
      anon_sym_LBRACE,
  [4085] = 2,
    ACTIONS(387), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4093] = 2,
    ACTIONS(389), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4101] = 2,
    ACTIONS(391), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4109] = 2,
    ACTIONS(393), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4117] = 2,
    ACTIONS(395), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4125] = 2,
    ACTIONS(397), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4133] = 2,
    ACTIONS(399), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4141] = 2,
    ACTIONS(401), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4149] = 2,
    ACTIONS(403), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4157] = 2,
    ACTIONS(405), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4165] = 2,
    ACTIONS(407), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4173] = 2,
    ACTIONS(409), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4181] = 2,
    ACTIONS(411), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4189] = 2,
    ACTIONS(413), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4197] = 2,
    ACTIONS(415), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 58,
  [SMALL_STATE(4)] = 116,
  [SMALL_STATE(5)] = 170,
  [SMALL_STATE(6)] = 224,
  [SMALL_STATE(7)] = 278,
  [SMALL_STATE(8)] = 332,
  [SMALL_STATE(9)] = 386,
  [SMALL_STATE(10)] = 440,
  [SMALL_STATE(11)] = 494,
  [SMALL_STATE(12)] = 541,
  [SMALL_STATE(13)] = 588,
  [SMALL_STATE(14)] = 635,
  [SMALL_STATE(15)] = 668,
  [SMALL_STATE(16)] = 699,
  [SMALL_STATE(17)] = 732,
  [SMALL_STATE(18)] = 760,
  [SMALL_STATE(19)] = 800,
  [SMALL_STATE(20)] = 836,
  [SMALL_STATE(21)] = 868,
  [SMALL_STATE(22)] = 896,
  [SMALL_STATE(23)] = 946,
  [SMALL_STATE(24)] = 980,
  [SMALL_STATE(25)] = 1030,
  [SMALL_STATE(26)] = 1080,
  [SMALL_STATE(27)] = 1130,
  [SMALL_STATE(28)] = 1178,
  [SMALL_STATE(29)] = 1228,
  [SMALL_STATE(30)] = 1278,
  [SMALL_STATE(31)] = 1328,
  [SMALL_STATE(32)] = 1378,
  [SMALL_STATE(33)] = 1424,
  [SMALL_STATE(34)] = 1474,
  [SMALL_STATE(35)] = 1524,
  [SMALL_STATE(36)] = 1552,
  [SMALL_STATE(37)] = 1602,
  [SMALL_STATE(38)] = 1652,
  [SMALL_STATE(39)] = 1698,
  [SMALL_STATE(40)] = 1748,
  [SMALL_STATE(41)] = 1792,
  [SMALL_STATE(42)] = 1834,
  [SMALL_STATE(43)] = 1857,
  [SMALL_STATE(44)] = 1880,
  [SMALL_STATE(45)] = 1903,
  [SMALL_STATE(46)] = 1926,
  [SMALL_STATE(47)] = 1949,
  [SMALL_STATE(48)] = 1972,
  [SMALL_STATE(49)] = 1995,
  [SMALL_STATE(50)] = 2018,
  [SMALL_STATE(51)] = 2041,
  [SMALL_STATE(52)] = 2064,
  [SMALL_STATE(53)] = 2087,
  [SMALL_STATE(54)] = 2110,
  [SMALL_STATE(55)] = 2133,
  [SMALL_STATE(56)] = 2156,
  [SMALL_STATE(57)] = 2179,
  [SMALL_STATE(58)] = 2202,
  [SMALL_STATE(59)] = 2225,
  [SMALL_STATE(60)] = 2248,
  [SMALL_STATE(61)] = 2271,
  [SMALL_STATE(62)] = 2294,
  [SMALL_STATE(63)] = 2317,
  [SMALL_STATE(64)] = 2340,
  [SMALL_STATE(65)] = 2365,
  [SMALL_STATE(66)] = 2390,
  [SMALL_STATE(67)] = 2413,
  [SMALL_STATE(68)] = 2436,
  [SMALL_STATE(69)] = 2459,
  [SMALL_STATE(70)] = 2482,
  [SMALL_STATE(71)] = 2505,
  [SMALL_STATE(72)] = 2528,
  [SMALL_STATE(73)] = 2550,
  [SMALL_STATE(74)] = 2572,
  [SMALL_STATE(75)] = 2594,
  [SMALL_STATE(76)] = 2616,
  [SMALL_STATE(77)] = 2638,
  [SMALL_STATE(78)] = 2660,
  [SMALL_STATE(79)] = 2682,
  [SMALL_STATE(80)] = 2704,
  [SMALL_STATE(81)] = 2726,
  [SMALL_STATE(82)] = 2748,
  [SMALL_STATE(83)] = 2773,
  [SMALL_STATE(84)] = 2798,
  [SMALL_STATE(85)] = 2821,
  [SMALL_STATE(86)] = 2844,
  [SMALL_STATE(87)] = 2870,
  [SMALL_STATE(88)] = 2893,
  [SMALL_STATE(89)] = 2916,
  [SMALL_STATE(90)] = 2936,
  [SMALL_STATE(91)] = 2956,
  [SMALL_STATE(92)] = 2976,
  [SMALL_STATE(93)] = 2996,
  [SMALL_STATE(94)] = 3016,
  [SMALL_STATE(95)] = 3036,
  [SMALL_STATE(96)] = 3056,
  [SMALL_STATE(97)] = 3076,
  [SMALL_STATE(98)] = 3096,
  [SMALL_STATE(99)] = 3116,
  [SMALL_STATE(100)] = 3136,
  [SMALL_STATE(101)] = 3156,
  [SMALL_STATE(102)] = 3176,
  [SMALL_STATE(103)] = 3196,
  [SMALL_STATE(104)] = 3216,
  [SMALL_STATE(105)] = 3236,
  [SMALL_STATE(106)] = 3256,
  [SMALL_STATE(107)] = 3276,
  [SMALL_STATE(108)] = 3296,
  [SMALL_STATE(109)] = 3316,
  [SMALL_STATE(110)] = 3336,
  [SMALL_STATE(111)] = 3356,
  [SMALL_STATE(112)] = 3376,
  [SMALL_STATE(113)] = 3396,
  [SMALL_STATE(114)] = 3416,
  [SMALL_STATE(115)] = 3436,
  [SMALL_STATE(116)] = 3456,
  [SMALL_STATE(117)] = 3476,
  [SMALL_STATE(118)] = 3496,
  [SMALL_STATE(119)] = 3519,
  [SMALL_STATE(120)] = 3542,
  [SMALL_STATE(121)] = 3559,
  [SMALL_STATE(122)] = 3576,
  [SMALL_STATE(123)] = 3593,
  [SMALL_STATE(124)] = 3610,
  [SMALL_STATE(125)] = 3627,
  [SMALL_STATE(126)] = 3644,
  [SMALL_STATE(127)] = 3661,
  [SMALL_STATE(128)] = 3671,
  [SMALL_STATE(129)] = 3685,
  [SMALL_STATE(130)] = 3699,
  [SMALL_STATE(131)] = 3709,
  [SMALL_STATE(132)] = 3719,
  [SMALL_STATE(133)] = 3733,
  [SMALL_STATE(134)] = 3747,
  [SMALL_STATE(135)] = 3761,
  [SMALL_STATE(136)] = 3775,
  [SMALL_STATE(137)] = 3786,
  [SMALL_STATE(138)] = 3797,
  [SMALL_STATE(139)] = 3808,
  [SMALL_STATE(140)] = 3817,
  [SMALL_STATE(141)] = 3826,
  [SMALL_STATE(142)] = 3837,
  [SMALL_STATE(143)] = 3848,
  [SMALL_STATE(144)] = 3859,
  [SMALL_STATE(145)] = 3868,
  [SMALL_STATE(146)] = 3877,
  [SMALL_STATE(147)] = 3886,
  [SMALL_STATE(148)] = 3895,
  [SMALL_STATE(149)] = 3906,
  [SMALL_STATE(150)] = 3917,
  [SMALL_STATE(151)] = 3928,
  [SMALL_STATE(152)] = 3939,
  [SMALL_STATE(153)] = 3950,
  [SMALL_STATE(154)] = 3961,
  [SMALL_STATE(155)] = 3970,
  [SMALL_STATE(156)] = 3981,
  [SMALL_STATE(157)] = 3992,
  [SMALL_STATE(158)] = 4003,
  [SMALL_STATE(159)] = 4014,
  [SMALL_STATE(160)] = 4025,
  [SMALL_STATE(161)] = 4034,
  [SMALL_STATE(162)] = 4045,
  [SMALL_STATE(163)] = 4056,
  [SMALL_STATE(164)] = 4067,
  [SMALL_STATE(165)] = 4076,
  [SMALL_STATE(166)] = 4085,
  [SMALL_STATE(167)] = 4093,
  [SMALL_STATE(168)] = 4101,
  [SMALL_STATE(169)] = 4109,
  [SMALL_STATE(170)] = 4117,
  [SMALL_STATE(171)] = 4125,
  [SMALL_STATE(172)] = 4133,
  [SMALL_STATE(173)] = 4141,
  [SMALL_STATE(174)] = 4149,
  [SMALL_STATE(175)] = 4157,
  [SMALL_STATE(176)] = 4165,
  [SMALL_STATE(177)] = 4173,
  [SMALL_STATE(178)] = 4181,
  [SMALL_STATE(179)] = 4189,
  [SMALL_STATE(180)] = 4197,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1, 0, 0),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(98),
  [26] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(177),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(171),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(82),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(115),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(84),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_class_body_repeat1, 2, 0, 0), SHIFT_REPEAT(178),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_class_body_repeat1, 2, 0, 0), SHIFT_REPEAT(64),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_body_repeat1, 2, 0, 0),
  [86] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_class_body_repeat1, 2, 0, 0), SHIFT_REPEAT(127),
  [89] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_class_body_repeat1, 2, 0, 0), SHIFT_REPEAT(130),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_expression, 1, 0, 0),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primary_expression, 1, 0, 0),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, 0, 0),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, 0, 0),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_expression, 3, 0, 0),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1, 0, 0),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1, 0, 0),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1, 0, 0),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1, 0, 0),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 3, 0, 0),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 3, 0, 0),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 2, 0, 0),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 2, 0, 0),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 4, 0, 0),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 4, 0, 0),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_declaration, 4, 0, 0),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method_declaration, 4, 0, 0),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_body, 2, 0, 0),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_body, 2, 0, 0),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_declaration, 4, 0, 0),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_declaration, 4, 0, 0),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2, 0, 0),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2, 0, 0),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_statement, 2, 0, 0),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_statement, 2, 0, 0),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_declaration, 5, 0, 0),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method_declaration, 5, 0, 0),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_body, 3, 0, 0),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_body, 3, 0, 0),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_declaration, 5, 0, 0),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_declaration, 5, 0, 0),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 5, 0, 0),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 5, 0, 0),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 6, 0, 0),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 6, 0, 0),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, 0, 0),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3, 0, 0),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_declaration, 3, 0, 0),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_declaration, 3, 0, 0),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_declaration, 6, 0, 0),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method_declaration, 6, 0, 0),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_declaration, 6, 0, 0),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_declaration, 6, 0, 0),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_declaration, 4, 0, 0),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_declaration, 4, 0, 0),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 7, 0, 0),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 7, 0, 0),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_declaration, 5, 0, 0),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_declaration, 5, 0, 0),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_declaration, 6, 0, 0),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_declaration, 6, 0, 0),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_modifiers, 1, 0, 0),
  [266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_modifiers_repeat1, 2, 0, 0),
  [270] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_modifiers_repeat1, 2, 0, 0), SHIFT_REPEAT(65),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_declaration, 3, 0, 0),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_declaration, 3, 0, 0),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifiers, 1, 0, 0),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_modifiers_repeat1, 2, 0, 0),
  [283] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_modifiers_repeat1, 2, 0, 0), SHIFT_REPEAT(83),
  [286] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [288] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_modifiers_repeat1, 2, 0, 0), SHIFT_REPEAT(85),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [293] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [299] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [315] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [317] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [319] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__simple_type, 1, 0, 0),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1, 0, 0),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_implements_clause, 3, 0, 0),
  [335] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(87),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2, 0, 0),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_implements_clause, 2, 0, 0),
  [342] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_implements_clause_repeat1, 2, 0, 0), SHIFT_REPEAT(94),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_implements_clause_repeat1, 2, 0, 0),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extends_clause, 2, 0, 0),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 4, 0, 0),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2, 0, 0),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 2, 0, 0),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 3, 0, 0),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [395] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_type, 2, 0, 0),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
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
