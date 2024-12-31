module.exports = grammar({
    name: 'gosu',
  
    conflicts: $ => [
      [$.primary_expression, $.type],
      [$.expression, $.type],
      [$.qualified_identifier, $.primary_expression],
    ],
  
    precedences: $ => [
      [
        'unary',
        'multiplicative',
        'additive',
        'shift',
        'relational',
        'equality',
        'bitwise_and',
        'bitwise_xor',
        'bitwise_or',
        'logical_and',
        'logical_or',
        'conditional',
        'assignment'
      ]
    ],
  
    externals: $ => [
      $._newline,
      $._indent,
      $._dedent
    ],
  
    extras: $ => [
      /\s/,
      $.comment,
      $.line_comment
    ],
  
    rules: {
      source_file: $ => seq(
        optional($.header),
        repeat(choice(
          $.class_declaration,
          $.interface_declaration,
          $.enum_declaration,
          $.enhancement_declaration
        ))
      ),
  
      header: $ => seq(
        optional($.package_declaration),
        optional($.uses_declaration)
      ),
  
      package_declaration: $ => seq(
        'package',
        $.qualified_identifier,
        ';'
      ),
  
      uses_declaration: $ => repeat1(
        seq(
          'uses',
          $.uses_statement,
          optional(';')
        )
      ),
  
      uses_statement: $ => seq(
        $.qualified_identifier,
        optional(seq('.', '*'))
      ),
  
      class_declaration: $ => seq(
        repeat($.annotation),
        repeat($.modifier),
        'class',
        $.identifier,
        optional($.type_parameters),
        optional($.superclass),
        optional($.interfaces),
        $.class_body
      ),
  
      interface_declaration: $ => seq(
        repeat($.annotation),
        repeat($.modifier),
        'interface',
        $.identifier,
        optional($.type_parameters),
        optional(choice(
          seq('extends', $.type_list),
          seq('implements', $.type_list)
        )),
        $.interface_body
      ),
  
      enum_declaration: $ => seq(
        repeat($.annotation),
        repeat($.modifier),
        'enum',
        $.identifier,
        optional($.type_parameters),
        optional($.interfaces),
        $.enum_body
      ),
  
      enhancement_declaration: $ => seq(
        repeat($.annotation),
        repeat($.modifier),
        'enhancement',
        $.identifier,
        optional($.type_parameters),
        ':',
        $.type,
        repeat(seq('[', ']')),
        $.enhancement_body
      ),
  
      annotation: $ => seq(
        '@',
        $.qualified_identifier,
        optional($.type_arguments),
        optional($.annotation_arguments)
      ),
  
      annotation_arguments: $ => seq(
        '(',
        optional($.argument_list),
        ')'
      ),
  
      modifier: $ => choice(
        'public',
        'protected',
        'private',
        'internal',
        'static',
        'abstract',
        'final',
        'override',
        'transient'
      ),
  
      type_parameters: $ => seq(
        '<',
        $.type_parameter,
        repeat(seq(',', $.type_parameter)),
        '>'
      ),
  
      type_parameter: $ => seq(
        $.identifier,
        optional(seq('extends', $.type_bound))
      ),
  
      type_bound: $ => seq(
        $.type,
        repeat(seq('&', $.type))
      ),
  
      type_arguments: $ => seq(
        '<',
        $.type_argument,
        repeat(seq(',', $.type_argument)),
        '>'
      ),
  
      type_argument: $ => choice(
        $.type,
        seq('?', optional(seq(
          choice('extends', 'super'),
          $.type
        )))
      ),
  
      superclass: $ => seq(
        'extends',
        $.type
      ),
  
      interfaces: $ => seq(
        'implements',
        $.type_list
      ),
  
      type_list: $ => seq(
        $.type,
        repeat(seq(',', $.type))
      ),
  
      class_body: $ => seq(
        '{',
        repeat($.class_member),
        '}'
      ),
  
      interface_body: $ => seq(
        '{',
        repeat($.interface_member),
        '}'
      ),
  
      enum_body: $ => seq(
        '{',
        optional($.enum_constants),
        repeat($.class_member),
        '}'
      ),
  
      enhancement_body: $ => seq(
        '{',
        repeat($.enhancement_member),
        '}'
      ),
  
      enum_constants: $ => seq(
        $.enum_constant,
        repeat(seq(',', $.enum_constant)),
        optional(','),
        optional(';')
      ),
  
      enum_constant: $ => seq(
        repeat($.annotation),
        $.identifier,
        optional($.arguments)
      ),
  
      class_member: $ => choice(
        $.field_declaration,
        $.method_declaration,
        $.constructor_declaration,
        $.property_declaration,
        $.delegate_declaration,
        $.class_declaration,
        $.interface_declaration,
        $.enum_declaration
      ),
  
      interface_member: $ => choice(
        $.method_declaration,
        $.property_declaration,
        $.field_declaration
      ),
  
      enhancement_member: $ => choice(
        seq($.method_declaration, $.method_body),
        seq($.property_declaration, $.method_body)
      ),
  
      field_declaration: $ => seq(
        repeat($.modifier),
        'var',
        $.identifier,
        optional($.type_annotation),
        optional(seq(
          'as',
          optional('readonly'),
          $.identifier
        )),
        optional(seq('=', $.expression)),
        optional(';')
      ),
  
      method_declaration: $ => seq(
        repeat($.modifier),
        'function',
        $.identifier,
        optional($.type_parameters),
        $.formal_parameters,
        optional($.type_annotation),
        optional($.method_body)
      ),
  
      constructor_declaration: $ => seq(
        repeat($.modifier),
        'construct',
        $.formal_parameters,
        optional($.type_annotation),
        $.method_body
      ),
  
      property_declaration: $ => seq(
        repeat($.modifier),
        'property',
        choice('get', 'set'),
        $.identifier,
        $.formal_parameters,
        optional($.type_annotation),
        optional($.method_body)
      ),
  
      delegate_declaration: $ => seq(
        'delegate',
        $.identifier,
        optional($.type_annotation),
        'represents',
        $.type_list,
        optional(seq('=', $.expression))
      ),
  
      type_annotation: $ => seq(
        ':',
        $.type
      ),
  
      type: $ => choice(
        seq($.qualified_identifier, repeat(seq('[', ']'))),
        seq('block', $.block_type)
      ),
  
      block_type: $ => seq(
        '(',
        optional($.block_parameters),
        ')',
        optional($.type_annotation)
      ),
  
      block_parameters: $ => seq(
        $.block_parameter,
        repeat(seq(',', $.block_parameter))
      ),
  
      block_parameter: $ => choice(
        seq($.identifier, optional(seq('=', $.expression))),
        seq($.identifier, ':', $.type, optional(seq('=', $.expression)))
      ),
  
      formal_parameters: $ => seq(
        '(',
        optional($.formal_parameter_list),
        ')'
      ),
  
      formal_parameter_list: $ => seq(
        $.formal_parameter,
        repeat(seq(',', $.formal_parameter))
      ),
  
      formal_parameter: $ => seq(
        repeat($.annotation),
        optional('final'),
        $.identifier,
        optional(choice(
          seq(':', $.type, optional(seq('=', $.expression))),
          $.block_type,
          seq('=', $.expression)
        ))
      ),
  
      method_body: $ => $.block,
  
      block: $ => seq(
        '{',
        repeat($.statement),
        '}'
      ),
  
      statement: $ => choice(
        $.block,
        $.if_statement,
        $.while_statement,
        $.do_while_statement,
        $.for_statement,
        $.foreach_statement,
        $.try_statement,
        $.switch_statement,
        $.return_statement,
        $.throw_statement,
        $.assert_statement,
        seq('break', optional(';')),
        seq('continue', optional(';')),
        $.expression_statement,
        $.variable_declaration,
        $.using_statement,
        ';'
      ),
  
      if_statement: $ => seq(
        'if',
        '(',
        $.expression,
        ')',
        $.statement,
        optional(seq('else', $.statement))
      ),
  
      while_statement: $ => seq(
        'while',
        '(',
        $.expression,
        ')',
        $.statement
      ),
  
      do_while_statement: $ => seq(
        'do',
        $.statement,
        'while',
        '(',
        $.expression,
        ')',
        optional(';')
      ),
  
      for_statement: $ => seq(
        'for',
        '(',
        choice(
          $.variable_declaration,
          $.expression_statement,
          ';'
        ),
        optional($.expression),
        ';',
        optional($.expression),
        ')',
        $.statement
      ),
  
      foreach_statement: $ => seq(
        choice('foreach', 'for'),
        '(',
        choice(
          seq(optional('var'), $.identifier, 'in', $.expression),
          $.expression
        ),
        ')',
        $.statement
      ),
  
      try_statement: $ => seq(
        'try',
        $.block,
        choice(
          seq(
            repeat1($.catch_clause),
            optional($.finally_clause)
          ),
          $.finally_clause
        )
      ),
  
      catch_clause: $ => seq(
        'catch',
        '(',
        optional('var'),
        $.identifier,
        optional($.type_annotation),
        ')',
        $.block
      ),
  
      finally_clause: $ => seq(
        'finally',
        $.block
      ),
  
      switch_statement: $ => seq(
        'switch',
        '(',
        $.expression,
        ')',
        '{',
        repeat($.switch_block_statement_group),
        '}'
      ),
  
      switch_block_statement_group: $ => seq(
        choice(
          seq('case', $.expression),
          'default'
        ),
        ':',
        repeat($.statement)
      ),
  
      return_statement: $ => seq(
        'return',
        optional($.expression),
        optional(';')
      ),
  
      throw_statement: $ => seq(
        'throw',
        $.expression,
        optional(';')
      ),
  
      assert_statement: $ => seq(
        'assert',
        $.expression,
        optional(seq(':', $.expression)),
        optional(';')
      ),
  
      using_statement: $ => seq(
        'using',
        '(',
        choice(
          $.variable_declaration,
          seq($.variable_declaration, repeat(seq(',', $.variable_declaration))),
          $.expression
        ),
        ')',
        $.block,
        optional(seq('finally', $.block))
      ),
  
      expression_statement: $ => seq(
        $.expression,
        optional(';')
      ),
  
      variable_declaration: $ => seq(
        optional('final'),
        'var',
        $.identifier,
        optional($.type_annotation),
        optional(seq('=', $.expression)),
        optional(';')
      ),
  
      expression: $ => choice(
        $.assignment_expression,
        $.conditional_expression,
        $.lambda_expression
      ),
  
      assignment_expression: $ => prec.right('assignment', seq(
        $.primary_expression,
        choice(
          '=',
          '+=',
          '-=',
          '*=',
          '/=',
          '%=',
          '&=',
          '|=',
          '^=',
          '<<=',
          '>>=',
          '>>>='
        ),
        $.expression
      )),
  
      conditional_expression: $ => prec.right('conditional', seq(
        $.logical_or_expression,
        optional(choice(
          seq('?', $.expression, ':', $.expression),
          seq('?:', $.expression)
        ))
      )),
  
      logical_or_expression: $ => prec.left('logical_or', seq(
        $.logical_and_expression,
        repeat(seq(
          choice('||', 'or'),
          $.logical_and_expression
        ))
      )),
  
      logical_and_expression: $ => prec.left('logical_and', seq(
        $.bitwise_or_expression,
        repeat(seq(
          choice('&&', 'and'),
          $.bitwise_or_expression
        ))
      )),
  
      bitwise_or_expression: $ => prec.left('bitwise_or', seq(
        $.bitwise_xor_expression,
        repeat(seq(
          '|',
          $.bitwise_xor_expression
        ))
      )),
  
      bitwise_xor_expression: $ => prec.left('bitwise_xor', seq(
        $.bitwise_and_expression,
        repeat(seq(
          '^',
          $.bitwise_and_expression
        ))
      )),
  
      bitwise_and_expression: $ => prec.left('bitwise_and', seq(
        $.equality_expression,
        repeat(seq(
          '&',
          $.equality_expression
        ))
      )),
  
      equality_expression: $ => prec.left('equality', seq(
        $.relational_expression,
        repeat(seq(
          choice('===', '!==', '==', '!=', '<>'),
          $.relational_expression
        ))
      )),
  
      relational_expression: $ => prec.left('relational', seq(
        $.shift_expression,
        repeat(seq(
          choice('<=', '>=', '<', '>', 'typeis'),
          $.shift_expression
        ))
      )),
  
      shift_expression: $ => prec.left('shift', seq(
        $.additive_expression,
        repeat(seq(
          choice('<<', '>>', '>>>'),
          $.additive_expression
        ))
      )),
  
      additive_expression: $ => prec.left('additive', seq(
        $.multiplicative_expression,
        repeat(seq(
          choice('+', '-', '?+', '?-'),
          $.multiplicative_expression
        ))
      )),
  
      multiplicative_expression: $ => prec.left('multiplicative', seq(
        $.unary_expression,
        repeat(seq(
          choice('*', '/', '%', '?*', '?/', '?%'),
          $.unary_expression
        ))
      )),
  
      unary_expression: $ => prec.left('unary', choice(
        seq(choice('+', '-', '~', '!', 'not', 'typeof', 'statictypeof'), $.unary_expression),
        $.postfix_expression
      )),
  
      postfix_expression: $ => prec.left(seq(
        $.primary_expression,
        repeat(choice(
          seq('.', $.identifier),
          seq('?.', $.identifier),
          seq('*.', $.identifier),
          $.arguments,
          seq('[', $.expression, ']'),
          $.type_arguments
        ))
      )),
  
    }
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
  