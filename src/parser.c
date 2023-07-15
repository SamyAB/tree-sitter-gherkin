#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 52
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 36
#define ALIAS_COUNT 0
#define TOKEN_COUNT 16
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
  sym_background_keyword = 7,
  sym_scenario_keyword = 8,
  sym_given_keyword = 9,
  sym_when_keyword = 10,
  sym_then_keyword = 11,
  sym_and_keyword = 12,
  sym_but_keyword = 13,
  sym_asterisk_keyword = 14,
  sym_step_definition = 15,
  sym_feature = 16,
  sym_description = 17,
  sym_rules = 18,
  sym_rule = 19,
  sym_scenarios = 20,
  sym_background = 21,
  sym_scenario = 22,
  sym_steps = 23,
  sym_given_steps = 24,
  sym_then_steps = 25,
  sym_given_step = 26,
  sym_when_step = 27,
  sym_then_step = 28,
  sym_additional_step = 29,
  sym_additional_step_keyword = 30,
  aux_sym_description_repeat1 = 31,
  aux_sym_rules_repeat1 = 32,
  aux_sym_scenarios_repeat1 = 33,
  aux_sym_given_steps_repeat1 = 34,
  aux_sym_then_steps_repeat1 = 35,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_alpha_word] = "alpha_word",
  [sym_feature_keyword] = "feature_keyword",
  [sym_title] = "title",
  [aux_sym_description_token1] = "description_token1",
  [anon_sym_LF] = "\n",
  [sym_rule_keyword] = "rule_keyword",
  [sym_background_keyword] = "background_keyword",
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
  [sym_background] = "background",
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
  [sym_background_keyword] = sym_background_keyword,
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
  [sym_background] = sym_background,
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
  [sym_background_keyword] = {
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
  [18] = 18,
  [19] = 17,
  [20] = 15,
  [21] = 21,
  [22] = 17,
  [23] = 15,
  [24] = 24,
  [25] = 25,
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
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(68);
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == 'A') ADVANCE(130);
      if (lookahead == 'B') ADVANCE(106);
      if (lookahead == 'E') ADVANCE(148);
      if (lookahead == 'F') ADVANCE(115);
      if (lookahead == 'G') ADVANCE(124);
      if (lookahead == 'R') ADVANCE(144);
      if (lookahead == 'S') ADVANCE(110);
      if (lookahead == 'T') ADVANCE(122);
      if (lookahead == 'W') ADVANCE(123);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(13);
      if (('C' <= lookahead && lookahead <= 'Z')) ADVANCE(149);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      if (lookahead != 0) ADVANCE(64);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(93);
      if (lookahead == ' ' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(81);
      if (lookahead == 'B') ADVANCE(75);
      if (lookahead == 'E') ADVANCE(80);
      if (lookahead == 'R') ADVANCE(79);
      if (lookahead == 'S') ADVANCE(76);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(72);
      if (lookahead != 0) ADVANCE(71);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(70);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(82);
      if (lookahead == 'B') ADVANCE(75);
      if (lookahead == 'E') ADVANCE(80);
      if (lookahead == 'S') ADVANCE(76);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(73);
      if (lookahead != 0) ADVANCE(71);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(83);
      if (lookahead == 'G') ADVANCE(78);
      if (lookahead == 'W') ADVANCE(77);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(74);
      if (lookahead != 0) ADVANCE(71);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(92);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(1);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1);
      END_STATE();
    case 8:
      if (lookahead == ' ') ADVANCE(90);
      END_STATE();
    case 9:
      if (lookahead == ' ') ADVANCE(91);
      END_STATE();
    case 10:
      if (lookahead == ' ') ADVANCE(89);
      END_STATE();
    case 11:
      if (lookahead == ' ') ADVANCE(88);
      END_STATE();
    case 12:
      if (lookahead == ' ') ADVANCE(87);
      END_STATE();
    case 13:
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == 'A') ADVANCE(130);
      if (lookahead == 'B') ADVANCE(106);
      if (lookahead == 'E') ADVANCE(148);
      if (lookahead == 'F') ADVANCE(115);
      if (lookahead == 'G') ADVANCE(124);
      if (lookahead == 'R') ADVANCE(144);
      if (lookahead == 'S') ADVANCE(110);
      if (lookahead == 'T') ADVANCE(122);
      if (lookahead == 'W') ADVANCE(123);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(13);
      if (('C' <= lookahead && lookahead <= 'Z')) ADVANCE(149);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      if (lookahead != 0) ADVANCE(64);
      END_STATE();
    case 14:
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == 'A') ADVANCE(44);
      if (lookahead == 'B') ADVANCE(20);
      if (lookahead == 'E') ADVANCE(62);
      if (lookahead == 'F') ADVANCE(29);
      if (lookahead == 'G') ADVANCE(38);
      if (lookahead == 'R') ADVANCE(58);
      if (lookahead == 'S') ADVANCE(24);
      if (lookahead == 'T') ADVANCE(36);
      if (lookahead == 'W') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(14);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(7);
      if (lookahead != 0 &&
          (lookahead < 'C' || 'Z' < lookahead)) ADVANCE(64);
      END_STATE();
    case 15:
      if (lookahead == ':') ADVANCE(84);
      END_STATE();
    case 16:
      if (lookahead == ':') ADVANCE(86);
      END_STATE();
    case 17:
      if (lookahead == ':') ADVANCE(69);
      END_STATE();
    case 18:
      if (lookahead == ':') ADVANCE(85);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(43);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(23);
      if (lookahead == 'u') ADVANCE(57);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(56);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(54);
      END_STATE();
    case 23:
      if (lookahead == 'c') ADVANCE(40);
      END_STATE();
    case 24:
      if (lookahead == 'c') ADVANCE(28);
      END_STATE();
    case 25:
      if (lookahead == 'd') ADVANCE(8);
      END_STATE();
    case 26:
      if (lookahead == 'd') ADVANCE(18);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(15);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(21);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(16);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(17);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 35:
      if (lookahead == 'g') ADVANCE(53);
      END_STATE();
    case 36:
      if (lookahead == 'h') ADVANCE(31);
      END_STATE();
    case 37:
      if (lookahead == 'h') ADVANCE(33);
      END_STATE();
    case 38:
      if (lookahead == 'i') ADVANCE(61);
      END_STATE();
    case 39:
      if (lookahead == 'i') ADVANCE(50);
      END_STATE();
    case 40:
      if (lookahead == 'k') ADVANCE(35);
      END_STATE();
    case 41:
      if (lookahead == 'l') ADVANCE(27);
      END_STATE();
    case 42:
      if (lookahead == 'l') ADVANCE(30);
      END_STATE();
    case 43:
      if (lookahead == 'm') ADVANCE(52);
      END_STATE();
    case 44:
      if (lookahead == 'n') ADVANCE(25);
      END_STATE();
    case 45:
      if (lookahead == 'n') ADVANCE(26);
      END_STATE();
    case 46:
      if (lookahead == 'n') ADVANCE(22);
      END_STATE();
    case 47:
      if (lookahead == 'n') ADVANCE(10);
      END_STATE();
    case 48:
      if (lookahead == 'n') ADVANCE(11);
      END_STATE();
    case 49:
      if (lookahead == 'n') ADVANCE(12);
      END_STATE();
    case 50:
      if (lookahead == 'o') ADVANCE(16);
      END_STATE();
    case 51:
      if (lookahead == 'o') ADVANCE(60);
      END_STATE();
    case 52:
      if (lookahead == 'p') ADVANCE(42);
      END_STATE();
    case 53:
      if (lookahead == 'r') ADVANCE(51);
      END_STATE();
    case 54:
      if (lookahead == 'r') ADVANCE(39);
      END_STATE();
    case 55:
      if (lookahead == 'r') ADVANCE(32);
      END_STATE();
    case 56:
      if (lookahead == 't') ADVANCE(59);
      END_STATE();
    case 57:
      if (lookahead == 't') ADVANCE(9);
      END_STATE();
    case 58:
      if (lookahead == 'u') ADVANCE(41);
      END_STATE();
    case 59:
      if (lookahead == 'u') ADVANCE(55);
      END_STATE();
    case 60:
      if (lookahead == 'u') ADVANCE(45);
      END_STATE();
    case 61:
      if (lookahead == 'v') ADVANCE(34);
      END_STATE();
    case 62:
      if (lookahead == 'x') ADVANCE(19);
      END_STATE();
    case 63:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(63)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(66);
      END_STATE();
    case 64:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 65:
      if (lookahead == ' ' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1);
      END_STATE();
    case 66:
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3);
      END_STATE();
    case 67:
      if (eof) ADVANCE(68);
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == 'A') ADVANCE(44);
      if (lookahead == 'B') ADVANCE(20);
      if (lookahead == 'E') ADVANCE(62);
      if (lookahead == 'F') ADVANCE(29);
      if (lookahead == 'G') ADVANCE(38);
      if (lookahead == 'R') ADVANCE(58);
      if (lookahead == 'S') ADVANCE(24);
      if (lookahead == 'T') ADVANCE(36);
      if (lookahead == 'W') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(14);
      if (lookahead != 0 &&
          (lookahead < 'C' || 'Z' < lookahead)) ADVANCE(64);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_feature_keyword);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_title);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_description_token1);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == '\n') ADVANCE(81);
      if (lookahead == 'B') ADVANCE(75);
      if (lookahead == 'E') ADVANCE(80);
      if (lookahead == 'R') ADVANCE(79);
      if (lookahead == 'S') ADVANCE(76);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(72);
      if (lookahead != 0) ADVANCE(71);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == '\n') ADVANCE(82);
      if (lookahead == 'B') ADVANCE(75);
      if (lookahead == 'E') ADVANCE(80);
      if (lookahead == 'S') ADVANCE(76);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(73);
      if (lookahead != 0) ADVANCE(71);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == '\n') ADVANCE(83);
      if (lookahead == 'G') ADVANCE(78);
      if (lookahead == 'W') ADVANCE(77);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(74);
      if (lookahead != 0) ADVANCE(71);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == 'a') ADVANCE(23);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == 'c') ADVANCE(28);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == 'h') ADVANCE(33);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == 'i') ADVANCE(61);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == 'u') ADVANCE(41);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == 'x') ADVANCE(19);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(81);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(72);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(82);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(73);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(74);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_rule_keyword);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_background_keyword);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_scenario_keyword);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_given_keyword);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_when_keyword);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_then_keyword);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_and_keyword);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_but_keyword);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_asterisk_keyword);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_step_definition);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_alpha_word);
      if (lookahead == '\n') ADVANCE(93);
      if (lookahead == ' ') ADVANCE(1);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_alpha_word);
      if (lookahead == ' ') ADVANCE(1);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_alpha_word);
      if (lookahead == ' ') ADVANCE(90);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_alpha_word);
      if (lookahead == ' ') ADVANCE(91);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_alpha_word);
      if (lookahead == ' ') ADVANCE(89);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_alpha_word);
      if (lookahead == ' ') ADVANCE(88);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_alpha_word);
      if (lookahead == ' ') ADVANCE(87);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_alpha_word);
      if (lookahead == ':') ADVANCE(84);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_alpha_word);
      if (lookahead == ':') ADVANCE(86);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_alpha_word);
      if (lookahead == ':') ADVANCE(69);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_alpha_word);
      if (lookahead == ':') ADVANCE(85);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_alpha_word);
      if (lookahead == 'a') ADVANCE(129);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_alpha_word);
      if (lookahead == 'a') ADVANCE(109);
      if (lookahead == 'u') ADVANCE(143);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_alpha_word);
      if (lookahead == 'a') ADVANCE(142);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_alpha_word);
      if (lookahead == 'a') ADVANCE(140);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_alpha_word);
      if (lookahead == 'c') ADVANCE(126);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_alpha_word);
      if (lookahead == 'c') ADVANCE(114);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_alpha_word);
      if (lookahead == 'd') ADVANCE(96);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_alpha_word);
      if (lookahead == 'd') ADVANCE(104);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_alpha_word);
      if (lookahead == 'e') ADVANCE(101);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_alpha_word);
      if (lookahead == 'e') ADVANCE(132);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_alpha_word);
      if (lookahead == 'e') ADVANCE(107);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_alpha_word);
      if (lookahead == 'e') ADVANCE(102);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_alpha_word);
      if (lookahead == 'e') ADVANCE(133);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_alpha_word);
      if (lookahead == 'e') ADVANCE(103);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_alpha_word);
      if (lookahead == 'e') ADVANCE(134);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_alpha_word);
      if (lookahead == 'e') ADVANCE(135);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_alpha_word);
      if (lookahead == 'g') ADVANCE(139);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_alpha_word);
      if (lookahead == 'h') ADVANCE(117);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_alpha_word);
      if (lookahead == 'h') ADVANCE(119);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_alpha_word);
      if (lookahead == 'i') ADVANCE(147);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_alpha_word);
      if (lookahead == 'i') ADVANCE(136);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_alpha_word);
      if (lookahead == 'k') ADVANCE(121);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_alpha_word);
      if (lookahead == 'l') ADVANCE(113);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_alpha_word);
      if (lookahead == 'l') ADVANCE(116);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_alpha_word);
      if (lookahead == 'm') ADVANCE(138);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_alpha_word);
      if (lookahead == 'n') ADVANCE(111);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_alpha_word);
      if (lookahead == 'n') ADVANCE(112);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_alpha_word);
      if (lookahead == 'n') ADVANCE(108);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_alpha_word);
      if (lookahead == 'n') ADVANCE(98);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_alpha_word);
      if (lookahead == 'n') ADVANCE(99);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_alpha_word);
      if (lookahead == 'n') ADVANCE(100);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_alpha_word);
      if (lookahead == 'o') ADVANCE(102);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_alpha_word);
      if (lookahead == 'o') ADVANCE(146);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_alpha_word);
      if (lookahead == 'p') ADVANCE(128);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_alpha_word);
      if (lookahead == 'r') ADVANCE(137);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_alpha_word);
      if (lookahead == 'r') ADVANCE(125);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_alpha_word);
      if (lookahead == 'r') ADVANCE(118);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_alpha_word);
      if (lookahead == 't') ADVANCE(145);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_alpha_word);
      if (lookahead == 't') ADVANCE(97);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_alpha_word);
      if (lookahead == 'u') ADVANCE(127);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_alpha_word);
      if (lookahead == 'u') ADVANCE(141);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_alpha_word);
      if (lookahead == 'u') ADVANCE(131);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_alpha_word);
      if (lookahead == 'v') ADVANCE(120);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_alpha_word);
      if (lookahead == 'x') ADVANCE(105);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_alpha_word);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_alpha_word);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
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
  [1] = {.lex_state = 67},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 67},
  [4] = {.lex_state = 67},
  [5] = {.lex_state = 67},
  [6] = {.lex_state = 4},
  [7] = {.lex_state = 67},
  [8] = {.lex_state = 67},
  [9] = {.lex_state = 5},
  [10] = {.lex_state = 67},
  [11] = {.lex_state = 67},
  [12] = {.lex_state = 67},
  [13] = {.lex_state = 67},
  [14] = {.lex_state = 67},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 67},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 67},
  [19] = {.lex_state = 5},
  [20] = {.lex_state = 4},
  [21] = {.lex_state = 67},
  [22] = {.lex_state = 4},
  [23] = {.lex_state = 5},
  [24] = {.lex_state = 67},
  [25] = {.lex_state = 67},
  [26] = {.lex_state = 67},
  [27] = {.lex_state = 67},
  [28] = {.lex_state = 67},
  [29] = {.lex_state = 67},
  [30] = {.lex_state = 67},
  [31] = {.lex_state = 67},
  [32] = {.lex_state = 67},
  [33] = {.lex_state = 67},
  [34] = {.lex_state = 67},
  [35] = {.lex_state = 67},
  [36] = {.lex_state = 67},
  [37] = {.lex_state = 67},
  [38] = {.lex_state = 67},
  [39] = {.lex_state = 63},
  [40] = {.lex_state = 67},
  [41] = {.lex_state = 67},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 67},
  [44] = {.lex_state = 67},
  [45] = {.lex_state = 67},
  [46] = {.lex_state = 67},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 63},
  [49] = {.lex_state = 67},
  [50] = {.lex_state = 63},
  [51] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_alpha_word] = ACTIONS(1),
    [sym_feature_keyword] = ACTIONS(1),
    [sym_rule_keyword] = ACTIONS(1),
    [sym_background_keyword] = ACTIONS(1),
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
    [sym_feature] = STATE(51),
    [sym_feature_keyword] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(7), 1,
      sym_rule_keyword,
    ACTIONS(9), 1,
      sym_background_keyword,
    ACTIONS(11), 1,
      sym_scenario_keyword,
    STATE(7), 1,
      sym_description,
    STATE(15), 1,
      aux_sym_description_repeat1,
    STATE(31), 1,
      sym_background,
    ACTIONS(5), 2,
      aux_sym_description_token1,
      anon_sym_LF,
    STATE(21), 2,
      sym_scenario,
      aux_sym_scenarios_repeat1,
    STATE(26), 2,
      sym_rule,
      aux_sym_rules_repeat1,
    STATE(47), 2,
      sym_rules,
      sym_scenarios,
  [35] = 5,
    ACTIONS(15), 1,
      sym_then_keyword,
    STATE(46), 1,
      sym_additional_step_keyword,
    ACTIONS(13), 3,
      ts_builtin_sym_end,
      sym_rule_keyword,
      sym_scenario_keyword,
    ACTIONS(18), 3,
      sym_and_keyword,
      sym_but_keyword,
      sym_asterisk_keyword,
    STATE(3), 3,
      sym_then_step,
      sym_additional_step,
      aux_sym_then_steps_repeat1,
  [57] = 5,
    ACTIONS(23), 1,
      sym_then_keyword,
    STATE(46), 1,
      sym_additional_step_keyword,
    ACTIONS(21), 3,
      ts_builtin_sym_end,
      sym_rule_keyword,
      sym_scenario_keyword,
    ACTIONS(25), 3,
      sym_and_keyword,
      sym_but_keyword,
      sym_asterisk_keyword,
    STATE(5), 3,
      sym_then_step,
      sym_additional_step,
      aux_sym_then_steps_repeat1,
  [79] = 5,
    ACTIONS(23), 1,
      sym_then_keyword,
    STATE(46), 1,
      sym_additional_step_keyword,
    ACTIONS(25), 3,
      sym_and_keyword,
      sym_but_keyword,
      sym_asterisk_keyword,
    ACTIONS(27), 3,
      ts_builtin_sym_end,
      sym_rule_keyword,
      sym_scenario_keyword,
    STATE(3), 3,
      sym_then_step,
      sym_additional_step,
      aux_sym_then_steps_repeat1,
  [101] = 8,
    ACTIONS(9), 1,
      sym_background_keyword,
    ACTIONS(11), 1,
      sym_scenario_keyword,
    STATE(18), 1,
      sym_description,
    STATE(20), 1,
      aux_sym_description_repeat1,
    STATE(31), 1,
      sym_background,
    STATE(36), 1,
      sym_scenarios,
    ACTIONS(29), 2,
      aux_sym_description_token1,
      anon_sym_LF,
    STATE(21), 2,
      sym_scenario,
      aux_sym_scenarios_repeat1,
  [128] = 7,
    ACTIONS(31), 1,
      sym_rule_keyword,
    ACTIONS(33), 1,
      sym_background_keyword,
    ACTIONS(35), 1,
      sym_scenario_keyword,
    STATE(31), 1,
      sym_background,
    STATE(21), 2,
      sym_scenario,
      aux_sym_scenarios_repeat1,
    STATE(26), 2,
      sym_rule,
      aux_sym_rules_repeat1,
    STATE(42), 2,
      sym_rules,
      sym_scenarios,
  [153] = 5,
    ACTIONS(39), 1,
      sym_given_keyword,
    STATE(46), 1,
      sym_additional_step_keyword,
    ACTIONS(37), 2,
      sym_scenario_keyword,
      sym_when_keyword,
    ACTIONS(25), 3,
      sym_and_keyword,
      sym_but_keyword,
      sym_asterisk_keyword,
    STATE(11), 3,
      sym_given_step,
      sym_additional_step,
      aux_sym_given_steps_repeat1,
  [174] = 9,
    ACTIONS(43), 1,
      sym_given_keyword,
    ACTIONS(45), 1,
      sym_when_keyword,
    STATE(8), 1,
      sym_given_step,
    STATE(16), 1,
      sym_description,
    STATE(23), 1,
      aux_sym_description_repeat1,
    STATE(32), 1,
      sym_steps,
    STATE(34), 1,
      sym_when_step,
    STATE(38), 1,
      sym_given_steps,
    ACTIONS(41), 2,
      aux_sym_description_token1,
      anon_sym_LF,
  [203] = 5,
    ACTIONS(49), 1,
      sym_given_keyword,
    STATE(46), 1,
      sym_additional_step_keyword,
    ACTIONS(47), 2,
      sym_scenario_keyword,
      sym_when_keyword,
    ACTIONS(52), 3,
      sym_and_keyword,
      sym_but_keyword,
      sym_asterisk_keyword,
    STATE(10), 3,
      sym_given_step,
      sym_additional_step,
      aux_sym_given_steps_repeat1,
  [224] = 5,
    ACTIONS(39), 1,
      sym_given_keyword,
    STATE(46), 1,
      sym_additional_step_keyword,
    ACTIONS(55), 2,
      sym_scenario_keyword,
      sym_when_keyword,
    ACTIONS(25), 3,
      sym_and_keyword,
      sym_but_keyword,
      sym_asterisk_keyword,
    STATE(10), 3,
      sym_given_step,
      sym_additional_step,
      aux_sym_given_steps_repeat1,
  [245] = 1,
    ACTIONS(57), 9,
      ts_builtin_sym_end,
      sym_rule_keyword,
      sym_scenario_keyword,
      sym_given_keyword,
      sym_when_keyword,
      sym_then_keyword,
      sym_and_keyword,
      sym_but_keyword,
      sym_asterisk_keyword,
  [257] = 1,
    ACTIONS(59), 7,
      ts_builtin_sym_end,
      sym_rule_keyword,
      sym_scenario_keyword,
      sym_then_keyword,
      sym_and_keyword,
      sym_but_keyword,
      sym_asterisk_keyword,
  [267] = 1,
    ACTIONS(61), 6,
      sym_scenario_keyword,
      sym_given_keyword,
      sym_when_keyword,
      sym_and_keyword,
      sym_but_keyword,
      sym_asterisk_keyword,
  [276] = 3,
    STATE(17), 1,
      aux_sym_description_repeat1,
    ACTIONS(63), 2,
      aux_sym_description_token1,
      anon_sym_LF,
    ACTIONS(65), 3,
      sym_rule_keyword,
      sym_background_keyword,
      sym_scenario_keyword,
  [289] = 6,
    ACTIONS(39), 1,
      sym_given_keyword,
    ACTIONS(67), 1,
      sym_when_keyword,
    STATE(8), 1,
      sym_given_step,
    STATE(29), 1,
      sym_steps,
    STATE(34), 1,
      sym_when_step,
    STATE(38), 1,
      sym_given_steps,
  [308] = 3,
    STATE(17), 1,
      aux_sym_description_repeat1,
    ACTIONS(69), 2,
      aux_sym_description_token1,
      anon_sym_LF,
    ACTIONS(72), 3,
      sym_rule_keyword,
      sym_background_keyword,
      sym_scenario_keyword,
  [321] = 5,
    ACTIONS(33), 1,
      sym_background_keyword,
    ACTIONS(35), 1,
      sym_scenario_keyword,
    STATE(31), 1,
      sym_background,
    STATE(37), 1,
      sym_scenarios,
    STATE(21), 2,
      sym_scenario,
      aux_sym_scenarios_repeat1,
  [338] = 3,
    STATE(19), 1,
      aux_sym_description_repeat1,
    ACTIONS(72), 2,
      sym_given_keyword,
      sym_when_keyword,
    ACTIONS(74), 2,
      aux_sym_description_token1,
      anon_sym_LF,
  [350] = 3,
    STATE(22), 1,
      aux_sym_description_repeat1,
    ACTIONS(65), 2,
      sym_background_keyword,
      sym_scenario_keyword,
    ACTIONS(77), 2,
      aux_sym_description_token1,
      anon_sym_LF,
  [362] = 3,
    ACTIONS(35), 1,
      sym_scenario_keyword,
    ACTIONS(79), 2,
      ts_builtin_sym_end,
      sym_rule_keyword,
    STATE(25), 2,
      sym_scenario,
      aux_sym_scenarios_repeat1,
  [374] = 3,
    STATE(22), 1,
      aux_sym_description_repeat1,
    ACTIONS(72), 2,
      sym_background_keyword,
      sym_scenario_keyword,
    ACTIONS(81), 2,
      aux_sym_description_token1,
      anon_sym_LF,
  [386] = 3,
    STATE(19), 1,
      aux_sym_description_repeat1,
    ACTIONS(65), 2,
      sym_given_keyword,
      sym_when_keyword,
    ACTIONS(84), 2,
      aux_sym_description_token1,
      anon_sym_LF,
  [398] = 3,
    ACTIONS(35), 1,
      sym_scenario_keyword,
    ACTIONS(86), 2,
      ts_builtin_sym_end,
      sym_rule_keyword,
    STATE(25), 2,
      sym_scenario,
      aux_sym_scenarios_repeat1,
  [410] = 3,
    ACTIONS(90), 1,
      sym_scenario_keyword,
    ACTIONS(88), 2,
      ts_builtin_sym_end,
      sym_rule_keyword,
    STATE(25), 2,
      sym_scenario,
      aux_sym_scenarios_repeat1,
  [422] = 3,
    ACTIONS(31), 1,
      sym_rule_keyword,
    ACTIONS(93), 1,
      ts_builtin_sym_end,
    STATE(27), 2,
      sym_rule,
      aux_sym_rules_repeat1,
  [433] = 3,
    ACTIONS(95), 1,
      ts_builtin_sym_end,
    ACTIONS(97), 1,
      sym_rule_keyword,
    STATE(27), 2,
      sym_rule,
      aux_sym_rules_repeat1,
  [444] = 3,
    ACTIONS(23), 1,
      sym_then_keyword,
    STATE(4), 1,
      sym_then_step,
    STATE(33), 1,
      sym_then_steps,
  [454] = 1,
    ACTIONS(100), 3,
      ts_builtin_sym_end,
      sym_rule_keyword,
      sym_scenario_keyword,
  [460] = 3,
    ACTIONS(39), 1,
      sym_given_keyword,
    STATE(8), 1,
      sym_given_step,
    STATE(44), 1,
      sym_given_steps,
  [470] = 2,
    ACTIONS(35), 1,
      sym_scenario_keyword,
    STATE(24), 2,
      sym_scenario,
      aux_sym_scenarios_repeat1,
  [478] = 1,
    ACTIONS(102), 3,
      ts_builtin_sym_end,
      sym_rule_keyword,
      sym_scenario_keyword,
  [484] = 1,
    ACTIONS(104), 3,
      ts_builtin_sym_end,
      sym_rule_keyword,
      sym_scenario_keyword,
  [490] = 3,
    ACTIONS(23), 1,
      sym_then_keyword,
    STATE(4), 1,
      sym_then_step,
    STATE(35), 1,
      sym_then_steps,
  [500] = 1,
    ACTIONS(106), 3,
      ts_builtin_sym_end,
      sym_rule_keyword,
      sym_scenario_keyword,
  [506] = 1,
    ACTIONS(108), 2,
      ts_builtin_sym_end,
      sym_rule_keyword,
  [511] = 1,
    ACTIONS(110), 2,
      ts_builtin_sym_end,
      sym_rule_keyword,
  [516] = 2,
    ACTIONS(67), 1,
      sym_when_keyword,
    STATE(28), 1,
      sym_when_step,
  [523] = 1,
    ACTIONS(112), 1,
      sym_title,
  [527] = 1,
    ACTIONS(114), 1,
      sym_then_keyword,
  [531] = 1,
    ACTIONS(116), 1,
      sym_step_definition,
  [535] = 1,
    ACTIONS(118), 1,
      ts_builtin_sym_end,
  [539] = 1,
    ACTIONS(120), 1,
      sym_step_definition,
  [543] = 1,
    ACTIONS(122), 1,
      sym_scenario_keyword,
  [547] = 1,
    ACTIONS(124), 1,
      sym_step_definition,
  [551] = 1,
    ACTIONS(126), 1,
      sym_step_definition,
  [555] = 1,
    ACTIONS(128), 1,
      ts_builtin_sym_end,
  [559] = 1,
    ACTIONS(130), 1,
      sym_title,
  [563] = 1,
    ACTIONS(132), 1,
      sym_step_definition,
  [567] = 1,
    ACTIONS(134), 1,
      sym_title,
  [571] = 1,
    ACTIONS(136), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 35,
  [SMALL_STATE(4)] = 57,
  [SMALL_STATE(5)] = 79,
  [SMALL_STATE(6)] = 101,
  [SMALL_STATE(7)] = 128,
  [SMALL_STATE(8)] = 153,
  [SMALL_STATE(9)] = 174,
  [SMALL_STATE(10)] = 203,
  [SMALL_STATE(11)] = 224,
  [SMALL_STATE(12)] = 245,
  [SMALL_STATE(13)] = 257,
  [SMALL_STATE(14)] = 267,
  [SMALL_STATE(15)] = 276,
  [SMALL_STATE(16)] = 289,
  [SMALL_STATE(17)] = 308,
  [SMALL_STATE(18)] = 321,
  [SMALL_STATE(19)] = 338,
  [SMALL_STATE(20)] = 350,
  [SMALL_STATE(21)] = 362,
  [SMALL_STATE(22)] = 374,
  [SMALL_STATE(23)] = 386,
  [SMALL_STATE(24)] = 398,
  [SMALL_STATE(25)] = 410,
  [SMALL_STATE(26)] = 422,
  [SMALL_STATE(27)] = 433,
  [SMALL_STATE(28)] = 444,
  [SMALL_STATE(29)] = 454,
  [SMALL_STATE(30)] = 460,
  [SMALL_STATE(31)] = 470,
  [SMALL_STATE(32)] = 478,
  [SMALL_STATE(33)] = 484,
  [SMALL_STATE(34)] = 490,
  [SMALL_STATE(35)] = 500,
  [SMALL_STATE(36)] = 506,
  [SMALL_STATE(37)] = 511,
  [SMALL_STATE(38)] = 516,
  [SMALL_STATE(39)] = 523,
  [SMALL_STATE(40)] = 527,
  [SMALL_STATE(41)] = 531,
  [SMALL_STATE(42)] = 535,
  [SMALL_STATE(43)] = 539,
  [SMALL_STATE(44)] = 543,
  [SMALL_STATE(45)] = 547,
  [SMALL_STATE(46)] = 551,
  [SMALL_STATE(47)] = 555,
  [SMALL_STATE(48)] = 559,
  [SMALL_STATE(49)] = 563,
  [SMALL_STATE(50)] = 567,
  [SMALL_STATE(51)] = 571,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_then_steps_repeat1, 2),
  [15] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_then_steps_repeat1, 2), SHIFT_REPEAT(43),
  [18] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_then_steps_repeat1, 2), SHIFT_REPEAT(41),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_then_steps, 1),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_then_steps, 2),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_given_steps, 1),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_given_steps_repeat1, 2),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_given_steps_repeat1, 2), SHIFT_REPEAT(45),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_given_steps_repeat1, 2), SHIFT_REPEAT(41),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_given_steps, 2),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_additional_step, 2),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_then_step, 2),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_given_step, 2),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_description, 1),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(17),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_description_repeat1, 2),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(19),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scenarios, 1),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(22),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scenarios, 2),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_scenarios_repeat1, 2),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scenarios_repeat1, 2), SHIFT_REPEAT(48),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rules, 1),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rules_repeat1, 2),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rules_repeat1, 2), SHIFT_REPEAT(50),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scenario, 4),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scenario, 3),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_steps, 3),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_steps, 2),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 3),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 4),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_when_step, 2),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_additional_step_keyword, 1),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_feature, 4),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 2),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_feature, 3),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [136] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
