#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 55
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 38
#define ALIAS_COUNT 0
#define TOKEN_COUNT 18
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum {
  sym__alpha_word = 1,
  sym_feature_keyword = 2,
  sym_title = 3,
  aux_sym_description_token1 = 4,
  aux_sym_description_token2 = 5,
  anon_sym_LF = 6,
  sym_rule_keyword = 7,
  sym_background_keyword = 8,
  sym_scenario_keyword = 9,
  sym_given_keyword = 10,
  sym_when_keyword = 11,
  sym_then_keyword = 12,
  sym_and_keyword = 13,
  sym_but_keyword = 14,
  sym_asterisk_keyword = 15,
  sym_step_definition = 16,
  sym_comment = 17,
  sym_feature = 18,
  sym_description = 19,
  sym_rules = 20,
  sym_rule = 21,
  sym_scenarios = 22,
  sym_background = 23,
  sym_scenario = 24,
  sym_steps = 25,
  sym_given_steps = 26,
  sym_then_steps = 27,
  sym_given_step = 28,
  sym_when_step = 29,
  sym_then_step = 30,
  sym_additional_step = 31,
  sym_additional_step_keyword = 32,
  aux_sym_description_repeat1 = 33,
  aux_sym_rules_repeat1 = 34,
  aux_sym_scenarios_repeat1 = 35,
  aux_sym_given_steps_repeat1 = 36,
  aux_sym_then_steps_repeat1 = 37,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__alpha_word] = "_alpha_word",
  [sym_feature_keyword] = "feature_keyword",
  [sym_title] = "title",
  [aux_sym_description_token1] = "description_token1",
  [aux_sym_description_token2] = "description_token2",
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
  [sym_comment] = "comment",
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
  [sym__alpha_word] = sym__alpha_word,
  [sym_feature_keyword] = sym_feature_keyword,
  [sym_title] = sym_title,
  [aux_sym_description_token1] = aux_sym_description_token1,
  [aux_sym_description_token2] = aux_sym_description_token2,
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
  [sym_comment] = sym_comment,
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
  [sym__alpha_word] = {
    .visible = false,
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
  [aux_sym_description_token2] = {
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
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 18,
  [23] = 16,
  [24] = 18,
  [25] = 16,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 29,
  [31] = 29,
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
  [52] = 52,
  [53] = 53,
  [54] = 54,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(70);
      if (lookahead == '#') ADVANCE(147);
      if (lookahead == 'B') ADVANCE(74);
      if (lookahead == 'E') ADVANCE(84);
      if (lookahead == 'G') ADVANCE(80);
      if (lookahead == 'R') ADVANCE(82);
      if (lookahead == 'S') ADVANCE(76);
      if (lookahead == 'W') ADVANCE(78);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      if (lookahead != 0) ADVANCE(73);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(98);
      if (lookahead == '#') ADVANCE(147);
      if (lookahead == 'B') ADVANCE(92);
      if (lookahead == 'E') ADVANCE(97);
      if (lookahead == 'R') ADVANCE(96);
      if (lookahead == 'S') ADVANCE(93);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(88);
      if (lookahead != 0) ADVANCE(87);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(99);
      if (lookahead == '#') ADVANCE(147);
      if (lookahead == 'G') ADVANCE(95);
      if (lookahead == 'W') ADVANCE(94);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(89);
      if (lookahead != 0) ADVANCE(87);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(100);
      if (lookahead == '#') ADVANCE(147);
      if (lookahead == 'B') ADVANCE(92);
      if (lookahead == 'E') ADVANCE(97);
      if (lookahead == 'S') ADVANCE(93);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(90);
      if (lookahead != 0) ADVANCE(87);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(101);
      if (lookahead == '#') ADVANCE(147);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(91);
      if (lookahead != 0) ADVANCE(87);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(106);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(105);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(110);
      END_STATE();
    case 8:
      if (lookahead == ' ') ADVANCE(108);
      END_STATE();
    case 9:
      if (lookahead == ' ') ADVANCE(109);
      END_STATE();
    case 10:
      if (lookahead == ' ') ADVANCE(107);
      END_STATE();
    case 11:
      if (lookahead == ' ') ADVANCE(112);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 12:
      if (lookahead == '#') ADVANCE(147);
      if (lookahead == 'B') ADVANCE(75);
      if (lookahead == 'E') ADVANCE(85);
      if (lookahead == 'R') ADVANCE(83);
      if (lookahead == 'S') ADVANCE(77);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (lookahead != 0) ADVANCE(73);
      END_STATE();
    case 13:
      if (lookahead == '#') ADVANCE(147);
      if (lookahead == 'B') ADVANCE(75);
      if (lookahead == 'E') ADVANCE(85);
      if (lookahead == 'S') ADVANCE(77);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (lookahead != 0) ADVANCE(73);
      END_STATE();
    case 14:
      if (lookahead == '#') ADVANCE(147);
      if (lookahead == 'G') ADVANCE(81);
      if (lookahead == 'W') ADVANCE(79);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (lookahead != 0) ADVANCE(73);
      END_STATE();
    case 15:
      if (lookahead == '#') ADVANCE(147);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(68);
      END_STATE();
    case 16:
      if (lookahead == '#') ADVANCE(145);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(16);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(11);
      if (lookahead != 0 &&
          (lookahead < 'A' || 'Z' < lookahead)) ADVANCE(66);
      END_STATE();
    case 17:
      if (lookahead == '#') ADVANCE(145);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(16);
      if (lookahead != 0 &&
          (lookahead < 'A' || 'Z' < lookahead)) ADVANCE(66);
      END_STATE();
    case 18:
      if (lookahead == ':') ADVANCE(102);
      END_STATE();
    case 19:
      if (lookahead == ':') ADVANCE(104);
      END_STATE();
    case 20:
      if (lookahead == ':') ADVANCE(103);
      END_STATE();
    case 21:
      if (lookahead == ':') ADVANCE(71);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(46);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(26);
      if (lookahead == 'u') ADVANCE(60);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(59);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(57);
      END_STATE();
    case 26:
      if (lookahead == 'c') ADVANCE(43);
      END_STATE();
    case 27:
      if (lookahead == 'c') ADVANCE(31);
      END_STATE();
    case 28:
      if (lookahead == 'd') ADVANCE(8);
      END_STATE();
    case 29:
      if (lookahead == 'd') ADVANCE(20);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(24);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(19);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(21);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 38:
      if (lookahead == 'g') ADVANCE(56);
      END_STATE();
    case 39:
      if (lookahead == 'h') ADVANCE(34);
      END_STATE();
    case 40:
      if (lookahead == 'h') ADVANCE(36);
      END_STATE();
    case 41:
      if (lookahead == 'i') ADVANCE(64);
      END_STATE();
    case 42:
      if (lookahead == 'i') ADVANCE(53);
      END_STATE();
    case 43:
      if (lookahead == 'k') ADVANCE(38);
      END_STATE();
    case 44:
      if (lookahead == 'l') ADVANCE(30);
      END_STATE();
    case 45:
      if (lookahead == 'l') ADVANCE(33);
      END_STATE();
    case 46:
      if (lookahead == 'm') ADVANCE(55);
      END_STATE();
    case 47:
      if (lookahead == 'n') ADVANCE(28);
      END_STATE();
    case 48:
      if (lookahead == 'n') ADVANCE(29);
      END_STATE();
    case 49:
      if (lookahead == 'n') ADVANCE(25);
      END_STATE();
    case 50:
      if (lookahead == 'n') ADVANCE(10);
      END_STATE();
    case 51:
      if (lookahead == 'n') ADVANCE(5);
      END_STATE();
    case 52:
      if (lookahead == 'n') ADVANCE(6);
      END_STATE();
    case 53:
      if (lookahead == 'o') ADVANCE(19);
      END_STATE();
    case 54:
      if (lookahead == 'o') ADVANCE(63);
      END_STATE();
    case 55:
      if (lookahead == 'p') ADVANCE(45);
      END_STATE();
    case 56:
      if (lookahead == 'r') ADVANCE(54);
      END_STATE();
    case 57:
      if (lookahead == 'r') ADVANCE(42);
      END_STATE();
    case 58:
      if (lookahead == 'r') ADVANCE(35);
      END_STATE();
    case 59:
      if (lookahead == 't') ADVANCE(62);
      END_STATE();
    case 60:
      if (lookahead == 't') ADVANCE(9);
      END_STATE();
    case 61:
      if (lookahead == 'u') ADVANCE(44);
      END_STATE();
    case 62:
      if (lookahead == 'u') ADVANCE(58);
      END_STATE();
    case 63:
      if (lookahead == 'u') ADVANCE(48);
      END_STATE();
    case 64:
      if (lookahead == 'v') ADVANCE(37);
      END_STATE();
    case 65:
      if (lookahead == 'x') ADVANCE(22);
      END_STATE();
    case 66:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 67:
      if (lookahead == ' ' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 68:
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 69:
      if (eof) ADVANCE(70);
      if (lookahead == '#') ADVANCE(147);
      if (lookahead == '*') ADVANCE(7);
      if (lookahead == 'A') ADVANCE(47);
      if (lookahead == 'B') ADVANCE(23);
      if (lookahead == 'E') ADVANCE(65);
      if (lookahead == 'F') ADVANCE(32);
      if (lookahead == 'G') ADVANCE(41);
      if (lookahead == 'R') ADVANCE(61);
      if (lookahead == 'S') ADVANCE(27);
      if (lookahead == 'T') ADVANCE(39);
      if (lookahead == 'W') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(69)
      END_STATE();
    case 70:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_feature_keyword);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_title);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_description_token1);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == 'a') ADVANCE(120);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == 'a') ADVANCE(26);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == 'c') ADVANCE(122);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == 'c') ADVANCE(31);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == 'h') ADVANCE(124);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == 'h') ADVANCE(36);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == 'i') ADVANCE(143);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == 'i') ADVANCE(64);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == 'u') ADVANCE(130);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == 'u') ADVANCE(44);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == 'x') ADVANCE(118);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == 'x') ADVANCE(22);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_description_token2);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_description_token2);
      if (lookahead == '\n') ADVANCE(98);
      if (lookahead == 'B') ADVANCE(92);
      if (lookahead == 'E') ADVANCE(97);
      if (lookahead == 'R') ADVANCE(96);
      if (lookahead == 'S') ADVANCE(93);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(88);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(87);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_description_token2);
      if (lookahead == '\n') ADVANCE(99);
      if (lookahead == 'G') ADVANCE(95);
      if (lookahead == 'W') ADVANCE(94);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(89);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(87);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_description_token2);
      if (lookahead == '\n') ADVANCE(100);
      if (lookahead == 'B') ADVANCE(92);
      if (lookahead == 'E') ADVANCE(97);
      if (lookahead == 'S') ADVANCE(93);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(87);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_description_token2);
      if (lookahead == '\n') ADVANCE(101);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(87);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_description_token2);
      if (lookahead == 'a') ADVANCE(26);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_description_token2);
      if (lookahead == 'c') ADVANCE(31);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_description_token2);
      if (lookahead == 'h') ADVANCE(36);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_description_token2);
      if (lookahead == 'i') ADVANCE(64);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_description_token2);
      if (lookahead == 'u') ADVANCE(44);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_description_token2);
      if (lookahead == 'x') ADVANCE(22);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(98);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(88);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(99);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(89);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(100);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(90);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(101);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(91);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_rule_keyword);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_background_keyword);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_scenario_keyword);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_given_keyword);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_when_keyword);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_then_keyword);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_and_keyword);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_but_keyword);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_asterisk_keyword);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_step_definition);
      if (lookahead == ' ' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(147);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_step_definition);
      if (lookahead == ' ' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym__alpha_word);
      if (lookahead == ' ') ADVANCE(106);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym__alpha_word);
      if (lookahead == ' ') ADVANCE(105);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym__alpha_word);
      if (lookahead == ':') ADVANCE(102);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym__alpha_word);
      if (lookahead == ':') ADVANCE(104);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym__alpha_word);
      if (lookahead == ':') ADVANCE(103);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym__alpha_word);
      if (lookahead == 'a') ADVANCE(132);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym__alpha_word);
      if (lookahead == 'a') ADVANCE(141);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym__alpha_word);
      if (lookahead == 'c') ADVANCE(129);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym__alpha_word);
      if (lookahead == 'd') ADVANCE(117);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym__alpha_word);
      if (lookahead == 'e') ADVANCE(135);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym__alpha_word);
      if (lookahead == 'e') ADVANCE(115);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym__alpha_word);
      if (lookahead == 'e') ADVANCE(133);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym__alpha_word);
      if (lookahead == 'e') ADVANCE(116);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym__alpha_word);
      if (lookahead == 'e') ADVANCE(136);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym__alpha_word);
      if (lookahead == 'g') ADVANCE(140);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym__alpha_word);
      if (lookahead == 'i') ADVANCE(138);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym__alpha_word);
      if (lookahead == 'k') ADVANCE(127);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym__alpha_word);
      if (lookahead == 'l') ADVANCE(123);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym__alpha_word);
      if (lookahead == 'l') ADVANCE(125);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym__alpha_word);
      if (lookahead == 'm') ADVANCE(139);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym__alpha_word);
      if (lookahead == 'n') ADVANCE(113);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym__alpha_word);
      if (lookahead == 'n') ADVANCE(121);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym__alpha_word);
      if (lookahead == 'n') ADVANCE(119);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym__alpha_word);
      if (lookahead == 'n') ADVANCE(114);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym__alpha_word);
      if (lookahead == 'o') ADVANCE(142);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym__alpha_word);
      if (lookahead == 'o') ADVANCE(116);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym__alpha_word);
      if (lookahead == 'p') ADVANCE(131);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym__alpha_word);
      if (lookahead == 'r') ADVANCE(137);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym__alpha_word);
      if (lookahead == 'r') ADVANCE(128);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym__alpha_word);
      if (lookahead == 'u') ADVANCE(134);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym__alpha_word);
      if (lookahead == 'v') ADVANCE(126);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym__alpha_word);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_comment);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(147);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == ' ' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(147);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(147);
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
  [1] = {.lex_state = 69},
  [2] = {.lex_state = 12},
  [3] = {.lex_state = 69},
  [4] = {.lex_state = 69},
  [5] = {.lex_state = 69},
  [6] = {.lex_state = 69},
  [7] = {.lex_state = 69},
  [8] = {.lex_state = 69},
  [9] = {.lex_state = 69},
  [10] = {.lex_state = 69},
  [11] = {.lex_state = 14},
  [12] = {.lex_state = 13},
  [13] = {.lex_state = 69},
  [14] = {.lex_state = 69},
  [15] = {.lex_state = 69},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 69},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 69},
  [20] = {.lex_state = 69},
  [21] = {.lex_state = 69},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 3},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 69},
  [27] = {.lex_state = 69},
  [28] = {.lex_state = 69},
  [29] = {.lex_state = 4},
  [30] = {.lex_state = 4},
  [31] = {.lex_state = 4},
  [32] = {.lex_state = 69},
  [33] = {.lex_state = 69},
  [34] = {.lex_state = 69},
  [35] = {.lex_state = 69},
  [36] = {.lex_state = 69},
  [37] = {.lex_state = 69},
  [38] = {.lex_state = 69},
  [39] = {.lex_state = 69},
  [40] = {.lex_state = 69},
  [41] = {.lex_state = 69},
  [42] = {.lex_state = 15},
  [43] = {.lex_state = 69},
  [44] = {.lex_state = 17},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 69},
  [48] = {.lex_state = 15},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 17},
  [51] = {.lex_state = 17},
  [52] = {.lex_state = 17},
  [53] = {.lex_state = 17},
  [54] = {.lex_state = 15},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__alpha_word] = ACTIONS(1),
    [aux_sym_description_token1] = ACTIONS(1),
    [sym_rule_keyword] = ACTIONS(1),
    [sym_background_keyword] = ACTIONS(1),
    [sym_scenario_keyword] = ACTIONS(1),
    [sym_given_keyword] = ACTIONS(1),
    [sym_when_keyword] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_feature] = STATE(49),
    [sym_feature_keyword] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      aux_sym_description_token1,
    ACTIONS(9), 1,
      sym_rule_keyword,
    ACTIONS(11), 1,
      sym_background_keyword,
    ACTIONS(13), 1,
      sym_scenario_keyword,
    STATE(7), 1,
      sym_description,
    STATE(32), 1,
      sym_background,
    STATE(19), 2,
      sym_scenario,
      aux_sym_scenarios_repeat1,
    STATE(27), 2,
      sym_rule,
      aux_sym_rules_repeat1,
    STATE(46), 2,
      sym_rules,
      sym_scenarios,
  [34] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym_then_keyword,
    STATE(51), 1,
      sym_additional_step_keyword,
    ACTIONS(15), 3,
      ts_builtin_sym_end,
      sym_rule_keyword,
      sym_scenario_keyword,
    ACTIONS(20), 3,
      sym_and_keyword,
      sym_but_keyword,
      sym_asterisk_keyword,
    STATE(3), 3,
      sym_then_step,
      sym_additional_step,
      aux_sym_then_steps_repeat1,
  [59] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      sym_then_keyword,
    STATE(51), 1,
      sym_additional_step_keyword,
    ACTIONS(23), 3,
      ts_builtin_sym_end,
      sym_rule_keyword,
      sym_scenario_keyword,
    ACTIONS(27), 3,
      sym_and_keyword,
      sym_but_keyword,
      sym_asterisk_keyword,
    STATE(3), 3,
      sym_then_step,
      sym_additional_step,
      aux_sym_then_steps_repeat1,
  [84] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      sym_then_keyword,
    STATE(51), 1,
      sym_additional_step_keyword,
    ACTIONS(27), 3,
      sym_and_keyword,
      sym_but_keyword,
      sym_asterisk_keyword,
    ACTIONS(29), 3,
      ts_builtin_sym_end,
      sym_rule_keyword,
      sym_scenario_keyword,
    STATE(4), 3,
      sym_then_step,
      sym_additional_step,
      aux_sym_then_steps_repeat1,
  [109] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym_given_keyword,
    STATE(51), 1,
      sym_additional_step_keyword,
    ACTIONS(31), 2,
      sym_scenario_keyword,
      sym_when_keyword,
    ACTIONS(36), 3,
      sym_and_keyword,
      sym_but_keyword,
      sym_asterisk_keyword,
    STATE(6), 3,
      sym_given_step,
      sym_additional_step,
      aux_sym_given_steps_repeat1,
  [133] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      sym_rule_keyword,
    ACTIONS(11), 1,
      sym_background_keyword,
    ACTIONS(13), 1,
      sym_scenario_keyword,
    STATE(32), 1,
      sym_background,
    STATE(19), 2,
      sym_scenario,
      aux_sym_scenarios_repeat1,
    STATE(27), 2,
      sym_rule,
      aux_sym_rules_repeat1,
    STATE(45), 2,
      sym_rules,
      sym_scenarios,
  [161] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      sym_given_keyword,
    STATE(51), 1,
      sym_additional_step_keyword,
    ACTIONS(39), 2,
      sym_scenario_keyword,
      sym_when_keyword,
    ACTIONS(27), 3,
      sym_and_keyword,
      sym_but_keyword,
      sym_asterisk_keyword,
    STATE(6), 3,
      sym_given_step,
      sym_additional_step,
      aux_sym_given_steps_repeat1,
  [185] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      sym_given_keyword,
    STATE(51), 1,
      sym_additional_step_keyword,
    ACTIONS(43), 2,
      sym_scenario_keyword,
      sym_when_keyword,
    ACTIONS(27), 3,
      sym_and_keyword,
      sym_but_keyword,
      sym_asterisk_keyword,
    STATE(8), 3,
      sym_given_step,
      sym_additional_step,
      aux_sym_given_steps_repeat1,
  [209] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 9,
      ts_builtin_sym_end,
      sym_rule_keyword,
      sym_scenario_keyword,
      sym_given_keyword,
      sym_when_keyword,
      sym_then_keyword,
      sym_and_keyword,
      sym_but_keyword,
      sym_asterisk_keyword,
  [224] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      sym_given_keyword,
    ACTIONS(47), 1,
      aux_sym_description_token1,
    ACTIONS(49), 1,
      sym_when_keyword,
    STATE(9), 1,
      sym_given_step,
    STATE(14), 1,
      sym_description,
    STATE(33), 1,
      sym_steps,
    STATE(35), 1,
      sym_when_step,
    STATE(40), 1,
      sym_given_steps,
  [252] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym_background_keyword,
    ACTIONS(13), 1,
      sym_scenario_keyword,
    ACTIONS(51), 1,
      aux_sym_description_token1,
    STATE(17), 1,
      sym_description,
    STATE(32), 1,
      sym_background,
    STATE(41), 1,
      sym_scenarios,
    STATE(19), 2,
      sym_scenario,
      aux_sym_scenarios_repeat1,
  [278] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 7,
      ts_builtin_sym_end,
      sym_rule_keyword,
      sym_scenario_keyword,
      sym_then_keyword,
      sym_and_keyword,
      sym_but_keyword,
      sym_asterisk_keyword,
  [291] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      sym_given_keyword,
    ACTIONS(49), 1,
      sym_when_keyword,
    STATE(9), 1,
      sym_given_step,
    STATE(35), 1,
      sym_when_step,
    STATE(38), 1,
      sym_steps,
    STATE(40), 1,
      sym_given_steps,
  [313] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 6,
      sym_scenario_keyword,
      sym_given_keyword,
      sym_when_keyword,
      sym_and_keyword,
      sym_but_keyword,
      sym_asterisk_keyword,
  [325] = 4,
    ACTIONS(61), 1,
      sym_comment,
    STATE(18), 1,
      aux_sym_description_repeat1,
    ACTIONS(57), 2,
      aux_sym_description_token2,
      anon_sym_LF,
    ACTIONS(59), 3,
      sym_rule_keyword,
      sym_background_keyword,
      sym_scenario_keyword,
  [341] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym_background_keyword,
    ACTIONS(13), 1,
      sym_scenario_keyword,
    STATE(32), 1,
      sym_background,
    STATE(39), 1,
      sym_scenarios,
    STATE(19), 2,
      sym_scenario,
      aux_sym_scenarios_repeat1,
  [361] = 4,
    ACTIONS(61), 1,
      sym_comment,
    STATE(18), 1,
      aux_sym_description_repeat1,
    ACTIONS(63), 2,
      aux_sym_description_token2,
      anon_sym_LF,
    ACTIONS(66), 3,
      sym_rule_keyword,
      sym_background_keyword,
      sym_scenario_keyword,
  [377] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym_scenario_keyword,
    ACTIONS(68), 2,
      ts_builtin_sym_end,
      sym_rule_keyword,
    STATE(21), 2,
      sym_scenario,
      aux_sym_scenarios_repeat1,
  [392] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym_scenario_keyword,
    ACTIONS(70), 2,
      ts_builtin_sym_end,
      sym_rule_keyword,
    STATE(21), 2,
      sym_scenario,
      aux_sym_scenarios_repeat1,
  [407] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(74), 1,
      sym_scenario_keyword,
    ACTIONS(72), 2,
      ts_builtin_sym_end,
      sym_rule_keyword,
    STATE(21), 2,
      sym_scenario,
      aux_sym_scenarios_repeat1,
  [422] = 4,
    ACTIONS(61), 1,
      sym_comment,
    STATE(22), 1,
      aux_sym_description_repeat1,
    ACTIONS(66), 2,
      sym_given_keyword,
      sym_when_keyword,
    ACTIONS(77), 2,
      aux_sym_description_token2,
      anon_sym_LF,
  [437] = 4,
    ACTIONS(61), 1,
      sym_comment,
    STATE(22), 1,
      aux_sym_description_repeat1,
    ACTIONS(59), 2,
      sym_given_keyword,
      sym_when_keyword,
    ACTIONS(80), 2,
      aux_sym_description_token2,
      anon_sym_LF,
  [452] = 4,
    ACTIONS(61), 1,
      sym_comment,
    STATE(24), 1,
      aux_sym_description_repeat1,
    ACTIONS(66), 2,
      sym_background_keyword,
      sym_scenario_keyword,
    ACTIONS(82), 2,
      aux_sym_description_token2,
      anon_sym_LF,
  [467] = 4,
    ACTIONS(61), 1,
      sym_comment,
    STATE(24), 1,
      aux_sym_description_repeat1,
    ACTIONS(59), 2,
      sym_background_keyword,
      sym_scenario_keyword,
    ACTIONS(85), 2,
      aux_sym_description_token2,
      anon_sym_LF,
  [482] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 1,
      ts_builtin_sym_end,
    ACTIONS(89), 1,
      sym_rule_keyword,
    STATE(26), 2,
      sym_rule,
      aux_sym_rules_repeat1,
  [496] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      sym_rule_keyword,
    ACTIONS(92), 1,
      ts_builtin_sym_end,
    STATE(26), 2,
      sym_rule,
      aux_sym_rules_repeat1,
  [510] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      sym_then_keyword,
    STATE(5), 1,
      sym_then_step,
    STATE(34), 1,
      sym_then_steps,
  [523] = 3,
    ACTIONS(61), 1,
      sym_comment,
    STATE(23), 1,
      aux_sym_description_repeat1,
    ACTIONS(94), 2,
      aux_sym_description_token2,
      anon_sym_LF,
  [534] = 3,
    ACTIONS(61), 1,
      sym_comment,
    STATE(25), 1,
      aux_sym_description_repeat1,
    ACTIONS(96), 2,
      aux_sym_description_token2,
      anon_sym_LF,
  [545] = 3,
    ACTIONS(61), 1,
      sym_comment,
    STATE(16), 1,
      aux_sym_description_repeat1,
    ACTIONS(98), 2,
      aux_sym_description_token2,
      anon_sym_LF,
  [556] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym_scenario_keyword,
    STATE(20), 2,
      sym_scenario,
      aux_sym_scenarios_repeat1,
  [567] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 3,
      ts_builtin_sym_end,
      sym_rule_keyword,
      sym_scenario_keyword,
  [576] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 3,
      ts_builtin_sym_end,
      sym_rule_keyword,
      sym_scenario_keyword,
  [585] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      sym_then_keyword,
    STATE(5), 1,
      sym_then_step,
    STATE(37), 1,
      sym_then_steps,
  [598] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      sym_given_keyword,
    STATE(9), 1,
      sym_given_step,
    STATE(47), 1,
      sym_given_steps,
  [611] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 3,
      ts_builtin_sym_end,
      sym_rule_keyword,
      sym_scenario_keyword,
  [620] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 3,
      ts_builtin_sym_end,
      sym_rule_keyword,
      sym_scenario_keyword,
  [629] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 2,
      ts_builtin_sym_end,
      sym_rule_keyword,
  [637] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      sym_when_keyword,
    STATE(28), 1,
      sym_when_step,
  [647] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 2,
      ts_builtin_sym_end,
      sym_rule_keyword,
  [655] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(112), 1,
      sym_title,
  [662] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 1,
      sym_then_keyword,
  [669] = 2,
    ACTIONS(61), 1,
      sym_comment,
    ACTIONS(116), 1,
      sym_step_definition,
  [676] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(118), 1,
      ts_builtin_sym_end,
  [683] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 1,
      ts_builtin_sym_end,
  [690] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 1,
      sym_scenario_keyword,
  [697] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 1,
      sym_title,
  [704] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 1,
      ts_builtin_sym_end,
  [711] = 2,
    ACTIONS(61), 1,
      sym_comment,
    ACTIONS(128), 1,
      sym_step_definition,
  [718] = 2,
    ACTIONS(61), 1,
      sym_comment,
    ACTIONS(130), 1,
      sym_step_definition,
  [725] = 2,
    ACTIONS(61), 1,
      sym_comment,
    ACTIONS(132), 1,
      sym_step_definition,
  [732] = 2,
    ACTIONS(61), 1,
      sym_comment,
    ACTIONS(134), 1,
      sym_step_definition,
  [739] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 1,
      sym_title,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 34,
  [SMALL_STATE(4)] = 59,
  [SMALL_STATE(5)] = 84,
  [SMALL_STATE(6)] = 109,
  [SMALL_STATE(7)] = 133,
  [SMALL_STATE(8)] = 161,
  [SMALL_STATE(9)] = 185,
  [SMALL_STATE(10)] = 209,
  [SMALL_STATE(11)] = 224,
  [SMALL_STATE(12)] = 252,
  [SMALL_STATE(13)] = 278,
  [SMALL_STATE(14)] = 291,
  [SMALL_STATE(15)] = 313,
  [SMALL_STATE(16)] = 325,
  [SMALL_STATE(17)] = 341,
  [SMALL_STATE(18)] = 361,
  [SMALL_STATE(19)] = 377,
  [SMALL_STATE(20)] = 392,
  [SMALL_STATE(21)] = 407,
  [SMALL_STATE(22)] = 422,
  [SMALL_STATE(23)] = 437,
  [SMALL_STATE(24)] = 452,
  [SMALL_STATE(25)] = 467,
  [SMALL_STATE(26)] = 482,
  [SMALL_STATE(27)] = 496,
  [SMALL_STATE(28)] = 510,
  [SMALL_STATE(29)] = 523,
  [SMALL_STATE(30)] = 534,
  [SMALL_STATE(31)] = 545,
  [SMALL_STATE(32)] = 556,
  [SMALL_STATE(33)] = 567,
  [SMALL_STATE(34)] = 576,
  [SMALL_STATE(35)] = 585,
  [SMALL_STATE(36)] = 598,
  [SMALL_STATE(37)] = 611,
  [SMALL_STATE(38)] = 620,
  [SMALL_STATE(39)] = 629,
  [SMALL_STATE(40)] = 637,
  [SMALL_STATE(41)] = 647,
  [SMALL_STATE(42)] = 655,
  [SMALL_STATE(43)] = 662,
  [SMALL_STATE(44)] = 669,
  [SMALL_STATE(45)] = 676,
  [SMALL_STATE(46)] = 683,
  [SMALL_STATE(47)] = 690,
  [SMALL_STATE(48)] = 697,
  [SMALL_STATE(49)] = 704,
  [SMALL_STATE(50)] = 711,
  [SMALL_STATE(51)] = 718,
  [SMALL_STATE(52)] = 725,
  [SMALL_STATE(53)] = 732,
  [SMALL_STATE(54)] = 739,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_then_steps_repeat1, 2),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_then_steps_repeat1, 2), SHIFT_REPEAT(44),
  [20] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_then_steps_repeat1, 2), SHIFT_REPEAT(52),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_then_steps, 2),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_then_steps, 1),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_given_steps_repeat1, 2),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_given_steps_repeat1, 2), SHIFT_REPEAT(53),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_given_steps_repeat1, 2), SHIFT_REPEAT(52),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_given_steps, 2),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_given_steps, 1),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_additional_step, 2),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_then_step, 2),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_given_step, 2),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_description, 2),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(18),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_description_repeat1, 2),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scenarios, 1),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scenarios, 2),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_scenarios_repeat1, 2),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scenarios_repeat1, 2), SHIFT_REPEAT(42),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(22),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(24),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rules_repeat1, 2),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rules_repeat1, 2), SHIFT_REPEAT(48),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rules, 1),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scenario, 3),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_steps, 3),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_steps, 2),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scenario, 4),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 4),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 3),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_when_step, 2),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_feature, 4),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_feature, 3),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 2),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [126] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_additional_step_keyword, 1),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
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
