#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 15
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 11
#define ALIAS_COUNT 0
#define TOKEN_COUNT 8
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

enum {
  sym_feature_keyword = 1,
  sym_title = 2,
  sym_scenario_keyword = 3,
  sym_given_keyword = 4,
  sym_when_keyword = 5,
  sym_then_keyword = 6,
  sym_step_definition = 7,
  sym_feature = 8,
  sym_scenario = 9,
  sym_steps = 10,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_feature_keyword] = "feature_keyword",
  [sym_title] = "title",
  [sym_scenario_keyword] = "scenario_keyword",
  [sym_given_keyword] = "given_keyword",
  [sym_when_keyword] = "when_keyword",
  [sym_then_keyword] = "then_keyword",
  [sym_step_definition] = "step_definition",
  [sym_feature] = "feature",
  [sym_scenario] = "scenario",
  [sym_steps] = "steps",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_feature_keyword] = sym_feature_keyword,
  [sym_title] = sym_title,
  [sym_scenario_keyword] = sym_scenario_keyword,
  [sym_given_keyword] = sym_given_keyword,
  [sym_when_keyword] = sym_when_keyword,
  [sym_then_keyword] = sym_then_keyword,
  [sym_step_definition] = sym_step_definition,
  [sym_feature] = sym_feature,
  [sym_scenario] = sym_scenario,
  [sym_steps] = sym_steps,
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
  [sym_step_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_feature] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(41);
      if (lookahead == ' ') ADVANCE(4);
      if (lookahead == 'F') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(0)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(48);
      if (lookahead == ' ' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(43);
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(4);
      if (lookahead == 'F') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(3)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(12);
      if (lookahead == 'F') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(3)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(5);
      if (lookahead == 'F') ADVANCE(18);
      if (lookahead == 'G') ADVANCE(26);
      if (lookahead == 'S') ADVANCE(17);
      if (lookahead == 'T') ADVANCE(24);
      if (lookahead == 'W') ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(3)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(5);
      if (lookahead == 'F') ADVANCE(18);
      if (lookahead == 'S') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(3)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(47);
      END_STATE();
    case 8:
      if (lookahead == ' ') ADVANCE(46);
      END_STATE();
    case 9:
      if (lookahead == ' ') ADVANCE(42);
      END_STATE();
    case 10:
      if (lookahead == ' ') ADVANCE(45);
      END_STATE();
    case 11:
      if (lookahead == ' ') ADVANCE(44);
      END_STATE();
    case 12:
      if (lookahead == ' ') ADVANCE(6);
      if (lookahead == 'F') ADVANCE(18);
      if (lookahead == 'S') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(3)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 13:
      if (lookahead == ':') ADVANCE(9);
      END_STATE();
    case 14:
      if (lookahead == ':') ADVANCE(11);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(35);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(33);
      END_STATE();
    case 17:
      if (lookahead == 'c') ADVANCE(19);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(15);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(13);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 24:
      if (lookahead == 'h') ADVANCE(21);
      END_STATE();
    case 25:
      if (lookahead == 'h') ADVANCE(22);
      END_STATE();
    case 26:
      if (lookahead == 'i') ADVANCE(37);
      END_STATE();
    case 27:
      if (lookahead == 'i') ADVANCE(32);
      END_STATE();
    case 28:
      if (lookahead == 'n') ADVANCE(7);
      END_STATE();
    case 29:
      if (lookahead == 'n') ADVANCE(16);
      END_STATE();
    case 30:
      if (lookahead == 'n') ADVANCE(8);
      END_STATE();
    case 31:
      if (lookahead == 'n') ADVANCE(10);
      END_STATE();
    case 32:
      if (lookahead == 'o') ADVANCE(14);
      END_STATE();
    case 33:
      if (lookahead == 'r') ADVANCE(27);
      END_STATE();
    case 34:
      if (lookahead == 'r') ADVANCE(20);
      END_STATE();
    case 35:
      if (lookahead == 't') ADVANCE(36);
      END_STATE();
    case 36:
      if (lookahead == 'u') ADVANCE(34);
      END_STATE();
    case 37:
      if (lookahead == 'v') ADVANCE(23);
      END_STATE();
    case 38:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(38)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(40);
      END_STATE();
    case 39:
      if (lookahead == ' ' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1);
      END_STATE();
    case 40:
      if (lookahead == ' ' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_feature_keyword);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_title);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_scenario_keyword);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_given_keyword);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_when_keyword);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_then_keyword);
      END_STATE();
    case 48:
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
  [4] = {.lex_state = 38},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 38},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_feature_keyword] = ACTIONS(1),
    [sym_scenario_keyword] = ACTIONS(1),
    [sym_given_keyword] = ACTIONS(1),
    [sym_when_keyword] = ACTIONS(1),
    [sym_then_keyword] = ACTIONS(1),
    [sym_step_definition] = ACTIONS(1),
  },
  [1] = {
    [sym_feature] = STATE(5),
    [sym_feature_keyword] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(5), 1,
      sym_scenario_keyword,
    STATE(7), 1,
      sym_scenario,
  [7] = 2,
    ACTIONS(7), 1,
      sym_given_keyword,
    STATE(9), 1,
      sym_steps,
  [14] = 1,
    ACTIONS(9), 1,
      sym_title,
  [18] = 1,
    ACTIONS(11), 1,
      ts_builtin_sym_end,
  [22] = 1,
    ACTIONS(13), 1,
      sym_title,
  [26] = 1,
    ACTIONS(15), 1,
      ts_builtin_sym_end,
  [30] = 1,
    ACTIONS(17), 1,
      sym_step_definition,
  [34] = 1,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
  [38] = 1,
    ACTIONS(21), 1,
      sym_when_keyword,
  [42] = 1,
    ACTIONS(23), 1,
      sym_step_definition,
  [46] = 1,
    ACTIONS(25), 1,
      sym_then_keyword,
  [50] = 1,
    ACTIONS(27), 1,
      sym_step_definition,
  [54] = 1,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 7,
  [SMALL_STATE(4)] = 14,
  [SMALL_STATE(5)] = 18,
  [SMALL_STATE(6)] = 22,
  [SMALL_STATE(7)] = 26,
  [SMALL_STATE(8)] = 30,
  [SMALL_STATE(9)] = 34,
  [SMALL_STATE(10)] = 38,
  [SMALL_STATE(11)] = 42,
  [SMALL_STATE(12)] = 46,
  [SMALL_STATE(13)] = 50,
  [SMALL_STATE(14)] = 54,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [11] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_feature, 3),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scenario, 3),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_steps, 6),
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
