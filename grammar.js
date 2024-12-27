const DIGITS = token(choice('0', seq(/[1-9]/, optional(seq(optional('_'), sep1(/[0-9]+/, /_+/)))))); 
// Matches numeric literals with optional underscores (e.g., 1_000).

const DECIMAL_DIGITS = token(sep1(/[0-9]+/, '_')); 
// Matches sequences of decimal digits separated by underscores.

const HEX_DIGITS = token(sep1(/[A-Fa-f0-9]+/, '_')); 
// Matches hexadecimal digits separated by underscores.

const PREC = {
  COMMENT: 0,           // Priority for comments.
  ASSIGN: 1,            // Assignment operators (=).
  DECL: 2,              // Declarations (e.g., var).
  TERNARY: 3,           // Ternary operators (? :).
  OR: 4,                // Logical OR (||).
  AND: 5,               // Logical AND (&&).
  BIT_OR: 6,            // Bitwise OR (|).
  BIT_XOR: 7,           // Bitwise XOR (^).
  BIT_AND: 8,           // Bitwise AND (&).
  EQUALITY: 9,          // Equality (==, !=).
  REL: 10,              // Relational operators (<, <=, >, >=).
  SHIFT: 11,            // Shift operators (<<, >>).
  ADD: 12,              // Addition and subtraction (+, -).
  MULT: 13,             // Multiplication, division, modulus (*, /, %).
  UNARY: 15,            // Unary operators (-, !, ~).
  ARRAY: 16,            // Array access (e.g., arr[index]).
  OBJ_ACCESS: 16,       // Object access (e.g., obj.field).
  PARENS: 16,           // Parentheses for grouping.
  CLASS_LITERAL: 17,    // Class literals.
  TYPE: 18,             // Type-related operations.
  ANNOTATED_TYPE: 19    // Annotated type-related precedence.
};

module.exports = grammar({
  name: 'gosu', // Name of the grammar.

  extras: $ => [
    $.line_comment, // Line comments (//...).
    $.block_comment, // Block comments (/*...*/).
    /\s/,           // Whitespace.
  ],

  supertypes: $ => [
    $.expression,          // General expression types.
    $.declaration,         // Declaration types (var, method, etc.).
    $.statement,           // Statement types.
    $.primary_expression,  // Primary expression types.
    $._literal,            // Literals (numbers, strings, etc.).
    $.type,                // Types (int, float, etc.).
    $._simple_type,        // Simple types.
    $.annotation           // Annotations (@Annotation).
  ],

  word: $ => $.identifier, // Defines the default "word" for highlighting.

  rules: {
    program: $ => repeat($._toplevel_statement), 
    // The entry point for parsing the program. It repeats top-level statements.

    _toplevel_statement: $ => choice(
      $.statement,          // Top-level statements.
      $.method_declaration, // Method declarations.
      $.class_declaration   // Class declarations.
    ),

    declaration: $ => choice(
      $.variable_declaration,     // Variable declarations.
      $.method_declaration,       // Method declarations.
      $.class_declaration         // Class declarations.
    ),

    _literal: $ => choice(
      $.number_literal,   // Number literals (e.g., 123, 3.14).
      $.string_literal,   // String literals (e.g., "hello").
      $.boolean_literal,  // Boolean literals (true, false).
      $.null_literal      // Null literal (null).
    ),

    number_literal: $ => /[0-9]+(\.[0-9]+)?/, 
    // Matches integers and floating-point numbers.

    string_literal: $ => /"[^"]*"/, 
    // Matches string literals enclosed in double quotes.

    boolean_literal: $ => choice('true', 'false'), 
    // Matches boolean literals.

    null_literal: $ => 'null', 
    // Matches the null literal.

    statement: $ => choice(
      $.variable_declaration, // Variable declaration statements.
      $.expression_statement  // Expression statements.
    ),

    variable_declaration: $ => prec(PREC.DECL, seq(
      optional($.modifiers),              // Optional modifiers (public, private, etc.).
      optional(seq(":", $.type)),         // Optional type declaration (e.g., : int).
      'var',                              // Keyword 'var'.
      $.identifier,                       // Variable name.
      optional(seq('=', $.expression)),   // Optional initializer.
      ';'                                 // Statement terminator.
    )),

    method_declaration: $ => seq(
      optional($.modifiers),  // Optional modifiers.
      'function',             // Keyword 'function'.
      $.identifier,           // Method name.
      $.parameters,           // Parameters list.
      optional($.return_type),// Optional return type.
      $.block                 // Method body.
    ),

    class_declaration: $ => seq(
      optional($.modifiers),       // Optional modifiers.
      'class',                     // Keyword 'class'.
      $.identifier,                // Class name.
      optional($.extends_clause),  // Optional inheritance clause.
      optional($.implements_clause), // Optional interface implementation.
      $.class_body                 // Class body.
    ),

    modifiers: $ => repeat1(choice(
      'public', 'private', 'protected', 'static', 
      'final', 'abstract', 'synchronized'
    )),
    // Matches one or more modifiers.

    parameters: $ => seq('(', commaSep($.parameter), ')'), 
    // Method parameters enclosed in parentheses.

    parameter: $ => seq($.type, $.identifier), 
    // A single parameter (type and name).

    return_type: $ => seq(':', $.type), 
    // Specifies the return type of a method.

    class_body: $ => seq('{', repeat($._class_body_declaration), '}'), 
    // Class body enclosed in curly braces.

    _class_body_declaration: $ => choice(
      $.method_declaration, // Method declarations in the class.
      $.field_declaration   // Field declarations in the class.
    ),

    field_declaration: $ => seq(
      optional($.modifiers), // Optional modifiers.
      $.type,                // Field type.
      $.identifier,          // Field name.
      optional(seq('=', $.expression)), // Optional initializer.
      ';'                    // Statement terminator.
    ),

    type: $ => prec(PREC.TYPE, choice(
      $._simple_type,        // Simple types (int, string, etc.).
      $.identifier           // Custom or complex types.
    )),

    annotated_type: $ => prec(PREC.ANNOTATED_TYPE, seq(
      repeat($.annotation),  // Annotations (e.g., @Override).
      $._simple_type         // Simple type being annotated.
    )),

    _simple_type: $ => choice(
      'int', 'float', 'string', 'boolean', // Primitive types.
      $.identifier                        // Custom types.
    ),

    annotation: $ => seq(
      '@',                  // Annotation prefix.
      $.identifier,         // Annotation name.
      optional($.annotation_arguments) // Optional arguments.
    ),

    annotation_arguments: $ => seq(
      '(', commaSep($.expression), ')'
    ),
    // Arguments passed to annotations.

    expression_statement: $ => seq($.expression, ';'), 
    // Expression followed by a semicolon.

    expression: $ => choice(
      $.assignment_expression, // Assignments.
      $.binary_expression,     // Binary operations.
      $.primary_expression     // Primary expressions.
    ),

    assignment_expression: $ => prec(PREC.ASSIGN, seq(
      $.identifier, '=', $.expression
    )),
    // Assignment of a value to a variable.

    binary_expression: $ => choice(
      prec.left(PREC.OR, seq($.expression, '||', $.expression)), // Logical OR.
      prec.left(PREC.AND, seq($.expression, '&&', $.expression)), // Logical AND.
      // More binary operators follow...
    ),

    primary_expression: $ => choice(
      $.identifier, 
      $.number, 
      $.string
    ),

    identifier: $ => /[a-zA-Z_]\w*/, 
    // Matches valid identifiers (variables, methods, etc.).

    number: $ => token(/[0-9]+/), 
    // Matches numeric literals.

    string: $ => /"[^"]*"/, 
    // Matches string literals.

    line_comment: $ => token(seq('//', /.*/)), 
    // Matches single-line comments.

    block_comment: $ => token(seq('/*', /[^*]*\*+([^/*][^*]*\*+)*/, '/')), 
    // Matches block comments.

    extends_clause: $ => seq('extends', $.type), 
    // Inheritance clause for classes.

    implements_clause: $ => seq('implements', commaSep1($.type)), 
    // Interface implementation clause.

    block: $ => seq('{', repeat($._statement), '}'), 
    // Block of statements enclosed in curly braces.

    _statement: $ => choice(
      $.statement, 
      $.block
    ), 
    // Matches individual statements or nested blocks.
  },

  conflicts: $ => [
    [$.modifiers, $.annotated_type],
  ],
});

/**
 * Creates a rule to match one or more of the rules separated by `separator`.
 * @param {RuleOrLiteral} rule
 * @param {RuleOrLiteral} separator
 */
function sep1(rule, separator) {
  return seq(rule, repeat(seq(separator, rule)));
}

/**
 * Creates a rule to match one or more of the rules separated by a comma.
 * @param {RuleOrLiteral} rule
 */
function commaSep1(rule) {
  return seq(rule, repeat(seq(',', rule)));
}

/**
 * Creates a rule to optionally match one or more of the rules separated by a comma.
 * @param {RuleOrLiteral} rule
 */
function commaSep(rule) {
  return optional(commaSep1(rule));
}
