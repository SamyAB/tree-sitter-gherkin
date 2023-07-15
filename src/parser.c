#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 39
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 30
#define ALIAS_COUNT 0
#define TOKEN_COUNT 14
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
  sym_scenario_keyword = 6,
  sym_given_keyword = 7,
  sym_when_keyword = 8,
  sym_then_keyword = 9,
  sym_and_keyword = 10,
  sym_but_keyword = 11,
  sym_asterisk_keyword = 12,
  sym_step_definition = 13,
  sym_feature = 14,
  sym_description = 15,
  sym_scenarios = 16,
  sym_scenario = 17,
  sym_steps = 18,
  sym_given_steps = 19,
  sym_then_steps = 20,
  sym_given_step = 21,
  sym_when_step = 22,
  sym_then_step = 23,
  sym_additional_step = 24,
  sym_additional_step_keyword = 25,
  aux_sym_description_repeat1 = 26,
  aux_sym_scenarios_repeat1 = 27,
  aux_sym_given_steps_repeat1 = 28,
  aux_sym_then_steps_repeat1 = 29,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_alpha_word] = "alpha_word",
  [sym_feature_keyword] = "feature_keyword",
  [sym_title] = "title",
  [aux_sym_description_token1] = "description_token1",
  [anon_sym_LF] = "\n",
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
  [18] = 14,
  [19] = 13,
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
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(54);
      if (lookahead == '*') ADVANCE(5);
      if (lookahead == 'A') ADVANCE(101);
      if (lookahead == 'B') ADVANCE(112);
      if (lookahead == 'E') ADVANCE(115);
      if (lookahead == 'F') ADVANCE(90);
      if (lookahead == 'G') ADVANCE(97);
      if (lookahead == 'S') ADVANCE(86);
      if (lookahead == 'T') ADVANCE(95);
      if (lookahead == 'W') ADVANCE(96);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(12);
      if (('C' <= lookahead && lookahead <= 'Z')) ADVANCE(116);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      if (lookahead != 0) ADVANCE(50);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(73);
      if (lookahead == ' ' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(64);
      if (lookahead == 'G') ADVANCE(62);
      if (lookahead == 'W') ADVANCE(61);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(58);
      if (lookahead != 0) ADVANCE(57);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(56);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(65);
      if (lookahead == 'E') ADVANCE(63);
      if (lookahead == 'S') ADVANCE(60);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(59);
      if (lookahead != 0) ADVANCE(57);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(72);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(1);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(70);
      END_STATE();
    case 8:
      if (lookahead == ' ') ADVANCE(71);
      END_STATE();
    case 9:
      if (lookahead == ' ') ADVANCE(69);
      END_STATE();
    case 10:
      if (lookahead == ' ') ADVANCE(68);
      END_STATE();
    case 11:
      if (lookahead == ' ') ADVANCE(67);
      END_STATE();
    case 12:
      if (lookahead == '*') ADVANCE(5);
      if (lookahead == 'A') ADVANCE(101);
      if (lookahead == 'B') ADVANCE(112);
      if (lookahead == 'E') ADVANCE(115);
      if (lookahead == 'F') ADVANCE(90);
      if (lookahead == 'G') ADVANCE(97);
      if (lookahead == 'S') ADVANCE(86);
      if (lookahead == 'T') ADVANCE(95);
      if (lookahead == 'W') ADVANCE(96);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(12);
      if (('C' <= lookahead && lookahead <= 'Z')) ADVANCE(116);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      if (lookahead != 0) ADVANCE(50);
      END_STATE();
    case 13:
      if (lookahead == '*') ADVANCE(5);
      if (lookahead == 'A') ADVANCE(34);
      if (lookahead == 'B') ADVANCE(45);
      if (lookahead == 'E') ADVANCE(48);
      if (lookahead == 'F') ADVANCE(23);
      if (lookahead == 'G') ADVANCE(30);
      if (lookahead == 'S') ADVANCE(19);
      if (lookahead == 'T') ADVANCE(28);
      if (lookahead == 'W') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(13);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(6);
      if (lookahead != 0 &&
          (lookahead < 'C' || 'Z' < lookahead)) ADVANCE(50);
      END_STATE();
    case 14:
      if (lookahead == ':') ADVANCE(66);
      END_STATE();
    case 15:
      if (lookahead == ':') ADVANCE(55);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(33);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(43);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(41);
      END_STATE();
    case 19:
      if (lookahead == 'c') ADVANCE(22);
      END_STATE();
    case 20:
      if (lookahead == 'd') ADVANCE(7);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(14);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(17);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(15);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(36);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 28:
      if (lookahead == 'h') ADVANCE(25);
      END_STATE();
    case 29:
      if (lookahead == 'h') ADVANCE(26);
      END_STATE();
    case 30:
      if (lookahead == 'i') ADVANCE(47);
      END_STATE();
    case 31:
      if (lookahead == 'i') ADVANCE(39);
      END_STATE();
    case 32:
      if (lookahead == 'l') ADVANCE(21);
      END_STATE();
    case 33:
      if (lookahead == 'm') ADVANCE(40);
      END_STATE();
    case 34:
      if (lookahead == 'n') ADVANCE(20);
      END_STATE();
    case 35:
      if (lookahead == 'n') ADVANCE(18);
      END_STATE();
    case 36:
      if (lookahead == 'n') ADVANCE(9);
      END_STATE();
    case 37:
      if (lookahead == 'n') ADVANCE(10);
      END_STATE();
    case 38:
      if (lookahead == 'n') ADVANCE(11);
      END_STATE();
    case 39:
      if (lookahead == 'o') ADVANCE(14);
      END_STATE();
    case 40:
      if (lookahead == 'p') ADVANCE(32);
      END_STATE();
    case 41:
      if (lookahead == 'r') ADVANCE(31);
      END_STATE();
    case 42:
      if (lookahead == 'r') ADVANCE(24);
      END_STATE();
    case 43:
      if (lookahead == 't') ADVANCE(46);
      END_STATE();
    case 44:
      if (lookahead == 't') ADVANCE(8);
      END_STATE();
    case 45:
      if (lookahead == 'u') ADVANCE(44);
      END_STATE();
    case 46:
      if (lookahead == 'u') ADVANCE(42);
      END_STATE();
    case 47:
      if (lookahead == 'v') ADVANCE(27);
      END_STATE();
    case 48:
      if (lookahead == 'x') ADVANCE(16);
      END_STATE();
    case 49:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(49)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(52);
      END_STATE();
    case 50:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 51:
      if (lookahead == ' ' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1);
      END_STATE();
    case 52:
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3);
      END_STATE();
    case 53:
      if (eof) ADVANCE(54);
      if (lookahead == '*') ADVANCE(5);
      if (lookahead == 'A') ADVANCE(34);
      if (lookahead == 'B') ADVANCE(45);
      if (lookahead == 'E') ADVANCE(48);
      if (lookahead == 'F') ADVANCE(23);
      if (lookahead == 'G') ADVANCE(30);
      if (lookahead == 'S') ADVANCE(19);
      if (lookahead == 'T') ADVANCE(28);
      if (lookahead == 'W') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(13);
      if (lookahead != 0 &&
          (lookahead < 'C' || 'Z' < lookahead)) ADVANCE(50);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_feature_keyword);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_title);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_description_token1);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == '\n') ADVANCE(64);
      if (lookahead == 'G') ADVANCE(62);
      if (lookahead == 'W') ADVANCE(61);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(58);
      if (lookahead != 0) ADVANCE(57);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == '\n') ADVANCE(65);
      if (lookahead == 'E') ADVANCE(63);
      if (lookahead == 'S') ADVANCE(60);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(59);
      if (lookahead != 0) ADVANCE(57);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == 'c') ADVANCE(22);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == 'h') ADVANCE(26);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == 'i') ADVANCE(47);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == 'x') ADVANCE(16);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(58);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(65);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(59);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_scenario_keyword);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_given_keyword);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_when_keyword);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_then_keyword);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_and_keyword);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_but_keyword);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_asterisk_keyword);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_step_definition);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_alpha_word);
      if (lookahead == '\n') ADVANCE(73);
      if (lookahead == ' ') ADVANCE(1);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_alpha_word);
      if (lookahead == ' ') ADVANCE(1);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_alpha_word);
      if (lookahead == ' ') ADVANCE(70);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_alpha_word);
      if (lookahead == ' ') ADVANCE(71);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_alpha_word);
      if (lookahead == ' ') ADVANCE(69);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_alpha_word);
      if (lookahead == ' ') ADVANCE(68);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_alpha_word);
      if (lookahead == ' ') ADVANCE(67);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_alpha_word);
      if (lookahead == ':') ADVANCE(66);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_alpha_word);
      if (lookahead == ':') ADVANCE(55);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_alpha_word);
      if (lookahead == 'a') ADVANCE(100);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_alpha_word);
      if (lookahead == 'a') ADVANCE(110);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_alpha_word);
      if (lookahead == 'a') ADVANCE(108);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_alpha_word);
      if (lookahead == 'c') ADVANCE(89);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_alpha_word);
      if (lookahead == 'd') ADVANCE(76);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_alpha_word);
      if (lookahead == 'e') ADVANCE(81);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_alpha_word);
      if (lookahead == 'e') ADVANCE(102);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_alpha_word);
      if (lookahead == 'e') ADVANCE(84);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_alpha_word);
      if (lookahead == 'e') ADVANCE(82);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_alpha_word);
      if (lookahead == 'e') ADVANCE(103);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_alpha_word);
      if (lookahead == 'e') ADVANCE(104);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_alpha_word);
      if (lookahead == 'e') ADVANCE(105);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_alpha_word);
      if (lookahead == 'h') ADVANCE(92);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_alpha_word);
      if (lookahead == 'h') ADVANCE(93);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_alpha_word);
      if (lookahead == 'i') ADVANCE(114);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_alpha_word);
      if (lookahead == 'i') ADVANCE(106);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_alpha_word);
      if (lookahead == 'l') ADVANCE(88);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_alpha_word);
      if (lookahead == 'm') ADVANCE(107);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_alpha_word);
      if (lookahead == 'n') ADVANCE(87);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_alpha_word);
      if (lookahead == 'n') ADVANCE(85);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_alpha_word);
      if (lookahead == 'n') ADVANCE(78);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_alpha_word);
      if (lookahead == 'n') ADVANCE(79);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_alpha_word);
      if (lookahead == 'n') ADVANCE(80);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_alpha_word);
      if (lookahead == 'o') ADVANCE(81);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_alpha_word);
      if (lookahead == 'p') ADVANCE(99);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_alpha_word);
      if (lookahead == 'r') ADVANCE(98);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_alpha_word);
      if (lookahead == 'r') ADVANCE(91);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_alpha_word);
      if (lookahead == 't') ADVANCE(113);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_alpha_word);
      if (lookahead == 't') ADVANCE(77);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_alpha_word);
      if (lookahead == 'u') ADVANCE(111);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_alpha_word);
      if (lookahead == 'u') ADVANCE(109);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_alpha_word);
      if (lookahead == 'v') ADVANCE(94);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_alpha_word);
      if (lookahead == 'x') ADVANCE(83);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_alpha_word);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_alpha_word);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
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
  [1] = {.lex_state = 53},
  [2] = {.lex_state = 53},
  [3] = {.lex_state = 53},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 53},
  [6] = {.lex_state = 53},
  [7] = {.lex_state = 53},
  [8] = {.lex_state = 53},
  [9] = {.lex_state = 4},
  [10] = {.lex_state = 53},
  [11] = {.lex_state = 53},
  [12] = {.lex_state = 53},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 53},
  [16] = {.lex_state = 53},
  [17] = {.lex_state = 53},
  [18] = {.lex_state = 4},
  [19] = {.lex_state = 4},
  [20] = {.lex_state = 53},
  [21] = {.lex_state = 53},
  [22] = {.lex_state = 53},
  [23] = {.lex_state = 53},
  [24] = {.lex_state = 53},
  [25] = {.lex_state = 53},
  [26] = {.lex_state = 53},
  [27] = {.lex_state = 53},
  [28] = {.lex_state = 53},
  [29] = {.lex_state = 49},
  [30] = {.lex_state = 53},
  [31] = {.lex_state = 53},
  [32] = {.lex_state = 53},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 53},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 53},
  [37] = {.lex_state = 49},
  [38] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_alpha_word] = ACTIONS(1),
    [sym_feature_keyword] = ACTIONS(1),
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
    [sym_feature] = STATE(38),
    [sym_feature_keyword] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(7), 1,
      sym_then_keyword,
    STATE(32), 1,
      sym_additional_step_keyword,
    ACTIONS(5), 2,
      ts_builtin_sym_end,
      sym_scenario_keyword,
    ACTIONS(10), 3,
      sym_and_keyword,
      sym_but_keyword,
      sym_asterisk_keyword,
    STATE(2), 3,
      sym_then_step,
      sym_additional_step,
      aux_sym_then_steps_repeat1,
  [21] = 5,
    ACTIONS(15), 1,
      sym_then_keyword,
    STATE(32), 1,
      sym_additional_step_keyword,
    ACTIONS(13), 2,
      ts_builtin_sym_end,
      sym_scenario_keyword,
    ACTIONS(17), 3,
      sym_and_keyword,
      sym_but_keyword,
      sym_asterisk_keyword,
    STATE(2), 3,
      sym_then_step,
      sym_additional_step,
      aux_sym_then_steps_repeat1,
  [42] = 9,
    ACTIONS(21), 1,
      sym_given_keyword,
    ACTIONS(23), 1,
      sym_when_keyword,
    STATE(8), 1,
      sym_given_step,
    STATE(11), 1,
      sym_description,
    STATE(14), 1,
      aux_sym_description_repeat1,
    STATE(21), 1,
      sym_when_step,
    STATE(24), 1,
      sym_steps,
    STATE(25), 1,
      sym_given_steps,
    ACTIONS(19), 2,
      aux_sym_description_token1,
      anon_sym_LF,
  [71] = 5,
    ACTIONS(15), 1,
      sym_then_keyword,
    STATE(32), 1,
      sym_additional_step_keyword,
    ACTIONS(25), 2,
      ts_builtin_sym_end,
      sym_scenario_keyword,
    ACTIONS(17), 3,
      sym_and_keyword,
      sym_but_keyword,
      sym_asterisk_keyword,
    STATE(3), 3,
      sym_then_step,
      sym_additional_step,
      aux_sym_then_steps_repeat1,
  [92] = 5,
    ACTIONS(27), 1,
      sym_given_keyword,
    ACTIONS(30), 1,
      sym_when_keyword,
    STATE(32), 1,
      sym_additional_step_keyword,
    ACTIONS(32), 3,
      sym_and_keyword,
      sym_but_keyword,
      sym_asterisk_keyword,
    STATE(6), 3,
      sym_given_step,
      sym_additional_step,
      aux_sym_given_steps_repeat1,
  [112] = 5,
    ACTIONS(35), 1,
      sym_given_keyword,
    ACTIONS(37), 1,
      sym_when_keyword,
    STATE(32), 1,
      sym_additional_step_keyword,
    ACTIONS(17), 3,
      sym_and_keyword,
      sym_but_keyword,
      sym_asterisk_keyword,
    STATE(6), 3,
      sym_given_step,
      sym_additional_step,
      aux_sym_given_steps_repeat1,
  [132] = 5,
    ACTIONS(35), 1,
      sym_given_keyword,
    ACTIONS(39), 1,
      sym_when_keyword,
    STATE(32), 1,
      sym_additional_step_keyword,
    ACTIONS(17), 3,
      sym_and_keyword,
      sym_but_keyword,
      sym_asterisk_keyword,
    STATE(7), 3,
      sym_given_step,
      sym_additional_step,
      aux_sym_given_steps_repeat1,
  [152] = 6,
    ACTIONS(43), 1,
      sym_scenario_keyword,
    STATE(17), 1,
      sym_description,
    STATE(18), 1,
      aux_sym_description_repeat1,
    STATE(35), 1,
      sym_scenarios,
    ACTIONS(41), 2,
      aux_sym_description_token1,
      anon_sym_LF,
    STATE(16), 2,
      sym_scenario,
      aux_sym_scenarios_repeat1,
  [173] = 1,
    ACTIONS(45), 8,
      ts_builtin_sym_end,
      sym_scenario_keyword,
      sym_given_keyword,
      sym_when_keyword,
      sym_then_keyword,
      sym_and_keyword,
      sym_but_keyword,
      sym_asterisk_keyword,
  [184] = 6,
    ACTIONS(35), 1,
      sym_given_keyword,
    ACTIONS(47), 1,
      sym_when_keyword,
    STATE(8), 1,
      sym_given_step,
    STATE(21), 1,
      sym_when_step,
    STATE(25), 1,
      sym_given_steps,
    STATE(26), 1,
      sym_steps,
  [203] = 1,
    ACTIONS(49), 6,
      ts_builtin_sym_end,
      sym_scenario_keyword,
      sym_then_keyword,
      sym_and_keyword,
      sym_but_keyword,
      sym_asterisk_keyword,
  [212] = 3,
    STATE(13), 1,
      aux_sym_description_repeat1,
    ACTIONS(51), 2,
      aux_sym_description_token1,
      anon_sym_LF,
    ACTIONS(54), 2,
      sym_given_keyword,
      sym_when_keyword,
  [224] = 3,
    STATE(13), 1,
      aux_sym_description_repeat1,
    ACTIONS(56), 2,
      aux_sym_description_token1,
      anon_sym_LF,
    ACTIONS(58), 2,
      sym_given_keyword,
      sym_when_keyword,
  [236] = 1,
    ACTIONS(60), 5,
      sym_given_keyword,
      sym_when_keyword,
      sym_and_keyword,
      sym_but_keyword,
      sym_asterisk_keyword,
  [244] = 3,
    ACTIONS(62), 1,
      ts_builtin_sym_end,
    ACTIONS(64), 1,
      sym_scenario_keyword,
    STATE(20), 2,
      sym_scenario,
      aux_sym_scenarios_repeat1,
  [255] = 3,
    ACTIONS(64), 1,
      sym_scenario_keyword,
    STATE(33), 1,
      sym_scenarios,
    STATE(16), 2,
      sym_scenario,
      aux_sym_scenarios_repeat1,
  [266] = 3,
    ACTIONS(58), 1,
      sym_scenario_keyword,
    STATE(19), 1,
      aux_sym_description_repeat1,
    ACTIONS(66), 2,
      aux_sym_description_token1,
      anon_sym_LF,
  [277] = 3,
    ACTIONS(54), 1,
      sym_scenario_keyword,
    STATE(19), 1,
      aux_sym_description_repeat1,
    ACTIONS(68), 2,
      aux_sym_description_token1,
      anon_sym_LF,
  [288] = 3,
    ACTIONS(71), 1,
      ts_builtin_sym_end,
    ACTIONS(73), 1,
      sym_scenario_keyword,
    STATE(20), 2,
      sym_scenario,
      aux_sym_scenarios_repeat1,
  [299] = 3,
    ACTIONS(15), 1,
      sym_then_keyword,
    STATE(5), 1,
      sym_then_step,
    STATE(23), 1,
      sym_then_steps,
  [309] = 3,
    ACTIONS(15), 1,
      sym_then_keyword,
    STATE(5), 1,
      sym_then_step,
    STATE(27), 1,
      sym_then_steps,
  [319] = 1,
    ACTIONS(76), 2,
      ts_builtin_sym_end,
      sym_scenario_keyword,
  [324] = 1,
    ACTIONS(78), 2,
      ts_builtin_sym_end,
      sym_scenario_keyword,
  [329] = 2,
    ACTIONS(47), 1,
      sym_when_keyword,
    STATE(22), 1,
      sym_when_step,
  [336] = 1,
    ACTIONS(80), 2,
      ts_builtin_sym_end,
      sym_scenario_keyword,
  [341] = 1,
    ACTIONS(82), 2,
      ts_builtin_sym_end,
      sym_scenario_keyword,
  [346] = 1,
    ACTIONS(84), 1,
      sym_then_keyword,
  [350] = 1,
    ACTIONS(86), 1,
      sym_title,
  [354] = 1,
    ACTIONS(88), 1,
      sym_step_definition,
  [358] = 1,
    ACTIONS(90), 1,
      sym_step_definition,
  [362] = 1,
    ACTIONS(92), 1,
      sym_step_definition,
  [366] = 1,
    ACTIONS(94), 1,
      ts_builtin_sym_end,
  [370] = 1,
    ACTIONS(96), 1,
      sym_step_definition,
  [374] = 1,
    ACTIONS(98), 1,
      ts_builtin_sym_end,
  [378] = 1,
    ACTIONS(100), 1,
      sym_step_definition,
  [382] = 1,
    ACTIONS(102), 1,
      sym_title,
  [386] = 1,
    ACTIONS(104), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 21,
  [SMALL_STATE(4)] = 42,
  [SMALL_STATE(5)] = 71,
  [SMALL_STATE(6)] = 92,
  [SMALL_STATE(7)] = 112,
  [SMALL_STATE(8)] = 132,
  [SMALL_STATE(9)] = 152,
  [SMALL_STATE(10)] = 173,
  [SMALL_STATE(11)] = 184,
  [SMALL_STATE(12)] = 203,
  [SMALL_STATE(13)] = 212,
  [SMALL_STATE(14)] = 224,
  [SMALL_STATE(15)] = 236,
  [SMALL_STATE(16)] = 244,
  [SMALL_STATE(17)] = 255,
  [SMALL_STATE(18)] = 266,
  [SMALL_STATE(19)] = 277,
  [SMALL_STATE(20)] = 288,
  [SMALL_STATE(21)] = 299,
  [SMALL_STATE(22)] = 309,
  [SMALL_STATE(23)] = 319,
  [SMALL_STATE(24)] = 324,
  [SMALL_STATE(25)] = 329,
  [SMALL_STATE(26)] = 336,
  [SMALL_STATE(27)] = 341,
  [SMALL_STATE(28)] = 346,
  [SMALL_STATE(29)] = 350,
  [SMALL_STATE(30)] = 354,
  [SMALL_STATE(31)] = 358,
  [SMALL_STATE(32)] = 362,
  [SMALL_STATE(33)] = 366,
  [SMALL_STATE(34)] = 370,
  [SMALL_STATE(35)] = 374,
  [SMALL_STATE(36)] = 378,
  [SMALL_STATE(37)] = 382,
  [SMALL_STATE(38)] = 386,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_then_steps_repeat1, 2),
  [7] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_then_steps_repeat1, 2), SHIFT_REPEAT(30),
  [10] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_then_steps_repeat1, 2), SHIFT_REPEAT(34),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_then_steps, 2),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_then_steps, 1),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_given_steps_repeat1, 2), SHIFT_REPEAT(31),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_given_steps_repeat1, 2),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_given_steps_repeat1, 2), SHIFT_REPEAT(34),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_given_steps, 2),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_given_steps, 1),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_additional_step, 2),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_then_step, 2),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(13),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_description_repeat1, 2),
  [56] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_description, 1),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_given_step, 2),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scenarios, 1),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(19),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_scenarios_repeat1, 2),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scenarios_repeat1, 2), SHIFT_REPEAT(37),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_steps, 2),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scenario, 3),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scenario, 4),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_steps, 3),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_when_step, 2),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_feature, 4),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_additional_step_keyword, 1),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_feature, 3),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [104] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
