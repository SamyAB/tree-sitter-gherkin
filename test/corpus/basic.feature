================================================
Basic feature with one scenario given when then
================================================

Feature: This is the name of a feature
  Scenario: This is the title of a scenario
    Given this is a given step
    When this is a when step
    Then this is a then step

---

(feature
  (feature_keyword)
  (title)
  (scenario
    (scenario_keyword)
    (title)
    (steps
      (full_step
        (step_keyword
          (given_keyword)
        )
        (step_definition)
      )
      (full_step
        (step_keyword
          (when_keyword)
        )
        (step_definition)
      )
      (full_step
        (step_keyword
          (then_keyword)
        )
        (step_definition)
      )
    )
  )
)