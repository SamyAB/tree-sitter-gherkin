Feature: Color highlight with data table
  Scenario: The data table is in for the given step
    Given a given step with data table
	  | this is a cell | this another cell | this a third column |
	  | this is a cell | this another cell | this a third column |
	  # <- special
	When a normal when step
	Then a normal then step
