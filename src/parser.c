#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 95
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 47
#define ALIAS_COUNT 0
#define TOKEN_COUNT 21
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum {
  sym__alpha_word = 1,
  sym_tag = 2,
  sym_feature_keyword = 3,
  sym_title = 4,
  aux_sym__multiline_text_token1 = 5,
  aux_sym__multiline_text_token2 = 6,
  anon_sym_LF = 7,
  sym_rule_keyword = 8,
  sym_background_keyword = 9,
  sym_scenario_keyword = 10,
  anon_sym_DQUOTE_DQUOTE_DQUOTE = 11,
  anon_sym_BQUOTE_BQUOTE_BQUOTE = 12,
  sym_given_keyword = 13,
  sym_when_keyword = 14,
  sym_then_keyword = 15,
  sym_and_keyword = 16,
  sym_but_keyword = 17,
  sym_asterisk_keyword = 18,
  sym_step_definition = 19,
  sym_comment = 20,
  sym_feature = 21,
  sym_description = 22,
  sym__multiline_text = 23,
  sym_rules = 24,
  sym_rule = 25,
  sym_scenarios = 26,
  sym_background = 27,
  sym_scenario = 28,
  sym_steps = 29,
  sym_given_steps = 30,
  sym_then_steps = 31,
  sym_given_step = 32,
  sym_when_step = 33,
  sym_then_step = 34,
  sym_additional_step = 35,
  sym_step_arguments = 36,
  sym_doc_string = 37,
  sym_doc_string_content_type = 38,
  sym_doc_string_content = 39,
  sym_doc_string_delimiter = 40,
  sym_additional_step_keyword = 41,
  aux_sym__multiline_text_repeat1 = 42,
  aux_sym_rules_repeat1 = 43,
  aux_sym_scenarios_repeat1 = 44,
  aux_sym_given_steps_repeat1 = 45,
  aux_sym_then_steps_repeat1 = 46,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__alpha_word] = "_alpha_word",
  [sym_tag] = "tag",
  [sym_feature_keyword] = "feature_keyword",
  [sym_title] = "title",
  [aux_sym__multiline_text_token1] = "_multiline_text_token1",
  [aux_sym__multiline_text_token2] = "_multiline_text_token2",
  [anon_sym_LF] = "\n",
  [sym_rule_keyword] = "rule_keyword",
  [sym_background_keyword] = "background_keyword",
  [sym_scenario_keyword] = "scenario_keyword",
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = "\"\"\"",
  [anon_sym_BQUOTE_BQUOTE_BQUOTE] = "```",
  [sym_given_keyword] = "given_keyword",
  [sym_when_keyword] = "when_keyword",
  [sym_then_keyword] = "then_keyword",
  [sym_and_keyword] = "and_keyword",
  [sym_but_keyword] = "but_keyword",
  [sym_asterisk_keyword] = "asterisk_keyword",
  [sym_step_definition] = "step_definition",
  [sym_comment] = "comment",
  [sym_feature] = "feature",
  [sym_description] = "description",
  [sym__multiline_text] = "_multiline_text",
  [sym_rules] = "rules",
  [sym_rule] = "rule",
  [sym_scenarios] = "scenarios",
  [sym_background] = "background",
  [sym_scenario] = "scenario",
  [sym_steps] = "steps",
  [sym_given_steps] = "given_steps",
  [sym_then_steps] = "then_steps",
  [sym_given_step] = "given_step",
  [sym_when_step] = "when_step",
  [sym_then_step] = "then_step",
  [sym_additional_step] = "additional_step",
  [sym_step_arguments] = "step_arguments",
  [sym_doc_string] = "doc_string",
  [sym_doc_string_content_type] = "doc_string_content_type",
  [sym_doc_string_content] = "doc_string_content",
  [sym_doc_string_delimiter] = "doc_string_delimiter",
  [sym_additional_step_keyword] = "additional_step_keyword",
  [aux_sym__multiline_text_repeat1] = "_multiline_text_repeat1",
  [aux_sym_rules_repeat1] = "rules_repeat1",
  [aux_sym_scenarios_repeat1] = "scenarios_repeat1",
  [aux_sym_given_steps_repeat1] = "given_steps_repeat1",
  [aux_sym_then_steps_repeat1] = "then_steps_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym__alpha_word] = sym__alpha_word,
  [sym_tag] = sym_tag,
  [sym_feature_keyword] = sym_feature_keyword,
  [sym_title] = sym_title,
  [aux_sym__multiline_text_token1] = aux_sym__multiline_text_token1,
  [aux_sym__multiline_text_token2] = aux_sym__multiline_text_token2,
  [anon_sym_LF] = anon_sym_LF,
  [sym_rule_keyword] = sym_rule_keyword,
  [sym_background_keyword] = sym_background_keyword,
  [sym_scenario_keyword] = sym_scenario_keyword,
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [anon_sym_BQUOTE_BQUOTE_BQUOTE] = anon_sym_BQUOTE_BQUOTE_BQUOTE,
  [sym_given_keyword] = sym_given_keyword,
  [sym_when_keyword] = sym_when_keyword,
  [sym_then_keyword] = sym_then_keyword,
  [sym_and_keyword] = sym_and_keyword,
  [sym_but_keyword] = sym_but_keyword,
  [sym_asterisk_keyword] = sym_asterisk_keyword,
  [sym_step_definition] = sym_step_definition,
  [sym_comment] = sym_comment,
  [sym_feature] = sym_feature,
  [sym_description] = sym_description,
  [sym__multiline_text] = sym__multiline_text,
  [sym_rules] = sym_rules,
  [sym_rule] = sym_rule,
  [sym_scenarios] = sym_scenarios,
  [sym_background] = sym_background,
  [sym_scenario] = sym_scenario,
  [sym_steps] = sym_steps,
  [sym_given_steps] = sym_given_steps,
  [sym_then_steps] = sym_then_steps,
  [sym_given_step] = sym_given_step,
  [sym_when_step] = sym_when_step,
  [sym_then_step] = sym_then_step,
  [sym_additional_step] = sym_additional_step,
  [sym_step_arguments] = sym_step_arguments,
  [sym_doc_string] = sym_doc_string,
  [sym_doc_string_content_type] = sym_doc_string_content_type,
  [sym_doc_string_content] = sym_doc_string_content,
  [sym_doc_string_delimiter] = sym_doc_string_delimiter,
  [sym_additional_step_keyword] = sym_additional_step_keyword,
  [aux_sym__multiline_text_repeat1] = aux_sym__multiline_text_repeat1,
  [aux_sym_rules_repeat1] = aux_sym_rules_repeat1,
  [aux_sym_scenarios_repeat1] = aux_sym_scenarios_repeat1,
  [aux_sym_given_steps_repeat1] = aux_sym_given_steps_repeat1,
  [aux_sym_then_steps_repeat1] = aux_sym_then_steps_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym__alpha_word] = {
    .visible = false,
    .named = true,
  },
  [sym_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_feature_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_title] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__multiline_text_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__multiline_text_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [sym_rule_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_background_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_scenario_keyword] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BQUOTE_BQUOTE_BQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym_given_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_when_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_then_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_and_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_but_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_asterisk_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_step_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_feature] = {
    .visible = true,
    .named = true,
  },
  [sym_description] = {
    .visible = true,
    .named = true,
  },
  [sym__multiline_text] = {
    .visible = false,
    .named = true,
  },
  [sym_rules] = {
    .visible = true,
    .named = true,
  },
  [sym_rule] = {
    .visible = true,
    .named = true,
  },
  [sym_scenarios] = {
    .visible = true,
    .named = true,
  },
  [sym_background] = {
    .visible = true,
    .named = true,
  },
  [sym_scenario] = {
    .visible = true,
    .named = true,
  },
  [sym_steps] = {
    .visible = true,
    .named = true,
  },
  [sym_given_steps] = {
    .visible = true,
    .named = true,
  },
  [sym_then_steps] = {
    .visible = true,
    .named = true,
  },
  [sym_given_step] = {
    .visible = true,
    .named = true,
  },
  [sym_when_step] = {
    .visible = true,
    .named = true,
  },
  [sym_then_step] = {
    .visible = true,
    .named = true,
  },
  [sym_additional_step] = {
    .visible = true,
    .named = true,
  },
  [sym_step_arguments] = {
    .visible = true,
    .named = true,
  },
  [sym_doc_string] = {
    .visible = true,
    .named = true,
  },
  [sym_doc_string_content_type] = {
    .visible = true,
    .named = true,
  },
  [sym_doc_string_content] = {
    .visible = true,
    .named = true,
  },
  [sym_doc_string_delimiter] = {
    .visible = true,
    .named = true,
  },
  [sym_additional_step_keyword] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__multiline_text_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_rules_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_scenarios_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_given_steps_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_then_steps_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 25,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 27,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 35,
  [41] = 27,
  [42] = 34,
  [43] = 43,
  [44] = 25,
  [45] = 27,
  [46] = 25,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 48,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 55,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 55,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 55,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 15,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(78);
      if (lookahead == '#') ADVANCE(165);
      if (lookahead == '@') ADVANCE(96);
      if (lookahead == 'B') ADVANCE(83);
      if (lookahead == 'E') ADVANCE(93);
      if (lookahead == 'G') ADVANCE(89);
      if (lookahead == 'R') ADVANCE(91);
      if (lookahead == 'S') ADVANCE(85);
      if (lookahead == 'W') ADVANCE(87);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      if (lookahead != 0) ADVANCE(82);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(112);
      if (lookahead == '#') ADVANCE(165);
      if (lookahead == '@') ADVANCE(111);
      if (lookahead == 'B') ADVANCE(105);
      if (lookahead == 'E') ADVANCE(110);
      if (lookahead == 'R') ADVANCE(109);
      if (lookahead == 'S') ADVANCE(106);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(98);
      if (lookahead != 0) ADVANCE(97);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(113);
      if (lookahead == '#') ADVANCE(165);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(114);
      if (lookahead == '#') ADVANCE(165);
      if (lookahead == '@') ADVANCE(111);
      if (lookahead == 'B') ADVANCE(105);
      if (lookahead == 'E') ADVANCE(110);
      if (lookahead == 'S') ADVANCE(106);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(99);
      if (lookahead != 0) ADVANCE(97);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(115);
      if (lookahead == '"') ADVANCE(103);
      if (lookahead == '#') ADVANCE(165);
      if (lookahead == '`') ADVANCE(104);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(100);
      if (lookahead != 0) ADVANCE(97);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(116);
      if (lookahead == '#') ADVANCE(165);
      if (lookahead == 'G') ADVANCE(108);
      if (lookahead == 'W') ADVANCE(107);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(101);
      if (lookahead != 0) ADVANCE(97);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(117);
      if (lookahead == '#') ADVANCE(165);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(102);
      if (lookahead != 0) ADVANCE(97);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(124);
      END_STATE();
    case 8:
      if (lookahead == ' ') ADVANCE(123);
      END_STATE();
    case 9:
      if (lookahead == ' ') ADVANCE(128);
      END_STATE();
    case 10:
      if (lookahead == ' ') ADVANCE(126);
      END_STATE();
    case 11:
      if (lookahead == ' ') ADVANCE(127);
      END_STATE();
    case 12:
      if (lookahead == ' ') ADVANCE(125);
      END_STATE();
    case 13:
      if (lookahead == ' ') ADVANCE(130);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 14:
      if (lookahead == '"') ADVANCE(121);
      END_STATE();
    case 15:
      if (lookahead == '"') ADVANCE(14);
      END_STATE();
    case 16:
      if (lookahead == '#') ADVANCE(165);
      if (lookahead == '@') ADVANCE(96);
      if (lookahead == 'B') ADVANCE(84);
      if (lookahead == 'E') ADVANCE(94);
      if (lookahead == 'R') ADVANCE(92);
      if (lookahead == 'S') ADVANCE(86);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (lookahead != 0) ADVANCE(82);
      END_STATE();
    case 17:
      if (lookahead == '#') ADVANCE(165);
      if (lookahead == '@') ADVANCE(96);
      if (lookahead == 'B') ADVANCE(84);
      if (lookahead == 'E') ADVANCE(94);
      if (lookahead == 'S') ADVANCE(86);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (lookahead != 0) ADVANCE(82);
      END_STATE();
    case 18:
      if (lookahead == '#') ADVANCE(165);
      if (lookahead == 'G') ADVANCE(90);
      if (lookahead == 'W') ADVANCE(88);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (lookahead != 0) ADVANCE(82);
      END_STATE();
    case 19:
      if (lookahead == '#') ADVANCE(165);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (lookahead != 0) ADVANCE(82);
      END_STATE();
    case 20:
      if (lookahead == '#') ADVANCE(165);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(76);
      END_STATE();
    case 21:
      if (lookahead == '#') ADVANCE(163);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(21);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(13);
      if (lookahead != 0 &&
          (lookahead < 'A' || 'Z' < lookahead)) ADVANCE(73);
      END_STATE();
    case 22:
      if (lookahead == '#') ADVANCE(163);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0 &&
          (lookahead < 'A' || 'Z' < lookahead)) ADVANCE(73);
      END_STATE();
    case 23:
      if (lookahead == ':') ADVANCE(118);
      END_STATE();
    case 24:
      if (lookahead == ':') ADVANCE(120);
      END_STATE();
    case 25:
      if (lookahead == ':') ADVANCE(119);
      END_STATE();
    case 26:
      if (lookahead == ':') ADVANCE(80);
      END_STATE();
    case 27:
      if (lookahead == '`') ADVANCE(122);
      END_STATE();
    case 28:
      if (lookahead == '`') ADVANCE(27);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(53);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(33);
      if (lookahead == 'u') ADVANCE(67);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(66);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(64);
      END_STATE();
    case 33:
      if (lookahead == 'c') ADVANCE(50);
      END_STATE();
    case 34:
      if (lookahead == 'c') ADVANCE(38);
      END_STATE();
    case 35:
      if (lookahead == 'd') ADVANCE(10);
      END_STATE();
    case 36:
      if (lookahead == 'd') ADVANCE(25);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(24);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 45:
      if (lookahead == 'g') ADVANCE(63);
      END_STATE();
    case 46:
      if (lookahead == 'h') ADVANCE(41);
      END_STATE();
    case 47:
      if (lookahead == 'h') ADVANCE(43);
      END_STATE();
    case 48:
      if (lookahead == 'i') ADVANCE(71);
      END_STATE();
    case 49:
      if (lookahead == 'i') ADVANCE(60);
      END_STATE();
    case 50:
      if (lookahead == 'k') ADVANCE(45);
      END_STATE();
    case 51:
      if (lookahead == 'l') ADVANCE(37);
      END_STATE();
    case 52:
      if (lookahead == 'l') ADVANCE(40);
      END_STATE();
    case 53:
      if (lookahead == 'm') ADVANCE(62);
      END_STATE();
    case 54:
      if (lookahead == 'n') ADVANCE(35);
      END_STATE();
    case 55:
      if (lookahead == 'n') ADVANCE(36);
      END_STATE();
    case 56:
      if (lookahead == 'n') ADVANCE(32);
      END_STATE();
    case 57:
      if (lookahead == 'n') ADVANCE(12);
      END_STATE();
    case 58:
      if (lookahead == 'n') ADVANCE(7);
      END_STATE();
    case 59:
      if (lookahead == 'n') ADVANCE(8);
      END_STATE();
    case 60:
      if (lookahead == 'o') ADVANCE(24);
      END_STATE();
    case 61:
      if (lookahead == 'o') ADVANCE(70);
      END_STATE();
    case 62:
      if (lookahead == 'p') ADVANCE(52);
      END_STATE();
    case 63:
      if (lookahead == 'r') ADVANCE(61);
      END_STATE();
    case 64:
      if (lookahead == 'r') ADVANCE(49);
      END_STATE();
    case 65:
      if (lookahead == 'r') ADVANCE(42);
      END_STATE();
    case 66:
      if (lookahead == 't') ADVANCE(69);
      END_STATE();
    case 67:
      if (lookahead == 't') ADVANCE(11);
      END_STATE();
    case 68:
      if (lookahead == 'u') ADVANCE(51);
      END_STATE();
    case 69:
      if (lookahead == 'u') ADVANCE(65);
      END_STATE();
    case 70:
      if (lookahead == 'u') ADVANCE(55);
      END_STATE();
    case 71:
      if (lookahead == 'v') ADVANCE(44);
      END_STATE();
    case 72:
      if (lookahead == 'x') ADVANCE(29);
      END_STATE();
    case 73:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    case 74:
      if (lookahead == ' ' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 75:
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 76:
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 77:
      if (eof) ADVANCE(78);
      if (lookahead == '"') ADVANCE(15);
      if (lookahead == '#') ADVANCE(165);
      if (lookahead == '*') ADVANCE(9);
      if (lookahead == '@') ADVANCE(75);
      if (lookahead == 'A') ADVANCE(54);
      if (lookahead == 'B') ADVANCE(30);
      if (lookahead == 'E') ADVANCE(72);
      if (lookahead == 'F') ADVANCE(39);
      if (lookahead == 'G') ADVANCE(48);
      if (lookahead == 'R') ADVANCE(68);
      if (lookahead == 'S') ADVANCE(34);
      if (lookahead == 'T') ADVANCE(46);
      if (lookahead == 'W') ADVANCE(47);
      if (lookahead == '`') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(77)
      END_STATE();
    case 78:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_tag);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_feature_keyword);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_title);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym__multiline_text_token1);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym__multiline_text_token1);
      if (lookahead == 'a') ADVANCE(138);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym__multiline_text_token1);
      if (lookahead == 'a') ADVANCE(33);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym__multiline_text_token1);
      if (lookahead == 'c') ADVANCE(140);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym__multiline_text_token1);
      if (lookahead == 'c') ADVANCE(38);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym__multiline_text_token1);
      if (lookahead == 'h') ADVANCE(142);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym__multiline_text_token1);
      if (lookahead == 'h') ADVANCE(43);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym__multiline_text_token1);
      if (lookahead == 'i') ADVANCE(161);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym__multiline_text_token1);
      if (lookahead == 'i') ADVANCE(71);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym__multiline_text_token1);
      if (lookahead == 'u') ADVANCE(148);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym__multiline_text_token1);
      if (lookahead == 'u') ADVANCE(51);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym__multiline_text_token1);
      if (lookahead == 'x') ADVANCE(136);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym__multiline_text_token1);
      if (lookahead == 'x') ADVANCE(29);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym__multiline_text_token1);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym__multiline_text_token1);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym__multiline_text_token2);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym__multiline_text_token2);
      if (lookahead == '\n') ADVANCE(112);
      if (lookahead == '@') ADVANCE(111);
      if (lookahead == 'B') ADVANCE(105);
      if (lookahead == 'E') ADVANCE(110);
      if (lookahead == 'R') ADVANCE(109);
      if (lookahead == 'S') ADVANCE(106);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(98);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(97);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym__multiline_text_token2);
      if (lookahead == '\n') ADVANCE(114);
      if (lookahead == '@') ADVANCE(111);
      if (lookahead == 'B') ADVANCE(105);
      if (lookahead == 'E') ADVANCE(110);
      if (lookahead == 'S') ADVANCE(106);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(99);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(97);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym__multiline_text_token2);
      if (lookahead == '\n') ADVANCE(115);
      if (lookahead == '"') ADVANCE(103);
      if (lookahead == '`') ADVANCE(104);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(100);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(97);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym__multiline_text_token2);
      if (lookahead == '\n') ADVANCE(116);
      if (lookahead == 'G') ADVANCE(108);
      if (lookahead == 'W') ADVANCE(107);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(101);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(97);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym__multiline_text_token2);
      if (lookahead == '\n') ADVANCE(117);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(102);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(97);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym__multiline_text_token2);
      if (lookahead == '"') ADVANCE(14);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym__multiline_text_token2);
      if (lookahead == '`') ADVANCE(27);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym__multiline_text_token2);
      if (lookahead == 'a') ADVANCE(33);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym__multiline_text_token2);
      if (lookahead == 'c') ADVANCE(38);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym__multiline_text_token2);
      if (lookahead == 'h') ADVANCE(43);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym__multiline_text_token2);
      if (lookahead == 'i') ADVANCE(71);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym__multiline_text_token2);
      if (lookahead == 'u') ADVANCE(51);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym__multiline_text_token2);
      if (lookahead == 'x') ADVANCE(29);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym__multiline_text_token2);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(112);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(98);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(113);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(114);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(99);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(115);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(100);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(116);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(101);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(117);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(102);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_rule_keyword);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_background_keyword);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_scenario_keyword);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DQUOTE_DQUOTE);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_BQUOTE_BQUOTE_BQUOTE);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_given_keyword);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_when_keyword);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_then_keyword);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_and_keyword);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_but_keyword);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_asterisk_keyword);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_step_definition);
      if (lookahead == ' ' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(165);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_step_definition);
      if (lookahead == ' ' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym__alpha_word);
      if (lookahead == ' ') ADVANCE(124);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym__alpha_word);
      if (lookahead == ' ') ADVANCE(123);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym__alpha_word);
      if (lookahead == ':') ADVANCE(118);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym__alpha_word);
      if (lookahead == ':') ADVANCE(120);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym__alpha_word);
      if (lookahead == ':') ADVANCE(119);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym__alpha_word);
      if (lookahead == 'a') ADVANCE(150);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym__alpha_word);
      if (lookahead == 'a') ADVANCE(159);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym__alpha_word);
      if (lookahead == 'c') ADVANCE(147);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym__alpha_word);
      if (lookahead == 'd') ADVANCE(135);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym__alpha_word);
      if (lookahead == 'e') ADVANCE(153);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym__alpha_word);
      if (lookahead == 'e') ADVANCE(133);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym__alpha_word);
      if (lookahead == 'e') ADVANCE(151);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym__alpha_word);
      if (lookahead == 'e') ADVANCE(134);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym__alpha_word);
      if (lookahead == 'e') ADVANCE(154);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym__alpha_word);
      if (lookahead == 'g') ADVANCE(158);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym__alpha_word);
      if (lookahead == 'i') ADVANCE(156);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym__alpha_word);
      if (lookahead == 'k') ADVANCE(145);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym__alpha_word);
      if (lookahead == 'l') ADVANCE(141);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym__alpha_word);
      if (lookahead == 'l') ADVANCE(143);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym__alpha_word);
      if (lookahead == 'm') ADVANCE(157);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym__alpha_word);
      if (lookahead == 'n') ADVANCE(131);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym__alpha_word);
      if (lookahead == 'n') ADVANCE(139);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym__alpha_word);
      if (lookahead == 'n') ADVANCE(137);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym__alpha_word);
      if (lookahead == 'n') ADVANCE(132);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym__alpha_word);
      if (lookahead == 'o') ADVANCE(160);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym__alpha_word);
      if (lookahead == 'o') ADVANCE(134);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym__alpha_word);
      if (lookahead == 'p') ADVANCE(149);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym__alpha_word);
      if (lookahead == 'r') ADVANCE(155);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym__alpha_word);
      if (lookahead == 'r') ADVANCE(146);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym__alpha_word);
      if (lookahead == 'u') ADVANCE(152);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym__alpha_word);
      if (lookahead == 'v') ADVANCE(144);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym__alpha_word);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_comment);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(165);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == ' ' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(165);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(165);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 77},
  [2] = {.lex_state = 77},
  [3] = {.lex_state = 16},
  [4] = {.lex_state = 16},
  [5] = {.lex_state = 77},
  [6] = {.lex_state = 77},
  [7] = {.lex_state = 77},
  [8] = {.lex_state = 77},
  [9] = {.lex_state = 77},
  [10] = {.lex_state = 77},
  [11] = {.lex_state = 77},
  [12] = {.lex_state = 77},
  [13] = {.lex_state = 77},
  [14] = {.lex_state = 77},
  [15] = {.lex_state = 77},
  [16] = {.lex_state = 77},
  [17] = {.lex_state = 77},
  [18] = {.lex_state = 77},
  [19] = {.lex_state = 17},
  [20] = {.lex_state = 77},
  [21] = {.lex_state = 17},
  [22] = {.lex_state = 18},
  [23] = {.lex_state = 18},
  [24] = {.lex_state = 77},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 77},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 77},
  [29] = {.lex_state = 77},
  [30] = {.lex_state = 3},
  [31] = {.lex_state = 77},
  [32] = {.lex_state = 77},
  [33] = {.lex_state = 77},
  [34] = {.lex_state = 77},
  [35] = {.lex_state = 77},
  [36] = {.lex_state = 3},
  [37] = {.lex_state = 77},
  [38] = {.lex_state = 77},
  [39] = {.lex_state = 77},
  [40] = {.lex_state = 77},
  [41] = {.lex_state = 4},
  [42] = {.lex_state = 77},
  [43] = {.lex_state = 77},
  [44] = {.lex_state = 5},
  [45] = {.lex_state = 5},
  [46] = {.lex_state = 4},
  [47] = {.lex_state = 77},
  [48] = {.lex_state = 77},
  [49] = {.lex_state = 77},
  [50] = {.lex_state = 77},
  [51] = {.lex_state = 77},
  [52] = {.lex_state = 77},
  [53] = {.lex_state = 77},
  [54] = {.lex_state = 77},
  [55] = {.lex_state = 6},
  [56] = {.lex_state = 2},
  [57] = {.lex_state = 6},
  [58] = {.lex_state = 77},
  [59] = {.lex_state = 77},
  [60] = {.lex_state = 77},
  [61] = {.lex_state = 6},
  [62] = {.lex_state = 77},
  [63] = {.lex_state = 19},
  [64] = {.lex_state = 77},
  [65] = {.lex_state = 6},
  [66] = {.lex_state = 77},
  [67] = {.lex_state = 19},
  [68] = {.lex_state = 77},
  [69] = {.lex_state = 77},
  [70] = {.lex_state = 77},
  [71] = {.lex_state = 2},
  [72] = {.lex_state = 77},
  [73] = {.lex_state = 77},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 22},
  [76] = {.lex_state = 77},
  [77] = {.lex_state = 20},
  [78] = {.lex_state = 20},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 77},
  [81] = {.lex_state = 77},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 20},
  [84] = {.lex_state = 2},
  [85] = {.lex_state = 20},
  [86] = {.lex_state = 2},
  [87] = {.lex_state = 77},
  [88] = {.lex_state = 20},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 20},
  [91] = {.lex_state = 22},
  [92] = {.lex_state = 22},
  [93] = {.lex_state = 22},
  [94] = {.lex_state = 22},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__alpha_word] = ACTIONS(1),
    [sym_tag] = ACTIONS(1),
    [aux_sym__multiline_text_token1] = ACTIONS(1),
    [sym_rule_keyword] = ACTIONS(1),
    [sym_background_keyword] = ACTIONS(1),
    [sym_scenario_keyword] = ACTIONS(1),
    [sym_given_keyword] = ACTIONS(1),
    [sym_when_keyword] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_feature] = STATE(89),
    [sym_tag] = ACTIONS(5),
    [sym_feature_keyword] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(3), 1,
      sym_comment,
    STATE(16), 1,
      sym_step_arguments,
    STATE(20), 1,
      sym_doc_string,
    STATE(56), 1,
      sym_doc_string_delimiter,
    ACTIONS(11), 2,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(9), 10,
      ts_builtin_sym_end,
      sym_tag,
      sym_rule_keyword,
      sym_scenario_keyword,
      sym_given_keyword,
      sym_when_keyword,
      sym_then_keyword,
      sym_and_keyword,
      sym_but_keyword,
      sym_asterisk_keyword,
  [29] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym_tag,
    ACTIONS(15), 1,
      aux_sym__multiline_text_token1,
    ACTIONS(17), 1,
      sym_rule_keyword,
    ACTIONS(19), 1,
      sym_background_keyword,
    ACTIONS(21), 1,
      sym_scenario_keyword,
    STATE(11), 1,
      sym_description,
    STATE(33), 1,
      sym__multiline_text,
    STATE(50), 1,
      sym_background,
    STATE(42), 2,
      sym_scenario,
      aux_sym_scenarios_repeat1,
    STATE(43), 2,
      sym_rule,
      aux_sym_rules_repeat1,
    STATE(82), 2,
      sym_rules,
      sym_scenarios,
  [69] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym_tag,
    ACTIONS(15), 1,
      aux_sym__multiline_text_token1,
    ACTIONS(17), 1,
      sym_rule_keyword,
    ACTIONS(19), 1,
      sym_background_keyword,
    ACTIONS(21), 1,
      sym_scenario_keyword,
    STATE(12), 1,
      sym_description,
    STATE(33), 1,
      sym__multiline_text,
    STATE(50), 1,
      sym_background,
    STATE(42), 2,
      sym_scenario,
      aux_sym_scenarios_repeat1,
    STATE(43), 2,
      sym_rule,
      aux_sym_rules_repeat1,
    STATE(79), 2,
      sym_rules,
      sym_scenarios,
  [109] = 6,
    ACTIONS(3), 1,
      sym_comment,
    STATE(20), 1,
      sym_doc_string,
    STATE(24), 1,
      sym_step_arguments,
    STATE(56), 1,
      sym_doc_string_delimiter,
    ACTIONS(11), 2,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(23), 8,
      ts_builtin_sym_end,
      sym_tag,
      sym_rule_keyword,
      sym_scenario_keyword,
      sym_then_keyword,
      sym_and_keyword,
      sym_but_keyword,
      sym_asterisk_keyword,
  [136] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      sym_then_keyword,
    STATE(93), 1,
      sym_additional_step_keyword,
    ACTIONS(29), 3,
      sym_and_keyword,
      sym_but_keyword,
      sym_asterisk_keyword,
    STATE(8), 3,
      sym_then_step,
      sym_additional_step,
      aux_sym_then_steps_repeat1,
    ACTIONS(25), 4,
      ts_builtin_sym_end,
      sym_tag,
      sym_rule_keyword,
      sym_scenario_keyword,
  [162] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      sym_then_keyword,
    STATE(93), 1,
      sym_additional_step_keyword,
    ACTIONS(29), 3,
      sym_and_keyword,
      sym_but_keyword,
      sym_asterisk_keyword,
    STATE(6), 3,
      sym_then_step,
      sym_additional_step,
      aux_sym_then_steps_repeat1,
    ACTIONS(31), 4,
      ts_builtin_sym_end,
      sym_tag,
      sym_rule_keyword,
      sym_scenario_keyword,
  [188] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      sym_then_keyword,
    STATE(93), 1,
      sym_additional_step_keyword,
    ACTIONS(38), 3,
      sym_and_keyword,
      sym_but_keyword,
      sym_asterisk_keyword,
    STATE(8), 3,
      sym_then_step,
      sym_additional_step,
      aux_sym_then_steps_repeat1,
    ACTIONS(33), 4,
      ts_builtin_sym_end,
      sym_tag,
      sym_rule_keyword,
      sym_scenario_keyword,
  [214] = 6,
    ACTIONS(3), 1,
      sym_comment,
    STATE(20), 1,
      sym_doc_string,
    STATE(26), 1,
      sym_step_arguments,
    STATE(56), 1,
      sym_doc_string_delimiter,
    ACTIONS(11), 2,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(41), 7,
      sym_tag,
      sym_scenario_keyword,
      sym_given_keyword,
      sym_when_keyword,
      sym_and_keyword,
      sym_but_keyword,
      sym_asterisk_keyword,
  [240] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      sym_given_keyword,
    STATE(93), 1,
      sym_additional_step_keyword,
    ACTIONS(29), 3,
      sym_and_keyword,
      sym_but_keyword,
      sym_asterisk_keyword,
    ACTIONS(43), 3,
      sym_tag,
      sym_scenario_keyword,
      sym_when_keyword,
    STATE(13), 3,
      sym_given_step,
      sym_additional_step,
      aux_sym_given_steps_repeat1,
  [265] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym_tag,
    ACTIONS(17), 1,
      sym_rule_keyword,
    ACTIONS(19), 1,
      sym_background_keyword,
    ACTIONS(21), 1,
      sym_scenario_keyword,
    STATE(50), 1,
      sym_background,
    STATE(42), 2,
      sym_scenario,
      aux_sym_scenarios_repeat1,
    STATE(43), 2,
      sym_rule,
      aux_sym_rules_repeat1,
    STATE(79), 2,
      sym_rules,
      sym_scenarios,
  [296] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym_tag,
    ACTIONS(17), 1,
      sym_rule_keyword,
    ACTIONS(19), 1,
      sym_background_keyword,
    ACTIONS(21), 1,
      sym_scenario_keyword,
    STATE(50), 1,
      sym_background,
    STATE(42), 2,
      sym_scenario,
      aux_sym_scenarios_repeat1,
    STATE(43), 2,
      sym_rule,
      aux_sym_rules_repeat1,
    STATE(74), 2,
      sym_rules,
      sym_scenarios,
  [327] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      sym_given_keyword,
    STATE(93), 1,
      sym_additional_step_keyword,
    ACTIONS(29), 3,
      sym_and_keyword,
      sym_but_keyword,
      sym_asterisk_keyword,
    ACTIONS(47), 3,
      sym_tag,
      sym_scenario_keyword,
      sym_when_keyword,
    STATE(14), 3,
      sym_given_step,
      sym_additional_step,
      aux_sym_given_steps_repeat1,
  [352] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      sym_given_keyword,
    STATE(93), 1,
      sym_additional_step_keyword,
    ACTIONS(49), 3,
      sym_tag,
      sym_scenario_keyword,
      sym_when_keyword,
    ACTIONS(54), 3,
      sym_and_keyword,
      sym_but_keyword,
      sym_asterisk_keyword,
    STATE(14), 3,
      sym_given_step,
      sym_additional_step,
      aux_sym_given_steps_repeat1,
  [377] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 10,
      ts_builtin_sym_end,
      sym_tag,
      sym_rule_keyword,
      sym_scenario_keyword,
      sym_given_keyword,
      sym_when_keyword,
      sym_then_keyword,
      sym_and_keyword,
      sym_but_keyword,
      sym_asterisk_keyword,
  [393] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 10,
      ts_builtin_sym_end,
      sym_tag,
      sym_rule_keyword,
      sym_scenario_keyword,
      sym_given_keyword,
      sym_when_keyword,
      sym_then_keyword,
      sym_and_keyword,
      sym_but_keyword,
      sym_asterisk_keyword,
  [409] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 10,
      ts_builtin_sym_end,
      sym_tag,
      sym_rule_keyword,
      sym_scenario_keyword,
      sym_given_keyword,
      sym_when_keyword,
      sym_then_keyword,
      sym_and_keyword,
      sym_but_keyword,
      sym_asterisk_keyword,
  [425] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 10,
      ts_builtin_sym_end,
      sym_tag,
      sym_rule_keyword,
      sym_scenario_keyword,
      sym_given_keyword,
      sym_when_keyword,
      sym_then_keyword,
      sym_and_keyword,
      sym_but_keyword,
      sym_asterisk_keyword,
  [441] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      sym_background_keyword,
    ACTIONS(21), 1,
      sym_scenario_keyword,
    ACTIONS(65), 1,
      sym_tag,
    ACTIONS(67), 1,
      aux_sym__multiline_text_token1,
    STATE(29), 1,
      sym_description,
    STATE(33), 1,
      sym__multiline_text,
    STATE(48), 1,
      sym_background,
    STATE(68), 1,
      sym_scenarios,
    STATE(34), 2,
      sym_scenario,
      aux_sym_scenarios_repeat1,
  [473] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 10,
      ts_builtin_sym_end,
      sym_tag,
      sym_rule_keyword,
      sym_scenario_keyword,
      sym_given_keyword,
      sym_when_keyword,
      sym_then_keyword,
      sym_and_keyword,
      sym_but_keyword,
      sym_asterisk_keyword,
  [489] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      sym_background_keyword,
    ACTIONS(21), 1,
      sym_scenario_keyword,
    ACTIONS(65), 1,
      sym_tag,
    ACTIONS(67), 1,
      aux_sym__multiline_text_token1,
    STATE(28), 1,
      sym_description,
    STATE(33), 1,
      sym__multiline_text,
    STATE(48), 1,
      sym_background,
    STATE(58), 1,
      sym_scenarios,
    STATE(34), 2,
      sym_scenario,
      aux_sym_scenarios_repeat1,
  [521] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      sym_given_keyword,
    ACTIONS(71), 1,
      aux_sym__multiline_text_token1,
    ACTIONS(73), 1,
      sym_when_keyword,
    STATE(10), 1,
      sym_given_step,
    STATE(33), 1,
      sym__multiline_text,
    STATE(38), 1,
      sym_description,
    STATE(47), 1,
      sym_steps,
    STATE(59), 1,
      sym_when_step,
    STATE(70), 1,
      sym_given_steps,
  [552] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      sym_given_keyword,
    ACTIONS(71), 1,
      aux_sym__multiline_text_token1,
    ACTIONS(73), 1,
      sym_when_keyword,
    STATE(10), 1,
      sym_given_step,
    STATE(33), 1,
      sym__multiline_text,
    STATE(37), 1,
      sym_description,
    STATE(52), 1,
      sym_steps,
    STATE(59), 1,
      sym_when_step,
    STATE(70), 1,
      sym_given_steps,
  [583] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 8,
      ts_builtin_sym_end,
      sym_tag,
      sym_rule_keyword,
      sym_scenario_keyword,
      sym_then_keyword,
      sym_and_keyword,
      sym_but_keyword,
      sym_asterisk_keyword,
  [597] = 4,
    ACTIONS(81), 1,
      sym_comment,
    STATE(27), 1,
      aux_sym__multiline_text_repeat1,
    ACTIONS(79), 2,
      aux_sym__multiline_text_token2,
      anon_sym_LF,
    ACTIONS(77), 4,
      sym_tag,
      sym_rule_keyword,
      sym_background_keyword,
      sym_scenario_keyword,
  [614] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 7,
      sym_tag,
      sym_scenario_keyword,
      sym_given_keyword,
      sym_when_keyword,
      sym_and_keyword,
      sym_but_keyword,
      sym_asterisk_keyword,
  [627] = 4,
    ACTIONS(81), 1,
      sym_comment,
    STATE(27), 1,
      aux_sym__multiline_text_repeat1,
    ACTIONS(87), 2,
      aux_sym__multiline_text_token2,
      anon_sym_LF,
    ACTIONS(85), 4,
      sym_tag,
      sym_rule_keyword,
      sym_background_keyword,
      sym_scenario_keyword,
  [644] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      sym_background_keyword,
    ACTIONS(21), 1,
      sym_scenario_keyword,
    ACTIONS(65), 1,
      sym_tag,
    STATE(48), 1,
      sym_background,
    STATE(68), 1,
      sym_scenarios,
    STATE(34), 2,
      sym_scenario,
      aux_sym_scenarios_repeat1,
  [667] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      sym_background_keyword,
    ACTIONS(21), 1,
      sym_scenario_keyword,
    ACTIONS(65), 1,
      sym_tag,
    STATE(48), 1,
      sym_background,
    STATE(62), 1,
      sym_scenarios,
    STATE(34), 2,
      sym_scenario,
      aux_sym_scenarios_repeat1,
  [690] = 4,
    ACTIONS(81), 1,
      sym_comment,
    STATE(36), 1,
      aux_sym__multiline_text_repeat1,
    ACTIONS(90), 2,
      aux_sym__multiline_text_token2,
      anon_sym_LF,
    ACTIONS(77), 3,
      sym_tag,
      sym_background_keyword,
      sym_scenario_keyword,
  [706] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      sym_then_keyword,
    STATE(20), 1,
      sym_doc_string,
    STATE(56), 1,
      sym_doc_string_delimiter,
    STATE(80), 1,
      sym_step_arguments,
    ACTIONS(11), 2,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
  [726] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      sym_tag,
    ACTIONS(99), 1,
      sym_scenario_keyword,
    ACTIONS(94), 2,
      ts_builtin_sym_end,
      sym_rule_keyword,
    STATE(32), 2,
      sym_scenario,
      aux_sym_scenarios_repeat1,
  [744] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 6,
      sym_tag,
      sym_rule_keyword,
      sym_background_keyword,
      sym_scenario_keyword,
      sym_given_keyword,
      sym_when_keyword,
  [756] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      sym_scenario_keyword,
    ACTIONS(106), 1,
      sym_tag,
    ACTIONS(104), 2,
      ts_builtin_sym_end,
      sym_rule_keyword,
    STATE(32), 2,
      sym_scenario,
      aux_sym_scenarios_repeat1,
  [774] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      sym_scenario_keyword,
    ACTIONS(111), 1,
      sym_tag,
    ACTIONS(109), 2,
      ts_builtin_sym_end,
      sym_rule_keyword,
    STATE(32), 2,
      sym_scenario,
      aux_sym_scenarios_repeat1,
  [792] = 4,
    ACTIONS(81), 1,
      sym_comment,
    STATE(36), 1,
      aux_sym__multiline_text_repeat1,
    ACTIONS(114), 2,
      aux_sym__multiline_text_token2,
      anon_sym_LF,
    ACTIONS(85), 3,
      sym_tag,
      sym_background_keyword,
      sym_scenario_keyword,
  [808] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      sym_given_keyword,
    ACTIONS(73), 1,
      sym_when_keyword,
    STATE(10), 1,
      sym_given_step,
    STATE(51), 1,
      sym_steps,
    STATE(59), 1,
      sym_when_step,
    STATE(70), 1,
      sym_given_steps,
  [830] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      sym_given_keyword,
    ACTIONS(73), 1,
      sym_when_keyword,
    STATE(10), 1,
      sym_given_step,
    STATE(52), 1,
      sym_steps,
    STATE(59), 1,
      sym_when_step,
    STATE(70), 1,
      sym_given_steps,
  [852] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 1,
      ts_builtin_sym_end,
    ACTIONS(119), 1,
      sym_tag,
    ACTIONS(122), 1,
      sym_rule_keyword,
    STATE(39), 2,
      sym_rule,
      aux_sym_rules_repeat1,
  [869] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      sym_scenario_keyword,
    ACTIONS(65), 1,
      sym_tag,
    ACTIONS(109), 1,
      ts_builtin_sym_end,
    STATE(32), 2,
      sym_scenario,
      aux_sym_scenarios_repeat1,
  [886] = 4,
    ACTIONS(81), 1,
      sym_comment,
    STATE(41), 1,
      aux_sym__multiline_text_repeat1,
    ACTIONS(85), 2,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(125), 2,
      aux_sym__multiline_text_token2,
      anon_sym_LF,
  [901] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      sym_scenario_keyword,
    ACTIONS(65), 1,
      sym_tag,
    ACTIONS(104), 1,
      ts_builtin_sym_end,
    STATE(32), 2,
      sym_scenario,
      aux_sym_scenarios_repeat1,
  [918] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym_rule_keyword,
    ACTIONS(128), 1,
      ts_builtin_sym_end,
    ACTIONS(130), 1,
      sym_tag,
    STATE(39), 2,
      sym_rule,
      aux_sym_rules_repeat1,
  [935] = 4,
    ACTIONS(81), 1,
      sym_comment,
    STATE(45), 1,
      aux_sym__multiline_text_repeat1,
    ACTIONS(77), 2,
      sym_given_keyword,
      sym_when_keyword,
    ACTIONS(132), 2,
      aux_sym__multiline_text_token2,
      anon_sym_LF,
  [950] = 4,
    ACTIONS(81), 1,
      sym_comment,
    STATE(45), 1,
      aux_sym__multiline_text_repeat1,
    ACTIONS(85), 2,
      sym_given_keyword,
      sym_when_keyword,
    ACTIONS(134), 2,
      aux_sym__multiline_text_token2,
      anon_sym_LF,
  [965] = 4,
    ACTIONS(81), 1,
      sym_comment,
    STATE(41), 1,
      aux_sym__multiline_text_repeat1,
    ACTIONS(77), 2,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(137), 2,
      aux_sym__multiline_text_token2,
      anon_sym_LF,
  [980] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 4,
      ts_builtin_sym_end,
      sym_tag,
      sym_rule_keyword,
      sym_scenario_keyword,
  [990] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      sym_scenario_keyword,
    ACTIONS(65), 1,
      sym_tag,
    STATE(35), 2,
      sym_scenario,
      aux_sym_scenarios_repeat1,
  [1004] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 4,
      ts_builtin_sym_end,
      sym_tag,
      sym_rule_keyword,
      sym_scenario_keyword,
  [1014] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      sym_scenario_keyword,
    ACTIONS(65), 1,
      sym_tag,
    STATE(40), 2,
      sym_scenario,
      aux_sym_scenarios_repeat1,
  [1028] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 4,
      ts_builtin_sym_end,
      sym_tag,
      sym_rule_keyword,
      sym_scenario_keyword,
  [1038] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 4,
      ts_builtin_sym_end,
      sym_tag,
      sym_rule_keyword,
      sym_scenario_keyword,
  [1048] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 4,
      ts_builtin_sym_end,
      sym_tag,
      sym_rule_keyword,
      sym_scenario_keyword,
  [1058] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      sym_then_keyword,
    STATE(7), 1,
      sym_then_step,
    STATE(49), 1,
      sym_then_steps,
  [1071] = 3,
    ACTIONS(81), 1,
      sym_comment,
    STATE(44), 1,
      aux_sym__multiline_text_repeat1,
    ACTIONS(149), 2,
      aux_sym__multiline_text_token2,
      anon_sym_LF,
  [1082] = 4,
    ACTIONS(81), 1,
      sym_comment,
    ACTIONS(151), 1,
      sym__alpha_word,
    ACTIONS(153), 1,
      anon_sym_LF,
    STATE(84), 1,
      sym_doc_string_content_type,
  [1095] = 3,
    ACTIONS(81), 1,
      sym_comment,
    STATE(30), 1,
      aux_sym__multiline_text_repeat1,
    ACTIONS(155), 2,
      aux_sym__multiline_text_token2,
      anon_sym_LF,
  [1106] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 3,
      ts_builtin_sym_end,
      sym_tag,
      sym_rule_keyword,
  [1115] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      sym_then_keyword,
    STATE(7), 1,
      sym_then_step,
    STATE(53), 1,
      sym_then_steps,
  [1128] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(18), 1,
      sym_doc_string_delimiter,
    ACTIONS(159), 2,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
  [1139] = 3,
    ACTIONS(81), 1,
      sym_comment,
    STATE(25), 1,
      aux_sym__multiline_text_repeat1,
    ACTIONS(161), 2,
      aux_sym__multiline_text_token2,
      anon_sym_LF,
  [1150] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 3,
      ts_builtin_sym_end,
      sym_tag,
      sym_rule_keyword,
  [1159] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      aux_sym__multiline_text_token1,
    STATE(60), 1,
      sym_doc_string_content,
    STATE(73), 1,
      sym__multiline_text,
  [1172] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      sym_given_keyword,
    STATE(10), 1,
      sym_given_step,
    STATE(72), 1,
      sym_given_steps,
  [1185] = 3,
    ACTIONS(81), 1,
      sym_comment,
    STATE(46), 1,
      aux_sym__multiline_text_repeat1,
    ACTIONS(167), 2,
      aux_sym__multiline_text_token2,
      anon_sym_LF,
  [1196] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(17), 1,
      sym_doc_string_delimiter,
    ACTIONS(159), 2,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
  [1207] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      aux_sym__multiline_text_token1,
    STATE(66), 1,
      sym_doc_string_content,
    STATE(73), 1,
      sym__multiline_text,
  [1220] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 3,
      ts_builtin_sym_end,
      sym_tag,
      sym_rule_keyword,
  [1229] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      sym_rule_keyword,
    ACTIONS(173), 1,
      sym_scenario_keyword,
  [1239] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      sym_when_keyword,
    STATE(54), 1,
      sym_when_step,
  [1249] = 3,
    ACTIONS(57), 1,
      anon_sym_LF,
    ACTIONS(81), 1,
      sym_comment,
    ACTIONS(175), 1,
      sym__alpha_word,
  [1259] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 2,
      sym_tag,
      sym_scenario_keyword,
  [1267] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 2,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
  [1275] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
      ts_builtin_sym_end,
  [1282] = 2,
    ACTIONS(81), 1,
      sym_comment,
    ACTIONS(183), 1,
      sym_step_definition,
  [1289] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      sym_feature_keyword,
  [1296] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 1,
      sym_title,
  [1303] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 1,
      sym_title,
  [1310] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 1,
      ts_builtin_sym_end,
  [1317] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      sym_then_keyword,
  [1324] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      sym_scenario_keyword,
  [1331] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 1,
      ts_builtin_sym_end,
  [1338] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 1,
      sym_title,
  [1345] = 2,
    ACTIONS(81), 1,
      sym_comment,
    ACTIONS(199), 1,
      anon_sym_LF,
  [1352] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 1,
      sym_title,
  [1359] = 2,
    ACTIONS(81), 1,
      sym_comment,
    ACTIONS(203), 1,
      anon_sym_LF,
  [1366] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      sym_rule_keyword,
  [1373] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 1,
      sym_title,
  [1380] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      ts_builtin_sym_end,
  [1387] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 1,
      sym_title,
  [1394] = 2,
    ACTIONS(81), 1,
      sym_comment,
    ACTIONS(211), 1,
      sym_step_definition,
  [1401] = 2,
    ACTIONS(81), 1,
      sym_comment,
    ACTIONS(213), 1,
      sym_step_definition,
  [1408] = 2,
    ACTIONS(81), 1,
      sym_comment,
    ACTIONS(215), 1,
      sym_step_definition,
  [1415] = 2,
    ACTIONS(81), 1,
      sym_comment,
    ACTIONS(217), 1,
      sym_step_definition,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 29,
  [SMALL_STATE(4)] = 69,
  [SMALL_STATE(5)] = 109,
  [SMALL_STATE(6)] = 136,
  [SMALL_STATE(7)] = 162,
  [SMALL_STATE(8)] = 188,
  [SMALL_STATE(9)] = 214,
  [SMALL_STATE(10)] = 240,
  [SMALL_STATE(11)] = 265,
  [SMALL_STATE(12)] = 296,
  [SMALL_STATE(13)] = 327,
  [SMALL_STATE(14)] = 352,
  [SMALL_STATE(15)] = 377,
  [SMALL_STATE(16)] = 393,
  [SMALL_STATE(17)] = 409,
  [SMALL_STATE(18)] = 425,
  [SMALL_STATE(19)] = 441,
  [SMALL_STATE(20)] = 473,
  [SMALL_STATE(21)] = 489,
  [SMALL_STATE(22)] = 521,
  [SMALL_STATE(23)] = 552,
  [SMALL_STATE(24)] = 583,
  [SMALL_STATE(25)] = 597,
  [SMALL_STATE(26)] = 614,
  [SMALL_STATE(27)] = 627,
  [SMALL_STATE(28)] = 644,
  [SMALL_STATE(29)] = 667,
  [SMALL_STATE(30)] = 690,
  [SMALL_STATE(31)] = 706,
  [SMALL_STATE(32)] = 726,
  [SMALL_STATE(33)] = 744,
  [SMALL_STATE(34)] = 756,
  [SMALL_STATE(35)] = 774,
  [SMALL_STATE(36)] = 792,
  [SMALL_STATE(37)] = 808,
  [SMALL_STATE(38)] = 830,
  [SMALL_STATE(39)] = 852,
  [SMALL_STATE(40)] = 869,
  [SMALL_STATE(41)] = 886,
  [SMALL_STATE(42)] = 901,
  [SMALL_STATE(43)] = 918,
  [SMALL_STATE(44)] = 935,
  [SMALL_STATE(45)] = 950,
  [SMALL_STATE(46)] = 965,
  [SMALL_STATE(47)] = 980,
  [SMALL_STATE(48)] = 990,
  [SMALL_STATE(49)] = 1004,
  [SMALL_STATE(50)] = 1014,
  [SMALL_STATE(51)] = 1028,
  [SMALL_STATE(52)] = 1038,
  [SMALL_STATE(53)] = 1048,
  [SMALL_STATE(54)] = 1058,
  [SMALL_STATE(55)] = 1071,
  [SMALL_STATE(56)] = 1082,
  [SMALL_STATE(57)] = 1095,
  [SMALL_STATE(58)] = 1106,
  [SMALL_STATE(59)] = 1115,
  [SMALL_STATE(60)] = 1128,
  [SMALL_STATE(61)] = 1139,
  [SMALL_STATE(62)] = 1150,
  [SMALL_STATE(63)] = 1159,
  [SMALL_STATE(64)] = 1172,
  [SMALL_STATE(65)] = 1185,
  [SMALL_STATE(66)] = 1196,
  [SMALL_STATE(67)] = 1207,
  [SMALL_STATE(68)] = 1220,
  [SMALL_STATE(69)] = 1229,
  [SMALL_STATE(70)] = 1239,
  [SMALL_STATE(71)] = 1249,
  [SMALL_STATE(72)] = 1259,
  [SMALL_STATE(73)] = 1267,
  [SMALL_STATE(74)] = 1275,
  [SMALL_STATE(75)] = 1282,
  [SMALL_STATE(76)] = 1289,
  [SMALL_STATE(77)] = 1296,
  [SMALL_STATE(78)] = 1303,
  [SMALL_STATE(79)] = 1310,
  [SMALL_STATE(80)] = 1317,
  [SMALL_STATE(81)] = 1324,
  [SMALL_STATE(82)] = 1331,
  [SMALL_STATE(83)] = 1338,
  [SMALL_STATE(84)] = 1345,
  [SMALL_STATE(85)] = 1352,
  [SMALL_STATE(86)] = 1359,
  [SMALL_STATE(87)] = 1366,
  [SMALL_STATE(88)] = 1373,
  [SMALL_STATE(89)] = 1380,
  [SMALL_STATE(90)] = 1387,
  [SMALL_STATE(91)] = 1394,
  [SMALL_STATE(92)] = 1401,
  [SMALL_STATE(93)] = 1408,
  [SMALL_STATE(94)] = 1415,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_additional_step, 2),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_then_step, 2),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_then_steps, 2),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_then_steps, 1),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_then_steps_repeat1, 2),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_then_steps_repeat1, 2), SHIFT_REPEAT(91),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_then_steps_repeat1, 2), SHIFT_REPEAT(92),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_given_step, 2),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_given_steps, 1),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_given_steps, 2),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_given_steps_repeat1, 2),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_given_steps_repeat1, 2), SHIFT_REPEAT(75),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_given_steps_repeat1, 2), SHIFT_REPEAT(92),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doc_string_delimiter, 1),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_additional_step, 3),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doc_string, 5),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doc_string, 4),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_arguments, 1),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_then_step, 3),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__multiline_text, 2),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_given_step, 3),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__multiline_text_repeat1, 2),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__multiline_text_repeat1, 2), SHIFT_REPEAT(27),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_when_step, 2),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_scenarios_repeat1, 2),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scenarios_repeat1, 2), SHIFT_REPEAT(81),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scenarios_repeat1, 2), SHIFT_REPEAT(83),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description, 1),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scenarios, 1),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_scenarios, 1), SHIFT(81),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scenarios, 2),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_scenarios, 2), SHIFT(81),
  [114] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__multiline_text_repeat1, 2), SHIFT_REPEAT(36),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rules_repeat1, 2),
  [119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rules_repeat1, 2), SHIFT_REPEAT(87),
  [122] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rules_repeat1, 2), SHIFT_REPEAT(85),
  [125] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__multiline_text_repeat1, 2), SHIFT_REPEAT(41),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rules, 1),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [134] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__multiline_text_repeat1, 2), SHIFT_REPEAT(45),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scenario, 3),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_steps, 3),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scenario, 5),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scenario, 4),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_steps, 2),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 3),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 5),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 4),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doc_string_delimiter, 1),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 2),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doc_string_content, 1),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_feature, 5),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_feature, 4),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_when_step, 3),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_feature, 3),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doc_string_content_type, 1),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [207] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_additional_step_keyword, 1),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_gherkin(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym__alpha_word,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
