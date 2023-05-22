#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 17
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 12
#define ALIAS_COUNT 0
#define TOKEN_COUNT 9
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_BANG = 1,
  anon_sym_COLON = 2,
  anon_sym_feat = 3,
  anon_sym_fix = 4,
  aux_sym_type_token1 = 5,
  anon_sym_LPAREN = 6,
  anon_sym_RPAREN = 7,
  sym_message = 8,
  sym_source = 9,
  sym_type = 10,
  sym_scope = 11,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_BANG] = "!",
  [anon_sym_COLON] = ":",
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(2);
      if (lookahead == '!') ADVANCE(3);
      if (lookahead == '(') ADVANCE(12);
      if (lookahead == ')') ADVANCE(13);
      if (lookahead == ':') ADVANCE(4);
      if (lookahead == 'f') ADVANCE(8);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(11);
      END_STATE();
    case 1:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '!' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':') ADVANCE(11);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_feat);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '!' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':') ADVANCE(11);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_fix);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '!' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':') ADVANCE(11);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == 'a') ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '!' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':') ADVANCE(11);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == 'e') ADVANCE(7);
      if (lookahead == 'i') ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '!' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':') ADVANCE(11);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == 't') ADVANCE(5);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '!' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':') ADVANCE(11);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead == 'x') ADVANCE(6);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '!' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':') ADVANCE(11);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(aux_sym_type_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '!' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':') ADVANCE(11);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_message);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(14);
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
  [8] = {.lex_state = 14},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 14},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 14},
  [16] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_feat] = ACTIONS(1),
    [anon_sym_fix] = ACTIONS(1),
    [aux_sym_type_token1] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
  },
  [1] = {
    [sym_source] = STATE(6),
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
  [26] = 1,
    ACTIONS(17), 2,
      anon_sym_BANG,
      anon_sym_COLON,
  [31] = 1,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
  [35] = 1,
    ACTIONS(15), 1,
      anon_sym_COLON,
  [39] = 1,
    ACTIONS(21), 1,
      sym_message,
  [43] = 1,
    ACTIONS(23), 1,
      aux_sym_type_token1,
  [47] = 1,
    ACTIONS(25), 1,
      sym_message,
  [51] = 1,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
  [55] = 1,
    ACTIONS(29), 1,
      anon_sym_RPAREN,
  [59] = 1,
    ACTIONS(31), 1,
      anon_sym_COLON,
  [63] = 1,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
  [67] = 1,
    ACTIONS(35), 1,
      sym_message,
  [71] = 1,
    ACTIONS(37), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 13,
  [SMALL_STATE(4)] = 19,
  [SMALL_STATE(5)] = 26,
  [SMALL_STATE(6)] = 31,
  [SMALL_STATE(7)] = 35,
  [SMALL_STATE(8)] = 39,
  [SMALL_STATE(9)] = 43,
  [SMALL_STATE(10)] = 47,
  [SMALL_STATE(11)] = 51,
  [SMALL_STATE(12)] = 55,
  [SMALL_STATE(13)] = 59,
  [SMALL_STATE(14)] = 63,
  [SMALL_STATE(15)] = 67,
  [SMALL_STATE(16)] = 71,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scope, 3),
  [19] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 3),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 4),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 5),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_gitcommit(void) {
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
