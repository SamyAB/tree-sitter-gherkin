#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 25
#define LARGE_STATE_COUNT 3
#define SYMBOL_COUNT 23
#define ALIAS_COUNT 0
#define TOKEN_COUNT 13
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
  sym_step_definition = 12,
  sym_feature = 13,
  sym_description = 14,
  sym_scenarios = 15,
  sym_scenario = 16,
  sym_steps = 17,
  sym_full_step = 18,
  sym_step_keyword = 19,
  aux_sym_description_repeat1 = 20,
  aux_sym_scenarios_repeat1 = 21,
  aux_sym_steps_repeat1 = 22,
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
  [sym_step_definition] = "step_definition",
  [sym_feature] = "feature",
  [sym_description] = "description",
  [sym_scenarios] = "scenarios",
  [sym_scenario] = "scenario",
  [sym_steps] = "steps",
  [sym_full_step] = "full_step",
  [sym_step_keyword] = "step_keyword",
  [aux_sym_description_repeat1] = "description_repeat1",
  [aux_sym_scenarios_repeat1] = "scenarios_repeat1",
  [aux_sym_steps_repeat1] = "steps_repeat1",
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
  [sym_step_definition] = sym_step_definition,
  [sym_feature] = sym_feature,
  [sym_description] = sym_description,
  [sym_scenarios] = sym_scenarios,
  [sym_scenario] = sym_scenario,
  [sym_steps] = sym_steps,
  [sym_full_step] = sym_full_step,
  [sym_step_keyword] = sym_step_keyword,
  [aux_sym_description_repeat1] = aux_sym_description_repeat1,
  [aux_sym_scenarios_repeat1] = aux_sym_scenarios_repeat1,
  [aux_sym_steps_repeat1] = aux_sym_steps_repeat1,
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
  [sym_full_step] = {
    .visible = true,
    .named = true,
  },
  [sym_step_keyword] = {
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
  [aux_sym_steps_repeat1] = {
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
  [11] = 6,
  [12] = 12,
  [13] = 13,
  [14] = 7,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(59);
      if (lookahead == ' ') ADVANCE(6);
      if (lookahead == 'F') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(5);
      if (lookahead != 0 &&
          (lookahead < 'A' || 'Z' < lookahead)) ADVANCE(56);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(87);
      if (lookahead == ' ' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(78);
      if (lookahead == ' ') ADVANCE(67);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(63);
      if (lookahead != 0) ADVANCE(62);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(61);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(79);
      if (lookahead == ' ') ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(70);
      if (lookahead != 0) ADVANCE(62);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(6);
      if (lookahead == 'F') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(5);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(7);
      if (lookahead != 0 &&
          (lookahead < 'A' || 'Z' < lookahead)) ADVANCE(56);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(18);
      if (lookahead == 'F') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(5);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(7);
      if (lookahead != 0 &&
          (lookahead < 'A' || 'Z' < lookahead)) ADVANCE(56);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(1);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1);
      END_STATE();
    case 8:
      if (lookahead == ' ') ADVANCE(8);
      if (lookahead == 'A') ADVANCE(40);
      if (lookahead == 'B') ADVANCE(52);
      if (lookahead == 'E') ADVANCE(54);
      if (lookahead == 'F') ADVANCE(27);
      if (lookahead == 'G') ADVANCE(36);
      if (lookahead == 'S') ADVANCE(25);
      if (lookahead == 'T') ADVANCE(34);
      if (lookahead == 'W') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(5);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(7);
      if (lookahead != 0 &&
          (lookahead < 'C' || 'Z' < lookahead)) ADVANCE(56);
      END_STATE();
    case 9:
      if (lookahead == ' ') ADVANCE(8);
      if (lookahead == 'E') ADVANCE(54);
      if (lookahead == 'F') ADVANCE(27);
      if (lookahead == 'S') ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(5);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(7);
      if (lookahead != 0 &&
          (lookahead < 'A' || 'Z' < lookahead)) ADVANCE(56);
      END_STATE();
    case 10:
      if (lookahead == ' ') ADVANCE(85);
      END_STATE();
    case 11:
      if (lookahead == ' ') ADVANCE(86);
      END_STATE();
    case 12:
      if (lookahead == ' ') ADVANCE(84);
      END_STATE();
    case 13:
      if (lookahead == ' ') ADVANCE(83);
      END_STATE();
    case 14:
      if (lookahead == ' ') ADVANCE(60);
      END_STATE();
    case 15:
      if (lookahead == ' ') ADVANCE(82);
      END_STATE();
    case 16:
      if (lookahead == ' ') ADVANCE(81);
      END_STATE();
    case 17:
      if (lookahead == ' ') ADVANCE(80);
      END_STATE();
    case 18:
      if (lookahead == ' ') ADVANCE(9);
      if (lookahead == 'E') ADVANCE(54);
      if (lookahead == 'F') ADVANCE(27);
      if (lookahead == 'S') ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(5);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(7);
      if (lookahead != 0 &&
          (lookahead < 'A' || 'Z' < lookahead)) ADVANCE(56);
      END_STATE();
    case 19:
      if (lookahead == ':') ADVANCE(14);
      END_STATE();
    case 20:
      if (lookahead == ':') ADVANCE(16);
      END_STATE();
    case 21:
      if (lookahead == ':') ADVANCE(17);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(49);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(39);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(47);
      END_STATE();
    case 25:
      if (lookahead == 'c') ADVANCE(29);
      END_STATE();
    case 26:
      if (lookahead == 'd') ADVANCE(10);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(22);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(19);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(42);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(20);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(44);
      END_STATE();
    case 34:
      if (lookahead == 'h') ADVANCE(30);
      END_STATE();
    case 35:
      if (lookahead == 'h') ADVANCE(32);
      END_STATE();
    case 36:
      if (lookahead == 'i') ADVANCE(53);
      END_STATE();
    case 37:
      if (lookahead == 'i') ADVANCE(45);
      END_STATE();
    case 38:
      if (lookahead == 'l') ADVANCE(31);
      END_STATE();
    case 39:
      if (lookahead == 'm') ADVANCE(46);
      END_STATE();
    case 40:
      if (lookahead == 'n') ADVANCE(26);
      END_STATE();
    case 41:
      if (lookahead == 'n') ADVANCE(24);
      END_STATE();
    case 42:
      if (lookahead == 'n') ADVANCE(12);
      END_STATE();
    case 43:
      if (lookahead == 'n') ADVANCE(13);
      END_STATE();
    case 44:
      if (lookahead == 'n') ADVANCE(15);
      END_STATE();
    case 45:
      if (lookahead == 'o') ADVANCE(21);
      END_STATE();
    case 46:
      if (lookahead == 'p') ADVANCE(38);
      END_STATE();
    case 47:
      if (lookahead == 'r') ADVANCE(37);
      END_STATE();
    case 48:
      if (lookahead == 'r') ADVANCE(28);
      END_STATE();
    case 49:
      if (lookahead == 't') ADVANCE(51);
      END_STATE();
    case 50:
      if (lookahead == 't') ADVANCE(11);
      END_STATE();
    case 51:
      if (lookahead == 'u') ADVANCE(48);
      END_STATE();
    case 52:
      if (lookahead == 'u') ADVANCE(50);
      END_STATE();
    case 53:
      if (lookahead == 'v') ADVANCE(33);
      END_STATE();
    case 54:
      if (lookahead == 'x') ADVANCE(23);
      END_STATE();
    case 55:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(55)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(58);
      END_STATE();
    case 56:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 57:
      if (lookahead == ' ' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1);
      END_STATE();
    case 58:
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3);
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
      if (lookahead == '\n') ADVANCE(78);
      if (lookahead == ' ') ADVANCE(67);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(63);
      if (lookahead != 0) ADVANCE(62);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == '\n') ADVANCE(78);
      if (lookahead == ' ') ADVANCE(64);
      if (lookahead == 'A') ADVANCE(75);
      if (lookahead == 'B') ADVANCE(76);
      if (lookahead == 'G') ADVANCE(74);
      if (lookahead == 'T') ADVANCE(72);
      if (lookahead == 'W') ADVANCE(73);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(63);
      if (lookahead != 0) ADVANCE(62);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == '\n') ADVANCE(78);
      if (lookahead == ' ') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(63);
      if (lookahead != 0) ADVANCE(62);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == '\n') ADVANCE(78);
      if (lookahead == ' ') ADVANCE(65);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(63);
      if (lookahead != 0) ADVANCE(62);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == '\n') ADVANCE(78);
      if (lookahead == ' ') ADVANCE(66);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(63);
      if (lookahead != 0) ADVANCE(62);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == '\n') ADVANCE(79);
      if (lookahead == ' ') ADVANCE(68);
      if (lookahead == 'E') ADVANCE(77);
      if (lookahead == 'S') ADVANCE(71);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(70);
      if (lookahead != 0) ADVANCE(62);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == '\n') ADVANCE(79);
      if (lookahead == ' ') ADVANCE(68);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(70);
      if (lookahead != 0) ADVANCE(62);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == '\n') ADVANCE(79);
      if (lookahead == ' ') ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(70);
      if (lookahead != 0) ADVANCE(62);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == 'c') ADVANCE(29);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == 'h') ADVANCE(30);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == 'h') ADVANCE(32);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == 'i') ADVANCE(53);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == 'n') ADVANCE(26);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == 'u') ADVANCE(50);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == 'x') ADVANCE(23);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(78);
      if (lookahead == ' ') ADVANCE(67);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(63);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(79);
      if (lookahead == ' ') ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(70);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_scenario_keyword);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_example_keyword);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_given_keyword);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_when_keyword);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_then_keyword);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_and_keyword);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_but_keyword);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_step_definition);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 4},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 4},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 4},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 55},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 55},
  [24] = {.lex_state = 0},
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
    [sym_step_definition] = ACTIONS(1),
  },
  [1] = {
    [sym_feature] = STATE(24),
    [sym_feature_keyword] = ACTIONS(3),
  },
  [2] = {
    [sym_description] = STATE(10),
    [sym_steps] = STATE(16),
    [sym_full_step] = STATE(9),
    [sym_step_keyword] = STATE(21),
    [aux_sym_description_repeat1] = STATE(7),
    [aux_sym_description_token1] = ACTIONS(5),
    [anon_sym_LF] = ACTIONS(5),
    [sym_given_keyword] = ACTIONS(7),
    [sym_when_keyword] = ACTIONS(7),
    [sym_then_keyword] = ACTIONS(7),
    [sym_and_keyword] = ACTIONS(7),
    [sym_but_keyword] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    STATE(21), 1,
      sym_step_keyword,
    STATE(3), 2,
      sym_full_step,
      aux_sym_steps_repeat1,
    ACTIONS(9), 3,
      ts_builtin_sym_end,
      sym_scenario_keyword,
      sym_example_keyword,
    ACTIONS(11), 5,
      sym_given_keyword,
      sym_when_keyword,
      sym_then_keyword,
      sym_and_keyword,
      sym_but_keyword,
  [20] = 4,
    STATE(21), 1,
      sym_step_keyword,
    STATE(3), 2,
      sym_full_step,
      aux_sym_steps_repeat1,
    ACTIONS(14), 3,
      ts_builtin_sym_end,
      sym_scenario_keyword,
      sym_example_keyword,
    ACTIONS(16), 5,
      sym_given_keyword,
      sym_when_keyword,
      sym_then_keyword,
      sym_and_keyword,
      sym_but_keyword,
  [40] = 6,
    STATE(14), 1,
      aux_sym_description_repeat1,
    STATE(15), 1,
      sym_description,
    STATE(22), 1,
      sym_scenarios,
    ACTIONS(18), 2,
      aux_sym_description_token1,
      anon_sym_LF,
    ACTIONS(20), 2,
      sym_scenario_keyword,
      sym_example_keyword,
    STATE(13), 2,
      sym_scenario,
      aux_sym_scenarios_repeat1,
  [62] = 3,
    STATE(6), 1,
      aux_sym_description_repeat1,
    ACTIONS(22), 2,
      aux_sym_description_token1,
      anon_sym_LF,
    ACTIONS(25), 5,
      sym_given_keyword,
      sym_when_keyword,
      sym_then_keyword,
      sym_and_keyword,
      sym_but_keyword,
  [77] = 3,
    STATE(6), 1,
      aux_sym_description_repeat1,
    ACTIONS(27), 2,
      aux_sym_description_token1,
      anon_sym_LF,
    ACTIONS(29), 5,
      sym_given_keyword,
      sym_when_keyword,
      sym_then_keyword,
      sym_and_keyword,
      sym_but_keyword,
  [92] = 1,
    ACTIONS(31), 8,
      ts_builtin_sym_end,
      sym_scenario_keyword,
      sym_example_keyword,
      sym_given_keyword,
      sym_when_keyword,
      sym_then_keyword,
      sym_and_keyword,
      sym_but_keyword,
  [103] = 3,
    STATE(21), 1,
      sym_step_keyword,
    STATE(4), 2,
      sym_full_step,
      aux_sym_steps_repeat1,
    ACTIONS(16), 5,
      sym_given_keyword,
      sym_when_keyword,
      sym_then_keyword,
      sym_and_keyword,
      sym_but_keyword,
  [118] = 4,
    STATE(9), 1,
      sym_full_step,
    STATE(17), 1,
      sym_steps,
    STATE(21), 1,
      sym_step_keyword,
    ACTIONS(16), 5,
      sym_given_keyword,
      sym_when_keyword,
      sym_then_keyword,
      sym_and_keyword,
      sym_but_keyword,
  [135] = 3,
    STATE(11), 1,
      aux_sym_description_repeat1,
    ACTIONS(25), 2,
      sym_scenario_keyword,
      sym_example_keyword,
    ACTIONS(33), 2,
      aux_sym_description_token1,
      anon_sym_LF,
  [147] = 3,
    ACTIONS(36), 1,
      ts_builtin_sym_end,
    ACTIONS(38), 2,
      sym_scenario_keyword,
      sym_example_keyword,
    STATE(12), 2,
      sym_scenario,
      aux_sym_scenarios_repeat1,
  [159] = 3,
    ACTIONS(41), 1,
      ts_builtin_sym_end,
    ACTIONS(43), 2,
      sym_scenario_keyword,
      sym_example_keyword,
    STATE(12), 2,
      sym_scenario,
      aux_sym_scenarios_repeat1,
  [171] = 3,
    STATE(11), 1,
      aux_sym_description_repeat1,
    ACTIONS(29), 2,
      sym_scenario_keyword,
      sym_example_keyword,
    ACTIONS(45), 2,
      aux_sym_description_token1,
      anon_sym_LF,
  [183] = 3,
    STATE(18), 1,
      sym_scenarios,
    ACTIONS(43), 2,
      sym_scenario_keyword,
      sym_example_keyword,
    STATE(13), 2,
      sym_scenario,
      aux_sym_scenarios_repeat1,
  [195] = 1,
    ACTIONS(47), 3,
      ts_builtin_sym_end,
      sym_scenario_keyword,
      sym_example_keyword,
  [201] = 1,
    ACTIONS(49), 3,
      ts_builtin_sym_end,
      sym_scenario_keyword,
      sym_example_keyword,
  [207] = 1,
    ACTIONS(51), 1,
      ts_builtin_sym_end,
  [211] = 1,
    ACTIONS(53), 1,
      sym_step_definition,
  [215] = 1,
    ACTIONS(55), 1,
      sym_title,
  [219] = 1,
    ACTIONS(57), 1,
      sym_step_definition,
  [223] = 1,
    ACTIONS(59), 1,
      ts_builtin_sym_end,
  [227] = 1,
    ACTIONS(61), 1,
      sym_title,
  [231] = 1,
    ACTIONS(63), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(3)] = 0,
  [SMALL_STATE(4)] = 20,
  [SMALL_STATE(5)] = 40,
  [SMALL_STATE(6)] = 62,
  [SMALL_STATE(7)] = 77,
  [SMALL_STATE(8)] = 92,
  [SMALL_STATE(9)] = 103,
  [SMALL_STATE(10)] = 118,
  [SMALL_STATE(11)] = 135,
  [SMALL_STATE(12)] = 147,
  [SMALL_STATE(13)] = 159,
  [SMALL_STATE(14)] = 171,
  [SMALL_STATE(15)] = 183,
  [SMALL_STATE(16)] = 195,
  [SMALL_STATE(17)] = 201,
  [SMALL_STATE(18)] = 207,
  [SMALL_STATE(19)] = 211,
  [SMALL_STATE(20)] = 215,
  [SMALL_STATE(21)] = 219,
  [SMALL_STATE(22)] = 223,
  [SMALL_STATE(23)] = 227,
  [SMALL_STATE(24)] = 231,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_steps_repeat1, 2),
  [11] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_steps_repeat1, 2), SHIFT_REPEAT(19),
  [14] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_steps, 2),
  [16] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [18] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [20] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [22] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(6),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_description_repeat1, 2),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_description, 1),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_step, 2),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(11),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_scenarios_repeat1, 2),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scenarios_repeat1, 2), SHIFT_REPEAT(23),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scenarios, 1),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scenario, 3),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scenario, 4),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_feature, 4),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_keyword, 1),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_feature, 3),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [63] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
