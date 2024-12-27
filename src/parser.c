#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 162
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 77
#define ALIAS_COUNT 0
#define TOKEN_COUNT 47
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
  [5] = 4,
  [6] = 6,
  [7] = 7,
  [8] = 6,
  [9] = 4,
  [10] = 6,
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
  [30] = 20,
  [31] = 31,
  [32] = 23,
  [33] = 33,
  [34] = 26,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
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
  [54] = 44,
  [55] = 53,
  [56] = 39,
  [57] = 43,
  [58] = 37,
  [59] = 48,
  [60] = 49,
  [61] = 52,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 62,
  [67] = 63,
  [68] = 68,
  [69] = 40,
  [70] = 45,
  [71] = 50,
  [72] = 72,
  [73] = 44,
  [74] = 49,
  [75] = 63,
  [76] = 62,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
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
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 88,
  [102] = 93,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 105,
  [108] = 108,
  [109] = 106,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 119,
  [123] = 120,
  [124] = 118,
  [125] = 125,
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
  [136] = 129,
  [137] = 137,
  [138] = 138,
  [139] = 138,
  [140] = 134,
  [141] = 141,
  [142] = 142,
  [143] = 135,
  [144] = 121,
  [145] = 116,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 147,
  [157] = 157,
  [158] = 158,
  [159] = 154,
  [160] = 158,
  [161] = 152,
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
        '(', 114,
        ')', 116,
        '*', 143,
        '+', 141,
        ',', 115,
        '-', 142,
        '/', 144,
        ':', 117,
        ';', 95,
        '<', 135,
        '=', 94,
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(218);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '!', 11,
        '"', 3,
        '%', 145,
        '&', 132,
        '*', 143,
        '+', 141,
        ',', 115,
        '-', 142,
        '/', 144,
        ';', 95,
        '<', 135,
        '=', 94,
        '>', 137,
        '^', 131,
        '{', 118,
        '|', 130,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(218);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '"', 3,
        '/', 5,
        'a', 153,
        'b', 192,
        'f', 173,
        'i', 184,
        'p', 197,
        's', 204,
        '{', 118,
        '}', 119,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(218);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(219);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == ')') ADVANCE(116);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == 'b') ADVANCE(192);
      if (lookahead == 'f') ADVANCE(183);
      if (lookahead == 'i') ADVANCE(184);
      if (lookahead == 's') ADVANCE(211);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(7);
      if (lookahead == '/') ADVANCE(220);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == '/') ADVANCE(221);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(6);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 8:
      ADVANCE_MAP(
        '/', 5,
        'a', 153,
        'b', 192,
        'f', 172,
        'i', 184,
        'p', 197,
        's', 204,
        '}', 119,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 9:
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == 'b') ADVANCE(192);
      if (lookahead == 'c') ADVANCE(178);
      if (lookahead == 'f') ADVANCE(182);
      if (lookahead == 'i') ADVANCE(184);
      if (lookahead == 's') ADVANCE(211);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(9);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 10:
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == 'b') ADVANCE(192);
      if (lookahead == 'f') ADVANCE(182);
      if (lookahead == 'i') ADVANCE(184);
      if (lookahead == 's') ADVANCE(211);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(10);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
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
      if (lookahead == 'c') ADVANCE(100);
      END_STATE();
    case 23:
      if (lookahead == 'c') ADVANCE(106);
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
      if (lookahead == 'd') ADVANCE(104);
      END_STATE();
    case 28:
      if (lookahead == 'd') ADVANCE(112);
      END_STATE();
    case 29:
      if (lookahead == 'd') ADVANCE(73);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(102);
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
      if (lookahead == 'l') ADVANCE(108);
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
      if (lookahead == 'n') ADVANCE(96);
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
      if (lookahead == 's') ADVANCE(98);
      END_STATE();
    case 73:
      if (lookahead == 's') ADVANCE(222);
      END_STATE();
    case 74:
      if (lookahead == 's') ADVANCE(223);
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
      if (lookahead == 't') ADVANCE(110);
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
        'a', 153,
        'b', 192,
        'c', 178,
        'f', 172,
        'i', 184,
        'p', 197,
        's', 204,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(92);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(218);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(133);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_function);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_function);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_class);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_class);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_public);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_public);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_private);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_private);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_protected);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_protected);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_static);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_static);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_final);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_final);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_abstract);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_abstract);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_synchronized);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_synchronized);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_COLON);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_float);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_string);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_boolean);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_boolean);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
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
      if (lookahead == '/') ADVANCE(220);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(214);
      if (lookahead == 'r') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(215);
      if (lookahead == 'o') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(189);
      if (lookahead == 'l') ADVANCE(194);
      if (lookahead == 'u') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(189);
      if (lookahead == 'l') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(194);
      if (lookahead == 'u') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(170);
      if (lookahead == 'u') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(148);
      if (lookahead == 'y') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'z') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(217);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(218);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(220);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_block_comment);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_extends);
      END_STATE();
    case 223:
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
  [11] = {.lex_state = 8},
  [12] = {.lex_state = 8},
  [13] = {.lex_state = 8},
  [14] = {.lex_state = 1},
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
  [37] = {.lex_state = 92},
  [38] = {.lex_state = 92},
  [39] = {.lex_state = 92},
  [40] = {.lex_state = 92},
  [41] = {.lex_state = 92},
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
  [54] = {.lex_state = 2},
  [55] = {.lex_state = 2},
  [56] = {.lex_state = 2},
  [57] = {.lex_state = 2},
  [58] = {.lex_state = 2},
  [59] = {.lex_state = 2},
  [60] = {.lex_state = 2},
  [61] = {.lex_state = 2},
  [62] = {.lex_state = 92},
  [63] = {.lex_state = 92},
  [64] = {.lex_state = 8},
  [65] = {.lex_state = 8},
  [66] = {.lex_state = 8},
  [67] = {.lex_state = 8},
  [68] = {.lex_state = 8},
  [69] = {.lex_state = 8},
  [70] = {.lex_state = 8},
  [71] = {.lex_state = 8},
  [72] = {.lex_state = 8},
  [73] = {.lex_state = 8},
  [74] = {.lex_state = 8},
  [75] = {.lex_state = 2},
  [76] = {.lex_state = 2},
  [77] = {.lex_state = 4},
  [78] = {.lex_state = 9},
  [79] = {.lex_state = 10},
  [80] = {.lex_state = 4},
  [81] = {.lex_state = 1},
  [82] = {.lex_state = 4},
  [83] = {.lex_state = 1},
  [84] = {.lex_state = 1},
  [85] = {.lex_state = 4},
  [86] = {.lex_state = 1},
  [87] = {.lex_state = 4},
  [88] = {.lex_state = 1},
  [89] = {.lex_state = 1},
  [90] = {.lex_state = 1},
  [91] = {.lex_state = 4},
  [92] = {.lex_state = 1},
  [93] = {.lex_state = 1},
  [94] = {.lex_state = 1},
  [95] = {.lex_state = 1},
  [96] = {.lex_state = 1},
  [97] = {.lex_state = 1},
  [98] = {.lex_state = 1},
  [99] = {.lex_state = 4},
  [100] = {.lex_state = 1},
  [101] = {.lex_state = 1},
  [102] = {.lex_state = 1},
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
  [116] = {.lex_state = 1},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 1},
  [119] = {.lex_state = 1},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
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
  [147] = {.lex_state = 1},
  [148] = {.lex_state = 1},
  [149] = {.lex_state = 1},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 1},
  [153] = {.lex_state = 1},
  [154] = {.lex_state = 1},
  [155] = {.lex_state = 1},
  [156] = {.lex_state = 1},
  [157] = {.lex_state = 1},
  [158] = {.lex_state = 1},
  [159] = {.lex_state = 1},
  [160] = {.lex_state = 1},
  [161] = {.lex_state = 1},
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
    [sym_program] = STATE(151),
    [sym__toplevel_statement] = STATE(2),
    [sym_statement] = STATE(2),
    [sym_variable_declaration] = STATE(53),
    [sym_method_declaration] = STATE(2),
    [sym_class_declaration] = STATE(2),
    [sym_modifiers] = STATE(78),
    [sym_type] = STATE(159),
    [sym__simple_type] = STATE(119),
    [sym_expression_statement] = STATE(53),
    [sym_expression] = STATE(20),
    [sym_assignment_expression] = STATE(21),
    [sym_binary_expression] = STATE(21),
    [sym_primary_expression] = STATE(21),
    [aux_sym_program_repeat1] = STATE(2),
    [aux_sym_modifiers_repeat1] = STATE(62),
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
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 16,
    ACTIONS(7), 1,
      anon_sym_function,
    ACTIONS(9), 1,
      anon_sym_class,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    STATE(20), 1,
      sym_expression,
    STATE(62), 1,
      aux_sym_modifiers_repeat1,
    STATE(78), 1,
      sym_modifiers,
    STATE(119), 1,
      sym__simple_type,
    STATE(159), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_number,
      sym_string,
    STATE(53), 2,
      sym_variable_declaration,
      sym_expression_statement,
    STATE(21), 3,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    ACTIONS(13), 4,
      anon_sym_int,
      anon_sym_float,
      anon_sym_string,
      anon_sym_boolean,
    STATE(3), 5,
      sym__toplevel_statement,
      sym_statement,
      sym_method_declaration,
      sym_class_declaration,
      aux_sym_program_repeat1,
    ACTIONS(11), 7,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_static,
      anon_sym_final,
      anon_sym_abstract,
      anon_sym_synchronized,
  [67] = 16,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    ACTIONS(23), 1,
      anon_sym_function,
    ACTIONS(26), 1,
      anon_sym_class,
    ACTIONS(35), 1,
      sym_identifier,
    STATE(20), 1,
      sym_expression,
    STATE(62), 1,
      aux_sym_modifiers_repeat1,
    STATE(78), 1,
      sym_modifiers,
    STATE(119), 1,
      sym__simple_type,
    STATE(159), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(38), 2,
      sym_number,
      sym_string,
    STATE(53), 2,
      sym_variable_declaration,
      sym_expression_statement,
    STATE(21), 3,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    ACTIONS(32), 4,
      anon_sym_int,
      anon_sym_float,
      anon_sym_string,
      anon_sym_boolean,
    STATE(3), 5,
      sym__toplevel_statement,
      sym_statement,
      sym_method_declaration,
      sym_class_declaration,
      aux_sym_program_repeat1,
    ACTIONS(29), 7,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_static,
      anon_sym_final,
      anon_sym_abstract,
      anon_sym_synchronized,
  [134] = 15,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(45), 1,
      anon_sym_RBRACE,
    STATE(30), 1,
      sym_expression,
    STATE(76), 1,
      aux_sym_modifiers_repeat1,
    STATE(82), 1,
      sym_modifiers,
    STATE(119), 1,
      sym__simple_type,
    STATE(154), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_number,
      sym_string,
    STATE(55), 2,
      sym_variable_declaration,
      sym_expression_statement,
    STATE(21), 3,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    ACTIONS(13), 4,
      anon_sym_int,
      anon_sym_float,
      anon_sym_string,
      anon_sym_boolean,
    STATE(6), 4,
      sym_statement,
      sym_block,
      sym__statement,
      aux_sym_block_repeat1,
    ACTIONS(41), 7,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_static,
      anon_sym_final,
      anon_sym_abstract,
      anon_sym_synchronized,
  [197] = 15,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(47), 1,
      anon_sym_RBRACE,
    STATE(30), 1,
      sym_expression,
    STATE(76), 1,
      aux_sym_modifiers_repeat1,
    STATE(82), 1,
      sym_modifiers,
    STATE(119), 1,
      sym__simple_type,
    STATE(154), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_number,
      sym_string,
    STATE(55), 2,
      sym_variable_declaration,
      sym_expression_statement,
    STATE(21), 3,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    ACTIONS(13), 4,
      anon_sym_int,
      anon_sym_float,
      anon_sym_string,
      anon_sym_boolean,
    STATE(8), 4,
      sym_statement,
      sym_block,
      sym__statement,
      aux_sym_block_repeat1,
    ACTIONS(41), 7,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_static,
      anon_sym_final,
      anon_sym_abstract,
      anon_sym_synchronized,
  [260] = 15,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(49), 1,
      anon_sym_RBRACE,
    STATE(30), 1,
      sym_expression,
    STATE(76), 1,
      aux_sym_modifiers_repeat1,
    STATE(82), 1,
      sym_modifiers,
    STATE(119), 1,
      sym__simple_type,
    STATE(154), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_number,
      sym_string,
    STATE(55), 2,
      sym_variable_declaration,
      sym_expression_statement,
    STATE(21), 3,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    ACTIONS(13), 4,
      anon_sym_int,
      anon_sym_float,
      anon_sym_string,
      anon_sym_boolean,
    STATE(7), 4,
      sym_statement,
      sym_block,
      sym__statement,
      aux_sym_block_repeat1,
    ACTIONS(41), 7,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_static,
      anon_sym_final,
      anon_sym_abstract,
      anon_sym_synchronized,
  [323] = 15,
    ACTIONS(54), 1,
      anon_sym_LBRACE,
    ACTIONS(57), 1,
      anon_sym_RBRACE,
    ACTIONS(62), 1,
      sym_identifier,
    STATE(30), 1,
      sym_expression,
    STATE(76), 1,
      aux_sym_modifiers_repeat1,
    STATE(82), 1,
      sym_modifiers,
    STATE(119), 1,
      sym__simple_type,
    STATE(154), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(65), 2,
      sym_number,
      sym_string,
    STATE(55), 2,
      sym_variable_declaration,
      sym_expression_statement,
    STATE(21), 3,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    ACTIONS(59), 4,
      anon_sym_int,
      anon_sym_float,
      anon_sym_string,
      anon_sym_boolean,
    STATE(7), 4,
      sym_statement,
      sym_block,
      sym__statement,
      aux_sym_block_repeat1,
    ACTIONS(51), 7,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_static,
      anon_sym_final,
      anon_sym_abstract,
      anon_sym_synchronized,
  [386] = 15,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(68), 1,
      anon_sym_RBRACE,
    STATE(30), 1,
      sym_expression,
    STATE(76), 1,
      aux_sym_modifiers_repeat1,
    STATE(82), 1,
      sym_modifiers,
    STATE(119), 1,
      sym__simple_type,
    STATE(154), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_number,
      sym_string,
    STATE(55), 2,
      sym_variable_declaration,
      sym_expression_statement,
    STATE(21), 3,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    ACTIONS(13), 4,
      anon_sym_int,
      anon_sym_float,
      anon_sym_string,
      anon_sym_boolean,
    STATE(7), 4,
      sym_statement,
      sym_block,
      sym__statement,
      aux_sym_block_repeat1,
    ACTIONS(41), 7,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_static,
      anon_sym_final,
      anon_sym_abstract,
      anon_sym_synchronized,
  [449] = 15,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(70), 1,
      anon_sym_RBRACE,
    STATE(30), 1,
      sym_expression,
    STATE(76), 1,
      aux_sym_modifiers_repeat1,
    STATE(82), 1,
      sym_modifiers,
    STATE(119), 1,
      sym__simple_type,
    STATE(154), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_number,
      sym_string,
    STATE(55), 2,
      sym_variable_declaration,
      sym_expression_statement,
    STATE(21), 3,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    ACTIONS(13), 4,
      anon_sym_int,
      anon_sym_float,
      anon_sym_string,
      anon_sym_boolean,
    STATE(10), 4,
      sym_statement,
      sym_block,
      sym__statement,
      aux_sym_block_repeat1,
    ACTIONS(41), 7,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_static,
      anon_sym_final,
      anon_sym_abstract,
      anon_sym_synchronized,
  [512] = 15,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(72), 1,
      anon_sym_RBRACE,
    STATE(30), 1,
      sym_expression,
    STATE(76), 1,
      aux_sym_modifiers_repeat1,
    STATE(82), 1,
      sym_modifiers,
    STATE(119), 1,
      sym__simple_type,
    STATE(154), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_number,
      sym_string,
    STATE(55), 2,
      sym_variable_declaration,
      sym_expression_statement,
    STATE(21), 3,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
    ACTIONS(13), 4,
      anon_sym_int,
      anon_sym_float,
      anon_sym_string,
      anon_sym_boolean,
    STATE(7), 4,
      sym_statement,
      sym_block,
      sym__statement,
      aux_sym_block_repeat1,
    ACTIONS(41), 7,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_static,
      anon_sym_final,
      anon_sym_abstract,
      anon_sym_synchronized,
  [575] = 11,
    ACTIONS(74), 1,
      anon_sym_function,
    ACTIONS(78), 1,
      anon_sym_RBRACE,
    ACTIONS(80), 1,
      sym_identifier,
    STATE(66), 1,
      aux_sym_modifiers_repeat1,
    STATE(79), 1,
      sym_modifiers,
    STATE(119), 1,
      sym__simple_type,
    STATE(153), 1,
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
  [622] = 11,
    ACTIONS(82), 1,
      anon_sym_function,
    ACTIONS(88), 1,
      anon_sym_RBRACE,
    ACTIONS(93), 1,
      sym_identifier,
    STATE(66), 1,
      aux_sym_modifiers_repeat1,
    STATE(79), 1,
      sym_modifiers,
    STATE(119), 1,
      sym__simple_type,
    STATE(153), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(90), 4,
      anon_sym_int,
      anon_sym_float,
      anon_sym_string,
      anon_sym_boolean,
    STATE(12), 4,
      sym_method_declaration,
      sym__class_body_declaration,
      sym_field_declaration,
      aux_sym_class_body_repeat1,
    ACTIONS(85), 7,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_static,
      anon_sym_final,
      anon_sym_abstract,
      anon_sym_synchronized,
  [669] = 11,
    ACTIONS(74), 1,
      anon_sym_function,
    ACTIONS(80), 1,
      sym_identifier,
    ACTIONS(96), 1,
      anon_sym_RBRACE,
    STATE(66), 1,
      aux_sym_modifiers_repeat1,
    STATE(79), 1,
      sym_modifiers,
    STATE(119), 1,
      sym__simple_type,
    STATE(153), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(13), 4,
      anon_sym_int,
      anon_sym_float,
      anon_sym_string,
      anon_sym_boolean,
    STATE(12), 4,
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
  [716] = 5,
    ACTIONS(98), 1,
      anon_sym_EQ,
    ACTIONS(104), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(102), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(100), 14,
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
  [750] = 4,
    ACTIONS(98), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(102), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(100), 14,
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
  [781] = 14,
    ACTIONS(106), 1,
      anon_sym_SEMI,
    ACTIONS(108), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(110), 1,
      anon_sym_AMP_AMP,
    ACTIONS(112), 1,
      anon_sym_PIPE,
    ACTIONS(114), 1,
      anon_sym_CARET,
    ACTIONS(116), 1,
      anon_sym_AMP,
    ACTIONS(130), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(118), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(120), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(122), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(124), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(126), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(128), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [831] = 6,
    ACTIONS(130), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(126), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(128), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(134), 4,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(132), 10,
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
  [865] = 5,
    ACTIONS(130), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(128), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(134), 4,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(132), 12,
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
  [897] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(134), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(132), 14,
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
  [925] = 14,
    ACTIONS(108), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(110), 1,
      anon_sym_AMP_AMP,
    ACTIONS(112), 1,
      anon_sym_PIPE,
    ACTIONS(114), 1,
      anon_sym_CARET,
    ACTIONS(116), 1,
      anon_sym_AMP,
    ACTIONS(130), 1,
      anon_sym_SLASH,
    ACTIONS(136), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(118), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(120), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(122), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(124), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(126), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(128), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [975] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(140), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(138), 14,
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
  [1003] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(102), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(100), 14,
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
  [1031] = 14,
    ACTIONS(108), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(110), 1,
      anon_sym_AMP_AMP,
    ACTIONS(112), 1,
      anon_sym_PIPE,
    ACTIONS(114), 1,
      anon_sym_CARET,
    ACTIONS(116), 1,
      anon_sym_AMP,
    ACTIONS(130), 1,
      anon_sym_SLASH,
    ACTIONS(142), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(118), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(120), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(122), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(124), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(126), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(128), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [1081] = 14,
    ACTIONS(108), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(110), 1,
      anon_sym_AMP_AMP,
    ACTIONS(112), 1,
      anon_sym_PIPE,
    ACTIONS(114), 1,
      anon_sym_CARET,
    ACTIONS(116), 1,
      anon_sym_AMP,
    ACTIONS(130), 1,
      anon_sym_SLASH,
    ACTIONS(144), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(118), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(120), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(122), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(124), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(126), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(128), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [1131] = 13,
    ACTIONS(110), 1,
      anon_sym_AMP_AMP,
    ACTIONS(112), 1,
      anon_sym_PIPE,
    ACTIONS(114), 1,
      anon_sym_CARET,
    ACTIONS(116), 1,
      anon_sym_AMP,
    ACTIONS(130), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(118), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(120), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(122), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(124), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(126), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(128), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(132), 2,
      anon_sym_SEMI,
      anon_sym_PIPE_PIPE,
  [1179] = 14,
    ACTIONS(108), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(110), 1,
      anon_sym_AMP_AMP,
    ACTIONS(112), 1,
      anon_sym_PIPE,
    ACTIONS(114), 1,
      anon_sym_CARET,
    ACTIONS(116), 1,
      anon_sym_AMP,
    ACTIONS(130), 1,
      anon_sym_SLASH,
    ACTIONS(146), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(118), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(120), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(122), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(124), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(126), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(128), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [1229] = 12,
    ACTIONS(112), 1,
      anon_sym_PIPE,
    ACTIONS(114), 1,
      anon_sym_CARET,
    ACTIONS(116), 1,
      anon_sym_AMP,
    ACTIONS(130), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(118), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(120), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(122), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(124), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(126), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(128), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(132), 3,
      anon_sym_SEMI,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [1275] = 12,
    ACTIONS(114), 1,
      anon_sym_CARET,
    ACTIONS(116), 1,
      anon_sym_AMP,
    ACTIONS(130), 1,
      anon_sym_SLASH,
    ACTIONS(134), 1,
      anon_sym_PIPE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(118), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(120), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(122), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(124), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(126), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(128), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(132), 3,
      anon_sym_SEMI,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [1321] = 14,
    ACTIONS(108), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(110), 1,
      anon_sym_AMP_AMP,
    ACTIONS(112), 1,
      anon_sym_PIPE,
    ACTIONS(114), 1,
      anon_sym_CARET,
    ACTIONS(116), 1,
      anon_sym_AMP,
    ACTIONS(130), 1,
      anon_sym_SLASH,
    ACTIONS(148), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(118), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(120), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(122), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(124), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(126), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(128), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [1371] = 14,
    ACTIONS(108), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(110), 1,
      anon_sym_AMP_AMP,
    ACTIONS(112), 1,
      anon_sym_PIPE,
    ACTIONS(114), 1,
      anon_sym_CARET,
    ACTIONS(116), 1,
      anon_sym_AMP,
    ACTIONS(130), 1,
      anon_sym_SLASH,
    ACTIONS(150), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(118), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(120), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(122), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(124), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(126), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(128), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [1421] = 11,
    ACTIONS(116), 1,
      anon_sym_AMP,
    ACTIONS(130), 1,
      anon_sym_SLASH,
    ACTIONS(134), 1,
      anon_sym_PIPE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(118), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(120), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(122), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(124), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(126), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(128), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(132), 4,
      anon_sym_SEMI,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
  [1465] = 14,
    ACTIONS(108), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(110), 1,
      anon_sym_AMP_AMP,
    ACTIONS(112), 1,
      anon_sym_PIPE,
    ACTIONS(114), 1,
      anon_sym_CARET,
    ACTIONS(116), 1,
      anon_sym_AMP,
    ACTIONS(130), 1,
      anon_sym_SLASH,
    ACTIONS(152), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(118), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(120), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(122), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(124), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(126), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(128), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [1515] = 10,
    ACTIONS(130), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(118), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(120), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(122), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(124), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(126), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(128), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(134), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(132), 4,
      anon_sym_SEMI,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
  [1557] = 14,
    ACTIONS(108), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(110), 1,
      anon_sym_AMP_AMP,
    ACTIONS(112), 1,
      anon_sym_PIPE,
    ACTIONS(114), 1,
      anon_sym_CARET,
    ACTIONS(116), 1,
      anon_sym_AMP,
    ACTIONS(130), 1,
      anon_sym_SLASH,
    ACTIONS(154), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(118), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(120), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(122), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(124), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(126), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(128), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [1607] = 9,
    ACTIONS(130), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(120), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(122), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(124), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(126), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(128), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(134), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(132), 6,
      anon_sym_SEMI,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [1647] = 7,
    ACTIONS(130), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(124), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(126), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(128), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(134), 4,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(132), 8,
      anon_sym_SEMI,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [1683] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(156), 3,
      ts_builtin_sym_end,
      sym_number,
      sym_string,
    ACTIONS(158), 14,
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
  [1709] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(160), 3,
      ts_builtin_sym_end,
      sym_number,
      sym_string,
    ACTIONS(162), 14,
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
  [1735] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(164), 3,
      ts_builtin_sym_end,
      sym_number,
      sym_string,
    ACTIONS(166), 14,
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
  [1761] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(168), 3,
      ts_builtin_sym_end,
      sym_number,
      sym_string,
    ACTIONS(170), 14,
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
  [1787] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(172), 3,
      ts_builtin_sym_end,
      sym_number,
      sym_string,
    ACTIONS(174), 14,
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
  [1813] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(176), 3,
      ts_builtin_sym_end,
      sym_number,
      sym_string,
    ACTIONS(178), 14,
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
  [1839] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(180), 3,
      ts_builtin_sym_end,
      sym_number,
      sym_string,
    ACTIONS(182), 14,
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
  [1865] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(184), 3,
      ts_builtin_sym_end,
      sym_number,
      sym_string,
    ACTIONS(186), 14,
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
  [1891] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(188), 3,
      ts_builtin_sym_end,
      sym_number,
      sym_string,
    ACTIONS(190), 14,
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
  [1917] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(192), 3,
      ts_builtin_sym_end,
      sym_number,
      sym_string,
    ACTIONS(194), 14,
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
  [1943] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(196), 3,
      ts_builtin_sym_end,
      sym_number,
      sym_string,
    ACTIONS(198), 14,
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
  [1969] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(200), 3,
      ts_builtin_sym_end,
      sym_number,
      sym_string,
    ACTIONS(202), 14,
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
  [1995] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(204), 3,
      ts_builtin_sym_end,
      sym_number,
      sym_string,
    ACTIONS(206), 14,
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
  [2021] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(208), 3,
      ts_builtin_sym_end,
      sym_number,
      sym_string,
    ACTIONS(210), 14,
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
  [2047] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(212), 3,
      ts_builtin_sym_end,
      sym_number,
      sym_string,
    ACTIONS(214), 14,
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
  [2073] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(216), 3,
      ts_builtin_sym_end,
      sym_number,
      sym_string,
    ACTIONS(218), 14,
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
  [2099] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(220), 3,
      ts_builtin_sym_end,
      sym_number,
      sym_string,
    ACTIONS(222), 14,
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
  [2125] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(184), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_number,
      sym_string,
    ACTIONS(186), 12,
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
  [2150] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(220), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_number,
      sym_string,
    ACTIONS(222), 12,
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
  [2175] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(164), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_number,
      sym_string,
    ACTIONS(166), 12,
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
  [2200] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(180), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_number,
      sym_string,
    ACTIONS(182), 12,
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
  [2225] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(156), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_number,
      sym_string,
    ACTIONS(158), 12,
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
  [2250] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(200), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_number,
      sym_string,
    ACTIONS(202), 12,
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
  [2275] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(204), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_number,
      sym_string,
    ACTIONS(206), 12,
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
  [2300] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(216), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_number,
      sym_string,
    ACTIONS(218), 12,
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
  [2325] = 4,
    STATE(63), 1,
      aux_sym_modifiers_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(224), 7,
      anon_sym_function,
      anon_sym_class,
      anon_sym_int,
      anon_sym_float,
      anon_sym_string,
      anon_sym_boolean,
      sym_identifier,
    ACTIONS(226), 7,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_static,
      anon_sym_final,
      anon_sym_abstract,
      anon_sym_synchronized,
  [2351] = 4,
    STATE(63), 1,
      aux_sym_modifiers_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(228), 7,
      anon_sym_function,
      anon_sym_class,
      anon_sym_int,
      anon_sym_float,
      anon_sym_string,
      anon_sym_boolean,
      sym_identifier,
    ACTIONS(230), 7,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_static,
      anon_sym_final,
      anon_sym_abstract,
      anon_sym_synchronized,
  [2377] = 3,
    ACTIONS(235), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(233), 13,
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
  [2400] = 3,
    ACTIONS(239), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(237), 13,
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
  [2423] = 4,
    STATE(67), 1,
      aux_sym_modifiers_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(224), 6,
      anon_sym_function,
      anon_sym_int,
      anon_sym_float,
      anon_sym_string,
      anon_sym_boolean,
      sym_identifier,
    ACTIONS(241), 7,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_static,
      anon_sym_final,
      anon_sym_abstract,
      anon_sym_synchronized,
  [2448] = 4,
    STATE(67), 1,
      aux_sym_modifiers_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(228), 6,
      anon_sym_function,
      anon_sym_int,
      anon_sym_float,
      anon_sym_string,
      anon_sym_boolean,
      sym_identifier,
    ACTIONS(243), 7,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_static,
      anon_sym_final,
      anon_sym_abstract,
      anon_sym_synchronized,
  [2473] = 3,
    ACTIONS(248), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(246), 13,
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
  [2496] = 3,
    ACTIONS(168), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(170), 13,
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
  [2519] = 3,
    ACTIONS(188), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(190), 13,
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
  [2542] = 3,
    ACTIONS(208), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(210), 13,
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
  [2565] = 3,
    ACTIONS(252), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(250), 13,
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
  [2588] = 3,
    ACTIONS(184), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(186), 13,
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
  [2611] = 3,
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
  [2634] = 4,
    STATE(75), 1,
      aux_sym_modifiers_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(228), 5,
      anon_sym_int,
      anon_sym_float,
      anon_sym_string,
      anon_sym_boolean,
      sym_identifier,
    ACTIONS(254), 7,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_static,
      anon_sym_final,
      anon_sym_abstract,
      anon_sym_synchronized,
  [2658] = 4,
    STATE(75), 1,
      aux_sym_modifiers_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(224), 5,
      anon_sym_int,
      anon_sym_float,
      anon_sym_string,
      anon_sym_boolean,
      sym_identifier,
    ACTIONS(257), 7,
      anon_sym_public,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_static,
      anon_sym_final,
      anon_sym_abstract,
      anon_sym_synchronized,
  [2682] = 7,
    ACTIONS(80), 1,
      sym_identifier,
    ACTIONS(259), 1,
      anon_sym_RPAREN,
    STATE(113), 1,
      sym_parameter,
    STATE(119), 1,
      sym__simple_type,
    STATE(157), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(13), 4,
      anon_sym_int,
      anon_sym_float,
      anon_sym_string,
      anon_sym_boolean,
  [2708] = 7,
    ACTIONS(80), 1,
      sym_identifier,
    ACTIONS(261), 1,
      anon_sym_function,
    ACTIONS(263), 1,
      anon_sym_class,
    STATE(119), 1,
      sym__simple_type,
    STATE(147), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(13), 4,
      anon_sym_int,
      anon_sym_float,
      anon_sym_string,
      anon_sym_boolean,
  [2734] = 6,
    ACTIONS(80), 1,
      sym_identifier,
    ACTIONS(265), 1,
      anon_sym_function,
    STATE(119), 1,
      sym__simple_type,
    STATE(149), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(13), 4,
      anon_sym_int,
      anon_sym_float,
      anon_sym_string,
      anon_sym_boolean,
  [2757] = 6,
    ACTIONS(80), 1,
      sym_identifier,
    STATE(119), 1,
      sym__simple_type,
    STATE(141), 1,
      sym_parameter,
    STATE(157), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(13), 4,
      anon_sym_int,
      anon_sym_float,
      anon_sym_string,
      anon_sym_boolean,
  [2780] = 5,
    ACTIONS(267), 1,
      sym_identifier,
    STATE(35), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_number,
      sym_string,
    STATE(21), 3,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
  [2800] = 5,
    ACTIONS(80), 1,
      sym_identifier,
    STATE(119), 1,
      sym__simple_type,
    STATE(156), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(13), 4,
      anon_sym_int,
      anon_sym_float,
      anon_sym_string,
      anon_sym_boolean,
  [2820] = 5,
    ACTIONS(267), 1,
      sym_identifier,
    STATE(25), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_number,
      sym_string,
    STATE(21), 3,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
  [2840] = 5,
    ACTIONS(267), 1,
      sym_identifier,
    STATE(24), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_number,
      sym_string,
    STATE(21), 3,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
  [2860] = 5,
    ACTIONS(271), 1,
      sym_identifier,
    STATE(122), 1,
      sym__simple_type,
    STATE(126), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(269), 4,
      anon_sym_int,
      anon_sym_float,
      anon_sym_string,
      anon_sym_boolean,
  [2880] = 5,
    ACTIONS(267), 1,
      sym_identifier,
    STATE(27), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_number,
      sym_string,
    STATE(21), 3,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
  [2900] = 5,
    ACTIONS(80), 1,
      sym_identifier,
    STATE(119), 1,
      sym__simple_type,
    STATE(132), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(13), 4,
      anon_sym_int,
      anon_sym_float,
      anon_sym_string,
      anon_sym_boolean,
  [2920] = 5,
    ACTIONS(267), 1,
      sym_identifier,
    STATE(23), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_number,
      sym_string,
    STATE(21), 3,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
  [2940] = 5,
    ACTIONS(267), 1,
      sym_identifier,
    STATE(28), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_number,
      sym_string,
    STATE(21), 3,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
  [2960] = 5,
    ACTIONS(267), 1,
      sym_identifier,
    STATE(31), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_number,
      sym_string,
    STATE(21), 3,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
  [2980] = 5,
    ACTIONS(80), 1,
      sym_identifier,
    STATE(119), 1,
      sym__simple_type,
    STATE(150), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(13), 4,
      anon_sym_int,
      anon_sym_float,
      anon_sym_string,
      anon_sym_boolean,
  [3000] = 5,
    ACTIONS(267), 1,
      sym_identifier,
    STATE(16), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_number,
      sym_string,
    STATE(21), 3,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
  [3020] = 5,
    ACTIONS(267), 1,
      sym_identifier,
    STATE(26), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_number,
      sym_string,
    STATE(21), 3,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
  [3040] = 5,
    ACTIONS(267), 1,
      sym_identifier,
    STATE(29), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_number,
      sym_string,
    STATE(21), 3,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
  [3060] = 5,
    ACTIONS(267), 1,
      sym_identifier,
    STATE(17), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_number,
      sym_string,
    STATE(21), 3,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
  [3080] = 5,
    ACTIONS(267), 1,
      sym_identifier,
    STATE(36), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_number,
      sym_string,
    STATE(21), 3,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
  [3100] = 5,
    ACTIONS(267), 1,
      sym_identifier,
    STATE(19), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_number,
      sym_string,
    STATE(21), 3,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
  [3120] = 5,
    ACTIONS(267), 1,
      sym_identifier,
    STATE(18), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_number,
      sym_string,
    STATE(21), 3,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
  [3140] = 5,
    ACTIONS(80), 1,
      sym_identifier,
    STATE(114), 1,
      sym_type,
    STATE(119), 1,
      sym__simple_type,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(13), 4,
      anon_sym_int,
      anon_sym_float,
      anon_sym_string,
      anon_sym_boolean,
  [3160] = 5,
    ACTIONS(267), 1,
      sym_identifier,
    STATE(33), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_number,
      sym_string,
    STATE(21), 3,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
  [3180] = 5,
    ACTIONS(267), 1,
      sym_identifier,
    STATE(32), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_number,
      sym_string,
    STATE(21), 3,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
  [3200] = 5,
    ACTIONS(267), 1,
      sym_identifier,
    STATE(34), 1,
      sym_expression,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_number,
      sym_string,
    STATE(21), 3,
      sym_assignment_expression,
      sym_binary_expression,
      sym_primary_expression,
  [3220] = 7,
    ACTIONS(273), 1,
      anon_sym_LBRACE,
    ACTIONS(275), 1,
      anon_sym_extends,
    ACTIONS(277), 1,
      anon_sym_implements,
    STATE(42), 1,
      sym_class_body,
    STATE(110), 1,
      sym_extends_clause,
    STATE(133), 1,
      sym_implements_clause,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [3243] = 7,
    ACTIONS(273), 1,
      anon_sym_LBRACE,
    ACTIONS(275), 1,
      anon_sym_extends,
    ACTIONS(277), 1,
      anon_sym_implements,
    STATE(38), 1,
      sym_class_body,
    STATE(108), 1,
      sym_extends_clause,
    STATE(128), 1,
      sym_implements_clause,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [3266] = 5,
    ACTIONS(279), 1,
      anon_sym_COLON,
    ACTIONS(281), 1,
      anon_sym_LBRACE,
    STATE(69), 1,
      sym_block,
    STATE(138), 1,
      sym_return_type,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [3283] = 5,
    ACTIONS(279), 1,
      anon_sym_COLON,
    ACTIONS(283), 1,
      anon_sym_LBRACE,
    STATE(45), 1,
      sym_block,
    STATE(134), 1,
      sym_return_type,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [3300] = 5,
    ACTIONS(279), 1,
      anon_sym_COLON,
    ACTIONS(283), 1,
      anon_sym_LBRACE,
    STATE(40), 1,
      sym_block,
    STATE(139), 1,
      sym_return_type,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [3317] = 5,
    ACTIONS(273), 1,
      anon_sym_LBRACE,
    ACTIONS(277), 1,
      anon_sym_implements,
    STATE(42), 1,
      sym_class_body,
    STATE(133), 1,
      sym_implements_clause,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [3334] = 5,
    ACTIONS(279), 1,
      anon_sym_COLON,
    ACTIONS(281), 1,
      anon_sym_LBRACE,
    STATE(70), 1,
      sym_block,
    STATE(140), 1,
      sym_return_type,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [3351] = 5,
    ACTIONS(273), 1,
      anon_sym_LBRACE,
    ACTIONS(277), 1,
      anon_sym_implements,
    STATE(47), 1,
      sym_class_body,
    STATE(137), 1,
      sym_implements_clause,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [3368] = 4,
    ACTIONS(285), 1,
      anon_sym_COMMA,
    ACTIONS(288), 1,
      anon_sym_RPAREN,
    STATE(111), 1,
      aux_sym_parameters_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [3382] = 4,
    ACTIONS(290), 1,
      anon_sym_COMMA,
    ACTIONS(292), 1,
      anon_sym_RPAREN,
    STATE(111), 1,
      aux_sym_parameters_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [3396] = 4,
    ACTIONS(290), 1,
      anon_sym_COMMA,
    ACTIONS(294), 1,
      anon_sym_RPAREN,
    STATE(112), 1,
      aux_sym_parameters_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [3410] = 4,
    ACTIONS(296), 1,
      anon_sym_COMMA,
    ACTIONS(298), 1,
      anon_sym_LBRACE,
    STATE(117), 1,
      aux_sym_implements_clause_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [3424] = 4,
    ACTIONS(300), 1,
      anon_sym_COMMA,
    ACTIONS(303), 1,
      anon_sym_LBRACE,
    STATE(115), 1,
      aux_sym_implements_clause_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [3438] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(305), 3,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      sym_identifier,
  [3448] = 4,
    ACTIONS(296), 1,
      anon_sym_COMMA,
    ACTIONS(307), 1,
      anon_sym_LBRACE,
    STATE(115), 1,
      aux_sym_implements_clause_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [3462] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(104), 3,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      sym_identifier,
  [3472] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(104), 3,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      sym_identifier,
  [3482] = 3,
    ACTIONS(309), 1,
      anon_sym_LPAREN,
    STATE(105), 1,
      sym_parameters,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [3493] = 3,
    ACTIONS(309), 1,
      anon_sym_LPAREN,
    STATE(106), 1,
      sym_parameters,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [3504] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(104), 2,
      anon_sym_LBRACE,
      anon_sym_implements,
  [3513] = 3,
    ACTIONS(309), 1,
      anon_sym_LPAREN,
    STATE(107), 1,
      sym_parameters,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [3524] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(104), 2,
      anon_sym_LBRACE,
      anon_sym_implements,
  [3533] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(311), 2,
      anon_sym_COLON,
      anon_sym_LBRACE,
  [3542] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(313), 2,
      anon_sym_LBRACE,
      anon_sym_implements,
  [3551] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(315), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3560] = 3,
    ACTIONS(273), 1,
      anon_sym_LBRACE,
    STATE(42), 1,
      sym_class_body,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [3571] = 3,
    ACTIONS(317), 1,
      anon_sym_EQ,
    ACTIONS(319), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [3582] = 3,
    ACTIONS(321), 1,
      anon_sym_EQ,
    ACTIONS(323), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [3593] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(325), 2,
      anon_sym_COLON,
      anon_sym_LBRACE,
  [3602] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(303), 2,
      anon_sym_COMMA,
      anon_sym_LBRACE,
  [3611] = 3,
    ACTIONS(273), 1,
      anon_sym_LBRACE,
    STATE(47), 1,
      sym_class_body,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [3622] = 3,
    ACTIONS(283), 1,
      anon_sym_LBRACE,
    STATE(50), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [3633] = 3,
    ACTIONS(327), 1,
      anon_sym_EQ,
    ACTIONS(329), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [3644] = 3,
    ACTIONS(331), 1,
      anon_sym_EQ,
    ACTIONS(333), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [3655] = 3,
    ACTIONS(273), 1,
      anon_sym_LBRACE,
    STATE(51), 1,
      sym_class_body,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [3666] = 3,
    ACTIONS(281), 1,
      anon_sym_LBRACE,
    STATE(70), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [3677] = 3,
    ACTIONS(283), 1,
      anon_sym_LBRACE,
    STATE(45), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [3688] = 3,
    ACTIONS(281), 1,
      anon_sym_LBRACE,
    STATE(71), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [3699] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(288), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3708] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(335), 2,
      anon_sym_COLON,
      anon_sym_LBRACE,
  [3717] = 3,
    ACTIONS(337), 1,
      anon_sym_EQ,
    ACTIONS(339), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [3728] = 3,
    ACTIONS(309), 1,
      anon_sym_LPAREN,
    STATE(109), 1,
      sym_parameters,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [3739] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(305), 2,
      anon_sym_LBRACE,
      anon_sym_implements,
  [3748] = 3,
    ACTIONS(341), 1,
      anon_sym_EQ,
    ACTIONS(343), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [3759] = 2,
    ACTIONS(345), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [3767] = 2,
    ACTIONS(347), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [3775] = 2,
    ACTIONS(349), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [3783] = 2,
    ACTIONS(351), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [3791] = 2,
    ACTIONS(353), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [3799] = 2,
    ACTIONS(355), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [3807] = 2,
    ACTIONS(357), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [3815] = 2,
    ACTIONS(359), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [3823] = 2,
    ACTIONS(361), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [3831] = 2,
    ACTIONS(363), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [3839] = 2,
    ACTIONS(365), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [3847] = 2,
    ACTIONS(367), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [3855] = 2,
    ACTIONS(369), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [3863] = 2,
    ACTIONS(371), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [3871] = 2,
    ACTIONS(373), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 67,
  [SMALL_STATE(4)] = 134,
  [SMALL_STATE(5)] = 197,
  [SMALL_STATE(6)] = 260,
  [SMALL_STATE(7)] = 323,
  [SMALL_STATE(8)] = 386,
  [SMALL_STATE(9)] = 449,
  [SMALL_STATE(10)] = 512,
  [SMALL_STATE(11)] = 575,
  [SMALL_STATE(12)] = 622,
  [SMALL_STATE(13)] = 669,
  [SMALL_STATE(14)] = 716,
  [SMALL_STATE(15)] = 750,
  [SMALL_STATE(16)] = 781,
  [SMALL_STATE(17)] = 831,
  [SMALL_STATE(18)] = 865,
  [SMALL_STATE(19)] = 897,
  [SMALL_STATE(20)] = 925,
  [SMALL_STATE(21)] = 975,
  [SMALL_STATE(22)] = 1003,
  [SMALL_STATE(23)] = 1031,
  [SMALL_STATE(24)] = 1081,
  [SMALL_STATE(25)] = 1131,
  [SMALL_STATE(26)] = 1179,
  [SMALL_STATE(27)] = 1229,
  [SMALL_STATE(28)] = 1275,
  [SMALL_STATE(29)] = 1321,
  [SMALL_STATE(30)] = 1371,
  [SMALL_STATE(31)] = 1421,
  [SMALL_STATE(32)] = 1465,
  [SMALL_STATE(33)] = 1515,
  [SMALL_STATE(34)] = 1557,
  [SMALL_STATE(35)] = 1607,
  [SMALL_STATE(36)] = 1647,
  [SMALL_STATE(37)] = 1683,
  [SMALL_STATE(38)] = 1709,
  [SMALL_STATE(39)] = 1735,
  [SMALL_STATE(40)] = 1761,
  [SMALL_STATE(41)] = 1787,
  [SMALL_STATE(42)] = 1813,
  [SMALL_STATE(43)] = 1839,
  [SMALL_STATE(44)] = 1865,
  [SMALL_STATE(45)] = 1891,
  [SMALL_STATE(46)] = 1917,
  [SMALL_STATE(47)] = 1943,
  [SMALL_STATE(48)] = 1969,
  [SMALL_STATE(49)] = 1995,
  [SMALL_STATE(50)] = 2021,
  [SMALL_STATE(51)] = 2047,
  [SMALL_STATE(52)] = 2073,
  [SMALL_STATE(53)] = 2099,
  [SMALL_STATE(54)] = 2125,
  [SMALL_STATE(55)] = 2150,
  [SMALL_STATE(56)] = 2175,
  [SMALL_STATE(57)] = 2200,
  [SMALL_STATE(58)] = 2225,
  [SMALL_STATE(59)] = 2250,
  [SMALL_STATE(60)] = 2275,
  [SMALL_STATE(61)] = 2300,
  [SMALL_STATE(62)] = 2325,
  [SMALL_STATE(63)] = 2351,
  [SMALL_STATE(64)] = 2377,
  [SMALL_STATE(65)] = 2400,
  [SMALL_STATE(66)] = 2423,
  [SMALL_STATE(67)] = 2448,
  [SMALL_STATE(68)] = 2473,
  [SMALL_STATE(69)] = 2496,
  [SMALL_STATE(70)] = 2519,
  [SMALL_STATE(71)] = 2542,
  [SMALL_STATE(72)] = 2565,
  [SMALL_STATE(73)] = 2588,
  [SMALL_STATE(74)] = 2611,
  [SMALL_STATE(75)] = 2634,
  [SMALL_STATE(76)] = 2658,
  [SMALL_STATE(77)] = 2682,
  [SMALL_STATE(78)] = 2708,
  [SMALL_STATE(79)] = 2734,
  [SMALL_STATE(80)] = 2757,
  [SMALL_STATE(81)] = 2780,
  [SMALL_STATE(82)] = 2800,
  [SMALL_STATE(83)] = 2820,
  [SMALL_STATE(84)] = 2840,
  [SMALL_STATE(85)] = 2860,
  [SMALL_STATE(86)] = 2880,
  [SMALL_STATE(87)] = 2900,
  [SMALL_STATE(88)] = 2920,
  [SMALL_STATE(89)] = 2940,
  [SMALL_STATE(90)] = 2960,
  [SMALL_STATE(91)] = 2980,
  [SMALL_STATE(92)] = 3000,
  [SMALL_STATE(93)] = 3020,
  [SMALL_STATE(94)] = 3040,
  [SMALL_STATE(95)] = 3060,
  [SMALL_STATE(96)] = 3080,
  [SMALL_STATE(97)] = 3100,
  [SMALL_STATE(98)] = 3120,
  [SMALL_STATE(99)] = 3140,
  [SMALL_STATE(100)] = 3160,
  [SMALL_STATE(101)] = 3180,
  [SMALL_STATE(102)] = 3200,
  [SMALL_STATE(103)] = 3220,
  [SMALL_STATE(104)] = 3243,
  [SMALL_STATE(105)] = 3266,
  [SMALL_STATE(106)] = 3283,
  [SMALL_STATE(107)] = 3300,
  [SMALL_STATE(108)] = 3317,
  [SMALL_STATE(109)] = 3334,
  [SMALL_STATE(110)] = 3351,
  [SMALL_STATE(111)] = 3368,
  [SMALL_STATE(112)] = 3382,
  [SMALL_STATE(113)] = 3396,
  [SMALL_STATE(114)] = 3410,
  [SMALL_STATE(115)] = 3424,
  [SMALL_STATE(116)] = 3438,
  [SMALL_STATE(117)] = 3448,
  [SMALL_STATE(118)] = 3462,
  [SMALL_STATE(119)] = 3472,
  [SMALL_STATE(120)] = 3482,
  [SMALL_STATE(121)] = 3493,
  [SMALL_STATE(122)] = 3504,
  [SMALL_STATE(123)] = 3513,
  [SMALL_STATE(124)] = 3524,
  [SMALL_STATE(125)] = 3533,
  [SMALL_STATE(126)] = 3542,
  [SMALL_STATE(127)] = 3551,
  [SMALL_STATE(128)] = 3560,
  [SMALL_STATE(129)] = 3571,
  [SMALL_STATE(130)] = 3582,
  [SMALL_STATE(131)] = 3593,
  [SMALL_STATE(132)] = 3602,
  [SMALL_STATE(133)] = 3611,
  [SMALL_STATE(134)] = 3622,
  [SMALL_STATE(135)] = 3633,
  [SMALL_STATE(136)] = 3644,
  [SMALL_STATE(137)] = 3655,
  [SMALL_STATE(138)] = 3666,
  [SMALL_STATE(139)] = 3677,
  [SMALL_STATE(140)] = 3688,
  [SMALL_STATE(141)] = 3699,
  [SMALL_STATE(142)] = 3708,
  [SMALL_STATE(143)] = 3717,
  [SMALL_STATE(144)] = 3728,
  [SMALL_STATE(145)] = 3739,
  [SMALL_STATE(146)] = 3748,
  [SMALL_STATE(147)] = 3759,
  [SMALL_STATE(148)] = 3767,
  [SMALL_STATE(149)] = 3775,
  [SMALL_STATE(150)] = 3783,
  [SMALL_STATE(151)] = 3791,
  [SMALL_STATE(152)] = 3799,
  [SMALL_STATE(153)] = 3807,
  [SMALL_STATE(154)] = 3815,
  [SMALL_STATE(155)] = 3823,
  [SMALL_STATE(156)] = 3831,
  [SMALL_STATE(157)] = 3839,
  [SMALL_STATE(158)] = 3847,
  [SMALL_STATE(159)] = 3855,
  [SMALL_STATE(160)] = 3863,
  [SMALL_STATE(161)] = 3871,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1, 0, 0),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0),
  [23] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(158),
  [26] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(148),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(62),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(116),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(22),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(76),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(116),
  [62] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(22),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_class_body_repeat1, 2, 0, 0), SHIFT_REPEAT(160),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_class_body_repeat1, 2, 0, 0), SHIFT_REPEAT(66),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_body_repeat1, 2, 0, 0),
  [90] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_class_body_repeat1, 2, 0, 0), SHIFT_REPEAT(116),
  [93] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_class_body_repeat1, 2, 0, 0), SHIFT_REPEAT(118),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_expression, 1, 0, 0),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primary_expression, 1, 0, 0),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1, 0, 0),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, 0, 0),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, 0, 0),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1, 0, 0),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1, 0, 0),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_expression, 3, 0, 0),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 4, 0, 0),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 4, 0, 0),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_declaration, 3, 0, 0),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_declaration, 3, 0, 0),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 3, 0, 0),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 3, 0, 0),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_declaration, 4, 0, 0),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method_declaration, 4, 0, 0),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_body, 2, 0, 0),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_body, 2, 0, 0),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_declaration, 4, 0, 0),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_declaration, 4, 0, 0),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_statement, 2, 0, 0),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_statement, 2, 0, 0),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2, 0, 0),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2, 0, 0),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_declaration, 5, 0, 0),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method_declaration, 5, 0, 0),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_body, 3, 0, 0),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_body, 3, 0, 0),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_declaration, 5, 0, 0),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_declaration, 5, 0, 0),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 5, 0, 0),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 5, 0, 0),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, 0, 0),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3, 0, 0),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_declaration, 6, 0, 0),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method_declaration, 6, 0, 0),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_declaration, 6, 0, 0),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_declaration, 6, 0, 0),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 6, 0, 0),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 6, 0, 0),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1, 0, 0),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1, 0, 0),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_modifiers, 1, 0, 0),
  [226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_modifiers_repeat1, 2, 0, 0),
  [230] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_modifiers_repeat1, 2, 0, 0), SHIFT_REPEAT(63),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_declaration, 4, 0, 0),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_declaration, 4, 0, 0),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_declaration, 5, 0, 0),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_declaration, 5, 0, 0),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [243] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_modifiers_repeat1, 2, 0, 0), SHIFT_REPEAT(67),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_declaration, 6, 0, 0),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_declaration, 6, 0, 0),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_declaration, 3, 0, 0),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_declaration, 3, 0, 0),
  [254] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_modifiers_repeat1, 2, 0, 0), SHIFT_REPEAT(75),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [269] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [285] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(80),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2, 0, 0),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_implements_clause, 2, 0, 0),
  [300] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_implements_clause_repeat1, 2, 0, 0), SHIFT_REPEAT(87),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_implements_clause_repeat1, 2, 0, 0),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__simple_type, 1, 0, 0),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_implements_clause, 3, 0, 0),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 3, 0, 0),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extends_clause, 2, 0, 0),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2, 0, 0),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 2, 0, 0),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 4, 0, 0),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_type, 2, 0, 0),
  [353] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
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
