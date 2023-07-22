#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 74
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 39
#define ALIAS_COUNT 0
#define TOKEN_COUNT 19
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum {
  sym__alpha_word = 1,
  sym_tag = 2,
  sym_feature_keyword = 3,
  sym_title = 4,
  aux_sym_description_token1 = 5,
  aux_sym_description_token2 = 6,
  anon_sym_LF = 7,
  sym_rule_keyword = 8,
  sym_background_keyword = 9,
  sym_scenario_keyword = 10,
  sym_given_keyword = 11,
  sym_when_keyword = 12,
  sym_then_keyword = 13,
  sym_and_keyword = 14,
  sym_but_keyword = 15,
  sym_asterisk_keyword = 16,
  sym_step_definition = 17,
  sym_comment = 18,
  sym_feature = 19,
  sym_description = 20,
  sym_rules = 21,
  sym_rule = 22,
  sym_scenarios = 23,
  sym_background = 24,
  sym_scenario = 25,
  sym_steps = 26,
  sym_given_steps = 27,
  sym_then_steps = 28,
  sym_given_step = 29,
  sym_when_step = 30,
  sym_then_step = 31,
  sym_additional_step = 32,
  sym_additional_step_keyword = 33,
  aux_sym_description_repeat1 = 34,
  aux_sym_rules_repeat1 = 35,
  aux_sym_scenarios_repeat1 = 36,
  aux_sym_given_steps_repeat1 = 37,
  aux_sym_then_steps_repeat1 = 38,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__alpha_word] = "_alpha_word",
  [sym_tag] = "tag",
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
  [sym_tag] = sym_tag,
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
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 22,
  [26] = 26,
  [27] = 27,
  [28] = 20,
  [29] = 29,
  [30] = 26,
  [31] = 31,
  [32] = 22,
  [33] = 33,
  [34] = 20,
  [35] = 29,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 38,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 44,
  [47] = 47,
  [48] = 44,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(71);
      if (lookahead == '#') ADVANCE(151);
      if (lookahead == '@') ADVANCE(89);
      if (lookahead == 'B') ADVANCE(76);
      if (lookahead == 'E') ADVANCE(86);
      if (lookahead == 'G') ADVANCE(82);
      if (lookahead == 'R') ADVANCE(84);
      if (lookahead == 'S') ADVANCE(78);
      if (lookahead == 'W') ADVANCE(80);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      if (lookahead != 0) ADVANCE(75);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(102);
      if (lookahead == '#') ADVANCE(151);
      if (lookahead == '@') ADVANCE(101);
      if (lookahead == 'B') ADVANCE(95);
      if (lookahead == 'E') ADVANCE(100);
      if (lookahead == 'R') ADVANCE(99);
      if (lookahead == 'S') ADVANCE(96);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(91);
      if (lookahead != 0) ADVANCE(90);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(103);
      if (lookahead == '#') ADVANCE(151);
      if (lookahead == '@') ADVANCE(101);
      if (lookahead == 'B') ADVANCE(95);
      if (lookahead == 'E') ADVANCE(100);
      if (lookahead == 'S') ADVANCE(96);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(92);
      if (lookahead != 0) ADVANCE(90);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(104);
      if (lookahead == '#') ADVANCE(151);
      if (lookahead == 'G') ADVANCE(98);
      if (lookahead == 'W') ADVANCE(97);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(93);
      if (lookahead != 0) ADVANCE(90);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(105);
      if (lookahead == '#') ADVANCE(151);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(94);
      if (lookahead != 0) ADVANCE(90);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(110);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(109);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(114);
      END_STATE();
    case 8:
      if (lookahead == ' ') ADVANCE(112);
      END_STATE();
    case 9:
      if (lookahead == ' ') ADVANCE(113);
      END_STATE();
    case 10:
      if (lookahead == ' ') ADVANCE(111);
      END_STATE();
    case 11:
      if (lookahead == ' ') ADVANCE(116);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 12:
      if (lookahead == '#') ADVANCE(151);
      if (lookahead == '@') ADVANCE(89);
      if (lookahead == 'B') ADVANCE(77);
      if (lookahead == 'E') ADVANCE(87);
      if (lookahead == 'R') ADVANCE(85);
      if (lookahead == 'S') ADVANCE(79);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (lookahead != 0) ADVANCE(75);
      END_STATE();
    case 13:
      if (lookahead == '#') ADVANCE(151);
      if (lookahead == '@') ADVANCE(89);
      if (lookahead == 'B') ADVANCE(77);
      if (lookahead == 'E') ADVANCE(87);
      if (lookahead == 'S') ADVANCE(79);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (lookahead != 0) ADVANCE(75);
      END_STATE();
    case 14:
      if (lookahead == '#') ADVANCE(151);
      if (lookahead == 'G') ADVANCE(83);
      if (lookahead == 'W') ADVANCE(81);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (lookahead != 0) ADVANCE(75);
      END_STATE();
    case 15:
      if (lookahead == '#') ADVANCE(151);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(69);
      END_STATE();
    case 16:
      if (lookahead == '#') ADVANCE(149);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(16);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(11);
      if (lookahead != 0 &&
          (lookahead < 'A' || 'Z' < lookahead)) ADVANCE(66);
      END_STATE();
    case 17:
      if (lookahead == '#') ADVANCE(149);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(16);
      if (lookahead != 0 &&
          (lookahead < 'A' || 'Z' < lookahead)) ADVANCE(66);
      END_STATE();
    case 18:
      if (lookahead == ':') ADVANCE(106);
      END_STATE();
    case 19:
      if (lookahead == ':') ADVANCE(108);
      END_STATE();
    case 20:
      if (lookahead == ':') ADVANCE(107);
      END_STATE();
    case 21:
      if (lookahead == ':') ADVANCE(73);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 68:
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 69:
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    case 70:
      if (eof) ADVANCE(71);
      if (lookahead == '#') ADVANCE(151);
      if (lookahead == '*') ADVANCE(7);
      if (lookahead == '@') ADVANCE(68);
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
          lookahead == ' ') SKIP(70)
      END_STATE();
    case 71:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_tag);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_feature_keyword);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_title);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_description_token1);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == 'a') ADVANCE(124);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == 'a') ADVANCE(26);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == 'c') ADVANCE(126);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == 'c') ADVANCE(31);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == 'h') ADVANCE(128);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == 'h') ADVANCE(36);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == 'i') ADVANCE(147);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == 'i') ADVANCE(64);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == 'u') ADVANCE(134);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == 'u') ADVANCE(44);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == 'x') ADVANCE(122);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == 'x') ADVANCE(22);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_description_token2);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_description_token2);
      if (lookahead == '\n') ADVANCE(102);
      if (lookahead == '@') ADVANCE(101);
      if (lookahead == 'B') ADVANCE(95);
      if (lookahead == 'E') ADVANCE(100);
      if (lookahead == 'R') ADVANCE(99);
      if (lookahead == 'S') ADVANCE(96);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(90);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_description_token2);
      if (lookahead == '\n') ADVANCE(103);
      if (lookahead == '@') ADVANCE(101);
      if (lookahead == 'B') ADVANCE(95);
      if (lookahead == 'E') ADVANCE(100);
      if (lookahead == 'S') ADVANCE(96);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(92);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(90);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_description_token2);
      if (lookahead == '\n') ADVANCE(104);
      if (lookahead == 'G') ADVANCE(98);
      if (lookahead == 'W') ADVANCE(97);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(93);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(90);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_description_token2);
      if (lookahead == '\n') ADVANCE(105);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(94);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(90);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_description_token2);
      if (lookahead == 'a') ADVANCE(26);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_description_token2);
      if (lookahead == 'c') ADVANCE(31);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_description_token2);
      if (lookahead == 'h') ADVANCE(36);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_description_token2);
      if (lookahead == 'i') ADVANCE(64);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_description_token2);
      if (lookahead == 'u') ADVANCE(44);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_description_token2);
      if (lookahead == 'x') ADVANCE(22);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_description_token2);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(102);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(91);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(103);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(92);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(104);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(93);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(105);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(94);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_rule_keyword);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_background_keyword);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_scenario_keyword);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_given_keyword);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_when_keyword);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_then_keyword);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_and_keyword);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_but_keyword);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_asterisk_keyword);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_step_definition);
      if (lookahead == ' ' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(151);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_step_definition);
      if (lookahead == ' ' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym__alpha_word);
      if (lookahead == ' ') ADVANCE(110);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym__alpha_word);
      if (lookahead == ' ') ADVANCE(109);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym__alpha_word);
      if (lookahead == ':') ADVANCE(106);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym__alpha_word);
      if (lookahead == ':') ADVANCE(108);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym__alpha_word);
      if (lookahead == ':') ADVANCE(107);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym__alpha_word);
      if (lookahead == 'a') ADVANCE(136);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym__alpha_word);
      if (lookahead == 'a') ADVANCE(145);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym__alpha_word);
      if (lookahead == 'c') ADVANCE(133);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym__alpha_word);
      if (lookahead == 'd') ADVANCE(121);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym__alpha_word);
      if (lookahead == 'e') ADVANCE(139);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym__alpha_word);
      if (lookahead == 'e') ADVANCE(119);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym__alpha_word);
      if (lookahead == 'e') ADVANCE(137);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym__alpha_word);
      if (lookahead == 'e') ADVANCE(120);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym__alpha_word);
      if (lookahead == 'e') ADVANCE(140);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym__alpha_word);
      if (lookahead == 'g') ADVANCE(144);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym__alpha_word);
      if (lookahead == 'i') ADVANCE(142);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym__alpha_word);
      if (lookahead == 'k') ADVANCE(131);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym__alpha_word);
      if (lookahead == 'l') ADVANCE(127);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym__alpha_word);
      if (lookahead == 'l') ADVANCE(129);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym__alpha_word);
      if (lookahead == 'm') ADVANCE(143);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym__alpha_word);
      if (lookahead == 'n') ADVANCE(117);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym__alpha_word);
      if (lookahead == 'n') ADVANCE(125);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym__alpha_word);
      if (lookahead == 'n') ADVANCE(123);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym__alpha_word);
      if (lookahead == 'n') ADVANCE(118);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym__alpha_word);
      if (lookahead == 'o') ADVANCE(146);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym__alpha_word);
      if (lookahead == 'o') ADVANCE(120);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym__alpha_word);
      if (lookahead == 'p') ADVANCE(135);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym__alpha_word);
      if (lookahead == 'r') ADVANCE(141);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym__alpha_word);
      if (lookahead == 'r') ADVANCE(132);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym__alpha_word);
      if (lookahead == 'u') ADVANCE(138);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym__alpha_word);
      if (lookahead == 'v') ADVANCE(130);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym__alpha_word);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_comment);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(151);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == ' ' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(151);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(151);
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
  [1] = {.lex_state = 70},
  [2] = {.lex_state = 12},
  [3] = {.lex_state = 12},
  [4] = {.lex_state = 70},
  [5] = {.lex_state = 70},
  [6] = {.lex_state = 70},
  [7] = {.lex_state = 70},
  [8] = {.lex_state = 70},
  [9] = {.lex_state = 70},
  [10] = {.lex_state = 70},
  [11] = {.lex_state = 70},
  [12] = {.lex_state = 70},
  [13] = {.lex_state = 13},
  [14] = {.lex_state = 13},
  [15] = {.lex_state = 70},
  [16] = {.lex_state = 14},
  [17] = {.lex_state = 14},
  [18] = {.lex_state = 70},
  [19] = {.lex_state = 70},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 70},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 70},
  [24] = {.lex_state = 70},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 70},
  [27] = {.lex_state = 70},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 70},
  [30] = {.lex_state = 70},
  [31] = {.lex_state = 70},
  [32] = {.lex_state = 3},
  [33] = {.lex_state = 70},
  [34] = {.lex_state = 3},
  [35] = {.lex_state = 70},
  [36] = {.lex_state = 70},
  [37] = {.lex_state = 70},
  [38] = {.lex_state = 70},
  [39] = {.lex_state = 70},
  [40] = {.lex_state = 70},
  [41] = {.lex_state = 70},
  [42] = {.lex_state = 70},
  [43] = {.lex_state = 70},
  [44] = {.lex_state = 4},
  [45] = {.lex_state = 70},
  [46] = {.lex_state = 4},
  [47] = {.lex_state = 70},
  [48] = {.lex_state = 4},
  [49] = {.lex_state = 70},
  [50] = {.lex_state = 70},
  [51] = {.lex_state = 70},
  [52] = {.lex_state = 70},
  [53] = {.lex_state = 70},
  [54] = {.lex_state = 70},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 70},
  [57] = {.lex_state = 17},
  [58] = {.lex_state = 15},
  [59] = {.lex_state = 17},
  [60] = {.lex_state = 17},
  [61] = {.lex_state = 70},
  [62] = {.lex_state = 70},
  [63] = {.lex_state = 15},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 17},
  [66] = {.lex_state = 15},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 15},
  [69] = {.lex_state = 70},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 15},
  [72] = {.lex_state = 17},
  [73] = {.lex_state = 15},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__alpha_word] = ACTIONS(1),
    [sym_tag] = ACTIONS(1),
    [aux_sym_description_token1] = ACTIONS(1),
    [sym_rule_keyword] = ACTIONS(1),
    [sym_background_keyword] = ACTIONS(1),
    [sym_scenario_keyword] = ACTIONS(1),
    [sym_given_keyword] = ACTIONS(1),
    [sym_when_keyword] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_feature] = STATE(67),
    [sym_tag] = ACTIONS(5),
    [sym_feature_keyword] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      sym_tag,
    ACTIONS(11), 1,
      aux_sym_description_token1,
    ACTIONS(13), 1,
      sym_rule_keyword,
    ACTIONS(15), 1,
      sym_background_keyword,
    ACTIONS(17), 1,
      sym_scenario_keyword,
    STATE(11), 1,
      sym_description,
    STATE(42), 1,
      sym_background,
    STATE(30), 2,
      sym_scenario,
      aux_sym_scenarios_repeat1,
    STATE(31), 2,
      sym_rule,
      aux_sym_rules_repeat1,
    STATE(64), 2,
      sym_rules,
      sym_scenarios,
  [37] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      sym_tag,
    ACTIONS(11), 1,
      aux_sym_description_token1,
    ACTIONS(13), 1,
      sym_rule_keyword,
    ACTIONS(15), 1,
      sym_background_keyword,
    ACTIONS(17), 1,
      sym_scenario_keyword,
    STATE(10), 1,
      sym_description,
    STATE(42), 1,
      sym_background,
    STATE(30), 2,
      sym_scenario,
      aux_sym_scenarios_repeat1,
    STATE(31), 2,
      sym_rule,
      aux_sym_rules_repeat1,
    STATE(55), 2,
      sym_rules,
      sym_scenarios,
  [74] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      sym_then_keyword,
    STATE(59), 1,
      sym_additional_step_keyword,
    ACTIONS(24), 3,
      sym_and_keyword,
      sym_but_keyword,
      sym_asterisk_keyword,
    STATE(4), 3,
      sym_then_step,
      sym_additional_step,
      aux_sym_then_steps_repeat1,
    ACTIONS(19), 4,
      ts_builtin_sym_end,
      sym_tag,
      sym_rule_keyword,
      sym_scenario_keyword,
  [100] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      sym_then_keyword,
    STATE(59), 1,
      sym_additional_step_keyword,
    ACTIONS(31), 3,
      sym_and_keyword,
      sym_but_keyword,
      sym_asterisk_keyword,
    STATE(4), 3,
      sym_then_step,
      sym_additional_step,
      aux_sym_then_steps_repeat1,
    ACTIONS(27), 4,
      ts_builtin_sym_end,
      sym_tag,
      sym_rule_keyword,
      sym_scenario_keyword,
  [126] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      sym_then_keyword,
    STATE(59), 1,
      sym_additional_step_keyword,
    ACTIONS(31), 3,
      sym_and_keyword,
      sym_but_keyword,
      sym_asterisk_keyword,
    STATE(5), 3,
      sym_then_step,
      sym_additional_step,
      aux_sym_then_steps_repeat1,
    ACTIONS(33), 4,
      ts_builtin_sym_end,
      sym_tag,
      sym_rule_keyword,
      sym_scenario_keyword,
  [152] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      sym_given_keyword,
    STATE(59), 1,
      sym_additional_step_keyword,
    ACTIONS(35), 3,
      sym_tag,
      sym_scenario_keyword,
      sym_when_keyword,
    ACTIONS(40), 3,
      sym_and_keyword,
      sym_but_keyword,
      sym_asterisk_keyword,
    STATE(7), 3,
      sym_given_step,
      sym_additional_step,
      aux_sym_given_steps_repeat1,
  [177] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      sym_given_keyword,
    STATE(59), 1,
      sym_additional_step_keyword,
    ACTIONS(31), 3,
      sym_and_keyword,
      sym_but_keyword,
      sym_asterisk_keyword,
    ACTIONS(43), 3,
      sym_tag,
      sym_scenario_keyword,
      sym_when_keyword,
    STATE(9), 3,
      sym_given_step,
      sym_additional_step,
      aux_sym_given_steps_repeat1,
  [202] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      sym_given_keyword,
    STATE(59), 1,
      sym_additional_step_keyword,
    ACTIONS(31), 3,
      sym_and_keyword,
      sym_but_keyword,
      sym_asterisk_keyword,
    ACTIONS(47), 3,
      sym_tag,
      sym_scenario_keyword,
      sym_when_keyword,
    STATE(7), 3,
      sym_given_step,
      sym_additional_step,
      aux_sym_given_steps_repeat1,
  [227] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      sym_tag,
    ACTIONS(13), 1,
      sym_rule_keyword,
    ACTIONS(15), 1,
      sym_background_keyword,
    ACTIONS(17), 1,
      sym_scenario_keyword,
    STATE(42), 1,
      sym_background,
    STATE(30), 2,
      sym_scenario,
      aux_sym_scenarios_repeat1,
    STATE(31), 2,
      sym_rule,
      aux_sym_rules_repeat1,
    STATE(70), 2,
      sym_rules,
      sym_scenarios,
  [258] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      sym_tag,
    ACTIONS(13), 1,
      sym_rule_keyword,
    ACTIONS(15), 1,
      sym_background_keyword,
    ACTIONS(17), 1,
      sym_scenario_keyword,
    STATE(42), 1,
      sym_background,
    STATE(30), 2,
      sym_scenario,
      aux_sym_scenarios_repeat1,
    STATE(31), 2,
      sym_rule,
      aux_sym_rules_repeat1,
    STATE(55), 2,
      sym_rules,
      sym_scenarios,
  [289] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 10,
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
  [305] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym_background_keyword,
    ACTIONS(17), 1,
      sym_scenario_keyword,
    ACTIONS(51), 1,
      sym_tag,
    ACTIONS(53), 1,
      aux_sym_description_token1,
    STATE(21), 1,
      sym_description,
    STATE(38), 1,
      sym_background,
    STATE(45), 1,
      sym_scenarios,
    STATE(26), 2,
      sym_scenario,
      aux_sym_scenarios_repeat1,
  [334] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym_background_keyword,
    ACTIONS(17), 1,
      sym_scenario_keyword,
    ACTIONS(51), 1,
      sym_tag,
    ACTIONS(53), 1,
      aux_sym_description_token1,
    STATE(18), 1,
      sym_description,
    STATE(38), 1,
      sym_background,
    STATE(49), 1,
      sym_scenarios,
    STATE(26), 2,
      sym_scenario,
      aux_sym_scenarios_repeat1,
  [363] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 8,
      ts_builtin_sym_end,
      sym_tag,
      sym_rule_keyword,
      sym_scenario_keyword,
      sym_then_keyword,
      sym_and_keyword,
      sym_but_keyword,
      sym_asterisk_keyword,
  [377] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      sym_given_keyword,
    ACTIONS(57), 1,
      aux_sym_description_token1,
    ACTIONS(59), 1,
      sym_when_keyword,
    STATE(8), 1,
      sym_given_step,
    STATE(27), 1,
      sym_description,
    STATE(37), 1,
      sym_steps,
    STATE(47), 1,
      sym_when_step,
    STATE(54), 1,
      sym_given_steps,
  [405] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      sym_given_keyword,
    ACTIONS(57), 1,
      aux_sym_description_token1,
    ACTIONS(59), 1,
      sym_when_keyword,
    STATE(8), 1,
      sym_given_step,
    STATE(24), 1,
      sym_description,
    STATE(41), 1,
      sym_steps,
    STATE(47), 1,
      sym_when_step,
    STATE(54), 1,
      sym_given_steps,
  [433] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym_background_keyword,
    ACTIONS(17), 1,
      sym_scenario_keyword,
    ACTIONS(51), 1,
      sym_tag,
    STATE(38), 1,
      sym_background,
    STATE(51), 1,
      sym_scenarios,
    STATE(26), 2,
      sym_scenario,
      aux_sym_scenarios_repeat1,
  [456] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 7,
      sym_tag,
      sym_scenario_keyword,
      sym_given_keyword,
      sym_when_keyword,
      sym_and_keyword,
      sym_but_keyword,
      sym_asterisk_keyword,
  [469] = 4,
    ACTIONS(67), 1,
      sym_comment,
    STATE(22), 1,
      aux_sym_description_repeat1,
    ACTIONS(65), 2,
      aux_sym_description_token2,
      anon_sym_LF,
    ACTIONS(63), 4,
      sym_tag,
      sym_rule_keyword,
      sym_background_keyword,
      sym_scenario_keyword,
  [486] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      sym_background_keyword,
    ACTIONS(17), 1,
      sym_scenario_keyword,
    ACTIONS(51), 1,
      sym_tag,
    STATE(38), 1,
      sym_background,
    STATE(49), 1,
      sym_scenarios,
    STATE(26), 2,
      sym_scenario,
      aux_sym_scenarios_repeat1,
  [509] = 4,
    ACTIONS(67), 1,
      sym_comment,
    STATE(22), 1,
      aux_sym_description_repeat1,
    ACTIONS(71), 2,
      aux_sym_description_token2,
      anon_sym_LF,
    ACTIONS(69), 4,
      sym_tag,
      sym_rule_keyword,
      sym_background_keyword,
      sym_scenario_keyword,
  [526] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 1,
      sym_tag,
    ACTIONS(79), 1,
      sym_scenario_keyword,
    ACTIONS(74), 2,
      ts_builtin_sym_end,
      sym_rule_keyword,
    STATE(23), 2,
      sym_scenario,
      aux_sym_scenarios_repeat1,
  [544] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      sym_given_keyword,
    ACTIONS(59), 1,
      sym_when_keyword,
    STATE(8), 1,
      sym_given_step,
    STATE(39), 1,
      sym_steps,
    STATE(47), 1,
      sym_when_step,
    STATE(54), 1,
      sym_given_steps,
  [566] = 4,
    ACTIONS(67), 1,
      sym_comment,
    STATE(25), 1,
      aux_sym_description_repeat1,
    ACTIONS(82), 2,
      aux_sym_description_token2,
      anon_sym_LF,
    ACTIONS(69), 3,
      sym_tag,
      sym_background_keyword,
      sym_scenario_keyword,
  [582] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym_scenario_keyword,
    ACTIONS(87), 1,
      sym_tag,
    ACTIONS(85), 2,
      ts_builtin_sym_end,
      sym_rule_keyword,
    STATE(23), 2,
      sym_scenario,
      aux_sym_scenarios_repeat1,
  [600] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      sym_given_keyword,
    ACTIONS(59), 1,
      sym_when_keyword,
    STATE(8), 1,
      sym_given_step,
    STATE(41), 1,
      sym_steps,
    STATE(47), 1,
      sym_when_step,
    STATE(54), 1,
      sym_given_steps,
  [622] = 4,
    ACTIONS(67), 1,
      sym_comment,
    STATE(25), 1,
      aux_sym_description_repeat1,
    ACTIONS(90), 2,
      aux_sym_description_token2,
      anon_sym_LF,
    ACTIONS(63), 3,
      sym_tag,
      sym_background_keyword,
      sym_scenario_keyword,
  [638] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym_scenario_keyword,
    ACTIONS(94), 1,
      sym_tag,
    ACTIONS(92), 2,
      ts_builtin_sym_end,
      sym_rule_keyword,
    STATE(23), 2,
      sym_scenario,
      aux_sym_scenarios_repeat1,
  [656] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym_scenario_keyword,
    ACTIONS(51), 1,
      sym_tag,
    ACTIONS(85), 1,
      ts_builtin_sym_end,
    STATE(23), 2,
      sym_scenario,
      aux_sym_scenarios_repeat1,
  [673] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym_rule_keyword,
    ACTIONS(97), 1,
      ts_builtin_sym_end,
    ACTIONS(99), 1,
      sym_tag,
    STATE(33), 2,
      sym_rule,
      aux_sym_rules_repeat1,
  [690] = 4,
    ACTIONS(67), 1,
      sym_comment,
    STATE(32), 1,
      aux_sym_description_repeat1,
    ACTIONS(69), 2,
      sym_given_keyword,
      sym_when_keyword,
    ACTIONS(101), 2,
      aux_sym_description_token2,
      anon_sym_LF,
  [705] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 1,
      ts_builtin_sym_end,
    ACTIONS(106), 1,
      sym_tag,
    ACTIONS(109), 1,
      sym_rule_keyword,
    STATE(33), 2,
      sym_rule,
      aux_sym_rules_repeat1,
  [722] = 4,
    ACTIONS(67), 1,
      sym_comment,
    STATE(32), 1,
      aux_sym_description_repeat1,
    ACTIONS(63), 2,
      sym_given_keyword,
      sym_when_keyword,
    ACTIONS(112), 2,
      aux_sym_description_token2,
      anon_sym_LF,
  [737] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym_scenario_keyword,
    ACTIONS(51), 1,
      sym_tag,
    ACTIONS(92), 1,
      ts_builtin_sym_end,
    STATE(23), 2,
      sym_scenario,
      aux_sym_scenarios_repeat1,
  [754] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 4,
      ts_builtin_sym_end,
      sym_tag,
      sym_rule_keyword,
      sym_scenario_keyword,
  [764] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 4,
      ts_builtin_sym_end,
      sym_tag,
      sym_rule_keyword,
      sym_scenario_keyword,
  [774] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym_scenario_keyword,
    ACTIONS(51), 1,
      sym_tag,
    STATE(29), 2,
      sym_scenario,
      aux_sym_scenarios_repeat1,
  [788] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(118), 4,
      ts_builtin_sym_end,
      sym_tag,
      sym_rule_keyword,
      sym_scenario_keyword,
  [798] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 4,
      ts_builtin_sym_end,
      sym_tag,
      sym_rule_keyword,
      sym_scenario_keyword,
  [808] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 4,
      ts_builtin_sym_end,
      sym_tag,
      sym_rule_keyword,
      sym_scenario_keyword,
  [818] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym_scenario_keyword,
    ACTIONS(51), 1,
      sym_tag,
    STATE(35), 2,
      sym_scenario,
      aux_sym_scenarios_repeat1,
  [832] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      sym_then_keyword,
    STATE(6), 1,
      sym_then_step,
    STATE(36), 1,
      sym_then_steps,
  [845] = 3,
    ACTIONS(67), 1,
      sym_comment,
    STATE(34), 1,
      aux_sym_description_repeat1,
    ACTIONS(124), 2,
      aux_sym_description_token2,
      anon_sym_LF,
  [856] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 3,
      ts_builtin_sym_end,
      sym_tag,
      sym_rule_keyword,
  [865] = 3,
    ACTIONS(67), 1,
      sym_comment,
    STATE(28), 1,
      aux_sym_description_repeat1,
    ACTIONS(128), 2,
      aux_sym_description_token2,
      anon_sym_LF,
  [876] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      sym_then_keyword,
    STATE(6), 1,
      sym_then_step,
    STATE(40), 1,
      sym_then_steps,
  [889] = 3,
    ACTIONS(67), 1,
      sym_comment,
    STATE(20), 1,
      aux_sym_description_repeat1,
    ACTIONS(130), 2,
      aux_sym_description_token2,
      anon_sym_LF,
  [900] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(132), 3,
      ts_builtin_sym_end,
      sym_tag,
      sym_rule_keyword,
  [909] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      sym_given_keyword,
    STATE(8), 1,
      sym_given_step,
    STATE(52), 1,
      sym_given_steps,
  [922] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 3,
      ts_builtin_sym_end,
      sym_tag,
      sym_rule_keyword,
  [931] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 2,
      sym_tag,
      sym_scenario_keyword,
  [939] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(138), 1,
      sym_rule_keyword,
    ACTIONS(140), 1,
      sym_scenario_keyword,
  [949] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      sym_when_keyword,
    STATE(43), 1,
      sym_when_step,
  [959] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(142), 1,
      ts_builtin_sym_end,
  [966] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 1,
      sym_scenario_keyword,
  [973] = 2,
    ACTIONS(67), 1,
      sym_comment,
    ACTIONS(144), 1,
      sym_step_definition,
  [980] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(146), 1,
      sym_title,
  [987] = 2,
    ACTIONS(67), 1,
      sym_comment,
    ACTIONS(148), 1,
      sym_step_definition,
  [994] = 2,
    ACTIONS(67), 1,
      sym_comment,
    ACTIONS(150), 1,
      sym_step_definition,
  [1001] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(138), 1,
      sym_rule_keyword,
  [1008] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(152), 1,
      sym_then_keyword,
  [1015] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 1,
      sym_title,
  [1022] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 1,
      ts_builtin_sym_end,
  [1029] = 2,
    ACTIONS(67), 1,
      sym_comment,
    ACTIONS(158), 1,
      sym_step_definition,
  [1036] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(160), 1,
      sym_title,
  [1043] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      ts_builtin_sym_end,
  [1050] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 1,
      sym_title,
  [1057] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 1,
      sym_feature_keyword,
  [1064] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 1,
      ts_builtin_sym_end,
  [1071] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 1,
      sym_title,
  [1078] = 2,
    ACTIONS(67), 1,
      sym_comment,
    ACTIONS(172), 1,
      sym_step_definition,
  [1085] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 1,
      sym_title,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 37,
  [SMALL_STATE(4)] = 74,
  [SMALL_STATE(5)] = 100,
  [SMALL_STATE(6)] = 126,
  [SMALL_STATE(7)] = 152,
  [SMALL_STATE(8)] = 177,
  [SMALL_STATE(9)] = 202,
  [SMALL_STATE(10)] = 227,
  [SMALL_STATE(11)] = 258,
  [SMALL_STATE(12)] = 289,
  [SMALL_STATE(13)] = 305,
  [SMALL_STATE(14)] = 334,
  [SMALL_STATE(15)] = 363,
  [SMALL_STATE(16)] = 377,
  [SMALL_STATE(17)] = 405,
  [SMALL_STATE(18)] = 433,
  [SMALL_STATE(19)] = 456,
  [SMALL_STATE(20)] = 469,
  [SMALL_STATE(21)] = 486,
  [SMALL_STATE(22)] = 509,
  [SMALL_STATE(23)] = 526,
  [SMALL_STATE(24)] = 544,
  [SMALL_STATE(25)] = 566,
  [SMALL_STATE(26)] = 582,
  [SMALL_STATE(27)] = 600,
  [SMALL_STATE(28)] = 622,
  [SMALL_STATE(29)] = 638,
  [SMALL_STATE(30)] = 656,
  [SMALL_STATE(31)] = 673,
  [SMALL_STATE(32)] = 690,
  [SMALL_STATE(33)] = 705,
  [SMALL_STATE(34)] = 722,
  [SMALL_STATE(35)] = 737,
  [SMALL_STATE(36)] = 754,
  [SMALL_STATE(37)] = 764,
  [SMALL_STATE(38)] = 774,
  [SMALL_STATE(39)] = 788,
  [SMALL_STATE(40)] = 798,
  [SMALL_STATE(41)] = 808,
  [SMALL_STATE(42)] = 818,
  [SMALL_STATE(43)] = 832,
  [SMALL_STATE(44)] = 845,
  [SMALL_STATE(45)] = 856,
  [SMALL_STATE(46)] = 865,
  [SMALL_STATE(47)] = 876,
  [SMALL_STATE(48)] = 889,
  [SMALL_STATE(49)] = 900,
  [SMALL_STATE(50)] = 909,
  [SMALL_STATE(51)] = 922,
  [SMALL_STATE(52)] = 931,
  [SMALL_STATE(53)] = 939,
  [SMALL_STATE(54)] = 949,
  [SMALL_STATE(55)] = 959,
  [SMALL_STATE(56)] = 966,
  [SMALL_STATE(57)] = 973,
  [SMALL_STATE(58)] = 980,
  [SMALL_STATE(59)] = 987,
  [SMALL_STATE(60)] = 994,
  [SMALL_STATE(61)] = 1001,
  [SMALL_STATE(62)] = 1008,
  [SMALL_STATE(63)] = 1015,
  [SMALL_STATE(64)] = 1022,
  [SMALL_STATE(65)] = 1029,
  [SMALL_STATE(66)] = 1036,
  [SMALL_STATE(67)] = 1043,
  [SMALL_STATE(68)] = 1050,
  [SMALL_STATE(69)] = 1057,
  [SMALL_STATE(70)] = 1064,
  [SMALL_STATE(71)] = 1071,
  [SMALL_STATE(72)] = 1078,
  [SMALL_STATE(73)] = 1085,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_then_steps_repeat1, 2),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_then_steps_repeat1, 2), SHIFT_REPEAT(57),
  [24] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_then_steps_repeat1, 2), SHIFT_REPEAT(65),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_then_steps, 2),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_then_steps, 1),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_given_steps_repeat1, 2),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_given_steps_repeat1, 2), SHIFT_REPEAT(60),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_given_steps_repeat1, 2), SHIFT_REPEAT(65),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_given_steps, 1),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_given_steps, 2),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_additional_step, 2),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_then_step, 2),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_given_step, 2),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_description, 2),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_description_repeat1, 2),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(22),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_scenarios_repeat1, 2),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scenarios_repeat1, 2), SHIFT_REPEAT(56),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scenarios_repeat1, 2), SHIFT_REPEAT(58),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(25),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scenarios, 1),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_scenarios, 1), SHIFT(56),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scenarios, 2),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_scenarios, 2), SHIFT(56),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rules, 1),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [101] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(32),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rules_repeat1, 2),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rules_repeat1, 2), SHIFT_REPEAT(61),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rules_repeat1, 2), SHIFT_REPEAT(63),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_steps, 3),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scenario, 3),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scenario, 5),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_steps, 2),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scenario, 4),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 3),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 4),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 5),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 2),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_feature, 4),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_when_step, 2),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_feature, 3),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_additional_step_keyword, 1),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [162] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_feature, 5),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
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
