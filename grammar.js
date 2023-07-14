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
    ),
    when_step: $ => seq(
      $.when_keyword,
      $.step_definition,
    ),
    then_step: $ => seq(
      $.then_keyword,
      $.step_definition,
    ),
    additional_step: $ => seq(
      $.additional_step_keyword,
      $.step_definition,
    ),

    additional_step_keyword: $ => choice(
      $.and_keyword,
      $.but_keyword,
      $.asterisk_keyword,
    ),

    given_keyword: $ => '    Given ',
    when_keyword: $ => '    When ',
    then_keyword: $ => '    Then ',
    and_keyword: $ => '    And ',
    but_keyword: $ => '    But ',
    asterisk_keyword: $ => '    * ',

    step_definition: $ => /[^A-Z][a-z][a-z ]+\n/,
  }
});
