
module.exports = grammar({
  name: 'gherkin',

  word: $ => $._alpha_word,
  extras: $ => [
    $.comment,
    /\s/,
  ],
  conflicts: $ => [
    [$.scenarios],
  ],
  
  rules: {
    feature: $ => seq(
      optional($.tag),
      $.feature_keyword,
      $.title,
      optional($.description),
      choice(
        $.rules,
        $.scenarios,
      ),
    ),

    tag: $ => token(seq(
      '@',
      /[a-z_]+/,
    )),

    feature_keyword: $ => token(
      seq(
        'Feature', 
        ':'
      )
    ),

    title: $ => /[A-Z][a-zA-Z ]+/,

    description: $ => $._multiline_text,
    
    _multiline_text: $ => seq(
      /[^\s#]/,
      repeat1(
        choice(
          /[^\n#]/,
          '\n',
        ),
      ),
    ),

    rules: $ => repeat1($.rule),
    rule: $ => seq(
      optional($.tag),
      $.rule_keyword,
      $.title,
      optional($.description),
      $.scenarios,
    ),

    rule_keyword: $ => token(
      seq(
        'Rule',
        ':',
      )
    ),

    scenarios: $ => seq(
      optional($.background),
      repeat1($.scenario),
    ),

    background: $ => seq(
      $.background_keyword,
      $.given_steps,
    ),

    background_keyword: $ => token(
      seq(
        'Background',
        ':',
      ),
    ),
    
    scenario: $ => seq(
      optional($.tag),
      $.scenario_keyword,
      $.title,
      optional($.description),
      $.steps,
    ),

    scenario_keyword: $ => token(
      seq(
        choice(
          'Scenario', 
          'Example',
        ),
        ':',
      ),
    ),

    steps: $ => seq(
      optional($.given_steps),
      $.when_step,
      $.then_steps,
    ),

    given_steps : $ => seq(
      $.given_step,
      repeat(
        choice(
          $.given_step,
          $.additional_step,
        )
      ),
    ),

    then_steps: $ => seq(
      $.then_step,
      repeat(
        choice(
          $.then_step,
          $.additional_step,
        )
      ),
    ),

    given_step: $ => seq(
      $.given_keyword,
      $.step_definition,
      optional($.step_arguments),
    ),
    when_step: $ => seq(
      $.when_keyword,
      $.step_definition,
      optional($.step_arguments),
    ),
    then_step: $ => seq(
      $.then_keyword,
      $.step_definition,
      optional($.step_arguments),
    ),
    additional_step: $ => seq(
      $.additional_step_keyword,
      $.step_definition,
      optional($.step_arguments),
    ),

    step_arguments: $ => choice(
      $.doc_string,
    ),
    doc_string: $ => seq(
      $.doc_string_delimiter,
      optional($.doc_string_content_type),
      '\n',
      $.doc_string_content,
      $.doc_string_delimiter,
    ),
    doc_string_content_type: $ => $._alpha_word,
    doc_string_content: $ => $._multiline_text,
    doc_string_delimiter: $ => choice(
      token('"""'),
      token('```'),
    ),


    additional_step_keyword: $ => choice(
      $.and_keyword,
      $.but_keyword,
      $.asterisk_keyword,
    ),

    given_keyword: $ => 'Given ',
    when_keyword: $ => 'When ',
    then_keyword: $ => 'Then ',
    and_keyword: $ => 'And ',
    but_keyword: $ => 'But ',
    asterisk_keyword: $ => '* ',

    step_definition: $ => /[^A-Z][a-z][a-z ]+/,
    _alpha_word: $ => /[A-Za-z][a-z]*/,
    
    comment: $ => token(seq('#', /.*/)),
  }
});
