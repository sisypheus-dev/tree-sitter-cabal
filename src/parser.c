#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 91
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 45
#define ALIAS_COUNT 0
#define TOKEN_COUNT 22
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
  anon_sym_if = 15,
  anon_sym_elseif = 16,
  anon_sym_else = 17,
  sym_condition = 18,
  sym_indent = 19,
  sym_dedent = 20,
  sym__indented = 21,
  sym_cabal = 22,
  sym_cabal_version = 23,
  sym_properties = 24,
  sym_sections = 25,
  sym_benchmark = 26,
  sym_common = 27,
  sym_executable = 28,
  sym_flag = 29,
  sym_library = 30,
  sym_source_repository = 31,
  sym_test_suite = 32,
  sym_property_block = 33,
  sym_field = 34,
  sym_property_or_conditional_block = 35,
  sym_conditional = 36,
  sym_condition_if = 37,
  sym_condition_elseif = 38,
  sym_condition_else = 39,
  aux_sym_properties_repeat1 = 40,
  aux_sym_sections_repeat1 = 41,
  aux_sym_field_repeat1 = 42,
  aux_sym_property_or_conditional_block_repeat1 = 43,
  aux_sym_conditional_repeat1 = 44,
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
  [anon_sym_if] = "if",
  [anon_sym_elseif] = "elseif",
  [anon_sym_else] = "else",
  [sym_condition] = "condition",
  [sym_indent] = "indent",
  [sym_dedent] = "dedent",
  [sym__indented] = "_indented",
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
  [sym_property_or_conditional_block] = "property_or_conditional_block",
  [sym_conditional] = "conditional",
  [sym_condition_if] = "condition_if",
  [sym_condition_elseif] = "condition_elseif",
  [sym_condition_else] = "condition_else",
  [aux_sym_properties_repeat1] = "properties_repeat1",
  [aux_sym_sections_repeat1] = "sections_repeat1",
  [aux_sym_field_repeat1] = "field_repeat1",
  [aux_sym_property_or_conditional_block_repeat1] = "property_or_conditional_block_repeat1",
  [aux_sym_conditional_repeat1] = "conditional_repeat1",
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
  [anon_sym_if] = anon_sym_if,
  [anon_sym_elseif] = anon_sym_elseif,
  [anon_sym_else] = anon_sym_else,
  [sym_condition] = sym_condition,
  [sym_indent] = sym_indent,
  [sym_dedent] = sym_dedent,
  [sym__indented] = sym__indented,
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
  [sym_property_or_conditional_block] = sym_property_or_conditional_block,
  [sym_conditional] = sym_conditional,
  [sym_condition_if] = sym_condition_if,
  [sym_condition_elseif] = sym_condition_elseif,
  [sym_condition_else] = sym_condition_else,
  [aux_sym_properties_repeat1] = aux_sym_properties_repeat1,
  [aux_sym_sections_repeat1] = aux_sym_sections_repeat1,
  [aux_sym_field_repeat1] = aux_sym_field_repeat1,
  [aux_sym_property_or_conditional_block_repeat1] = aux_sym_property_or_conditional_block_repeat1,
  [aux_sym_conditional_repeat1] = aux_sym_conditional_repeat1,
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
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_elseif] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [sym_condition] = {
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
  [sym__indented] = {
    .visible = false,
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
  [sym_property_or_conditional_block] = {
    .visible = true,
    .named = true,
  },
  [sym_conditional] = {
    .visible = true,
    .named = true,
  },
  [sym_condition_if] = {
    .visible = true,
    .named = true,
  },
  [sym_condition_elseif] = {
    .visible = true,
    .named = true,
  },
  [sym_condition_else] = {
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
  [aux_sym_property_or_conditional_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_conditional_repeat1] = {
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
  [24] = 23,
  [25] = 23,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 28,
  [30] = 28,
  [31] = 31,
  [32] = 15,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 8,
  [37] = 6,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 13,
  [42] = 42,
  [43] = 19,
  [44] = 8,
  [45] = 45,
  [46] = 46,
  [47] = 39,
  [48] = 15,
  [49] = 39,
  [50] = 46,
  [51] = 51,
  [52] = 46,
  [53] = 53,
  [54] = 54,
  [55] = 19,
  [56] = 13,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 68,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 68,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 67,
  [86] = 86,
  [87] = 69,
  [88] = 88,
  [89] = 67,
  [90] = 69,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (lookahead == '-') ADVANCE(2);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == 'b') ADVANCE(72);
      if (lookahead == 'c') ADVANCE(71);
      if (lookahead == 'e') ADVANCE(70);
      if (lookahead == 'f') ADVANCE(77);
      if (lookahead == 'i') ADVANCE(74);
      if (lookahead == 'l') ADVANCE(75);
      if (lookahead == 's') ADVANCE(79);
      if (lookahead == 't') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(69);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '-') ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(171);
      if (lookahead != 0) ADVANCE(172);
      END_STATE();
    case 2:
      if (lookahead == '-') ADVANCE(104);
      END_STATE();
    case 3:
      if (lookahead == '-') ADVANCE(48);
      END_STATE();
    case 4:
      if (lookahead == '-') ADVANCE(46);
      END_STATE();
    case 5:
      if (lookahead == '.') ADVANCE(66);
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
      if (lookahead == 'e') ADVANCE(93);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(101);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(13);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(4);
      END_STATE();
    case 22:
      if (lookahead == 'g') ADVANCE(95);
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
      if (lookahead == 'k') ADVANCE(89);
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
      if (lookahead == 'n') ADVANCE(91);
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
      if (lookahead == 'y') ADVANCE(97);
      END_STATE();
    case 59:
      if (lookahead == 'y') ADVANCE(99);
      END_STATE();
    case 60:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(60)
      if (lookahead == '-') ADVANCE(2);
      if (lookahead == 'c') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 61:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(61)
      if (lookahead == '-') ADVANCE(2);
      if (lookahead == 'b') ADVANCE(72);
      if (lookahead == 'c') ADVANCE(78);
      if (lookahead == 'e') ADVANCE(80);
      if (lookahead == 'f') ADVANCE(77);
      if (lookahead == 'l') ADVANCE(75);
      if (lookahead == 's') ADVANCE(79);
      if (lookahead == 't') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 62:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(62)
      if (lookahead == '-') ADVANCE(2);
      if (lookahead == 'e') ADVANCE(76);
      if (lookahead == 'i') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 63:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(63)
      if (lookahead == '-') ADVANCE(2);
      if (lookahead == 'i') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 64:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(64)
      if (lookahead == '-') ADVANCE(2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 65:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(65)
      if (lookahead == '-') ADVANCE(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 66:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(87);
      END_STATE();
    case 67:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(88);
      END_STATE();
    case 68:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 69:
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(169);
      if (lookahead == '.') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(108);
      END_STATE();
    case 70:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'k') ||
          ('m' <= lookahead && lookahead <= 'w') ||
          lookahead == 'y' ||
          lookahead == 'z') ADVANCE(169);
      if (lookahead == 'l') ADVANCE(150);
      if (lookahead == 'x') ADVANCE(119);
      END_STATE();
    case 71:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z')) ADVANCE(169);
      if (lookahead == 'a') ADVANCE(110);
      if (lookahead == 'o') ADVANCE(132);
      END_STATE();
    case 72:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(169);
      if (lookahead == 'e') ADVANCE(134);
      END_STATE();
    case 73:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(169);
      if (lookahead == 'e') ADVANCE(149);
      END_STATE();
    case 74:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'e') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(169);
      if (lookahead == 'f') ADVANCE(173);
      END_STATE();
    case 75:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(169);
      if (lookahead == 'i') ADVANCE(109);
      END_STATE();
    case 76:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'k') ||
          ('m' <= lookahead && lookahead <= 'z')) ADVANCE(169);
      if (lookahead == 'l') ADVANCE(150);
      END_STATE();
    case 77:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'k') ||
          ('m' <= lookahead && lookahead <= 'z')) ADVANCE(169);
      if (lookahead == 'l') ADVANCE(164);
      END_STATE();
    case 78:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z')) ADVANCE(169);
      if (lookahead == 'o') ADVANCE(132);
      END_STATE();
    case 79:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z')) ADVANCE(169);
      if (lookahead == 'o') ADVANCE(159);
      END_STATE();
    case 80:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'w') ||
          lookahead == 'y' ||
          lookahead == 'z') ADVANCE(169);
      if (lookahead == 'x') ADVANCE(119);
      END_STATE();
    case 81:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(169);
      if (lookahead == 'a') ADVANCE(110);
      END_STATE();
    case 82:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(169);
      END_STATE();
    case 83:
      if (eof) ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(83)
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
    case 84:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_cabal_DASHversion);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(169);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_spec_version);
      if (lookahead == '.') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(87);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_spec_version);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(88);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_benchmark);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_benchmark);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(169);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_common);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_common);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(169);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_executable);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_executable);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(169);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_flag);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_flag);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(169);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_library);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_library);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(169);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_source_DASHrepository);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_source_DASHrepository);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(169);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_test_DASHsuite);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_test_DASHsuite);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(169);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == '-') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(104);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(169);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(169);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(169);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(169);
      if (lookahead == '.') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(108);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'a' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(169);
      if (lookahead == 'b') ADVANCE(145);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'a' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(169);
      if (lookahead == 'b') ADVANCE(165);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'a' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(169);
      if (lookahead == 'b') ADVANCE(130);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'a' ||
          lookahead == 'b' ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(169);
      if (lookahead == 'c') ADVANCE(124);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'a' ||
          lookahead == 'b' ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(169);
      if (lookahead == 'c') ADVANCE(160);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'a' ||
          lookahead == 'b' ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(169);
      if (lookahead == 'c') ADVANCE(120);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(169);
      if (lookahead == 'e') ADVANCE(175);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(169);
      if (lookahead == 'e') ADVANCE(141);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(169);
      if (lookahead == 'e') ADVANCE(94);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(169);
      if (lookahead == 'e') ADVANCE(102);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(169);
      if (lookahead == 'e') ADVANCE(113);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(169);
      if (lookahead == 'e') ADVANCE(107);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(169);
      if (lookahead == 'e') ADVANCE(147);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'e') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(169);
      if (lookahead == 'f') ADVANCE(174);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f') ||
          ('h' <= lookahead && lookahead <= 'z')) ADVANCE(169);
      if (lookahead == 'g') ADVANCE(96);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'g') ||
          ('i' <= lookahead && lookahead <= 'z')) ADVANCE(169);
      if (lookahead == 'h') ADVANCE(133);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(169);
      if (lookahead == 'i') ADVANCE(157);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(169);
      if (lookahead == 'i') ADVANCE(155);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(169);
      if (lookahead == 'i') ADVANCE(138);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'j') ||
          ('l' <= lookahead && lookahead <= 'z')) ADVANCE(169);
      if (lookahead == 'k') ADVANCE(90);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'k') ||
          ('m' <= lookahead && lookahead <= 'z')) ADVANCE(169);
      if (lookahead == 'l') ADVANCE(105);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'k') ||
          ('m' <= lookahead && lookahead <= 'z')) ADVANCE(169);
      if (lookahead == 'l') ADVANCE(117);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'l') ||
          ('n' <= lookahead && lookahead <= 'z')) ADVANCE(169);
      if (lookahead == 'm') ADVANCE(137);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'l') ||
          ('n' <= lookahead && lookahead <= 'z')) ADVANCE(169);
      if (lookahead == 'm') ADVANCE(131);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'l') ||
          ('n' <= lookahead && lookahead <= 'z')) ADVANCE(169);
      if (lookahead == 'm') ADVANCE(168);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z')) ADVANCE(169);
      if (lookahead == 'n') ADVANCE(112);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z')) ADVANCE(169);
      if (lookahead == 'n') ADVANCE(92);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z')) ADVANCE(169);
      if (lookahead == 'n') ADVANCE(85);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z')) ADVANCE(169);
      if (lookahead == 'o') ADVANCE(135);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z')) ADVANCE(169);
      if (lookahead == 'o') ADVANCE(136);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z')) ADVANCE(169);
      if (lookahead == 'o') ADVANCE(153);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z')) ADVANCE(169);
      if (lookahead == 'o') ADVANCE(144);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'o') ||
          ('q' <= lookahead && lookahead <= 'z')) ADVANCE(169);
      if (lookahead == 'p') ADVANCE(139);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(169);
      if (lookahead == 'r') ADVANCE(162);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(169);
      if (lookahead == 'r') ADVANCE(128);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(169);
      if (lookahead == 'r') ADVANCE(163);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(169);
      if (lookahead == 'r') ADVANCE(167);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(169);
      if (lookahead == 'r') ADVANCE(114);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(169);
      if (lookahead == 'r') ADVANCE(151);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(169);
      if (lookahead == 'r') ADVANCE(116);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(169);
      if (lookahead == 's') ADVANCE(154);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(169);
      if (lookahead == 's') ADVANCE(115);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(169);
      if (lookahead == 's') ADVANCE(127);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(169);
      if (lookahead == 's') ADVANCE(158);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(169);
      if (lookahead == 's') ADVANCE(126);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(169);
      if (lookahead == 't') ADVANCE(106);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(169);
      if (lookahead == 't') ADVANCE(140);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(169);
      if (lookahead == 't') ADVANCE(166);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(169);
      if (lookahead == 't') ADVANCE(118);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 't') ||
          ('v' <= lookahead && lookahead <= 'z')) ADVANCE(169);
      if (lookahead == 'u') ADVANCE(125);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 't') ||
          ('v' <= lookahead && lookahead <= 'z')) ADVANCE(169);
      if (lookahead == 'u') ADVANCE(146);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 't') ||
          ('v' <= lookahead && lookahead <= 'z')) ADVANCE(169);
      if (lookahead == 'u') ADVANCE(156);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'u') ||
          ('w' <= lookahead && lookahead <= 'z')) ADVANCE(169);
      if (lookahead == 'v') ADVANCE(121);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'x') ||
          lookahead == 'z') ADVANCE(169);
      if (lookahead == 'y') ADVANCE(98);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'x') ||
          lookahead == 'z') ADVANCE(169);
      if (lookahead == 'y') ADVANCE(100);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(169);
      if (lookahead == 'a') ADVANCE(123);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(169);
      if (lookahead == 'a') ADVANCE(129);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(169);
      if (lookahead == 'a') ADVANCE(111);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(169);
      if (lookahead == 'a') ADVANCE(142);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(169);
      if (lookahead == 'a') ADVANCE(143);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(169);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_field_value);
      if (lookahead == '-') ADVANCE(104);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(172);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_field_value);
      if (lookahead == '-') ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(171);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(172);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_field_value);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(172);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(169);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_elseif);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(169);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(169);
      if (lookahead == 'i') ADVANCE(122);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_condition);
      if (lookahead == '-') ADVANCE(104);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(178);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_condition);
      if (lookahead == '-') ADVANCE(176);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(177);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(178);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_condition);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(178);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 60, .external_lex_state = 2},
  [2] = {.lex_state = 83, .external_lex_state = 2},
  [3] = {.lex_state = 83, .external_lex_state = 2},
  [4] = {.lex_state = 83, .external_lex_state = 2},
  [5] = {.lex_state = 83, .external_lex_state = 2},
  [6] = {.lex_state = 61, .external_lex_state = 2},
  [7] = {.lex_state = 61, .external_lex_state = 2},
  [8] = {.lex_state = 61, .external_lex_state = 3},
  [9] = {.lex_state = 83, .external_lex_state = 2},
  [10] = {.lex_state = 83, .external_lex_state = 2},
  [11] = {.lex_state = 83, .external_lex_state = 2},
  [12] = {.lex_state = 83, .external_lex_state = 2},
  [13] = {.lex_state = 61, .external_lex_state = 2},
  [14] = {.lex_state = 83, .external_lex_state = 2},
  [15] = {.lex_state = 83, .external_lex_state = 2},
  [16] = {.lex_state = 62, .external_lex_state = 4},
  [17] = {.lex_state = 83, .external_lex_state = 2},
  [18] = {.lex_state = 83, .external_lex_state = 2},
  [19] = {.lex_state = 61, .external_lex_state = 2},
  [20] = {.lex_state = 83, .external_lex_state = 2},
  [21] = {.lex_state = 62, .external_lex_state = 4},
  [22] = {.lex_state = 83, .external_lex_state = 2},
  [23] = {.lex_state = 63, .external_lex_state = 4},
  [24] = {.lex_state = 63, .external_lex_state = 4},
  [25] = {.lex_state = 63, .external_lex_state = 4},
  [26] = {.lex_state = 63, .external_lex_state = 4},
  [27] = {.lex_state = 62, .external_lex_state = 4},
  [28] = {.lex_state = 63, .external_lex_state = 2},
  [29] = {.lex_state = 63, .external_lex_state = 2},
  [30] = {.lex_state = 63, .external_lex_state = 2},
  [31] = {.lex_state = 62, .external_lex_state = 4},
  [32] = {.lex_state = 62, .external_lex_state = 4},
  [33] = {.lex_state = 62, .external_lex_state = 4},
  [34] = {.lex_state = 64, .external_lex_state = 4},
  [35] = {.lex_state = 64, .external_lex_state = 2},
  [36] = {.lex_state = 63, .external_lex_state = 5},
  [37] = {.lex_state = 64, .external_lex_state = 4},
  [38] = {.lex_state = 63, .external_lex_state = 4},
  [39] = {.lex_state = 0, .external_lex_state = 6},
  [40] = {.lex_state = 64, .external_lex_state = 2},
  [41] = {.lex_state = 63, .external_lex_state = 4},
  [42] = {.lex_state = 63, .external_lex_state = 4},
  [43] = {.lex_state = 63, .external_lex_state = 4},
  [44] = {.lex_state = 64, .external_lex_state = 5},
  [45] = {.lex_state = 0, .external_lex_state = 6},
  [46] = {.lex_state = 0, .external_lex_state = 6},
  [47] = {.lex_state = 0, .external_lex_state = 6},
  [48] = {.lex_state = 63, .external_lex_state = 4},
  [49] = {.lex_state = 0, .external_lex_state = 6},
  [50] = {.lex_state = 0, .external_lex_state = 6},
  [51] = {.lex_state = 63, .external_lex_state = 4},
  [52] = {.lex_state = 0, .external_lex_state = 6},
  [53] = {.lex_state = 65, .external_lex_state = 3},
  [54] = {.lex_state = 0, .external_lex_state = 3},
  [55] = {.lex_state = 64, .external_lex_state = 4},
  [56] = {.lex_state = 64, .external_lex_state = 4},
  [57] = {.lex_state = 0, .external_lex_state = 3},
  [58] = {.lex_state = 0, .external_lex_state = 3},
  [59] = {.lex_state = 0, .external_lex_state = 6},
  [60] = {.lex_state = 0, .external_lex_state = 3},
  [61] = {.lex_state = 0, .external_lex_state = 3},
  [62] = {.lex_state = 0, .external_lex_state = 3},
  [63] = {.lex_state = 0, .external_lex_state = 3},
  [64] = {.lex_state = 0, .external_lex_state = 3},
  [65] = {.lex_state = 0, .external_lex_state = 3},
  [66] = {.lex_state = 0, .external_lex_state = 3},
  [67] = {.lex_state = 0, .external_lex_state = 2},
  [68] = {.lex_state = 1, .external_lex_state = 2},
  [69] = {.lex_state = 1, .external_lex_state = 2},
  [70] = {.lex_state = 0, .external_lex_state = 2},
  [71] = {.lex_state = 1, .external_lex_state = 2},
  [72] = {.lex_state = 65, .external_lex_state = 2},
  [73] = {.lex_state = 65, .external_lex_state = 2},
  [74] = {.lex_state = 0, .external_lex_state = 2},
  [75] = {.lex_state = 65, .external_lex_state = 2},
  [76] = {.lex_state = 1, .external_lex_state = 2},
  [77] = {.lex_state = 1, .external_lex_state = 2},
  [78] = {.lex_state = 83, .external_lex_state = 2},
  [79] = {.lex_state = 65, .external_lex_state = 2},
  [80] = {.lex_state = 65, .external_lex_state = 2},
  [81] = {.lex_state = 65, .external_lex_state = 2},
  [82] = {.lex_state = 64, .external_lex_state = 2},
  [83] = {.lex_state = 0, .external_lex_state = 2},
  [84] = {.lex_state = 177, .external_lex_state = 2},
  [85] = {.lex_state = 0, .external_lex_state = 2},
  [86] = {.lex_state = 0, .external_lex_state = 2},
  [87] = {.lex_state = 1, .external_lex_state = 2},
  [88] = {.lex_state = 177, .external_lex_state = 2},
  [89] = {.lex_state = 0, .external_lex_state = 2},
  [90] = {.lex_state = 1, .external_lex_state = 2},
};

enum {
  ts_external_token_comment = 0,
  ts_external_token_indent = 1,
  ts_external_token_dedent = 2,
  ts_external_token__indented = 3,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_comment] = sym_comment,
  [ts_external_token_indent] = sym_indent,
  [ts_external_token_dedent] = sym_dedent,
  [ts_external_token__indented] = sym__indented,
};

static const bool ts_external_scanner_states[7][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_comment] = true,
    [ts_external_token_indent] = true,
    [ts_external_token_dedent] = true,
    [ts_external_token__indented] = true,
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
    [ts_external_token_indent] = true,
    [ts_external_token_dedent] = true,
  },
  [6] = {
    [ts_external_token_comment] = true,
    [ts_external_token_dedent] = true,
    [ts_external_token__indented] = true,
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
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_elseif] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [sym_indent] = ACTIONS(1),
    [sym_dedent] = ACTIONS(1),
    [sym__indented] = ACTIONS(1),
  },
  [1] = {
    [sym_cabal] = STATE(86),
    [sym_cabal_version] = STATE(35),
    [sym_properties] = STATE(5),
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
      anon_sym_benchmark,
    ACTIONS(11), 1,
      anon_sym_common,
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
    STATE(70), 1,
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
  [38] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_benchmark,
    ACTIONS(11), 1,
      anon_sym_common,
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
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    STATE(4), 8,
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
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    ACTIONS(27), 1,
      anon_sym_benchmark,
    ACTIONS(30), 1,
      anon_sym_common,
    ACTIONS(33), 1,
      anon_sym_executable,
    ACTIONS(36), 1,
      anon_sym_flag,
    ACTIONS(39), 1,
      anon_sym_library,
    ACTIONS(42), 1,
      anon_sym_source_DASHrepository,
    ACTIONS(45), 1,
      anon_sym_test_DASHsuite,
    STATE(4), 8,
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
    ACTIONS(9), 1,
      anon_sym_benchmark,
    ACTIONS(11), 1,
      anon_sym_common,
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
    STATE(74), 1,
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
      ts_builtin_sym_end,
      anon_sym_benchmark,
      anon_sym_common,
      anon_sym_executable,
      anon_sym_flag,
      anon_sym_library,
      anon_sym_source_DASHrepository,
      anon_sym_test_DASHsuite,
  [265] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 8,
      anon_sym_benchmark,
      anon_sym_common,
      anon_sym_executable,
      anon_sym_flag,
      anon_sym_library,
      anon_sym_source_DASHrepository,
      anon_sym_test_DASHsuite,
      sym_field_name,
  [279] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 8,
      ts_builtin_sym_end,
      anon_sym_benchmark,
      anon_sym_common,
      anon_sym_executable,
      anon_sym_flag,
      anon_sym_library,
      anon_sym_source_DASHrepository,
      anon_sym_test_DASHsuite,
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
  [307] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      anon_sym_elseif,
    ACTIONS(77), 1,
      anon_sym_else,
    ACTIONS(79), 1,
      sym_dedent,
    STATE(42), 1,
      sym_condition_else,
    ACTIONS(73), 2,
      sym_field_name,
      anon_sym_if,
    STATE(27), 2,
      sym_condition_elseif,
      aux_sym_conditional_repeat1,
  [331] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 8,
      ts_builtin_sym_end,
      anon_sym_benchmark,
      anon_sym_common,
      anon_sym_executable,
      anon_sym_flag,
      anon_sym_library,
      anon_sym_source_DASHrepository,
      anon_sym_test_DASHsuite,
  [345] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 8,
      ts_builtin_sym_end,
      anon_sym_benchmark,
      anon_sym_common,
      anon_sym_executable,
      anon_sym_flag,
      anon_sym_library,
      anon_sym_source_DASHrepository,
      anon_sym_test_DASHsuite,
  [359] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 8,
      anon_sym_benchmark,
      anon_sym_common,
      anon_sym_executable,
      anon_sym_flag,
      anon_sym_library,
      anon_sym_source_DASHrepository,
      anon_sym_test_DASHsuite,
      sym_field_name,
  [373] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 8,
      ts_builtin_sym_end,
      anon_sym_benchmark,
      anon_sym_common,
      anon_sym_executable,
      anon_sym_flag,
      anon_sym_library,
      anon_sym_source_DASHrepository,
      anon_sym_test_DASHsuite,
  [387] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      anon_sym_elseif,
    ACTIONS(77), 1,
      anon_sym_else,
    ACTIONS(91), 1,
      sym_dedent,
    STATE(51), 1,
      sym_condition_else,
    ACTIONS(89), 2,
      sym_field_name,
      anon_sym_if,
    STATE(16), 2,
      sym_condition_elseif,
      aux_sym_conditional_repeat1,
  [411] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 8,
      ts_builtin_sym_end,
      anon_sym_benchmark,
      anon_sym_common,
      anon_sym_executable,
      anon_sym_flag,
      anon_sym_library,
      anon_sym_source_DASHrepository,
      anon_sym_test_DASHsuite,
  [425] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      sym_field_name,
    ACTIONS(97), 1,
      anon_sym_if,
    ACTIONS(99), 1,
      sym_dedent,
    STATE(21), 1,
      sym_condition_if,
    STATE(26), 3,
      sym_field,
      sym_conditional,
      aux_sym_property_or_conditional_block_repeat1,
  [446] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      sym_field_name,
    ACTIONS(97), 1,
      anon_sym_if,
    ACTIONS(101), 1,
      sym_dedent,
    STATE(21), 1,
      sym_condition_if,
    STATE(26), 3,
      sym_field,
      sym_conditional,
      aux_sym_property_or_conditional_block_repeat1,
  [467] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      sym_field_name,
    ACTIONS(97), 1,
      anon_sym_if,
    ACTIONS(103), 1,
      sym_dedent,
    STATE(21), 1,
      sym_condition_if,
    STATE(26), 3,
      sym_field,
      sym_conditional,
      aux_sym_property_or_conditional_block_repeat1,
  [488] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      sym_field_name,
    ACTIONS(108), 1,
      anon_sym_if,
    ACTIONS(111), 1,
      sym_dedent,
    STATE(21), 1,
      sym_condition_if,
    STATE(26), 3,
      sym_field,
      sym_conditional,
      aux_sym_property_or_conditional_block_repeat1,
  [509] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 1,
      anon_sym_elseif,
    ACTIONS(118), 1,
      sym_dedent,
    STATE(27), 2,
      sym_condition_elseif,
      aux_sym_conditional_repeat1,
    ACTIONS(113), 3,
      sym_field_name,
      anon_sym_if,
      anon_sym_else,
  [528] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      sym_field_name,
    ACTIONS(97), 1,
      anon_sym_if,
    STATE(21), 1,
      sym_condition_if,
    STATE(24), 3,
      sym_field,
      sym_conditional,
      aux_sym_property_or_conditional_block_repeat1,
  [546] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      sym_field_name,
    ACTIONS(97), 1,
      anon_sym_if,
    STATE(21), 1,
      sym_condition_if,
    STATE(23), 3,
      sym_field,
      sym_conditional,
      aux_sym_property_or_conditional_block_repeat1,
  [564] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      sym_field_name,
    ACTIONS(97), 1,
      anon_sym_if,
    STATE(21), 1,
      sym_condition_if,
    STATE(25), 3,
      sym_field,
      sym_conditional,
      aux_sym_property_or_conditional_block_repeat1,
  [582] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 1,
      sym_dedent,
    ACTIONS(120), 4,
      sym_field_name,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_else,
  [595] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      sym_dedent,
    ACTIONS(124), 4,
      sym_field_name,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_else,
  [608] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 1,
      sym_dedent,
    ACTIONS(126), 4,
      sym_field_name,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_else,
  [621] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(130), 1,
      sym_field_name,
    ACTIONS(132), 1,
      sym_dedent,
    STATE(37), 2,
      sym_field,
      aux_sym_properties_repeat1,
  [635] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 1,
      sym_field_name,
    STATE(2), 1,
      sym_properties,
    STATE(7), 2,
      sym_field,
      aux_sym_properties_repeat1,
  [649] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 1,
      sym_indent,
    ACTIONS(138), 1,
      sym_dedent,
    ACTIONS(55), 2,
      sym_field_name,
      anon_sym_if,
  [663] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 1,
      sym_field_name,
    ACTIONS(143), 1,
      sym_dedent,
    STATE(37), 2,
      sym_field,
      aux_sym_properties_repeat1,
  [677] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 1,
      sym_dedent,
    ACTIONS(145), 2,
      sym_field_name,
      anon_sym_if,
  [688] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 1,
      sym_dedent,
    ACTIONS(151), 1,
      sym__indented,
    STATE(52), 1,
      aux_sym_field_repeat1,
  [701] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(130), 1,
      sym_field_name,
    STATE(34), 2,
      sym_field,
      aux_sym_properties_repeat1,
  [712] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      sym_dedent,
    ACTIONS(67), 2,
      sym_field_name,
      anon_sym_if,
  [723] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      sym_dedent,
    ACTIONS(155), 2,
      sym_field_name,
      anon_sym_if,
  [734] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 1,
      sym_dedent,
    ACTIONS(85), 2,
      sym_field_name,
      anon_sym_if,
  [745] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      sym_indent,
    ACTIONS(138), 2,
      sym_dedent,
      sym_field_name,
  [756] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      sym_dedent,
    ACTIONS(165), 1,
      sym__indented,
    STATE(45), 1,
      aux_sym_field_repeat1,
  [769] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 1,
      sym__indented,
    ACTIONS(168), 1,
      sym_dedent,
    STATE(45), 1,
      aux_sym_field_repeat1,
  [782] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 1,
      sym__indented,
    ACTIONS(170), 1,
      sym_dedent,
    STATE(50), 1,
      aux_sym_field_repeat1,
  [795] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      sym_dedent,
    ACTIONS(124), 2,
      sym_field_name,
      anon_sym_if,
  [806] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 1,
      sym__indented,
    ACTIONS(172), 1,
      sym_dedent,
    STATE(46), 1,
      aux_sym_field_repeat1,
  [819] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 1,
      sym__indented,
    ACTIONS(174), 1,
      sym_dedent,
    STATE(45), 1,
      aux_sym_field_repeat1,
  [832] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      sym_dedent,
    ACTIONS(73), 2,
      sym_field_name,
      anon_sym_if,
  [843] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 1,
      sym__indented,
    ACTIONS(176), 1,
      sym_dedent,
    STATE(45), 1,
      aux_sym_field_repeat1,
  [856] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 1,
      sym_section_name,
    ACTIONS(180), 1,
      sym_indent,
    STATE(11), 1,
      sym_property_or_conditional_block,
  [869] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      sym_indent,
    STATE(10), 1,
      sym_property_block,
  [879] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 2,
      sym_dedent,
      sym_field_name,
  [887] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 2,
      sym_dedent,
      sym_field_name,
  [895] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(184), 1,
      sym_indent,
    STATE(38), 1,
      sym_property_or_conditional_block,
  [905] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 1,
      sym_indent,
    STATE(33), 1,
      sym_property_or_conditional_block,
  [915] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 2,
      sym_dedent,
      sym__indented,
  [923] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 1,
      sym_indent,
    STATE(31), 1,
      sym_property_or_conditional_block,
  [933] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      sym_indent,
    STATE(14), 1,
      sym_property_block,
  [943] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      sym_indent,
    STATE(22), 1,
      sym_property_block,
  [953] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 1,
      sym_indent,
    STATE(9), 1,
      sym_property_or_conditional_block,
  [963] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 1,
      sym_indent,
    STATE(18), 1,
      sym_property_or_conditional_block,
  [973] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      sym_indent,
    STATE(20), 1,
      sym_property_block,
  [983] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      sym_indent,
    STATE(17), 1,
      sym_property_block,
  [993] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 1,
      anon_sym_COLON,
  [1000] = 2,
    ACTIONS(190), 1,
      sym_comment,
    ACTIONS(192), 1,
      sym_field_value,
  [1007] = 2,
    ACTIONS(190), 1,
      sym_comment,
    ACTIONS(194), 1,
      sym_field_value,
  [1014] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 1,
      ts_builtin_sym_end,
  [1021] = 2,
    ACTIONS(190), 1,
      sym_comment,
    ACTIONS(198), 1,
      sym_field_value,
  [1028] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 1,
      sym_section_name,
  [1035] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 1,
      sym_section_name,
  [1042] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 1,
      ts_builtin_sym_end,
  [1049] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      sym_section_name,
  [1056] = 2,
    ACTIONS(190), 1,
      sym_comment,
    ACTIONS(208), 1,
      sym_field_value,
  [1063] = 2,
    ACTIONS(190), 1,
      sym_comment,
    ACTIONS(210), 1,
      sym_field_value,
  [1070] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 1,
      sym_spec_version,
  [1077] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 1,
      sym_section_name,
  [1084] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      sym_section_name,
  [1091] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 1,
      sym_section_name,
  [1098] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(220), 1,
      sym_field_name,
  [1105] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 1,
      anon_sym_COLON,
  [1112] = 2,
    ACTIONS(190), 1,
      sym_comment,
    ACTIONS(224), 1,
      sym_condition,
  [1119] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 1,
      anon_sym_COLON,
  [1126] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 1,
      ts_builtin_sym_end,
  [1133] = 2,
    ACTIONS(190), 1,
      sym_comment,
    ACTIONS(230), 1,
      sym_field_value,
  [1140] = 2,
    ACTIONS(190), 1,
      sym_comment,
    ACTIONS(232), 1,
      sym_condition,
  [1147] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 1,
      anon_sym_COLON,
  [1154] = 2,
    ACTIONS(190), 1,
      sym_comment,
    ACTIONS(236), 1,
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
  [SMALL_STATE(17)] = 331,
  [SMALL_STATE(18)] = 345,
  [SMALL_STATE(19)] = 359,
  [SMALL_STATE(20)] = 373,
  [SMALL_STATE(21)] = 387,
  [SMALL_STATE(22)] = 411,
  [SMALL_STATE(23)] = 425,
  [SMALL_STATE(24)] = 446,
  [SMALL_STATE(25)] = 467,
  [SMALL_STATE(26)] = 488,
  [SMALL_STATE(27)] = 509,
  [SMALL_STATE(28)] = 528,
  [SMALL_STATE(29)] = 546,
  [SMALL_STATE(30)] = 564,
  [SMALL_STATE(31)] = 582,
  [SMALL_STATE(32)] = 595,
  [SMALL_STATE(33)] = 608,
  [SMALL_STATE(34)] = 621,
  [SMALL_STATE(35)] = 635,
  [SMALL_STATE(36)] = 649,
  [SMALL_STATE(37)] = 663,
  [SMALL_STATE(38)] = 677,
  [SMALL_STATE(39)] = 688,
  [SMALL_STATE(40)] = 701,
  [SMALL_STATE(41)] = 712,
  [SMALL_STATE(42)] = 723,
  [SMALL_STATE(43)] = 734,
  [SMALL_STATE(44)] = 745,
  [SMALL_STATE(45)] = 756,
  [SMALL_STATE(46)] = 769,
  [SMALL_STATE(47)] = 782,
  [SMALL_STATE(48)] = 795,
  [SMALL_STATE(49)] = 806,
  [SMALL_STATE(50)] = 819,
  [SMALL_STATE(51)] = 832,
  [SMALL_STATE(52)] = 843,
  [SMALL_STATE(53)] = 856,
  [SMALL_STATE(54)] = 869,
  [SMALL_STATE(55)] = 879,
  [SMALL_STATE(56)] = 887,
  [SMALL_STATE(57)] = 895,
  [SMALL_STATE(58)] = 905,
  [SMALL_STATE(59)] = 915,
  [SMALL_STATE(60)] = 923,
  [SMALL_STATE(61)] = 933,
  [SMALL_STATE(62)] = 943,
  [SMALL_STATE(63)] = 953,
  [SMALL_STATE(64)] = 963,
  [SMALL_STATE(65)] = 973,
  [SMALL_STATE(66)] = 983,
  [SMALL_STATE(67)] = 993,
  [SMALL_STATE(68)] = 1000,
  [SMALL_STATE(69)] = 1007,
  [SMALL_STATE(70)] = 1014,
  [SMALL_STATE(71)] = 1021,
  [SMALL_STATE(72)] = 1028,
  [SMALL_STATE(73)] = 1035,
  [SMALL_STATE(74)] = 1042,
  [SMALL_STATE(75)] = 1049,
  [SMALL_STATE(76)] = 1056,
  [SMALL_STATE(77)] = 1063,
  [SMALL_STATE(78)] = 1070,
  [SMALL_STATE(79)] = 1077,
  [SMALL_STATE(80)] = 1084,
  [SMALL_STATE(81)] = 1091,
  [SMALL_STATE(82)] = 1098,
  [SMALL_STATE(83)] = 1105,
  [SMALL_STATE(84)] = 1112,
  [SMALL_STATE(85)] = 1119,
  [SMALL_STATE(86)] = 1126,
  [SMALL_STATE(87)] = 1133,
  [SMALL_STATE(88)] = 1140,
  [SMALL_STATE(89)] = 1147,
  [SMALL_STATE(90)] = 1154,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sections, 1),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sections_repeat1, 2),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sections_repeat1, 2), SHIFT_REPEAT(81),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sections_repeat1, 2), SHIFT_REPEAT(72),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sections_repeat1, 2), SHIFT_REPEAT(75),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sections_repeat1, 2), SHIFT_REPEAT(79),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sections_repeat1, 2), SHIFT_REPEAT(53),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sections_repeat1, 2), SHIFT_REPEAT(80),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sections_repeat1, 2), SHIFT_REPEAT(73),
  [48] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_properties_repeat1, 2),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_properties_repeat1, 2), SHIFT_REPEAT(89),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_properties, 1),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 3),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_library, 3),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_common, 3),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_library, 2),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_block, 3),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 6),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_suite, 3),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_or_conditional_block, 3),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional, 2),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional, 2),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag, 3),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_executable, 3),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 7),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_benchmark, 3),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional, 1),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional, 1),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_repository, 3),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [105] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_property_or_conditional_block_repeat1, 2), SHIFT_REPEAT(85),
  [108] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_property_or_conditional_block_repeat1, 2), SHIFT_REPEAT(88),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_property_or_conditional_block_repeat1, 2),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_conditional_repeat1, 2),
  [115] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_conditional_repeat1, 2), SHIFT_REPEAT(84),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conditional_repeat1, 2),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_condition_elseif, 3),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition_elseif, 3),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property_or_conditional_block, 3),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_condition_if, 3),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition_if, 3),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 3),
  [140] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_properties_repeat1, 2), SHIFT_REPEAT(67),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_properties_repeat1, 2),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_condition_else, 2),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition_else, 2),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 6),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional, 3),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional, 3),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 7),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_repeat1, 2),
  [165] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_repeat1, 2), SHIFT_REPEAT(76),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [190] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cabal, 3),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cabal, 2),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cabal_version, 3),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [224] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [228] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
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
