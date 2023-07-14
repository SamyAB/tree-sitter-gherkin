#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 25
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 21
#define ALIAS_COUNT 0
#define TOKEN_COUNT 11
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
  sym_step_definition = 10,
  sym_feature = 11,
  sym_description = 12,
  sym_scenarios = 13,
  sym_scenario = 14,
  sym_steps = 15,
  sym_full_step = 16,
  sym_step_keyword = 17,
  aux_sym_description_repeat1 = 18,
  aux_sym_scenarios_repeat1 = 19,
  aux_sym_steps_repeat1 = 20,
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
      if (eof) ADVANCE(53);
      if (lookahead == ' ') ADVANCE(6);
      if (lookahead == 'F') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(5);
      if (lookahead != 0 &&
          (lookahead < 'A' || 'Z' < lookahead)) ADVANCE(50);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(77);
      if (lookahead == ' ' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(70);
      if (lookahead == ' ') ADVANCE(61);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(57);
      if (lookahead != 0) ADVANCE(56);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(55);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(71);
      if (lookahead == ' ') ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(64);
      if (lookahead != 0) ADVANCE(56);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(6);
      if (lookahead == 'F') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(5);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(7);
      if (lookahead != 0 &&
          (lookahead < 'A' || 'Z' < lookahead)) ADVANCE(50);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(16);
      if (lookahead == 'F') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(5);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(7);
      if (lookahead != 0 &&
          (lookahead < 'A' || 'Z' < lookahead)) ADVANCE(50);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(1);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1);
      END_STATE();
    case 8:
      if (lookahead == ' ') ADVANCE(8);
      if (lookahead == 'E') ADVANCE(48);
      if (lookahead == 'F') ADVANCE(24);
      if (lookahead == 'G') ADVANCE(33);
      if (lookahead == 'S') ADVANCE(23);
      if (lookahead == 'T') ADVANCE(31);
      if (lookahead == 'W') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(5);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(7);
      if (lookahead != 0 &&
          (lookahead < 'A' || 'Z' < lookahead)) ADVANCE(50);
      END_STATE();
    case 9:
      if (lookahead == ' ') ADVANCE(8);
      if (lookahead == 'E') ADVANCE(48);
      if (lookahead == 'F') ADVANCE(24);
      if (lookahead == 'S') ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(5);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(7);
      if (lookahead != 0 &&
          (lookahead < 'A' || 'Z' < lookahead)) ADVANCE(50);
      END_STATE();
    case 10:
      if (lookahead == ' ') ADVANCE(76);
      END_STATE();
    case 11:
      if (lookahead == ' ') ADVANCE(75);
      END_STATE();
    case 12:
      if (lookahead == ' ') ADVANCE(54);
      END_STATE();
    case 13:
      if (lookahead == ' ') ADVANCE(74);
      END_STATE();
    case 14:
      if (lookahead == ' ') ADVANCE(73);
      END_STATE();
    case 15:
      if (lookahead == ' ') ADVANCE(72);
      END_STATE();
    case 16:
      if (lookahead == ' ') ADVANCE(9);
      if (lookahead == 'E') ADVANCE(48);
      if (lookahead == 'F') ADVANCE(24);
      if (lookahead == 'S') ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(5);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(7);
      if (lookahead != 0 &&
          (lookahead < 'A' || 'Z' < lookahead)) ADVANCE(50);
      END_STATE();
    case 17:
      if (lookahead == ':') ADVANCE(12);
      END_STATE();
    case 18:
      if (lookahead == ':') ADVANCE(14);
      END_STATE();
    case 19:
      if (lookahead == ':') ADVANCE(15);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(45);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(36);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(43);
      END_STATE();
    case 23:
      if (lookahead == 'c') ADVANCE(25);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(20);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(39);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(17);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 31:
      if (lookahead == 'h') ADVANCE(27);
      END_STATE();
    case 32:
      if (lookahead == 'h') ADVANCE(28);
      END_STATE();
    case 33:
      if (lookahead == 'i') ADVANCE(47);
      END_STATE();
    case 34:
      if (lookahead == 'i') ADVANCE(41);
      END_STATE();
    case 35:
      if (lookahead == 'l') ADVANCE(30);
      END_STATE();
    case 36:
      if (lookahead == 'm') ADVANCE(42);
      END_STATE();
    case 37:
      if (lookahead == 'n') ADVANCE(10);
      END_STATE();
    case 38:
      if (lookahead == 'n') ADVANCE(11);
      END_STATE();
    case 39:
      if (lookahead == 'n') ADVANCE(22);
      END_STATE();
    case 40:
      if (lookahead == 'n') ADVANCE(13);
      END_STATE();
    case 41:
      if (lookahead == 'o') ADVANCE(19);
      END_STATE();
    case 42:
      if (lookahead == 'p') ADVANCE(35);
      END_STATE();
    case 43:
      if (lookahead == 'r') ADVANCE(34);
      END_STATE();
    case 44:
      if (lookahead == 'r') ADVANCE(26);
      END_STATE();
    case 45:
      if (lookahead == 't') ADVANCE(46);
      END_STATE();
    case 46:
      if (lookahead == 'u') ADVANCE(44);
      END_STATE();
    case 47:
      if (lookahead == 'v') ADVANCE(29);
      END_STATE();
    case 48:
      if (lookahead == 'x') ADVANCE(21);
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
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_feature_keyword);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_title);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_description_token1);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == '\n') ADVANCE(70);
      if (lookahead == ' ') ADVANCE(61);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(57);
      if (lookahead != 0) ADVANCE(56);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == '\n') ADVANCE(70);
      if (lookahead == ' ') ADVANCE(58);
      if (lookahead == 'G') ADVANCE(68);
      if (lookahead == 'T') ADVANCE(66);
      if (lookahead == 'W') ADVANCE(67);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(57);
      if (lookahead != 0) ADVANCE(56);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == '\n') ADVANCE(70);
      if (lookahead == ' ') ADVANCE(58);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(57);
      if (lookahead != 0) ADVANCE(56);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == '\n') ADVANCE(70);
      if (lookahead == ' ') ADVANCE(59);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(57);
      if (lookahead != 0) ADVANCE(56);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == '\n') ADVANCE(70);
      if (lookahead == ' ') ADVANCE(60);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(57);
      if (lookahead != 0) ADVANCE(56);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == '\n') ADVANCE(71);
      if (lookahead == ' ') ADVANCE(62);
      if (lookahead == 'E') ADVANCE(69);
      if (lookahead == 'S') ADVANCE(65);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(64);
      if (lookahead != 0) ADVANCE(56);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == '\n') ADVANCE(71);
      if (lookahead == ' ') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(64);
      if (lookahead != 0) ADVANCE(56);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == '\n') ADVANCE(71);
      if (lookahead == ' ') ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(64);
      if (lookahead != 0) ADVANCE(56);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == 'c') ADVANCE(25);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == 'h') ADVANCE(27);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == 'h') ADVANCE(28);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == 'i') ADVANCE(47);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_description_token1);
      if (lookahead == 'x') ADVANCE(21);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(70);
      if (lookahead == ' ') ADVANCE(61);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(57);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(71);
      if (lookahead == ' ') ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(64);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_scenario_keyword);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_example_keyword);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_given_keyword);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_when_keyword);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_then_keyword);
      END_STATE();
    case 77:
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
  [3] = {.lex_state = 4},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
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
  [20] = {.lex_state = 49},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 49},
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
    [sym_step_definition] = ACTIONS(1),
  },
  [1] = {
    [sym_feature] = STATE(24),
    [sym_feature_keyword] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    STATE(7), 1,
      aux_sym_description_repeat1,
    STATE(9), 1,
      sym_full_step,
    STATE(10), 1,
      sym_description,
    STATE(16), 1,
      sym_steps,
    STATE(21), 1,
      sym_step_keyword,
    ACTIONS(5), 2,
      aux_sym_description_token1,
      anon_sym_LF,
    ACTIONS(7), 3,
      sym_given_keyword,
      sym_when_keyword,
      sym_then_keyword,
  [25] = 6,
    STATE(14), 1,
      aux_sym_description_repeat1,
    STATE(15), 1,
      sym_description,
    STATE(22), 1,
      sym_scenarios,
    ACTIONS(9), 2,
      aux_sym_description_token1,
      anon_sym_LF,
    ACTIONS(11), 2,
      sym_scenario_keyword,
      sym_example_keyword,
    STATE(13), 2,
      sym_scenario,
      aux_sym_scenarios_repeat1,
  [47] = 4,
    STATE(21), 1,
      sym_step_keyword,
    STATE(4), 2,
      sym_full_step,
      aux_sym_steps_repeat1,
    ACTIONS(13), 3,
      ts_builtin_sym_end,
      sym_scenario_keyword,
      sym_example_keyword,
    ACTIONS(15), 3,
      sym_given_keyword,
      sym_when_keyword,
      sym_then_keyword,
  [65] = 4,
    STATE(21), 1,
      sym_step_keyword,
    STATE(4), 2,
      sym_full_step,
      aux_sym_steps_repeat1,
    ACTIONS(18), 3,
      ts_builtin_sym_end,
      sym_scenario_keyword,
      sym_example_keyword,
    ACTIONS(20), 3,
      sym_given_keyword,
      sym_when_keyword,
      sym_then_keyword,
  [83] = 3,
    STATE(6), 1,
      aux_sym_description_repeat1,
    ACTIONS(22), 2,
      aux_sym_description_token1,
      anon_sym_LF,
    ACTIONS(25), 3,
      sym_given_keyword,
      sym_when_keyword,
      sym_then_keyword,
  [96] = 3,
    STATE(6), 1,
      aux_sym_description_repeat1,
    ACTIONS(27), 2,
      aux_sym_description_token1,
      anon_sym_LF,
    ACTIONS(29), 3,
      sym_given_keyword,
      sym_when_keyword,
      sym_then_keyword,
  [109] = 1,
    ACTIONS(31), 6,
      ts_builtin_sym_end,
      sym_scenario_keyword,
      sym_example_keyword,
      sym_given_keyword,
      sym_when_keyword,
      sym_then_keyword,
  [118] = 3,
    STATE(21), 1,
      sym_step_keyword,
    STATE(5), 2,
      sym_full_step,
      aux_sym_steps_repeat1,
    ACTIONS(20), 3,
      sym_given_keyword,
      sym_when_keyword,
      sym_then_keyword,
  [131] = 4,
    STATE(9), 1,
      sym_full_step,
    STATE(17), 1,
      sym_steps,
    STATE(21), 1,
      sym_step_keyword,
    ACTIONS(20), 3,
      sym_given_keyword,
      sym_when_keyword,
      sym_then_keyword,
  [146] = 3,
    STATE(11), 1,
      aux_sym_description_repeat1,
    ACTIONS(25), 2,
      sym_scenario_keyword,
      sym_example_keyword,
    ACTIONS(33), 2,
      aux_sym_description_token1,
      anon_sym_LF,
  [158] = 3,
    ACTIONS(36), 1,
      ts_builtin_sym_end,
    ACTIONS(38), 2,
      sym_scenario_keyword,
      sym_example_keyword,
    STATE(12), 2,
      sym_scenario,
      aux_sym_scenarios_repeat1,
  [170] = 3,
    ACTIONS(41), 1,
      ts_builtin_sym_end,
    ACTIONS(43), 2,
      sym_scenario_keyword,
      sym_example_keyword,
    STATE(12), 2,
      sym_scenario,
      aux_sym_scenarios_repeat1,
  [182] = 3,
    STATE(11), 1,
      aux_sym_description_repeat1,
    ACTIONS(29), 2,
      sym_scenario_keyword,
      sym_example_keyword,
    ACTIONS(45), 2,
      aux_sym_description_token1,
      anon_sym_LF,
  [194] = 3,
    STATE(18), 1,
      sym_scenarios,
    ACTIONS(43), 2,
      sym_scenario_keyword,
      sym_example_keyword,
    STATE(13), 2,
      sym_scenario,
      aux_sym_scenarios_repeat1,
  [206] = 1,
    ACTIONS(47), 3,
      ts_builtin_sym_end,
      sym_scenario_keyword,
      sym_example_keyword,
  [212] = 1,
    ACTIONS(49), 3,
      ts_builtin_sym_end,
      sym_scenario_keyword,
      sym_example_keyword,
  [218] = 1,
    ACTIONS(51), 1,
      ts_builtin_sym_end,
  [222] = 1,
    ACTIONS(53), 1,
      sym_step_definition,
  [226] = 1,
    ACTIONS(55), 1,
      sym_title,
  [230] = 1,
    ACTIONS(57), 1,
      sym_step_definition,
  [234] = 1,
    ACTIONS(59), 1,
      ts_builtin_sym_end,
  [238] = 1,
    ACTIONS(61), 1,
      sym_title,
  [242] = 1,
    ACTIONS(63), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 25,
  [SMALL_STATE(4)] = 47,
  [SMALL_STATE(5)] = 65,
  [SMALL_STATE(6)] = 83,
  [SMALL_STATE(7)] = 96,
  [SMALL_STATE(8)] = 109,
  [SMALL_STATE(9)] = 118,
  [SMALL_STATE(10)] = 131,
  [SMALL_STATE(11)] = 146,
  [SMALL_STATE(12)] = 158,
  [SMALL_STATE(13)] = 170,
  [SMALL_STATE(14)] = 182,
  [SMALL_STATE(15)] = 194,
  [SMALL_STATE(16)] = 206,
  [SMALL_STATE(17)] = 212,
  [SMALL_STATE(18)] = 218,
  [SMALL_STATE(19)] = 222,
  [SMALL_STATE(20)] = 226,
  [SMALL_STATE(21)] = 230,
  [SMALL_STATE(22)] = 234,
  [SMALL_STATE(23)] = 238,
  [SMALL_STATE(24)] = 242,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_steps_repeat1, 2),
  [15] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_steps_repeat1, 2), SHIFT_REPEAT(19),
  [18] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_steps, 2),
  [20] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
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
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
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
