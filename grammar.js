module.exports = grammar({
  name: 'gherkin',

  rules: {
    feature: $ => seq(
      $.feature_keyword,
      $.title,
      optional($.description),
      $.scenarios
    ),

    feature_keyword: $ => 'Feature: ',

    title: $ => /[A-Z][a-zA-Z ]+\n/,

    description: $ => seq(
      repeat1(
        choice(
          /[^\n]/,
          '\n',
        )
      )
    ),

    scenarios: $ => repeat1($.scenario),
    
    scenario: $ => seq(
      choice(
        $.scenario_keyword,
        $.example_keyword,
      ),
      $.title,
      optional($.description),
      $.steps,
    ),

    scenario_keyword: $ => '  Scenario: ',
    example_keyword: $ => '  Example: ',

    steps: $ => seq(
      $.full_step,
      repeat1($.full_step),
    ),

    full_step: $ => seq(
      $.step_keyword,
      $.step_definition,
    ),

    step_keyword: $ => choice(
      $.given_keyword,
      $.when_keyword,
      $.then_keyword,
      $.and_keyword,
      $.but_keyword,
    ),
    given_keyword: $ => '    Given ',
    when_keyword: $ => '    When ',
    then_keyword: $ => '    Then ',
    and_keyword: $ => '    And ',
    but_keyword: $ => '    But ',

    step_definition: $ => /[^A-Z][a-z][a-z ]+\n/,
  }
});
