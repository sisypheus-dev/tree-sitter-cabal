#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 138
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 48
#define ALIAS_COUNT 0
#define TOKEN_COUNT 23
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
  sym_silly = 19,
  sym_indent = 20,
  sym_dedent = 21,
  sym__indented = 22,
  sym_cabal = 23,
  sym_cabal_version = 24,
  sym_properties = 25,
  sym_sections = 26,
  sym_benchmark = 27,
  sym_common = 28,
  sym_executable = 29,
  sym_flag = 30,
  sym_library = 31,
  sym_source_repository = 32,
  sym_test_suite = 33,
  sym_property_block = 34,
  sym_field = 35,
  sym_property_or_conditional_block = 36,
  sym_conditional = 37,
  sym_condition_if = 38,
  sym_condition_elseif = 39,
  sym_condition_else = 40,
  aux_sym_cabal_repeat1 = 41,
  aux_sym_properties_repeat1 = 42,
  aux_sym_sections_repeat1 = 43,
  aux_sym_property_block_repeat1 = 44,
  aux_sym_field_repeat1 = 45,
  aux_sym_property_or_conditional_block_repeat1 = 46,
  aux_sym_conditional_repeat1 = 47,
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
  [sym_silly] = "silly",
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
  [aux_sym_cabal_repeat1] = "cabal_repeat1",
  [aux_sym_properties_repeat1] = "properties_repeat1",
  [aux_sym_sections_repeat1] = "sections_repeat1",
  [aux_sym_property_block_repeat1] = "property_block_repeat1",
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
  [sym_silly] = sym_silly,
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
  [aux_sym_cabal_repeat1] = aux_sym_cabal_repeat1,
  [aux_sym_properties_repeat1] = aux_sym_properties_repeat1,
  [aux_sym_sections_repeat1] = aux_sym_sections_repeat1,
  [aux_sym_property_block_repeat1] = aux_sym_property_block_repeat1,
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
  [sym_silly] = {
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
  [aux_sym_cabal_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_properties_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_sections_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_property_block_repeat1] = {
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
  [36] = 35,
  [37] = 37,
  [38] = 38,
  [39] = 38,
  [40] = 35,
  [41] = 38,
  [42] = 42,
  [43] = 42,
  [44] = 44,
  [45] = 44,
  [46] = 44,
  [47] = 42,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 16,
  [52] = 30,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 9,
  [59] = 8,
  [60] = 60,
  [61] = 9,
  [62] = 62,
  [63] = 30,
  [64] = 16,
  [65] = 65,
  [66] = 8,
  [67] = 9,
  [68] = 33,
  [69] = 69,
  [70] = 18,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 9,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 18,
  [84] = 84,
  [85] = 85,
  [86] = 33,
  [87] = 87,
  [88] = 81,
  [89] = 81,
  [90] = 80,
  [91] = 80,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 120,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 120,
  [132] = 124,
  [133] = 133,
  [134] = 130,
  [135] = 135,
  [136] = 124,
  [137] = 130,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(87);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == ':') ADVANCE(89);
      if (lookahead == 'b') ADVANCE(75);
      if (lookahead == 'c') ADVANCE(74);
      if (lookahead == 'e') ADVANCE(73);
      if (lookahead == 'f') ADVANCE(80);
      if (lookahead == 'i') ADVANCE(77);
      if (lookahead == 'l') ADVANCE(78);
      if (lookahead == 's') ADVANCE(82);
      if (lookahead == 't') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(72);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(90);
      if (lookahead == '.') ADVANCE(70);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(90);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(90);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(4)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(172);
      if (lookahead != 0) ADVANCE(173);
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(106);
      END_STATE();
    case 6:
      if (lookahead == '-') ADVANCE(51);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(49);
      END_STATE();
    case 8:
      if (lookahead == '.') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(25);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(14);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(44);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(45);
      END_STATE();
    case 13:
      if (lookahead == 'b') ADVANCE(46);
      END_STATE();
    case 14:
      if (lookahead == 'b') ADVANCE(32);
      END_STATE();
    case 15:
      if (lookahead == 'c') ADVANCE(26);
      END_STATE();
    case 16:
      if (lookahead == 'c') ADVANCE(59);
      END_STATE();
    case 17:
      if (lookahead == 'c') ADVANCE(24);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(36);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(95);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(103);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(16);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(7);
      END_STATE();
    case 25:
      if (lookahead == 'g') ADVANCE(97);
      END_STATE();
    case 26:
      if (lookahead == 'h') ADVANCE(35);
      END_STATE();
    case 27:
      if (lookahead == 'i') ADVANCE(13);
      END_STATE();
    case 28:
      if (lookahead == 'i') ADVANCE(56);
      END_STATE();
    case 29:
      if (lookahead == 'i') ADVANCE(55);
      END_STATE();
    case 30:
      if (lookahead == 'k') ADVANCE(91);
      END_STATE();
    case 31:
      if (lookahead == 'l') ADVANCE(9);
      END_STATE();
    case 32:
      if (lookahead == 'l') ADVANCE(21);
      END_STATE();
    case 33:
      if (lookahead == 'm') ADVANCE(34);
      END_STATE();
    case 34:
      if (lookahead == 'm') ADVANCE(40);
      END_STATE();
    case 35:
      if (lookahead == 'm') ADVANCE(12);
      END_STATE();
    case 36:
      if (lookahead == 'n') ADVANCE(15);
      END_STATE();
    case 37:
      if (lookahead == 'n') ADVANCE(93);
      END_STATE();
    case 38:
      if (lookahead == 'o') ADVANCE(33);
      END_STATE();
    case 39:
      if (lookahead == 'o') ADVANCE(58);
      END_STATE();
    case 40:
      if (lookahead == 'o') ADVANCE(37);
      END_STATE();
    case 41:
      if (lookahead == 'o') ADVANCE(52);
      END_STATE();
    case 42:
      if (lookahead == 'o') ADVANCE(47);
      END_STATE();
    case 43:
      if (lookahead == 'p') ADVANCE(41);
      END_STATE();
    case 44:
      if (lookahead == 'r') ADVANCE(61);
      END_STATE();
    case 45:
      if (lookahead == 'r') ADVANCE(30);
      END_STATE();
    case 46:
      if (lookahead == 'r') ADVANCE(11);
      END_STATE();
    case 47:
      if (lookahead == 'r') ADVANCE(62);
      END_STATE();
    case 48:
      if (lookahead == 'r') ADVANCE(17);
      END_STATE();
    case 49:
      if (lookahead == 'r') ADVANCE(20);
      END_STATE();
    case 50:
      if (lookahead == 's') ADVANCE(53);
      END_STATE();
    case 51:
      if (lookahead == 's') ADVANCE(57);
      END_STATE();
    case 52:
      if (lookahead == 's') ADVANCE(29);
      END_STATE();
    case 53:
      if (lookahead == 't') ADVANCE(6);
      END_STATE();
    case 54:
      if (lookahead == 't') ADVANCE(10);
      END_STATE();
    case 55:
      if (lookahead == 't') ADVANCE(42);
      END_STATE();
    case 56:
      if (lookahead == 't') ADVANCE(22);
      END_STATE();
    case 57:
      if (lookahead == 'u') ADVANCE(28);
      END_STATE();
    case 58:
      if (lookahead == 'u') ADVANCE(48);
      END_STATE();
    case 59:
      if (lookahead == 'u') ADVANCE(54);
      END_STATE();
    case 60:
      if (lookahead == 'x') ADVANCE(23);
      END_STATE();
    case 61:
      if (lookahead == 'y') ADVANCE(99);
      END_STATE();
    case 62:
      if (lookahead == 'y') ADVANCE(101);
      END_STATE();
    case 63:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(63)
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == 'c') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 64:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(64)
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == 'b') ADVANCE(75);
      if (lookahead == 'c') ADVANCE(81);
      if (lookahead == 'e') ADVANCE(83);
      if (lookahead == 'f') ADVANCE(80);
      if (lookahead == 'l') ADVANCE(78);
      if (lookahead == 's') ADVANCE(82);
      if (lookahead == 't') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 65:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(65)
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == 'e') ADVANCE(79);
      if (lookahead == 'i') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 66:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(66)
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == 'i') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 67:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(67)
      if (lookahead == '-') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 68:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(68)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(71);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 69:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1);
      END_STATE();
    case 70:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3);
      END_STATE();
    case 71:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(71);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 72:
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      if (lookahead == '.') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      END_STATE();
    case 73:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'k') ||
          ('m' <= lookahead && lookahead <= 'w') ||
          lookahead == 'y' ||
          lookahead == 'z') ADVANCE(171);
      if (lookahead == 'l') ADVANCE(152);
      if (lookahead == 'x') ADVANCE(121);
      END_STATE();
    case 74:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      if (lookahead == 'a') ADVANCE(112);
      if (lookahead == 'o') ADVANCE(134);
      END_STATE();
    case 75:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      if (lookahead == 'e') ADVANCE(136);
      END_STATE();
    case 76:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      if (lookahead == 'e') ADVANCE(151);
      END_STATE();
    case 77:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'e') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      if (lookahead == 'f') ADVANCE(174);
      END_STATE();
    case 78:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      if (lookahead == 'i') ADVANCE(111);
      END_STATE();
    case 79:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'k') ||
          ('m' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      if (lookahead == 'l') ADVANCE(152);
      END_STATE();
    case 80:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'k') ||
          ('m' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      if (lookahead == 'l') ADVANCE(166);
      END_STATE();
    case 81:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      if (lookahead == 'o') ADVANCE(134);
      END_STATE();
    case 82:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      if (lookahead == 'o') ADVANCE(161);
      END_STATE();
    case 83:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'w') ||
          lookahead == 'y' ||
          lookahead == 'z') ADVANCE(171);
      if (lookahead == 'x') ADVANCE(121);
      END_STATE();
    case 84:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      if (lookahead == 'a') ADVANCE(112);
      END_STATE();
    case 85:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 86:
      if (eof) ADVANCE(87);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(86)
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == 'b') ADVANCE(18);
      if (lookahead == 'c') ADVANCE(38);
      if (lookahead == 'e') ADVANCE(60);
      if (lookahead == 'f') ADVANCE(31);
      if (lookahead == 'l') ADVANCE(27);
      if (lookahead == 's') ADVANCE(39);
      if (lookahead == 't') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(8);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_cabal_DASHversion);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_spec_version);
      if (lookahead == '\n') ADVANCE(90);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(2);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_benchmark);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_benchmark);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_common);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_common);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_executable);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_executable);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_flag);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_flag);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_library);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_library);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_source_DASHrepository);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_source_DASHrepository);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_test_DASHsuite);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_test_DASHsuite);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == '-') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(106);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      if (lookahead == '.') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'a' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      if (lookahead == 'b') ADVANCE(147);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'a' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      if (lookahead == 'b') ADVANCE(167);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'a' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      if (lookahead == 'b') ADVANCE(132);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'a' ||
          lookahead == 'b' ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      if (lookahead == 'c') ADVANCE(126);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'a' ||
          lookahead == 'b' ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      if (lookahead == 'c') ADVANCE(162);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'a' ||
          lookahead == 'b' ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      if (lookahead == 'c') ADVANCE(122);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      if (lookahead == 'e') ADVANCE(176);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      if (lookahead == 'e') ADVANCE(143);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      if (lookahead == 'e') ADVANCE(96);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      if (lookahead == 'e') ADVANCE(104);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      if (lookahead == 'e') ADVANCE(115);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      if (lookahead == 'e') ADVANCE(109);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      if (lookahead == 'e') ADVANCE(149);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'e') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      if (lookahead == 'f') ADVANCE(175);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f') ||
          ('h' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      if (lookahead == 'g') ADVANCE(98);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'g') ||
          ('i' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      if (lookahead == 'h') ADVANCE(135);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      if (lookahead == 'i') ADVANCE(159);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      if (lookahead == 'i') ADVANCE(157);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      if (lookahead == 'i') ADVANCE(140);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'j') ||
          ('l' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      if (lookahead == 'k') ADVANCE(92);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'k') ||
          ('m' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      if (lookahead == 'l') ADVANCE(107);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'k') ||
          ('m' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      if (lookahead == 'l') ADVANCE(119);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'l') ||
          ('n' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      if (lookahead == 'm') ADVANCE(139);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'l') ||
          ('n' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      if (lookahead == 'm') ADVANCE(133);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'l') ||
          ('n' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      if (lookahead == 'm') ADVANCE(170);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      if (lookahead == 'n') ADVANCE(114);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      if (lookahead == 'n') ADVANCE(94);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      if (lookahead == 'n') ADVANCE(88);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      if (lookahead == 'o') ADVANCE(137);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      if (lookahead == 'o') ADVANCE(138);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      if (lookahead == 'o') ADVANCE(155);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      if (lookahead == 'o') ADVANCE(146);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'o') ||
          ('q' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      if (lookahead == 'p') ADVANCE(141);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      if (lookahead == 'r') ADVANCE(164);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      if (lookahead == 'r') ADVANCE(130);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      if (lookahead == 'r') ADVANCE(165);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      if (lookahead == 'r') ADVANCE(169);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      if (lookahead == 'r') ADVANCE(116);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      if (lookahead == 'r') ADVANCE(153);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      if (lookahead == 'r') ADVANCE(118);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      if (lookahead == 's') ADVANCE(156);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      if (lookahead == 's') ADVANCE(117);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      if (lookahead == 's') ADVANCE(129);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      if (lookahead == 's') ADVANCE(160);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      if (lookahead == 's') ADVANCE(128);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      if (lookahead == 't') ADVANCE(108);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      if (lookahead == 't') ADVANCE(142);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      if (lookahead == 't') ADVANCE(168);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      if (lookahead == 't') ADVANCE(120);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 't') ||
          ('v' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      if (lookahead == 'u') ADVANCE(127);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 't') ||
          ('v' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      if (lookahead == 'u') ADVANCE(148);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 't') ||
          ('v' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      if (lookahead == 'u') ADVANCE(158);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'u') ||
          ('w' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      if (lookahead == 'v') ADVANCE(123);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'x') ||
          lookahead == 'z') ADVANCE(171);
      if (lookahead == 'y') ADVANCE(100);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'x') ||
          lookahead == 'z') ADVANCE(171);
      if (lookahead == 'y') ADVANCE(102);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      if (lookahead == 'a') ADVANCE(125);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      if (lookahead == 'a') ADVANCE(131);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      if (lookahead == 'a') ADVANCE(113);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      if (lookahead == 'a') ADVANCE(144);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      if (lookahead == 'a') ADVANCE(145);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_field_value);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(172);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(173);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_field_value);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(173);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_elseif);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      if (lookahead == 'i') ADVANCE(124);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_condition);
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
  [1] = {.lex_state = 63, .external_lex_state = 2},
  [2] = {.lex_state = 86, .external_lex_state = 2},
  [3] = {.lex_state = 86, .external_lex_state = 2},
  [4] = {.lex_state = 86, .external_lex_state = 2},
  [5] = {.lex_state = 86, .external_lex_state = 2},
  [6] = {.lex_state = 64, .external_lex_state = 2},
  [7] = {.lex_state = 64, .external_lex_state = 2},
  [8] = {.lex_state = 64, .external_lex_state = 3},
  [9] = {.lex_state = 86, .external_lex_state = 2},
  [10] = {.lex_state = 65, .external_lex_state = 4},
  [11] = {.lex_state = 86, .external_lex_state = 2},
  [12] = {.lex_state = 86, .external_lex_state = 2},
  [13] = {.lex_state = 86, .external_lex_state = 2},
  [14] = {.lex_state = 86, .external_lex_state = 2},
  [15] = {.lex_state = 86, .external_lex_state = 2},
  [16] = {.lex_state = 86, .external_lex_state = 2},
  [17] = {.lex_state = 65, .external_lex_state = 4},
  [18] = {.lex_state = 64, .external_lex_state = 2},
  [19] = {.lex_state = 86, .external_lex_state = 2},
  [20] = {.lex_state = 86, .external_lex_state = 2},
  [21] = {.lex_state = 86, .external_lex_state = 2},
  [22] = {.lex_state = 64, .external_lex_state = 2},
  [23] = {.lex_state = 86, .external_lex_state = 2},
  [24] = {.lex_state = 86, .external_lex_state = 2},
  [25] = {.lex_state = 86, .external_lex_state = 2},
  [26] = {.lex_state = 86, .external_lex_state = 2},
  [27] = {.lex_state = 86, .external_lex_state = 2},
  [28] = {.lex_state = 86, .external_lex_state = 2},
  [29] = {.lex_state = 86, .external_lex_state = 2},
  [30] = {.lex_state = 86, .external_lex_state = 2},
  [31] = {.lex_state = 86, .external_lex_state = 2},
  [32] = {.lex_state = 86, .external_lex_state = 2},
  [33] = {.lex_state = 64, .external_lex_state = 2},
  [34] = {.lex_state = 86, .external_lex_state = 2},
  [35] = {.lex_state = 66, .external_lex_state = 2},
  [36] = {.lex_state = 66, .external_lex_state = 2},
  [37] = {.lex_state = 65, .external_lex_state = 4},
  [38] = {.lex_state = 66, .external_lex_state = 2},
  [39] = {.lex_state = 66, .external_lex_state = 2},
  [40] = {.lex_state = 66, .external_lex_state = 2},
  [41] = {.lex_state = 66, .external_lex_state = 2},
  [42] = {.lex_state = 66, .external_lex_state = 4},
  [43] = {.lex_state = 66, .external_lex_state = 4},
  [44] = {.lex_state = 66, .external_lex_state = 4},
  [45] = {.lex_state = 66, .external_lex_state = 4},
  [46] = {.lex_state = 66, .external_lex_state = 4},
  [47] = {.lex_state = 66, .external_lex_state = 4},
  [48] = {.lex_state = 66, .external_lex_state = 4},
  [49] = {.lex_state = 65, .external_lex_state = 4},
  [50] = {.lex_state = 65, .external_lex_state = 4},
  [51] = {.lex_state = 65, .external_lex_state = 4},
  [52] = {.lex_state = 65, .external_lex_state = 4},
  [53] = {.lex_state = 67, .external_lex_state = 2},
  [54] = {.lex_state = 67, .external_lex_state = 2},
  [55] = {.lex_state = 66, .external_lex_state = 4},
  [56] = {.lex_state = 66, .external_lex_state = 4},
  [57] = {.lex_state = 67, .external_lex_state = 2},
  [58] = {.lex_state = 66, .external_lex_state = 4},
  [59] = {.lex_state = 66, .external_lex_state = 5},
  [60] = {.lex_state = 67, .external_lex_state = 4},
  [61] = {.lex_state = 67, .external_lex_state = 4},
  [62] = {.lex_state = 66, .external_lex_state = 4},
  [63] = {.lex_state = 66, .external_lex_state = 4},
  [64] = {.lex_state = 66, .external_lex_state = 4},
  [65] = {.lex_state = 67, .external_lex_state = 2},
  [66] = {.lex_state = 67, .external_lex_state = 5},
  [67] = {.lex_state = 66, .external_lex_state = 2},
  [68] = {.lex_state = 66, .external_lex_state = 4},
  [69] = {.lex_state = 67, .external_lex_state = 4},
  [70] = {.lex_state = 66, .external_lex_state = 4},
  [71] = {.lex_state = 67, .external_lex_state = 4},
  [72] = {.lex_state = 67, .external_lex_state = 4},
  [73] = {.lex_state = 66, .external_lex_state = 4},
  [74] = {.lex_state = 67, .external_lex_state = 4},
  [75] = {.lex_state = 66, .external_lex_state = 4},
  [76] = {.lex_state = 0, .external_lex_state = 6},
  [77] = {.lex_state = 0, .external_lex_state = 2},
  [78] = {.lex_state = 0, .external_lex_state = 2},
  [79] = {.lex_state = 67, .external_lex_state = 2},
  [80] = {.lex_state = 0, .external_lex_state = 6},
  [81] = {.lex_state = 0, .external_lex_state = 6},
  [82] = {.lex_state = 0, .external_lex_state = 2},
  [83] = {.lex_state = 67, .external_lex_state = 4},
  [84] = {.lex_state = 68, .external_lex_state = 3},
  [85] = {.lex_state = 0, .external_lex_state = 2},
  [86] = {.lex_state = 67, .external_lex_state = 4},
  [87] = {.lex_state = 68, .external_lex_state = 3},
  [88] = {.lex_state = 0, .external_lex_state = 6},
  [89] = {.lex_state = 0, .external_lex_state = 6},
  [90] = {.lex_state = 0, .external_lex_state = 6},
  [91] = {.lex_state = 0, .external_lex_state = 6},
  [92] = {.lex_state = 0, .external_lex_state = 3},
  [93] = {.lex_state = 0, .external_lex_state = 3},
  [94] = {.lex_state = 0, .external_lex_state = 3},
  [95] = {.lex_state = 0, .external_lex_state = 3},
  [96] = {.lex_state = 0, .external_lex_state = 3},
  [97] = {.lex_state = 0, .external_lex_state = 3},
  [98] = {.lex_state = 0, .external_lex_state = 3},
  [99] = {.lex_state = 0, .external_lex_state = 3},
  [100] = {.lex_state = 0, .external_lex_state = 3},
  [101] = {.lex_state = 0, .external_lex_state = 6},
  [102] = {.lex_state = 67, .external_lex_state = 2},
  [103] = {.lex_state = 0, .external_lex_state = 3},
  [104] = {.lex_state = 0, .external_lex_state = 3},
  [105] = {.lex_state = 0, .external_lex_state = 3},
  [106] = {.lex_state = 0, .external_lex_state = 3},
  [107] = {.lex_state = 0, .external_lex_state = 3},
  [108] = {.lex_state = 0, .external_lex_state = 3},
  [109] = {.lex_state = 0, .external_lex_state = 3},
  [110] = {.lex_state = 0, .external_lex_state = 3},
  [111] = {.lex_state = 177, .external_lex_state = 2},
  [112] = {.lex_state = 0, .external_lex_state = 2},
  [113] = {.lex_state = 68, .external_lex_state = 2},
  [114] = {.lex_state = 68, .external_lex_state = 2},
  [115] = {.lex_state = 68, .external_lex_state = 2},
  [116] = {.lex_state = 68, .external_lex_state = 2},
  [117] = {.lex_state = 68, .external_lex_state = 2},
  [118] = {.lex_state = 68, .external_lex_state = 2},
  [119] = {.lex_state = 68, .external_lex_state = 2},
  [120] = {.lex_state = 4, .external_lex_state = 2},
  [121] = {.lex_state = 68, .external_lex_state = 2},
  [122] = {.lex_state = 68, .external_lex_state = 2},
  [123] = {.lex_state = 68, .external_lex_state = 2},
  [124] = {.lex_state = 4, .external_lex_state = 2},
  [125] = {.lex_state = 4, .external_lex_state = 2},
  [126] = {.lex_state = 68, .external_lex_state = 2},
  [127] = {.lex_state = 177, .external_lex_state = 2},
  [128] = {.lex_state = 68, .external_lex_state = 2},
  [129] = {.lex_state = 4, .external_lex_state = 2},
  [130] = {.lex_state = 0, .external_lex_state = 2},
  [131] = {.lex_state = 4, .external_lex_state = 2},
  [132] = {.lex_state = 4, .external_lex_state = 2},
  [133] = {.lex_state = 86, .external_lex_state = 2},
  [134] = {.lex_state = 0, .external_lex_state = 2},
  [135] = {.lex_state = 0, .external_lex_state = 2},
  [136] = {.lex_state = 4, .external_lex_state = 2},
  [137] = {.lex_state = 0, .external_lex_state = 2},
};

enum {
  ts_external_token_silly = 0,
  ts_external_token_indent = 1,
  ts_external_token_dedent = 2,
  ts_external_token__indented = 3,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_silly] = sym_silly,
  [ts_external_token_indent] = sym_indent,
  [ts_external_token_dedent] = sym_dedent,
  [ts_external_token__indented] = sym__indented,
};

static const bool ts_external_scanner_states[7][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_silly] = true,
    [ts_external_token_indent] = true,
    [ts_external_token_dedent] = true,
    [ts_external_token__indented] = true,
  },
  [2] = {
    [ts_external_token_silly] = true,
  },
  [3] = {
    [ts_external_token_silly] = true,
    [ts_external_token_indent] = true,
  },
  [4] = {
    [ts_external_token_silly] = true,
    [ts_external_token_dedent] = true,
  },
  [5] = {
    [ts_external_token_silly] = true,
    [ts_external_token_indent] = true,
    [ts_external_token_dedent] = true,
  },
  [6] = {
    [ts_external_token_silly] = true,
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
    [sym_comment] = ACTIONS(1),
    [sym_field_name] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_elseif] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [sym_silly] = ACTIONS(3),
    [sym_indent] = ACTIONS(1),
    [sym_dedent] = ACTIONS(1),
    [sym__indented] = ACTIONS(1),
  },
  [1] = {
    [sym_cabal] = STATE(135),
    [sym_cabal_version] = STATE(53),
    [sym_properties] = STATE(2),
    [sym_field] = STATE(7),
    [aux_sym_cabal_repeat1] = STATE(65),
    [aux_sym_properties_repeat1] = STATE(7),
    [anon_sym_cabal_DASHversion] = ACTIONS(5),
    [sym_comment] = ACTIONS(7),
    [sym_field_name] = ACTIONS(9),
    [sym_silly] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 12,
    ACTIONS(3), 1,
      sym_silly,
    ACTIONS(11), 1,
      anon_sym_benchmark,
    ACTIONS(13), 1,
      anon_sym_common,
    ACTIONS(15), 1,
      anon_sym_executable,
    ACTIONS(17), 1,
      anon_sym_flag,
    ACTIONS(19), 1,
      anon_sym_library,
    ACTIONS(21), 1,
      anon_sym_source_DASHrepository,
    ACTIONS(23), 1,
      anon_sym_test_DASHsuite,
    ACTIONS(25), 1,
      sym_comment,
    STATE(20), 1,
      aux_sym_cabal_repeat1,
    STATE(82), 1,
      sym_sections,
    STATE(4), 8,
      sym_benchmark,
      sym_common,
      sym_executable,
      sym_flag,
      sym_library,
      sym_source_repository,
      sym_test_suite,
      aux_sym_sections_repeat1,
  [44] = 12,
    ACTIONS(3), 1,
      sym_silly,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    ACTIONS(29), 1,
      anon_sym_benchmark,
    ACTIONS(32), 1,
      anon_sym_common,
    ACTIONS(35), 1,
      anon_sym_executable,
    ACTIONS(38), 1,
      anon_sym_flag,
    ACTIONS(41), 1,
      anon_sym_library,
    ACTIONS(44), 1,
      anon_sym_source_DASHrepository,
    ACTIONS(47), 1,
      anon_sym_test_DASHsuite,
    ACTIONS(50), 1,
      sym_comment,
    STATE(20), 1,
      aux_sym_cabal_repeat1,
    STATE(3), 8,
      sym_benchmark,
      sym_common,
      sym_executable,
      sym_flag,
      sym_library,
      sym_source_repository,
      sym_test_suite,
      aux_sym_sections_repeat1,
  [88] = 12,
    ACTIONS(3), 1,
      sym_silly,
    ACTIONS(11), 1,
      anon_sym_benchmark,
    ACTIONS(13), 1,
      anon_sym_common,
    ACTIONS(15), 1,
      anon_sym_executable,
    ACTIONS(17), 1,
      anon_sym_flag,
    ACTIONS(19), 1,
      anon_sym_library,
    ACTIONS(21), 1,
      anon_sym_source_DASHrepository,
    ACTIONS(23), 1,
      anon_sym_test_DASHsuite,
    ACTIONS(53), 1,
      ts_builtin_sym_end,
    ACTIONS(55), 1,
      sym_comment,
    STATE(20), 1,
      aux_sym_cabal_repeat1,
    STATE(3), 8,
      sym_benchmark,
      sym_common,
      sym_executable,
      sym_flag,
      sym_library,
      sym_source_repository,
      sym_test_suite,
      aux_sym_sections_repeat1,
  [132] = 12,
    ACTIONS(3), 1,
      sym_silly,
    ACTIONS(11), 1,
      anon_sym_benchmark,
    ACTIONS(13), 1,
      anon_sym_common,
    ACTIONS(15), 1,
      anon_sym_executable,
    ACTIONS(17), 1,
      anon_sym_flag,
    ACTIONS(19), 1,
      anon_sym_library,
    ACTIONS(21), 1,
      anon_sym_source_DASHrepository,
    ACTIONS(23), 1,
      anon_sym_test_DASHsuite,
    ACTIONS(25), 1,
      sym_comment,
    STATE(20), 1,
      aux_sym_cabal_repeat1,
    STATE(85), 1,
      sym_sections,
    STATE(4), 8,
      sym_benchmark,
      sym_common,
      sym_executable,
      sym_flag,
      sym_library,
      sym_source_repository,
      sym_test_suite,
      aux_sym_sections_repeat1,
  [176] = 6,
    ACTIONS(3), 1,
      sym_silly,
    ACTIONS(60), 1,
      sym_comment,
    ACTIONS(63), 1,
      sym_field_name,
    STATE(65), 1,
      aux_sym_cabal_repeat1,
    STATE(6), 2,
      sym_field,
      aux_sym_properties_repeat1,
    ACTIONS(58), 7,
      anon_sym_benchmark,
      anon_sym_common,
      anon_sym_executable,
      anon_sym_flag,
      anon_sym_library,
      anon_sym_source_DASHrepository,
      anon_sym_test_DASHsuite,
  [202] = 6,
    ACTIONS(3), 1,
      sym_silly,
    ACTIONS(9), 1,
      sym_field_name,
    ACTIONS(68), 1,
      sym_comment,
    STATE(65), 1,
      aux_sym_cabal_repeat1,
    STATE(6), 2,
      sym_field,
      aux_sym_properties_repeat1,
    ACTIONS(66), 7,
      anon_sym_benchmark,
      anon_sym_common,
      anon_sym_executable,
      anon_sym_flag,
      anon_sym_library,
      anon_sym_source_DASHrepository,
      anon_sym_test_DASHsuite,
  [228] = 4,
    ACTIONS(3), 1,
      sym_silly,
    ACTIONS(73), 1,
      sym_comment,
    ACTIONS(75), 1,
      sym_indent,
    ACTIONS(71), 8,
      anon_sym_benchmark,
      anon_sym_common,
      anon_sym_executable,
      anon_sym_flag,
      anon_sym_library,
      anon_sym_source_DASHrepository,
      anon_sym_test_DASHsuite,
      sym_field_name,
  [248] = 4,
    ACTIONS(3), 1,
      sym_silly,
    ACTIONS(79), 1,
      sym_comment,
    STATE(9), 1,
      aux_sym_cabal_repeat1,
    ACTIONS(77), 8,
      ts_builtin_sym_end,
      anon_sym_benchmark,
      anon_sym_common,
      anon_sym_executable,
      anon_sym_flag,
      anon_sym_library,
      anon_sym_source_DASHrepository,
      anon_sym_test_DASHsuite,
  [268] = 7,
    ACTIONS(3), 1,
      sym_silly,
    ACTIONS(86), 1,
      anon_sym_elseif,
    ACTIONS(88), 1,
      anon_sym_else,
    STATE(62), 1,
      sym_condition_else,
    ACTIONS(82), 2,
      sym_dedent,
      sym_comment,
    ACTIONS(84), 2,
      sym_field_name,
      anon_sym_if,
    STATE(37), 2,
      sym_condition_elseif,
      aux_sym_conditional_repeat1,
  [293] = 2,
    ACTIONS(3), 1,
      sym_silly,
    ACTIONS(90), 9,
      ts_builtin_sym_end,
      anon_sym_benchmark,
      anon_sym_common,
      anon_sym_executable,
      anon_sym_flag,
      anon_sym_library,
      anon_sym_source_DASHrepository,
      anon_sym_test_DASHsuite,
      sym_comment,
  [308] = 2,
    ACTIONS(3), 1,
      sym_silly,
    ACTIONS(92), 9,
      ts_builtin_sym_end,
      anon_sym_benchmark,
      anon_sym_common,
      anon_sym_executable,
      anon_sym_flag,
      anon_sym_library,
      anon_sym_source_DASHrepository,
      anon_sym_test_DASHsuite,
      sym_comment,
  [323] = 2,
    ACTIONS(3), 1,
      sym_silly,
    ACTIONS(94), 9,
      ts_builtin_sym_end,
      anon_sym_benchmark,
      anon_sym_common,
      anon_sym_executable,
      anon_sym_flag,
      anon_sym_library,
      anon_sym_source_DASHrepository,
      anon_sym_test_DASHsuite,
      sym_comment,
  [338] = 2,
    ACTIONS(3), 1,
      sym_silly,
    ACTIONS(96), 9,
      ts_builtin_sym_end,
      anon_sym_benchmark,
      anon_sym_common,
      anon_sym_executable,
      anon_sym_flag,
      anon_sym_library,
      anon_sym_source_DASHrepository,
      anon_sym_test_DASHsuite,
      sym_comment,
  [353] = 2,
    ACTIONS(3), 1,
      sym_silly,
    ACTIONS(98), 9,
      ts_builtin_sym_end,
      anon_sym_benchmark,
      anon_sym_common,
      anon_sym_executable,
      anon_sym_flag,
      anon_sym_library,
      anon_sym_source_DASHrepository,
      anon_sym_test_DASHsuite,
      sym_comment,
  [368] = 2,
    ACTIONS(3), 1,
      sym_silly,
    ACTIONS(100), 9,
      ts_builtin_sym_end,
      anon_sym_benchmark,
      anon_sym_common,
      anon_sym_executable,
      anon_sym_flag,
      anon_sym_library,
      anon_sym_source_DASHrepository,
      anon_sym_test_DASHsuite,
      sym_comment,
  [383] = 7,
    ACTIONS(3), 1,
      sym_silly,
    ACTIONS(86), 1,
      anon_sym_elseif,
    ACTIONS(88), 1,
      anon_sym_else,
    STATE(73), 1,
      sym_condition_else,
    ACTIONS(102), 2,
      sym_dedent,
      sym_comment,
    ACTIONS(104), 2,
      sym_field_name,
      anon_sym_if,
    STATE(10), 2,
      sym_condition_elseif,
      aux_sym_conditional_repeat1,
  [408] = 3,
    ACTIONS(3), 1,
      sym_silly,
    ACTIONS(108), 1,
      sym_comment,
    ACTIONS(106), 8,
      anon_sym_benchmark,
      anon_sym_common,
      anon_sym_executable,
      anon_sym_flag,
      anon_sym_library,
      anon_sym_source_DASHrepository,
      anon_sym_test_DASHsuite,
      sym_field_name,
  [425] = 2,
    ACTIONS(3), 1,
      sym_silly,
    ACTIONS(110), 9,
      ts_builtin_sym_end,
      anon_sym_benchmark,
      anon_sym_common,
      anon_sym_executable,
      anon_sym_flag,
      anon_sym_library,
      anon_sym_source_DASHrepository,
      anon_sym_test_DASHsuite,
      sym_comment,
  [440] = 10,
    ACTIONS(3), 1,
      sym_silly,
    ACTIONS(112), 1,
      anon_sym_benchmark,
    ACTIONS(114), 1,
      anon_sym_common,
    ACTIONS(116), 1,
      anon_sym_executable,
    ACTIONS(118), 1,
      anon_sym_flag,
    ACTIONS(120), 1,
      anon_sym_library,
    ACTIONS(122), 1,
      anon_sym_source_DASHrepository,
    ACTIONS(124), 1,
      anon_sym_test_DASHsuite,
    ACTIONS(126), 1,
      sym_comment,
    STATE(9), 1,
      aux_sym_cabal_repeat1,
  [471] = 2,
    ACTIONS(3), 1,
      sym_silly,
    ACTIONS(128), 9,
      ts_builtin_sym_end,
      anon_sym_benchmark,
      anon_sym_common,
      anon_sym_executable,
      anon_sym_flag,
      anon_sym_library,
      anon_sym_source_DASHrepository,
      anon_sym_test_DASHsuite,
      sym_comment,
  [486] = 3,
    ACTIONS(3), 1,
      sym_silly,
    ACTIONS(130), 1,
      sym_comment,
    ACTIONS(58), 8,
      anon_sym_benchmark,
      anon_sym_common,
      anon_sym_executable,
      anon_sym_flag,
      anon_sym_library,
      anon_sym_source_DASHrepository,
      anon_sym_test_DASHsuite,
      sym_field_name,
  [503] = 2,
    ACTIONS(3), 1,
      sym_silly,
    ACTIONS(132), 9,
      ts_builtin_sym_end,
      anon_sym_benchmark,
      anon_sym_common,
      anon_sym_executable,
      anon_sym_flag,
      anon_sym_library,
      anon_sym_source_DASHrepository,
      anon_sym_test_DASHsuite,
      sym_comment,
  [518] = 2,
    ACTIONS(3), 1,
      sym_silly,
    ACTIONS(134), 9,
      ts_builtin_sym_end,
      anon_sym_benchmark,
      anon_sym_common,
      anon_sym_executable,
      anon_sym_flag,
      anon_sym_library,
      anon_sym_source_DASHrepository,
      anon_sym_test_DASHsuite,
      sym_comment,
  [533] = 2,
    ACTIONS(3), 1,
      sym_silly,
    ACTIONS(136), 9,
      ts_builtin_sym_end,
      anon_sym_benchmark,
      anon_sym_common,
      anon_sym_executable,
      anon_sym_flag,
      anon_sym_library,
      anon_sym_source_DASHrepository,
      anon_sym_test_DASHsuite,
      sym_comment,
  [548] = 2,
    ACTIONS(3), 1,
      sym_silly,
    ACTIONS(138), 9,
      ts_builtin_sym_end,
      anon_sym_benchmark,
      anon_sym_common,
      anon_sym_executable,
      anon_sym_flag,
      anon_sym_library,
      anon_sym_source_DASHrepository,
      anon_sym_test_DASHsuite,
      sym_comment,
  [563] = 2,
    ACTIONS(3), 1,
      sym_silly,
    ACTIONS(140), 9,
      ts_builtin_sym_end,
      anon_sym_benchmark,
      anon_sym_common,
      anon_sym_executable,
      anon_sym_flag,
      anon_sym_library,
      anon_sym_source_DASHrepository,
      anon_sym_test_DASHsuite,
      sym_comment,
  [578] = 2,
    ACTIONS(3), 1,
      sym_silly,
    ACTIONS(142), 9,
      ts_builtin_sym_end,
      anon_sym_benchmark,
      anon_sym_common,
      anon_sym_executable,
      anon_sym_flag,
      anon_sym_library,
      anon_sym_source_DASHrepository,
      anon_sym_test_DASHsuite,
      sym_comment,
  [593] = 2,
    ACTIONS(3), 1,
      sym_silly,
    ACTIONS(144), 9,
      ts_builtin_sym_end,
      anon_sym_benchmark,
      anon_sym_common,
      anon_sym_executable,
      anon_sym_flag,
      anon_sym_library,
      anon_sym_source_DASHrepository,
      anon_sym_test_DASHsuite,
      sym_comment,
  [608] = 2,
    ACTIONS(3), 1,
      sym_silly,
    ACTIONS(146), 9,
      ts_builtin_sym_end,
      anon_sym_benchmark,
      anon_sym_common,
      anon_sym_executable,
      anon_sym_flag,
      anon_sym_library,
      anon_sym_source_DASHrepository,
      anon_sym_test_DASHsuite,
      sym_comment,
  [623] = 2,
    ACTIONS(3), 1,
      sym_silly,
    ACTIONS(148), 9,
      ts_builtin_sym_end,
      anon_sym_benchmark,
      anon_sym_common,
      anon_sym_executable,
      anon_sym_flag,
      anon_sym_library,
      anon_sym_source_DASHrepository,
      anon_sym_test_DASHsuite,
      sym_comment,
  [638] = 2,
    ACTIONS(3), 1,
      sym_silly,
    ACTIONS(150), 9,
      ts_builtin_sym_end,
      anon_sym_benchmark,
      anon_sym_common,
      anon_sym_executable,
      anon_sym_flag,
      anon_sym_library,
      anon_sym_source_DASHrepository,
      anon_sym_test_DASHsuite,
      sym_comment,
  [653] = 3,
    ACTIONS(3), 1,
      sym_silly,
    ACTIONS(154), 1,
      sym_comment,
    ACTIONS(152), 8,
      anon_sym_benchmark,
      anon_sym_common,
      anon_sym_executable,
      anon_sym_flag,
      anon_sym_library,
      anon_sym_source_DASHrepository,
      anon_sym_test_DASHsuite,
      sym_field_name,
  [670] = 2,
    ACTIONS(3), 1,
      sym_silly,
    ACTIONS(156), 9,
      ts_builtin_sym_end,
      anon_sym_benchmark,
      anon_sym_common,
      anon_sym_executable,
      anon_sym_flag,
      anon_sym_library,
      anon_sym_source_DASHrepository,
      anon_sym_test_DASHsuite,
      sym_comment,
  [685] = 8,
    ACTIONS(3), 1,
      sym_silly,
    ACTIONS(158), 1,
      sym_comment,
    ACTIONS(160), 1,
      sym_field_name,
    ACTIONS(162), 1,
      anon_sym_if,
    STATE(17), 1,
      sym_condition_if,
    STATE(43), 1,
      aux_sym_property_or_conditional_block_repeat1,
    STATE(67), 1,
      aux_sym_cabal_repeat1,
    STATE(55), 2,
      sym_field,
      sym_conditional,
  [711] = 8,
    ACTIONS(3), 1,
      sym_silly,
    ACTIONS(158), 1,
      sym_comment,
    ACTIONS(160), 1,
      sym_field_name,
    ACTIONS(162), 1,
      anon_sym_if,
    STATE(17), 1,
      sym_condition_if,
    STATE(42), 1,
      aux_sym_property_or_conditional_block_repeat1,
    STATE(67), 1,
      aux_sym_cabal_repeat1,
    STATE(55), 2,
      sym_field,
      sym_conditional,
  [737] = 5,
    ACTIONS(3), 1,
      sym_silly,
    ACTIONS(168), 1,
      anon_sym_elseif,
    ACTIONS(164), 2,
      sym_dedent,
      sym_comment,
    STATE(37), 2,
      sym_condition_elseif,
      aux_sym_conditional_repeat1,
    ACTIONS(166), 3,
      sym_field_name,
      anon_sym_if,
      anon_sym_else,
  [757] = 8,
    ACTIONS(3), 1,
      sym_silly,
    ACTIONS(160), 1,
      sym_field_name,
    ACTIONS(162), 1,
      anon_sym_if,
    ACTIONS(171), 1,
      sym_comment,
    STATE(17), 1,
      sym_condition_if,
    STATE(36), 1,
      aux_sym_cabal_repeat1,
    STATE(46), 1,
      aux_sym_property_or_conditional_block_repeat1,
    STATE(55), 2,
      sym_field,
      sym_conditional,
  [783] = 8,
    ACTIONS(3), 1,
      sym_silly,
    ACTIONS(160), 1,
      sym_field_name,
    ACTIONS(162), 1,
      anon_sym_if,
    ACTIONS(173), 1,
      sym_comment,
    STATE(17), 1,
      sym_condition_if,
    STATE(35), 1,
      aux_sym_cabal_repeat1,
    STATE(45), 1,
      aux_sym_property_or_conditional_block_repeat1,
    STATE(55), 2,
      sym_field,
      sym_conditional,
  [809] = 8,
    ACTIONS(3), 1,
      sym_silly,
    ACTIONS(158), 1,
      sym_comment,
    ACTIONS(160), 1,
      sym_field_name,
    ACTIONS(162), 1,
      anon_sym_if,
    STATE(17), 1,
      sym_condition_if,
    STATE(47), 1,
      aux_sym_property_or_conditional_block_repeat1,
    STATE(67), 1,
      aux_sym_cabal_repeat1,
    STATE(55), 2,
      sym_field,
      sym_conditional,
  [835] = 8,
    ACTIONS(3), 1,
      sym_silly,
    ACTIONS(160), 1,
      sym_field_name,
    ACTIONS(162), 1,
      anon_sym_if,
    ACTIONS(175), 1,
      sym_comment,
    STATE(17), 1,
      sym_condition_if,
    STATE(40), 1,
      aux_sym_cabal_repeat1,
    STATE(44), 1,
      aux_sym_property_or_conditional_block_repeat1,
    STATE(55), 2,
      sym_field,
      sym_conditional,
  [861] = 7,
    ACTIONS(3), 1,
      sym_silly,
    ACTIONS(160), 1,
      sym_field_name,
    ACTIONS(162), 1,
      anon_sym_if,
    ACTIONS(177), 1,
      sym_dedent,
    STATE(17), 1,
      sym_condition_if,
    STATE(48), 1,
      aux_sym_property_or_conditional_block_repeat1,
    STATE(55), 2,
      sym_field,
      sym_conditional,
  [884] = 7,
    ACTIONS(3), 1,
      sym_silly,
    ACTIONS(160), 1,
      sym_field_name,
    ACTIONS(162), 1,
      anon_sym_if,
    ACTIONS(179), 1,
      sym_dedent,
    STATE(17), 1,
      sym_condition_if,
    STATE(48), 1,
      aux_sym_property_or_conditional_block_repeat1,
    STATE(55), 2,
      sym_field,
      sym_conditional,
  [907] = 7,
    ACTIONS(3), 1,
      sym_silly,
    ACTIONS(160), 1,
      sym_field_name,
    ACTIONS(162), 1,
      anon_sym_if,
    ACTIONS(181), 1,
      sym_dedent,
    STATE(17), 1,
      sym_condition_if,
    STATE(48), 1,
      aux_sym_property_or_conditional_block_repeat1,
    STATE(55), 2,
      sym_field,
      sym_conditional,
  [930] = 7,
    ACTIONS(3), 1,
      sym_silly,
    ACTIONS(160), 1,
      sym_field_name,
    ACTIONS(162), 1,
      anon_sym_if,
    ACTIONS(183), 1,
      sym_dedent,
    STATE(17), 1,
      sym_condition_if,
    STATE(48), 1,
      aux_sym_property_or_conditional_block_repeat1,
    STATE(55), 2,
      sym_field,
      sym_conditional,
  [953] = 7,
    ACTIONS(3), 1,
      sym_silly,
    ACTIONS(160), 1,
      sym_field_name,
    ACTIONS(162), 1,
      anon_sym_if,
    ACTIONS(185), 1,
      sym_dedent,
    STATE(17), 1,
      sym_condition_if,
    STATE(48), 1,
      aux_sym_property_or_conditional_block_repeat1,
    STATE(55), 2,
      sym_field,
      sym_conditional,
  [976] = 7,
    ACTIONS(3), 1,
      sym_silly,
    ACTIONS(160), 1,
      sym_field_name,
    ACTIONS(162), 1,
      anon_sym_if,
    ACTIONS(187), 1,
      sym_dedent,
    STATE(17), 1,
      sym_condition_if,
    STATE(48), 1,
      aux_sym_property_or_conditional_block_repeat1,
    STATE(55), 2,
      sym_field,
      sym_conditional,
  [999] = 7,
    ACTIONS(3), 1,
      sym_silly,
    ACTIONS(189), 1,
      sym_field_name,
    ACTIONS(192), 1,
      anon_sym_if,
    ACTIONS(195), 1,
      sym_dedent,
    STATE(17), 1,
      sym_condition_if,
    STATE(48), 1,
      aux_sym_property_or_conditional_block_repeat1,
    STATE(55), 2,
      sym_field,
      sym_conditional,
  [1022] = 3,
    ACTIONS(3), 1,
      sym_silly,
    ACTIONS(197), 2,
      sym_dedent,
      sym_comment,
    ACTIONS(199), 4,
      sym_field_name,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_else,
  [1036] = 3,
    ACTIONS(3), 1,
      sym_silly,
    ACTIONS(201), 2,
      sym_dedent,
      sym_comment,
    ACTIONS(203), 4,
      sym_field_name,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_else,
  [1050] = 3,
    ACTIONS(3), 1,
      sym_silly,
    ACTIONS(100), 2,
      sym_dedent,
      sym_comment,
    ACTIONS(205), 4,
      sym_field_name,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_else,
  [1064] = 3,
    ACTIONS(3), 1,
      sym_silly,
    ACTIONS(146), 2,
      sym_dedent,
      sym_comment,
    ACTIONS(207), 4,
      sym_field_name,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_else,
  [1078] = 6,
    ACTIONS(3), 1,
      sym_silly,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(209), 1,
      sym_field_name,
    STATE(5), 1,
      sym_properties,
    STATE(65), 1,
      aux_sym_cabal_repeat1,
    STATE(7), 2,
      sym_field,
      aux_sym_properties_repeat1,
  [1098] = 6,
    ACTIONS(3), 1,
      sym_silly,
    ACTIONS(211), 1,
      sym_comment,
    ACTIONS(213), 1,
      sym_field_name,
    STATE(57), 1,
      aux_sym_cabal_repeat1,
    STATE(69), 1,
      sym_field,
    STATE(71), 1,
      aux_sym_property_block_repeat1,
  [1117] = 5,
    ACTIONS(3), 1,
      sym_silly,
    ACTIONS(215), 1,
      sym_comment,
    ACTIONS(219), 1,
      sym_dedent,
    STATE(56), 1,
      aux_sym_cabal_repeat1,
    ACTIONS(217), 2,
      sym_field_name,
      anon_sym_if,
  [1134] = 5,
    ACTIONS(3), 1,
      sym_silly,
    ACTIONS(195), 1,
      sym_dedent,
    ACTIONS(221), 1,
      sym_comment,
    STATE(58), 1,
      aux_sym_cabal_repeat1,
    ACTIONS(223), 2,
      sym_field_name,
      anon_sym_if,
  [1151] = 6,
    ACTIONS(3), 1,
      sym_silly,
    ACTIONS(213), 1,
      sym_field_name,
    ACTIONS(225), 1,
      sym_comment,
    STATE(60), 1,
      aux_sym_property_block_repeat1,
    STATE(69), 1,
      sym_field,
    STATE(79), 1,
      aux_sym_cabal_repeat1,
  [1170] = 5,
    ACTIONS(3), 1,
      sym_silly,
    ACTIONS(77), 1,
      sym_dedent,
    ACTIONS(227), 1,
      sym_comment,
    STATE(58), 1,
      aux_sym_cabal_repeat1,
    ACTIONS(230), 2,
      sym_field_name,
      anon_sym_if,
  [1187] = 4,
    ACTIONS(3), 1,
      sym_silly,
    ACTIONS(232), 1,
      sym_indent,
    ACTIONS(71), 2,
      sym_field_name,
      anon_sym_if,
    ACTIONS(73), 2,
      sym_dedent,
      sym_comment,
  [1202] = 5,
    ACTIONS(3), 1,
      sym_silly,
    ACTIONS(213), 1,
      sym_field_name,
    ACTIONS(234), 1,
      sym_dedent,
    STATE(69), 1,
      sym_field,
    STATE(74), 1,
      aux_sym_property_block_repeat1,
  [1218] = 4,
    ACTIONS(3), 1,
      sym_silly,
    ACTIONS(236), 1,
      sym_comment,
    STATE(61), 1,
      aux_sym_cabal_repeat1,
    ACTIONS(77), 2,
      sym_dedent,
      sym_field_name,
  [1232] = 3,
    ACTIONS(3), 1,
      sym_silly,
    ACTIONS(239), 2,
      sym_dedent,
      sym_comment,
    ACTIONS(241), 2,
      sym_field_name,
      anon_sym_if,
  [1244] = 3,
    ACTIONS(3), 1,
      sym_silly,
    ACTIONS(146), 2,
      sym_dedent,
      sym_comment,
    ACTIONS(207), 2,
      sym_field_name,
      anon_sym_if,
  [1256] = 3,
    ACTIONS(3), 1,
      sym_silly,
    ACTIONS(100), 2,
      sym_dedent,
      sym_comment,
    ACTIONS(205), 2,
      sym_field_name,
      anon_sym_if,
  [1268] = 5,
    ACTIONS(3), 1,
      sym_silly,
    ACTIONS(209), 1,
      sym_field_name,
    ACTIONS(225), 1,
      sym_comment,
    STATE(22), 1,
      sym_field,
    STATE(79), 1,
      aux_sym_cabal_repeat1,
  [1284] = 3,
    ACTIONS(3), 1,
      sym_silly,
    ACTIONS(243), 1,
      sym_indent,
    ACTIONS(73), 3,
      sym_dedent,
      sym_comment,
      sym_field_name,
  [1296] = 4,
    ACTIONS(3), 1,
      sym_silly,
    ACTIONS(245), 1,
      sym_comment,
    STATE(67), 1,
      aux_sym_cabal_repeat1,
    ACTIONS(230), 2,
      sym_field_name,
      anon_sym_if,
  [1310] = 3,
    ACTIONS(3), 1,
      sym_silly,
    ACTIONS(152), 2,
      sym_field_name,
      anon_sym_if,
    ACTIONS(154), 2,
      sym_dedent,
      sym_comment,
  [1322] = 4,
    ACTIONS(3), 1,
      sym_silly,
    ACTIONS(248), 1,
      sym_comment,
    STATE(72), 1,
      aux_sym_cabal_repeat1,
    ACTIONS(250), 2,
      sym_dedent,
      sym_field_name,
  [1336] = 3,
    ACTIONS(3), 1,
      sym_silly,
    ACTIONS(106), 2,
      sym_field_name,
      anon_sym_if,
    ACTIONS(108), 2,
      sym_dedent,
      sym_comment,
  [1348] = 5,
    ACTIONS(3), 1,
      sym_silly,
    ACTIONS(213), 1,
      sym_field_name,
    ACTIONS(252), 1,
      sym_dedent,
    STATE(69), 1,
      sym_field,
    STATE(74), 1,
      aux_sym_property_block_repeat1,
  [1364] = 4,
    ACTIONS(3), 1,
      sym_silly,
    ACTIONS(254), 1,
      sym_comment,
    STATE(61), 1,
      aux_sym_cabal_repeat1,
    ACTIONS(256), 2,
      sym_dedent,
      sym_field_name,
  [1378] = 3,
    ACTIONS(3), 1,
      sym_silly,
    ACTIONS(82), 2,
      sym_dedent,
      sym_comment,
    ACTIONS(84), 2,
      sym_field_name,
      anon_sym_if,
  [1390] = 5,
    ACTIONS(3), 1,
      sym_silly,
    ACTIONS(256), 1,
      sym_dedent,
    ACTIONS(258), 1,
      sym_field_name,
    STATE(69), 1,
      sym_field,
    STATE(74), 1,
      aux_sym_property_block_repeat1,
  [1406] = 3,
    ACTIONS(3), 1,
      sym_silly,
    ACTIONS(261), 2,
      sym_dedent,
      sym_comment,
    ACTIONS(263), 2,
      sym_field_name,
      anon_sym_if,
  [1418] = 4,
    ACTIONS(3), 1,
      sym_silly,
    ACTIONS(265), 1,
      sym_dedent,
    ACTIONS(267), 1,
      sym__indented,
    STATE(76), 1,
      aux_sym_field_repeat1,
  [1431] = 4,
    ACTIONS(3), 1,
      sym_silly,
    ACTIONS(126), 1,
      sym_comment,
    ACTIONS(270), 1,
      ts_builtin_sym_end,
    STATE(9), 1,
      aux_sym_cabal_repeat1,
  [1444] = 4,
    ACTIONS(3), 1,
      sym_silly,
    ACTIONS(126), 1,
      sym_comment,
    ACTIONS(272), 1,
      ts_builtin_sym_end,
    STATE(9), 1,
      aux_sym_cabal_repeat1,
  [1457] = 4,
    ACTIONS(3), 1,
      sym_silly,
    ACTIONS(77), 1,
      sym_field_name,
    ACTIONS(274), 1,
      sym_comment,
    STATE(79), 1,
      aux_sym_cabal_repeat1,
  [1470] = 4,
    ACTIONS(3), 1,
      sym_silly,
    ACTIONS(277), 1,
      sym_dedent,
    ACTIONS(279), 1,
      sym__indented,
    STATE(76), 1,
      aux_sym_field_repeat1,
  [1483] = 4,
    ACTIONS(3), 1,
      sym_silly,
    ACTIONS(279), 1,
      sym__indented,
    ACTIONS(281), 1,
      sym_dedent,
    STATE(90), 1,
      aux_sym_field_repeat1,
  [1496] = 4,
    ACTIONS(3), 1,
      sym_silly,
    ACTIONS(283), 1,
      ts_builtin_sym_end,
    ACTIONS(285), 1,
      sym_comment,
    STATE(78), 1,
      aux_sym_cabal_repeat1,
  [1509] = 2,
    ACTIONS(3), 1,
      sym_silly,
    ACTIONS(108), 3,
      sym_dedent,
      sym_comment,
      sym_field_name,
  [1518] = 4,
    ACTIONS(3), 1,
      sym_silly,
    ACTIONS(287), 1,
      sym_section_name,
    ACTIONS(289), 1,
      sym_indent,
    STATE(15), 1,
      sym_property_or_conditional_block,
  [1531] = 4,
    ACTIONS(3), 1,
      sym_silly,
    ACTIONS(272), 1,
      ts_builtin_sym_end,
    ACTIONS(291), 1,
      sym_comment,
    STATE(77), 1,
      aux_sym_cabal_repeat1,
  [1544] = 2,
    ACTIONS(3), 1,
      sym_silly,
    ACTIONS(154), 3,
      sym_dedent,
      sym_comment,
      sym_field_name,
  [1553] = 4,
    ACTIONS(3), 1,
      sym_silly,
    ACTIONS(289), 1,
      sym_indent,
    ACTIONS(293), 1,
      sym_section_name,
    STATE(34), 1,
      sym_property_or_conditional_block,
  [1566] = 4,
    ACTIONS(3), 1,
      sym_silly,
    ACTIONS(279), 1,
      sym__indented,
    ACTIONS(295), 1,
      sym_dedent,
    STATE(91), 1,
      aux_sym_field_repeat1,
  [1579] = 4,
    ACTIONS(3), 1,
      sym_silly,
    ACTIONS(279), 1,
      sym__indented,
    ACTIONS(297), 1,
      sym_dedent,
    STATE(80), 1,
      aux_sym_field_repeat1,
  [1592] = 4,
    ACTIONS(3), 1,
      sym_silly,
    ACTIONS(279), 1,
      sym__indented,
    ACTIONS(299), 1,
      sym_dedent,
    STATE(76), 1,
      aux_sym_field_repeat1,
  [1605] = 4,
    ACTIONS(3), 1,
      sym_silly,
    ACTIONS(279), 1,
      sym__indented,
    ACTIONS(301), 1,
      sym_dedent,
    STATE(76), 1,
      aux_sym_field_repeat1,
  [1618] = 3,
    ACTIONS(3), 1,
      sym_silly,
    ACTIONS(303), 1,
      sym_indent,
    STATE(26), 1,
      sym_property_block,
  [1628] = 3,
    ACTIONS(3), 1,
      sym_silly,
    ACTIONS(305), 1,
      sym_indent,
    STATE(75), 1,
      sym_property_or_conditional_block,
  [1638] = 3,
    ACTIONS(3), 1,
      sym_silly,
    ACTIONS(303), 1,
      sym_indent,
    STATE(32), 1,
      sym_property_block,
  [1648] = 3,
    ACTIONS(3), 1,
      sym_silly,
    ACTIONS(303), 1,
      sym_indent,
    STATE(28), 1,
      sym_property_block,
  [1658] = 3,
    ACTIONS(3), 1,
      sym_silly,
    ACTIONS(307), 1,
      sym_indent,
    STATE(49), 1,
      sym_property_or_conditional_block,
  [1668] = 3,
    ACTIONS(3), 1,
      sym_silly,
    ACTIONS(289), 1,
      sym_indent,
    STATE(21), 1,
      sym_property_or_conditional_block,
  [1678] = 3,
    ACTIONS(3), 1,
      sym_silly,
    ACTIONS(289), 1,
      sym_indent,
    STATE(31), 1,
      sym_property_or_conditional_block,
  [1688] = 3,
    ACTIONS(3), 1,
      sym_silly,
    ACTIONS(303), 1,
      sym_indent,
    STATE(23), 1,
      sym_property_block,
  [1698] = 3,
    ACTIONS(3), 1,
      sym_silly,
    ACTIONS(303), 1,
      sym_indent,
    STATE(12), 1,
      sym_property_block,
  [1708] = 2,
    ACTIONS(3), 1,
      sym_silly,
    ACTIONS(265), 2,
      sym_dedent,
      sym__indented,
  [1716] = 2,
    ACTIONS(3), 1,
      sym_silly,
    ACTIONS(309), 2,
      sym_comment,
      sym_field_name,
  [1724] = 3,
    ACTIONS(3), 1,
      sym_silly,
    ACTIONS(307), 1,
      sym_indent,
    STATE(50), 1,
      sym_property_or_conditional_block,
  [1734] = 3,
    ACTIONS(3), 1,
      sym_silly,
    ACTIONS(303), 1,
      sym_indent,
    STATE(13), 1,
      sym_property_block,
  [1744] = 3,
    ACTIONS(3), 1,
      sym_silly,
    ACTIONS(303), 1,
      sym_indent,
    STATE(14), 1,
      sym_property_block,
  [1754] = 3,
    ACTIONS(3), 1,
      sym_silly,
    ACTIONS(289), 1,
      sym_indent,
    STATE(15), 1,
      sym_property_or_conditional_block,
  [1764] = 3,
    ACTIONS(3), 1,
      sym_silly,
    ACTIONS(303), 1,
      sym_indent,
    STATE(19), 1,
      sym_property_block,
  [1774] = 3,
    ACTIONS(3), 1,
      sym_silly,
    ACTIONS(289), 1,
      sym_indent,
    STATE(11), 1,
      sym_property_or_conditional_block,
  [1784] = 3,
    ACTIONS(3), 1,
      sym_silly,
    ACTIONS(303), 1,
      sym_indent,
    STATE(25), 1,
      sym_property_block,
  [1794] = 3,
    ACTIONS(3), 1,
      sym_silly,
    ACTIONS(303), 1,
      sym_indent,
    STATE(27), 1,
      sym_property_block,
  [1804] = 2,
    ACTIONS(3), 1,
      sym_silly,
    ACTIONS(311), 1,
      sym_condition,
  [1811] = 2,
    ACTIONS(3), 1,
      sym_silly,
    ACTIONS(313), 1,
      anon_sym_COLON,
  [1818] = 2,
    ACTIONS(3), 1,
      sym_silly,
    ACTIONS(315), 1,
      sym_section_name,
  [1825] = 2,
    ACTIONS(3), 1,
      sym_silly,
    ACTIONS(317), 1,
      sym_section_name,
  [1832] = 2,
    ACTIONS(3), 1,
      sym_silly,
    ACTIONS(319), 1,
      sym_section_name,
  [1839] = 2,
    ACTIONS(3), 1,
      sym_silly,
    ACTIONS(321), 1,
      sym_section_name,
  [1846] = 2,
    ACTIONS(3), 1,
      sym_silly,
    ACTIONS(323), 1,
      sym_section_name,
  [1853] = 2,
    ACTIONS(3), 1,
      sym_silly,
    ACTIONS(325), 1,
      sym_section_name,
  [1860] = 2,
    ACTIONS(3), 1,
      sym_silly,
    ACTIONS(327), 1,
      sym_section_name,
  [1867] = 2,
    ACTIONS(3), 1,
      sym_silly,
    ACTIONS(329), 1,
      sym_field_value,
  [1874] = 2,
    ACTIONS(3), 1,
      sym_silly,
    ACTIONS(331), 1,
      sym_section_name,
  [1881] = 2,
    ACTIONS(3), 1,
      sym_silly,
    ACTIONS(333), 1,
      sym_section_name,
  [1888] = 2,
    ACTIONS(3), 1,
      sym_silly,
    ACTIONS(335), 1,
      sym_section_name,
  [1895] = 2,
    ACTIONS(3), 1,
      sym_silly,
    ACTIONS(337), 1,
      sym_field_value,
  [1902] = 2,
    ACTIONS(3), 1,
      sym_silly,
    ACTIONS(339), 1,
      sym_field_value,
  [1909] = 2,
    ACTIONS(3), 1,
      sym_silly,
    ACTIONS(341), 1,
      sym_section_name,
  [1916] = 2,
    ACTIONS(3), 1,
      sym_silly,
    ACTIONS(343), 1,
      sym_condition,
  [1923] = 2,
    ACTIONS(3), 1,
      sym_silly,
    ACTIONS(345), 1,
      sym_section_name,
  [1930] = 2,
    ACTIONS(3), 1,
      sym_silly,
    ACTIONS(347), 1,
      sym_field_value,
  [1937] = 2,
    ACTIONS(3), 1,
      sym_silly,
    ACTIONS(349), 1,
      anon_sym_COLON,
  [1944] = 2,
    ACTIONS(3), 1,
      sym_silly,
    ACTIONS(351), 1,
      sym_field_value,
  [1951] = 2,
    ACTIONS(3), 1,
      sym_silly,
    ACTIONS(353), 1,
      sym_field_value,
  [1958] = 2,
    ACTIONS(3), 1,
      sym_silly,
    ACTIONS(355), 1,
      sym_spec_version,
  [1965] = 2,
    ACTIONS(3), 1,
      sym_silly,
    ACTIONS(357), 1,
      anon_sym_COLON,
  [1972] = 2,
    ACTIONS(3), 1,
      sym_silly,
    ACTIONS(359), 1,
      ts_builtin_sym_end,
  [1979] = 2,
    ACTIONS(3), 1,
      sym_silly,
    ACTIONS(361), 1,
      sym_field_value,
  [1986] = 2,
    ACTIONS(3), 1,
      sym_silly,
    ACTIONS(363), 1,
      anon_sym_COLON,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 44,
  [SMALL_STATE(4)] = 88,
  [SMALL_STATE(5)] = 132,
  [SMALL_STATE(6)] = 176,
  [SMALL_STATE(7)] = 202,
  [SMALL_STATE(8)] = 228,
  [SMALL_STATE(9)] = 248,
  [SMALL_STATE(10)] = 268,
  [SMALL_STATE(11)] = 293,
  [SMALL_STATE(12)] = 308,
  [SMALL_STATE(13)] = 323,
  [SMALL_STATE(14)] = 338,
  [SMALL_STATE(15)] = 353,
  [SMALL_STATE(16)] = 368,
  [SMALL_STATE(17)] = 383,
  [SMALL_STATE(18)] = 408,
  [SMALL_STATE(19)] = 425,
  [SMALL_STATE(20)] = 440,
  [SMALL_STATE(21)] = 471,
  [SMALL_STATE(22)] = 486,
  [SMALL_STATE(23)] = 503,
  [SMALL_STATE(24)] = 518,
  [SMALL_STATE(25)] = 533,
  [SMALL_STATE(26)] = 548,
  [SMALL_STATE(27)] = 563,
  [SMALL_STATE(28)] = 578,
  [SMALL_STATE(29)] = 593,
  [SMALL_STATE(30)] = 608,
  [SMALL_STATE(31)] = 623,
  [SMALL_STATE(32)] = 638,
  [SMALL_STATE(33)] = 653,
  [SMALL_STATE(34)] = 670,
  [SMALL_STATE(35)] = 685,
  [SMALL_STATE(36)] = 711,
  [SMALL_STATE(37)] = 737,
  [SMALL_STATE(38)] = 757,
  [SMALL_STATE(39)] = 783,
  [SMALL_STATE(40)] = 809,
  [SMALL_STATE(41)] = 835,
  [SMALL_STATE(42)] = 861,
  [SMALL_STATE(43)] = 884,
  [SMALL_STATE(44)] = 907,
  [SMALL_STATE(45)] = 930,
  [SMALL_STATE(46)] = 953,
  [SMALL_STATE(47)] = 976,
  [SMALL_STATE(48)] = 999,
  [SMALL_STATE(49)] = 1022,
  [SMALL_STATE(50)] = 1036,
  [SMALL_STATE(51)] = 1050,
  [SMALL_STATE(52)] = 1064,
  [SMALL_STATE(53)] = 1078,
  [SMALL_STATE(54)] = 1098,
  [SMALL_STATE(55)] = 1117,
  [SMALL_STATE(56)] = 1134,
  [SMALL_STATE(57)] = 1151,
  [SMALL_STATE(58)] = 1170,
  [SMALL_STATE(59)] = 1187,
  [SMALL_STATE(60)] = 1202,
  [SMALL_STATE(61)] = 1218,
  [SMALL_STATE(62)] = 1232,
  [SMALL_STATE(63)] = 1244,
  [SMALL_STATE(64)] = 1256,
  [SMALL_STATE(65)] = 1268,
  [SMALL_STATE(66)] = 1284,
  [SMALL_STATE(67)] = 1296,
  [SMALL_STATE(68)] = 1310,
  [SMALL_STATE(69)] = 1322,
  [SMALL_STATE(70)] = 1336,
  [SMALL_STATE(71)] = 1348,
  [SMALL_STATE(72)] = 1364,
  [SMALL_STATE(73)] = 1378,
  [SMALL_STATE(74)] = 1390,
  [SMALL_STATE(75)] = 1406,
  [SMALL_STATE(76)] = 1418,
  [SMALL_STATE(77)] = 1431,
  [SMALL_STATE(78)] = 1444,
  [SMALL_STATE(79)] = 1457,
  [SMALL_STATE(80)] = 1470,
  [SMALL_STATE(81)] = 1483,
  [SMALL_STATE(82)] = 1496,
  [SMALL_STATE(83)] = 1509,
  [SMALL_STATE(84)] = 1518,
  [SMALL_STATE(85)] = 1531,
  [SMALL_STATE(86)] = 1544,
  [SMALL_STATE(87)] = 1553,
  [SMALL_STATE(88)] = 1566,
  [SMALL_STATE(89)] = 1579,
  [SMALL_STATE(90)] = 1592,
  [SMALL_STATE(91)] = 1605,
  [SMALL_STATE(92)] = 1618,
  [SMALL_STATE(93)] = 1628,
  [SMALL_STATE(94)] = 1638,
  [SMALL_STATE(95)] = 1648,
  [SMALL_STATE(96)] = 1658,
  [SMALL_STATE(97)] = 1668,
  [SMALL_STATE(98)] = 1678,
  [SMALL_STATE(99)] = 1688,
  [SMALL_STATE(100)] = 1698,
  [SMALL_STATE(101)] = 1708,
  [SMALL_STATE(102)] = 1716,
  [SMALL_STATE(103)] = 1724,
  [SMALL_STATE(104)] = 1734,
  [SMALL_STATE(105)] = 1744,
  [SMALL_STATE(106)] = 1754,
  [SMALL_STATE(107)] = 1764,
  [SMALL_STATE(108)] = 1774,
  [SMALL_STATE(109)] = 1784,
  [SMALL_STATE(110)] = 1794,
  [SMALL_STATE(111)] = 1804,
  [SMALL_STATE(112)] = 1811,
  [SMALL_STATE(113)] = 1818,
  [SMALL_STATE(114)] = 1825,
  [SMALL_STATE(115)] = 1832,
  [SMALL_STATE(116)] = 1839,
  [SMALL_STATE(117)] = 1846,
  [SMALL_STATE(118)] = 1853,
  [SMALL_STATE(119)] = 1860,
  [SMALL_STATE(120)] = 1867,
  [SMALL_STATE(121)] = 1874,
  [SMALL_STATE(122)] = 1881,
  [SMALL_STATE(123)] = 1888,
  [SMALL_STATE(124)] = 1895,
  [SMALL_STATE(125)] = 1902,
  [SMALL_STATE(126)] = 1909,
  [SMALL_STATE(127)] = 1916,
  [SMALL_STATE(128)] = 1923,
  [SMALL_STATE(129)] = 1930,
  [SMALL_STATE(130)] = 1937,
  [SMALL_STATE(131)] = 1944,
  [SMALL_STATE(132)] = 1951,
  [SMALL_STATE(133)] = 1958,
  [SMALL_STATE(134)] = 1965,
  [SMALL_STATE(135)] = 1972,
  [SMALL_STATE(136)] = 1979,
  [SMALL_STATE(137)] = 1986,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sections_repeat1, 2),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sections_repeat1, 2), SHIFT_REPEAT(128),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sections_repeat1, 2), SHIFT_REPEAT(126),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sections_repeat1, 2), SHIFT_REPEAT(123),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sections_repeat1, 2), SHIFT_REPEAT(121),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sections_repeat1, 2), SHIFT_REPEAT(87),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sections_repeat1, 2), SHIFT_REPEAT(118),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sections_repeat1, 2), SHIFT_REPEAT(116),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sections_repeat1, 2), SHIFT_REPEAT(20),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sections, 1),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_sections, 1), SHIFT(20),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_properties_repeat1, 2),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_properties_repeat1, 2), SHIFT_REPEAT(65),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_properties_repeat1, 2), SHIFT_REPEAT(137),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_properties, 1),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_properties, 1), SHIFT(65),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 3),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 3),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_cabal_repeat1, 2),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cabal_repeat1, 2), SHIFT_REPEAT(9),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional, 2),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional, 2),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_executable, 3),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_suite, 4),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_suite, 3),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_repository, 3),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_library, 3),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_or_conditional_block, 3),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional, 1),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional, 1),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 6),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 6),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag, 3),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_executable, 4),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_properties_repeat1, 2),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_repository, 4),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_block, 4),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_common, 3),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag, 4),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_benchmark, 3),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_common, 4),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_block, 3),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_or_conditional_block, 4),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_library, 4),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_benchmark, 4),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 7),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 7),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_library, 2),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conditional_repeat1, 2),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_conditional_repeat1, 2),
  [168] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_conditional_repeat1, 2), SHIFT_REPEAT(127),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [189] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_property_or_conditional_block_repeat1, 2), SHIFT_REPEAT(130),
  [192] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_property_or_conditional_block_repeat1, 2), SHIFT_REPEAT(111),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_property_or_conditional_block_repeat1, 2),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition_elseif, 3),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_condition_elseif, 3),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition_if, 3),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_condition_if, 3),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property_or_conditional_block, 3),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property_or_conditional_block, 4),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_property_or_conditional_block_repeat1, 1),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_property_or_conditional_block_repeat1, 1),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_property_or_conditional_block_repeat1, 2),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [227] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cabal_repeat1, 2), SHIFT_REPEAT(58),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_cabal_repeat1, 2),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [236] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cabal_repeat1, 2), SHIFT_REPEAT(61),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional, 3),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional, 3),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [245] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cabal_repeat1, 2), SHIFT_REPEAT(67),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_property_block_repeat1, 1),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_property_block_repeat1, 2),
  [258] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_property_block_repeat1, 2), SHIFT_REPEAT(134),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition_else, 2),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_condition_else, 2),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_repeat1, 2),
  [267] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_repeat1, 2), SHIFT_REPEAT(129),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cabal, 4),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cabal, 3),
  [274] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cabal_repeat1, 2), SHIFT_REPEAT(79),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cabal, 2),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cabal_version, 3),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [359] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
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
