#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 48
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 34
#define ALIAS_COUNT 0
#define TOKEN_COUNT 15
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum {
  sym_alpha_word = 1,
  sym_feature_keyword = 2,
  sym_title = 3,
  aux_sym_description_token1 = 4,
  anon_sym_LF = 5,
  sym_rule_keyword = 6,
  sym_scenario_keyword = 7,
  sym_given_keyword = 8,
  sym_when_keyword = 9,
  sym_then_keyword = 10,
  sym_and_keyword = 11,
  sym_but_keyword = 12,
  sym_asterisk_keyword = 13,
  sym_step_definition = 14,
  sym_feature = 15,
  sym_description = 16,
  sym_rules = 17,
  sym_rule = 18,
  sym_scenarios = 19,
  sym_scenario = 20,
  sym_steps = 21,
  sym_given_steps = 22,
  sym_then_steps = 23,
  sym_given_step = 24,
  sym_when_step = 25,
  sym_then_step = 26,
  sym_additional_step = 27,
  sym_additional_step_keyword = 28,
  aux_sym_description_repeat1 = 29,
  aux_sym_rules_repeat1 = 30,
  aux_sym_scenarios_repeat1 = 31,
  aux_sym_given_steps_repeat1 = 32,
  aux_sym_then_steps_repeat1 = 33,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_alpha_word] = "alpha_word",
  [sym_feature_keyword] = "feature_keyword",
  [sym_title] = "title",
  [aux_sym_description_token1] = "description_token1",
  [anon_sym_LF] = "\n",
  [sym_rule_keyword] = "rule_keyword",
  [sym_scenario_keyword] = "scenario_keyword",
  [sym_given_keyword] = "given_keyword",
  [sym_when_keyword] = "when_keyword",
  [sym_then_keyword] = "then_keyword",
  [sym_and_keyword] = "and_keyword",
  [sym_but_keyword] = "but_keyword",
  [sym_asterisk_keyword] = "asterisk_keyword",
  [sym_step_definition] = "step_definition",
  [sym_feature] = "feature",
  [sym_description] = "description",
  [sym_rules] = "rules",
  [sym_rule] = "rule",
  [sym_scenarios] = "scenarios",
  [sym_scenario] = "scenario",
  [sym_steps] = "steps",
  [sym_given_steps] = "given_steps",
  [sym_then_steps] = "then_steps",
  [sym_given_step] = "given_step",
  [sym_when_step] = "when_step",
  [sym_then_step] = "then_step",
  [sym_additional_step] = "additional_step",
  [sym_additional_step_keyword] = "additional_step_keyword",
  [aux_sym_description_repeat1] = "description_repeat1",
  [aux_sym_rules_repeat1] = "rules_repeat1",
  [aux_sym_scenarios_repeat1] = "scenarios_repeat1",
  [aux_sym_given_steps_repeat1] = "given_steps_repeat1",
  [aux_sym_then_steps_repeat1] = "then_steps_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_alpha_word] = sym_alpha_word,
  [sym_feature_keyword] = sym_feature_keyword,
  [sym_title] = sym_title,
  [aux_sym_description_token1] = aux_sym_description_token1,
  [anon_sym_LF] = anon_sym_LF,
  [sym_rule_keyword] = sym_rule_keyword,
  [sym_scenario_keyword] = sym_scenario_keyword,
  [sym_given_keyword] = sym_given_keyword,
  [sym_when_keyword] = sym_when_keyword,
  [sym_then_keyword] = sym_then_keyword,
  [sym_and_keyword] = sym_and_keyword,
  [sym_but_keyword] = sym_but_keyword,
  [sym_asterisk_keyword] = sym_asterisk_keyword,
  [sym_step_definition] = sym_step_definition,
  [sym_feature] = sym_feature,
  [sym_description] = sym_description,
  [sym_rules] = sym_rules,
  [sym_rule] = sym_rule,
  [sym_scenarios] = sym_scenarios,
  [sym_scenario] = sym_scenario,
  [sym_steps] = sym_steps,
  [sym_given_steps] = sym_given_steps,
  [sym_then_steps] = sym_then_steps,
  [sym_given_step] = sym_given_step,
  [sym_when_step] = sym_when_step,
  [sym_then_step] = sym_then_step,
  [sym_additional_step] = sym_additional_step,
  [sym_additional_step_keyword] = sym_additional_step_keyword,
  [aux_sym_description_repeat1] = aux_sym_description_repeat1,
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
  [sym_alpha_word] = {
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
  [aux_sym_description_token1] = {
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
  [sym_scenario_keyword] = {
    .visible = true,
    .named = true,
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
  [sym_feature] = {
    .visible = true,
    .named = true,
  },
  [sym_description] = {
    .visible = true,
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
  [sym_additional_step_keyword] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_description_repeat1] = {
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
  [18] = 17,
  [19] = 19,
  [20] = 20,
  [21] = 20,
  [22] = 20,
  [23] = 23,
  [24] = 24,
  [25] = 17,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(59);
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == 'A') ADVANCE(113);
      if (lookahead == 'B') ADVANCE(124);
      if (lookahead == 'E') ADVANCE(128);
      if (lookahead == 'F') ADVANCE(100);
      if (lookahead == 'G') ADVANCE(108);
      if (lookahead == 'R') ADVANCE(125);
      if (lookahead == 'S') ADVANCE(96);
      if (lookahead == 'T') ADVANCE(106);
      if (lookahead == 'W') ADVANCE(107);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(13);
      if (('C' <= lookahead && lookahead <= 'Z')) ADVANCE(129);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      if (lookahead != 0) ADVANCE(55);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(82);
      if (lookahead == ' ' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(71);
      if (lookahead == 'E') ADVANCE(70);
      if (lookahead == 'R') ADVANCE(69);
      if (lookahead == 'S') ADVANCE(66);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(63);
      if (lookahead != 0) ADVANCE(62);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(61);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(72);
      if (lookahead == 'G') ADVANCE(68);
      if (lookahead == 'W') ADVANCE(67);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(64);
      if (lookahead != 0) ADVANCE(62);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(73);
      if (lookahead == 'E') ADVANCE(70);
      if (lookahead == 'S') ADVANCE(66);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead != 0) ADVANCE(62);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(81);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(1);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1);
      END_STATE();
    case 8:
      if (lookahead == ' ') ADVANCE(79);
      END_STATE();
    case 9:
      if (lookahead == ' ') ADVANCE(80);
      END_STATE();
    case 10:
      if (lookahead == ' ') ADVANCE(78);
      END_STATE();
    case 11:
      if (lookahead == ' ') ADVANCE(77);
      END_STATE();
    case 12:
      if (lookahead == ' ') ADVANCE(76);
      END_STATE();
    case 13:
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == 'A') ADVANCE(113);
      if (lookahead == 'B') ADVANCE(124);
      if (lookahead == 'E') ADVANCE(128);
      if (lookahead == 'F') ADVANCE(100);
      if (lookahead == 'G') ADVANCE(108);
      if (lookahead == 'R') ADVANCE(125);
      if (lookahead == 'S') ADVANCE(96);
      if (lookahead == 'T') ADVANCE(106);
      if (lookahead == 'W') ADVANCE(107);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(13);
      if (('C' <= lookahead && lookahead <= 'Z')) ADVANCE(129);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      if (lookahead != 0) ADVANCE(55);
      END_STATE();
    case 14:
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == 'A') ADVANCE(38);
      if (lookahead == 'B') ADVANCE(49);
      if (lookahead == 'E') ADVANCE(53);
      if (lookahead == 'F') ADVANCE(25);
      if (lookahead == 'G') ADVANCE(33);
      if (lookahead == 'R') ADVANCE(50);
      if (lookahead == 'S') ADVANCE(21);
      if (lookahead == 'T') ADVANCE(31);
      if (lookahead == 'W') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(14);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(7);
      if (lookahead != 0 &&
          (lookahead < 'C' || 'Z' < lookahead)) ADVANCE(55);
      END_STATE();
    case 15:
      if (lookahead == ':') ADVANCE(74);
      END_STATE();
    case 16:
      if (lookahead == ':') ADVANCE(75);
      END_STATE();
    case 17:
      if (lookahead == ':') ADVANCE(60);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(37);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(48);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(45);
      END_STATE();
    case 21:
      if (lookahead == 'c') ADVANCE(24);
      END_STATE();
    case 22:
      if (lookahead == 'd') ADVANCE(8);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(15);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(39);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(19);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(16);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(17);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(42);
      END_STATE();
    case 31:
      if (lookahead == 'h') ADVANCE(27);
      END_STATE();
    case 32:
      if (lookahead == 'h') ADVANCE(29);
      END_STATE();
    case 33:
      if (lookahead == 'i') ADVANCE(52);
      END_STATE();
    case 34:
      if (lookahead == 'i') ADVANCE(43);
      END_STATE();
    case 35:
      if (lookahead == 'l') ADVANCE(23);
      END_STATE();
    case 36:
      if (lookahead == 'l') ADVANCE(26);
      END_STATE();
    case 37:
      if (lookahead == 'm') ADVANCE(44);
      END_STATE();
    case 38:
      if (lookahead == 'n') ADVANCE(22);
      END_STATE();
    case 39:
      if (lookahead == 'n') ADVANCE(20);
      END_STATE();
    case 40:
      if (lookahead == 'n') ADVANCE(10);
      END_STATE();
    case 41:
      if (lookahead == 'n') ADVANCE(11);
      END_STATE();
    case 42:
      if (lookahead == 'n') ADVANCE(12);
      END_STATE();
    case 43:
      if (lookahead == 'o') ADVANCE(16);
      END_STATE();
    case 44:
      if (lookahead == 'p') ADVANCE(36);
      END_STATE();
    case 45:
      if (lookahead == 'r') ADVANCE(34);
      END_STATE();
    case 46:
      if (lookahead == 'r') ADVANCE(28);
      END_STATE();
    case 47:
      if (lookahead == 't') ADVANCE(9);
      END_STATE();
    case 48:
      if (lookahead == 't') ADVANCE(51);
      END_STATE();
    case 49:
      if (lookahead == 'u') ADVANCE(47);
      END_STATE();
    case 50:
      if (lookahead == 'u') ADVANCE(35);
      END_STATE();
    case 51:
      if (lookahead == 'u') ADVANCE(46);
      END_STATE();
    case 52:
      if (lookahead == 'v') ADVANCE(30);
      END_STATE();
    case 53:
      if (lookahead == 'x') ADVANCE(18);
      END_STATE();
    case 54:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(54)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(57);
      END_STATE();
    case 55:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 56:
      if (lookahead == ' ' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1);
      END_STATE();
    case 57:
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3);
      END_STATE();
    case 58:
      if (eof) ADVANCE(59);
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == 'A') ADVANCE(38);
      if (lookahead == 'B') ADVANCE(49);
      if (lookahead == 'E') ADVANCE(53);
      if (lookahead == 'F') ADVANCE(25);
      if (lookahead == 'G') ADVANCE(33);
      if (lookahead == 'R') ADVANCE(50);
      if (lookahead == 'S') ADVANCE(21);
      if (lookahead == 'T') ADVANCE(31);
      if (lookahead == 'W') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(14);
      if (lookahead != 0 &&
          (lookahead < 'C' || 'Z' < lookahead)) ADVANCE(55);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_feature_keyword);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_title);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_description_token1);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == '\n') ADVANCE(71);
      if (lookahead == 'E') ADVANCE(70);
      if (lookahead == 'R') ADVANCE(69);
      if (lookahead == 'S') ADVANCE(66);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(63);
      if (lookahead != 0) ADVANCE(62);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == '\n') ADVANCE(72);
      if (lookahead == 'G') ADVANCE(68);
      if (lookahead == 'W') ADVANCE(67);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(64);
      if (lookahead != 0) ADVANCE(62);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == '\n') ADVANCE(73);
      if (lookahead == 'E') ADVANCE(70);
      if (lookahead == 'S') ADVANCE(66);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead != 0) ADVANCE(62);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == 'c') ADVANCE(24);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == 'h') ADVANCE(29);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == 'i') ADVANCE(52);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == 'u') ADVANCE(35);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == 'x') ADVANCE(18);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(71);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(63);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(64);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(73);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(65);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_rule_keyword);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_scenario_keyword);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_given_keyword);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_when_keyword);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_then_keyword);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_and_keyword);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_but_keyword);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_asterisk_keyword);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_step_definition);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_alpha_word);
      if (lookahead == '\n') ADVANCE(82);
      if (lookahead == ' ') ADVANCE(1);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_alpha_word);
      if (lookahead == ' ') ADVANCE(1);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_alpha_word);
      if (lookahead == ' ') ADVANCE(79);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_alpha_word);
      if (lookahead == ' ') ADVANCE(80);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_alpha_word);
      if (lookahead == ' ') ADVANCE(78);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_alpha_word);
      if (lookahead == ' ') ADVANCE(77);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_alpha_word);
      if (lookahead == ' ') ADVANCE(76);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_alpha_word);
      if (lookahead == ':') ADVANCE(74);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_alpha_word);
      if (lookahead == ':') ADVANCE(75);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_alpha_word);
      if (lookahead == ':') ADVANCE(60);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_alpha_word);
      if (lookahead == 'a') ADVANCE(112);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_alpha_word);
      if (lookahead == 'a') ADVANCE(122);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_alpha_word);
      if (lookahead == 'a') ADVANCE(120);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_alpha_word);
      if (lookahead == 'c') ADVANCE(99);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_alpha_word);
      if (lookahead == 'd') ADVANCE(85);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_alpha_word);
      if (lookahead == 'e') ADVANCE(90);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_alpha_word);
      if (lookahead == 'e') ADVANCE(114);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_alpha_word);
      if (lookahead == 'e') ADVANCE(94);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_alpha_word);
      if (lookahead == 'e') ADVANCE(91);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_alpha_word);
      if (lookahead == 'e') ADVANCE(115);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_alpha_word);
      if (lookahead == 'e') ADVANCE(92);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_alpha_word);
      if (lookahead == 'e') ADVANCE(116);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_alpha_word);
      if (lookahead == 'e') ADVANCE(117);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_alpha_word);
      if (lookahead == 'h') ADVANCE(102);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_alpha_word);
      if (lookahead == 'h') ADVANCE(104);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_alpha_word);
      if (lookahead == 'i') ADVANCE(127);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_alpha_word);
      if (lookahead == 'i') ADVANCE(118);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_alpha_word);
      if (lookahead == 'l') ADVANCE(98);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_alpha_word);
      if (lookahead == 'l') ADVANCE(101);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_alpha_word);
      if (lookahead == 'm') ADVANCE(119);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_alpha_word);
      if (lookahead == 'n') ADVANCE(97);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_alpha_word);
      if (lookahead == 'n') ADVANCE(95);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_alpha_word);
      if (lookahead == 'n') ADVANCE(87);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_alpha_word);
      if (lookahead == 'n') ADVANCE(88);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_alpha_word);
      if (lookahead == 'n') ADVANCE(89);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_alpha_word);
      if (lookahead == 'o') ADVANCE(91);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_alpha_word);
      if (lookahead == 'p') ADVANCE(111);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_alpha_word);
      if (lookahead == 'r') ADVANCE(109);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_alpha_word);
      if (lookahead == 'r') ADVANCE(103);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_alpha_word);
      if (lookahead == 't') ADVANCE(126);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_alpha_word);
      if (lookahead == 't') ADVANCE(86);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_alpha_word);
      if (lookahead == 'u') ADVANCE(123);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_alpha_word);
      if (lookahead == 'u') ADVANCE(110);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_alpha_word);
      if (lookahead == 'u') ADVANCE(121);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_alpha_word);
      if (lookahead == 'v') ADVANCE(105);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_alpha_word);
      if (lookahead == 'x') ADVANCE(93);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_alpha_word);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_alpha_word);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
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
  [1] = {.lex_state = 58},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 58},
  [4] = {.lex_state = 58},
  [5] = {.lex_state = 58},
  [6] = {.lex_state = 4},
  [7] = {.lex_state = 58},
  [8] = {.lex_state = 58},
  [9] = {.lex_state = 58},
  [10] = {.lex_state = 58},
  [11] = {.lex_state = 58},
  [12] = {.lex_state = 5},
  [13] = {.lex_state = 58},
  [14] = {.lex_state = 58},
  [15] = {.lex_state = 58},
  [16] = {.lex_state = 58},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 4},
  [19] = {.lex_state = 58},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 4},
  [22] = {.lex_state = 5},
  [23] = {.lex_state = 58},
  [24] = {.lex_state = 58},
  [25] = {.lex_state = 5},
  [26] = {.lex_state = 58},
  [27] = {.lex_state = 58},
  [28] = {.lex_state = 58},
  [29] = {.lex_state = 58},
  [30] = {.lex_state = 58},
  [31] = {.lex_state = 58},
  [32] = {.lex_state = 58},
  [33] = {.lex_state = 58},
  [34] = {.lex_state = 58},
  [35] = {.lex_state = 58},
  [36] = {.lex_state = 58},
  [37] = {.lex_state = 58},
  [38] = {.lex_state = 58},
  [39] = {.lex_state = 58},
  [40] = {.lex_state = 54},
  [41] = {.lex_state = 58},
  [42] = {.lex_state = 58},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 54},
  [46] = {.lex_state = 54},
  [47] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_alpha_word] = ACTIONS(1),
    [sym_feature_keyword] = ACTIONS(1),
    [sym_rule_keyword] = ACTIONS(1),
    [sym_scenario_keyword] = ACTIONS(1),
    [sym_given_keyword] = ACTIONS(1),
    [sym_when_keyword] = ACTIONS(1),
    [sym_then_keyword] = ACTIONS(1),
    [sym_and_keyword] = ACTIONS(1),
    [sym_but_keyword] = ACTIONS(1),
    [sym_asterisk_keyword] = ACTIONS(1),
    [sym_step_definition] = ACTIONS(1),
  },
  [1] = {
    [sym_feature] = STATE(47),
    [sym_feature_keyword] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(7), 1,
      sym_rule_keyword,
    ACTIONS(9), 1,
      sym_scenario_keyword,
    STATE(11), 1,
      sym_description,
    STATE(20), 1,
      aux_sym_description_repeat1,
    ACTIONS(5), 2,
      aux_sym_description_token1,
      anon_sym_LF,
    STATE(19), 2,
      sym_scenario,
      aux_sym_scenarios_repeat1,
    STATE(26), 2,
      sym_rule,
      aux_sym_rules_repeat1,
    STATE(44), 2,
      sym_rules,
      sym_scenarios,
  [29] = 5,
    ACTIONS(13), 1,
      sym_then_keyword,
    STATE(38), 1,
      sym_additional_step_keyword,
    ACTIONS(11), 3,
      ts_builtin_sym_end,
      sym_rule_keyword,
      sym_scenario_keyword,
    ACTIONS(15), 3,
      sym_and_keyword,
      sym_but_keyword,
      sym_asterisk_keyword,
    STATE(5), 3,
      sym_then_step,
      sym_additional_step,
      aux_sym_then_steps_repeat1,
  [51] = 5,
    ACTIONS(19), 1,
      sym_then_keyword,
    STATE(38), 1,
      sym_additional_step_keyword,
    ACTIONS(17), 3,
      ts_builtin_sym_end,
      sym_rule_keyword,
      sym_scenario_keyword,
    ACTIONS(22), 3,
      sym_and_keyword,
      sym_but_keyword,
      sym_asterisk_keyword,
    STATE(4), 3,
      sym_then_step,
      sym_additional_step,
      aux_sym_then_steps_repeat1,
  [73] = 5,
    ACTIONS(13), 1,
      sym_then_keyword,
    STATE(38), 1,
      sym_additional_step_keyword,
    ACTIONS(15), 3,
      sym_and_keyword,
      sym_but_keyword,
      sym_asterisk_keyword,
    ACTIONS(25), 3,
      ts_builtin_sym_end,
      sym_rule_keyword,
      sym_scenario_keyword,
    STATE(4), 3,
      sym_then_step,
      sym_additional_step,
      aux_sym_then_steps_repeat1,
  [95] = 9,
    ACTIONS(29), 1,
      sym_given_keyword,
    ACTIONS(31), 1,
      sym_when_keyword,
    STATE(9), 1,
      sym_given_step,
    STATE(14), 1,
      sym_description,
    STATE(21), 1,
      aux_sym_description_repeat1,
    STATE(28), 1,
      sym_when_step,
    STATE(32), 1,
      sym_steps,
    STATE(34), 1,
      sym_given_steps,
    ACTIONS(27), 2,
      aux_sym_description_token1,
      anon_sym_LF,
  [124] = 5,
    ACTIONS(33), 1,
      sym_given_keyword,
    ACTIONS(35), 1,
      sym_when_keyword,
    STATE(38), 1,
      sym_additional_step_keyword,
    ACTIONS(15), 3,
      sym_and_keyword,
      sym_but_keyword,
      sym_asterisk_keyword,
    STATE(10), 3,
      sym_given_step,
      sym_additional_step,
      aux_sym_given_steps_repeat1,
  [144] = 1,
    ACTIONS(37), 9,
      ts_builtin_sym_end,
      sym_rule_keyword,
      sym_scenario_keyword,
      sym_given_keyword,
      sym_when_keyword,
      sym_then_keyword,
      sym_and_keyword,
      sym_but_keyword,
      sym_asterisk_keyword,
  [156] = 5,
    ACTIONS(33), 1,
      sym_given_keyword,
    ACTIONS(39), 1,
      sym_when_keyword,
    STATE(38), 1,
      sym_additional_step_keyword,
    ACTIONS(15), 3,
      sym_and_keyword,
      sym_but_keyword,
      sym_asterisk_keyword,
    STATE(7), 3,
      sym_given_step,
      sym_additional_step,
      aux_sym_given_steps_repeat1,
  [176] = 5,
    ACTIONS(41), 1,
      sym_given_keyword,
    ACTIONS(44), 1,
      sym_when_keyword,
    STATE(38), 1,
      sym_additional_step_keyword,
    ACTIONS(46), 3,
      sym_and_keyword,
      sym_but_keyword,
      sym_asterisk_keyword,
    STATE(10), 3,
      sym_given_step,
      sym_additional_step,
      aux_sym_given_steps_repeat1,
  [196] = 5,
    ACTIONS(49), 1,
      sym_rule_keyword,
    ACTIONS(51), 1,
      sym_scenario_keyword,
    STATE(19), 2,
      sym_scenario,
      aux_sym_scenarios_repeat1,
    STATE(26), 2,
      sym_rule,
      aux_sym_rules_repeat1,
    STATE(43), 2,
      sym_rules,
      sym_scenarios,
  [215] = 6,
    ACTIONS(9), 1,
      sym_scenario_keyword,
    STATE(22), 1,
      aux_sym_description_repeat1,
    STATE(24), 1,
      sym_description,
    STATE(35), 1,
      sym_scenarios,
    ACTIONS(53), 2,
      aux_sym_description_token1,
      anon_sym_LF,
    STATE(19), 2,
      sym_scenario,
      aux_sym_scenarios_repeat1,
  [236] = 1,
    ACTIONS(55), 7,
      ts_builtin_sym_end,
      sym_rule_keyword,
      sym_scenario_keyword,
      sym_then_keyword,
      sym_and_keyword,
      sym_but_keyword,
      sym_asterisk_keyword,
  [246] = 6,
    ACTIONS(33), 1,
      sym_given_keyword,
    ACTIONS(57), 1,
      sym_when_keyword,
    STATE(9), 1,
      sym_given_step,
    STATE(28), 1,
      sym_when_step,
    STATE(29), 1,
      sym_steps,
    STATE(34), 1,
      sym_given_steps,
  [265] = 1,
    ACTIONS(59), 5,
      sym_given_keyword,
      sym_when_keyword,
      sym_and_keyword,
      sym_but_keyword,
      sym_asterisk_keyword,
  [273] = 3,
    ACTIONS(63), 1,
      sym_scenario_keyword,
    ACTIONS(61), 2,
      ts_builtin_sym_end,
      sym_rule_keyword,
    STATE(16), 2,
      sym_scenario,
      aux_sym_scenarios_repeat1,
  [285] = 3,
    STATE(17), 1,
      aux_sym_description_repeat1,
    ACTIONS(66), 2,
      aux_sym_description_token1,
      anon_sym_LF,
    ACTIONS(69), 2,
      sym_rule_keyword,
      sym_scenario_keyword,
  [297] = 3,
    STATE(18), 1,
      aux_sym_description_repeat1,
    ACTIONS(69), 2,
      sym_given_keyword,
      sym_when_keyword,
    ACTIONS(71), 2,
      aux_sym_description_token1,
      anon_sym_LF,
  [309] = 3,
    ACTIONS(51), 1,
      sym_scenario_keyword,
    ACTIONS(74), 2,
      ts_builtin_sym_end,
      sym_rule_keyword,
    STATE(16), 2,
      sym_scenario,
      aux_sym_scenarios_repeat1,
  [321] = 3,
    STATE(17), 1,
      aux_sym_description_repeat1,
    ACTIONS(76), 2,
      aux_sym_description_token1,
      anon_sym_LF,
    ACTIONS(78), 2,
      sym_rule_keyword,
      sym_scenario_keyword,
  [333] = 3,
    STATE(18), 1,
      aux_sym_description_repeat1,
    ACTIONS(78), 2,
      sym_given_keyword,
      sym_when_keyword,
    ACTIONS(80), 2,
      aux_sym_description_token1,
      anon_sym_LF,
  [345] = 3,
    ACTIONS(78), 1,
      sym_scenario_keyword,
    STATE(25), 1,
      aux_sym_description_repeat1,
    ACTIONS(82), 2,
      aux_sym_description_token1,
      anon_sym_LF,
  [356] = 3,
    ACTIONS(84), 1,
      ts_builtin_sym_end,
    ACTIONS(86), 1,
      sym_rule_keyword,
    STATE(23), 2,
      sym_rule,
      aux_sym_rules_repeat1,
  [367] = 3,
    ACTIONS(51), 1,
      sym_scenario_keyword,
    STATE(33), 1,
      sym_scenarios,
    STATE(19), 2,
      sym_scenario,
      aux_sym_scenarios_repeat1,
  [378] = 3,
    ACTIONS(69), 1,
      sym_scenario_keyword,
    STATE(25), 1,
      aux_sym_description_repeat1,
    ACTIONS(89), 2,
      aux_sym_description_token1,
      anon_sym_LF,
  [389] = 3,
    ACTIONS(49), 1,
      sym_rule_keyword,
    ACTIONS(92), 1,
      ts_builtin_sym_end,
    STATE(23), 2,
      sym_rule,
      aux_sym_rules_repeat1,
  [400] = 1,
    ACTIONS(94), 3,
      ts_builtin_sym_end,
      sym_rule_keyword,
      sym_scenario_keyword,
  [406] = 3,
    ACTIONS(13), 1,
      sym_then_keyword,
    STATE(3), 1,
      sym_then_step,
    STATE(27), 1,
      sym_then_steps,
  [416] = 1,
    ACTIONS(96), 3,
      ts_builtin_sym_end,
      sym_rule_keyword,
      sym_scenario_keyword,
  [422] = 3,
    ACTIONS(13), 1,
      sym_then_keyword,
    STATE(3), 1,
      sym_then_step,
    STATE(31), 1,
      sym_then_steps,
  [432] = 1,
    ACTIONS(98), 3,
      ts_builtin_sym_end,
      sym_rule_keyword,
      sym_scenario_keyword,
  [438] = 1,
    ACTIONS(100), 3,
      ts_builtin_sym_end,
      sym_rule_keyword,
      sym_scenario_keyword,
  [444] = 1,
    ACTIONS(102), 2,
      ts_builtin_sym_end,
      sym_rule_keyword,
  [449] = 2,
    ACTIONS(57), 1,
      sym_when_keyword,
    STATE(30), 1,
      sym_when_step,
  [456] = 1,
    ACTIONS(104), 2,
      ts_builtin_sym_end,
      sym_rule_keyword,
  [461] = 1,
    ACTIONS(106), 1,
      sym_then_keyword,
  [465] = 1,
    ACTIONS(108), 1,
      sym_step_definition,
  [469] = 1,
    ACTIONS(110), 1,
      sym_step_definition,
  [473] = 1,
    ACTIONS(112), 1,
      sym_step_definition,
  [477] = 1,
    ACTIONS(114), 1,
      sym_title,
  [481] = 1,
    ACTIONS(116), 1,
      sym_step_definition,
  [485] = 1,
    ACTIONS(118), 1,
      sym_step_definition,
  [489] = 1,
    ACTIONS(120), 1,
      ts_builtin_sym_end,
  [493] = 1,
    ACTIONS(122), 1,
      ts_builtin_sym_end,
  [497] = 1,
    ACTIONS(124), 1,
      sym_title,
  [501] = 1,
    ACTIONS(126), 1,
      sym_title,
  [505] = 1,
    ACTIONS(128), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 29,
  [SMALL_STATE(4)] = 51,
  [SMALL_STATE(5)] = 73,
  [SMALL_STATE(6)] = 95,
  [SMALL_STATE(7)] = 124,
  [SMALL_STATE(8)] = 144,
  [SMALL_STATE(9)] = 156,
  [SMALL_STATE(10)] = 176,
  [SMALL_STATE(11)] = 196,
  [SMALL_STATE(12)] = 215,
  [SMALL_STATE(13)] = 236,
  [SMALL_STATE(14)] = 246,
  [SMALL_STATE(15)] = 265,
  [SMALL_STATE(16)] = 273,
  [SMALL_STATE(17)] = 285,
  [SMALL_STATE(18)] = 297,
  [SMALL_STATE(19)] = 309,
  [SMALL_STATE(20)] = 321,
  [SMALL_STATE(21)] = 333,
  [SMALL_STATE(22)] = 345,
  [SMALL_STATE(23)] = 356,
  [SMALL_STATE(24)] = 367,
  [SMALL_STATE(25)] = 378,
  [SMALL_STATE(26)] = 389,
  [SMALL_STATE(27)] = 400,
  [SMALL_STATE(28)] = 406,
  [SMALL_STATE(29)] = 416,
  [SMALL_STATE(30)] = 422,
  [SMALL_STATE(31)] = 432,
  [SMALL_STATE(32)] = 438,
  [SMALL_STATE(33)] = 444,
  [SMALL_STATE(34)] = 449,
  [SMALL_STATE(35)] = 456,
  [SMALL_STATE(36)] = 461,
  [SMALL_STATE(37)] = 465,
  [SMALL_STATE(38)] = 469,
  [SMALL_STATE(39)] = 473,
  [SMALL_STATE(40)] = 477,
  [SMALL_STATE(41)] = 481,
  [SMALL_STATE(42)] = 485,
  [SMALL_STATE(43)] = 489,
  [SMALL_STATE(44)] = 493,
  [SMALL_STATE(45)] = 497,
  [SMALL_STATE(46)] = 501,
  [SMALL_STATE(47)] = 505,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_then_steps, 1),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_then_steps_repeat1, 2),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_then_steps_repeat1, 2), SHIFT_REPEAT(39),
  [22] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_then_steps_repeat1, 2), SHIFT_REPEAT(37),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_then_steps, 2),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_given_steps, 2),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_additional_step, 2),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_given_steps, 1),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_given_steps_repeat1, 2), SHIFT_REPEAT(42),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_given_steps_repeat1, 2),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_given_steps_repeat1, 2), SHIFT_REPEAT(37),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_then_step, 2),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_given_step, 2),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_scenarios_repeat1, 2),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scenarios_repeat1, 2), SHIFT_REPEAT(45),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(17),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_description_repeat1, 2),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(18),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scenarios, 1),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_description, 1),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rules_repeat1, 2),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rules_repeat1, 2), SHIFT_REPEAT(46),
  [89] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(25),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rules, 1),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_steps, 2),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scenario, 4),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_steps, 3),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scenario, 3),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 4),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 3),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_when_step, 2),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_additional_step_keyword, 1),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_feature, 4),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_feature, 3),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [128] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
    .keyword_capture_token = sym_alpha_word,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
