#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 23
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 15
#define ALIAS_COUNT 0
#define TOKEN_COUNT 10
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

enum {
  sym_given_keyword = 1,
  sym_when_keyword = 2,
  sym_then_keyword = 3,
  sym_feature_keyword = 4,
  sym_scenario_keyword = 5,
  sym_title = 6,
  aux_sym_multiline_text_token1 = 7,
  anon_sym_LF = 8,
  sym_step_definition = 9,
  sym_feature = 10,
  sym_multiline_text = 11,
  sym_scenario = 12,
  sym_steps = 13,
  aux_sym_multiline_text_repeat1 = 14,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_given_keyword] = "given_keyword",
  [sym_when_keyword] = "when_keyword",
  [sym_then_keyword] = "then_keyword",
  [sym_feature_keyword] = "feature_keyword",
  [sym_scenario_keyword] = "scenario_keyword",
  [sym_title] = "title",
  [aux_sym_multiline_text_token1] = "multiline_text_token1",
  [anon_sym_LF] = "\n",
  [sym_step_definition] = "step_definition",
  [sym_feature] = "feature",
  [sym_multiline_text] = "multiline_text",
  [sym_scenario] = "scenario",
  [sym_steps] = "steps",
  [aux_sym_multiline_text_repeat1] = "multiline_text_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_given_keyword] = sym_given_keyword,
  [sym_when_keyword] = sym_when_keyword,
  [sym_then_keyword] = sym_then_keyword,
  [sym_feature_keyword] = sym_feature_keyword,
  [sym_scenario_keyword] = sym_scenario_keyword,
  [sym_title] = sym_title,
  [aux_sym_multiline_text_token1] = aux_sym_multiline_text_token1,
  [anon_sym_LF] = anon_sym_LF,
  [sym_step_definition] = sym_step_definition,
  [sym_feature] = sym_feature,
  [sym_multiline_text] = sym_multiline_text,
  [sym_scenario] = sym_scenario,
  [sym_steps] = sym_steps,
  [aux_sym_multiline_text_repeat1] = aux_sym_multiline_text_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
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
  [sym_feature_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_scenario_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_title] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_multiline_text_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [sym_step_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_feature] = {
    .visible = true,
    .named = true,
  },
  [sym_multiline_text] = {
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
  [aux_sym_multiline_text_repeat1] = {
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
  [6] = 4,
  [7] = 5,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(45);
      if (lookahead == ' ') ADVANCE(6);
      if (lookahead == 'F') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(5);
      if (lookahead != 0 &&
          (lookahead < 'A' || 'Z' < lookahead)) ADVANCE(42);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(65);
      if (lookahead == ' ' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(63);
      if (lookahead == ' ') ADVANCE(55);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(53);
      if (lookahead != 0) ADVANCE(52);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(51);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(64);
      if (lookahead == ' ') ADVANCE(60);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(58);
      if (lookahead != 0) ADVANCE(52);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(6);
      if (lookahead == 'F') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(5);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(7);
      if (lookahead != 0 &&
          (lookahead < 'A' || 'Z' < lookahead)) ADVANCE(42);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == 'F') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(5);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(7);
      if (lookahead != 0 &&
          (lookahead < 'A' || 'Z' < lookahead)) ADVANCE(42);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(1);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1);
      END_STATE();
    case 8:
      if (lookahead == ' ') ADVANCE(8);
      if (lookahead == 'F') ADVANCE(21);
      if (lookahead == 'G') ADVANCE(29);
      if (lookahead == 'S') ADVANCE(20);
      if (lookahead == 'T') ADVANCE(27);
      if (lookahead == 'W') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(5);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(7);
      if (lookahead != 0 &&
          (lookahead < 'A' || 'Z' < lookahead)) ADVANCE(42);
      END_STATE();
    case 9:
      if (lookahead == ' ') ADVANCE(8);
      if (lookahead == 'F') ADVANCE(21);
      if (lookahead == 'S') ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(5);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(7);
      if (lookahead != 0 &&
          (lookahead < 'A' || 'Z' < lookahead)) ADVANCE(42);
      END_STATE();
    case 10:
      if (lookahead == ' ') ADVANCE(48);
      END_STATE();
    case 11:
      if (lookahead == ' ') ADVANCE(47);
      END_STATE();
    case 12:
      if (lookahead == ' ') ADVANCE(49);
      END_STATE();
    case 13:
      if (lookahead == ' ') ADVANCE(46);
      END_STATE();
    case 14:
      if (lookahead == ' ') ADVANCE(50);
      END_STATE();
    case 15:
      if (lookahead == ' ') ADVANCE(9);
      if (lookahead == 'F') ADVANCE(21);
      if (lookahead == 'S') ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(5);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(7);
      if (lookahead != 0 &&
          (lookahead < 'A' || 'Z' < lookahead)) ADVANCE(42);
      END_STATE();
    case 16:
      if (lookahead == ':') ADVANCE(12);
      END_STATE();
    case 17:
      if (lookahead == ':') ADVANCE(14);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(38);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(36);
      END_STATE();
    case 20:
      if (lookahead == 'c') ADVANCE(22);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(16);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 27:
      if (lookahead == 'h') ADVANCE(24);
      END_STATE();
    case 28:
      if (lookahead == 'h') ADVANCE(25);
      END_STATE();
    case 29:
      if (lookahead == 'i') ADVANCE(40);
      END_STATE();
    case 30:
      if (lookahead == 'i') ADVANCE(35);
      END_STATE();
    case 31:
      if (lookahead == 'n') ADVANCE(10);
      END_STATE();
    case 32:
      if (lookahead == 'n') ADVANCE(19);
      END_STATE();
    case 33:
      if (lookahead == 'n') ADVANCE(11);
      END_STATE();
    case 34:
      if (lookahead == 'n') ADVANCE(13);
      END_STATE();
    case 35:
      if (lookahead == 'o') ADVANCE(17);
      END_STATE();
    case 36:
      if (lookahead == 'r') ADVANCE(30);
      END_STATE();
    case 37:
      if (lookahead == 'r') ADVANCE(23);
      END_STATE();
    case 38:
      if (lookahead == 't') ADVANCE(39);
      END_STATE();
    case 39:
      if (lookahead == 'u') ADVANCE(37);
      END_STATE();
    case 40:
      if (lookahead == 'v') ADVANCE(26);
      END_STATE();
    case 41:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(41)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(44);
      END_STATE();
    case 42:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 43:
      if (lookahead == ' ' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1);
      END_STATE();
    case 44:
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_given_keyword);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_when_keyword);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_then_keyword);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_feature_keyword);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_scenario_keyword);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_title);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_multiline_text_token1);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_multiline_text_token1);
      if (lookahead == '\n') ADVANCE(63);
      if (lookahead == ' ') ADVANCE(55);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(53);
      if (lookahead != 0) ADVANCE(52);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_multiline_text_token1);
      if (lookahead == '\n') ADVANCE(63);
      if (lookahead == ' ') ADVANCE(54);
      if (lookahead == 'S') ADVANCE(61);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(53);
      if (lookahead != 0) ADVANCE(52);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_multiline_text_token1);
      if (lookahead == '\n') ADVANCE(63);
      if (lookahead == ' ') ADVANCE(54);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(53);
      if (lookahead != 0) ADVANCE(52);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_multiline_text_token1);
      if (lookahead == '\n') ADVANCE(64);
      if (lookahead == ' ') ADVANCE(56);
      if (lookahead == 'G') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(58);
      if (lookahead != 0) ADVANCE(52);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_multiline_text_token1);
      if (lookahead == '\n') ADVANCE(64);
      if (lookahead == ' ') ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(58);
      if (lookahead != 0) ADVANCE(52);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_multiline_text_token1);
      if (lookahead == '\n') ADVANCE(64);
      if (lookahead == ' ') ADVANCE(60);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(58);
      if (lookahead != 0) ADVANCE(52);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_multiline_text_token1);
      if (lookahead == '\n') ADVANCE(64);
      if (lookahead == ' ') ADVANCE(57);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(58);
      if (lookahead != 0) ADVANCE(52);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_multiline_text_token1);
      if (lookahead == '\n') ADVANCE(64);
      if (lookahead == ' ') ADVANCE(59);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(58);
      if (lookahead != 0) ADVANCE(52);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_multiline_text_token1);
      if (lookahead == 'c') ADVANCE(22);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_multiline_text_token1);
      if (lookahead == 'i') ADVANCE(40);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(63);
      if (lookahead == ' ') ADVANCE(55);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(53);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(64);
      if (lookahead == ' ') ADVANCE(60);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(58);
      END_STATE();
    case 65:
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
  [4] = {.lex_state = 4},
  [5] = {.lex_state = 4},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 41},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 41},
  [22] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_given_keyword] = ACTIONS(1),
    [sym_when_keyword] = ACTIONS(1),
    [sym_then_keyword] = ACTIONS(1),
    [sym_feature_keyword] = ACTIONS(1),
    [sym_scenario_keyword] = ACTIONS(1),
    [sym_step_definition] = ACTIONS(1),
  },
  [1] = {
    [sym_feature] = STATE(22),
    [sym_feature_keyword] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(5), 1,
      sym_scenario_keyword,
    STATE(7), 1,
      aux_sym_multiline_text_repeat1,
    STATE(9), 1,
      sym_multiline_text,
    STATE(11), 1,
      sym_scenario,
    ACTIONS(7), 2,
      aux_sym_multiline_text_token1,
      anon_sym_LF,
  [17] = 5,
    ACTIONS(9), 1,
      sym_given_keyword,
    STATE(5), 1,
      aux_sym_multiline_text_repeat1,
    STATE(8), 1,
      sym_multiline_text,
    STATE(14), 1,
      sym_steps,
    ACTIONS(11), 2,
      aux_sym_multiline_text_token1,
      anon_sym_LF,
  [34] = 3,
    ACTIONS(13), 1,
      sym_given_keyword,
    STATE(4), 1,
      aux_sym_multiline_text_repeat1,
    ACTIONS(15), 2,
      aux_sym_multiline_text_token1,
      anon_sym_LF,
  [45] = 3,
    ACTIONS(18), 1,
      sym_given_keyword,
    STATE(4), 1,
      aux_sym_multiline_text_repeat1,
    ACTIONS(20), 2,
      aux_sym_multiline_text_token1,
      anon_sym_LF,
  [56] = 3,
    ACTIONS(13), 1,
      sym_scenario_keyword,
    STATE(6), 1,
      aux_sym_multiline_text_repeat1,
    ACTIONS(22), 2,
      aux_sym_multiline_text_token1,
      anon_sym_LF,
  [67] = 3,
    ACTIONS(18), 1,
      sym_scenario_keyword,
    STATE(6), 1,
      aux_sym_multiline_text_repeat1,
    ACTIONS(25), 2,
      aux_sym_multiline_text_token1,
      anon_sym_LF,
  [78] = 2,
    ACTIONS(27), 1,
      sym_given_keyword,
    STATE(16), 1,
      sym_steps,
  [85] = 2,
    ACTIONS(29), 1,
      sym_scenario_keyword,
    STATE(10), 1,
      sym_scenario,
  [92] = 1,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
  [96] = 1,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
  [100] = 1,
    ACTIONS(35), 1,
      sym_step_definition,
  [104] = 1,
    ACTIONS(37), 1,
      sym_title,
  [108] = 1,
    ACTIONS(39), 1,
      ts_builtin_sym_end,
  [112] = 1,
    ACTIONS(41), 1,
      sym_when_keyword,
  [116] = 1,
    ACTIONS(43), 1,
      ts_builtin_sym_end,
  [120] = 1,
    ACTIONS(45), 1,
      sym_step_definition,
  [124] = 1,
    ACTIONS(47), 1,
      sym_then_keyword,
  [128] = 1,
    ACTIONS(49), 1,
      sym_step_definition,
  [132] = 1,
    ACTIONS(51), 1,
      ts_builtin_sym_end,
  [136] = 1,
    ACTIONS(53), 1,
      sym_title,
  [140] = 1,
    ACTIONS(55), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 17,
  [SMALL_STATE(4)] = 34,
  [SMALL_STATE(5)] = 45,
  [SMALL_STATE(6)] = 56,
  [SMALL_STATE(7)] = 67,
  [SMALL_STATE(8)] = 78,
  [SMALL_STATE(9)] = 85,
  [SMALL_STATE(10)] = 92,
  [SMALL_STATE(11)] = 96,
  [SMALL_STATE(12)] = 100,
  [SMALL_STATE(13)] = 104,
  [SMALL_STATE(14)] = 108,
  [SMALL_STATE(15)] = 112,
  [SMALL_STATE(16)] = 116,
  [SMALL_STATE(17)] = 120,
  [SMALL_STATE(18)] = 124,
  [SMALL_STATE(19)] = 128,
  [SMALL_STATE(20)] = 132,
  [SMALL_STATE(21)] = 136,
  [SMALL_STATE(22)] = 140,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [13] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_multiline_text_repeat1, 2),
  [15] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_text_repeat1, 2), SHIFT_REPEAT(4),
  [18] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_text, 1),
  [20] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [22] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_text_repeat1, 2), SHIFT_REPEAT(6),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_feature, 4),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_feature, 3),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scenario, 3),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scenario, 4),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_steps, 6),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [55] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
