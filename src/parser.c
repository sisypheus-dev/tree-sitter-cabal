#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 60
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 34
#define ALIAS_COUNT 0
#define TOKEN_COUNT 18
#define EXTERNAL_TOKEN_COUNT 4
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_cabal_DASHversion = 1,
  anon_sym_COLON = 2,
  sym_spec_version = 3,
  anon_sym_benchmark = 4,
  anon_sym_common = 5,
  anon_sym_executable = 6,
  anon_sym_flag = 7,
  anon_sym_library = 8,
  anon_sym_source_DASHrepository = 9,
  anon_sym_test_DASHsuite = 10,
  sym_section_name = 11,
  sym_comment = 12,
  sym_field_name = 13,
  sym_field_value = 14,
  sym_indent = 15,
  sym_dedent = 16,
  sym_indented = 17,
  sym_cabal = 18,
  sym_cabal_version = 19,
  sym_properties = 20,
  sym_sections = 21,
  sym_benchmark = 22,
  sym_common = 23,
  sym_executable = 24,
  sym_flag = 25,
  sym_library = 26,
  sym_source_repository = 27,
  sym_test_suite = 28,
  sym_property_block = 29,
  sym_field = 30,
  aux_sym_properties_repeat1 = 31,
  aux_sym_sections_repeat1 = 32,
  aux_sym_field_repeat1 = 33,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_cabal_DASHversion] = "cabal-version",
  [anon_sym_COLON] = ":",
  [sym_spec_version] = "spec_version",
  [anon_sym_benchmark] = "benchmark",
  [anon_sym_common] = "common",
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
  [sym_common] = "common",
  [sym_executable] = "executable",
  [sym_flag] = "flag",
  [sym_library] = "library",
  [sym_source_repository] = "source_repository",
  [sym_test_suite] = "test_suite",
  [sym_property_block] = "property_block",
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
  [anon_sym_common] = anon_sym_common,
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
  [sym_common] = sym_common,
  [sym_executable] = sym_executable,
  [sym_flag] = sym_flag,
  [sym_library] = sym_library,
  [sym_source_repository] = sym_source_repository,
  [sym_test_suite] = sym_test_suite,
  [sym_property_block] = sym_property_block,
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
  [anon_sym_common] = {
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
  [sym_common] = {
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
  [sym_property_block] = {
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
  [22] = 6,
  [23] = 23,
  [24] = 8,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 26,
  [30] = 25,
  [31] = 31,
  [32] = 14,
  [33] = 33,
  [34] = 12,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
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
  [55] = 51,
  [56] = 56,
  [57] = 57,
  [58] = 57,
  [59] = 54,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(79);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (lookahead == '-') ADVANCE(2);
      if (lookahead == ':') ADVANCE(81);
      if (lookahead == 'b') ADVANCE(69);
      if (lookahead == 'c') ADVANCE(68);
      if (lookahead == 'e') ADVANCE(75);
      if (lookahead == 'f') ADVANCE(72);
      if (lookahead == 'l') ADVANCE(71);
      if (lookahead == 's') ADVANCE(74);
      if (lookahead == 't') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(67);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '-') ADVANCE(162);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(163);
      if (lookahead != 0) ADVANCE(164);
      END_STATE();
    case 2:
      if (lookahead == '-') ADVANCE(99);
      END_STATE();
    case 3:
      if (lookahead == '-') ADVANCE(48);
      END_STATE();
    case 4:
      if (lookahead == '-') ADVANCE(46);
      END_STATE();
    case 5:
      if (lookahead == '.') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(22);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(11);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(41);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(42);
      END_STATE();
    case 10:
      if (lookahead == 'b') ADVANCE(43);
      END_STATE();
    case 11:
      if (lookahead == 'b') ADVANCE(29);
      END_STATE();
    case 12:
      if (lookahead == 'c') ADVANCE(23);
      END_STATE();
    case 13:
      if (lookahead == 'c') ADVANCE(56);
      END_STATE();
    case 14:
      if (lookahead == 'c') ADVANCE(21);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(88);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(96);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(13);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(4);
      END_STATE();
    case 22:
      if (lookahead == 'g') ADVANCE(90);
      END_STATE();
    case 23:
      if (lookahead == 'h') ADVANCE(32);
      END_STATE();
    case 24:
      if (lookahead == 'i') ADVANCE(10);
      END_STATE();
    case 25:
      if (lookahead == 'i') ADVANCE(53);
      END_STATE();
    case 26:
      if (lookahead == 'i') ADVANCE(52);
      END_STATE();
    case 27:
      if (lookahead == 'k') ADVANCE(84);
      END_STATE();
    case 28:
      if (lookahead == 'l') ADVANCE(6);
      END_STATE();
    case 29:
      if (lookahead == 'l') ADVANCE(18);
      END_STATE();
    case 30:
      if (lookahead == 'm') ADVANCE(31);
      END_STATE();
    case 31:
      if (lookahead == 'm') ADVANCE(37);
      END_STATE();
    case 32:
      if (lookahead == 'm') ADVANCE(9);
      END_STATE();
    case 33:
      if (lookahead == 'n') ADVANCE(12);
      END_STATE();
    case 34:
      if (lookahead == 'n') ADVANCE(86);
      END_STATE();
    case 35:
      if (lookahead == 'o') ADVANCE(30);
      END_STATE();
    case 36:
      if (lookahead == 'o') ADVANCE(55);
      END_STATE();
    case 37:
      if (lookahead == 'o') ADVANCE(34);
      END_STATE();
    case 38:
      if (lookahead == 'o') ADVANCE(49);
      END_STATE();
    case 39:
      if (lookahead == 'o') ADVANCE(44);
      END_STATE();
    case 40:
      if (lookahead == 'p') ADVANCE(38);
      END_STATE();
    case 41:
      if (lookahead == 'r') ADVANCE(58);
      END_STATE();
    case 42:
      if (lookahead == 'r') ADVANCE(27);
      END_STATE();
    case 43:
      if (lookahead == 'r') ADVANCE(8);
      END_STATE();
    case 44:
      if (lookahead == 'r') ADVANCE(59);
      END_STATE();
    case 45:
      if (lookahead == 'r') ADVANCE(14);
      END_STATE();
    case 46:
      if (lookahead == 'r') ADVANCE(17);
      END_STATE();
    case 47:
      if (lookahead == 's') ADVANCE(50);
      END_STATE();
    case 48:
      if (lookahead == 's') ADVANCE(54);
      END_STATE();
    case 49:
      if (lookahead == 's') ADVANCE(26);
      END_STATE();
    case 50:
      if (lookahead == 't') ADVANCE(3);
      END_STATE();
    case 51:
      if (lookahead == 't') ADVANCE(7);
      END_STATE();
    case 52:
      if (lookahead == 't') ADVANCE(39);
      END_STATE();
    case 53:
      if (lookahead == 't') ADVANCE(19);
      END_STATE();
    case 54:
      if (lookahead == 'u') ADVANCE(25);
      END_STATE();
    case 55:
      if (lookahead == 'u') ADVANCE(45);
      END_STATE();
    case 56:
      if (lookahead == 'u') ADVANCE(51);
      END_STATE();
    case 57:
      if (lookahead == 'x') ADVANCE(20);
      END_STATE();
    case 58:
      if (lookahead == 'y') ADVANCE(92);
      END_STATE();
    case 59:
      if (lookahead == 'y') ADVANCE(94);
      END_STATE();
    case 60:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(60)
      if (lookahead == '-') ADVANCE(2);
      if (lookahead == 'c') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 61:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(61)
      if (lookahead == '-') ADVANCE(2);
      if (lookahead == 'b') ADVANCE(69);
      if (lookahead == 'c') ADVANCE(73);
      if (lookahead == 'e') ADVANCE(75);
      if (lookahead == 'f') ADVANCE(72);
      if (lookahead == 'l') ADVANCE(71);
      if (lookahead == 's') ADVANCE(74);
      if (lookahead == 't') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 62:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(62)
      if (lookahead == '-') ADVANCE(2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 63:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(63)
      if (lookahead == '-') ADVANCE(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(66);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 64:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(82);
      END_STATE();
    case 65:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(83);
      END_STATE();
    case 66:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(66);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 67:
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      if (lookahead == '.') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(103);
      END_STATE();
    case 68:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      if (lookahead == 'a') ADVANCE(105);
      if (lookahead == 'o') ADVANCE(125);
      END_STATE();
    case 69:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      if (lookahead == 'e') ADVANCE(127);
      END_STATE();
    case 70:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      if (lookahead == 'e') ADVANCE(142);
      END_STATE();
    case 71:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      if (lookahead == 'i') ADVANCE(104);
      END_STATE();
    case 72:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'k') ||
          ('m' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      if (lookahead == 'l') ADVANCE(156);
      END_STATE();
    case 73:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      if (lookahead == 'o') ADVANCE(125);
      END_STATE();
    case 74:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      if (lookahead == 'o') ADVANCE(151);
      END_STATE();
    case 75:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'w') ||
          lookahead == 'y' ||
          lookahead == 'z') ADVANCE(161);
      if (lookahead == 'x') ADVANCE(113);
      END_STATE();
    case 76:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      if (lookahead == 'a') ADVANCE(105);
      END_STATE();
    case 77:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      END_STATE();
    case 78:
      if (eof) ADVANCE(79);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(78)
      if (lookahead == '-') ADVANCE(2);
      if (lookahead == 'b') ADVANCE(15);
      if (lookahead == 'c') ADVANCE(35);
      if (lookahead == 'e') ADVANCE(57);
      if (lookahead == 'f') ADVANCE(28);
      if (lookahead == 'l') ADVANCE(24);
      if (lookahead == 's') ADVANCE(36);
      if (lookahead == 't') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(5);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_cabal_DASHversion);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_spec_version);
      if (lookahead == '.') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(82);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_spec_version);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(83);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_benchmark);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_benchmark);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_common);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_common);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_executable);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_executable);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_flag);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_flag);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_library);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_library);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_source_DASHrepository);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_source_DASHrepository);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_test_DASHsuite);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_test_DASHsuite);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == '-') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(99);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      if (lookahead == '.') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(103);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'a' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      if (lookahead == 'b') ADVANCE(138);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'a' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      if (lookahead == 'b') ADVANCE(157);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'a' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      if (lookahead == 'b') ADVANCE(123);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'a' ||
          lookahead == 'b' ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      if (lookahead == 'c') ADVANCE(117);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'a' ||
          lookahead == 'b' ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      if (lookahead == 'c') ADVANCE(114);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'a' ||
          lookahead == 'b' ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      if (lookahead == 'c') ADVANCE(152);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      if (lookahead == 'e') ADVANCE(134);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      if (lookahead == 'e') ADVANCE(89);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      if (lookahead == 'e') ADVANCE(97);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      if (lookahead == 'e') ADVANCE(109);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      if (lookahead == 'e') ADVANCE(102);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      if (lookahead == 'e') ADVANCE(139);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f') ||
          ('h' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      if (lookahead == 'g') ADVANCE(91);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'g') ||
          ('i' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      if (lookahead == 'h') ADVANCE(126);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      if (lookahead == 'i') ADVANCE(149);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      if (lookahead == 'i') ADVANCE(147);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      if (lookahead == 'i') ADVANCE(131);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'j') ||
          ('l' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      if (lookahead == 'k') ADVANCE(85);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'k') ||
          ('m' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      if (lookahead == 'l') ADVANCE(100);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'k') ||
          ('m' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      if (lookahead == 'l') ADVANCE(111);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'l') ||
          ('n' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      if (lookahead == 'm') ADVANCE(130);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'l') ||
          ('n' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      if (lookahead == 'm') ADVANCE(124);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'l') ||
          ('n' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      if (lookahead == 'm') ADVANCE(160);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      if (lookahead == 'n') ADVANCE(107);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      if (lookahead == 'n') ADVANCE(87);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      if (lookahead == 'n') ADVANCE(80);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      if (lookahead == 'o') ADVANCE(128);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      if (lookahead == 'o') ADVANCE(129);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      if (lookahead == 'o') ADVANCE(145);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      if (lookahead == 'o') ADVANCE(137);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'o') ||
          ('q' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      if (lookahead == 'p') ADVANCE(132);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      if (lookahead == 'r') ADVANCE(154);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      if (lookahead == 'r') ADVANCE(121);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      if (lookahead == 'r') ADVANCE(155);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      if (lookahead == 'r') ADVANCE(159);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      if (lookahead == 'r') ADVANCE(143);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      if (lookahead == 'r') ADVANCE(108);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      if (lookahead == 'r') ADVANCE(110);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      if (lookahead == 's') ADVANCE(146);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      if (lookahead == 's') ADVANCE(120);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      if (lookahead == 's') ADVANCE(150);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      if (lookahead == 's') ADVANCE(119);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      if (lookahead == 't') ADVANCE(101);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      if (lookahead == 't') ADVANCE(133);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      if (lookahead == 't') ADVANCE(158);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      if (lookahead == 't') ADVANCE(112);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 't') ||
          ('v' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      if (lookahead == 'u') ADVANCE(118);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 't') ||
          ('v' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      if (lookahead == 'u') ADVANCE(140);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 't') ||
          ('v' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      if (lookahead == 'u') ADVANCE(148);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'u') ||
          ('w' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      if (lookahead == 'v') ADVANCE(115);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'x') ||
          lookahead == 'z') ADVANCE(161);
      if (lookahead == 'y') ADVANCE(93);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'x') ||
          lookahead == 'z') ADVANCE(161);
      if (lookahead == 'y') ADVANCE(95);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      if (lookahead == 'a') ADVANCE(116);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      if (lookahead == 'a') ADVANCE(122);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      if (lookahead == 'a') ADVANCE(106);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      if (lookahead == 'a') ADVANCE(135);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      if (lookahead == 'a') ADVANCE(136);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_field_value);
      if (lookahead == '-') ADVANCE(99);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(164);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_field_value);
      if (lookahead == '-') ADVANCE(162);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(163);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(164);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_field_value);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(164);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 60, .external_lex_state = 2},
  [2] = {.lex_state = 78, .external_lex_state = 2},
  [3] = {.lex_state = 78, .external_lex_state = 2},
  [4] = {.lex_state = 78, .external_lex_state = 2},
  [5] = {.lex_state = 78, .external_lex_state = 2},
  [6] = {.lex_state = 61, .external_lex_state = 2},
  [7] = {.lex_state = 61, .external_lex_state = 2},
  [8] = {.lex_state = 61, .external_lex_state = 3},
  [9] = {.lex_state = 78, .external_lex_state = 2},
  [10] = {.lex_state = 78, .external_lex_state = 2},
  [11] = {.lex_state = 78, .external_lex_state = 2},
  [12] = {.lex_state = 61, .external_lex_state = 2},
  [13] = {.lex_state = 78, .external_lex_state = 2},
  [14] = {.lex_state = 61, .external_lex_state = 2},
  [15] = {.lex_state = 78, .external_lex_state = 2},
  [16] = {.lex_state = 78, .external_lex_state = 2},
  [17] = {.lex_state = 78, .external_lex_state = 2},
  [18] = {.lex_state = 78, .external_lex_state = 2},
  [19] = {.lex_state = 78, .external_lex_state = 2},
  [20] = {.lex_state = 62, .external_lex_state = 2},
  [21] = {.lex_state = 62, .external_lex_state = 4},
  [22] = {.lex_state = 62, .external_lex_state = 4},
  [23] = {.lex_state = 0, .external_lex_state = 5},
  [24] = {.lex_state = 62, .external_lex_state = 6},
  [25] = {.lex_state = 0, .external_lex_state = 5},
  [26] = {.lex_state = 0, .external_lex_state = 5},
  [27] = {.lex_state = 63, .external_lex_state = 3},
  [28] = {.lex_state = 62, .external_lex_state = 2},
  [29] = {.lex_state = 0, .external_lex_state = 5},
  [30] = {.lex_state = 0, .external_lex_state = 5},
  [31] = {.lex_state = 0, .external_lex_state = 3},
  [32] = {.lex_state = 62, .external_lex_state = 4},
  [33] = {.lex_state = 0, .external_lex_state = 3},
  [34] = {.lex_state = 62, .external_lex_state = 4},
  [35] = {.lex_state = 0, .external_lex_state = 3},
  [36] = {.lex_state = 0, .external_lex_state = 3},
  [37] = {.lex_state = 0, .external_lex_state = 3},
  [38] = {.lex_state = 0, .external_lex_state = 3},
  [39] = {.lex_state = 0, .external_lex_state = 3},
  [40] = {.lex_state = 0, .external_lex_state = 5},
  [41] = {.lex_state = 62, .external_lex_state = 2},
  [42] = {.lex_state = 0, .external_lex_state = 2},
  [43] = {.lex_state = 63, .external_lex_state = 2},
  [44] = {.lex_state = 63, .external_lex_state = 2},
  [45] = {.lex_state = 63, .external_lex_state = 2},
  [46] = {.lex_state = 1, .external_lex_state = 2},
  [47] = {.lex_state = 63, .external_lex_state = 2},
  [48] = {.lex_state = 0, .external_lex_state = 2},
  [49] = {.lex_state = 63, .external_lex_state = 2},
  [50] = {.lex_state = 63, .external_lex_state = 2},
  [51] = {.lex_state = 1, .external_lex_state = 2},
  [52] = {.lex_state = 78, .external_lex_state = 2},
  [53] = {.lex_state = 0, .external_lex_state = 2},
  [54] = {.lex_state = 1, .external_lex_state = 2},
  [55] = {.lex_state = 1, .external_lex_state = 2},
  [56] = {.lex_state = 0, .external_lex_state = 2},
  [57] = {.lex_state = 0, .external_lex_state = 2},
  [58] = {.lex_state = 0, .external_lex_state = 2},
  [59] = {.lex_state = 1, .external_lex_state = 2},
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
    [anon_sym_common] = ACTIONS(1),
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
    [sym_cabal] = STATE(56),
    [sym_cabal_version] = STATE(20),
    [sym_properties] = STATE(4),
    [sym_field] = STATE(7),
    [aux_sym_properties_repeat1] = STATE(7),
    [anon_sym_cabal_DASHversion] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym_field_name] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
    ACTIONS(11), 1,
      anon_sym_benchmark,
    ACTIONS(14), 1,
      anon_sym_common,
    ACTIONS(17), 1,
      anon_sym_executable,
    ACTIONS(20), 1,
      anon_sym_flag,
    ACTIONS(23), 1,
      anon_sym_library,
    ACTIONS(26), 1,
      anon_sym_source_DASHrepository,
    ACTIONS(29), 1,
      anon_sym_test_DASHsuite,
    STATE(2), 8,
      sym_benchmark,
      sym_common,
      sym_executable,
      sym_flag,
      sym_library,
      sym_source_repository,
      sym_test_suite,
      aux_sym_sections_repeat1,
  [38] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(32), 1,
      ts_builtin_sym_end,
    ACTIONS(34), 1,
      anon_sym_benchmark,
    ACTIONS(36), 1,
      anon_sym_common,
    ACTIONS(38), 1,
      anon_sym_executable,
    ACTIONS(40), 1,
      anon_sym_flag,
    ACTIONS(42), 1,
      anon_sym_library,
    ACTIONS(44), 1,
      anon_sym_source_DASHrepository,
    ACTIONS(46), 1,
      anon_sym_test_DASHsuite,
    STATE(2), 8,
      sym_benchmark,
      sym_common,
      sym_executable,
      sym_flag,
      sym_library,
      sym_source_repository,
      sym_test_suite,
      aux_sym_sections_repeat1,
  [76] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(34), 1,
      anon_sym_benchmark,
    ACTIONS(36), 1,
      anon_sym_common,
    ACTIONS(38), 1,
      anon_sym_executable,
    ACTIONS(40), 1,
      anon_sym_flag,
    ACTIONS(42), 1,
      anon_sym_library,
    ACTIONS(44), 1,
      anon_sym_source_DASHrepository,
    ACTIONS(46), 1,
      anon_sym_test_DASHsuite,
    STATE(42), 1,
      sym_sections,
    STATE(3), 8,
      sym_benchmark,
      sym_common,
      sym_executable,
      sym_flag,
      sym_library,
      sym_source_repository,
      sym_test_suite,
      aux_sym_sections_repeat1,
  [114] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(34), 1,
      anon_sym_benchmark,
    ACTIONS(36), 1,
      anon_sym_common,
    ACTIONS(38), 1,
      anon_sym_executable,
    ACTIONS(40), 1,
      anon_sym_flag,
    ACTIONS(42), 1,
      anon_sym_library,
    ACTIONS(44), 1,
      anon_sym_source_DASHrepository,
    ACTIONS(46), 1,
      anon_sym_test_DASHsuite,
    STATE(48), 1,
      sym_sections,
    STATE(3), 8,
      sym_benchmark,
      sym_common,
      sym_executable,
      sym_flag,
      sym_library,
      sym_source_repository,
      sym_test_suite,
      aux_sym_sections_repeat1,
  [152] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(50), 1,
      sym_field_name,
    STATE(6), 2,
      sym_field,
      aux_sym_properties_repeat1,
    ACTIONS(48), 7,
      anon_sym_benchmark,
      anon_sym_common,
      anon_sym_executable,
      anon_sym_flag,
      anon_sym_library,
      anon_sym_source_DASHrepository,
      anon_sym_test_DASHsuite,
  [172] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_field_name,
    STATE(6), 2,
      sym_field,
      aux_sym_properties_repeat1,
    ACTIONS(53), 7,
      anon_sym_benchmark,
      anon_sym_common,
      anon_sym_executable,
      anon_sym_flag,
      anon_sym_library,
      anon_sym_source_DASHrepository,
      anon_sym_test_DASHsuite,
  [192] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      sym_indent,
    ACTIONS(55), 8,
      anon_sym_benchmark,
      anon_sym_common,
      anon_sym_executable,
      anon_sym_flag,
      anon_sym_library,
      anon_sym_source_DASHrepository,
      anon_sym_test_DASHsuite,
      sym_field_name,
  [209] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 8,
      ts_builtin_sym_end,
      anon_sym_benchmark,
      anon_sym_common,
      anon_sym_executable,
      anon_sym_flag,
      anon_sym_library,
      anon_sym_source_DASHrepository,
      anon_sym_test_DASHsuite,
  [223] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 8,
      ts_builtin_sym_end,
      anon_sym_benchmark,
      anon_sym_common,
      anon_sym_executable,
      anon_sym_flag,
      anon_sym_library,
      anon_sym_source_DASHrepository,
      anon_sym_test_DASHsuite,
  [237] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 8,
      ts_builtin_sym_end,
      anon_sym_benchmark,
      anon_sym_common,
      anon_sym_executable,
      anon_sym_flag,
      anon_sym_library,
      anon_sym_source_DASHrepository,
      anon_sym_test_DASHsuite,
  [251] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 8,
      anon_sym_benchmark,
      anon_sym_common,
      anon_sym_executable,
      anon_sym_flag,
      anon_sym_library,
      anon_sym_source_DASHrepository,
      anon_sym_test_DASHsuite,
      sym_field_name,
  [265] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 8,
      ts_builtin_sym_end,
      anon_sym_benchmark,
      anon_sym_common,
      anon_sym_executable,
      anon_sym_flag,
      anon_sym_library,
      anon_sym_source_DASHrepository,
      anon_sym_test_DASHsuite,
  [279] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 8,
      anon_sym_benchmark,
      anon_sym_common,
      anon_sym_executable,
      anon_sym_flag,
      anon_sym_library,
      anon_sym_source_DASHrepository,
      anon_sym_test_DASHsuite,
      sym_field_name,
  [293] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 8,
      ts_builtin_sym_end,
      anon_sym_benchmark,
      anon_sym_common,
      anon_sym_executable,
      anon_sym_flag,
      anon_sym_library,
      anon_sym_source_DASHrepository,
      anon_sym_test_DASHsuite,
  [307] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 8,
      ts_builtin_sym_end,
      anon_sym_benchmark,
      anon_sym_common,
      anon_sym_executable,
      anon_sym_flag,
      anon_sym_library,
      anon_sym_source_DASHrepository,
      anon_sym_test_DASHsuite,
  [321] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 8,
      ts_builtin_sym_end,
      anon_sym_benchmark,
      anon_sym_common,
      anon_sym_executable,
      anon_sym_flag,
      anon_sym_library,
      anon_sym_source_DASHrepository,
      anon_sym_test_DASHsuite,
  [335] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 8,
      ts_builtin_sym_end,
      anon_sym_benchmark,
      anon_sym_common,
      anon_sym_executable,
      anon_sym_flag,
      anon_sym_library,
      anon_sym_source_DASHrepository,
      anon_sym_test_DASHsuite,
  [349] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 8,
      ts_builtin_sym_end,
      anon_sym_benchmark,
      anon_sym_common,
      anon_sym_executable,
      anon_sym_flag,
      anon_sym_library,
      anon_sym_source_DASHrepository,
      anon_sym_test_DASHsuite,
  [363] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      sym_field_name,
    STATE(5), 1,
      sym_properties,
    STATE(7), 2,
      sym_field,
      aux_sym_properties_repeat1,
  [377] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 1,
      sym_field_name,
    ACTIONS(85), 1,
      sym_dedent,
    STATE(22), 2,
      sym_field,
      aux_sym_properties_repeat1,
  [391] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 1,
      sym_field_name,
    ACTIONS(90), 1,
      sym_dedent,
    STATE(22), 2,
      sym_field,
      aux_sym_properties_repeat1,
  [405] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      sym_dedent,
    ACTIONS(94), 1,
      sym_indented,
    STATE(23), 1,
      aux_sym_field_repeat1,
  [418] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      sym_indent,
    ACTIONS(97), 2,
      sym_dedent,
      sym_field_name,
  [429] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 1,
      sym_dedent,
    ACTIONS(103), 1,
      sym_indented,
    STATE(23), 1,
      aux_sym_field_repeat1,
  [442] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 1,
      sym_indented,
    ACTIONS(105), 1,
      sym_dedent,
    STATE(30), 1,
      aux_sym_field_repeat1,
  [455] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 1,
      sym_section_name,
    ACTIONS(109), 1,
      sym_indent,
    STATE(11), 1,
      sym_property_block,
  [468] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 1,
      sym_field_name,
    STATE(21), 2,
      sym_field,
      aux_sym_properties_repeat1,
  [479] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 1,
      sym_indented,
    ACTIONS(111), 1,
      sym_dedent,
    STATE(25), 1,
      aux_sym_field_repeat1,
  [492] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 1,
      sym_indented,
    ACTIONS(113), 1,
      sym_dedent,
    STATE(23), 1,
      aux_sym_field_repeat1,
  [505] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      sym_indent,
    STATE(10), 1,
      sym_property_block,
  [515] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 2,
      sym_dedent,
      sym_field_name,
  [523] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      sym_indent,
    STATE(18), 1,
      sym_property_block,
  [533] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 2,
      sym_dedent,
      sym_field_name,
  [541] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      sym_indent,
    STATE(17), 1,
      sym_property_block,
  [551] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      sym_indent,
    STATE(19), 1,
      sym_property_block,
  [561] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      sym_indent,
    STATE(16), 1,
      sym_property_block,
  [571] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      sym_indent,
    STATE(15), 1,
      sym_property_block,
  [581] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      sym_indent,
    STATE(13), 1,
      sym_property_block,
  [591] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 2,
      sym_dedent,
      sym_indented,
  [599] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      sym_field_name,
  [606] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      ts_builtin_sym_end,
  [613] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 1,
      sym_section_name,
  [620] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      sym_section_name,
  [627] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 1,
      sym_section_name,
  [634] = 2,
    ACTIONS(129), 1,
      sym_comment,
    ACTIONS(131), 1,
      sym_field_value,
  [641] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 1,
      sym_section_name,
  [648] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      ts_builtin_sym_end,
  [655] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 1,
      sym_section_name,
  [662] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 1,
      sym_section_name,
  [669] = 2,
    ACTIONS(129), 1,
      sym_comment,
    ACTIONS(141), 1,
      sym_field_value,
  [676] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 1,
      sym_spec_version,
  [683] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
      anon_sym_COLON,
  [690] = 2,
    ACTIONS(129), 1,
      sym_comment,
    ACTIONS(147), 1,
      sym_field_value,
  [697] = 2,
    ACTIONS(129), 1,
      sym_comment,
    ACTIONS(149), 1,
      sym_field_value,
  [704] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 1,
      ts_builtin_sym_end,
  [711] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_COLON,
  [718] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      anon_sym_COLON,
  [725] = 2,
    ACTIONS(129), 1,
      sym_comment,
    ACTIONS(157), 1,
      sym_field_value,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 38,
  [SMALL_STATE(4)] = 76,
  [SMALL_STATE(5)] = 114,
  [SMALL_STATE(6)] = 152,
  [SMALL_STATE(7)] = 172,
  [SMALL_STATE(8)] = 192,
  [SMALL_STATE(9)] = 209,
  [SMALL_STATE(10)] = 223,
  [SMALL_STATE(11)] = 237,
  [SMALL_STATE(12)] = 251,
  [SMALL_STATE(13)] = 265,
  [SMALL_STATE(14)] = 279,
  [SMALL_STATE(15)] = 293,
  [SMALL_STATE(16)] = 307,
  [SMALL_STATE(17)] = 321,
  [SMALL_STATE(18)] = 335,
  [SMALL_STATE(19)] = 349,
  [SMALL_STATE(20)] = 363,
  [SMALL_STATE(21)] = 377,
  [SMALL_STATE(22)] = 391,
  [SMALL_STATE(23)] = 405,
  [SMALL_STATE(24)] = 418,
  [SMALL_STATE(25)] = 429,
  [SMALL_STATE(26)] = 442,
  [SMALL_STATE(27)] = 455,
  [SMALL_STATE(28)] = 468,
  [SMALL_STATE(29)] = 479,
  [SMALL_STATE(30)] = 492,
  [SMALL_STATE(31)] = 505,
  [SMALL_STATE(32)] = 515,
  [SMALL_STATE(33)] = 523,
  [SMALL_STATE(34)] = 533,
  [SMALL_STATE(35)] = 541,
  [SMALL_STATE(36)] = 551,
  [SMALL_STATE(37)] = 561,
  [SMALL_STATE(38)] = 571,
  [SMALL_STATE(39)] = 581,
  [SMALL_STATE(40)] = 591,
  [SMALL_STATE(41)] = 599,
  [SMALL_STATE(42)] = 606,
  [SMALL_STATE(43)] = 613,
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
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sections_repeat1, 2),
  [11] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sections_repeat1, 2), SHIFT_REPEAT(50),
  [14] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sections_repeat1, 2), SHIFT_REPEAT(49),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sections_repeat1, 2), SHIFT_REPEAT(47),
  [20] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sections_repeat1, 2), SHIFT_REPEAT(45),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sections_repeat1, 2), SHIFT_REPEAT(27),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sections_repeat1, 2), SHIFT_REPEAT(44),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sections_repeat1, 2), SHIFT_REPEAT(43),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sections, 1),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [48] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_properties_repeat1, 2),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_properties_repeat1, 2), SHIFT_REPEAT(57),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_properties, 1),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 3),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_block, 3),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_library, 3),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_library, 2),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 7),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_benchmark, 3),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 6),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_common, 3),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_executable, 3),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_suite, 3),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_repository, 3),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag, 3),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_properties_repeat1, 2), SHIFT_REPEAT(58),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_properties_repeat1, 2),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_repeat1, 2),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_repeat1, 2), SHIFT_REPEAT(46),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 3),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 6),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 7),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cabal_version, 3),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cabal, 2),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cabal, 3),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [151] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
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
