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
  sym_feature_keyword = 1,
  sym_title = 2,
  aux_sym_description_token1 = 3,
  anon_sym_LF = 4,
  sym_scenario_keyword = 5,
  sym_example_keyword = 6,
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
  [sym_feature_keyword] = "feature_keyword",
  [sym_title] = "title",
  [aux_sym_description_token1] = "description_token1",
  [anon_sym_LF] = "\n",
  [sym_scenario_keyword] = "scenario_keyword",
  [sym_example_keyword] = "example_keyword",
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
  [sym_feature_keyword] = sym_feature_keyword,
  [sym_title] = sym_title,
  [aux_sym_description_token1] = aux_sym_description_token1,
  [anon_sym_LF] = anon_sym_LF,
  [sym_scenario_keyword] = sym_scenario_keyword,
  [sym_example_keyword] = sym_example_keyword,
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
  [sym_example_keyword] = {
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
  [18] = 16,
  [19] = 15,
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
      if (eof) ADVANCE(60);
      if (lookahead == ' ') ADVANCE(6);
      if (lookahead == 'F') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(5);
      if (lookahead != 0 &&
          (lookahead < 'A' || 'Z' < lookahead)) ADVANCE(57);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(86);
      if (lookahead == ' ' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(76);
      if (lookahead == ' ') ADVANCE(68);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(64);
      if (lookahead != 0) ADVANCE(63);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(62);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(77);
      if (lookahead == ' ') ADVANCE(70);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(71);
      if (lookahead != 0) ADVANCE(63);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(6);
      if (lookahead == 'F') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(5);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(7);
      if (lookahead != 0 &&
          (lookahead < 'A' || 'Z' < lookahead)) ADVANCE(57);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(19);
      if (lookahead == 'F') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(5);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(7);
      if (lookahead != 0 &&
          (lookahead < 'A' || 'Z' < lookahead)) ADVANCE(57);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(1);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1);
      END_STATE();
    case 8:
      if (lookahead == ' ') ADVANCE(8);
      if (lookahead == '*') ADVANCE(10);
      if (lookahead == 'A') ADVANCE(41);
      if (lookahead == 'B') ADVANCE(53);
      if (lookahead == 'E') ADVANCE(55);
      if (lookahead == 'F') ADVANCE(28);
      if (lookahead == 'G') ADVANCE(37);
      if (lookahead == 'S') ADVANCE(26);
      if (lookahead == 'T') ADVANCE(35);
      if (lookahead == 'W') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(5);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(7);
      if (lookahead != 0 &&
          (lookahead < 'C' || 'Z' < lookahead)) ADVANCE(57);
      END_STATE();
    case 9:
      if (lookahead == ' ') ADVANCE(8);
      if (lookahead == 'E') ADVANCE(55);
      if (lookahead == 'F') ADVANCE(28);
      if (lookahead == 'S') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(5);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(7);
      if (lookahead != 0 &&
          (lookahead < 'A' || 'Z' < lookahead)) ADVANCE(57);
      END_STATE();
    case 10:
      if (lookahead == ' ') ADVANCE(85);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 11:
      if (lookahead == ' ') ADVANCE(83);
      END_STATE();
    case 12:
      if (lookahead == ' ') ADVANCE(84);
      END_STATE();
    case 13:
      if (lookahead == ' ') ADVANCE(82);
      END_STATE();
    case 14:
      if (lookahead == ' ') ADVANCE(81);
      END_STATE();
    case 15:
      if (lookahead == ' ') ADVANCE(61);
      END_STATE();
    case 16:
      if (lookahead == ' ') ADVANCE(80);
      END_STATE();
    case 17:
      if (lookahead == ' ') ADVANCE(79);
      END_STATE();
    case 18:
      if (lookahead == ' ') ADVANCE(78);
      END_STATE();
    case 19:
      if (lookahead == ' ') ADVANCE(9);
      if (lookahead == 'E') ADVANCE(55);
      if (lookahead == 'F') ADVANCE(28);
      if (lookahead == 'S') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(5);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(7);
      if (lookahead != 0 &&
          (lookahead < 'A' || 'Z' < lookahead)) ADVANCE(57);
      END_STATE();
    case 20:
      if (lookahead == ':') ADVANCE(15);
      END_STATE();
    case 21:
      if (lookahead == ':') ADVANCE(17);
      END_STATE();
    case 22:
      if (lookahead == ':') ADVANCE(18);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(50);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(40);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(48);
      END_STATE();
    case 26:
      if (lookahead == 'c') ADVANCE(30);
      END_STATE();
    case 27:
      if (lookahead == 'd') ADVANCE(11);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(20);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(42);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(21);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(44);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 35:
      if (lookahead == 'h') ADVANCE(31);
      END_STATE();
    case 36:
      if (lookahead == 'h') ADVANCE(33);
      END_STATE();
    case 37:
      if (lookahead == 'i') ADVANCE(54);
      END_STATE();
    case 38:
      if (lookahead == 'i') ADVANCE(46);
      END_STATE();
    case 39:
      if (lookahead == 'l') ADVANCE(32);
      END_STATE();
    case 40:
      if (lookahead == 'm') ADVANCE(47);
      END_STATE();
    case 41:
      if (lookahead == 'n') ADVANCE(27);
      END_STATE();
    case 42:
      if (lookahead == 'n') ADVANCE(25);
      END_STATE();
    case 43:
      if (lookahead == 'n') ADVANCE(13);
      END_STATE();
    case 44:
      if (lookahead == 'n') ADVANCE(14);
      END_STATE();
    case 45:
      if (lookahead == 'n') ADVANCE(16);
      END_STATE();
    case 46:
      if (lookahead == 'o') ADVANCE(22);
      END_STATE();
    case 47:
      if (lookahead == 'p') ADVANCE(39);
      END_STATE();
    case 48:
      if (lookahead == 'r') ADVANCE(38);
      END_STATE();
    case 49:
      if (lookahead == 'r') ADVANCE(29);
      END_STATE();
    case 50:
      if (lookahead == 't') ADVANCE(52);
      END_STATE();
    case 51:
      if (lookahead == 't') ADVANCE(12);
      END_STATE();
    case 52:
      if (lookahead == 'u') ADVANCE(49);
      END_STATE();
    case 53:
      if (lookahead == 'u') ADVANCE(51);
      END_STATE();
    case 54:
      if (lookahead == 'v') ADVANCE(34);
      END_STATE();
    case 55:
      if (lookahead == 'x') ADVANCE(24);
      END_STATE();
    case 56:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(56)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(59);
      END_STATE();
    case 57:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 58:
      if (lookahead == ' ' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1);
      END_STATE();
    case 59:
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_feature_keyword);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_title);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_description_token1);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == '\n') ADVANCE(76);
      if (lookahead == ' ') ADVANCE(68);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(64);
      if (lookahead != 0) ADVANCE(63);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == '\n') ADVANCE(76);
      if (lookahead == ' ') ADVANCE(65);
      if (lookahead == 'G') ADVANCE(74);
      if (lookahead == 'W') ADVANCE(73);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(64);
      if (lookahead != 0) ADVANCE(63);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == '\n') ADVANCE(76);
      if (lookahead == ' ') ADVANCE(65);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(64);
      if (lookahead != 0) ADVANCE(63);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == '\n') ADVANCE(76);
      if (lookahead == ' ') ADVANCE(66);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(64);
      if (lookahead != 0) ADVANCE(63);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == '\n') ADVANCE(76);
      if (lookahead == ' ') ADVANCE(67);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(64);
      if (lookahead != 0) ADVANCE(63);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == '\n') ADVANCE(77);
      if (lookahead == ' ') ADVANCE(69);
      if (lookahead == 'E') ADVANCE(75);
      if (lookahead == 'S') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(71);
      if (lookahead != 0) ADVANCE(63);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == '\n') ADVANCE(77);
      if (lookahead == ' ') ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(71);
      if (lookahead != 0) ADVANCE(63);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == '\n') ADVANCE(77);
      if (lookahead == ' ') ADVANCE(70);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(71);
      if (lookahead != 0) ADVANCE(63);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == 'c') ADVANCE(30);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == 'h') ADVANCE(33);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == 'i') ADVANCE(54);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == 'x') ADVANCE(24);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(76);
      if (lookahead == ' ') ADVANCE(68);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(64);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(77);
      if (lookahead == ' ') ADVANCE(70);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(71);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_scenario_keyword);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_example_keyword);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_given_keyword);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_when_keyword);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_then_keyword);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_and_keyword);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_but_keyword);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_asterisk_keyword);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_step_definition);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 4},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 4},
  [19] = {.lex_state = 4},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 56},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 56},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_feature_keyword] = ACTIONS(1),
    [sym_scenario_keyword] = ACTIONS(1),
    [sym_example_keyword] = ACTIONS(1),
    [sym_given_keyword] = ACTIONS(1),
    [sym_when_keyword] = ACTIONS(1),
    [sym_then_keyword] = ACTIONS(1),
    [sym_and_keyword] = ACTIONS(1),
    [sym_but_keyword] = ACTIONS(1),
    [sym_asterisk_keyword] = ACTIONS(1),
    [sym_step_definition] = ACTIONS(1),
  },
  [1] = {
    [sym_feature] = STATE(37),
    [sym_feature_keyword] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(7), 1,
      sym_then_keyword,
    STATE(30), 1,
      sym_additional_step_keyword,
    ACTIONS(5), 3,
      ts_builtin_sym_end,
      sym_scenario_keyword,
      sym_example_keyword,
    ACTIONS(10), 3,
      sym_and_keyword,
      sym_but_keyword,
      sym_asterisk_keyword,
    STATE(2), 3,
      sym_then_step,
      sym_additional_step,
      aux_sym_then_steps_repeat1,
  [22] = 5,
    ACTIONS(15), 1,
      sym_then_keyword,
    STATE(30), 1,
      sym_additional_step_keyword,
    ACTIONS(13), 3,
      ts_builtin_sym_end,
      sym_scenario_keyword,
      sym_example_keyword,
    ACTIONS(17), 3,
      sym_and_keyword,
      sym_but_keyword,
      sym_asterisk_keyword,
    STATE(2), 3,
      sym_then_step,
      sym_additional_step,
      aux_sym_then_steps_repeat1,
  [44] = 5,
    ACTIONS(15), 1,
      sym_then_keyword,
    STATE(30), 1,
      sym_additional_step_keyword,
    ACTIONS(17), 3,
      sym_and_keyword,
      sym_but_keyword,
      sym_asterisk_keyword,
    ACTIONS(19), 3,
      ts_builtin_sym_end,
      sym_scenario_keyword,
      sym_example_keyword,
    STATE(3), 3,
      sym_then_step,
      sym_additional_step,
      aux_sym_then_steps_repeat1,
  [66] = 9,
    ACTIONS(23), 1,
      sym_given_keyword,
    ACTIONS(25), 1,
      sym_when_keyword,
    STATE(10), 1,
      sym_given_step,
    STATE(12), 1,
      sym_description,
    STATE(16), 1,
      aux_sym_description_repeat1,
    STATE(21), 1,
      sym_when_step,
    STATE(26), 1,
      sym_steps,
    STATE(27), 1,
      sym_given_steps,
    ACTIONS(21), 2,
      aux_sym_description_token1,
      anon_sym_LF,
  [95] = 6,
    STATE(17), 1,
      sym_description,
    STATE(18), 1,
      aux_sym_description_repeat1,
    STATE(35), 1,
      sym_scenarios,
    ACTIONS(27), 2,
      aux_sym_description_token1,
      anon_sym_LF,
    ACTIONS(29), 2,
      sym_scenario_keyword,
      sym_example_keyword,
    STATE(13), 2,
      sym_scenario,
      aux_sym_scenarios_repeat1,
  [117] = 5,
    ACTIONS(31), 1,
      sym_given_keyword,
    ACTIONS(34), 1,
      sym_when_keyword,
    STATE(30), 1,
      sym_additional_step_keyword,
    ACTIONS(36), 3,
      sym_and_keyword,
      sym_but_keyword,
      sym_asterisk_keyword,
    STATE(7), 3,
      sym_given_step,
      sym_additional_step,
      aux_sym_given_steps_repeat1,
  [137] = 1,
    ACTIONS(39), 9,
      ts_builtin_sym_end,
      sym_scenario_keyword,
      sym_example_keyword,
      sym_given_keyword,
      sym_when_keyword,
      sym_then_keyword,
      sym_and_keyword,
      sym_but_keyword,
      sym_asterisk_keyword,
  [149] = 5,
    ACTIONS(41), 1,
      sym_given_keyword,
    ACTIONS(43), 1,
      sym_when_keyword,
    STATE(30), 1,
      sym_additional_step_keyword,
    ACTIONS(17), 3,
      sym_and_keyword,
      sym_but_keyword,
      sym_asterisk_keyword,
    STATE(7), 3,
      sym_given_step,
      sym_additional_step,
      aux_sym_given_steps_repeat1,
  [169] = 5,
    ACTIONS(41), 1,
      sym_given_keyword,
    ACTIONS(45), 1,
      sym_when_keyword,
    STATE(30), 1,
      sym_additional_step_keyword,
    ACTIONS(17), 3,
      sym_and_keyword,
      sym_but_keyword,
      sym_asterisk_keyword,
    STATE(9), 3,
      sym_given_step,
      sym_additional_step,
      aux_sym_given_steps_repeat1,
  [189] = 1,
    ACTIONS(47), 7,
      ts_builtin_sym_end,
      sym_scenario_keyword,
      sym_example_keyword,
      sym_then_keyword,
      sym_and_keyword,
      sym_but_keyword,
      sym_asterisk_keyword,
  [199] = 6,
    ACTIONS(41), 1,
      sym_given_keyword,
    ACTIONS(49), 1,
      sym_when_keyword,
    STATE(10), 1,
      sym_given_step,
    STATE(21), 1,
      sym_when_step,
    STATE(22), 1,
      sym_steps,
    STATE(27), 1,
      sym_given_steps,
  [218] = 3,
    ACTIONS(51), 1,
      ts_builtin_sym_end,
    ACTIONS(53), 2,
      sym_scenario_keyword,
      sym_example_keyword,
    STATE(20), 2,
      sym_scenario,
      aux_sym_scenarios_repeat1,
  [230] = 1,
    ACTIONS(55), 5,
      sym_given_keyword,
      sym_when_keyword,
      sym_and_keyword,
      sym_but_keyword,
      sym_asterisk_keyword,
  [238] = 3,
    STATE(15), 1,
      aux_sym_description_repeat1,
    ACTIONS(57), 2,
      aux_sym_description_token1,
      anon_sym_LF,
    ACTIONS(60), 2,
      sym_given_keyword,
      sym_when_keyword,
  [250] = 3,
    STATE(15), 1,
      aux_sym_description_repeat1,
    ACTIONS(62), 2,
      aux_sym_description_token1,
      anon_sym_LF,
    ACTIONS(64), 2,
      sym_given_keyword,
      sym_when_keyword,
  [262] = 3,
    STATE(33), 1,
      sym_scenarios,
    ACTIONS(53), 2,
      sym_scenario_keyword,
      sym_example_keyword,
    STATE(13), 2,
      sym_scenario,
      aux_sym_scenarios_repeat1,
  [274] = 3,
    STATE(19), 1,
      aux_sym_description_repeat1,
    ACTIONS(64), 2,
      sym_scenario_keyword,
      sym_example_keyword,
    ACTIONS(66), 2,
      aux_sym_description_token1,
      anon_sym_LF,
  [286] = 3,
    STATE(19), 1,
      aux_sym_description_repeat1,
    ACTIONS(60), 2,
      sym_scenario_keyword,
      sym_example_keyword,
    ACTIONS(68), 2,
      aux_sym_description_token1,
      anon_sym_LF,
  [298] = 3,
    ACTIONS(71), 1,
      ts_builtin_sym_end,
    ACTIONS(73), 2,
      sym_scenario_keyword,
      sym_example_keyword,
    STATE(20), 2,
      sym_scenario,
      aux_sym_scenarios_repeat1,
  [310] = 3,
    ACTIONS(15), 1,
      sym_then_keyword,
    STATE(4), 1,
      sym_then_step,
    STATE(24), 1,
      sym_then_steps,
  [320] = 1,
    ACTIONS(76), 3,
      ts_builtin_sym_end,
      sym_scenario_keyword,
      sym_example_keyword,
  [326] = 3,
    ACTIONS(15), 1,
      sym_then_keyword,
    STATE(4), 1,
      sym_then_step,
    STATE(25), 1,
      sym_then_steps,
  [336] = 1,
    ACTIONS(78), 3,
      ts_builtin_sym_end,
      sym_scenario_keyword,
      sym_example_keyword,
  [342] = 1,
    ACTIONS(80), 3,
      ts_builtin_sym_end,
      sym_scenario_keyword,
      sym_example_keyword,
  [348] = 1,
    ACTIONS(82), 3,
      ts_builtin_sym_end,
      sym_scenario_keyword,
      sym_example_keyword,
  [354] = 2,
    ACTIONS(49), 1,
      sym_when_keyword,
    STATE(23), 1,
      sym_when_step,
  [361] = 1,
    ACTIONS(84), 1,
      sym_then_keyword,
  [365] = 1,
    ACTIONS(86), 1,
      sym_step_definition,
  [369] = 1,
    ACTIONS(88), 1,
      sym_step_definition,
  [373] = 1,
    ACTIONS(90), 1,
      sym_step_definition,
  [377] = 1,
    ACTIONS(92), 1,
      sym_step_definition,
  [381] = 1,
    ACTIONS(94), 1,
      ts_builtin_sym_end,
  [385] = 1,
    ACTIONS(96), 1,
      sym_title,
  [389] = 1,
    ACTIONS(98), 1,
      ts_builtin_sym_end,
  [393] = 1,
    ACTIONS(100), 1,
      sym_title,
  [397] = 1,
    ACTIONS(102), 1,
      ts_builtin_sym_end,
  [401] = 1,
    ACTIONS(104), 1,
      sym_step_definition,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 22,
  [SMALL_STATE(4)] = 44,
  [SMALL_STATE(5)] = 66,
  [SMALL_STATE(6)] = 95,
  [SMALL_STATE(7)] = 117,
  [SMALL_STATE(8)] = 137,
  [SMALL_STATE(9)] = 149,
  [SMALL_STATE(10)] = 169,
  [SMALL_STATE(11)] = 189,
  [SMALL_STATE(12)] = 199,
  [SMALL_STATE(13)] = 218,
  [SMALL_STATE(14)] = 230,
  [SMALL_STATE(15)] = 238,
  [SMALL_STATE(16)] = 250,
  [SMALL_STATE(17)] = 262,
  [SMALL_STATE(18)] = 274,
  [SMALL_STATE(19)] = 286,
  [SMALL_STATE(20)] = 298,
  [SMALL_STATE(21)] = 310,
  [SMALL_STATE(22)] = 320,
  [SMALL_STATE(23)] = 326,
  [SMALL_STATE(24)] = 336,
  [SMALL_STATE(25)] = 342,
  [SMALL_STATE(26)] = 348,
  [SMALL_STATE(27)] = 354,
  [SMALL_STATE(28)] = 361,
  [SMALL_STATE(29)] = 365,
  [SMALL_STATE(30)] = 369,
  [SMALL_STATE(31)] = 373,
  [SMALL_STATE(32)] = 377,
  [SMALL_STATE(33)] = 381,
  [SMALL_STATE(34)] = 385,
  [SMALL_STATE(35)] = 389,
  [SMALL_STATE(36)] = 393,
  [SMALL_STATE(37)] = 397,
  [SMALL_STATE(38)] = 401,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_then_steps_repeat1, 2),
  [7] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_then_steps_repeat1, 2), SHIFT_REPEAT(32),
  [10] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_then_steps_repeat1, 2), SHIFT_REPEAT(29),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_then_steps, 2),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_then_steps, 1),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_given_steps_repeat1, 2), SHIFT_REPEAT(31),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_given_steps_repeat1, 2),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_given_steps_repeat1, 2), SHIFT_REPEAT(29),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_additional_step, 2),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_given_steps, 2),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_given_steps, 1),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_then_step, 2),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scenarios, 1),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_given_step, 2),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(15),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_description_repeat1, 2),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_description, 1),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(19),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_scenarios_repeat1, 2),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scenarios_repeat1, 2), SHIFT_REPEAT(36),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scenario, 4),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_steps, 2),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_steps, 3),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scenario, 3),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_when_step, 2),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_additional_step_keyword, 1),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_feature, 4),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_feature, 3),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [102] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
