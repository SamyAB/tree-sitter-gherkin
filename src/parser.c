#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 86
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 45
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
  sym__doc_string_delimiter = 38,
  sym_additional_step_keyword = 39,
  aux_sym__multiline_text_repeat1 = 40,
  aux_sym_rules_repeat1 = 41,
  aux_sym_scenarios_repeat1 = 42,
  aux_sym_given_steps_repeat1 = 43,
  aux_sym_then_steps_repeat1 = 44,
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
  [sym__doc_string_delimiter] = "_doc_string_delimiter",
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
  [sym__doc_string_delimiter] = sym__doc_string_delimiter,
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
  [sym__doc_string_delimiter] = {
    .visible = false,
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
  [29] = 27,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 25,
  [36] = 36,
  [37] = 37,
  [38] = 25,
  [39] = 25,
  [40] = 40,
  [41] = 30,
  [42] = 27,
  [43] = 27,
  [44] = 31,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 48,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 52,
  [57] = 57,
  [58] = 52,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 52,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(77);
      if (lookahead == '#') ADVANCE(163);
      if (lookahead == '@') ADVANCE(95);
      if (lookahead == 'B') ADVANCE(82);
      if (lookahead == 'E') ADVANCE(92);
      if (lookahead == 'G') ADVANCE(88);
      if (lookahead == 'R') ADVANCE(90);
      if (lookahead == 'S') ADVANCE(84);
      if (lookahead == 'W') ADVANCE(86);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      if (lookahead != 0) ADVANCE(81);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(111);
      if (lookahead == '#') ADVANCE(163);
      if (lookahead == '@') ADVANCE(110);
      if (lookahead == 'B') ADVANCE(104);
      if (lookahead == 'E') ADVANCE(109);
      if (lookahead == 'R') ADVANCE(108);
      if (lookahead == 'S') ADVANCE(105);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(97);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(112);
      if (lookahead == '#') ADVANCE(163);
      if (lookahead == '@') ADVANCE(110);
      if (lookahead == 'B') ADVANCE(104);
      if (lookahead == 'E') ADVANCE(109);
      if (lookahead == 'S') ADVANCE(105);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(98);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(113);
      if (lookahead == '#') ADVANCE(163);
      if (lookahead == 'G') ADVANCE(107);
      if (lookahead == 'W') ADVANCE(106);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(99);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(114);
      if (lookahead == '"') ADVANCE(102);
      if (lookahead == '#') ADVANCE(163);
      if (lookahead == '`') ADVANCE(103);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(100);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(115);
      if (lookahead == '#') ADVANCE(163);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(101);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(122);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(121);
      END_STATE();
    case 8:
      if (lookahead == ' ') ADVANCE(126);
      END_STATE();
    case 9:
      if (lookahead == ' ') ADVANCE(124);
      END_STATE();
    case 10:
      if (lookahead == ' ') ADVANCE(125);
      END_STATE();
    case 11:
      if (lookahead == ' ') ADVANCE(123);
      END_STATE();
    case 12:
      if (lookahead == ' ') ADVANCE(128);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 13:
      if (lookahead == '"') ADVANCE(119);
      END_STATE();
    case 14:
      if (lookahead == '"') ADVANCE(13);
      END_STATE();
    case 15:
      if (lookahead == '#') ADVANCE(163);
      if (lookahead == '@') ADVANCE(95);
      if (lookahead == 'B') ADVANCE(83);
      if (lookahead == 'E') ADVANCE(93);
      if (lookahead == 'R') ADVANCE(91);
      if (lookahead == 'S') ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (lookahead != 0) ADVANCE(81);
      END_STATE();
    case 16:
      if (lookahead == '#') ADVANCE(163);
      if (lookahead == '@') ADVANCE(95);
      if (lookahead == 'B') ADVANCE(83);
      if (lookahead == 'E') ADVANCE(93);
      if (lookahead == 'S') ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (lookahead != 0) ADVANCE(81);
      END_STATE();
    case 17:
      if (lookahead == '#') ADVANCE(163);
      if (lookahead == 'G') ADVANCE(89);
      if (lookahead == 'W') ADVANCE(87);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (lookahead != 0) ADVANCE(81);
      END_STATE();
    case 18:
      if (lookahead == '#') ADVANCE(163);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (lookahead != 0) ADVANCE(81);
      END_STATE();
    case 19:
      if (lookahead == '#') ADVANCE(163);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(75);
      END_STATE();
    case 20:
      if (lookahead == '#') ADVANCE(161);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(20);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(12);
      if (lookahead != 0 &&
          (lookahead < 'A' || 'Z' < lookahead)) ADVANCE(72);
      END_STATE();
    case 21:
      if (lookahead == '#') ADVANCE(161);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(20);
      if (lookahead != 0 &&
          (lookahead < 'A' || 'Z' < lookahead)) ADVANCE(72);
      END_STATE();
    case 22:
      if (lookahead == ':') ADVANCE(116);
      END_STATE();
    case 23:
      if (lookahead == ':') ADVANCE(118);
      END_STATE();
    case 24:
      if (lookahead == ':') ADVANCE(117);
      END_STATE();
    case 25:
      if (lookahead == ':') ADVANCE(79);
      END_STATE();
    case 26:
      if (lookahead == '`') ADVANCE(120);
      END_STATE();
    case 27:
      if (lookahead == '`') ADVANCE(26);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(52);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(32);
      if (lookahead == 'u') ADVANCE(66);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(65);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(63);
      END_STATE();
    case 32:
      if (lookahead == 'c') ADVANCE(49);
      END_STATE();
    case 33:
      if (lookahead == 'c') ADVANCE(37);
      END_STATE();
    case 34:
      if (lookahead == 'd') ADVANCE(9);
      END_STATE();
    case 35:
      if (lookahead == 'd') ADVANCE(24);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(22);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(25);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 44:
      if (lookahead == 'g') ADVANCE(62);
      END_STATE();
    case 45:
      if (lookahead == 'h') ADVANCE(40);
      END_STATE();
    case 46:
      if (lookahead == 'h') ADVANCE(42);
      END_STATE();
    case 47:
      if (lookahead == 'i') ADVANCE(70);
      END_STATE();
    case 48:
      if (lookahead == 'i') ADVANCE(59);
      END_STATE();
    case 49:
      if (lookahead == 'k') ADVANCE(44);
      END_STATE();
    case 50:
      if (lookahead == 'l') ADVANCE(36);
      END_STATE();
    case 51:
      if (lookahead == 'l') ADVANCE(39);
      END_STATE();
    case 52:
      if (lookahead == 'm') ADVANCE(61);
      END_STATE();
    case 53:
      if (lookahead == 'n') ADVANCE(34);
      END_STATE();
    case 54:
      if (lookahead == 'n') ADVANCE(35);
      END_STATE();
    case 55:
      if (lookahead == 'n') ADVANCE(31);
      END_STATE();
    case 56:
      if (lookahead == 'n') ADVANCE(11);
      END_STATE();
    case 57:
      if (lookahead == 'n') ADVANCE(6);
      END_STATE();
    case 58:
      if (lookahead == 'n') ADVANCE(7);
      END_STATE();
    case 59:
      if (lookahead == 'o') ADVANCE(23);
      END_STATE();
    case 60:
      if (lookahead == 'o') ADVANCE(69);
      END_STATE();
    case 61:
      if (lookahead == 'p') ADVANCE(51);
      END_STATE();
    case 62:
      if (lookahead == 'r') ADVANCE(60);
      END_STATE();
    case 63:
      if (lookahead == 'r') ADVANCE(48);
      END_STATE();
    case 64:
      if (lookahead == 'r') ADVANCE(41);
      END_STATE();
    case 65:
      if (lookahead == 't') ADVANCE(68);
      END_STATE();
    case 66:
      if (lookahead == 't') ADVANCE(10);
      END_STATE();
    case 67:
      if (lookahead == 'u') ADVANCE(50);
      END_STATE();
    case 68:
      if (lookahead == 'u') ADVANCE(64);
      END_STATE();
    case 69:
      if (lookahead == 'u') ADVANCE(54);
      END_STATE();
    case 70:
      if (lookahead == 'v') ADVANCE(43);
      END_STATE();
    case 71:
      if (lookahead == 'x') ADVANCE(28);
      END_STATE();
    case 72:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 73:
      if (lookahead == ' ' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 74:
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 75:
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 76:
      if (eof) ADVANCE(77);
      if (lookahead == '"') ADVANCE(14);
      if (lookahead == '#') ADVANCE(163);
      if (lookahead == '*') ADVANCE(8);
      if (lookahead == '@') ADVANCE(74);
      if (lookahead == 'A') ADVANCE(53);
      if (lookahead == 'B') ADVANCE(29);
      if (lookahead == 'E') ADVANCE(71);
      if (lookahead == 'F') ADVANCE(38);
      if (lookahead == 'G') ADVANCE(47);
      if (lookahead == 'R') ADVANCE(67);
      if (lookahead == 'S') ADVANCE(33);
      if (lookahead == 'T') ADVANCE(45);
      if (lookahead == 'W') ADVANCE(46);
      if (lookahead == '`') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(76)
      END_STATE();
    case 77:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_tag);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_feature_keyword);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_title);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym__multiline_text_token1);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym__multiline_text_token1);
      if (lookahead == 'a') ADVANCE(136);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym__multiline_text_token1);
      if (lookahead == 'a') ADVANCE(32);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym__multiline_text_token1);
      if (lookahead == 'c') ADVANCE(138);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym__multiline_text_token1);
      if (lookahead == 'c') ADVANCE(37);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym__multiline_text_token1);
      if (lookahead == 'h') ADVANCE(140);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym__multiline_text_token1);
      if (lookahead == 'h') ADVANCE(42);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym__multiline_text_token1);
      if (lookahead == 'i') ADVANCE(159);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym__multiline_text_token1);
      if (lookahead == 'i') ADVANCE(70);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym__multiline_text_token1);
      if (lookahead == 'u') ADVANCE(146);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym__multiline_text_token1);
      if (lookahead == 'u') ADVANCE(50);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym__multiline_text_token1);
      if (lookahead == 'x') ADVANCE(134);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym__multiline_text_token1);
      if (lookahead == 'x') ADVANCE(28);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym__multiline_text_token1);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym__multiline_text_token1);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym__multiline_text_token2);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym__multiline_text_token2);
      if (lookahead == '\n') ADVANCE(111);
      if (lookahead == '@') ADVANCE(110);
      if (lookahead == 'B') ADVANCE(104);
      if (lookahead == 'E') ADVANCE(109);
      if (lookahead == 'R') ADVANCE(108);
      if (lookahead == 'S') ADVANCE(105);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(97);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(96);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym__multiline_text_token2);
      if (lookahead == '\n') ADVANCE(112);
      if (lookahead == '@') ADVANCE(110);
      if (lookahead == 'B') ADVANCE(104);
      if (lookahead == 'E') ADVANCE(109);
      if (lookahead == 'S') ADVANCE(105);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(98);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(96);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym__multiline_text_token2);
      if (lookahead == '\n') ADVANCE(113);
      if (lookahead == 'G') ADVANCE(107);
      if (lookahead == 'W') ADVANCE(106);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(99);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(96);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym__multiline_text_token2);
      if (lookahead == '\n') ADVANCE(114);
      if (lookahead == '"') ADVANCE(102);
      if (lookahead == '`') ADVANCE(103);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(100);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(96);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym__multiline_text_token2);
      if (lookahead == '\n') ADVANCE(115);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(101);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(96);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym__multiline_text_token2);
      if (lookahead == '"') ADVANCE(13);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym__multiline_text_token2);
      if (lookahead == '`') ADVANCE(26);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym__multiline_text_token2);
      if (lookahead == 'a') ADVANCE(32);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym__multiline_text_token2);
      if (lookahead == 'c') ADVANCE(37);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym__multiline_text_token2);
      if (lookahead == 'h') ADVANCE(42);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym__multiline_text_token2);
      if (lookahead == 'i') ADVANCE(70);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym__multiline_text_token2);
      if (lookahead == 'u') ADVANCE(50);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym__multiline_text_token2);
      if (lookahead == 'x') ADVANCE(28);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym__multiline_text_token2);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(111);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(97);
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
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(99);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(114);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(100);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(115);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(101);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_rule_keyword);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_background_keyword);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_scenario_keyword);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DQUOTE_DQUOTE);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_BQUOTE_BQUOTE_BQUOTE);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_given_keyword);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_when_keyword);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_then_keyword);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_and_keyword);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_but_keyword);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_asterisk_keyword);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_step_definition);
      if (lookahead == ' ' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(163);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_step_definition);
      if (lookahead == ' ' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym__alpha_word);
      if (lookahead == ' ') ADVANCE(122);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym__alpha_word);
      if (lookahead == ' ') ADVANCE(121);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym__alpha_word);
      if (lookahead == ':') ADVANCE(116);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym__alpha_word);
      if (lookahead == ':') ADVANCE(118);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym__alpha_word);
      if (lookahead == ':') ADVANCE(117);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym__alpha_word);
      if (lookahead == 'a') ADVANCE(148);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym__alpha_word);
      if (lookahead == 'a') ADVANCE(157);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym__alpha_word);
      if (lookahead == 'c') ADVANCE(145);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym__alpha_word);
      if (lookahead == 'd') ADVANCE(133);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym__alpha_word);
      if (lookahead == 'e') ADVANCE(151);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym__alpha_word);
      if (lookahead == 'e') ADVANCE(131);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym__alpha_word);
      if (lookahead == 'e') ADVANCE(149);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym__alpha_word);
      if (lookahead == 'e') ADVANCE(132);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym__alpha_word);
      if (lookahead == 'e') ADVANCE(152);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym__alpha_word);
      if (lookahead == 'g') ADVANCE(156);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym__alpha_word);
      if (lookahead == 'i') ADVANCE(154);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym__alpha_word);
      if (lookahead == 'k') ADVANCE(143);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym__alpha_word);
      if (lookahead == 'l') ADVANCE(139);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym__alpha_word);
      if (lookahead == 'l') ADVANCE(141);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym__alpha_word);
      if (lookahead == 'm') ADVANCE(155);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym__alpha_word);
      if (lookahead == 'n') ADVANCE(129);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym__alpha_word);
      if (lookahead == 'n') ADVANCE(137);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym__alpha_word);
      if (lookahead == 'n') ADVANCE(135);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym__alpha_word);
      if (lookahead == 'n') ADVANCE(130);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym__alpha_word);
      if (lookahead == 'o') ADVANCE(158);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym__alpha_word);
      if (lookahead == 'o') ADVANCE(132);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym__alpha_word);
      if (lookahead == 'p') ADVANCE(147);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym__alpha_word);
      if (lookahead == 'r') ADVANCE(153);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym__alpha_word);
      if (lookahead == 'r') ADVANCE(144);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym__alpha_word);
      if (lookahead == 'u') ADVANCE(150);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym__alpha_word);
      if (lookahead == 'v') ADVANCE(142);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym__alpha_word);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_comment);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(163);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == ' ' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(163);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(163);
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
  [1] = {.lex_state = 76},
  [2] = {.lex_state = 76},
  [3] = {.lex_state = 15},
  [4] = {.lex_state = 15},
  [5] = {.lex_state = 76},
  [6] = {.lex_state = 76},
  [7] = {.lex_state = 76},
  [8] = {.lex_state = 76},
  [9] = {.lex_state = 76},
  [10] = {.lex_state = 76},
  [11] = {.lex_state = 76},
  [12] = {.lex_state = 76},
  [13] = {.lex_state = 76},
  [14] = {.lex_state = 76},
  [15] = {.lex_state = 16},
  [16] = {.lex_state = 76},
  [17] = {.lex_state = 76},
  [18] = {.lex_state = 76},
  [19] = {.lex_state = 16},
  [20] = {.lex_state = 17},
  [21] = {.lex_state = 17},
  [22] = {.lex_state = 76},
  [23] = {.lex_state = 76},
  [24] = {.lex_state = 76},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 76},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 76},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 76},
  [31] = {.lex_state = 76},
  [32] = {.lex_state = 76},
  [33] = {.lex_state = 76},
  [34] = {.lex_state = 76},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 76},
  [37] = {.lex_state = 76},
  [38] = {.lex_state = 3},
  [39] = {.lex_state = 4},
  [40] = {.lex_state = 76},
  [41] = {.lex_state = 76},
  [42] = {.lex_state = 4},
  [43] = {.lex_state = 3},
  [44] = {.lex_state = 76},
  [45] = {.lex_state = 76},
  [46] = {.lex_state = 76},
  [47] = {.lex_state = 76},
  [48] = {.lex_state = 76},
  [49] = {.lex_state = 76},
  [50] = {.lex_state = 76},
  [51] = {.lex_state = 76},
  [52] = {.lex_state = 5},
  [53] = {.lex_state = 76},
  [54] = {.lex_state = 76},
  [55] = {.lex_state = 76},
  [56] = {.lex_state = 5},
  [57] = {.lex_state = 76},
  [58] = {.lex_state = 5},
  [59] = {.lex_state = 76},
  [60] = {.lex_state = 76},
  [61] = {.lex_state = 76},
  [62] = {.lex_state = 5},
  [63] = {.lex_state = 18},
  [64] = {.lex_state = 76},
  [65] = {.lex_state = 76},
  [66] = {.lex_state = 76},
  [67] = {.lex_state = 19},
  [68] = {.lex_state = 21},
  [69] = {.lex_state = 21},
  [70] = {.lex_state = 76},
  [71] = {.lex_state = 76},
  [72] = {.lex_state = 21},
  [73] = {.lex_state = 21},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 76},
  [76] = {.lex_state = 76},
  [77] = {.lex_state = 21},
  [78] = {.lex_state = 19},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 19},
  [82] = {.lex_state = 19},
  [83] = {.lex_state = 19},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 19},
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
    [sym_feature] = STATE(84),
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
      sym_doc_string,
    STATE(18), 1,
      sym_step_arguments,
    STATE(63), 1,
      sym__doc_string_delimiter,
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
    STATE(12), 1,
      sym_description,
    STATE(36), 1,
      sym__multiline_text,
    STATE(48), 1,
      sym_background,
    STATE(37), 2,
      sym_rule,
      aux_sym_rules_repeat1,
    STATE(44), 2,
      sym_scenario,
      aux_sym_scenarios_repeat1,
    STATE(80), 2,
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
    STATE(13), 1,
      sym_description,
    STATE(36), 1,
      sym__multiline_text,
    STATE(48), 1,
      sym_background,
    STATE(37), 2,
      sym_rule,
      aux_sym_rules_repeat1,
    STATE(44), 2,
      sym_scenario,
      aux_sym_scenarios_repeat1,
    STATE(79), 2,
      sym_rules,
      sym_scenarios,
  [109] = 6,
    ACTIONS(3), 1,
      sym_comment,
    STATE(16), 1,
      sym_doc_string,
    STATE(22), 1,
      sym_step_arguments,
    STATE(63), 1,
      sym__doc_string_delimiter,
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
    STATE(72), 1,
      sym_additional_step_keyword,
    ACTIONS(29), 3,
      sym_and_keyword,
      sym_but_keyword,
      sym_asterisk_keyword,
    STATE(7), 3,
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
    ACTIONS(33), 1,
      sym_then_keyword,
    STATE(72), 1,
      sym_additional_step_keyword,
    ACTIONS(36), 3,
      sym_and_keyword,
      sym_but_keyword,
      sym_asterisk_keyword,
    STATE(7), 3,
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
    ACTIONS(27), 1,
      sym_then_keyword,
    STATE(72), 1,
      sym_additional_step_keyword,
    ACTIONS(29), 3,
      sym_and_keyword,
      sym_but_keyword,
      sym_asterisk_keyword,
    STATE(6), 3,
      sym_then_step,
      sym_additional_step,
      aux_sym_then_steps_repeat1,
    ACTIONS(39), 4,
      ts_builtin_sym_end,
      sym_tag,
      sym_rule_keyword,
      sym_scenario_keyword,
  [214] = 6,
    ACTIONS(3), 1,
      sym_comment,
    STATE(16), 1,
      sym_doc_string,
    STATE(23), 1,
      sym_step_arguments,
    STATE(63), 1,
      sym__doc_string_delimiter,
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
    STATE(72), 1,
      sym_additional_step_keyword,
    ACTIONS(29), 3,
      sym_and_keyword,
      sym_but_keyword,
      sym_asterisk_keyword,
    ACTIONS(43), 3,
      sym_tag,
      sym_scenario_keyword,
      sym_when_keyword,
    STATE(11), 3,
      sym_given_step,
      sym_additional_step,
      aux_sym_given_steps_repeat1,
  [265] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      sym_given_keyword,
    STATE(72), 1,
      sym_additional_step_keyword,
    ACTIONS(47), 3,
      sym_tag,
      sym_scenario_keyword,
      sym_when_keyword,
    ACTIONS(52), 3,
      sym_and_keyword,
      sym_but_keyword,
      sym_asterisk_keyword,
    STATE(11), 3,
      sym_given_step,
      sym_additional_step,
      aux_sym_given_steps_repeat1,
  [290] = 9,
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
    STATE(48), 1,
      sym_background,
    STATE(37), 2,
      sym_rule,
      aux_sym_rules_repeat1,
    STATE(44), 2,
      sym_scenario,
      aux_sym_scenarios_repeat1,
    STATE(79), 2,
      sym_rules,
      sym_scenarios,
  [321] = 9,
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
    STATE(48), 1,
      sym_background,
    STATE(37), 2,
      sym_rule,
      aux_sym_rules_repeat1,
    STATE(44), 2,
      sym_scenario,
      aux_sym_scenarios_repeat1,
    STATE(74), 2,
      sym_rules,
      sym_scenarios,
  [352] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      sym_given_keyword,
    STATE(72), 1,
      sym_additional_step_keyword,
    ACTIONS(29), 3,
      sym_and_keyword,
      sym_but_keyword,
      sym_asterisk_keyword,
    ACTIONS(55), 3,
      sym_tag,
      sym_scenario_keyword,
      sym_when_keyword,
    STATE(10), 3,
      sym_given_step,
      sym_additional_step,
      aux_sym_given_steps_repeat1,
  [377] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      sym_background_keyword,
    ACTIONS(21), 1,
      sym_scenario_keyword,
    ACTIONS(57), 1,
      sym_tag,
    ACTIONS(59), 1,
      aux_sym__multiline_text_token1,
    STATE(24), 1,
      sym_description,
    STATE(36), 1,
      sym__multiline_text,
    STATE(49), 1,
      sym_background,
    STATE(61), 1,
      sym_scenarios,
    STATE(31), 2,
      sym_scenario,
      aux_sym_scenarios_repeat1,
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
  [441] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 10,
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
  [457] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      sym_background_keyword,
    ACTIONS(21), 1,
      sym_scenario_keyword,
    ACTIONS(57), 1,
      sym_tag,
    ACTIONS(59), 1,
      aux_sym__multiline_text_token1,
    STATE(26), 1,
      sym_description,
    STATE(36), 1,
      sym__multiline_text,
    STATE(49), 1,
      sym_background,
    STATE(60), 1,
      sym_scenarios,
    STATE(31), 2,
      sym_scenario,
      aux_sym_scenarios_repeat1,
  [489] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      sym_given_keyword,
    ACTIONS(67), 1,
      aux_sym__multiline_text_token1,
    ACTIONS(69), 1,
      sym_when_keyword,
    STATE(14), 1,
      sym_given_step,
    STATE(32), 1,
      sym_description,
    STATE(36), 1,
      sym__multiline_text,
    STATE(51), 1,
      sym_steps,
    STATE(55), 1,
      sym_when_step,
    STATE(65), 1,
      sym_given_steps,
  [520] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      sym_given_keyword,
    ACTIONS(67), 1,
      aux_sym__multiline_text_token1,
    ACTIONS(69), 1,
      sym_when_keyword,
    STATE(14), 1,
      sym_given_step,
    STATE(28), 1,
      sym_description,
    STATE(36), 1,
      sym__multiline_text,
    STATE(45), 1,
      sym_steps,
    STATE(55), 1,
      sym_when_step,
    STATE(65), 1,
      sym_given_steps,
  [551] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 8,
      ts_builtin_sym_end,
      sym_tag,
      sym_rule_keyword,
      sym_scenario_keyword,
      sym_then_keyword,
      sym_and_keyword,
      sym_but_keyword,
      sym_asterisk_keyword,
  [565] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 7,
      sym_tag,
      sym_scenario_keyword,
      sym_given_keyword,
      sym_when_keyword,
      sym_and_keyword,
      sym_but_keyword,
      sym_asterisk_keyword,
  [578] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      sym_background_keyword,
    ACTIONS(21), 1,
      sym_scenario_keyword,
    ACTIONS(57), 1,
      sym_tag,
    STATE(49), 1,
      sym_background,
    STATE(57), 1,
      sym_scenarios,
    STATE(31), 2,
      sym_scenario,
      aux_sym_scenarios_repeat1,
  [601] = 4,
    ACTIONS(80), 1,
      sym_comment,
    STATE(25), 1,
      aux_sym__multiline_text_repeat1,
    ACTIONS(77), 2,
      aux_sym__multiline_text_token2,
      anon_sym_LF,
    ACTIONS(75), 4,
      sym_tag,
      sym_rule_keyword,
      sym_background_keyword,
      sym_scenario_keyword,
  [618] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      sym_background_keyword,
    ACTIONS(21), 1,
      sym_scenario_keyword,
    ACTIONS(57), 1,
      sym_tag,
    STATE(49), 1,
      sym_background,
    STATE(61), 1,
      sym_scenarios,
    STATE(31), 2,
      sym_scenario,
      aux_sym_scenarios_repeat1,
  [641] = 4,
    ACTIONS(80), 1,
      sym_comment,
    STATE(25), 1,
      aux_sym__multiline_text_repeat1,
    ACTIONS(84), 2,
      aux_sym__multiline_text_token2,
      anon_sym_LF,
    ACTIONS(82), 4,
      sym_tag,
      sym_rule_keyword,
      sym_background_keyword,
      sym_scenario_keyword,
  [658] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      sym_given_keyword,
    ACTIONS(69), 1,
      sym_when_keyword,
    STATE(14), 1,
      sym_given_step,
    STATE(51), 1,
      sym_steps,
    STATE(55), 1,
      sym_when_step,
    STATE(65), 1,
      sym_given_steps,
  [680] = 4,
    ACTIONS(80), 1,
      sym_comment,
    STATE(35), 1,
      aux_sym__multiline_text_repeat1,
    ACTIONS(86), 2,
      aux_sym__multiline_text_token2,
      anon_sym_LF,
    ACTIONS(82), 3,
      sym_tag,
      sym_background_keyword,
      sym_scenario_keyword,
  [696] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      sym_scenario_keyword,
    ACTIONS(90), 1,
      sym_tag,
    ACTIONS(88), 2,
      ts_builtin_sym_end,
      sym_rule_keyword,
    STATE(33), 2,
      sym_scenario,
      aux_sym_scenarios_repeat1,
  [714] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      sym_scenario_keyword,
    ACTIONS(95), 1,
      sym_tag,
    ACTIONS(93), 2,
      ts_builtin_sym_end,
      sym_rule_keyword,
    STATE(33), 2,
      sym_scenario,
      aux_sym_scenarios_repeat1,
  [732] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      sym_given_keyword,
    ACTIONS(69), 1,
      sym_when_keyword,
    STATE(14), 1,
      sym_given_step,
    STATE(50), 1,
      sym_steps,
    STATE(55), 1,
      sym_when_step,
    STATE(65), 1,
      sym_given_steps,
  [754] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 1,
      sym_tag,
    ACTIONS(103), 1,
      sym_scenario_keyword,
    ACTIONS(98), 2,
      ts_builtin_sym_end,
      sym_rule_keyword,
    STATE(33), 2,
      sym_scenario,
      aux_sym_scenarios_repeat1,
  [772] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      sym_then_keyword,
    STATE(16), 1,
      sym_doc_string,
    STATE(63), 1,
      sym__doc_string_delimiter,
    STATE(70), 1,
      sym_step_arguments,
    ACTIONS(11), 2,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
  [792] = 4,
    ACTIONS(80), 1,
      sym_comment,
    STATE(35), 1,
      aux_sym__multiline_text_repeat1,
    ACTIONS(108), 2,
      aux_sym__multiline_text_token2,
      anon_sym_LF,
    ACTIONS(75), 3,
      sym_tag,
      sym_background_keyword,
      sym_scenario_keyword,
  [808] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 6,
      sym_tag,
      sym_rule_keyword,
      sym_background_keyword,
      sym_scenario_keyword,
      sym_given_keyword,
      sym_when_keyword,
  [820] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym_rule_keyword,
    ACTIONS(113), 1,
      ts_builtin_sym_end,
    ACTIONS(115), 1,
      sym_tag,
    STATE(40), 2,
      sym_rule,
      aux_sym_rules_repeat1,
  [837] = 4,
    ACTIONS(80), 1,
      sym_comment,
    STATE(38), 1,
      aux_sym__multiline_text_repeat1,
    ACTIONS(75), 2,
      sym_given_keyword,
      sym_when_keyword,
    ACTIONS(117), 2,
      aux_sym__multiline_text_token2,
      anon_sym_LF,
  [852] = 4,
    ACTIONS(80), 1,
      sym_comment,
    STATE(39), 1,
      aux_sym__multiline_text_repeat1,
    ACTIONS(75), 2,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(120), 2,
      aux_sym__multiline_text_token2,
      anon_sym_LF,
  [867] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 1,
      ts_builtin_sym_end,
    ACTIONS(125), 1,
      sym_tag,
    ACTIONS(128), 1,
      sym_rule_keyword,
    STATE(40), 2,
      sym_rule,
      aux_sym_rules_repeat1,
  [884] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      sym_scenario_keyword,
    ACTIONS(57), 1,
      sym_tag,
    ACTIONS(88), 1,
      ts_builtin_sym_end,
    STATE(33), 2,
      sym_scenario,
      aux_sym_scenarios_repeat1,
  [901] = 4,
    ACTIONS(80), 1,
      sym_comment,
    STATE(39), 1,
      aux_sym__multiline_text_repeat1,
    ACTIONS(82), 2,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(131), 2,
      aux_sym__multiline_text_token2,
      anon_sym_LF,
  [916] = 4,
    ACTIONS(80), 1,
      sym_comment,
    STATE(38), 1,
      aux_sym__multiline_text_repeat1,
    ACTIONS(82), 2,
      sym_given_keyword,
      sym_when_keyword,
    ACTIONS(133), 2,
      aux_sym__multiline_text_token2,
      anon_sym_LF,
  [931] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      sym_scenario_keyword,
    ACTIONS(57), 1,
      sym_tag,
    ACTIONS(93), 1,
      ts_builtin_sym_end,
    STATE(33), 2,
      sym_scenario,
      aux_sym_scenarios_repeat1,
  [948] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 4,
      ts_builtin_sym_end,
      sym_tag,
      sym_rule_keyword,
      sym_scenario_keyword,
  [958] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 4,
      ts_builtin_sym_end,
      sym_tag,
      sym_rule_keyword,
      sym_scenario_keyword,
  [968] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 4,
      ts_builtin_sym_end,
      sym_tag,
      sym_rule_keyword,
      sym_scenario_keyword,
  [978] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      sym_scenario_keyword,
    ACTIONS(57), 1,
      sym_tag,
    STATE(41), 2,
      sym_scenario,
      aux_sym_scenarios_repeat1,
  [992] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      sym_scenario_keyword,
    ACTIONS(57), 1,
      sym_tag,
    STATE(30), 2,
      sym_scenario,
      aux_sym_scenarios_repeat1,
  [1006] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 4,
      ts_builtin_sym_end,
      sym_tag,
      sym_rule_keyword,
      sym_scenario_keyword,
  [1016] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 4,
      ts_builtin_sym_end,
      sym_tag,
      sym_rule_keyword,
      sym_scenario_keyword,
  [1026] = 3,
    ACTIONS(80), 1,
      sym_comment,
    STATE(27), 1,
      aux_sym__multiline_text_repeat1,
    ACTIONS(145), 2,
      aux_sym__multiline_text_token2,
      anon_sym_LF,
  [1037] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      sym_given_keyword,
    STATE(14), 1,
      sym_given_step,
    STATE(64), 1,
      sym_given_steps,
  [1050] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      sym_then_keyword,
    STATE(8), 1,
      sym_then_step,
    STATE(47), 1,
      sym_then_steps,
  [1063] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      sym_then_keyword,
    STATE(8), 1,
      sym_then_step,
    STATE(46), 1,
      sym_then_steps,
  [1076] = 3,
    ACTIONS(80), 1,
      sym_comment,
    STATE(29), 1,
      aux_sym__multiline_text_repeat1,
    ACTIONS(147), 2,
      aux_sym__multiline_text_token2,
      anon_sym_LF,
  [1087] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 3,
      ts_builtin_sym_end,
      sym_tag,
      sym_rule_keyword,
  [1096] = 3,
    ACTIONS(80), 1,
      sym_comment,
    STATE(42), 1,
      aux_sym__multiline_text_repeat1,
    ACTIONS(151), 2,
      aux_sym__multiline_text_token2,
      anon_sym_LF,
  [1107] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(17), 1,
      sym__doc_string_delimiter,
    ACTIONS(153), 2,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
  [1118] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 3,
      ts_builtin_sym_end,
      sym_tag,
      sym_rule_keyword,
  [1127] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 3,
      ts_builtin_sym_end,
      sym_tag,
      sym_rule_keyword,
  [1136] = 3,
    ACTIONS(80), 1,
      sym_comment,
    STATE(43), 1,
      aux_sym__multiline_text_repeat1,
    ACTIONS(159), 2,
      aux_sym__multiline_text_token2,
      anon_sym_LF,
  [1147] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      aux_sym__multiline_text_token1,
    STATE(59), 1,
      sym__multiline_text,
  [1157] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 2,
      sym_tag,
      sym_scenario_keyword,
  [1165] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym_when_keyword,
    STATE(54), 1,
      sym_when_step,
  [1175] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      sym_rule_keyword,
    ACTIONS(167), 1,
      sym_scenario_keyword,
  [1185] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 1,
      sym_title,
  [1192] = 2,
    ACTIONS(80), 1,
      sym_comment,
    ACTIONS(171), 1,
      sym_step_definition,
  [1199] = 2,
    ACTIONS(80), 1,
      sym_comment,
    ACTIONS(173), 1,
      sym_step_definition,
  [1206] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 1,
      sym_then_keyword,
  [1213] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 1,
      sym_feature_keyword,
  [1220] = 2,
    ACTIONS(80), 1,
      sym_comment,
    ACTIONS(179), 1,
      sym_step_definition,
  [1227] = 2,
    ACTIONS(80), 1,
      sym_comment,
    ACTIONS(181), 1,
      sym_step_definition,
  [1234] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 1,
      ts_builtin_sym_end,
  [1241] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      sym_rule_keyword,
  [1248] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      sym_scenario_keyword,
  [1255] = 2,
    ACTIONS(80), 1,
      sym_comment,
    ACTIONS(185), 1,
      sym_step_definition,
  [1262] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 1,
      sym_title,
  [1269] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 1,
      ts_builtin_sym_end,
  [1276] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 1,
      ts_builtin_sym_end,
  [1283] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      sym_title,
  [1290] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 1,
      sym_title,
  [1297] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 1,
      sym_title,
  [1304] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 1,
      ts_builtin_sym_end,
  [1311] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 1,
      sym_title,
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
  [SMALL_STATE(12)] = 290,
  [SMALL_STATE(13)] = 321,
  [SMALL_STATE(14)] = 352,
  [SMALL_STATE(15)] = 377,
  [SMALL_STATE(16)] = 409,
  [SMALL_STATE(17)] = 425,
  [SMALL_STATE(18)] = 441,
  [SMALL_STATE(19)] = 457,
  [SMALL_STATE(20)] = 489,
  [SMALL_STATE(21)] = 520,
  [SMALL_STATE(22)] = 551,
  [SMALL_STATE(23)] = 565,
  [SMALL_STATE(24)] = 578,
  [SMALL_STATE(25)] = 601,
  [SMALL_STATE(26)] = 618,
  [SMALL_STATE(27)] = 641,
  [SMALL_STATE(28)] = 658,
  [SMALL_STATE(29)] = 680,
  [SMALL_STATE(30)] = 696,
  [SMALL_STATE(31)] = 714,
  [SMALL_STATE(32)] = 732,
  [SMALL_STATE(33)] = 754,
  [SMALL_STATE(34)] = 772,
  [SMALL_STATE(35)] = 792,
  [SMALL_STATE(36)] = 808,
  [SMALL_STATE(37)] = 820,
  [SMALL_STATE(38)] = 837,
  [SMALL_STATE(39)] = 852,
  [SMALL_STATE(40)] = 867,
  [SMALL_STATE(41)] = 884,
  [SMALL_STATE(42)] = 901,
  [SMALL_STATE(43)] = 916,
  [SMALL_STATE(44)] = 931,
  [SMALL_STATE(45)] = 948,
  [SMALL_STATE(46)] = 958,
  [SMALL_STATE(47)] = 968,
  [SMALL_STATE(48)] = 978,
  [SMALL_STATE(49)] = 992,
  [SMALL_STATE(50)] = 1006,
  [SMALL_STATE(51)] = 1016,
  [SMALL_STATE(52)] = 1026,
  [SMALL_STATE(53)] = 1037,
  [SMALL_STATE(54)] = 1050,
  [SMALL_STATE(55)] = 1063,
  [SMALL_STATE(56)] = 1076,
  [SMALL_STATE(57)] = 1087,
  [SMALL_STATE(58)] = 1096,
  [SMALL_STATE(59)] = 1107,
  [SMALL_STATE(60)] = 1118,
  [SMALL_STATE(61)] = 1127,
  [SMALL_STATE(62)] = 1136,
  [SMALL_STATE(63)] = 1147,
  [SMALL_STATE(64)] = 1157,
  [SMALL_STATE(65)] = 1165,
  [SMALL_STATE(66)] = 1175,
  [SMALL_STATE(67)] = 1185,
  [SMALL_STATE(68)] = 1192,
  [SMALL_STATE(69)] = 1199,
  [SMALL_STATE(70)] = 1206,
  [SMALL_STATE(71)] = 1213,
  [SMALL_STATE(72)] = 1220,
  [SMALL_STATE(73)] = 1227,
  [SMALL_STATE(74)] = 1234,
  [SMALL_STATE(75)] = 1241,
  [SMALL_STATE(76)] = 1248,
  [SMALL_STATE(77)] = 1255,
  [SMALL_STATE(78)] = 1262,
  [SMALL_STATE(79)] = 1269,
  [SMALL_STATE(80)] = 1276,
  [SMALL_STATE(81)] = 1283,
  [SMALL_STATE(82)] = 1290,
  [SMALL_STATE(83)] = 1297,
  [SMALL_STATE(84)] = 1304,
  [SMALL_STATE(85)] = 1311,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_additional_step, 2),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_then_step, 2),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_then_steps, 2),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_then_steps_repeat1, 2),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_then_steps_repeat1, 2), SHIFT_REPEAT(69),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_then_steps_repeat1, 2), SHIFT_REPEAT(73),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_then_steps, 1),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_given_step, 2),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_given_steps, 2),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_given_steps_repeat1, 2),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_given_steps_repeat1, 2), SHIFT_REPEAT(77),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_given_steps_repeat1, 2), SHIFT_REPEAT(73),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_given_steps, 1),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_arguments, 1),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doc_string, 3),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_additional_step, 3),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_then_step, 3),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_given_step, 3),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__multiline_text_repeat1, 2),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__multiline_text_repeat1, 2), SHIFT_REPEAT(25),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__multiline_text, 2),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scenarios, 2),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_scenarios, 2), SHIFT(76),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scenarios, 1),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_scenarios, 1), SHIFT(76),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_scenarios_repeat1, 2),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scenarios_repeat1, 2), SHIFT_REPEAT(76),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scenarios_repeat1, 2), SHIFT_REPEAT(81),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_when_step, 2),
  [108] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__multiline_text_repeat1, 2), SHIFT_REPEAT(35),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description, 1),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rules, 1),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [117] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__multiline_text_repeat1, 2), SHIFT_REPEAT(38),
  [120] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__multiline_text_repeat1, 2), SHIFT_REPEAT(39),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rules_repeat1, 2),
  [125] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rules_repeat1, 2), SHIFT_REPEAT(75),
  [128] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rules_repeat1, 2), SHIFT_REPEAT(82),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scenario, 3),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_steps, 2),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_steps, 3),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scenario, 5),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scenario, 4),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 5),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 3),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 4),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 2),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_when_step, 3),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_additional_step_keyword, 1),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_feature, 5),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_feature, 4),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_feature, 3),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [199] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
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
