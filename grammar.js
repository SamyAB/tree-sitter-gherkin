module.exports = grammar({
  name: 'gherkin',

  rules: {
    feature: $ => seq(
      $.feature_keyword,
      $.title,
      $.scenario,
    ),

    feature_keyword: $ => 'Feature: ',
    title: $ => /[A-Z][a-zA-Z ]+\n/,

    scenario: $ => seq(
      $.scenario_keyword,
      $.title,
      $.steps,
    ),
    scenario_keyword: $ => '  Scenario: ',

    steps: $ => seq(
      $.given_keyword,
      $.step_definition,
      $.when_keyword,
      $.step_definition,
      $.then_keyword,
      $.step_definition,
    ),
    
    given_keyword: $ => '    Given ',
    when_keyword: $ => '    When ',
    then_keyword: $ => '    Then ',
    step_definition: $ => /[a-z][a-z ]+\n/,
  }
});
