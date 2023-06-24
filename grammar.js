module.exports = grammar({
  name: 'gherkin',

  rules: {
    feature: $ => seq(
      $.feature_keyword,
      $.title,
      optional($.multiline_text),
      $.scenario
    ),

    given_keyword: $ => '    Given ',
    when_keyword: $ => '    When ',
    then_keyword: $ => '    Then ',
    feature_keyword: $ => 'Feature: ',
    scenario_keyword: $ => '  Scenario: ',
    example_keyword: $ => '  Example: ',

    title: $ => /[A-Z][a-zA-Z ]+\n/,
    multiline_text: $ => seq(
      repeat1(
        choice(
          /[^\n]/,
          '\n',
        )
      )
    ),
    step_definition: $ => /[^A-Z][a-z][a-z ]+\n/,

    scenario: $ => seq(
      choice(
        $.scenario_keyword,
        $.example_keyword,
      ),
      $.title,
      optional($.multiline_text),
      $.steps,
    ),

    steps: $ => seq(
      $.given_keyword,
      $.step_definition,
      $.when_keyword,
      $.step_definition,
      $.then_keyword,
      $.step_definition,
    ),
  }
});
