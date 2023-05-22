#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 20
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 13
#define ALIAS_COUNT 0
#define TOKEN_COUNT 10
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_BANG = 1,
  anon_sym_COLON = 2,
  aux_sym_source_token1 = 3,
  anon_sym_feat = 4,
  anon_sym_fix = 5,
  aux_sym_type_token1 = 6,
  anon_sym_LPAREN = 7,
  anon_sym_RPAREN = 8,
  sym_message = 9,
  sym_source = 10,
  sym_type = 11,
  sym_scope = 12,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_BANG] = "!",
  [anon_sym_COLON] = ":",
  [aux_sym_source_token1] = "source_token1",
  [anon_sym_feat] = "feat",
  [anon_sym_fix] = "fix",
  [aux_sym_type_token1] = "type_token1",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_message] = "message",
  [sym_source] = "source",
  [sym_type] = "type",
  [sym_scope] = "scope",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_COLON] = anon_sym_COLON,
  [aux_sym_source_token1] = aux_sym_source_token1,
  [anon_sym_feat] = anon_sym_feat,
  [anon_sym_fix] = anon_sym_fix,
  [aux_sym_type_token1] = aux_sym_type_token1,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_message] = sym_message,
  [sym_source] = sym_source,
  [sym_type] = sym_type,
  [sym_scope] = sym_scope,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_source_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_feat] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fix] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_type_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_message] = {
    .visible = true,
    .named = true,
  },
  [sym_source] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym_scope] = {
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
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(4);
      if (lookahead == '\n') ADVANCE(7);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '!') ADVANCE(5);
      if (lookahead == '(') ADVANCE(15);
      if (lookahead == ')') ADVANCE(16);
      if (lookahead == ':') ADVANCE(6);
      if (lookahead == 'f') ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(14);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(7);
      END_STATE();
    case 2:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '!' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':') ADVANCE(14);
      END_STATE();
    case 3:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(17);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(aux_sym_source_token1);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_feat);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '!' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':') ADVANCE(14);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_fix);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '!' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':') ADVANCE(14);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == 'a') ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '!' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':') ADVANCE(14);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == 'e') ADVANCE(10);
      if (lookahead == 'i') ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '!' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':') ADVANCE(14);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == 't') ADVANCE(8);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '!' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':') ADVANCE(14);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == 'x') ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '!' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':') ADVANCE(14);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '!' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':') ADVANCE(14);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_message);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(17);
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
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [aux_sym_source_token1] = ACTIONS(1),
    [anon_sym_feat] = ACTIONS(1),
    [anon_sym_fix] = ACTIONS(1),
    [aux_sym_type_token1] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
  },
  [1] = {
    [sym_source] = STATE(9),
    [sym_type] = STATE(2),
    [anon_sym_feat] = ACTIONS(3),
    [anon_sym_fix] = ACTIONS(3),
    [aux_sym_type_token1] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(5), 1,
      anon_sym_BANG,
    ACTIONS(7), 1,
      anon_sym_COLON,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    STATE(4), 1,
      sym_scope,
  [13] = 1,
    ACTIONS(11), 3,
      anon_sym_BANG,
      anon_sym_COLON,
      anon_sym_LPAREN,
  [19] = 2,
    ACTIONS(13), 1,
      anon_sym_BANG,
    ACTIONS(15), 1,
      anon_sym_COLON,
  [26] = 2,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    ACTIONS(19), 1,
      aux_sym_source_token1,
  [33] = 2,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    ACTIONS(23), 1,
      aux_sym_source_token1,
  [40] = 1,
    ACTIONS(25), 2,
      anon_sym_BANG,
      anon_sym_COLON,
  [45] = 2,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    ACTIONS(29), 1,
      aux_sym_source_token1,
  [52] = 1,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
  [56] = 1,
    ACTIONS(15), 1,
      anon_sym_COLON,
  [60] = 1,
    ACTIONS(33), 1,
      sym_message,
  [64] = 1,
    ACTIONS(35), 1,
      aux_sym_type_token1,
  [68] = 1,
    ACTIONS(37), 1,
      sym_message,
  [72] = 1,
    ACTIONS(39), 1,
      anon_sym_RPAREN,
  [76] = 1,
    ACTIONS(41), 1,
      anon_sym_COLON,
  [80] = 1,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
  [84] = 1,
    ACTIONS(43), 1,
      sym_message,
  [88] = 1,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
  [92] = 1,
    ACTIONS(45), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 13,
  [SMALL_STATE(4)] = 19,
  [SMALL_STATE(5)] = 26,
  [SMALL_STATE(6)] = 33,
  [SMALL_STATE(7)] = 40,
  [SMALL_STATE(8)] = 45,
  [SMALL_STATE(9)] = 52,
  [SMALL_STATE(10)] = 56,
  [SMALL_STATE(11)] = 60,
  [SMALL_STATE(12)] = 64,
  [SMALL_STATE(13)] = 68,
  [SMALL_STATE(14)] = 72,
  [SMALL_STATE(15)] = 76,
  [SMALL_STATE(16)] = 80,
  [SMALL_STATE(17)] = 84,
  [SMALL_STATE(18)] = 88,
  [SMALL_STATE(19)] = 92,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 3),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 4),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scope, 3),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 5),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [31] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 6),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_git_conventional_commit_subject(void) {
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
