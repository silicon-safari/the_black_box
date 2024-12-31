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

  inline: $ => [
    $._name,
    $._simple_type,
    $._class_body_declaration,
    $._variable_initializer,
  ],

  conflicts: $ => [
    [$.modifiers, $.annotated_type, $.receiver_parameter],
    [$.modifiers, $.annotated_type, $.module_declaration, $.package_declaration],
    [$._unannotated_type, $.primary_expression],
    [$._unannotated_type, $.primary_expression, $.scoped_type_identifier],
    [$._unannotated_type, $.scoped_type_identifier],
    [$._unannotated_type, $.generic_type],
    [$.generic_type, $.primary_expression],
    [$.lambda_expression, $.primary_expression],
    [$.inferred_parameter, $.primary_expression],
    [$.argument_list, $.record_pattern_body],
    [$.yield_statement, $._reserved_identifier],
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

    _name: $ => choice(
      $.identifier,
      $._reserved_identifier,
      $.scoped_identifier,
    ),

    _reserved_identifier: $ => choice(
      'var', 'function', 'class', 'interface', 'enum', // Add all reserved keywords of Gosu
      'extends', 'implements', 'null', 'true', 'false'
    ),
    scoped_identifier: $ => seq(
      $.identifier,          // Base identifier
      repeat(seq('.', $.identifier)) // Dotted names for scope, e.g., `com.example.MyClass`
    ),

    declaration: $ => choice(
      $.variable_declaration,     // Variable declarations.
      $.method_declaration,       // Method declarations.
      $.class_declaration         // Class declarations.
    ),

    _literal: $ => choice(
      $.decimal_integer_literal,
      $.hex_integer_literal,
      $.octal_integer_literal,
      $.binary_integer_literal,
      $.decimal_floating_point_literal,
      $.hex_floating_point_literal,
      $.number_literal,   // Number literals (e.g., 123, 3.14).
      $.string_literal,   // String literals (e.g., "hello").
      $.boolean_literal,  // Boolean literals (true, false).
      $.null_literal      // Null literal (null).
    ),
    decimal_integer_literal: _ => token(seq(
      DIGITS,
      optional(choice('l', 'L')),
    )),
    // Matches decimal integer literal

    hex_integer_literal: _ => token(seq(
      choice('0x', '0X'),
      HEX_DIGITS,
      optional(choice('l', 'L')),
    )),
    // Matches the hexadecimal int

    octal_integer_literal: _ => token(seq(
      choice('0o', '0O', '0'),
      sep1(/[0-7]+/, '_'),
      optional(choice('l', 'L')),
    )),
    // Matches the Octal int

    binary_integer_literal: _ => token(seq(
      choice('0b', '0B'),
      sep1(/[01]+/, '_'),
      optional(choice('l', 'L')),
    )),
    // Matches the binary int

    decimal_floating_point_literal: _ => token(choice(
      seq(DECIMAL_DIGITS, '.', optional(DECIMAL_DIGITS), optional(seq((/[eE]/), optional(choice('-', '+')), DECIMAL_DIGITS)), optional(/[fFdD]/)),
      seq('.', DECIMAL_DIGITS, optional(seq((/[eE]/), optional(choice('-', '+')), DECIMAL_DIGITS)), optional(/[fFdD]/)),
      seq(DIGITS, /[eE]/, optional(choice('-', '+')), DECIMAL_DIGITS, optional(/[fFdD]/)),
      seq(DIGITS, optional(seq((/[eE]/), optional(choice('-', '+')), DECIMAL_DIGITS)), (/[fFdD]/)),
    )),
    // floating point literal

    hex_floating_point_literal: _ => token(seq(
      choice('0x', '0X'),
      choice(
        seq(HEX_DIGITS, optional('.')),
        seq(optional(HEX_DIGITS), '.', HEX_DIGITS),
      ),
      optional(seq(
        /[pP]/,
        optional(choice('-', '+')),
        DIGITS,
        optional(/[fFdD]/),
      )),
    )),
    // hex floating point literal




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
      'var',                              // Keyword 'var'.
      optional(seq(":", $.type)),         // Optional type declaration (e.g., : int).
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

    _variable_initializer: $ => choice(
      $.expression,              // General expressions for initialization
      $.array_initializer,       // Array initializers (e.g., `{1, 2, 3}`)
      $.object_initializer        // Object initializers (e.g., `new MyClass()`)
    ),
    
    // Supporting rules:
    array_initializer: $ => seq(
      '{',                       // Starts with a curly brace
      optional(commaSep($.expression)), // Comma-separated expressions
      '}'
    ),
    
    object_initializer: $ => seq(
      'new',                     // `new` keyword for creating an object
      $.identifier,              // Class name or type
      optional($.arguments)      // Arguments to the constructor (if any)
    ),
    
    // Utility to match comma-separated expressions
    arguments: $ => seq(
      '(',                       // Start with parenthesis
      optional(commaSep($.expression)), // Arguments are comma-separated
      ')'
    ),
    annotated_type: $ => seq(
      repeat($.annotation), // Allows multiple annotations
      $.type               // The type being annotated
    ),
    
    receiver_parameter: $ => seq(
      optional($.modifiers),   // Optional modifiers for the receiver
      $.type,                 // The type of the receiver
      $.identifier            // The identifier (e.g., `this` or a qualified name)
    ),
    module_declaration: $ => seq(
      optional($.modifiers), // Optional modifiers
      'module',              // The 'module' keyword
      $.identifier,          // The name of the module
      $.block                // The block of code inside the module
    ),
    
    package_declaration: $ => seq(
      'package',             // The 'package' keyword
      $.identifier,          // The name of the package
      optional(seq(';'))     // Optional semicolon at the end
    ),
    
    _unannotated_type: $ => choice(
      'int',             // Basic integer type
      'float',           // Basic floating point type
      'string',          // Basic string type
      'boolean',         // Basic boolean type
      'Date',            // Basic Date type
      'BigDecimal',      // Basic BigDecimal type
      $.identifier       // Any other user-defined type (identifier)
    ),
    
    scoped_type_identifier: $ => seq(
      repeat1($.identifier),      // One or more identifiers
      repeat(seq('.', $.identifier)) // Optional parts separated by dots
    ),
    
    generic_type: $ => seq(
      $.identifier,              // The base type (e.g., List, Map)
      '<',                       // Opening angle bracket
      commaSep($.type),          // One or more type parameters, separated by commas
      '>'                        // Closing angle bracket
    ),
    lambda_expression: $ => seq(
      '(',                      // Opening parenthesis for parameters
      optional(commaSep($.identifier)),  // Parameters, separated by commas (if any)
      ')',                      // Closing parenthesis for parameters
      '->',                     // Arrow symbol separating parameters from body
      $.expression              // The body of the lambda expression
    ),
    inferred_parameter: $ => $.identifier,  // Inferred parameters are just identifiers

    lambda_expression: $ => seq(
      '(',                     // Opening parenthesis for parameters
      optional(commaSep($.inferred_parameter)),  // Parameters, inferred (identifiers)
      ')',                     // Closing parenthesis for parameters
      '->',                    // Arrow symbol separating parameters from body
      $.expression             // The body of the lambda expression
    ),
    argument_list: $ => seq(
      '(',                        // Opening parenthesis
      optional(commaSep($.expression)),  // A list of expressions (arguments)
      ')',                        // Closing parenthesis
    ),
    
    record_pattern_body: $ => seq(
      '{',                              // Opening brace for the pattern body
      optional(commaSep($.field_pattern)), // List of field patterns (can be empty)
      '}'
    ),
    
    field_pattern: $ => seq(
      $.identifier,                      // Field name
      optional(seq(':', $.type)),         // Optional type annotation (e.g., name: String)
    ),
    
    yield_statement: $ => seq(
      'yield',              // The 'yield' keyword
      $.expression,         // The expression that will be yielded
      optional(';')         // The optional semicolon to end the statement
    ),
    
    
  },
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
