const DIGITS = token(choice('0', seq(/[1-9]/, optional(seq(optional('_'), sep1(/[0-9]+/, /_+/))))));
const DECIMAL_DIGITS = token(sep1(/[0-9]+/, '_'));
const HEX_DIGITS = token(sep1(/[A-Fa-f0-9]+/, '_'));
const PREC = {
  COMMENT: 0, // Comments
  ASSIGN: 1, // Assignments
  DECL: 2, // Declarations
  TERNARY: 3, // Ternary operator
  OR: 4, // Logical OR
  AND: 5, // Logical AND
  BIT_OR: 6, // Bitwise OR
  BIT_XOR: 7, // Bitwise XOR
  BIT_AND: 8, // Bitwise AND
  EQUALITY: 9, // == !=
  REL: 10, // Relational operators
  SHIFT: 11, // Shift operators
  ADD: 12, // Addition/Subtraction
  MULT: 13, // Multiplication/Division
  UNARY: 15, // Unary operators
  ARRAY: 16, // Array access
  OBJ_ACCESS: 16, // Object access
  PARENS: 16, // Parentheses
  CLASS_LITERAL: 17, // Class literals
  TYPE: 18, // Type precedence
  ANNOTATED_TYPE: 19, // Annotated type precedence
};

module.exports = grammar({
  name: 'gosu',

  extras: $ => [
    $.line_comment,
    $.block_comment,
    /\s/,
  ],
  supertypes: $ => [
    $.expression,
    $.declaration,
    $.statement,
    $.primary_expression,
    $._literal,
    $.type,
    $._simple_type,
    $.annotation
  ],

  rules: {
    program: $ => repeat($._toplevel_statement),

    _toplevel_statement: $ => choice(
      $.statement,
      $.method_declaration,
      $.class_declaration
    ),
    declaration: $ => choice(
      $.variable_declaration,     // Variable declarations
      $.method_declaration,       // Method declarations
      $.class_declaration         // Class declarations
    ),    
    _literal: $ => choice(
      $.number_literal,   // Number literals (e.g., 123, 3.14)
      $.string_literal,   // String literals (e.g., "hello")
      $.boolean_literal,  // Boolean literals (true, false)
      $.null_literal      // Null literal (null)
    ),
    number_literal: $ => /[0-9]+(\.[0-9]+)?/, // Matches integers and floating point numbers
    string_literal: $ => /"[^"]*"/,            // Matches strings inside quotes
    boolean_literal: $ => choice('true', 'false'), // Boolean literals (true, false)
    null_literal: $ => 'null',                  // Null literal

    statement: $ => choice(
      $.variable_declaration,
      $.expression_statement
    ),

    variable_declaration: $ => prec(PREC.DECL, seq(
      optional($.modifiers),
      optional(seq(":", $.type)),
      $.identifier,
      optional(seq('=', $.expression)),
      ';'
    )),

    method_declaration: $ => seq(
      optional($.modifiers),
      'function',
      $.identifier,
      $.parameters,
      optional($.return_type),
      $.block
    ),

    class_declaration: $ => seq(
      optional($.modifiers),
      'class',
      $.identifier,
      optional($.extends_clause),
      optional($.implements_clause),
      $.class_body
    ),

    modifiers: $ => repeat1(choice(
      'public',
      'private',
      'protected',
      'static',
      'final',
      'abstract',
      'synchronized'
    )),

    parameters: $ => seq('(', commaSep($.parameter), ')'),

    parameter: $ => seq($.type, $.identifier),

    return_type: $ => seq(':', $.type),

    class_body: $ => seq('{', repeat($._class_body_declaration), '}'),

    _class_body_declaration: $ => choice(
      $.method_declaration,
      $.field_declaration
    ),

    field_declaration: $ => seq(
      optional($.modifiers),
      $.type,
      $.identifier,
      optional(seq('=', $.expression)),
      ';'
    ),

    type: $ => prec(PREC.TYPE, choice(
      $._simple_type,
      $.identifier
    )),

    annotated_type: $ => prec(PREC.ANNOTATED_TYPE, seq(
      repeat($.annotation),
      $._simple_type
    )),

    _simple_type: $ => choice(
      'int',
      'float',
      'string',
      'boolean',
      $.identifier
    ),

    annotation: $ => seq(
      '@',
      $.identifier,
      optional($.annotation_arguments)
    ),

    annotation_arguments: $ => seq(
      '(',
      commaSep($.expression),
      ')'
    ),

    expression_statement: $ => seq($.expression, ';'),

    expression: $ => choice(
      $.assignment_expression,
      $.binary_expression,
      $.primary_expression
    ),

    assignment_expression: $ => prec(PREC.ASSIGN, seq(
      $.identifier,
      '=',
      $.expression
    )),

    binary_expression: $ => choice(
      prec.left(PREC.OR, seq($.expression, '||', $.expression)),
      prec.left(PREC.AND, seq($.expression, '&&', $.expression)),
      prec.left(PREC.BIT_OR, seq($.expression, '|', $.expression)),
      prec.left(PREC.BIT_XOR, seq($.expression, '^', $.expression)),
      prec.left(PREC.BIT_AND, seq($.expression, '&', $.expression)),
      prec.left(PREC.EQUALITY, seq($.expression, choice('==', '!='), $.expression)),
      prec.left(PREC.REL, seq($.expression, choice('<', '<=', '>', '>='), $.expression)),
      prec.left(PREC.SHIFT, seq($.expression, choice('<<', '>>'), $.expression)),
      prec.left(PREC.ADD, seq($.expression, choice('+', '-'), $.expression)),
      prec.left(PREC.MULT, seq($.expression, choice('*', '/', '%'), $.expression))
    ),

    primary_expression: $ => choice(
      $.identifier,
      $.number,
      $.string
    ),

    identifier: $ => /[a-zA-Z_]\w*/,

    number: $ => token(/[0-9]+/),

    string: $ => /"[^"]*"/,

    line_comment: $ => token(seq('//', /.*/)),

    block_comment: $ => token(seq('/*', /[^*]*\*+([^/*][^*]*\*+)*/, '/')),

    extends_clause: $ => seq('extends', $.type),

    implements_clause: $ => seq('implements', commaSep1($.type)),

    block: $ => seq('{', repeat($._statement), '}'),

    _statement: $ => choice(
      $.statement,
      $.block
    ),
  },

  conflicts: $ => [
    [$.modifiers, $.annotated_type],
  ],
});

/**
 * Creates a rule to match one or more of the rules separated by `separator`
 *
 * @param {RuleOrLiteral} rule
 *
 * @param {RuleOrLiteral} separator
 *
 * @returns {SeqRule}
 */
function sep1(rule, separator) {
  return seq(rule, repeat(seq(separator, rule)));
}

/**
 * Creates a rule to match one or more of the rules separated by a comma
 *
 * @param {RuleOrLiteral} rule
 *
 * @returns {SeqRule}
 */
function commaSep1(rule) {
  return seq(rule, repeat(seq(',', rule)));
}

/**
 * Creates a rule to optionally match one or more of the rules separated by a comma
 *
 * @param {RuleOrLiteral} rule
 *
 * @returns {ChoiceRule}
 */
function commaSep(rule) {
  return optional(commaSep1(rule));
}
