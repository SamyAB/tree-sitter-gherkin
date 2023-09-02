Feature: Testing with docstrings
  Example: Putting the docstrings in a step
    Given a given step with docstring
      """
      Some text
      """
      # <- string
    When a normal when step
    Then a then step with backticks doc string
      ```
      Some multiline
      text
      ```
      # <- string
