Feature: This is a feature
# <- keyword
  Rule: There can be only one
  # <- keyword
    Scenario: Testing the keyword highlights
    # <- keyword
      Given a given step
      # <- keyword
      When a when step
      # <- keyword
      Then a then step
      # <- keyword
  
    Example: Testing with the keyword example
    # <- keyword
      Given a given step
      But a but step
      # <- keyword
      And an and step
      # <- keyword
      When a when step
      Then a then step
      * an asterisk step
      # <- keyword

  Rule: And there were none
    Background:
    # <- keyword
      Given a given background

    Example: Testing a background
      Given something happens
      When something happens
      Then nothing will happen
