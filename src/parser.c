#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 134
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 44
#define ALIAS_COUNT 0
#define TOKEN_COUNT 19
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 5

enum ts_symbol_identifiers {
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
  sym_cabal = 19,
  sym_cabal_version = 20,
  sym_properties = 21,
  sym_sections = 22,
  sym_benchmark = 23,
  sym_common = 24,
  sym_executable = 25,
  sym_flag = 26,
  sym_library = 27,
  sym_source_repository = 28,
  sym_test_suite = 29,
  sym_property_block = 30,
  sym_field = 31,
  sym_property_or_conditional_block = 32,
  sym_conditional = 33,
  sym_condition_if = 34,
  sym_condition_elseif = 35,
  sym_condition_else = 36,
  aux_sym_cabal_repeat1 = 37,
  aux_sym_properties_repeat1 = 38,
  aux_sym_sections_repeat1 = 39,
  aux_sym_property_block_repeat1 = 40,
  aux_sym_field_repeat1 = 41,
  aux_sym_property_or_conditional_block_repeat1 = 42,
  aux_sym_conditional_repeat1 = 43,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_cabal_DASHversion] = "cabal-version",
  [anon_sym_COLON] = ":",
  [sym_spec_version] = "spec_version",
  [anon_sym_benchmark] = "section_type",
  [anon_sym_common] = "section_type",
  [anon_sym_executable] = "section_type",
  [anon_sym_flag] = "section_type",
  [anon_sym_library] = "section_type",
  [anon_sym_source_DASHrepository] = "section_type",
  [anon_sym_test_DASHsuite] = "section_type",
  [sym_section_name] = "section_name",
  [sym_comment] = "comment",
  [sym_field_name] = "field_name",
  [sym_field_value] = "field_value",
  [anon_sym_if] = "if",
  [anon_sym_elseif] = "elseif",
  [anon_sym_else] = "else",
  [sym_condition] = "condition",
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
  [anon_sym_common] = anon_sym_benchmark,
  [anon_sym_executable] = anon_sym_benchmark,
  [anon_sym_flag] = anon_sym_benchmark,
  [anon_sym_library] = anon_sym_benchmark,
  [anon_sym_source_DASHrepository] = anon_sym_benchmark,
  [anon_sym_test_DASHsuite] = anon_sym_benchmark,
  [sym_section_name] = sym_section_name,
  [sym_comment] = sym_comment,
  [sym_field_name] = sym_field_name,
  [sym_field_value] = sym_field_value,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_elseif] = anon_sym_elseif,
  [anon_sym_else] = anon_sym_else,
  [sym_condition] = sym_condition,
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
    .named = true,
  },
  [anon_sym_common] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_executable] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_flag] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_library] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_source_DASHrepository] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_test_DASHsuite] = {
    .visible = true,
    .named = true,
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

enum ts_field_identifiers {
  field_name = 1,
  field_properties = 2,
  field_type = 3,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_name] = "name",
  [field_properties] = "properties",
  [field_type] = "type",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 3},
  [3] = {.index = 5, .length = 2},
  [4] = {.index = 7, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_properties, 1},
    {field_type, 0},
  [2] =
    {field_name, 1},
    {field_properties, 2},
    {field_type, 0},
  [5] =
    {field_properties, 2},
    {field_type, 1},
  [7] =
    {field_name, 2},
    {field_properties, 3},
    {field_type, 1},
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
  [11] = 9,
  [12] = 10,
  [13] = 7,
  [14] = 14,
  [15] = 6,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 8,
  [20] = 8,
  [21] = 7,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 16,
  [27] = 27,
  [28] = 28,
  [29] = 18,
  [30] = 30,
  [31] = 31,
  [32] = 17,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 22,
  [39] = 16,
  [40] = 17,
  [41] = 41,
  [42] = 24,
  [43] = 18,
  [44] = 23,
  [45] = 25,
  [46] = 46,
  [47] = 24,
  [48] = 30,
  [49] = 18,
  [50] = 31,
  [51] = 17,
  [52] = 52,
  [53] = 16,
  [54] = 22,
  [55] = 33,
  [56] = 22,
  [57] = 57,
  [58] = 58,
  [59] = 24,
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
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 65,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 86,
  [88] = 86,
  [89] = 89,
  [90] = 90,
  [91] = 91,
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
  [102] = 22,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 22,
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
  [125] = 112,
  [126] = 126,
  [127] = 127,
  [128] = 112,
  [129] = 129,
  [130] = 112,
  [131] = 110,
  [132] = 110,
  [133] = 110,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(92);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == 'b') ADVANCE(75);
      if (lookahead == 'c') ADVANCE(74);
      if (lookahead == 'e') ADVANCE(73);
      if (lookahead == 'f') ADVANCE(79);
      if (lookahead == 'i') ADVANCE(77);
      if (lookahead == 'l') ADVANCE(78);
      if (lookahead == 's') ADVANCE(81);
      if (lookahead == 't') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(72);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(95);
      if (lookahead == '.') ADVANCE(70);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(95);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(95);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(4)
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(244);
      if (lookahead != 0) ADVANCE(255);
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(120);
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
      if (lookahead == 'e') ADVANCE(102);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(114);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(16);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(7);
      END_STATE();
    case 25:
      if (lookahead == 'g') ADVANCE(105);
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
      if (lookahead == 'k') ADVANCE(96);
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
      if (lookahead == 'n') ADVANCE(99);
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
      if (lookahead == 'y') ADVANCE(108);
      END_STATE();
    case 62:
      if (lookahead == 'y') ADVANCE(111);
      END_STATE();
    case 63:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(126);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 64:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(64)
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == 'c') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 65:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(65)
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == '_') ADVANCE(84);
      if (lookahead == 'i') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(63);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 66:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(66)
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == 'i') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 67:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(67)
      if (lookahead == '-') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 68:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(68)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(71);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 72:
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      if (lookahead == '.') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      END_STATE();
    case 73:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'k') ||
          ('m' <= lookahead && lookahead <= 'w') ||
          lookahead == 'y' ||
          lookahead == 'z') ADVANCE(238);
      if (lookahead == 'l') ADVANCE(202);
      if (lookahead == 'x') ADVANCE(143);
      END_STATE();
    case 74:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      if (lookahead == 'a') ADVANCE(129);
      if (lookahead == 'o') ADVANCE(169);
      END_STATE();
    case 75:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      if (lookahead == 'e') ADVANCE(174);
      END_STATE();
    case 76:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      if (lookahead == 'e') ADVANCE(201);
      END_STATE();
    case 77:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'e') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      if (lookahead == 'f') ADVANCE(257);
      END_STATE();
    case 78:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      if (lookahead == 'i') ADVANCE(128);
      END_STATE();
    case 79:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'k') ||
          ('m' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      if (lookahead == 'l') ADVANCE(229);
      END_STATE();
    case 80:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      if (lookahead == 'o') ADVANCE(169);
      END_STATE();
    case 81:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      if (lookahead == 'o') ADVANCE(219);
      END_STATE();
    case 82:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'w') ||
          lookahead == 'y' ||
          lookahead == 'z') ADVANCE(238);
      if (lookahead == 'x') ADVANCE(143);
      END_STATE();
    case 83:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      if (lookahead == 'a') ADVANCE(129);
      END_STATE();
    case 84:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 85:
      if (eof) ADVANCE(92);
      if (lookahead == '\n') SKIP(85)
      if (lookahead == '-') ADVANCE(240);
      if (lookahead == 'b') ADVANCE(246);
      if (lookahead == 'c') ADVANCE(251);
      if (lookahead == 'e') ADVANCE(245);
      if (lookahead == 'f') ADVANCE(250);
      if (lookahead == 'i') ADVANCE(248);
      if (lookahead == 'l') ADVANCE(249);
      if (lookahead == 's') ADVANCE(252);
      if (lookahead == 't') ADVANCE(247);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      if (lookahead != 0) ADVANCE(255);
      END_STATE();
    case 86:
      if (eof) ADVANCE(92);
      if (lookahead == '\n') SKIP(86)
      if (lookahead == '-') ADVANCE(240);
      if (lookahead == 'b') ADVANCE(246);
      if (lookahead == 'c') ADVANCE(251);
      if (lookahead == 'e') ADVANCE(253);
      if (lookahead == 'f') ADVANCE(250);
      if (lookahead == 'l') ADVANCE(249);
      if (lookahead == 's') ADVANCE(252);
      if (lookahead == 't') ADVANCE(247);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      if (lookahead != 0) ADVANCE(255);
      END_STATE();
    case 87:
      if (eof) ADVANCE(92);
      if (lookahead == '\n') SKIP(87)
      if (lookahead == '-') ADVANCE(240);
      if (lookahead == 'b') ADVANCE(246);
      if (lookahead == 'c') ADVANCE(251);
      if (lookahead == 'e') ADVANCE(253);
      if (lookahead == 'f') ADVANCE(250);
      if (lookahead == 'i') ADVANCE(248);
      if (lookahead == 'l') ADVANCE(249);
      if (lookahead == 's') ADVANCE(252);
      if (lookahead == 't') ADVANCE(247);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      if (lookahead != 0) ADVANCE(255);
      END_STATE();
    case 88:
      if (eof) ADVANCE(92);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(88)
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
    case 89:
      if (eof) ADVANCE(92);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(89)
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == 'b') ADVANCE(75);
      if (lookahead == 'c') ADVANCE(80);
      if (lookahead == 'e') ADVANCE(73);
      if (lookahead == 'f') ADVANCE(79);
      if (lookahead == 'i') ADVANCE(77);
      if (lookahead == 'l') ADVANCE(78);
      if (lookahead == 's') ADVANCE(81);
      if (lookahead == 't') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 90:
      if (eof) ADVANCE(92);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(90)
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == 'b') ADVANCE(75);
      if (lookahead == 'c') ADVANCE(80);
      if (lookahead == 'e') ADVANCE(82);
      if (lookahead == 'f') ADVANCE(79);
      if (lookahead == 'l') ADVANCE(78);
      if (lookahead == 's') ADVANCE(81);
      if (lookahead == 't') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 91:
      if (eof) ADVANCE(92);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(91)
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == 'b') ADVANCE(75);
      if (lookahead == 'c') ADVANCE(80);
      if (lookahead == 'e') ADVANCE(82);
      if (lookahead == 'f') ADVANCE(79);
      if (lookahead == 'i') ADVANCE(77);
      if (lookahead == 'l') ADVANCE(78);
      if (lookahead == 's') ADVANCE(81);
      if (lookahead == 't') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_cabal_DASHversion);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_spec_version);
      if (lookahead == '\n') ADVANCE(95);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(2);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_benchmark);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_benchmark);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_benchmark);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(255);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_common);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_common);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_common);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(255);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_executable);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_executable);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_executable);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(255);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_flag);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_flag);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_flag);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(255);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_library);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_library);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_library);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(255);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_source_DASHrepository);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_source_DASHrepository);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_source_DASHrepository);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(255);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_test_DASHsuite);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_test_DASHsuite);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_test_DASHsuite);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(255);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == '-') ADVANCE(126);
      if (lookahead == 'f') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == '-') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == '-') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(120);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(255);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(255);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(126);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      if (lookahead == '.') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'a' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      if (lookahead == 'b') ADVANCE(191);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'a' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      if (lookahead == 'b') ADVANCE(230);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'a' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      if (lookahead == 'b') ADVANCE(166);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'a' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      if (lookahead == 'b') ADVANCE(197);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(255);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'a' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      if (lookahead == 'b') ADVANCE(167);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(255);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'a' ||
          lookahead == 'b' ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      if (lookahead == 'c') ADVANCE(156);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'a' ||
          lookahead == 'b' ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      if (lookahead == 'c') ADVANCE(220);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'a' ||
          lookahead == 'b' ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      if (lookahead == 'c') ADVANCE(144);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'a' ||
          lookahead == 'b' ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      if (lookahead == 'c') ADVANCE(157);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(255);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'a' ||
          lookahead == 'b' ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      if (lookahead == 'c') ADVANCE(223);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(255);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'a' ||
          lookahead == 'b' ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      if (lookahead == 'c') ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(255);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      if (lookahead == 'e') ADVANCE(261);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      if (lookahead == 'e') ADVANCE(186);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      if (lookahead == 'e') ADVANCE(103);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      if (lookahead == 'e') ADVANCE(115);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      if (lookahead == 'e') ADVANCE(134);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      if (lookahead == 'e') ADVANCE(124);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      if (lookahead == 'e') ADVANCE(193);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      if (lookahead == 'e') ADVANCE(262);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(255);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      if (lookahead == 'e') ADVANCE(187);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(255);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      if (lookahead == 'e') ADVANCE(104);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(255);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      if (lookahead == 'e') ADVANCE(116);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(255);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      if (lookahead == 'e') ADVANCE(137);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(255);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      if (lookahead == 'e') ADVANCE(125);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(255);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'e') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      if (lookahead == 'f') ADVANCE(259);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'e') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      if (lookahead == 'f') ADVANCE(260);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(255);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f') ||
          ('h' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      if (lookahead == 'g') ADVANCE(106);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f') ||
          ('h' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      if (lookahead == 'g') ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(255);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'g') ||
          ('i' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      if (lookahead == 'h') ADVANCE(170);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'g') ||
          ('i' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      if (lookahead == 'h') ADVANCE(173);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(255);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      if (lookahead == 'i') ADVANCE(213);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      if (lookahead == 'i') ADVANCE(211);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      if (lookahead == 'i') ADVANCE(180);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      if (lookahead == 'i') ADVANCE(217);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(255);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      if (lookahead == 'i') ADVANCE(216);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(255);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'j') ||
          ('l' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      if (lookahead == 'k') ADVANCE(97);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'j') ||
          ('l' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      if (lookahead == 'k') ADVANCE(98);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(255);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'k') ||
          ('m' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      if (lookahead == 'l') ADVANCE(121);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'k') ||
          ('m' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      if (lookahead == 'l') ADVANCE(141);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'k') ||
          ('m' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      if (lookahead == 'l') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(255);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'l') ||
          ('n' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      if (lookahead == 'm') ADVANCE(179);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'l') ||
          ('n' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      if (lookahead == 'm') ADVANCE(168);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'l') ||
          ('n' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      if (lookahead == 'm') ADVANCE(233);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'l') ||
          ('n' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      if (lookahead == 'm') ADVANCE(183);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(255);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'l') ||
          ('n' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      if (lookahead == 'm') ADVANCE(171);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(255);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'l') ||
          ('n' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      if (lookahead == 'm') ADVANCE(237);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(255);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      if (lookahead == 'n') ADVANCE(133);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      if (lookahead == 'n') ADVANCE(100);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      if (lookahead == 'n') ADVANCE(93);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      if (lookahead == 'n') ADVANCE(136);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(255);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      if (lookahead == 'n') ADVANCE(101);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(255);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      if (lookahead == 'o') ADVANCE(175);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      if (lookahead == 'o') ADVANCE(176);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      if (lookahead == 'o') ADVANCE(205);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      if (lookahead == 'o') ADVANCE(190);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      if (lookahead == 'o') ADVANCE(178);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(255);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      if (lookahead == 'o') ADVANCE(209);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(255);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      if (lookahead == 'o') ADVANCE(198);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(255);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'o') ||
          ('q' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      if (lookahead == 'p') ADVANCE(181);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'o') ||
          ('q' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      if (lookahead == 'p') ADVANCE(184);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(255);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      if (lookahead == 'r') ADVANCE(225);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      if (lookahead == 'r') ADVANCE(163);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      if (lookahead == 'r') ADVANCE(226);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      if (lookahead == 'r') ADVANCE(232);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      if (lookahead == 'r') ADVANCE(135);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      if (lookahead == 'r') ADVANCE(203);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      if (lookahead == 'r') ADVANCE(140);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      if (lookahead == 'r') ADVANCE(227);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(255);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      if (lookahead == 'r') ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(255);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      if (lookahead == 'r') ADVANCE(236);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(255);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      if (lookahead == 'r') ADVANCE(228);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(255);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      if (lookahead == 'r') ADVANCE(138);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(255);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      if (lookahead == 'r') ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(255);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      if (lookahead == 's') ADVANCE(210);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      if (lookahead == 's') ADVANCE(139);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      if (lookahead == 's') ADVANCE(160);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      if (lookahead == 's') ADVANCE(218);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      if (lookahead == 's') ADVANCE(159);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      if (lookahead == 's') ADVANCE(214);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(255);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      if (lookahead == 's') ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(255);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      if (lookahead == 's') ADVANCE(221);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(255);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      if (lookahead == 's') ADVANCE(162);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(255);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      if (lookahead == 't') ADVANCE(122);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      if (lookahead == 't') ADVANCE(182);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      if (lookahead == 't') ADVANCE(231);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      if (lookahead == 't') ADVANCE(142);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      if (lookahead == 't') ADVANCE(123);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(255);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      if (lookahead == 't') ADVANCE(235);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(255);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      if (lookahead == 't') ADVANCE(185);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(255);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      if (lookahead == 't') ADVANCE(149);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(255);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 't') ||
          ('v' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      if (lookahead == 'u') ADVANCE(158);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 't') ||
          ('v' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      if (lookahead == 'u') ADVANCE(192);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 't') ||
          ('v' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      if (lookahead == 'u') ADVANCE(212);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 't') ||
          ('v' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      if (lookahead == 'u') ADVANCE(161);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(255);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 't') ||
          ('v' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      if (lookahead == 'u') ADVANCE(199);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(255);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 't') ||
          ('v' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      if (lookahead == 'u') ADVANCE(215);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(255);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'u') ||
          ('w' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      if (lookahead == 'v') ADVANCE(145);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'x') ||
          lookahead == 'z') ADVANCE(238);
      if (lookahead == 'y') ADVANCE(109);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'x') ||
          lookahead == 'z') ADVANCE(238);
      if (lookahead == 'y') ADVANCE(112);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'x') ||
          lookahead == 'z') ADVANCE(239);
      if (lookahead == 'y') ADVANCE(110);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(255);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'x') ||
          lookahead == 'z') ADVANCE(239);
      if (lookahead == 'y') ADVANCE(113);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(255);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      if (lookahead == 'a') ADVANCE(154);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      if (lookahead == 'a') ADVANCE(165);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      if (lookahead == 'a') ADVANCE(130);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      if (lookahead == 'a') ADVANCE(188);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      if (lookahead == 'a') ADVANCE(189);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      if (lookahead == 'a') ADVANCE(155);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(255);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      if (lookahead == 'a') ADVANCE(132);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(255);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      if (lookahead == 'a') ADVANCE(195);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(255);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      if (lookahead == 'a') ADVANCE(196);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(255);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(255);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_field_value);
      if (lookahead == '-') ADVANCE(120);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(255);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_field_value);
      if (lookahead == '-') ADVANCE(240);
      if (lookahead == 'b') ADVANCE(246);
      if (lookahead == 'c') ADVANCE(251);
      if (lookahead == 'e') ADVANCE(245);
      if (lookahead == 'f') ADVANCE(250);
      if (lookahead == 'i') ADVANCE(248);
      if (lookahead == 'l') ADVANCE(249);
      if (lookahead == 's') ADVANCE(252);
      if (lookahead == 't') ADVANCE(247);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(255);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_field_value);
      if (lookahead == '-') ADVANCE(240);
      if (lookahead == 'b') ADVANCE(246);
      if (lookahead == 'c') ADVANCE(251);
      if (lookahead == 'e') ADVANCE(253);
      if (lookahead == 'f') ADVANCE(250);
      if (lookahead == 'i') ADVANCE(248);
      if (lookahead == 'l') ADVANCE(249);
      if (lookahead == 's') ADVANCE(252);
      if (lookahead == 't') ADVANCE(247);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(255);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_field_value);
      if (lookahead == '-') ADVANCE(240);
      if (lookahead == 'b') ADVANCE(246);
      if (lookahead == 'c') ADVANCE(251);
      if (lookahead == 'e') ADVANCE(253);
      if (lookahead == 'f') ADVANCE(250);
      if (lookahead == 'l') ADVANCE(249);
      if (lookahead == 's') ADVANCE(252);
      if (lookahead == 't') ADVANCE(247);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(255);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_field_value);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(244);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(255);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_field_value);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'k') ||
          ('m' <= lookahead && lookahead <= 'w') ||
          lookahead == 'y' ||
          lookahead == 'z') ADVANCE(239);
      if (lookahead == 'l') ADVANCE(207);
      if (lookahead == 'x') ADVANCE(150);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(255);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_field_value);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      if (lookahead == 'e') ADVANCE(177);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(255);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_field_value);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      if (lookahead == 'e') ADVANCE(206);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(255);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_field_value);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'e') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      if (lookahead == 'f') ADVANCE(258);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(255);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_field_value);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      if (lookahead == 'i') ADVANCE(131);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(255);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_field_value);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'k') ||
          ('m' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      if (lookahead == 'l') ADVANCE(234);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(255);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_field_value);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      if (lookahead == 'o') ADVANCE(172);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(255);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_field_value);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      if (lookahead == 'o') ADVANCE(222);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(255);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_field_value);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'w') ||
          lookahead == 'y' ||
          lookahead == 'z') ADVANCE(239);
      if (lookahead == 'x') ADVANCE(150);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(255);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_field_value);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(255);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_field_value);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(255);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '-') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(255);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_elseif);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_elseif);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(255);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      if (lookahead == 'i') ADVANCE(152);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      if (lookahead == 'i') ADVANCE(153);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(255);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_condition);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(263);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(264);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_condition);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(264);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 64},
  [2] = {.lex_state = 88},
  [3] = {.lex_state = 88},
  [4] = {.lex_state = 88},
  [5] = {.lex_state = 88},
  [6] = {.lex_state = 89},
  [7] = {.lex_state = 89},
  [8] = {.lex_state = 89},
  [9] = {.lex_state = 89},
  [10] = {.lex_state = 89},
  [11] = {.lex_state = 89},
  [12] = {.lex_state = 89},
  [13] = {.lex_state = 91},
  [14] = {.lex_state = 89},
  [15] = {.lex_state = 91},
  [16] = {.lex_state = 85},
  [17] = {.lex_state = 85},
  [18] = {.lex_state = 85},
  [19] = {.lex_state = 91},
  [20] = {.lex_state = 91},
  [21] = {.lex_state = 91},
  [22] = {.lex_state = 89},
  [23] = {.lex_state = 89},
  [24] = {.lex_state = 85},
  [25] = {.lex_state = 89},
  [26] = {.lex_state = 87},
  [27] = {.lex_state = 89},
  [28] = {.lex_state = 89},
  [29] = {.lex_state = 87},
  [30] = {.lex_state = 89},
  [31] = {.lex_state = 89},
  [32] = {.lex_state = 87},
  [33] = {.lex_state = 89},
  [34] = {.lex_state = 90},
  [35] = {.lex_state = 90},
  [36] = {.lex_state = 90},
  [37] = {.lex_state = 90},
  [38] = {.lex_state = 91},
  [39] = {.lex_state = 86},
  [40] = {.lex_state = 86},
  [41] = {.lex_state = 90},
  [42] = {.lex_state = 87},
  [43] = {.lex_state = 86},
  [44] = {.lex_state = 91},
  [45] = {.lex_state = 91},
  [46] = {.lex_state = 90},
  [47] = {.lex_state = 86},
  [48] = {.lex_state = 91},
  [49] = {.lex_state = 86},
  [50] = {.lex_state = 91},
  [51] = {.lex_state = 86},
  [52] = {.lex_state = 90},
  [53] = {.lex_state = 86},
  [54] = {.lex_state = 90},
  [55] = {.lex_state = 91},
  [56] = {.lex_state = 88},
  [57] = {.lex_state = 65},
  [58] = {.lex_state = 65},
  [59] = {.lex_state = 86},
  [60] = {.lex_state = 88},
  [61] = {.lex_state = 90},
  [62] = {.lex_state = 88},
  [63] = {.lex_state = 66},
  [64] = {.lex_state = 88},
  [65] = {.lex_state = 66},
  [66] = {.lex_state = 88},
  [67] = {.lex_state = 88},
  [68] = {.lex_state = 88},
  [69] = {.lex_state = 88},
  [70] = {.lex_state = 88},
  [71] = {.lex_state = 88},
  [72] = {.lex_state = 66},
  [73] = {.lex_state = 88},
  [74] = {.lex_state = 88},
  [75] = {.lex_state = 88},
  [76] = {.lex_state = 66},
  [77] = {.lex_state = 66},
  [78] = {.lex_state = 66},
  [79] = {.lex_state = 66},
  [80] = {.lex_state = 88},
  [81] = {.lex_state = 88},
  [82] = {.lex_state = 66},
  [83] = {.lex_state = 88},
  [84] = {.lex_state = 88},
  [85] = {.lex_state = 88},
  [86] = {.lex_state = 66},
  [87] = {.lex_state = 66},
  [88] = {.lex_state = 66},
  [89] = {.lex_state = 67},
  [90] = {.lex_state = 67},
  [91] = {.lex_state = 67},
  [92] = {.lex_state = 67},
  [93] = {.lex_state = 67},
  [94] = {.lex_state = 67},
  [95] = {.lex_state = 67},
  [96] = {.lex_state = 67},
  [97] = {.lex_state = 67},
  [98] = {.lex_state = 67},
  [99] = {.lex_state = 67},
  [100] = {.lex_state = 67},
  [101] = {.lex_state = 67},
  [102] = {.lex_state = 66},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 67},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 67},
  [109] = {.lex_state = 88},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 68},
  [112] = {.lex_state = 4},
  [113] = {.lex_state = 68},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 263},
  [116] = {.lex_state = 263},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 68},
  [119] = {.lex_state = 68},
  [120] = {.lex_state = 68},
  [121] = {.lex_state = 68},
  [122] = {.lex_state = 68},
  [123] = {.lex_state = 68},
  [124] = {.lex_state = 68},
  [125] = {.lex_state = 4},
  [126] = {.lex_state = 68},
  [127] = {.lex_state = 68},
  [128] = {.lex_state = 4},
  [129] = {.lex_state = 68},
  [130] = {.lex_state = 4},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
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
  },
  [1] = {
    [sym_cabal] = STATE(114),
    [sym_cabal_version] = STATE(89),
    [sym_properties] = STATE(2),
    [sym_field] = STATE(34),
    [aux_sym_cabal_repeat1] = STATE(101),
    [aux_sym_properties_repeat1] = STATE(34),
    [anon_sym_cabal_DASHversion] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [sym_field_name] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 11,
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
      sym_comment,
    STATE(74), 1,
      aux_sym_cabal_repeat1,
    STATE(105), 1,
      sym_sections,
    STATE(5), 8,
      sym_benchmark,
      sym_common,
      sym_executable,
      sym_flag,
      sym_library,
      sym_source_repository,
      sym_test_suite,
      aux_sym_sections_repeat1,
  [41] = 11,
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
    ACTIONS(48), 1,
      sym_comment,
    STATE(74), 1,
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
  [82] = 11,
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
      sym_comment,
    STATE(74), 1,
      aux_sym_cabal_repeat1,
    STATE(107), 1,
      sym_sections,
    STATE(5), 8,
      sym_benchmark,
      sym_common,
      sym_executable,
      sym_flag,
      sym_library,
      sym_source_repository,
      sym_test_suite,
      aux_sym_sections_repeat1,
  [123] = 11,
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
    ACTIONS(51), 1,
      ts_builtin_sym_end,
    ACTIONS(53), 1,
      sym_comment,
    STATE(74), 1,
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
  [164] = 7,
    ACTIONS(60), 1,
      sym_field_name,
    ACTIONS(63), 1,
      anon_sym_if,
    STATE(6), 1,
      aux_sym_property_or_conditional_block_repeat1,
    STATE(11), 1,
      sym_condition_if,
    ACTIONS(56), 2,
      ts_builtin_sym_end,
      sym_comment,
    STATE(23), 2,
      sym_field,
      sym_conditional,
    ACTIONS(58), 9,
      anon_sym_benchmark,
      anon_sym_common,
      anon_sym_executable,
      anon_sym_flag,
      anon_sym_library,
      anon_sym_source_DASHrepository,
      anon_sym_test_DASHsuite,
      anon_sym_elseif,
      anon_sym_else,
  [196] = 7,
    ACTIONS(70), 1,
      sym_field_name,
    ACTIONS(73), 1,
      anon_sym_if,
    STATE(6), 1,
      aux_sym_property_or_conditional_block_repeat1,
    STATE(11), 1,
      sym_condition_if,
    ACTIONS(66), 2,
      ts_builtin_sym_end,
      sym_comment,
    STATE(23), 2,
      sym_field,
      sym_conditional,
    ACTIONS(68), 9,
      anon_sym_benchmark,
      anon_sym_common,
      anon_sym_executable,
      anon_sym_flag,
      anon_sym_library,
      anon_sym_source_DASHrepository,
      anon_sym_test_DASHsuite,
      anon_sym_elseif,
      anon_sym_else,
  [228] = 7,
    ACTIONS(80), 1,
      sym_field_name,
    ACTIONS(83), 1,
      anon_sym_if,
    STATE(6), 1,
      aux_sym_property_or_conditional_block_repeat1,
    STATE(11), 1,
      sym_condition_if,
    ACTIONS(76), 2,
      ts_builtin_sym_end,
      sym_comment,
    STATE(23), 2,
      sym_field,
      sym_conditional,
    ACTIONS(78), 9,
      anon_sym_benchmark,
      anon_sym_common,
      anon_sym_executable,
      anon_sym_flag,
      anon_sym_library,
      anon_sym_source_DASHrepository,
      anon_sym_test_DASHsuite,
      anon_sym_elseif,
      anon_sym_else,
  [260] = 6,
    ACTIONS(90), 1,
      anon_sym_elseif,
    ACTIONS(92), 1,
      anon_sym_else,
    STATE(55), 1,
      sym_condition_else,
    ACTIONS(86), 2,
      ts_builtin_sym_end,
      sym_comment,
    STATE(12), 2,
      sym_condition_elseif,
      aux_sym_conditional_repeat1,
    ACTIONS(88), 9,
      anon_sym_benchmark,
      anon_sym_common,
      anon_sym_executable,
      anon_sym_flag,
      anon_sym_library,
      anon_sym_source_DASHrepository,
      anon_sym_test_DASHsuite,
      sym_field_name,
      anon_sym_if,
  [289] = 6,
    ACTIONS(98), 1,
      anon_sym_elseif,
    ACTIONS(101), 1,
      anon_sym_else,
    STATE(30), 1,
      sym_condition_else,
    ACTIONS(94), 2,
      ts_builtin_sym_end,
      sym_comment,
    STATE(14), 2,
      sym_condition_elseif,
      aux_sym_conditional_repeat1,
    ACTIONS(96), 9,
      anon_sym_benchmark,
      anon_sym_common,
      anon_sym_executable,
      anon_sym_flag,
      anon_sym_library,
      anon_sym_source_DASHrepository,
      anon_sym_test_DASHsuite,
      sym_field_name,
      anon_sym_if,
  [318] = 6,
    ACTIONS(104), 1,
      anon_sym_elseif,
    ACTIONS(107), 1,
      anon_sym_else,
    STATE(33), 1,
      sym_condition_else,
    ACTIONS(86), 2,
      ts_builtin_sym_end,
      sym_comment,
    STATE(10), 2,
      sym_condition_elseif,
      aux_sym_conditional_repeat1,
    ACTIONS(88), 9,
      anon_sym_benchmark,
      anon_sym_common,
      anon_sym_executable,
      anon_sym_flag,
      anon_sym_library,
      anon_sym_source_DASHrepository,
      anon_sym_test_DASHsuite,
      sym_field_name,
      anon_sym_if,
  [347] = 6,
    ACTIONS(90), 1,
      anon_sym_elseif,
    ACTIONS(92), 1,
      anon_sym_else,
    STATE(48), 1,
      sym_condition_else,
    ACTIONS(94), 2,
      ts_builtin_sym_end,
      sym_comment,
    STATE(14), 2,
      sym_condition_elseif,
      aux_sym_conditional_repeat1,
    ACTIONS(96), 9,
      anon_sym_benchmark,
      anon_sym_common,
      anon_sym_executable,
      anon_sym_flag,
      anon_sym_library,
      anon_sym_source_DASHrepository,
      anon_sym_test_DASHsuite,
      sym_field_name,
      anon_sym_if,
  [376] = 7,
    ACTIONS(110), 1,
      sym_field_name,
    ACTIONS(112), 1,
      anon_sym_if,
    STATE(9), 1,
      sym_condition_if,
    STATE(15), 1,
      aux_sym_property_or_conditional_block_repeat1,
    ACTIONS(66), 2,
      ts_builtin_sym_end,
      sym_comment,
    STATE(44), 2,
      sym_field,
      sym_conditional,
    ACTIONS(68), 7,
      anon_sym_benchmark,
      anon_sym_common,
      anon_sym_executable,
      anon_sym_flag,
      anon_sym_library,
      anon_sym_source_DASHrepository,
      anon_sym_test_DASHsuite,
  [406] = 4,
    ACTIONS(118), 1,
      anon_sym_elseif,
    ACTIONS(114), 2,
      ts_builtin_sym_end,
      sym_comment,
    STATE(14), 2,
      sym_condition_elseif,
      aux_sym_conditional_repeat1,
    ACTIONS(116), 10,
      anon_sym_benchmark,
      anon_sym_common,
      anon_sym_executable,
      anon_sym_flag,
      anon_sym_library,
      anon_sym_source_DASHrepository,
      anon_sym_test_DASHsuite,
      sym_field_name,
      anon_sym_if,
      anon_sym_else,
  [430] = 7,
    ACTIONS(63), 1,
      anon_sym_if,
    ACTIONS(121), 1,
      sym_field_name,
    STATE(9), 1,
      sym_condition_if,
    STATE(15), 1,
      aux_sym_property_or_conditional_block_repeat1,
    ACTIONS(56), 2,
      ts_builtin_sym_end,
      sym_comment,
    STATE(44), 2,
      sym_field,
      sym_conditional,
    ACTIONS(58), 7,
      anon_sym_benchmark,
      anon_sym_common,
      anon_sym_executable,
      anon_sym_flag,
      anon_sym_library,
      anon_sym_source_DASHrepository,
      anon_sym_test_DASHsuite,
  [460] = 4,
    ACTIONS(124), 1,
      ts_builtin_sym_end,
    ACTIONS(128), 1,
      sym_field_value,
    STATE(16), 1,
      aux_sym_field_repeat1,
    ACTIONS(126), 12,
      anon_sym_benchmark,
      anon_sym_common,
      anon_sym_executable,
      anon_sym_flag,
      anon_sym_library,
      anon_sym_source_DASHrepository,
      anon_sym_test_DASHsuite,
      sym_comment,
      sym_field_name,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_else,
  [484] = 4,
    ACTIONS(131), 1,
      ts_builtin_sym_end,
    ACTIONS(135), 1,
      sym_field_value,
    STATE(16), 1,
      aux_sym_field_repeat1,
    ACTIONS(133), 12,
      anon_sym_benchmark,
      anon_sym_common,
      anon_sym_executable,
      anon_sym_flag,
      anon_sym_library,
      anon_sym_source_DASHrepository,
      anon_sym_test_DASHsuite,
      sym_comment,
      sym_field_name,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_else,
  [508] = 4,
    ACTIONS(137), 1,
      ts_builtin_sym_end,
    ACTIONS(141), 1,
      sym_field_value,
    STATE(17), 1,
      aux_sym_field_repeat1,
    ACTIONS(139), 12,
      anon_sym_benchmark,
      anon_sym_common,
      anon_sym_executable,
      anon_sym_flag,
      anon_sym_library,
      anon_sym_source_DASHrepository,
      anon_sym_test_DASHsuite,
      sym_comment,
      sym_field_name,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_else,
  [532] = 7,
    ACTIONS(110), 1,
      sym_field_name,
    ACTIONS(112), 1,
      anon_sym_if,
    STATE(9), 1,
      sym_condition_if,
    STATE(15), 1,
      aux_sym_property_or_conditional_block_repeat1,
    ACTIONS(76), 2,
      ts_builtin_sym_end,
      sym_comment,
    STATE(44), 2,
      sym_field,
      sym_conditional,
    ACTIONS(78), 7,
      anon_sym_benchmark,
      anon_sym_common,
      anon_sym_executable,
      anon_sym_flag,
      anon_sym_library,
      anon_sym_source_DASHrepository,
      anon_sym_test_DASHsuite,
  [562] = 7,
    ACTIONS(83), 1,
      anon_sym_if,
    ACTIONS(143), 1,
      sym_field_name,
    STATE(9), 1,
      sym_condition_if,
    STATE(15), 1,
      aux_sym_property_or_conditional_block_repeat1,
    ACTIONS(76), 2,
      ts_builtin_sym_end,
      sym_comment,
    STATE(44), 2,
      sym_field,
      sym_conditional,
    ACTIONS(78), 7,
      anon_sym_benchmark,
      anon_sym_common,
      anon_sym_executable,
      anon_sym_flag,
      anon_sym_library,
      anon_sym_source_DASHrepository,
      anon_sym_test_DASHsuite,
  [592] = 7,
    ACTIONS(73), 1,
      anon_sym_if,
    ACTIONS(146), 1,
      sym_field_name,
    STATE(9), 1,
      sym_condition_if,
    STATE(15), 1,
      aux_sym_property_or_conditional_block_repeat1,
    ACTIONS(66), 2,
      ts_builtin_sym_end,
      sym_comment,
    STATE(44), 2,
      sym_field,
      sym_conditional,
    ACTIONS(68), 7,
      anon_sym_benchmark,
      anon_sym_common,
      anon_sym_executable,
      anon_sym_flag,
      anon_sym_library,
      anon_sym_source_DASHrepository,
      anon_sym_test_DASHsuite,
  [622] = 4,
    ACTIONS(149), 1,
      ts_builtin_sym_end,
    ACTIONS(153), 1,
      sym_comment,
    STATE(22), 1,
      aux_sym_cabal_repeat1,
    ACTIONS(151), 11,
      anon_sym_benchmark,
      anon_sym_common,
      anon_sym_executable,
      anon_sym_flag,
      anon_sym_library,
      anon_sym_source_DASHrepository,
      anon_sym_test_DASHsuite,
      sym_field_name,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_else,
  [645] = 4,
    ACTIONS(156), 1,
      ts_builtin_sym_end,
    ACTIONS(160), 1,
      sym_comment,
    STATE(25), 1,
      aux_sym_cabal_repeat1,
    ACTIONS(158), 11,
      anon_sym_benchmark,
      anon_sym_common,
      anon_sym_executable,
      anon_sym_flag,
      anon_sym_library,
      anon_sym_source_DASHrepository,
      anon_sym_test_DASHsuite,
      sym_field_name,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_else,
  [668] = 3,
    ACTIONS(163), 1,
      ts_builtin_sym_end,
    ACTIONS(167), 1,
      sym_field_value,
    ACTIONS(165), 12,
      anon_sym_benchmark,
      anon_sym_common,
      anon_sym_executable,
      anon_sym_flag,
      anon_sym_library,
      anon_sym_source_DASHrepository,
      anon_sym_test_DASHsuite,
      sym_comment,
      sym_field_name,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_else,
  [689] = 4,
    ACTIONS(56), 1,
      ts_builtin_sym_end,
    ACTIONS(169), 1,
      sym_comment,
    STATE(22), 1,
      aux_sym_cabal_repeat1,
    ACTIONS(58), 11,
      anon_sym_benchmark,
      anon_sym_common,
      anon_sym_executable,
      anon_sym_flag,
      anon_sym_library,
      anon_sym_source_DASHrepository,
      anon_sym_test_DASHsuite,
      sym_field_name,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_else,
  [712] = 4,
    ACTIONS(124), 1,
      ts_builtin_sym_end,
    ACTIONS(172), 1,
      sym_field_value,
    STATE(26), 1,
      aux_sym_field_repeat1,
    ACTIONS(126), 10,
      anon_sym_benchmark,
      anon_sym_common,
      anon_sym_executable,
      anon_sym_flag,
      anon_sym_library,
      anon_sym_source_DASHrepository,
      anon_sym_test_DASHsuite,
      sym_comment,
      sym_field_name,
      anon_sym_if,
  [734] = 2,
    ACTIONS(175), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(177), 11,
      anon_sym_benchmark,
      anon_sym_common,
      anon_sym_executable,
      anon_sym_flag,
      anon_sym_library,
      anon_sym_source_DASHrepository,
      anon_sym_test_DASHsuite,
      sym_field_name,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_else,
  [752] = 2,
    ACTIONS(179), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(181), 11,
      anon_sym_benchmark,
      anon_sym_common,
      anon_sym_executable,
      anon_sym_flag,
      anon_sym_library,
      anon_sym_source_DASHrepository,
      anon_sym_test_DASHsuite,
      sym_field_name,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_else,
  [770] = 4,
    ACTIONS(137), 1,
      ts_builtin_sym_end,
    ACTIONS(183), 1,
      sym_field_value,
    STATE(32), 1,
      aux_sym_field_repeat1,
    ACTIONS(139), 10,
      anon_sym_benchmark,
      anon_sym_common,
      anon_sym_executable,
      anon_sym_flag,
      anon_sym_library,
      anon_sym_source_DASHrepository,
      anon_sym_test_DASHsuite,
      sym_comment,
      sym_field_name,
      anon_sym_if,
  [792] = 2,
    ACTIONS(185), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(187), 11,
      anon_sym_benchmark,
      anon_sym_common,
      anon_sym_executable,
      anon_sym_flag,
      anon_sym_library,
      anon_sym_source_DASHrepository,
      anon_sym_test_DASHsuite,
      sym_field_name,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_else,
  [810] = 2,
    ACTIONS(189), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(191), 11,
      anon_sym_benchmark,
      anon_sym_common,
      anon_sym_executable,
      anon_sym_flag,
      anon_sym_library,
      anon_sym_source_DASHrepository,
      anon_sym_test_DASHsuite,
      sym_field_name,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_else,
  [828] = 4,
    ACTIONS(131), 1,
      ts_builtin_sym_end,
    ACTIONS(193), 1,
      sym_field_value,
    STATE(26), 1,
      aux_sym_field_repeat1,
    ACTIONS(133), 10,
      anon_sym_benchmark,
      anon_sym_common,
      anon_sym_executable,
      anon_sym_flag,
      anon_sym_library,
      anon_sym_source_DASHrepository,
      anon_sym_test_DASHsuite,
      sym_comment,
      sym_field_name,
      anon_sym_if,
  [850] = 2,
    ACTIONS(94), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(96), 11,
      anon_sym_benchmark,
      anon_sym_common,
      anon_sym_executable,
      anon_sym_flag,
      anon_sym_library,
      anon_sym_source_DASHrepository,
      anon_sym_test_DASHsuite,
      sym_field_name,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_else,
  [868] = 5,
    ACTIONS(7), 1,
      sym_field_name,
    ACTIONS(197), 1,
      sym_comment,
    STATE(101), 1,
      aux_sym_cabal_repeat1,
    STATE(36), 2,
      sym_field,
      aux_sym_properties_repeat1,
    ACTIONS(195), 7,
      anon_sym_benchmark,
      anon_sym_common,
      anon_sym_executable,
      anon_sym_flag,
      anon_sym_library,
      anon_sym_source_DASHrepository,
      anon_sym_test_DASHsuite,
  [891] = 5,
    ACTIONS(204), 1,
      sym_field_name,
    STATE(37), 1,
      aux_sym_property_block_repeat1,
    STATE(52), 1,
      sym_field,
    ACTIONS(200), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(202), 7,
      anon_sym_benchmark,
      anon_sym_common,
      anon_sym_executable,
      anon_sym_flag,
      anon_sym_library,
      anon_sym_source_DASHrepository,
      anon_sym_test_DASHsuite,
  [914] = 5,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(211), 1,
      sym_field_name,
    STATE(101), 1,
      aux_sym_cabal_repeat1,
    STATE(36), 2,
      sym_field,
      aux_sym_properties_repeat1,
    ACTIONS(206), 7,
      anon_sym_benchmark,
      anon_sym_common,
      anon_sym_executable,
      anon_sym_flag,
      anon_sym_library,
      anon_sym_source_DASHrepository,
      anon_sym_test_DASHsuite,
  [937] = 5,
    ACTIONS(218), 1,
      sym_field_name,
    STATE(37), 1,
      aux_sym_property_block_repeat1,
    STATE(52), 1,
      sym_field,
    ACTIONS(214), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(216), 7,
      anon_sym_benchmark,
      anon_sym_common,
      anon_sym_executable,
      anon_sym_flag,
      anon_sym_library,
      anon_sym_source_DASHrepository,
      anon_sym_test_DASHsuite,
  [960] = 4,
    ACTIONS(149), 1,
      ts_builtin_sym_end,
    ACTIONS(221), 1,
      sym_comment,
    STATE(38), 1,
      aux_sym_cabal_repeat1,
    ACTIONS(151), 9,
      anon_sym_benchmark,
      anon_sym_common,
      anon_sym_executable,
      anon_sym_flag,
      anon_sym_library,
      anon_sym_source_DASHrepository,
      anon_sym_test_DASHsuite,
      sym_field_name,
      anon_sym_if,
  [981] = 4,
    ACTIONS(124), 1,
      ts_builtin_sym_end,
    ACTIONS(224), 1,
      sym_field_value,
    STATE(39), 1,
      aux_sym_field_repeat1,
    ACTIONS(126), 9,
      anon_sym_benchmark,
      anon_sym_common,
      anon_sym_executable,
      anon_sym_flag,
      anon_sym_library,
      anon_sym_source_DASHrepository,
      anon_sym_test_DASHsuite,
      sym_comment,
      sym_field_name,
  [1002] = 4,
    ACTIONS(131), 1,
      ts_builtin_sym_end,
    ACTIONS(227), 1,
      sym_field_value,
    STATE(39), 1,
      aux_sym_field_repeat1,
    ACTIONS(133), 9,
      anon_sym_benchmark,
      anon_sym_common,
      anon_sym_executable,
      anon_sym_flag,
      anon_sym_library,
      anon_sym_source_DASHrepository,
      anon_sym_test_DASHsuite,
      sym_comment,
      sym_field_name,
  [1023] = 5,
    ACTIONS(204), 1,
      sym_field_name,
    STATE(37), 1,
      aux_sym_property_block_repeat1,
    STATE(52), 1,
      sym_field,
    ACTIONS(229), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(231), 7,
      anon_sym_benchmark,
      anon_sym_common,
      anon_sym_executable,
      anon_sym_flag,
      anon_sym_library,
      anon_sym_source_DASHrepository,
      anon_sym_test_DASHsuite,
  [1046] = 3,
    ACTIONS(163), 1,
      ts_builtin_sym_end,
    ACTIONS(233), 1,
      sym_field_value,
    ACTIONS(165), 10,
      anon_sym_benchmark,
      anon_sym_common,
      anon_sym_executable,
      anon_sym_flag,
      anon_sym_library,
      anon_sym_source_DASHrepository,
      anon_sym_test_DASHsuite,
      sym_comment,
      sym_field_name,
      anon_sym_if,
  [1065] = 4,
    ACTIONS(137), 1,
      ts_builtin_sym_end,
    ACTIONS(235), 1,
      sym_field_value,
    STATE(40), 1,
      aux_sym_field_repeat1,
    ACTIONS(139), 9,
      anon_sym_benchmark,
      anon_sym_common,
      anon_sym_executable,
      anon_sym_flag,
      anon_sym_library,
      anon_sym_source_DASHrepository,
      anon_sym_test_DASHsuite,
      sym_comment,
      sym_field_name,
  [1086] = 4,
    ACTIONS(156), 1,
      ts_builtin_sym_end,
    ACTIONS(237), 1,
      sym_comment,
    STATE(45), 1,
      aux_sym_cabal_repeat1,
    ACTIONS(158), 9,
      anon_sym_benchmark,
      anon_sym_common,
      anon_sym_executable,
      anon_sym_flag,
      anon_sym_library,
      anon_sym_source_DASHrepository,
      anon_sym_test_DASHsuite,
      sym_field_name,
      anon_sym_if,
  [1107] = 4,
    ACTIONS(56), 1,
      ts_builtin_sym_end,
    ACTIONS(240), 1,
      sym_comment,
    STATE(38), 1,
      aux_sym_cabal_repeat1,
    ACTIONS(58), 9,
      anon_sym_benchmark,
      anon_sym_common,
      anon_sym_executable,
      anon_sym_flag,
      anon_sym_library,
      anon_sym_source_DASHrepository,
      anon_sym_test_DASHsuite,
      sym_field_name,
      anon_sym_if,
  [1128] = 4,
    ACTIONS(214), 1,
      ts_builtin_sym_end,
    ACTIONS(243), 1,
      sym_comment,
    STATE(54), 1,
      aux_sym_cabal_repeat1,
    ACTIONS(216), 8,
      anon_sym_benchmark,
      anon_sym_common,
      anon_sym_executable,
      anon_sym_flag,
      anon_sym_library,
      anon_sym_source_DASHrepository,
      anon_sym_test_DASHsuite,
      sym_field_name,
  [1148] = 3,
    ACTIONS(163), 1,
      ts_builtin_sym_end,
    ACTIONS(246), 1,
      sym_field_value,
    ACTIONS(165), 9,
      anon_sym_benchmark,
      anon_sym_common,
      anon_sym_executable,
      anon_sym_flag,
      anon_sym_library,
      anon_sym_source_DASHrepository,
      anon_sym_test_DASHsuite,
      sym_comment,
      sym_field_name,
  [1166] = 2,
    ACTIONS(185), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(187), 9,
      anon_sym_benchmark,
      anon_sym_common,
      anon_sym_executable,
      anon_sym_flag,
      anon_sym_library,
      anon_sym_source_DASHrepository,
      anon_sym_test_DASHsuite,
      sym_field_name,
      anon_sym_if,
  [1182] = 3,
    ACTIONS(248), 1,
      sym_field_value,
    STATE(51), 1,
      aux_sym_field_repeat1,
    ACTIONS(139), 9,
      anon_sym_benchmark,
      anon_sym_common,
      anon_sym_executable,
      anon_sym_flag,
      anon_sym_library,
      anon_sym_source_DASHrepository,
      anon_sym_test_DASHsuite,
      sym_comment,
      sym_field_name,
  [1200] = 2,
    ACTIONS(189), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(191), 9,
      anon_sym_benchmark,
      anon_sym_common,
      anon_sym_executable,
      anon_sym_flag,
      anon_sym_library,
      anon_sym_source_DASHrepository,
      anon_sym_test_DASHsuite,
      sym_field_name,
      anon_sym_if,
  [1216] = 3,
    ACTIONS(250), 1,
      sym_field_value,
    STATE(53), 1,
      aux_sym_field_repeat1,
    ACTIONS(133), 9,
      anon_sym_benchmark,
      anon_sym_common,
      anon_sym_executable,
      anon_sym_flag,
      anon_sym_library,
      anon_sym_source_DASHrepository,
      anon_sym_test_DASHsuite,
      sym_comment,
      sym_field_name,
  [1234] = 4,
    ACTIONS(252), 1,
      ts_builtin_sym_end,
    ACTIONS(256), 1,
      sym_comment,
    STATE(46), 1,
      aux_sym_cabal_repeat1,
    ACTIONS(254), 8,
      anon_sym_benchmark,
      anon_sym_common,
      anon_sym_executable,
      anon_sym_flag,
      anon_sym_library,
      anon_sym_source_DASHrepository,
      anon_sym_test_DASHsuite,
      sym_field_name,
  [1254] = 3,
    ACTIONS(259), 1,
      sym_field_value,
    STATE(53), 1,
      aux_sym_field_repeat1,
    ACTIONS(126), 9,
      anon_sym_benchmark,
      anon_sym_common,
      anon_sym_executable,
      anon_sym_flag,
      anon_sym_library,
      anon_sym_source_DASHrepository,
      anon_sym_test_DASHsuite,
      sym_comment,
      sym_field_name,
  [1272] = 4,
    ACTIONS(149), 1,
      ts_builtin_sym_end,
    ACTIONS(262), 1,
      sym_comment,
    STATE(54), 1,
      aux_sym_cabal_repeat1,
    ACTIONS(151), 8,
      anon_sym_benchmark,
      anon_sym_common,
      anon_sym_executable,
      anon_sym_flag,
      anon_sym_library,
      anon_sym_source_DASHrepository,
      anon_sym_test_DASHsuite,
      sym_field_name,
  [1292] = 2,
    ACTIONS(94), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(96), 9,
      anon_sym_benchmark,
      anon_sym_common,
      anon_sym_executable,
      anon_sym_flag,
      anon_sym_library,
      anon_sym_source_DASHrepository,
      anon_sym_test_DASHsuite,
      sym_field_name,
      anon_sym_if,
  [1308] = 3,
    ACTIONS(265), 1,
      sym_comment,
    STATE(56), 1,
      aux_sym_cabal_repeat1,
    ACTIONS(149), 8,
      ts_builtin_sym_end,
      anon_sym_benchmark,
      anon_sym_common,
      anon_sym_executable,
      anon_sym_flag,
      anon_sym_library,
      anon_sym_source_DASHrepository,
      anon_sym_test_DASHsuite,
  [1325] = 9,
    ACTIONS(110), 1,
      sym_field_name,
    ACTIONS(112), 1,
      anon_sym_if,
    ACTIONS(268), 1,
      sym_section_name,
    ACTIONS(270), 1,
      sym_comment,
    STATE(9), 1,
      sym_condition_if,
    STATE(19), 1,
      aux_sym_property_or_conditional_block_repeat1,
    STATE(70), 1,
      sym_property_or_conditional_block,
    STATE(87), 1,
      aux_sym_cabal_repeat1,
    STATE(44), 2,
      sym_field,
      sym_conditional,
  [1354] = 9,
    ACTIONS(110), 1,
      sym_field_name,
    ACTIONS(112), 1,
      anon_sym_if,
    ACTIONS(270), 1,
      sym_comment,
    ACTIONS(272), 1,
      sym_section_name,
    STATE(9), 1,
      sym_condition_if,
    STATE(19), 1,
      aux_sym_property_or_conditional_block_repeat1,
    STATE(64), 1,
      sym_property_or_conditional_block,
    STATE(87), 1,
      aux_sym_cabal_repeat1,
    STATE(44), 2,
      sym_field,
      sym_conditional,
  [1383] = 2,
    ACTIONS(274), 1,
      sym_field_value,
    ACTIONS(165), 9,
      anon_sym_benchmark,
      anon_sym_common,
      anon_sym_executable,
      anon_sym_flag,
      anon_sym_library,
      anon_sym_source_DASHrepository,
      anon_sym_test_DASHsuite,
      sym_comment,
      sym_field_name,
  [1398] = 1,
    ACTIONS(276), 9,
      ts_builtin_sym_end,
      anon_sym_benchmark,
      anon_sym_common,
      anon_sym_executable,
      anon_sym_flag,
      anon_sym_library,
      anon_sym_source_DASHrepository,
      anon_sym_test_DASHsuite,
      sym_comment,
  [1410] = 2,
    ACTIONS(278), 1,
      sym_comment,
    ACTIONS(206), 8,
      anon_sym_benchmark,
      anon_sym_common,
      anon_sym_executable,
      anon_sym_flag,
      anon_sym_library,
      anon_sym_source_DASHrepository,
      anon_sym_test_DASHsuite,
      sym_field_name,
  [1424] = 1,
    ACTIONS(280), 9,
      ts_builtin_sym_end,
      anon_sym_benchmark,
      anon_sym_common,
      anon_sym_executable,
      anon_sym_flag,
      anon_sym_library,
      anon_sym_source_DASHrepository,
      anon_sym_test_DASHsuite,
      sym_comment,
  [1436] = 8,
    ACTIONS(112), 1,
      anon_sym_if,
    ACTIONS(282), 1,
      sym_comment,
    ACTIONS(284), 1,
      sym_field_name,
    STATE(8), 1,
      aux_sym_property_or_conditional_block_repeat1,
    STATE(11), 1,
      sym_condition_if,
    STATE(27), 1,
      sym_property_or_conditional_block,
    STATE(86), 1,
      aux_sym_cabal_repeat1,
    STATE(23), 2,
      sym_field,
      sym_conditional,
  [1462] = 1,
    ACTIONS(286), 9,
      ts_builtin_sym_end,
      anon_sym_benchmark,
      anon_sym_common,
      anon_sym_executable,
      anon_sym_flag,
      anon_sym_library,
      anon_sym_source_DASHrepository,
      anon_sym_test_DASHsuite,
      sym_comment,
  [1474] = 8,
    ACTIONS(110), 1,
      sym_field_name,
    ACTIONS(112), 1,
      anon_sym_if,
    ACTIONS(288), 1,
      sym_comment,
    STATE(9), 1,
      sym_condition_if,
    STATE(20), 1,
      aux_sym_property_or_conditional_block_repeat1,
    STATE(50), 1,
      sym_property_or_conditional_block,
    STATE(88), 1,
      aux_sym_cabal_repeat1,
    STATE(44), 2,
      sym_field,
      sym_conditional,
  [1500] = 1,
    ACTIONS(290), 9,
      ts_builtin_sym_end,
      anon_sym_benchmark,
      anon_sym_common,
      anon_sym_executable,
      anon_sym_flag,
      anon_sym_library,
      anon_sym_source_DASHrepository,
      anon_sym_test_DASHsuite,
      sym_comment,
  [1512] = 1,
    ACTIONS(292), 9,
      ts_builtin_sym_end,
      anon_sym_benchmark,
      anon_sym_common,
      anon_sym_executable,
      anon_sym_flag,
      anon_sym_library,
      anon_sym_source_DASHrepository,
      anon_sym_test_DASHsuite,
      sym_comment,
  [1524] = 1,
    ACTIONS(294), 9,
      ts_builtin_sym_end,
      anon_sym_benchmark,
      anon_sym_common,
      anon_sym_executable,
      anon_sym_flag,
      anon_sym_library,
      anon_sym_source_DASHrepository,
      anon_sym_test_DASHsuite,
      sym_comment,
  [1536] = 1,
    ACTIONS(296), 9,
      ts_builtin_sym_end,
      anon_sym_benchmark,
      anon_sym_common,
      anon_sym_executable,
      anon_sym_flag,
      anon_sym_library,
      anon_sym_source_DASHrepository,
      anon_sym_test_DASHsuite,
      sym_comment,
  [1548] = 1,
    ACTIONS(298), 9,
      ts_builtin_sym_end,
      anon_sym_benchmark,
      anon_sym_common,
      anon_sym_executable,
      anon_sym_flag,
      anon_sym_library,
      anon_sym_source_DASHrepository,
      anon_sym_test_DASHsuite,
      sym_comment,
  [1560] = 1,
    ACTIONS(300), 9,
      ts_builtin_sym_end,
      anon_sym_benchmark,
      anon_sym_common,
      anon_sym_executable,
      anon_sym_flag,
      anon_sym_library,
      anon_sym_source_DASHrepository,
      anon_sym_test_DASHsuite,
      sym_comment,
  [1572] = 8,
    ACTIONS(110), 1,
      sym_field_name,
    ACTIONS(112), 1,
      anon_sym_if,
    ACTIONS(270), 1,
      sym_comment,
    STATE(9), 1,
      sym_condition_if,
    STATE(19), 1,
      aux_sym_property_or_conditional_block_repeat1,
    STATE(85), 1,
      sym_property_or_conditional_block,
    STATE(87), 1,
      aux_sym_cabal_repeat1,
    STATE(44), 2,
      sym_field,
      sym_conditional,
  [1598] = 1,
    ACTIONS(302), 9,
      ts_builtin_sym_end,
      anon_sym_benchmark,
      anon_sym_common,
      anon_sym_executable,
      anon_sym_flag,
      anon_sym_library,
      anon_sym_source_DASHrepository,
      anon_sym_test_DASHsuite,
      sym_comment,
  [1610] = 9,
    ACTIONS(304), 1,
      anon_sym_benchmark,
    ACTIONS(306), 1,
      anon_sym_common,
    ACTIONS(308), 1,
      anon_sym_executable,
    ACTIONS(310), 1,
      anon_sym_flag,
    ACTIONS(312), 1,
      anon_sym_library,
    ACTIONS(314), 1,
      anon_sym_source_DASHrepository,
    ACTIONS(316), 1,
      anon_sym_test_DASHsuite,
    ACTIONS(318), 1,
      sym_comment,
    STATE(56), 1,
      aux_sym_cabal_repeat1,
  [1638] = 1,
    ACTIONS(320), 9,
      ts_builtin_sym_end,
      anon_sym_benchmark,
      anon_sym_common,
      anon_sym_executable,
      anon_sym_flag,
      anon_sym_library,
      anon_sym_source_DASHrepository,
      anon_sym_test_DASHsuite,
      sym_comment,
  [1650] = 8,
    ACTIONS(110), 1,
      sym_field_name,
    ACTIONS(112), 1,
      anon_sym_if,
    ACTIONS(270), 1,
      sym_comment,
    STATE(9), 1,
      sym_condition_if,
    STATE(19), 1,
      aux_sym_property_or_conditional_block_repeat1,
    STATE(62), 1,
      sym_property_or_conditional_block,
    STATE(87), 1,
      aux_sym_cabal_repeat1,
    STATE(44), 2,
      sym_field,
      sym_conditional,
  [1676] = 8,
    ACTIONS(110), 1,
      sym_field_name,
    ACTIONS(112), 1,
      anon_sym_if,
    ACTIONS(270), 1,
      sym_comment,
    STATE(9), 1,
      sym_condition_if,
    STATE(19), 1,
      aux_sym_property_or_conditional_block_repeat1,
    STATE(60), 1,
      sym_property_or_conditional_block,
    STATE(87), 1,
      aux_sym_cabal_repeat1,
    STATE(44), 2,
      sym_field,
      sym_conditional,
  [1702] = 8,
    ACTIONS(110), 1,
      sym_field_name,
    ACTIONS(112), 1,
      anon_sym_if,
    ACTIONS(270), 1,
      sym_comment,
    STATE(9), 1,
      sym_condition_if,
    STATE(19), 1,
      aux_sym_property_or_conditional_block_repeat1,
    STATE(67), 1,
      sym_property_or_conditional_block,
    STATE(87), 1,
      aux_sym_cabal_repeat1,
    STATE(44), 2,
      sym_field,
      sym_conditional,
  [1728] = 8,
    ACTIONS(112), 1,
      anon_sym_if,
    ACTIONS(282), 1,
      sym_comment,
    ACTIONS(284), 1,
      sym_field_name,
    STATE(8), 1,
      aux_sym_property_or_conditional_block_repeat1,
    STATE(11), 1,
      sym_condition_if,
    STATE(28), 1,
      sym_property_or_conditional_block,
    STATE(86), 1,
      aux_sym_cabal_repeat1,
    STATE(23), 2,
      sym_field,
      sym_conditional,
  [1754] = 1,
    ACTIONS(322), 9,
      ts_builtin_sym_end,
      anon_sym_benchmark,
      anon_sym_common,
      anon_sym_executable,
      anon_sym_flag,
      anon_sym_library,
      anon_sym_source_DASHrepository,
      anon_sym_test_DASHsuite,
      sym_comment,
  [1766] = 1,
    ACTIONS(324), 9,
      ts_builtin_sym_end,
      anon_sym_benchmark,
      anon_sym_common,
      anon_sym_executable,
      anon_sym_flag,
      anon_sym_library,
      anon_sym_source_DASHrepository,
      anon_sym_test_DASHsuite,
      sym_comment,
  [1778] = 8,
    ACTIONS(112), 1,
      anon_sym_if,
    ACTIONS(282), 1,
      sym_comment,
    ACTIONS(284), 1,
      sym_field_name,
    STATE(8), 1,
      aux_sym_property_or_conditional_block_repeat1,
    STATE(11), 1,
      sym_condition_if,
    STATE(31), 1,
      sym_property_or_conditional_block,
    STATE(86), 1,
      aux_sym_cabal_repeat1,
    STATE(23), 2,
      sym_field,
      sym_conditional,
  [1804] = 1,
    ACTIONS(326), 9,
      ts_builtin_sym_end,
      anon_sym_benchmark,
      anon_sym_common,
      anon_sym_executable,
      anon_sym_flag,
      anon_sym_library,
      anon_sym_source_DASHrepository,
      anon_sym_test_DASHsuite,
      sym_comment,
  [1816] = 1,
    ACTIONS(328), 9,
      ts_builtin_sym_end,
      anon_sym_benchmark,
      anon_sym_common,
      anon_sym_executable,
      anon_sym_flag,
      anon_sym_library,
      anon_sym_source_DASHrepository,
      anon_sym_test_DASHsuite,
      sym_comment,
  [1828] = 1,
    ACTIONS(330), 9,
      ts_builtin_sym_end,
      anon_sym_benchmark,
      anon_sym_common,
      anon_sym_executable,
      anon_sym_flag,
      anon_sym_library,
      anon_sym_source_DASHrepository,
      anon_sym_test_DASHsuite,
      sym_comment,
  [1840] = 7,
    ACTIONS(112), 1,
      anon_sym_if,
    ACTIONS(284), 1,
      sym_field_name,
    ACTIONS(332), 1,
      sym_comment,
    STATE(7), 1,
      aux_sym_property_or_conditional_block_repeat1,
    STATE(11), 1,
      sym_condition_if,
    STATE(102), 1,
      aux_sym_cabal_repeat1,
    STATE(23), 2,
      sym_field,
      sym_conditional,
  [1863] = 7,
    ACTIONS(110), 1,
      sym_field_name,
    ACTIONS(112), 1,
      anon_sym_if,
    ACTIONS(332), 1,
      sym_comment,
    STATE(9), 1,
      sym_condition_if,
    STATE(13), 1,
      aux_sym_property_or_conditional_block_repeat1,
    STATE(102), 1,
      aux_sym_cabal_repeat1,
    STATE(44), 2,
      sym_field,
      sym_conditional,
  [1886] = 7,
    ACTIONS(110), 1,
      sym_field_name,
    ACTIONS(112), 1,
      anon_sym_if,
    ACTIONS(332), 1,
      sym_comment,
    STATE(9), 1,
      sym_condition_if,
    STATE(21), 1,
      aux_sym_property_or_conditional_block_repeat1,
    STATE(102), 1,
      aux_sym_cabal_repeat1,
    STATE(44), 2,
      sym_field,
      sym_conditional,
  [1909] = 5,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(334), 1,
      sym_field_name,
    STATE(4), 1,
      sym_properties,
    STATE(101), 1,
      aux_sym_cabal_repeat1,
    STATE(34), 2,
      sym_field,
      aux_sym_properties_repeat1,
  [1926] = 6,
    ACTIONS(336), 1,
      sym_comment,
    ACTIONS(338), 1,
      sym_field_name,
    STATE(35), 1,
      aux_sym_property_block_repeat1,
    STATE(52), 1,
      sym_field,
    STATE(73), 1,
      sym_property_block,
    STATE(100), 1,
      aux_sym_cabal_repeat1,
  [1945] = 6,
    ACTIONS(336), 1,
      sym_comment,
    ACTIONS(338), 1,
      sym_field_name,
    STATE(35), 1,
      aux_sym_property_block_repeat1,
    STATE(52), 1,
      sym_field,
    STATE(83), 1,
      sym_property_block,
    STATE(100), 1,
      aux_sym_cabal_repeat1,
  [1964] = 6,
    ACTIONS(336), 1,
      sym_comment,
    ACTIONS(338), 1,
      sym_field_name,
    STATE(35), 1,
      aux_sym_property_block_repeat1,
    STATE(52), 1,
      sym_field,
    STATE(66), 1,
      sym_property_block,
    STATE(100), 1,
      aux_sym_cabal_repeat1,
  [1983] = 6,
    ACTIONS(336), 1,
      sym_comment,
    ACTIONS(338), 1,
      sym_field_name,
    STATE(35), 1,
      aux_sym_property_block_repeat1,
    STATE(52), 1,
      sym_field,
    STATE(81), 1,
      sym_property_block,
    STATE(100), 1,
      aux_sym_cabal_repeat1,
  [2002] = 6,
    ACTIONS(336), 1,
      sym_comment,
    ACTIONS(338), 1,
      sym_field_name,
    STATE(35), 1,
      aux_sym_property_block_repeat1,
    STATE(52), 1,
      sym_field,
    STATE(80), 1,
      sym_property_block,
    STATE(100), 1,
      aux_sym_cabal_repeat1,
  [2021] = 6,
    ACTIONS(336), 1,
      sym_comment,
    ACTIONS(338), 1,
      sym_field_name,
    STATE(35), 1,
      aux_sym_property_block_repeat1,
    STATE(52), 1,
      sym_field,
    STATE(84), 1,
      sym_property_block,
    STATE(100), 1,
      aux_sym_cabal_repeat1,
  [2040] = 6,
    ACTIONS(336), 1,
      sym_comment,
    ACTIONS(338), 1,
      sym_field_name,
    STATE(35), 1,
      aux_sym_property_block_repeat1,
    STATE(52), 1,
      sym_field,
    STATE(71), 1,
      sym_property_block,
    STATE(100), 1,
      aux_sym_cabal_repeat1,
  [2059] = 6,
    ACTIONS(336), 1,
      sym_comment,
    ACTIONS(338), 1,
      sym_field_name,
    STATE(35), 1,
      aux_sym_property_block_repeat1,
    STATE(52), 1,
      sym_field,
    STATE(75), 1,
      sym_property_block,
    STATE(100), 1,
      aux_sym_cabal_repeat1,
  [2078] = 6,
    ACTIONS(336), 1,
      sym_comment,
    ACTIONS(338), 1,
      sym_field_name,
    STATE(35), 1,
      aux_sym_property_block_repeat1,
    STATE(52), 1,
      sym_field,
    STATE(68), 1,
      sym_property_block,
    STATE(100), 1,
      aux_sym_cabal_repeat1,
  [2097] = 6,
    ACTIONS(336), 1,
      sym_comment,
    ACTIONS(338), 1,
      sym_field_name,
    STATE(35), 1,
      aux_sym_property_block_repeat1,
    STATE(52), 1,
      sym_field,
    STATE(69), 1,
      sym_property_block,
    STATE(100), 1,
      aux_sym_cabal_repeat1,
  [2116] = 5,
    ACTIONS(338), 1,
      sym_field_name,
    ACTIONS(340), 1,
      sym_comment,
    STATE(41), 1,
      aux_sym_property_block_repeat1,
    STATE(52), 1,
      sym_field,
    STATE(106), 1,
      aux_sym_cabal_repeat1,
  [2132] = 4,
    ACTIONS(334), 1,
      sym_field_name,
    ACTIONS(340), 1,
      sym_comment,
    STATE(61), 1,
      sym_field,
    STATE(106), 1,
      aux_sym_cabal_repeat1,
  [2145] = 3,
    ACTIONS(342), 1,
      sym_comment,
    STATE(102), 1,
      aux_sym_cabal_repeat1,
    ACTIONS(151), 2,
      sym_field_name,
      anon_sym_if,
  [2156] = 3,
    ACTIONS(318), 1,
      sym_comment,
    ACTIONS(345), 1,
      ts_builtin_sym_end,
    STATE(56), 1,
      aux_sym_cabal_repeat1,
  [2166] = 3,
    ACTIONS(318), 1,
      sym_comment,
    ACTIONS(347), 1,
      ts_builtin_sym_end,
    STATE(56), 1,
      aux_sym_cabal_repeat1,
  [2176] = 3,
    ACTIONS(349), 1,
      ts_builtin_sym_end,
    ACTIONS(351), 1,
      sym_comment,
    STATE(103), 1,
      aux_sym_cabal_repeat1,
  [2186] = 3,
    ACTIONS(149), 1,
      sym_field_name,
    ACTIONS(353), 1,
      sym_comment,
    STATE(106), 1,
      aux_sym_cabal_repeat1,
  [2196] = 3,
    ACTIONS(345), 1,
      ts_builtin_sym_end,
    ACTIONS(356), 1,
      sym_comment,
    STATE(104), 1,
      aux_sym_cabal_repeat1,
  [2206] = 1,
    ACTIONS(358), 2,
      sym_comment,
      sym_field_name,
  [2211] = 1,
    ACTIONS(360), 1,
      sym_spec_version,
  [2215] = 1,
    ACTIONS(362), 1,
      anon_sym_COLON,
  [2219] = 1,
    ACTIONS(364), 1,
      sym_section_name,
  [2223] = 1,
    ACTIONS(366), 1,
      sym_field_value,
  [2227] = 1,
    ACTIONS(368), 1,
      sym_section_name,
  [2231] = 1,
    ACTIONS(370), 1,
      ts_builtin_sym_end,
  [2235] = 1,
    ACTIONS(372), 1,
      sym_condition,
  [2239] = 1,
    ACTIONS(374), 1,
      sym_condition,
  [2243] = 1,
    ACTIONS(376), 1,
      anon_sym_COLON,
  [2247] = 1,
    ACTIONS(378), 1,
      sym_section_name,
  [2251] = 1,
    ACTIONS(380), 1,
      sym_section_name,
  [2255] = 1,
    ACTIONS(382), 1,
      sym_section_name,
  [2259] = 1,
    ACTIONS(384), 1,
      sym_section_name,
  [2263] = 1,
    ACTIONS(386), 1,
      sym_section_name,
  [2267] = 1,
    ACTIONS(388), 1,
      sym_section_name,
  [2271] = 1,
    ACTIONS(390), 1,
      sym_section_name,
  [2275] = 1,
    ACTIONS(392), 1,
      sym_field_value,
  [2279] = 1,
    ACTIONS(394), 1,
      sym_section_name,
  [2283] = 1,
    ACTIONS(396), 1,
      sym_section_name,
  [2287] = 1,
    ACTIONS(398), 1,
      sym_field_value,
  [2291] = 1,
    ACTIONS(400), 1,
      sym_section_name,
  [2295] = 1,
    ACTIONS(402), 1,
      sym_field_value,
  [2299] = 1,
    ACTIONS(404), 1,
      anon_sym_COLON,
  [2303] = 1,
    ACTIONS(406), 1,
      anon_sym_COLON,
  [2307] = 1,
    ACTIONS(408), 1,
      anon_sym_COLON,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 41,
  [SMALL_STATE(4)] = 82,
  [SMALL_STATE(5)] = 123,
  [SMALL_STATE(6)] = 164,
  [SMALL_STATE(7)] = 196,
  [SMALL_STATE(8)] = 228,
  [SMALL_STATE(9)] = 260,
  [SMALL_STATE(10)] = 289,
  [SMALL_STATE(11)] = 318,
  [SMALL_STATE(12)] = 347,
  [SMALL_STATE(13)] = 376,
  [SMALL_STATE(14)] = 406,
  [SMALL_STATE(15)] = 430,
  [SMALL_STATE(16)] = 460,
  [SMALL_STATE(17)] = 484,
  [SMALL_STATE(18)] = 508,
  [SMALL_STATE(19)] = 532,
  [SMALL_STATE(20)] = 562,
  [SMALL_STATE(21)] = 592,
  [SMALL_STATE(22)] = 622,
  [SMALL_STATE(23)] = 645,
  [SMALL_STATE(24)] = 668,
  [SMALL_STATE(25)] = 689,
  [SMALL_STATE(26)] = 712,
  [SMALL_STATE(27)] = 734,
  [SMALL_STATE(28)] = 752,
  [SMALL_STATE(29)] = 770,
  [SMALL_STATE(30)] = 792,
  [SMALL_STATE(31)] = 810,
  [SMALL_STATE(32)] = 828,
  [SMALL_STATE(33)] = 850,
  [SMALL_STATE(34)] = 868,
  [SMALL_STATE(35)] = 891,
  [SMALL_STATE(36)] = 914,
  [SMALL_STATE(37)] = 937,
  [SMALL_STATE(38)] = 960,
  [SMALL_STATE(39)] = 981,
  [SMALL_STATE(40)] = 1002,
  [SMALL_STATE(41)] = 1023,
  [SMALL_STATE(42)] = 1046,
  [SMALL_STATE(43)] = 1065,
  [SMALL_STATE(44)] = 1086,
  [SMALL_STATE(45)] = 1107,
  [SMALL_STATE(46)] = 1128,
  [SMALL_STATE(47)] = 1148,
  [SMALL_STATE(48)] = 1166,
  [SMALL_STATE(49)] = 1182,
  [SMALL_STATE(50)] = 1200,
  [SMALL_STATE(51)] = 1216,
  [SMALL_STATE(52)] = 1234,
  [SMALL_STATE(53)] = 1254,
  [SMALL_STATE(54)] = 1272,
  [SMALL_STATE(55)] = 1292,
  [SMALL_STATE(56)] = 1308,
  [SMALL_STATE(57)] = 1325,
  [SMALL_STATE(58)] = 1354,
  [SMALL_STATE(59)] = 1383,
  [SMALL_STATE(60)] = 1398,
  [SMALL_STATE(61)] = 1410,
  [SMALL_STATE(62)] = 1424,
  [SMALL_STATE(63)] = 1436,
  [SMALL_STATE(64)] = 1462,
  [SMALL_STATE(65)] = 1474,
  [SMALL_STATE(66)] = 1500,
  [SMALL_STATE(67)] = 1512,
  [SMALL_STATE(68)] = 1524,
  [SMALL_STATE(69)] = 1536,
  [SMALL_STATE(70)] = 1548,
  [SMALL_STATE(71)] = 1560,
  [SMALL_STATE(72)] = 1572,
  [SMALL_STATE(73)] = 1598,
  [SMALL_STATE(74)] = 1610,
  [SMALL_STATE(75)] = 1638,
  [SMALL_STATE(76)] = 1650,
  [SMALL_STATE(77)] = 1676,
  [SMALL_STATE(78)] = 1702,
  [SMALL_STATE(79)] = 1728,
  [SMALL_STATE(80)] = 1754,
  [SMALL_STATE(81)] = 1766,
  [SMALL_STATE(82)] = 1778,
  [SMALL_STATE(83)] = 1804,
  [SMALL_STATE(84)] = 1816,
  [SMALL_STATE(85)] = 1828,
  [SMALL_STATE(86)] = 1840,
  [SMALL_STATE(87)] = 1863,
  [SMALL_STATE(88)] = 1886,
  [SMALL_STATE(89)] = 1909,
  [SMALL_STATE(90)] = 1926,
  [SMALL_STATE(91)] = 1945,
  [SMALL_STATE(92)] = 1964,
  [SMALL_STATE(93)] = 1983,
  [SMALL_STATE(94)] = 2002,
  [SMALL_STATE(95)] = 2021,
  [SMALL_STATE(96)] = 2040,
  [SMALL_STATE(97)] = 2059,
  [SMALL_STATE(98)] = 2078,
  [SMALL_STATE(99)] = 2097,
  [SMALL_STATE(100)] = 2116,
  [SMALL_STATE(101)] = 2132,
  [SMALL_STATE(102)] = 2145,
  [SMALL_STATE(103)] = 2156,
  [SMALL_STATE(104)] = 2166,
  [SMALL_STATE(105)] = 2176,
  [SMALL_STATE(106)] = 2186,
  [SMALL_STATE(107)] = 2196,
  [SMALL_STATE(108)] = 2206,
  [SMALL_STATE(109)] = 2211,
  [SMALL_STATE(110)] = 2215,
  [SMALL_STATE(111)] = 2219,
  [SMALL_STATE(112)] = 2223,
  [SMALL_STATE(113)] = 2227,
  [SMALL_STATE(114)] = 2231,
  [SMALL_STATE(115)] = 2235,
  [SMALL_STATE(116)] = 2239,
  [SMALL_STATE(117)] = 2243,
  [SMALL_STATE(118)] = 2247,
  [SMALL_STATE(119)] = 2251,
  [SMALL_STATE(120)] = 2255,
  [SMALL_STATE(121)] = 2259,
  [SMALL_STATE(122)] = 2263,
  [SMALL_STATE(123)] = 2267,
  [SMALL_STATE(124)] = 2271,
  [SMALL_STATE(125)] = 2275,
  [SMALL_STATE(126)] = 2279,
  [SMALL_STATE(127)] = 2283,
  [SMALL_STATE(128)] = 2287,
  [SMALL_STATE(129)] = 2291,
  [SMALL_STATE(130)] = 2295,
  [SMALL_STATE(131)] = 2299,
  [SMALL_STATE(132)] = 2303,
  [SMALL_STATE(133)] = 2307,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sections_repeat1, 2),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sections_repeat1, 2), SHIFT_REPEAT(111),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sections_repeat1, 2), SHIFT_REPEAT(129),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sections_repeat1, 2), SHIFT_REPEAT(127),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sections_repeat1, 2), SHIFT_REPEAT(126),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sections_repeat1, 2), SHIFT_REPEAT(58),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sections_repeat1, 2), SHIFT_REPEAT(124),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sections_repeat1, 2), SHIFT_REPEAT(123),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sections_repeat1, 2), SHIFT_REPEAT(74),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sections, 1),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_sections, 1), SHIFT(74),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_property_or_conditional_block_repeat1, 2),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_property_or_conditional_block_repeat1, 2),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_property_or_conditional_block_repeat1, 2), SHIFT_REPEAT(133),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_property_or_conditional_block_repeat1, 2), SHIFT_REPEAT(115),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_or_conditional_block, 2),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property_or_conditional_block, 2),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_property_or_conditional_block, 2), SHIFT(133),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_property_or_conditional_block, 2), SHIFT(115),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_or_conditional_block, 1),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property_or_conditional_block, 1),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_property_or_conditional_block, 1), SHIFT(133),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_property_or_conditional_block, 1), SHIFT(115),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional, 1),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional, 1),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional, 2),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional, 2),
  [98] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_conditional, 2), SHIFT(116),
  [101] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_conditional, 2), SHIFT(82),
  [104] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_conditional, 1), SHIFT(116),
  [107] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_conditional, 1), SHIFT(82),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conditional_repeat1, 2),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_conditional_repeat1, 2),
  [118] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_conditional_repeat1, 2), SHIFT_REPEAT(116),
  [121] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_property_or_conditional_block_repeat1, 2), SHIFT_REPEAT(131),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_repeat1, 2),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_field_repeat1, 2),
  [128] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_field_repeat1, 2), SHIFT_REPEAT(16),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 5),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 5),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 4),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 4),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [143] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_property_or_conditional_block, 1), SHIFT(131),
  [146] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_property_or_conditional_block, 2), SHIFT(131),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_cabal_repeat1, 2),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_cabal_repeat1, 2),
  [153] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cabal_repeat1, 2), SHIFT_REPEAT(22),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_property_or_conditional_block_repeat1, 1),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_property_or_conditional_block_repeat1, 1),
  [160] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_property_or_conditional_block_repeat1, 1), SHIFT_REPEAT(25),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 3),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 3),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [169] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_property_or_conditional_block_repeat1, 2), SHIFT(22),
  [172] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_field_repeat1, 2), SHIFT_REPEAT(26),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition_if, 3),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_condition_if, 3),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition_elseif, 3),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_condition_elseif, 3),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional, 3),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional, 3),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition_else, 2),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_condition_else, 2),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_properties, 1),
  [197] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_properties, 1), SHIFT(101),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_block, 1),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property_block, 1),
  [204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_properties_repeat1, 2),
  [208] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_properties_repeat1, 2), SHIFT_REPEAT(101),
  [211] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_properties_repeat1, 2), SHIFT_REPEAT(110),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_property_block_repeat1, 2),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_property_block_repeat1, 2),
  [218] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_property_block_repeat1, 2), SHIFT_REPEAT(132),
  [221] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cabal_repeat1, 2), SHIFT_REPEAT(38),
  [224] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_field_repeat1, 2), SHIFT_REPEAT(39),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_block, 2),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property_block, 2),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [237] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_property_or_conditional_block_repeat1, 1), SHIFT_REPEAT(45),
  [240] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_property_or_conditional_block_repeat1, 2), SHIFT(38),
  [243] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_property_block_repeat1, 2), SHIFT(54),
  [246] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [248] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [250] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_property_block_repeat1, 1),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_property_block_repeat1, 1),
  [256] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_property_block_repeat1, 1), SHIFT_REPEAT(46),
  [259] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_field_repeat1, 2), SHIFT_REPEAT(53),
  [262] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cabal_repeat1, 2), SHIFT_REPEAT(54),
  [265] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cabal_repeat1, 2), SHIFT_REPEAT(56),
  [268] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [272] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [274] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_executable, 3, .production_id = 2),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_properties_repeat1, 2),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_library, 3, .production_id = 2),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [284] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_library, 2, .production_id = 1),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_repository, 4, .production_id = 4),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_library, 4, .production_id = 4),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_repository, 3, .production_id = 2),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_suite, 3, .production_id = 2),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_library, 3, .production_id = 3),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_common, 3, .production_id = 2),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag, 4, .production_id = 4),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag, 3, .production_id = 2),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_benchmark, 3, .production_id = 2),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_suite, 4, .production_id = 4),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_benchmark, 4, .production_id = 4),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_common, 4, .production_id = 4),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_executable, 4, .production_id = 4),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [342] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cabal_repeat1, 2), SHIFT_REPEAT(102),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cabal, 3),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cabal, 4),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cabal, 2),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [353] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cabal_repeat1, 2), SHIFT_REPEAT(106),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cabal_version, 3),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [370] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
};

#ifdef __cplusplus
extern "C" {
#endif
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
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
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
