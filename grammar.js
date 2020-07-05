/// <reference path="./dsl.d.ts" />

module.exports = grammar({
  name: 'lang',

  conflicts: ($) => [[$._type, $.tupleElement]],

  rules: {
    sourceFile: ($) => repeat($._definition),

    _definition: ($) => choice($.binding),

    binding: ($) =>
      seq(
        'let',
        field('name', $.identifier),
        '=',
        field('body', choice($._expression)),
      ),

    // Types
    _type: ($) =>
      choice(
        $.anything,
        $.boolType,
        $.lambdaType,
        $.listType,
        $.numberType,
        $.ternaryType,
        $.tupleType,
        $.typeApplication,
        $.typeIdentifier,
        $._literal,
      ),
    boolType: () => 'bool',
    lambdaType: ($) =>
      prec.left(seq(field('from', $._type), '=>', field('to', $._type))),
    listType: ($) => prec(1, seq($._type, '[]')),
    numberType: () => 'number',

    ternaryType: ($) =>
      prec.right(
        seq(
          field('condition', $.typeConditional),
          '?',
          field('valueIfTrue', $._type),
          ':',
          field('valueIfFalse', $._type),
        ),
      ),

    tupleType: ($) =>
      seq(
        '(',
        optional(seq($.tupleElement, repeat(seq(',', $.tupleElement)))),
        ')',
      ),

    tupleElement: ($) =>
      choice(
        field('type', $._type),
        seq(
          field('label', choice($.identifier, $.anything)),
          optional(seq(':', field('type', $._type))),
        ),
      ),

    typeApplication: ($) =>
      seq(
        field('identifier', $.typeIdentifier),
        '<',
        field('type', seq($._type, optional(repeat(seq(',', $._type))))),
        '>',
      ),
    typeConditional: ($) => seq($._type, 'extends', $._type),
    typeIdentifier: () => /[A-Z][a-zA-Z0-9]*/,
    typeLambda: ($) => seq('(', $.typeParameter, ')', '=>', $._type),
    typeParameter: ($) =>
      prec(
        1,
        seq(
          field('identifier', $.typeIdentifier),
          optional(seq(':', field('constraint', $._type))),
        ),
      ),

    _expression: ($) =>
      choice(
        $.application,
        $.identifier,
        $.lambda,
        $.matchExpression,
        $.ternaryExpression,
        $._literal,
      ),

    lambda: ($) =>
      prec.left(
        seq(field('parameters', $._type), '=>', field('body', $._expression)),
      ),

    application: ($) =>
      seq(
        field('identifier', $.identifier),
        '(',
        field(
          'param',
          optional(seq($._expression, repeat(seq(',', $._expression)))),
        ),
        ')',
      ),

    matchExpression: ($) =>
      seq(
        'match',
        field('parameters', $.tupleType),
        '{',
        field('candidate', repeat1($.matchClause)),
        '}',
      ),
    matchClause: ($) => seq($.lambda, $._terminator),

    ternaryExpression: ($) =>
      prec.right(
        seq(
          field('condition', $._expression),
          '?',
          field('valueIfTrue', $._expression),
          ':',
          field('valueIfFalse', $._expression),
        ),
      ),

    identifier: () => /[a-z][a-zA-Z0-9_]*/,

    anything: () => '_',

    _literal: ($) =>
      choice($.boolLiteral, $.numberLiteral, $.unitLiteral, $._string_literal),
    boolLiteral: () => choice('false', 'true'),
    numberLiteral: () => /\d+/,
    unitLiteral: () => '()',

    _string_literal: ($) =>
      choice($.raw_string_literal, $.interpreted_string_literal),

    raw_string_literal: ($) => token(seq('`', repeat(/[^`]/), '`')),

    interpreted_string_literal: ($) =>
      seq(
        '"',
        repeat(
          choice(token.immediate(prec(1, /[^"\n\\]+/)), $.escape_sequence),
        ),
        '"',
      ),

    escape_sequence: ($) =>
      token.immediate(
        seq(
          '\\',
          choice(
            /[^xuU]/,
            /\d{2,3}/,
            /x[0-9a-fA-F]{2,}/,
            /u[0-9a-fA-F]{4}/,
            /U[0-9a-fA-F]{8}/,
          ),
        ),
      ),

    _terminator: () => /\n/,
  },
});

// throw new Error(JSON.stringify(module.exports));
