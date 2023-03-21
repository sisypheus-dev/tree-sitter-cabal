#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 68
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 31
#define ALIAS_COUNT 0
#define TOKEN_COUNT 17
#define EXTERNAL_TOKEN_COUNT 4
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_cabal_DASHversion = 1,
  anon_sym_COLON = 2,
  sym_spec_version = 3,
  anon_sym_benchmark = 4,
  anon_sym_executable = 5,
  anon_sym_flag = 6,
  anon_sym_library = 7,
  anon_sym_source_DASHrepository = 8,
  anon_sym_test_DASHsuite = 9,
  sym_section_name = 10,
  sym_comment = 11,
  sym_field_name = 12,
  sym_field_value = 13,
  sym_indent = 14,
  sym_dedent = 15,
  sym_indented = 16,
  sym_cabal = 17,
  sym_cabal_version = 18,
  sym_properties = 19,
  sym_sections = 20,
  sym_benchmark = 21,
  sym_executable = 22,
  sym_flag = 23,
  sym_library = 24,
  sym_source_repository = 25,
  sym_test_suite = 26,
  sym_field = 27,
  aux_sym_properties_repeat1 = 28,
  aux_sym_sections_repeat1 = 29,
  aux_sym_field_repeat1 = 30,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_cabal_DASHversion] = "cabal-version",
  [anon_sym_COLON] = ":",
  [sym_spec_version] = "spec_version",
  [anon_sym_benchmark] = "benchmark",
  [anon_sym_executable] = "executable",
  [anon_sym_flag] = "flag",
  [anon_sym_library] = "library",
  [anon_sym_source_DASHrepository] = "source-repository",
  [anon_sym_test_DASHsuite] = "test-suite",
  [sym_section_name] = "section_name",
  [sym_comment] = "comment",
  [sym_field_name] = "field_name",
  [sym_field_value] = "field_value",
  [sym_indent] = "indent",
  [sym_dedent] = "dedent",
  [sym_indented] = "indented",
  [sym_cabal] = "cabal",
  [sym_cabal_version] = "cabal_version",
  [sym_properties] = "properties",
  [sym_sections] = "sections",
  [sym_benchmark] = "benchmark",
  [sym_executable] = "executable",
  [sym_flag] = "flag",
  [sym_library] = "library",
  [sym_source_repository] = "source_repository",
  [sym_test_suite] = "test_suite",
  [sym_field] = "field",
  [aux_sym_properties_repeat1] = "properties_repeat1",
  [aux_sym_sections_repeat1] = "sections_repeat1",
  [aux_sym_field_repeat1] = "field_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_cabal_DASHversion] = anon_sym_cabal_DASHversion,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_spec_version] = sym_spec_version,
  [anon_sym_benchmark] = anon_sym_benchmark,
  [anon_sym_executable] = anon_sym_executable,
  [anon_sym_flag] = anon_sym_flag,
  [anon_sym_library] = anon_sym_library,
  [anon_sym_source_DASHrepository] = anon_sym_source_DASHrepository,
  [anon_sym_test_DASHsuite] = anon_sym_test_DASHsuite,
  [sym_section_name] = sym_section_name,
  [sym_comment] = sym_comment,
  [sym_field_name] = sym_field_name,
  [sym_field_value] = sym_field_value,
  [sym_indent] = sym_indent,
  [sym_dedent] = sym_dedent,
  [sym_indented] = sym_indented,
  [sym_cabal] = sym_cabal,
  [sym_cabal_version] = sym_cabal_version,
  [sym_properties] = sym_properties,
  [sym_sections] = sym_sections,
  [sym_benchmark] = sym_benchmark,
  [sym_executable] = sym_executable,
  [sym_flag] = sym_flag,
  [sym_library] = sym_library,
  [sym_source_repository] = sym_source_repository,
  [sym_test_suite] = sym_test_suite,
  [sym_field] = sym_field,
  [aux_sym_properties_repeat1] = aux_sym_properties_repeat1,
  [aux_sym_sections_repeat1] = aux_sym_sections_repeat1,
  [aux_sym_field_repeat1] = aux_sym_field_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_cabal_DASHversion] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_spec_version] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_benchmark] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_executable] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_flag] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_library] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_source_DASHrepository] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_test_DASHsuite] = {
    .visible = true,
    .named = false,
  },
  [sym_section_name] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_field_name] = {
    .visible = true,
    .named = true,
  },
  [sym_field_value] = {
    .visible = true,
    .named = true,
  },
  [sym_indent] = {
    .visible = true,
    .named = true,
  },
  [sym_dedent] = {
    .visible = true,
    .named = true,
  },
  [sym_indented] = {
    .visible = true,
    .named = true,
  },
  [sym_cabal] = {
    .visible = true,
    .named = true,
  },
  [sym_cabal_version] = {
    .visible = true,
    .named = true,
  },
  [sym_properties] = {
    .visible = true,
    .named = true,
  },
  [sym_sections] = {
    .visible = true,
    .named = true,
  },
  [sym_benchmark] = {
    .visible = true,
    .named = true,
  },
  [sym_executable] = {
    .visible = true,
    .named = true,
  },
  [sym_flag] = {
    .visible = true,
    .named = true,
  },
  [sym_library] = {
    .visible = true,
    .named = true,
  },
  [sym_source_repository] = {
    .visible = true,
    .named = true,
  },
  [sym_test_suite] = {
    .visible = true,
    .named = true,
  },
  [sym_field] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_properties_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_sections_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_field_repeat1] = {
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
  [25] = 25,
  [26] = 6,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 8,
  [32] = 32,
  [33] = 29,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 30,
  [40] = 40,
  [41] = 13,
  [42] = 16,
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
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 54,
  [64] = 64,
  [65] = 65,
  [66] = 59,
  [67] = 60,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (lookahead == '-') ADVANCE(2);
      if (lookahead == ':') ADVANCE(74);
      if (lookahead == 'b') ADVANCE(63);
      if (lookahead == 'c') ADVANCE(69);
      if (lookahead == 'e') ADVANCE(68);
      if (lookahead == 'f') ADVANCE(66);
      if (lookahead == 'l') ADVANCE(65);
      if (lookahead == 's') ADVANCE(67);
      if (lookahead == 't') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '-') ADVANCE(149);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(150);
      if (lookahead != 0) ADVANCE(151);
      END_STATE();
    case 2:
      if (lookahead == '-') ADVANCE(90);
      END_STATE();
    case 3:
      if (lookahead == '-') ADVANCE(43);
      END_STATE();
    case 4:
      if (lookahead == '-') ADVANCE(41);
      END_STATE();
    case 5:
      if (lookahead == '.') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(22);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(11);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(36);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(37);
      END_STATE();
    case 10:
      if (lookahead == 'b') ADVANCE(38);
      END_STATE();
    case 11:
      if (lookahead == 'b') ADVANCE(29);
      END_STATE();
    case 12:
      if (lookahead == 'c') ADVANCE(23);
      END_STATE();
    case 13:
      if (lookahead == 'c') ADVANCE(51);
      END_STATE();
    case 14:
      if (lookahead == 'c') ADVANCE(21);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(42);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(79);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(13);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(4);
      END_STATE();
    case 22:
      if (lookahead == 'g') ADVANCE(81);
      END_STATE();
    case 23:
      if (lookahead == 'h') ADVANCE(30);
      END_STATE();
    case 24:
      if (lookahead == 'i') ADVANCE(10);
      END_STATE();
    case 25:
      if (lookahead == 'i') ADVANCE(48);
      END_STATE();
    case 26:
      if (lookahead == 'i') ADVANCE(46);
      END_STATE();
    case 27:
      if (lookahead == 'k') ADVANCE(77);
      END_STATE();
    case 28:
      if (lookahead == 'l') ADVANCE(6);
      END_STATE();
    case 29:
      if (lookahead == 'l') ADVANCE(18);
      END_STATE();
    case 30:
      if (lookahead == 'm') ADVANCE(9);
      END_STATE();
    case 31:
      if (lookahead == 'n') ADVANCE(12);
      END_STATE();
    case 32:
      if (lookahead == 'o') ADVANCE(50);
      END_STATE();
    case 33:
      if (lookahead == 'o') ADVANCE(44);
      END_STATE();
    case 34:
      if (lookahead == 'o') ADVANCE(39);
      END_STATE();
    case 35:
      if (lookahead == 'p') ADVANCE(33);
      END_STATE();
    case 36:
      if (lookahead == 'r') ADVANCE(53);
      END_STATE();
    case 37:
      if (lookahead == 'r') ADVANCE(27);
      END_STATE();
    case 38:
      if (lookahead == 'r') ADVANCE(8);
      END_STATE();
    case 39:
      if (lookahead == 'r') ADVANCE(54);
      END_STATE();
    case 40:
      if (lookahead == 'r') ADVANCE(14);
      END_STATE();
    case 41:
      if (lookahead == 'r') ADVANCE(17);
      END_STATE();
    case 42:
      if (lookahead == 's') ADVANCE(45);
      END_STATE();
    case 43:
      if (lookahead == 's') ADVANCE(49);
      END_STATE();
    case 44:
      if (lookahead == 's') ADVANCE(26);
      END_STATE();
    case 45:
      if (lookahead == 't') ADVANCE(3);
      END_STATE();
    case 46:
      if (lookahead == 't') ADVANCE(34);
      END_STATE();
    case 47:
      if (lookahead == 't') ADVANCE(7);
      END_STATE();
    case 48:
      if (lookahead == 't') ADVANCE(19);
      END_STATE();
    case 49:
      if (lookahead == 'u') ADVANCE(25);
      END_STATE();
    case 50:
      if (lookahead == 'u') ADVANCE(40);
      END_STATE();
    case 51:
      if (lookahead == 'u') ADVANCE(47);
      END_STATE();
    case 52:
      if (lookahead == 'x') ADVANCE(20);
      END_STATE();
    case 53:
      if (lookahead == 'y') ADVANCE(83);
      END_STATE();
    case 54:
      if (lookahead == 'y') ADVANCE(85);
      END_STATE();
    case 55:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(55)
      if (lookahead == '-') ADVANCE(2);
      if (lookahead == 'c') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 56:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(56)
      if (lookahead == '-') ADVANCE(2);
      if (lookahead == 'b') ADVANCE(63);
      if (lookahead == 'e') ADVANCE(68);
      if (lookahead == 'f') ADVANCE(66);
      if (lookahead == 'l') ADVANCE(65);
      if (lookahead == 's') ADVANCE(67);
      if (lookahead == 't') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 57:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(57)
      if (lookahead == '-') ADVANCE(2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 58:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(58)
      if (lookahead == '-') ADVANCE(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(61);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 59:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(75);
      END_STATE();
    case 60:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(76);
      END_STATE();
    case 61:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(61);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 62:
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      if (lookahead == '.') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(94);
      END_STATE();
    case 63:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      if (lookahead == 'e') ADVANCE(116);
      END_STATE();
    case 64:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      if (lookahead == 'e') ADVANCE(129);
      END_STATE();
    case 65:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      if (lookahead == 'i') ADVANCE(95);
      END_STATE();
    case 66:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'k') ||
          ('m' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      if (lookahead == 'l') ADVANCE(143);
      END_STATE();
    case 67:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      if (lookahead == 'o') ADVANCE(138);
      END_STATE();
    case 68:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'w') ||
          lookahead == 'y' ||
          lookahead == 'z') ADVANCE(148);
      if (lookahead == 'x') ADVANCE(104);
      END_STATE();
    case 69:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      if (lookahead == 'a') ADVANCE(96);
      END_STATE();
    case 70:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 71:
      if (eof) ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(71)
      if (lookahead == '-') ADVANCE(2);
      if (lookahead == 'b') ADVANCE(15);
      if (lookahead == 'e') ADVANCE(52);
      if (lookahead == 'f') ADVANCE(28);
      if (lookahead == 'l') ADVANCE(24);
      if (lookahead == 's') ADVANCE(32);
      if (lookahead == 't') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(5);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_cabal_DASHversion);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_spec_version);
      if (lookahead == '.') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(75);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_spec_version);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(76);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_benchmark);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_benchmark);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_executable);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_executable);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_flag);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_flag);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_library);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_library);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_source_DASHrepository);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_source_DASHrepository);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_test_DASHsuite);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_test_DASHsuite);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == '-') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(90);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      if (lookahead == '.') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(94);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'a' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      if (lookahead == 'b') ADVANCE(125);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'a' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      if (lookahead == 'b') ADVANCE(144);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'a' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      if (lookahead == 'b') ADVANCE(114);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'a' ||
          lookahead == 'b' ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      if (lookahead == 'c') ADVANCE(108);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'a' ||
          lookahead == 'b' ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      if (lookahead == 'c') ADVANCE(105);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'a' ||
          lookahead == 'b' ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      if (lookahead == 'c') ADVANCE(139);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      if (lookahead == 'e') ADVANCE(121);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      if (lookahead == 'e') ADVANCE(80);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      if (lookahead == 'e') ADVANCE(88);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      if (lookahead == 'e') ADVANCE(100);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      if (lookahead == 'e') ADVANCE(93);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      if (lookahead == 'e') ADVANCE(126);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f') ||
          ('h' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      if (lookahead == 'g') ADVANCE(82);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'g') ||
          ('i' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      if (lookahead == 'h') ADVANCE(115);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      if (lookahead == 'i') ADVANCE(118);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      if (lookahead == 'i') ADVANCE(136);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      if (lookahead == 'i') ADVANCE(134);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'j') ||
          ('l' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      if (lookahead == 'k') ADVANCE(78);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'k') ||
          ('m' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      if (lookahead == 'l') ADVANCE(91);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'k') ||
          ('m' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      if (lookahead == 'l') ADVANCE(102);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'l') ||
          ('n' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      if (lookahead == 'm') ADVANCE(147);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      if (lookahead == 'n') ADVANCE(98);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      if (lookahead == 'n') ADVANCE(73);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      if (lookahead == 'o') ADVANCE(117);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      if (lookahead == 'o') ADVANCE(132);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      if (lookahead == 'o') ADVANCE(124);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'o') ||
          ('q' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      if (lookahead == 'p') ADVANCE(119);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      if (lookahead == 'r') ADVANCE(141);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      if (lookahead == 'r') ADVANCE(112);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      if (lookahead == 'r') ADVANCE(142);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      if (lookahead == 'r') ADVANCE(146);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      if (lookahead == 'r') ADVANCE(130);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      if (lookahead == 'r') ADVANCE(99);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      if (lookahead == 'r') ADVANCE(101);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      if (lookahead == 's') ADVANCE(133);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      if (lookahead == 's') ADVANCE(109);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      if (lookahead == 's') ADVANCE(137);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      if (lookahead == 's') ADVANCE(111);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      if (lookahead == 't') ADVANCE(92);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      if (lookahead == 't') ADVANCE(120);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      if (lookahead == 't') ADVANCE(145);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      if (lookahead == 't') ADVANCE(103);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 't') ||
          ('v' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      if (lookahead == 'u') ADVANCE(110);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 't') ||
          ('v' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      if (lookahead == 'u') ADVANCE(127);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 't') ||
          ('v' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      if (lookahead == 'u') ADVANCE(135);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'u') ||
          ('w' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      if (lookahead == 'v') ADVANCE(106);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'x') ||
          lookahead == 'z') ADVANCE(148);
      if (lookahead == 'y') ADVANCE(84);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'x') ||
          lookahead == 'z') ADVANCE(148);
      if (lookahead == 'y') ADVANCE(86);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      if (lookahead == 'a') ADVANCE(107);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      if (lookahead == 'a') ADVANCE(113);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      if (lookahead == 'a') ADVANCE(97);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      if (lookahead == 'a') ADVANCE(122);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      if (lookahead == 'a') ADVANCE(123);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_field_value);
      if (lookahead == '-') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(151);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_field_value);
      if (lookahead == '-') ADVANCE(149);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(150);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(151);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_field_value);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(151);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 55, .external_lex_state = 2},
  [2] = {.lex_state = 71, .external_lex_state = 2},
  [3] = {.lex_state = 71, .external_lex_state = 2},
  [4] = {.lex_state = 71, .external_lex_state = 2},
  [5] = {.lex_state = 71, .external_lex_state = 2},
  [6] = {.lex_state = 56, .external_lex_state = 2},
  [7] = {.lex_state = 56, .external_lex_state = 2},
  [8] = {.lex_state = 56, .external_lex_state = 3},
  [9] = {.lex_state = 71, .external_lex_state = 2},
  [10] = {.lex_state = 71, .external_lex_state = 2},
  [11] = {.lex_state = 71, .external_lex_state = 2},
  [12] = {.lex_state = 71, .external_lex_state = 2},
  [13] = {.lex_state = 56, .external_lex_state = 2},
  [14] = {.lex_state = 71, .external_lex_state = 2},
  [15] = {.lex_state = 71, .external_lex_state = 2},
  [16] = {.lex_state = 56, .external_lex_state = 2},
  [17] = {.lex_state = 71, .external_lex_state = 2},
  [18] = {.lex_state = 57, .external_lex_state = 4},
  [19] = {.lex_state = 57, .external_lex_state = 4},
  [20] = {.lex_state = 57, .external_lex_state = 4},
  [21] = {.lex_state = 57, .external_lex_state = 2},
  [22] = {.lex_state = 57, .external_lex_state = 4},
  [23] = {.lex_state = 57, .external_lex_state = 4},
  [24] = {.lex_state = 57, .external_lex_state = 4},
  [25] = {.lex_state = 57, .external_lex_state = 4},
  [26] = {.lex_state = 57, .external_lex_state = 4},
  [27] = {.lex_state = 57, .external_lex_state = 2},
  [28] = {.lex_state = 0, .external_lex_state = 5},
  [29] = {.lex_state = 0, .external_lex_state = 5},
  [30] = {.lex_state = 0, .external_lex_state = 5},
  [31] = {.lex_state = 57, .external_lex_state = 6},
  [32] = {.lex_state = 57, .external_lex_state = 2},
  [33] = {.lex_state = 0, .external_lex_state = 5},
  [34] = {.lex_state = 57, .external_lex_state = 2},
  [35] = {.lex_state = 57, .external_lex_state = 2},
  [36] = {.lex_state = 57, .external_lex_state = 2},
  [37] = {.lex_state = 57, .external_lex_state = 2},
  [38] = {.lex_state = 57, .external_lex_state = 2},
  [39] = {.lex_state = 0, .external_lex_state = 5},
  [40] = {.lex_state = 58, .external_lex_state = 3},
  [41] = {.lex_state = 57, .external_lex_state = 4},
  [42] = {.lex_state = 57, .external_lex_state = 4},
  [43] = {.lex_state = 0, .external_lex_state = 5},
  [44] = {.lex_state = 58, .external_lex_state = 2},
  [45] = {.lex_state = 71, .external_lex_state = 2},
  [46] = {.lex_state = 0, .external_lex_state = 2},
  [47] = {.lex_state = 58, .external_lex_state = 2},
  [48] = {.lex_state = 0, .external_lex_state = 3},
  [49] = {.lex_state = 1, .external_lex_state = 2},
  [50] = {.lex_state = 0, .external_lex_state = 2},
  [51] = {.lex_state = 58, .external_lex_state = 2},
  [52] = {.lex_state = 58, .external_lex_state = 2},
  [53] = {.lex_state = 58, .external_lex_state = 2},
  [54] = {.lex_state = 1, .external_lex_state = 2},
  [55] = {.lex_state = 57, .external_lex_state = 2},
  [56] = {.lex_state = 0, .external_lex_state = 3},
  [57] = {.lex_state = 0, .external_lex_state = 2},
  [58] = {.lex_state = 0, .external_lex_state = 3},
  [59] = {.lex_state = 0, .external_lex_state = 2},
  [60] = {.lex_state = 1, .external_lex_state = 2},
  [61] = {.lex_state = 0, .external_lex_state = 2},
  [62] = {.lex_state = 0, .external_lex_state = 3},
  [63] = {.lex_state = 1, .external_lex_state = 2},
  [64] = {.lex_state = 0, .external_lex_state = 3},
  [65] = {.lex_state = 0, .external_lex_state = 3},
  [66] = {.lex_state = 0, .external_lex_state = 2},
  [67] = {.lex_state = 1, .external_lex_state = 2},
};

enum {
  ts_external_token_comment = 0,
  ts_external_token_indent = 1,
  ts_external_token_dedent = 2,
  ts_external_token_indented = 3,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_comment] = sym_comment,
  [ts_external_token_indent] = sym_indent,
  [ts_external_token_dedent] = sym_dedent,
  [ts_external_token_indented] = sym_indented,
};

static const bool ts_external_scanner_states[7][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_comment] = true,
    [ts_external_token_indent] = true,
    [ts_external_token_dedent] = true,
    [ts_external_token_indented] = true,
  },
  [2] = {
    [ts_external_token_comment] = true,
  },
  [3] = {
    [ts_external_token_comment] = true,
    [ts_external_token_indent] = true,
  },
  [4] = {
    [ts_external_token_comment] = true,
    [ts_external_token_dedent] = true,
  },
  [5] = {
    [ts_external_token_comment] = true,
    [ts_external_token_dedent] = true,
    [ts_external_token_indented] = true,
  },
  [6] = {
    [ts_external_token_comment] = true,
    [ts_external_token_indent] = true,
    [ts_external_token_dedent] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_cabal_DASHversion] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym_spec_version] = ACTIONS(1),
    [anon_sym_benchmark] = ACTIONS(1),
    [anon_sym_executable] = ACTIONS(1),
    [anon_sym_flag] = ACTIONS(1),
    [anon_sym_library] = ACTIONS(1),
    [anon_sym_source_DASHrepository] = ACTIONS(1),
    [anon_sym_test_DASHsuite] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym_field_name] = ACTIONS(1),
    [sym_indent] = ACTIONS(1),
    [sym_dedent] = ACTIONS(1),
    [sym_indented] = ACTIONS(1),
  },
  [1] = {
    [sym_cabal] = STATE(57),
    [sym_cabal_version] = STATE(21),
    [sym_properties] = STATE(5),
    [sym_field] = STATE(7),
    [aux_sym_properties_repeat1] = STATE(7),
    [anon_sym_cabal_DASHversion] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_field_name] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
    ACTIONS(11), 1,
      anon_sym_benchmark,
    ACTIONS(13), 1,
      anon_sym_executable,
    ACTIONS(15), 1,
      anon_sym_flag,
    ACTIONS(17), 1,
      anon_sym_library,
    ACTIONS(19), 1,
      anon_sym_source_DASHrepository,
    ACTIONS(21), 1,
      anon_sym_test_DASHsuite,
    STATE(4), 7,
      sym_benchmark,
      sym_executable,
      sym_flag,
      sym_library,
      sym_source_repository,
      sym_test_suite,
      aux_sym_sections_repeat1,
  [34] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_benchmark,
    ACTIONS(13), 1,
      anon_sym_executable,
    ACTIONS(15), 1,
      anon_sym_flag,
    ACTIONS(17), 1,
      anon_sym_library,
    ACTIONS(19), 1,
      anon_sym_source_DASHrepository,
    ACTIONS(21), 1,
      anon_sym_test_DASHsuite,
    STATE(61), 1,
      sym_sections,
    STATE(2), 7,
      sym_benchmark,
      sym_executable,
      sym_flag,
      sym_library,
      sym_source_repository,
      sym_test_suite,
      aux_sym_sections_repeat1,
  [68] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    ACTIONS(25), 1,
      anon_sym_benchmark,
    ACTIONS(28), 1,
      anon_sym_executable,
    ACTIONS(31), 1,
      anon_sym_flag,
    ACTIONS(34), 1,
      anon_sym_library,
    ACTIONS(37), 1,
      anon_sym_source_DASHrepository,
    ACTIONS(40), 1,
      anon_sym_test_DASHsuite,
    STATE(4), 7,
      sym_benchmark,
      sym_executable,
      sym_flag,
      sym_library,
      sym_source_repository,
      sym_test_suite,
      aux_sym_sections_repeat1,
  [102] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_benchmark,
    ACTIONS(13), 1,
      anon_sym_executable,
    ACTIONS(15), 1,
      anon_sym_flag,
    ACTIONS(17), 1,
      anon_sym_library,
    ACTIONS(19), 1,
      anon_sym_source_DASHrepository,
    ACTIONS(21), 1,
      anon_sym_test_DASHsuite,
    STATE(46), 1,
      sym_sections,
    STATE(2), 7,
      sym_benchmark,
      sym_executable,
      sym_flag,
      sym_library,
      sym_source_repository,
      sym_test_suite,
      aux_sym_sections_repeat1,
  [136] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      sym_field_name,
    STATE(6), 2,
      sym_field,
      aux_sym_properties_repeat1,
    ACTIONS(43), 6,
      anon_sym_benchmark,
      anon_sym_executable,
      anon_sym_flag,
      anon_sym_library,
      anon_sym_source_DASHrepository,
      anon_sym_test_DASHsuite,
  [155] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_field_name,
    STATE(6), 2,
      sym_field,
      aux_sym_properties_repeat1,
    ACTIONS(48), 6,
      anon_sym_benchmark,
      anon_sym_executable,
      anon_sym_flag,
      anon_sym_library,
      anon_sym_source_DASHrepository,
      anon_sym_test_DASHsuite,
  [174] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(52), 1,
      sym_indent,
    ACTIONS(50), 7,
      anon_sym_benchmark,
      anon_sym_executable,
      anon_sym_flag,
      anon_sym_library,
      anon_sym_source_DASHrepository,
      anon_sym_test_DASHsuite,
      sym_field_name,
  [190] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(54), 7,
      ts_builtin_sym_end,
      anon_sym_benchmark,
      anon_sym_executable,
      anon_sym_flag,
      anon_sym_library,
      anon_sym_source_DASHrepository,
      anon_sym_test_DASHsuite,
  [203] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(56), 7,
      ts_builtin_sym_end,
      anon_sym_benchmark,
      anon_sym_executable,
      anon_sym_flag,
      anon_sym_library,
      anon_sym_source_DASHrepository,
      anon_sym_test_DASHsuite,
  [216] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(58), 7,
      ts_builtin_sym_end,
      anon_sym_benchmark,
      anon_sym_executable,
      anon_sym_flag,
      anon_sym_library,
      anon_sym_source_DASHrepository,
      anon_sym_test_DASHsuite,
  [229] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(60), 7,
      ts_builtin_sym_end,
      anon_sym_benchmark,
      anon_sym_executable,
      anon_sym_flag,
      anon_sym_library,
      anon_sym_source_DASHrepository,
      anon_sym_test_DASHsuite,
  [242] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(62), 7,
      anon_sym_benchmark,
      anon_sym_executable,
      anon_sym_flag,
      anon_sym_library,
      anon_sym_source_DASHrepository,
      anon_sym_test_DASHsuite,
      sym_field_name,
  [255] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(64), 7,
      ts_builtin_sym_end,
      anon_sym_benchmark,
      anon_sym_executable,
      anon_sym_flag,
      anon_sym_library,
      anon_sym_source_DASHrepository,
      anon_sym_test_DASHsuite,
  [268] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 7,
      ts_builtin_sym_end,
      anon_sym_benchmark,
      anon_sym_executable,
      anon_sym_flag,
      anon_sym_library,
      anon_sym_source_DASHrepository,
      anon_sym_test_DASHsuite,
  [281] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(68), 7,
      anon_sym_benchmark,
      anon_sym_executable,
      anon_sym_flag,
      anon_sym_library,
      anon_sym_source_DASHrepository,
      anon_sym_test_DASHsuite,
      sym_field_name,
  [294] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(70), 7,
      ts_builtin_sym_end,
      anon_sym_benchmark,
      anon_sym_executable,
      anon_sym_flag,
      anon_sym_library,
      anon_sym_source_DASHrepository,
      anon_sym_test_DASHsuite,
  [307] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(72), 1,
      sym_field_name,
    ACTIONS(74), 1,
      sym_dedent,
    STATE(26), 2,
      sym_field,
      aux_sym_properties_repeat1,
  [321] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(72), 1,
      sym_field_name,
    ACTIONS(76), 1,
      sym_dedent,
    STATE(26), 2,
      sym_field,
      aux_sym_properties_repeat1,
  [335] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(72), 1,
      sym_field_name,
    ACTIONS(78), 1,
      sym_dedent,
    STATE(26), 2,
      sym_field,
      aux_sym_properties_repeat1,
  [349] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(80), 1,
      sym_field_name,
    STATE(3), 1,
      sym_properties,
    STATE(7), 2,
      sym_field,
      aux_sym_properties_repeat1,
  [363] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(72), 1,
      sym_field_name,
    ACTIONS(82), 1,
      sym_dedent,
    STATE(26), 2,
      sym_field,
      aux_sym_properties_repeat1,
  [377] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(72), 1,
      sym_field_name,
    ACTIONS(84), 1,
      sym_dedent,
    STATE(26), 2,
      sym_field,
      aux_sym_properties_repeat1,
  [391] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(72), 1,
      sym_field_name,
    ACTIONS(86), 1,
      sym_dedent,
    STATE(26), 2,
      sym_field,
      aux_sym_properties_repeat1,
  [405] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(72), 1,
      sym_field_name,
    ACTIONS(88), 1,
      sym_dedent,
    STATE(26), 2,
      sym_field,
      aux_sym_properties_repeat1,
  [419] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 1,
      sym_field_name,
    ACTIONS(93), 1,
      sym_dedent,
    STATE(26), 2,
      sym_field,
      aux_sym_properties_repeat1,
  [433] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(72), 1,
      sym_field_name,
    STATE(23), 2,
      sym_field,
      aux_sym_properties_repeat1,
  [444] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      sym_dedent,
    ACTIONS(97), 1,
      sym_indented,
    STATE(28), 1,
      aux_sym_field_repeat1,
  [457] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 1,
      sym_dedent,
    ACTIONS(102), 1,
      sym_indented,
    STATE(28), 1,
      aux_sym_field_repeat1,
  [470] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      sym_indented,
    ACTIONS(104), 1,
      sym_dedent,
    STATE(29), 1,
      aux_sym_field_repeat1,
  [483] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      sym_indent,
    ACTIONS(106), 2,
      sym_dedent,
      sym_field_name,
  [494] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(72), 1,
      sym_field_name,
    STATE(24), 2,
      sym_field,
      aux_sym_properties_repeat1,
  [505] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      sym_indented,
    ACTIONS(110), 1,
      sym_dedent,
    STATE(28), 1,
      aux_sym_field_repeat1,
  [518] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(72), 1,
      sym_field_name,
    STATE(22), 2,
      sym_field,
      aux_sym_properties_repeat1,
  [529] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(72), 1,
      sym_field_name,
    STATE(25), 2,
      sym_field,
      aux_sym_properties_repeat1,
  [540] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(72), 1,
      sym_field_name,
    STATE(20), 2,
      sym_field,
      aux_sym_properties_repeat1,
  [551] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(72), 1,
      sym_field_name,
    STATE(19), 2,
      sym_field,
      aux_sym_properties_repeat1,
  [562] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(72), 1,
      sym_field_name,
    STATE(18), 2,
      sym_field,
      aux_sym_properties_repeat1,
  [573] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      sym_indented,
    ACTIONS(112), 1,
      sym_dedent,
    STATE(33), 1,
      aux_sym_field_repeat1,
  [586] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 1,
      sym_section_name,
    ACTIONS(116), 1,
      sym_indent,
  [596] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(118), 2,
      sym_dedent,
      sym_field_name,
  [604] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 2,
      sym_dedent,
      sym_field_name,
  [612] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 2,
      sym_dedent,
      sym_indented,
  [620] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 1,
      sym_section_name,
  [627] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 1,
      sym_spec_version,
  [634] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 1,
      ts_builtin_sym_end,
  [641] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 1,
      sym_section_name,
  [648] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(130), 1,
      sym_indent,
  [655] = 2,
    ACTIONS(132), 1,
      sym_comment,
    ACTIONS(134), 1,
      sym_field_value,
  [662] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 1,
      anon_sym_COLON,
  [669] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(138), 1,
      sym_section_name,
  [676] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 1,
      sym_section_name,
  [683] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(142), 1,
      sym_section_name,
  [690] = 2,
    ACTIONS(132), 1,
      sym_comment,
    ACTIONS(144), 1,
      sym_field_value,
  [697] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(146), 1,
      sym_field_name,
  [704] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(148), 1,
      sym_indent,
  [711] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(150), 1,
      ts_builtin_sym_end,
  [718] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(152), 1,
      sym_indent,
  [725] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 1,
      anon_sym_COLON,
  [732] = 2,
    ACTIONS(132), 1,
      sym_comment,
    ACTIONS(156), 1,
      sym_field_value,
  [739] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 1,
      ts_builtin_sym_end,
  [746] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(160), 1,
      sym_indent,
  [753] = 2,
    ACTIONS(132), 1,
      sym_comment,
    ACTIONS(162), 1,
      sym_field_value,
  [760] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 1,
      sym_indent,
  [767] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 1,
      sym_indent,
  [774] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 1,
      anon_sym_COLON,
  [781] = 2,
    ACTIONS(132), 1,
      sym_comment,
    ACTIONS(170), 1,
      sym_field_value,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 34,
  [SMALL_STATE(4)] = 68,
  [SMALL_STATE(5)] = 102,
  [SMALL_STATE(6)] = 136,
  [SMALL_STATE(7)] = 155,
  [SMALL_STATE(8)] = 174,
  [SMALL_STATE(9)] = 190,
  [SMALL_STATE(10)] = 203,
  [SMALL_STATE(11)] = 216,
  [SMALL_STATE(12)] = 229,
  [SMALL_STATE(13)] = 242,
  [SMALL_STATE(14)] = 255,
  [SMALL_STATE(15)] = 268,
  [SMALL_STATE(16)] = 281,
  [SMALL_STATE(17)] = 294,
  [SMALL_STATE(18)] = 307,
  [SMALL_STATE(19)] = 321,
  [SMALL_STATE(20)] = 335,
  [SMALL_STATE(21)] = 349,
  [SMALL_STATE(22)] = 363,
  [SMALL_STATE(23)] = 377,
  [SMALL_STATE(24)] = 391,
  [SMALL_STATE(25)] = 405,
  [SMALL_STATE(26)] = 419,
  [SMALL_STATE(27)] = 433,
  [SMALL_STATE(28)] = 444,
  [SMALL_STATE(29)] = 457,
  [SMALL_STATE(30)] = 470,
  [SMALL_STATE(31)] = 483,
  [SMALL_STATE(32)] = 494,
  [SMALL_STATE(33)] = 505,
  [SMALL_STATE(34)] = 518,
  [SMALL_STATE(35)] = 529,
  [SMALL_STATE(36)] = 540,
  [SMALL_STATE(37)] = 551,
  [SMALL_STATE(38)] = 562,
  [SMALL_STATE(39)] = 573,
  [SMALL_STATE(40)] = 586,
  [SMALL_STATE(41)] = 596,
  [SMALL_STATE(42)] = 604,
  [SMALL_STATE(43)] = 612,
  [SMALL_STATE(44)] = 620,
  [SMALL_STATE(45)] = 627,
  [SMALL_STATE(46)] = 634,
  [SMALL_STATE(47)] = 641,
  [SMALL_STATE(48)] = 648,
  [SMALL_STATE(49)] = 655,
  [SMALL_STATE(50)] = 662,
  [SMALL_STATE(51)] = 669,
  [SMALL_STATE(52)] = 676,
  [SMALL_STATE(53)] = 683,
  [SMALL_STATE(54)] = 690,
  [SMALL_STATE(55)] = 697,
  [SMALL_STATE(56)] = 704,
  [SMALL_STATE(57)] = 711,
  [SMALL_STATE(58)] = 718,
  [SMALL_STATE(59)] = 725,
  [SMALL_STATE(60)] = 732,
  [SMALL_STATE(61)] = 739,
  [SMALL_STATE(62)] = 746,
  [SMALL_STATE(63)] = 753,
  [SMALL_STATE(64)] = 760,
  [SMALL_STATE(65)] = 767,
  [SMALL_STATE(66)] = 774,
  [SMALL_STATE(67)] = 781,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sections, 1),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sections_repeat1, 2),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sections_repeat1, 2), SHIFT_REPEAT(53),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sections_repeat1, 2), SHIFT_REPEAT(52),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sections_repeat1, 2), SHIFT_REPEAT(51),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sections_repeat1, 2), SHIFT_REPEAT(40),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sections_repeat1, 2), SHIFT_REPEAT(44),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sections_repeat1, 2), SHIFT_REPEAT(47),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_properties_repeat1, 2),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_properties_repeat1, 2), SHIFT_REPEAT(59),
  [48] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_properties, 1),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 3),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_library, 5),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_executable, 5),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_benchmark, 5),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_suite, 5),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 7),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag, 5),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_repository, 5),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 6),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_library, 4),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_properties_repeat1, 2), SHIFT_REPEAT(66),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_properties_repeat1, 2),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_repeat1, 2),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_repeat1, 2), SHIFT_REPEAT(49),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 3),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 7),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 6),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cabal, 2),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cabal_version, 3),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [150] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cabal, 3),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_cabal_external_scanner_create(void);
void tree_sitter_cabal_external_scanner_destroy(void *);
bool tree_sitter_cabal_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_cabal_external_scanner_serialize(void *, char *);
void tree_sitter_cabal_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_cabal(void) {
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
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_cabal_external_scanner_create,
      tree_sitter_cabal_external_scanner_destroy,
      tree_sitter_cabal_external_scanner_scan,
      tree_sitter_cabal_external_scanner_serialize,
      tree_sitter_cabal_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
