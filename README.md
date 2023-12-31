# tree-sitter-gherkin

Gherkin grammar for [tree-sitter](https://github.com/tree-sitter/tree-sitter)

## Reference

- [Gherkin Reference](https://cucumber.io/docs/gherkin/reference/)

## TODO

### Grammar

To make this tree-sitter grammar complete (for english) we need to add

- [x] Support for features with a single scenario with single line titles and given when then steps
- [x] Support for multiline descriptions for features and scenarios
- [x] Support for features using keyword `Example` instead of `Scenario`
- [x] Support for scenarios with only two steps
- [x] Support for scenarios with more than three steps
- [x] Support for multiple scenarios within a single feature
- [x] Support for `And` and `But` keywords for steps
- [x] Support for `*` keyword for steps
- [x] Support ordering enforcement for steps
- [x] Support for both spaces and tabs as optional indentations indentations
- [x] Support for `Rule`s
- [x] Support for `Backgroud`s
- [x] Support for '#' comments
- [x] Support for '@' tags"
- [x] Support for `"""` and backtics doc strings as step arguments
- [x] Support for content types for docs strings
- [x] Support for data tables as step arguments
- [ ] Support for `Scenario Outline`s
- [ ] Support for using the keyword `Scenario Template` instead of `Senario Outline`

### Syntax highlight

To make this tree sitter usable for syntax highlighting, we need to add [syntax highlight queries](https://tree-sitter.github.io/tree-sitter/syntax-highlighting)

- [x] Add syntax highlight queries for keywords
- [x] Add syntax highlight queries for docstrings
- [x] Add syntax highlight queries for data tables
- [x] Add syntax highlight queries for tags
- [x] Add syntax highlight queries for comments
