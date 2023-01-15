#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 336
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 115
#define ALIAS_COUNT 0
#define TOKEN_COUNT 60
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 16
#define MAX_ALIAS_SEQUENCE_LENGTH 12
#define PRODUCTION_ID_COUNT 16

enum {
  sym_TOKEN_BI_FORMAT = 1,
  sym_TOKEN_KW_BREAK = 2,
  sym_TOKEN_KW_CASE = 3,
  sym_TOKEN_KW_CONST = 4,
  sym_TOKEN_KW_CONTINUE = 5,
  sym_TOKEN_KW_DEFAULT = 6,
  sym_TOKEN_KW_DO = 7,
  sym_TOKEN_KW_ELIF = 8,
  sym_TOKEN_KW_ELSE = 9,
  sym_TOKEN_KW_END = 10,
  sym_TOKEN_KW_IF = 11,
  sym_TOKEN_KW_LOCAL = 12,
  sym_TOKEN_KW_GLOBAL = 13,
  sym_TOKEN_KW_RETURN = 14,
  sym_TOKEN_KW_SWITCH = 15,
  sym_TOKEN_KW_WHILE = 16,
  sym_TOKEN_KW_PORYSWITCH = 17,
  sym_TOKEN_KW_MART = 18,
  sym_TOKEN_KW_MOVEMENT = 19,
  sym_TOKEN_KW_RAW = 20,
  sym_TOKEN_KW_SCRIPT = 21,
  sym_TOKEN_KW_TEXT = 22,
  sym_TOKEN_P_EQUALS = 23,
  sym_TOKEN_P_POPEN = 24,
  sym_TOKEN_P_PCLOSE = 25,
  sym_TOKEN_P_BOPEN = 26,
  sym_TOKEN_P_BCLOSE = 27,
  sym_TOKEN_P_SOPEN = 28,
  sym_TOKEN_P_SCLOSE = 29,
  sym_TOKEN_P_COLON = 30,
  sym_TOKEN_P_ASTER = 31,
  sym_TOKEN_P_PLUS = 32,
  sym_INT_LIT = 33,
  sym_HEX_LIT = 34,
  sym_BIN_LIT = 35,
  sym_STRING_LIT = 36,
  sym_STRING_INTER_START = 37,
  sym_STRING_INTER_MID = 38,
  sym_STRING_INTER_END = 39,
  sym_RAW_LIT = 40,
  anon_sym_walk_left = 41,
  anon_sym_walk_right = 42,
  anon_sym_walk_up = 43,
  anon_sym_walk_down = 44,
  anon_sym_face_left = 45,
  anon_sym_face_right = 46,
  anon_sym_face_up = 47,
  anon_sym_face_down = 48,
  anon_sym_lock = 49,
  anon_sym_faceplayer = 50,
  anon_sym_release = 51,
  anon_sym_msgbox = 52,
  anon_sym_flag = 53,
  anon_sym_var = 54,
  anon_sym_value = 55,
  anon_sym_defeated = 56,
  sym_IDENT = 57,
  sym_SLASH_COMMENT = 58,
  sym_HASH_COMMENT = 59,
  sym_source_file = 60,
  sym_statement = 61,
  sym_const = 62,
  sym_script = 63,
  sym_script_block = 64,
  sym__script_statements = 65,
  sym_script_if = 66,
  sym_script_while = 67,
  sym_script_do_while = 68,
  sym_script_switch = 69,
  sym_script_switch_case = 70,
  sym_poryswitch_case_script = 71,
  sym_poryswitch_script = 72,
  sym_script_expression = 73,
  sym_script_application = 74,
  sym_mart = 75,
  sym_mart_values = 76,
  sym_mart_value = 77,
  sym_poryswitch_case_mart = 78,
  sym_poryswitch_mart = 79,
  sym_movement = 80,
  sym_movement_values = 81,
  sym_movement_value = 82,
  sym__movement_entry = 83,
  sym_poryswitch_case_movement = 84,
  sym_poryswitch_movement = 85,
  sym_raw = 86,
  sym_text = 87,
  sym_text_values = 88,
  sym_text_value = 89,
  sym_poryswitch_case_text = 90,
  sym_poryswitch_text = 91,
  sym_scope_modifier = 92,
  sym_NUM_LIT = 93,
  sym_STRING = 94,
  sym_FORMAT_STRING = 95,
  sym_STRING_INTERPOLATED = 96,
  sym_MOVEMENT_LIT = 97,
  sym_SCRIPT_0_LIT = 98,
  sym_SCRIPT_FN_LIT = 99,
  sym_COMMENT = 100,
  aux_sym_source_file_repeat1 = 101,
  aux_sym_const_repeat1 = 102,
  aux_sym_script_block_repeat1 = 103,
  aux_sym_script_switch_repeat1 = 104,
  aux_sym_poryswitch_script_repeat1 = 105,
  aux_sym_script_application_repeat1 = 106,
  aux_sym_mart_values_repeat1 = 107,
  aux_sym_poryswitch_mart_repeat1 = 108,
  aux_sym_movement_values_repeat1 = 109,
  aux_sym_poryswitch_movement_repeat1 = 110,
  aux_sym_text_values_repeat1 = 111,
  aux_sym_poryswitch_text_repeat1 = 112,
  aux_sym_FORMAT_STRING_repeat1 = 113,
  aux_sym_STRING_INTERPOLATED_repeat1 = 114,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_TOKEN_BI_FORMAT] = "TOKEN_BI_FORMAT",
  [sym_TOKEN_KW_BREAK] = "TOKEN_KW_BREAK",
  [sym_TOKEN_KW_CASE] = "TOKEN_KW_CASE",
  [sym_TOKEN_KW_CONST] = "TOKEN_KW_CONST",
  [sym_TOKEN_KW_CONTINUE] = "TOKEN_KW_CONTINUE",
  [sym_TOKEN_KW_DEFAULT] = "TOKEN_KW_DEFAULT",
  [sym_TOKEN_KW_DO] = "TOKEN_KW_DO",
  [sym_TOKEN_KW_ELIF] = "TOKEN_KW_ELIF",
  [sym_TOKEN_KW_ELSE] = "TOKEN_KW_ELSE",
  [sym_TOKEN_KW_END] = "TOKEN_KW_END",
  [sym_TOKEN_KW_IF] = "TOKEN_KW_IF",
  [sym_TOKEN_KW_LOCAL] = "TOKEN_KW_LOCAL",
  [sym_TOKEN_KW_GLOBAL] = "TOKEN_KW_GLOBAL",
  [sym_TOKEN_KW_RETURN] = "TOKEN_KW_RETURN",
  [sym_TOKEN_KW_SWITCH] = "TOKEN_KW_SWITCH",
  [sym_TOKEN_KW_WHILE] = "TOKEN_KW_WHILE",
  [sym_TOKEN_KW_PORYSWITCH] = "TOKEN_KW_PORYSWITCH",
  [sym_TOKEN_KW_MART] = "TOKEN_KW_MART",
  [sym_TOKEN_KW_MOVEMENT] = "TOKEN_KW_MOVEMENT",
  [sym_TOKEN_KW_RAW] = "TOKEN_KW_RAW",
  [sym_TOKEN_KW_SCRIPT] = "TOKEN_KW_SCRIPT",
  [sym_TOKEN_KW_TEXT] = "TOKEN_KW_TEXT",
  [sym_TOKEN_P_EQUALS] = "TOKEN_P_EQUALS",
  [sym_TOKEN_P_POPEN] = "TOKEN_P_POPEN",
  [sym_TOKEN_P_PCLOSE] = "TOKEN_P_PCLOSE",
  [sym_TOKEN_P_BOPEN] = "TOKEN_P_BOPEN",
  [sym_TOKEN_P_BCLOSE] = "TOKEN_P_BCLOSE",
  [sym_TOKEN_P_SOPEN] = "TOKEN_P_SOPEN",
  [sym_TOKEN_P_SCLOSE] = "TOKEN_P_SCLOSE",
  [sym_TOKEN_P_COLON] = "TOKEN_P_COLON",
  [sym_TOKEN_P_ASTER] = "TOKEN_P_ASTER",
  [sym_TOKEN_P_PLUS] = "TOKEN_P_PLUS",
  [sym_INT_LIT] = "INT_LIT",
  [sym_HEX_LIT] = "HEX_LIT",
  [sym_BIN_LIT] = "BIN_LIT",
  [sym_STRING_LIT] = "STRING_LIT",
  [sym_STRING_INTER_START] = "STRING_INTER_START",
  [sym_STRING_INTER_MID] = "STRING_INTER_MID",
  [sym_STRING_INTER_END] = "STRING_INTER_END",
  [sym_RAW_LIT] = "RAW_LIT",
  [anon_sym_walk_left] = "walk_left",
  [anon_sym_walk_right] = "walk_right",
  [anon_sym_walk_up] = "walk_up",
  [anon_sym_walk_down] = "walk_down",
  [anon_sym_face_left] = "face_left",
  [anon_sym_face_right] = "face_right",
  [anon_sym_face_up] = "face_up",
  [anon_sym_face_down] = "face_down",
  [anon_sym_lock] = "lock",
  [anon_sym_faceplayer] = "faceplayer",
  [anon_sym_release] = "release",
  [anon_sym_msgbox] = "msgbox",
  [anon_sym_flag] = "flag",
  [anon_sym_var] = "var",
  [anon_sym_value] = "value",
  [anon_sym_defeated] = "defeated",
  [sym_IDENT] = "IDENT",
  [sym_SLASH_COMMENT] = "SLASH_COMMENT",
  [sym_HASH_COMMENT] = "HASH_COMMENT",
  [sym_source_file] = "source_file",
  [sym_statement] = "statement",
  [sym_const] = "const",
  [sym_script] = "script",
  [sym_script_block] = "script_block",
  [sym__script_statements] = "_script_statements",
  [sym_script_if] = "script_if",
  [sym_script_while] = "script_while",
  [sym_script_do_while] = "script_do_while",
  [sym_script_switch] = "script_switch",
  [sym_script_switch_case] = "script_switch_case",
  [sym_poryswitch_case_script] = "poryswitch_case",
  [sym_poryswitch_script] = "poryswitch",
  [sym_script_expression] = "script_expression",
  [sym_script_application] = "script_application",
  [sym_mart] = "mart",
  [sym_mart_values] = "mart_values",
  [sym_mart_value] = "mart_value",
  [sym_poryswitch_case_mart] = "poryswitch_case",
  [sym_poryswitch_mart] = "poryswitch",
  [sym_movement] = "movement",
  [sym_movement_values] = "movement_values",
  [sym_movement_value] = "movement_value",
  [sym__movement_entry] = "_movement_entry",
  [sym_poryswitch_case_movement] = "poryswitch_case",
  [sym_poryswitch_movement] = "poryswitch",
  [sym_raw] = "raw",
  [sym_text] = "text",
  [sym_text_values] = "text_values",
  [sym_text_value] = "text_value",
  [sym_poryswitch_case_text] = "poryswitch_case",
  [sym_poryswitch_text] = "poryswitch",
  [sym_scope_modifier] = "scope_modifier",
  [sym_NUM_LIT] = "NUM_LIT",
  [sym_STRING] = "STRING",
  [sym_FORMAT_STRING] = "FORMAT_STRING",
  [sym_STRING_INTERPOLATED] = "STRING_INTERPOLATED",
  [sym_MOVEMENT_LIT] = "MOVEMENT_LIT",
  [sym_SCRIPT_0_LIT] = "SCRIPT_0_LIT",
  [sym_SCRIPT_FN_LIT] = "SCRIPT_FN_LIT",
  [sym_COMMENT] = "COMMENT",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_const_repeat1] = "const_repeat1",
  [aux_sym_script_block_repeat1] = "script_block_repeat1",
  [aux_sym_script_switch_repeat1] = "script_switch_repeat1",
  [aux_sym_poryswitch_script_repeat1] = "poryswitch_script_repeat1",
  [aux_sym_script_application_repeat1] = "script_application_repeat1",
  [aux_sym_mart_values_repeat1] = "mart_values_repeat1",
  [aux_sym_poryswitch_mart_repeat1] = "poryswitch_mart_repeat1",
  [aux_sym_movement_values_repeat1] = "movement_values_repeat1",
  [aux_sym_poryswitch_movement_repeat1] = "poryswitch_movement_repeat1",
  [aux_sym_text_values_repeat1] = "text_values_repeat1",
  [aux_sym_poryswitch_text_repeat1] = "poryswitch_text_repeat1",
  [aux_sym_FORMAT_STRING_repeat1] = "FORMAT_STRING_repeat1",
  [aux_sym_STRING_INTERPOLATED_repeat1] = "STRING_INTERPOLATED_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_TOKEN_BI_FORMAT] = sym_TOKEN_BI_FORMAT,
  [sym_TOKEN_KW_BREAK] = sym_TOKEN_KW_BREAK,
  [sym_TOKEN_KW_CASE] = sym_TOKEN_KW_CASE,
  [sym_TOKEN_KW_CONST] = sym_TOKEN_KW_CONST,
  [sym_TOKEN_KW_CONTINUE] = sym_TOKEN_KW_CONTINUE,
  [sym_TOKEN_KW_DEFAULT] = sym_TOKEN_KW_DEFAULT,
  [sym_TOKEN_KW_DO] = sym_TOKEN_KW_DO,
  [sym_TOKEN_KW_ELIF] = sym_TOKEN_KW_ELIF,
  [sym_TOKEN_KW_ELSE] = sym_TOKEN_KW_ELSE,
  [sym_TOKEN_KW_END] = sym_TOKEN_KW_END,
  [sym_TOKEN_KW_IF] = sym_TOKEN_KW_IF,
  [sym_TOKEN_KW_LOCAL] = sym_TOKEN_KW_LOCAL,
  [sym_TOKEN_KW_GLOBAL] = sym_TOKEN_KW_GLOBAL,
  [sym_TOKEN_KW_RETURN] = sym_TOKEN_KW_RETURN,
  [sym_TOKEN_KW_SWITCH] = sym_TOKEN_KW_SWITCH,
  [sym_TOKEN_KW_WHILE] = sym_TOKEN_KW_WHILE,
  [sym_TOKEN_KW_PORYSWITCH] = sym_TOKEN_KW_PORYSWITCH,
  [sym_TOKEN_KW_MART] = sym_TOKEN_KW_MART,
  [sym_TOKEN_KW_MOVEMENT] = sym_TOKEN_KW_MOVEMENT,
  [sym_TOKEN_KW_RAW] = sym_TOKEN_KW_RAW,
  [sym_TOKEN_KW_SCRIPT] = sym_TOKEN_KW_SCRIPT,
  [sym_TOKEN_KW_TEXT] = sym_TOKEN_KW_TEXT,
  [sym_TOKEN_P_EQUALS] = sym_TOKEN_P_EQUALS,
  [sym_TOKEN_P_POPEN] = sym_TOKEN_P_POPEN,
  [sym_TOKEN_P_PCLOSE] = sym_TOKEN_P_PCLOSE,
  [sym_TOKEN_P_BOPEN] = sym_TOKEN_P_BOPEN,
  [sym_TOKEN_P_BCLOSE] = sym_TOKEN_P_BCLOSE,
  [sym_TOKEN_P_SOPEN] = sym_TOKEN_P_SOPEN,
  [sym_TOKEN_P_SCLOSE] = sym_TOKEN_P_SCLOSE,
  [sym_TOKEN_P_COLON] = sym_TOKEN_P_COLON,
  [sym_TOKEN_P_ASTER] = sym_TOKEN_P_ASTER,
  [sym_TOKEN_P_PLUS] = sym_TOKEN_P_PLUS,
  [sym_INT_LIT] = sym_INT_LIT,
  [sym_HEX_LIT] = sym_HEX_LIT,
  [sym_BIN_LIT] = sym_BIN_LIT,
  [sym_STRING_LIT] = sym_STRING_LIT,
  [sym_STRING_INTER_START] = sym_STRING_INTER_START,
  [sym_STRING_INTER_MID] = sym_STRING_INTER_MID,
  [sym_STRING_INTER_END] = sym_STRING_INTER_END,
  [sym_RAW_LIT] = sym_RAW_LIT,
  [anon_sym_walk_left] = anon_sym_walk_left,
  [anon_sym_walk_right] = anon_sym_walk_right,
  [anon_sym_walk_up] = anon_sym_walk_up,
  [anon_sym_walk_down] = anon_sym_walk_down,
  [anon_sym_face_left] = anon_sym_face_left,
  [anon_sym_face_right] = anon_sym_face_right,
  [anon_sym_face_up] = anon_sym_face_up,
  [anon_sym_face_down] = anon_sym_face_down,
  [anon_sym_lock] = anon_sym_lock,
  [anon_sym_faceplayer] = anon_sym_faceplayer,
  [anon_sym_release] = anon_sym_release,
  [anon_sym_msgbox] = anon_sym_msgbox,
  [anon_sym_flag] = anon_sym_flag,
  [anon_sym_var] = anon_sym_var,
  [anon_sym_value] = anon_sym_value,
  [anon_sym_defeated] = anon_sym_defeated,
  [sym_IDENT] = sym_IDENT,
  [sym_SLASH_COMMENT] = sym_SLASH_COMMENT,
  [sym_HASH_COMMENT] = sym_HASH_COMMENT,
  [sym_source_file] = sym_source_file,
  [sym_statement] = sym_statement,
  [sym_const] = sym_const,
  [sym_script] = sym_script,
  [sym_script_block] = sym_script_block,
  [sym__script_statements] = sym__script_statements,
  [sym_script_if] = sym_script_if,
  [sym_script_while] = sym_script_while,
  [sym_script_do_while] = sym_script_do_while,
  [sym_script_switch] = sym_script_switch,
  [sym_script_switch_case] = sym_script_switch_case,
  [sym_poryswitch_case_script] = sym_poryswitch_case_script,
  [sym_poryswitch_script] = sym_poryswitch_script,
  [sym_script_expression] = sym_script_expression,
  [sym_script_application] = sym_script_application,
  [sym_mart] = sym_mart,
  [sym_mart_values] = sym_mart_values,
  [sym_mart_value] = sym_mart_value,
  [sym_poryswitch_case_mart] = sym_poryswitch_case_script,
  [sym_poryswitch_mart] = sym_poryswitch_script,
  [sym_movement] = sym_movement,
  [sym_movement_values] = sym_movement_values,
  [sym_movement_value] = sym_movement_value,
  [sym__movement_entry] = sym__movement_entry,
  [sym_poryswitch_case_movement] = sym_poryswitch_case_script,
  [sym_poryswitch_movement] = sym_poryswitch_script,
  [sym_raw] = sym_raw,
  [sym_text] = sym_text,
  [sym_text_values] = sym_text_values,
  [sym_text_value] = sym_text_value,
  [sym_poryswitch_case_text] = sym_poryswitch_case_script,
  [sym_poryswitch_text] = sym_poryswitch_script,
  [sym_scope_modifier] = sym_scope_modifier,
  [sym_NUM_LIT] = sym_NUM_LIT,
  [sym_STRING] = sym_STRING,
  [sym_FORMAT_STRING] = sym_FORMAT_STRING,
  [sym_STRING_INTERPOLATED] = sym_STRING_INTERPOLATED,
  [sym_MOVEMENT_LIT] = sym_MOVEMENT_LIT,
  [sym_SCRIPT_0_LIT] = sym_SCRIPT_0_LIT,
  [sym_SCRIPT_FN_LIT] = sym_SCRIPT_FN_LIT,
  [sym_COMMENT] = sym_COMMENT,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_const_repeat1] = aux_sym_const_repeat1,
  [aux_sym_script_block_repeat1] = aux_sym_script_block_repeat1,
  [aux_sym_script_switch_repeat1] = aux_sym_script_switch_repeat1,
  [aux_sym_poryswitch_script_repeat1] = aux_sym_poryswitch_script_repeat1,
  [aux_sym_script_application_repeat1] = aux_sym_script_application_repeat1,
  [aux_sym_mart_values_repeat1] = aux_sym_mart_values_repeat1,
  [aux_sym_poryswitch_mart_repeat1] = aux_sym_poryswitch_mart_repeat1,
  [aux_sym_movement_values_repeat1] = aux_sym_movement_values_repeat1,
  [aux_sym_poryswitch_movement_repeat1] = aux_sym_poryswitch_movement_repeat1,
  [aux_sym_text_values_repeat1] = aux_sym_text_values_repeat1,
  [aux_sym_poryswitch_text_repeat1] = aux_sym_poryswitch_text_repeat1,
  [aux_sym_FORMAT_STRING_repeat1] = aux_sym_FORMAT_STRING_repeat1,
  [aux_sym_STRING_INTERPOLATED_repeat1] = aux_sym_STRING_INTERPOLATED_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_TOKEN_BI_FORMAT] = {
    .visible = true,
    .named = true,
  },
  [sym_TOKEN_KW_BREAK] = {
    .visible = true,
    .named = true,
  },
  [sym_TOKEN_KW_CASE] = {
    .visible = true,
    .named = true,
  },
  [sym_TOKEN_KW_CONST] = {
    .visible = true,
    .named = true,
  },
  [sym_TOKEN_KW_CONTINUE] = {
    .visible = true,
    .named = true,
  },
  [sym_TOKEN_KW_DEFAULT] = {
    .visible = true,
    .named = true,
  },
  [sym_TOKEN_KW_DO] = {
    .visible = true,
    .named = true,
  },
  [sym_TOKEN_KW_ELIF] = {
    .visible = true,
    .named = true,
  },
  [sym_TOKEN_KW_ELSE] = {
    .visible = true,
    .named = true,
  },
  [sym_TOKEN_KW_END] = {
    .visible = true,
    .named = true,
  },
  [sym_TOKEN_KW_IF] = {
    .visible = true,
    .named = true,
  },
  [sym_TOKEN_KW_LOCAL] = {
    .visible = true,
    .named = true,
  },
  [sym_TOKEN_KW_GLOBAL] = {
    .visible = true,
    .named = true,
  },
  [sym_TOKEN_KW_RETURN] = {
    .visible = true,
    .named = true,
  },
  [sym_TOKEN_KW_SWITCH] = {
    .visible = true,
    .named = true,
  },
  [sym_TOKEN_KW_WHILE] = {
    .visible = true,
    .named = true,
  },
  [sym_TOKEN_KW_PORYSWITCH] = {
    .visible = true,
    .named = true,
  },
  [sym_TOKEN_KW_MART] = {
    .visible = true,
    .named = true,
  },
  [sym_TOKEN_KW_MOVEMENT] = {
    .visible = true,
    .named = true,
  },
  [sym_TOKEN_KW_RAW] = {
    .visible = true,
    .named = true,
  },
  [sym_TOKEN_KW_SCRIPT] = {
    .visible = true,
    .named = true,
  },
  [sym_TOKEN_KW_TEXT] = {
    .visible = true,
    .named = true,
  },
  [sym_TOKEN_P_EQUALS] = {
    .visible = true,
    .named = true,
  },
  [sym_TOKEN_P_POPEN] = {
    .visible = true,
    .named = true,
  },
  [sym_TOKEN_P_PCLOSE] = {
    .visible = true,
    .named = true,
  },
  [sym_TOKEN_P_BOPEN] = {
    .visible = true,
    .named = true,
  },
  [sym_TOKEN_P_BCLOSE] = {
    .visible = true,
    .named = true,
  },
  [sym_TOKEN_P_SOPEN] = {
    .visible = true,
    .named = true,
  },
  [sym_TOKEN_P_SCLOSE] = {
    .visible = true,
    .named = true,
  },
  [sym_TOKEN_P_COLON] = {
    .visible = true,
    .named = true,
  },
  [sym_TOKEN_P_ASTER] = {
    .visible = true,
    .named = true,
  },
  [sym_TOKEN_P_PLUS] = {
    .visible = true,
    .named = true,
  },
  [sym_INT_LIT] = {
    .visible = true,
    .named = true,
  },
  [sym_HEX_LIT] = {
    .visible = true,
    .named = true,
  },
  [sym_BIN_LIT] = {
    .visible = true,
    .named = true,
  },
  [sym_STRING_LIT] = {
    .visible = true,
    .named = true,
  },
  [sym_STRING_INTER_START] = {
    .visible = true,
    .named = true,
  },
  [sym_STRING_INTER_MID] = {
    .visible = true,
    .named = true,
  },
  [sym_STRING_INTER_END] = {
    .visible = true,
    .named = true,
  },
  [sym_RAW_LIT] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_walk_left] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_walk_right] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_walk_up] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_walk_down] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_face_left] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_face_right] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_face_up] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_face_down] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lock] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_faceplayer] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_release] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_msgbox] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_flag] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_var] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_value] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_defeated] = {
    .visible = true,
    .named = false,
  },
  [sym_IDENT] = {
    .visible = true,
    .named = true,
  },
  [sym_SLASH_COMMENT] = {
    .visible = true,
    .named = true,
  },
  [sym_HASH_COMMENT] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_const] = {
    .visible = true,
    .named = true,
  },
  [sym_script] = {
    .visible = true,
    .named = true,
  },
  [sym_script_block] = {
    .visible = true,
    .named = true,
  },
  [sym__script_statements] = {
    .visible = false,
    .named = true,
  },
  [sym_script_if] = {
    .visible = true,
    .named = true,
  },
  [sym_script_while] = {
    .visible = true,
    .named = true,
  },
  [sym_script_do_while] = {
    .visible = true,
    .named = true,
  },
  [sym_script_switch] = {
    .visible = true,
    .named = true,
  },
  [sym_script_switch_case] = {
    .visible = true,
    .named = true,
  },
  [sym_poryswitch_case_script] = {
    .visible = true,
    .named = true,
  },
  [sym_poryswitch_script] = {
    .visible = true,
    .named = true,
  },
  [sym_script_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_script_application] = {
    .visible = true,
    .named = true,
  },
  [sym_mart] = {
    .visible = true,
    .named = true,
  },
  [sym_mart_values] = {
    .visible = true,
    .named = true,
  },
  [sym_mart_value] = {
    .visible = true,
    .named = true,
  },
  [sym_poryswitch_case_mart] = {
    .visible = true,
    .named = true,
  },
  [sym_poryswitch_mart] = {
    .visible = true,
    .named = true,
  },
  [sym_movement] = {
    .visible = true,
    .named = true,
  },
  [sym_movement_values] = {
    .visible = true,
    .named = true,
  },
  [sym_movement_value] = {
    .visible = true,
    .named = true,
  },
  [sym__movement_entry] = {
    .visible = false,
    .named = true,
  },
  [sym_poryswitch_case_movement] = {
    .visible = true,
    .named = true,
  },
  [sym_poryswitch_movement] = {
    .visible = true,
    .named = true,
  },
  [sym_raw] = {
    .visible = true,
    .named = true,
  },
  [sym_text] = {
    .visible = true,
    .named = true,
  },
  [sym_text_values] = {
    .visible = true,
    .named = true,
  },
  [sym_text_value] = {
    .visible = true,
    .named = true,
  },
  [sym_poryswitch_case_text] = {
    .visible = true,
    .named = true,
  },
  [sym_poryswitch_text] = {
    .visible = true,
    .named = true,
  },
  [sym_scope_modifier] = {
    .visible = true,
    .named = true,
  },
  [sym_NUM_LIT] = {
    .visible = true,
    .named = true,
  },
  [sym_STRING] = {
    .visible = true,
    .named = true,
  },
  [sym_FORMAT_STRING] = {
    .visible = true,
    .named = true,
  },
  [sym_STRING_INTERPOLATED] = {
    .visible = true,
    .named = true,
  },
  [sym_MOVEMENT_LIT] = {
    .visible = true,
    .named = true,
  },
  [sym_SCRIPT_0_LIT] = {
    .visible = true,
    .named = true,
  },
  [sym_SCRIPT_FN_LIT] = {
    .visible = true,
    .named = true,
  },
  [sym_COMMENT] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_const_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_script_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_script_switch_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_poryswitch_script_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_script_application_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_mart_values_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_poryswitch_mart_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_movement_values_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_poryswitch_movement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_text_values_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_poryswitch_text_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_FORMAT_STRING_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_STRING_INTERPOLATED_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_case = 1,
  field_casebody = 2,
  field_caseval = 3,
  field_defaultbody = 4,
  field_dobody = 5,
  field_docond = 6,
  field_elifbody = 7,
  field_elifcond = 8,
  field_elsebody = 9,
  field_ifbody = 10,
  field_ifcond = 11,
  field_name = 12,
  field_switch = 13,
  field_switchexpr = 14,
  field_whilebody = 15,
  field_whilecond = 16,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_case] = "case",
  [field_casebody] = "casebody",
  [field_caseval] = "caseval",
  [field_defaultbody] = "defaultbody",
  [field_dobody] = "dobody",
  [field_docond] = "docond",
  [field_elifbody] = "elifbody",
  [field_elifcond] = "elifcond",
  [field_elsebody] = "elsebody",
  [field_ifbody] = "ifbody",
  [field_ifcond] = "ifcond",
  [field_name] = "name",
  [field_switch] = "switch",
  [field_switchexpr] = "switchexpr",
  [field_whilebody] = "whilebody",
  [field_whilecond] = "whilecond",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 2},
  [5] = {.index = 5, .length = 2},
  [6] = {.index = 7, .length = 2},
  [7] = {.index = 9, .length = 1},
  [8] = {.index = 10, .length = 3},
  [9] = {.index = 13, .length = 1},
  [10] = {.index = 14, .length = 1},
  [11] = {.index = 15, .length = 1},
  [12] = {.index = 16, .length = 1},
  [13] = {.index = 17, .length = 2},
  [14] = {.index = 19, .length = 4},
  [15] = {.index = 23, .length = 5},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
  [1] =
    {field_name, 2},
  [2] =
    {field_whilebody, 1},
  [3] =
    {field_ifbody, 4},
    {field_ifcond, 2},
  [5] =
    {field_whilebody, 4},
    {field_whilecond, 2},
  [7] =
    {field_dobody, 1},
    {field_docond, 4},
  [9] =
    {field_switch, 2},
  [10] =
    {field_elsebody, 6},
    {field_ifbody, 4},
    {field_ifcond, 2},
  [13] =
    {field_switchexpr, 2},
  [14] =
    {field_case, 0},
  [15] =
    {field_caseval, 1},
  [16] =
    {field_defaultbody, 2},
  [17] =
    {field_casebody, 3},
    {field_caseval, 1},
  [19] =
    {field_elifbody, 9},
    {field_elifcond, 7},
    {field_ifbody, 4},
    {field_ifcond, 2},
  [23] =
    {field_elifbody, 9},
    {field_elifcond, 7},
    {field_elsebody, 11},
    {field_ifbody, 4},
    {field_ifcond, 2},
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
  [10] = 8,
  [11] = 4,
  [12] = 7,
  [13] = 8,
  [14] = 7,
  [15] = 7,
  [16] = 8,
  [17] = 8,
  [18] = 8,
  [19] = 7,
  [20] = 8,
  [21] = 7,
  [22] = 22,
  [23] = 8,
  [24] = 7,
  [25] = 8,
  [26] = 7,
  [27] = 8,
  [28] = 7,
  [29] = 7,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 33,
  [35] = 31,
  [36] = 36,
  [37] = 33,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 31,
  [43] = 33,
  [44] = 31,
  [45] = 32,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 31,
  [52] = 40,
  [53] = 36,
  [54] = 33,
  [55] = 55,
  [56] = 46,
  [57] = 49,
  [58] = 39,
  [59] = 33,
  [60] = 41,
  [61] = 31,
  [62] = 48,
  [63] = 38,
  [64] = 47,
  [65] = 50,
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
  [80] = 33,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 81,
  [85] = 31,
  [86] = 81,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 90,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 90,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 103,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 103,
  [111] = 107,
  [112] = 106,
  [113] = 107,
  [114] = 105,
  [115] = 109,
  [116] = 116,
  [117] = 106,
  [118] = 105,
  [119] = 55,
  [120] = 120,
  [121] = 121,
  [122] = 109,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 128,
  [131] = 126,
  [132] = 116,
  [133] = 133,
  [134] = 128,
  [135] = 135,
  [136] = 121,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 31,
  [141] = 141,
  [142] = 33,
  [143] = 143,
  [144] = 144,
  [145] = 32,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 138,
  [150] = 138,
  [151] = 146,
  [152] = 152,
  [153] = 139,
  [154] = 154,
  [155] = 139,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 148,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 31,
  [167] = 167,
  [168] = 33,
  [169] = 167,
  [170] = 161,
  [171] = 165,
  [172] = 172,
  [173] = 36,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 167,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 165,
  [183] = 183,
  [184] = 175,
  [185] = 83,
  [186] = 82,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 187,
  [198] = 198,
  [199] = 188,
  [200] = 200,
  [201] = 144,
  [202] = 202,
  [203] = 187,
  [204] = 97,
  [205] = 192,
  [206] = 206,
  [207] = 157,
  [208] = 208,
  [209] = 192,
  [210] = 198,
  [211] = 208,
  [212] = 212,
  [213] = 195,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 38,
  [219] = 39,
  [220] = 220,
  [221] = 40,
  [222] = 198,
  [223] = 47,
  [224] = 50,
  [225] = 49,
  [226] = 48,
  [227] = 41,
  [228] = 228,
  [229] = 46,
  [230] = 230,
  [231] = 33,
  [232] = 31,
  [233] = 208,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 195,
  [238] = 188,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 247,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 247,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 274,
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 249,
  [286] = 286,
  [287] = 287,
  [288] = 266,
  [289] = 269,
  [290] = 290,
  [291] = 291,
  [292] = 292,
  [293] = 239,
  [294] = 294,
  [295] = 266,
  [296] = 269,
  [297] = 297,
  [298] = 298,
  [299] = 299,
  [300] = 239,
  [301] = 240,
  [302] = 246,
  [303] = 303,
  [304] = 304,
  [305] = 264,
  [306] = 299,
  [307] = 307,
  [308] = 308,
  [309] = 240,
  [310] = 307,
  [311] = 311,
  [312] = 264,
  [313] = 299,
  [314] = 307,
  [315] = 315,
  [316] = 244,
  [317] = 256,
  [318] = 268,
  [319] = 275,
  [320] = 320,
  [321] = 244,
  [322] = 256,
  [323] = 268,
  [324] = 275,
  [325] = 320,
  [326] = 326,
  [327] = 327,
  [328] = 257,
  [329] = 320,
  [330] = 330,
  [331] = 257,
  [332] = 241,
  [333] = 243,
  [334] = 241,
  [335] = 243,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(150);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '#') ADVANCE(319);
      if (lookahead == '(') ADVANCE(187);
      if (lookahead == ')') ADVANCE(188);
      if (lookahead == '*') ADVANCE(194);
      if (lookahead == '+') ADVANCE(195);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '0') ADVANCE(196);
      if (lookahead == ':') ADVANCE(193);
      if (lookahead == '=') ADVANCE(186);
      if (lookahead == '[') ADVANCE(191);
      if (lookahead == ']') ADVANCE(192);
      if (lookahead == '`') ADVANCE(8);
      if (lookahead == 'b') ADVANCE(114);
      if (lookahead == 'c') ADVANCE(9);
      if (lookahead == 'd') ADVANCE(48);
      if (lookahead == 'e') ADVANCE(82);
      if (lookahead == 'f') ADVANCE(10);
      if (lookahead == 'g') ADVANCE(87);
      if (lookahead == 'i') ADVANCE(59);
      if (lookahead == 'l') ADVANCE(101);
      if (lookahead == 'm') ADVANCE(17);
      if (lookahead == 'p') ADVANCE(104);
      if (lookahead == 'r') ADVANCE(11);
      if (lookahead == 's') ADVANCE(34);
      if (lookahead == 't') ADVANCE(40);
      if (lookahead == 'v') ADVANCE(12);
      if (lookahead == 'w') ADVANCE(13);
      if (lookahead == '{') ADVANCE(189);
      if (lookahead == '}') ADVANCE(190);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(197);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '(') ADVANCE(187);
      if (lookahead == ')') ADVANCE(188);
      if (lookahead == '*') ADVANCE(194);
      if (lookahead == '0') ADVANCE(196);
      if (lookahead == '}') ADVANCE(190);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(197);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(200);
      if (lookahead == '{') ADVANCE(201);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(203);
      if (lookahead == '{') ADVANCE(202);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == ')') ADVANCE(188);
      if (lookahead == 'b') ADVANCE(296);
      if (lookahead == 'c') ADVANCE(291);
      if (lookahead == 'd') ADVANCE(255);
      if (lookahead == 'e') ADVANCE(285);
      if (lookahead == 'f') ADVANCE(229);
      if (lookahead == 'i') ADVANCE(260);
      if (lookahead == 'l') ADVANCE(292);
      if (lookahead == 'm') ADVANCE(298);
      if (lookahead == 'p') ADVANCE(290);
      if (lookahead == 'r') ADVANCE(245);
      if (lookahead == 's') ADVANCE(312);
      if (lookahead == 'v') ADVANCE(230);
      if (lookahead == 'w') ADVANCE(268);
      if (lookahead == '}') ADVANCE(190);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 5:
      if (lookahead == '/') ADVANCE(318);
      END_STATE();
    case 6:
      if (lookahead == '_') ADVANCE(38);
      if (lookahead == 'p') ADVANCE(88);
      END_STATE();
    case 7:
      if (lookahead == '_') ADVANCE(39);
      END_STATE();
    case 8:
      if (lookahead == '`') ADVANCE(204);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(118);
      if (lookahead == 'o') ADVANCE(94);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(35);
      if (lookahead == 'l') ADVANCE(14);
      if (lookahead == 'o') ADVANCE(110);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(140);
      if (lookahead == 'e') ADVANCE(91);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(86);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(83);
      if (lookahead == 'h') ADVANCE(75);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(64);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(147);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(81);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(111);
      if (lookahead == 'o') ADVANCE(139);
      if (lookahead == 's') ADVANCE(65);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(135);
      if (lookahead == 'e') ADVANCE(20);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(84);
      if (lookahead == 'k') ADVANCE(213);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(134);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(124);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(85);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(120);
      END_STATE();
    case 24:
      if (lookahead == 'b') ADVANCE(296);
      if (lookahead == 'c') ADVANCE(231);
      if (lookahead == 'd') ADVANCE(253);
      if (lookahead == 'e') ADVANCE(285);
      if (lookahead == 'f') ADVANCE(229);
      if (lookahead == 'i') ADVANCE(260);
      if (lookahead == 'l') ADVANCE(292);
      if (lookahead == 'm') ADVANCE(298);
      if (lookahead == 'p') ADVANCE(290);
      if (lookahead == 'r') ADVANCE(245);
      if (lookahead == 's') ADVANCE(312);
      if (lookahead == 'v') ADVANCE(230);
      if (lookahead == 'w') ADVANCE(268);
      if (lookahead == '}') ADVANCE(190);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(24)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 25:
      if (lookahead == 'b') ADVANCE(296);
      if (lookahead == 'c') ADVANCE(231);
      if (lookahead == 'd') ADVANCE(253);
      if (lookahead == 'e') ADVANCE(276);
      if (lookahead == 'f') ADVANCE(229);
      if (lookahead == 'i') ADVANCE(260);
      if (lookahead == 'l') ADVANCE(292);
      if (lookahead == 'm') ADVANCE(298);
      if (lookahead == 'p') ADVANCE(290);
      if (lookahead == 'r') ADVANCE(245);
      if (lookahead == 's') ADVANCE(312);
      if (lookahead == 'v') ADVANCE(230);
      if (lookahead == 'w') ADVANCE(268);
      if (lookahead == '}') ADVANCE(190);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(25)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 26:
      if (lookahead == 'b') ADVANCE(296);
      if (lookahead == 'c') ADVANCE(231);
      if (lookahead == 'd') ADVANCE(253);
      if (lookahead == 'e') ADVANCE(283);
      if (lookahead == 'f') ADVANCE(229);
      if (lookahead == 'i') ADVANCE(260);
      if (lookahead == 'l') ADVANCE(292);
      if (lookahead == 'm') ADVANCE(298);
      if (lookahead == 'p') ADVANCE(290);
      if (lookahead == 'r') ADVANCE(245);
      if (lookahead == 's') ADVANCE(312);
      if (lookahead == 'v') ADVANCE(230);
      if (lookahead == 'w') ADVANCE(268);
      if (lookahead == '}') ADVANCE(190);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 27:
      if (lookahead == 'b') ADVANCE(296);
      if (lookahead == 'c') ADVANCE(291);
      if (lookahead == 'd') ADVANCE(255);
      if (lookahead == 'e') ADVANCE(276);
      if (lookahead == 'f') ADVANCE(229);
      if (lookahead == 'i') ADVANCE(260);
      if (lookahead == 'l') ADVANCE(292);
      if (lookahead == 'm') ADVANCE(298);
      if (lookahead == 'p') ADVANCE(290);
      if (lookahead == 'r') ADVANCE(245);
      if (lookahead == 's') ADVANCE(312);
      if (lookahead == 'v') ADVANCE(230);
      if (lookahead == 'w') ADVANCE(268);
      if (lookahead == '}') ADVANCE(190);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 28:
      if (lookahead == 'b') ADVANCE(296);
      if (lookahead == 'c') ADVANCE(291);
      if (lookahead == 'd') ADVANCE(255);
      if (lookahead == 'e') ADVANCE(283);
      if (lookahead == 'f') ADVANCE(229);
      if (lookahead == 'i') ADVANCE(260);
      if (lookahead == 'l') ADVANCE(292);
      if (lookahead == 'm') ADVANCE(298);
      if (lookahead == 'p') ADVANCE(290);
      if (lookahead == 'r') ADVANCE(245);
      if (lookahead == 's') ADVANCE(312);
      if (lookahead == 'v') ADVANCE(230);
      if (lookahead == 'w') ADVANCE(268);
      if (lookahead == '}') ADVANCE(190);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(28)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 29:
      if (lookahead == 'b') ADVANCE(102);
      END_STATE();
    case 30:
      if (lookahead == 'b') ADVANCE(22);
      END_STATE();
    case 31:
      if (lookahead == 'c') ADVANCE(19);
      END_STATE();
    case 32:
      if (lookahead == 'c') ADVANCE(68);
      END_STATE();
    case 33:
      if (lookahead == 'c') ADVANCE(69);
      END_STATE();
    case 34:
      if (lookahead == 'c') ADVANCE(116);
      if (lookahead == 'w') ADVANCE(74);
      END_STATE();
    case 35:
      if (lookahead == 'c') ADVANCE(43);
      END_STATE();
    case 36:
      if (lookahead == 'd') ADVANCE(167);
      END_STATE();
    case 37:
      if (lookahead == 'd') ADVANCE(227);
      END_STATE();
    case 38:
      if (lookahead == 'd') ADVANCE(103);
      if (lookahead == 'l') ADVANCE(52);
      if (lookahead == 'r') ADVANCE(77);
      if (lookahead == 'u') ADVANCE(106);
      END_STATE();
    case 39:
      if (lookahead == 'd') ADVANCE(105);
      if (lookahead == 'l') ADVANCE(58);
      if (lookahead == 'r') ADVANCE(79);
      if (lookahead == 'u') ADVANCE(107);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(145);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(154);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(165);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(6);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(225);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(177);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(217);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(157);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(61);
      if (lookahead == 'o') ADVANCE(161);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(92);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(16);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(98);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(277);
      if (lookahead == '}') ADVANCE(190);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(54)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(284);
      if (lookahead == '}') ADVANCE(190);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(55)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(113);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(63);
      END_STATE();
    case 59:
      if (lookahead == 'f') ADVANCE(169);
      END_STATE();
    case 60:
      if (lookahead == 'f') ADVANCE(163);
      END_STATE();
    case 61:
      if (lookahead == 'f') ADVANCE(18);
      END_STATE();
    case 62:
      if (lookahead == 'f') ADVANCE(128);
      END_STATE();
    case 63:
      if (lookahead == 'f') ADVANCE(129);
      END_STATE();
    case 64:
      if (lookahead == 'g') ADVANCE(221);
      END_STATE();
    case 65:
      if (lookahead == 'g') ADVANCE(29);
      END_STATE();
    case 66:
      if (lookahead == 'g') ADVANCE(70);
      END_STATE();
    case 67:
      if (lookahead == 'g') ADVANCE(71);
      END_STATE();
    case 68:
      if (lookahead == 'h') ADVANCE(175);
      END_STATE();
    case 69:
      if (lookahead == 'h') ADVANCE(179);
      END_STATE();
    case 70:
      if (lookahead == 'h') ADVANCE(130);
      END_STATE();
    case 71:
      if (lookahead == 'h') ADVANCE(131);
      END_STATE();
    case 72:
      if (lookahead == 'i') ADVANCE(109);
      END_STATE();
    case 73:
      if (lookahead == 'i') ADVANCE(99);
      END_STATE();
    case 74:
      if (lookahead == 'i') ADVANCE(132);
      END_STATE();
    case 75:
      if (lookahead == 'i') ADVANCE(89);
      END_STATE();
    case 76:
      if (lookahead == 'i') ADVANCE(60);
      if (lookahead == 's') ADVANCE(42);
      END_STATE();
    case 77:
      if (lookahead == 'i') ADVANCE(66);
      END_STATE();
    case 78:
      if (lookahead == 'i') ADVANCE(133);
      END_STATE();
    case 79:
      if (lookahead == 'i') ADVANCE(67);
      END_STATE();
    case 80:
      if (lookahead == 'k') ADVANCE(7);
      END_STATE();
    case 81:
      if (lookahead == 'k') ADVANCE(152);
      END_STATE();
    case 82:
      if (lookahead == 'l') ADVANCE(76);
      if (lookahead == 'n') ADVANCE(36);
      END_STATE();
    case 83:
      if (lookahead == 'l') ADVANCE(80);
      END_STATE();
    case 84:
      if (lookahead == 'l') ADVANCE(171);
      END_STATE();
    case 85:
      if (lookahead == 'l') ADVANCE(172);
      END_STATE();
    case 86:
      if (lookahead == 'l') ADVANCE(137);
      if (lookahead == 'r') ADVANCE(223);
      END_STATE();
    case 87:
      if (lookahead == 'l') ADVANCE(100);
      END_STATE();
    case 88:
      if (lookahead == 'l') ADVANCE(15);
      END_STATE();
    case 89:
      if (lookahead == 'l') ADVANCE(45);
      END_STATE();
    case 90:
      if (lookahead == 'l') ADVANCE(126);
      END_STATE();
    case 91:
      if (lookahead == 'l') ADVANCE(56);
      if (lookahead == 't') ADVANCE(136);
      END_STATE();
    case 92:
      if (lookahead == 'm') ADVANCE(53);
      END_STATE();
    case 93:
      if (lookahead == 'm') ADVANCE(21);
      END_STATE();
    case 94:
      if (lookahead == 'n') ADVANCE(119);
      END_STATE();
    case 95:
      if (lookahead == 'n') ADVANCE(173);
      END_STATE();
    case 96:
      if (lookahead == 'n') ADVANCE(212);
      END_STATE();
    case 97:
      if (lookahead == 'n') ADVANCE(208);
      END_STATE();
    case 98:
      if (lookahead == 'n') ADVANCE(127);
      END_STATE();
    case 99:
      if (lookahead == 'n') ADVANCE(138);
      END_STATE();
    case 100:
      if (lookahead == 'o') ADVANCE(30);
      END_STATE();
    case 101:
      if (lookahead == 'o') ADVANCE(31);
      END_STATE();
    case 102:
      if (lookahead == 'o') ADVANCE(144);
      END_STATE();
    case 103:
      if (lookahead == 'o') ADVANCE(141);
      END_STATE();
    case 104:
      if (lookahead == 'o') ADVANCE(112);
      END_STATE();
    case 105:
      if (lookahead == 'o') ADVANCE(142);
      END_STATE();
    case 106:
      if (lookahead == 'p') ADVANCE(211);
      END_STATE();
    case 107:
      if (lookahead == 'p') ADVANCE(207);
      END_STATE();
    case 108:
      if (lookahead == 'p') ADVANCE(290);
      if (lookahead == '}') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(108)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 109:
      if (lookahead == 'p') ADVANCE(125);
      END_STATE();
    case 110:
      if (lookahead == 'r') ADVANCE(93);
      END_STATE();
    case 111:
      if (lookahead == 'r') ADVANCE(121);
      END_STATE();
    case 112:
      if (lookahead == 'r') ADVANCE(146);
      END_STATE();
    case 113:
      if (lookahead == 'r') ADVANCE(215);
      END_STATE();
    case 114:
      if (lookahead == 'r') ADVANCE(51);
      END_STATE();
    case 115:
      if (lookahead == 'r') ADVANCE(95);
      END_STATE();
    case 116:
      if (lookahead == 'r') ADVANCE(72);
      END_STATE();
    case 117:
      if (lookahead == 's') ADVANCE(143);
      END_STATE();
    case 118:
      if (lookahead == 's') ADVANCE(41);
      END_STATE();
    case 119:
      if (lookahead == 's') ADVANCE(123);
      if (lookahead == 't') ADVANCE(73);
      END_STATE();
    case 120:
      if (lookahead == 's') ADVANCE(46);
      END_STATE();
    case 121:
      if (lookahead == 't') ADVANCE(181);
      END_STATE();
    case 122:
      if (lookahead == 't') ADVANCE(185);
      END_STATE();
    case 123:
      if (lookahead == 't') ADVANCE(156);
      END_STATE();
    case 124:
      if (lookahead == 't') ADVANCE(151);
      END_STATE();
    case 125:
      if (lookahead == 't') ADVANCE(184);
      END_STATE();
    case 126:
      if (lookahead == 't') ADVANCE(159);
      END_STATE();
    case 127:
      if (lookahead == 't') ADVANCE(182);
      END_STATE();
    case 128:
      if (lookahead == 't') ADVANCE(209);
      END_STATE();
    case 129:
      if (lookahead == 't') ADVANCE(205);
      END_STATE();
    case 130:
      if (lookahead == 't') ADVANCE(210);
      END_STATE();
    case 131:
      if (lookahead == 't') ADVANCE(206);
      END_STATE();
    case 132:
      if (lookahead == 't') ADVANCE(32);
      END_STATE();
    case 133:
      if (lookahead == 't') ADVANCE(33);
      END_STATE();
    case 134:
      if (lookahead == 't') ADVANCE(49);
      END_STATE();
    case 135:
      if (lookahead == 'u') ADVANCE(90);
      END_STATE();
    case 136:
      if (lookahead == 'u') ADVANCE(115);
      END_STATE();
    case 137:
      if (lookahead == 'u') ADVANCE(44);
      END_STATE();
    case 138:
      if (lookahead == 'u') ADVANCE(47);
      END_STATE();
    case 139:
      if (lookahead == 'v') ADVANCE(50);
      END_STATE();
    case 140:
      if (lookahead == 'w') ADVANCE(183);
      END_STATE();
    case 141:
      if (lookahead == 'w') ADVANCE(96);
      END_STATE();
    case 142:
      if (lookahead == 'w') ADVANCE(97);
      END_STATE();
    case 143:
      if (lookahead == 'w') ADVANCE(78);
      END_STATE();
    case 144:
      if (lookahead == 'x') ADVANCE(219);
      END_STATE();
    case 145:
      if (lookahead == 'x') ADVANCE(122);
      END_STATE();
    case 146:
      if (lookahead == 'y') ADVANCE(117);
      END_STATE();
    case 147:
      if (lookahead == 'y') ADVANCE(57);
      END_STATE();
    case 148:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(199);
      END_STATE();
    case 149:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(198);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_TOKEN_BI_FORMAT);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_TOKEN_KW_BREAK);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_TOKEN_KW_BREAK);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_TOKEN_KW_CASE);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_TOKEN_KW_CASE);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_TOKEN_KW_CONST);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_TOKEN_KW_CONTINUE);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_TOKEN_KW_CONTINUE);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_TOKEN_KW_DEFAULT);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_TOKEN_KW_DEFAULT);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_TOKEN_KW_DO);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_TOKEN_KW_DO);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_TOKEN_KW_ELIF);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_TOKEN_KW_ELIF);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_TOKEN_KW_ELSE);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_TOKEN_KW_ELSE);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_TOKEN_KW_END);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_TOKEN_KW_END);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_TOKEN_KW_IF);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_TOKEN_KW_IF);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_TOKEN_KW_LOCAL);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_TOKEN_KW_GLOBAL);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_TOKEN_KW_RETURN);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_TOKEN_KW_RETURN);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_TOKEN_KW_SWITCH);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_TOKEN_KW_SWITCH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_TOKEN_KW_WHILE);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_TOKEN_KW_WHILE);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_TOKEN_KW_PORYSWITCH);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_TOKEN_KW_PORYSWITCH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_TOKEN_KW_MART);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_TOKEN_KW_MOVEMENT);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_TOKEN_KW_RAW);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_TOKEN_KW_SCRIPT);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_TOKEN_KW_TEXT);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_TOKEN_P_EQUALS);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_TOKEN_P_POPEN);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_TOKEN_P_PCLOSE);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_TOKEN_P_BOPEN);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_TOKEN_P_BCLOSE);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_TOKEN_P_SOPEN);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_TOKEN_P_SCLOSE);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_TOKEN_P_COLON);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_TOKEN_P_ASTER);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_TOKEN_P_PLUS);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_INT_LIT);
      if (lookahead == 'b') ADVANCE(148);
      if (lookahead == 'x') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(197);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_INT_LIT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(197);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_HEX_LIT);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(198);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_BIN_LIT);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(199);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_STRING_LIT);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_STRING_INTER_START);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_STRING_INTER_MID);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_STRING_INTER_END);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_RAW_LIT);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_walk_left);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_walk_right);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_walk_up);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_walk_down);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_face_left);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_face_right);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_face_up);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_face_down);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_lock);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_lock);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_faceplayer);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_faceplayer);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_release);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_release);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_msgbox);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_msgbox);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_flag);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_flag);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_var);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_var);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_value);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_value);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_defeated);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_defeated);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'a') ADVANCE(242);
      if (lookahead == 'l') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'a') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'a') ADVANCE(299);
      if (lookahead == 'o') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'a') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'a') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'a') ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'a') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'a') ADVANCE(308);
      if (lookahead == 'e') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'a') ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'b') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'c') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'c') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'c') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'c') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'd') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'd') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'e') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'e') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'e') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'e') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'e') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'e') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'e') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'e') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'e') ADVANCE(261);
      if (lookahead == 'o') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'e') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'e') ADVANCE(263);
      if (lookahead == 'o') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'e') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'e') ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'e') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'e') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'f') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'f') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'f') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'f') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'g') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'g') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'h') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'h') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'h') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'i') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'i') ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'i') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'i') ADVANCE(262);
      if (lookahead == 's') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'i') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'k') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'k') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'l') ADVANCE(272);
      if (lookahead == 'n') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'l') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'l') ADVANCE(310);
      if (lookahead == 'r') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'l') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'l') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'l') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'l') ADVANCE(259);
      if (lookahead == 't') ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'l') ADVANCE(301);
      if (lookahead == 'n') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'l') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'n') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'n') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'n') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'n') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'o') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'o') ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'o') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'o') ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'p') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'r') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'r') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'r') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'r') ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 's') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 's') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 's') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 's') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 's') ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 't') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 't') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 't') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 't') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 't') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'u') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'u') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'u') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'u') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'w') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'w') ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'x') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'y') ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'y') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_IDENT);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(317);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_SLASH_COMMENT);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(318);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_HASH_COMMENT);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(319);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 24},
  [3] = {.lex_state = 24},
  [4] = {.lex_state = 24},
  [5] = {.lex_state = 24},
  [6] = {.lex_state = 24},
  [7] = {.lex_state = 4},
  [8] = {.lex_state = 4},
  [9] = {.lex_state = 4},
  [10] = {.lex_state = 4},
  [11] = {.lex_state = 4},
  [12] = {.lex_state = 4},
  [13] = {.lex_state = 4},
  [14] = {.lex_state = 4},
  [15] = {.lex_state = 4},
  [16] = {.lex_state = 4},
  [17] = {.lex_state = 4},
  [18] = {.lex_state = 4},
  [19] = {.lex_state = 4},
  [20] = {.lex_state = 4},
  [21] = {.lex_state = 4},
  [22] = {.lex_state = 4},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 4},
  [25] = {.lex_state = 4},
  [26] = {.lex_state = 4},
  [27] = {.lex_state = 4},
  [28] = {.lex_state = 4},
  [29] = {.lex_state = 4},
  [30] = {.lex_state = 4},
  [31] = {.lex_state = 25},
  [32] = {.lex_state = 25},
  [33] = {.lex_state = 25},
  [34] = {.lex_state = 26},
  [35] = {.lex_state = 26},
  [36] = {.lex_state = 26},
  [37] = {.lex_state = 27},
  [38] = {.lex_state = 24},
  [39] = {.lex_state = 24},
  [40] = {.lex_state = 24},
  [41] = {.lex_state = 24},
  [42] = {.lex_state = 24},
  [43] = {.lex_state = 24},
  [44] = {.lex_state = 27},
  [45] = {.lex_state = 27},
  [46] = {.lex_state = 24},
  [47] = {.lex_state = 24},
  [48] = {.lex_state = 24},
  [49] = {.lex_state = 24},
  [50] = {.lex_state = 24},
  [51] = {.lex_state = 28},
  [52] = {.lex_state = 4},
  [53] = {.lex_state = 28},
  [54] = {.lex_state = 28},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 4},
  [57] = {.lex_state = 4},
  [58] = {.lex_state = 4},
  [59] = {.lex_state = 4},
  [60] = {.lex_state = 4},
  [61] = {.lex_state = 4},
  [62] = {.lex_state = 4},
  [63] = {.lex_state = 4},
  [64] = {.lex_state = 4},
  [65] = {.lex_state = 4},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 1},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 1},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 1},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 1},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 1},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 1},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 1},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 1},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 1},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 1},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 1},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 108},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 108},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 1},
  [138] = {.lex_state = 1},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 54},
  [141] = {.lex_state = 1},
  [142] = {.lex_state = 54},
  [143] = {.lex_state = 1},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 54},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 1},
  [150] = {.lex_state = 1},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 1},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 1},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 1},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 1},
  [159] = {.lex_state = 1},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 108},
  [162] = {.lex_state = 1},
  [163] = {.lex_state = 1},
  [164] = {.lex_state = 1},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 55},
  [167] = {.lex_state = 1},
  [168] = {.lex_state = 55},
  [169] = {.lex_state = 1},
  [170] = {.lex_state = 108},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 1},
  [173] = {.lex_state = 55},
  [174] = {.lex_state = 108},
  [175] = {.lex_state = 108},
  [176] = {.lex_state = 1},
  [177] = {.lex_state = 1},
  [178] = {.lex_state = 1},
  [179] = {.lex_state = 1},
  [180] = {.lex_state = 1},
  [181] = {.lex_state = 1},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 1},
  [184] = {.lex_state = 108},
  [185] = {.lex_state = 1},
  [186] = {.lex_state = 1},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 1},
  [190] = {.lex_state = 1},
  [191] = {.lex_state = 1},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 1},
  [201] = {.lex_state = 1},
  [202] = {.lex_state = 1},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 1},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 1},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 1},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 1},
  [215] = {.lex_state = 1},
  [216] = {.lex_state = 108},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 1},
  [219] = {.lex_state = 1},
  [220] = {.lex_state = 1},
  [221] = {.lex_state = 1},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 1},
  [224] = {.lex_state = 1},
  [225] = {.lex_state = 1},
  [226] = {.lex_state = 1},
  [227] = {.lex_state = 1},
  [228] = {.lex_state = 1},
  [229] = {.lex_state = 1},
  [230] = {.lex_state = 1},
  [231] = {.lex_state = 1},
  [232] = {.lex_state = 1},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 1},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 1},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 1},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 1},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 1},
  [258] = {.lex_state = 1},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 1},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 1},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 1},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 1},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 1},
  [286] = {.lex_state = 1},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 1},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 1},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 1},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 1},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_TOKEN_BI_FORMAT] = ACTIONS(1),
    [sym_TOKEN_KW_BREAK] = ACTIONS(1),
    [sym_TOKEN_KW_CASE] = ACTIONS(1),
    [sym_TOKEN_KW_CONST] = ACTIONS(1),
    [sym_TOKEN_KW_CONTINUE] = ACTIONS(1),
    [sym_TOKEN_KW_DEFAULT] = ACTIONS(1),
    [sym_TOKEN_KW_DO] = ACTIONS(1),
    [sym_TOKEN_KW_ELIF] = ACTIONS(1),
    [sym_TOKEN_KW_ELSE] = ACTIONS(1),
    [sym_TOKEN_KW_END] = ACTIONS(1),
    [sym_TOKEN_KW_IF] = ACTIONS(1),
    [sym_TOKEN_KW_LOCAL] = ACTIONS(1),
    [sym_TOKEN_KW_GLOBAL] = ACTIONS(1),
    [sym_TOKEN_KW_RETURN] = ACTIONS(1),
    [sym_TOKEN_KW_SWITCH] = ACTIONS(1),
    [sym_TOKEN_KW_WHILE] = ACTIONS(1),
    [sym_TOKEN_KW_PORYSWITCH] = ACTIONS(1),
    [sym_TOKEN_KW_MART] = ACTIONS(1),
    [sym_TOKEN_KW_MOVEMENT] = ACTIONS(1),
    [sym_TOKEN_KW_RAW] = ACTIONS(1),
    [sym_TOKEN_KW_SCRIPT] = ACTIONS(1),
    [sym_TOKEN_KW_TEXT] = ACTIONS(1),
    [sym_TOKEN_P_EQUALS] = ACTIONS(1),
    [sym_TOKEN_P_POPEN] = ACTIONS(1),
    [sym_TOKEN_P_PCLOSE] = ACTIONS(1),
    [sym_TOKEN_P_BOPEN] = ACTIONS(1),
    [sym_TOKEN_P_BCLOSE] = ACTIONS(1),
    [sym_TOKEN_P_SOPEN] = ACTIONS(1),
    [sym_TOKEN_P_SCLOSE] = ACTIONS(1),
    [sym_TOKEN_P_COLON] = ACTIONS(1),
    [sym_TOKEN_P_ASTER] = ACTIONS(1),
    [sym_TOKEN_P_PLUS] = ACTIONS(1),
    [sym_INT_LIT] = ACTIONS(1),
    [sym_HEX_LIT] = ACTIONS(1),
    [sym_BIN_LIT] = ACTIONS(1),
    [sym_STRING_LIT] = ACTIONS(1),
    [sym_STRING_INTER_START] = ACTIONS(1),
    [sym_RAW_LIT] = ACTIONS(1),
    [anon_sym_walk_left] = ACTIONS(1),
    [anon_sym_walk_right] = ACTIONS(1),
    [anon_sym_walk_up] = ACTIONS(1),
    [anon_sym_walk_down] = ACTIONS(1),
    [anon_sym_face_left] = ACTIONS(1),
    [anon_sym_face_right] = ACTIONS(1),
    [anon_sym_face_up] = ACTIONS(1),
    [anon_sym_face_down] = ACTIONS(1),
    [anon_sym_lock] = ACTIONS(1),
    [anon_sym_faceplayer] = ACTIONS(1),
    [anon_sym_release] = ACTIONS(1),
    [anon_sym_msgbox] = ACTIONS(1),
    [anon_sym_flag] = ACTIONS(1),
    [anon_sym_var] = ACTIONS(1),
    [anon_sym_value] = ACTIONS(1),
    [anon_sym_defeated] = ACTIONS(1),
    [sym_SLASH_COMMENT] = ACTIONS(1),
    [sym_HASH_COMMENT] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(308),
    [sym_statement] = STATE(66),
    [sym_const] = STATE(102),
    [sym_script] = STATE(102),
    [sym_mart] = STATE(102),
    [sym_movement] = STATE(102),
    [sym_raw] = STATE(102),
    [sym_text] = STATE(102),
    [sym_COMMENT] = STATE(102),
    [aux_sym_source_file_repeat1] = STATE(66),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_TOKEN_KW_CONST] = ACTIONS(5),
    [sym_TOKEN_KW_MART] = ACTIONS(7),
    [sym_TOKEN_KW_MOVEMENT] = ACTIONS(9),
    [sym_TOKEN_KW_RAW] = ACTIONS(11),
    [sym_TOKEN_KW_SCRIPT] = ACTIONS(13),
    [sym_TOKEN_KW_TEXT] = ACTIONS(15),
    [sym_SLASH_COMMENT] = ACTIONS(17),
    [sym_HASH_COMMENT] = ACTIONS(17),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 12,
    ACTIONS(23), 1,
      sym_TOKEN_KW_DO,
    ACTIONS(25), 1,
      sym_TOKEN_KW_IF,
    ACTIONS(27), 1,
      sym_TOKEN_KW_SWITCH,
    ACTIONS(29), 1,
      sym_TOKEN_KW_WHILE,
    ACTIONS(31), 1,
      sym_TOKEN_KW_PORYSWITCH,
    ACTIONS(33), 1,
      sym_TOKEN_P_BCLOSE,
    STATE(301), 1,
      sym_SCRIPT_FN_LIT,
    ACTIONS(21), 2,
      sym_TOKEN_KW_CASE,
      sym_TOKEN_KW_DEFAULT,
    ACTIONS(35), 3,
      anon_sym_lock,
      anon_sym_faceplayer,
      anon_sym_release,
    ACTIONS(19), 5,
      sym_TOKEN_KW_BREAK,
      sym_TOKEN_KW_CONTINUE,
      sym_TOKEN_KW_END,
      sym_TOKEN_KW_RETURN,
      sym_IDENT,
    ACTIONS(37), 5,
      anon_sym_msgbox,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_value,
      anon_sym_defeated,
    STATE(4), 9,
      sym__script_statements,
      sym_script_if,
      sym_script_while,
      sym_script_do_while,
      sym_script_switch,
      sym_poryswitch_script,
      sym_script_application,
      sym_SCRIPT_0_LIT,
      aux_sym_script_block_repeat1,
  [56] = 12,
    ACTIONS(23), 1,
      sym_TOKEN_KW_DO,
    ACTIONS(25), 1,
      sym_TOKEN_KW_IF,
    ACTIONS(27), 1,
      sym_TOKEN_KW_SWITCH,
    ACTIONS(29), 1,
      sym_TOKEN_KW_WHILE,
    ACTIONS(31), 1,
      sym_TOKEN_KW_PORYSWITCH,
    ACTIONS(43), 1,
      sym_TOKEN_P_BCLOSE,
    STATE(301), 1,
      sym_SCRIPT_FN_LIT,
    ACTIONS(41), 2,
      sym_TOKEN_KW_CASE,
      sym_TOKEN_KW_DEFAULT,
    ACTIONS(35), 3,
      anon_sym_lock,
      anon_sym_faceplayer,
      anon_sym_release,
    ACTIONS(37), 5,
      anon_sym_msgbox,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_value,
      anon_sym_defeated,
    ACTIONS(39), 5,
      sym_TOKEN_KW_BREAK,
      sym_TOKEN_KW_CONTINUE,
      sym_TOKEN_KW_END,
      sym_TOKEN_KW_RETURN,
      sym_IDENT,
    STATE(2), 9,
      sym__script_statements,
      sym_script_if,
      sym_script_while,
      sym_script_do_while,
      sym_script_switch,
      sym_poryswitch_script,
      sym_script_application,
      sym_SCRIPT_0_LIT,
      aux_sym_script_block_repeat1,
  [112] = 12,
    ACTIONS(50), 1,
      sym_TOKEN_KW_DO,
    ACTIONS(53), 1,
      sym_TOKEN_KW_IF,
    ACTIONS(56), 1,
      sym_TOKEN_KW_SWITCH,
    ACTIONS(59), 1,
      sym_TOKEN_KW_WHILE,
    ACTIONS(62), 1,
      sym_TOKEN_KW_PORYSWITCH,
    ACTIONS(65), 1,
      sym_TOKEN_P_BCLOSE,
    STATE(301), 1,
      sym_SCRIPT_FN_LIT,
    ACTIONS(48), 2,
      sym_TOKEN_KW_CASE,
      sym_TOKEN_KW_DEFAULT,
    ACTIONS(67), 3,
      anon_sym_lock,
      anon_sym_faceplayer,
      anon_sym_release,
    ACTIONS(45), 5,
      sym_TOKEN_KW_BREAK,
      sym_TOKEN_KW_CONTINUE,
      sym_TOKEN_KW_END,
      sym_TOKEN_KW_RETURN,
      sym_IDENT,
    ACTIONS(70), 5,
      anon_sym_msgbox,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_value,
      anon_sym_defeated,
    STATE(4), 9,
      sym__script_statements,
      sym_script_if,
      sym_script_while,
      sym_script_do_while,
      sym_script_switch,
      sym_poryswitch_script,
      sym_script_application,
      sym_SCRIPT_0_LIT,
      aux_sym_script_block_repeat1,
  [168] = 12,
    ACTIONS(23), 1,
      sym_TOKEN_KW_DO,
    ACTIONS(25), 1,
      sym_TOKEN_KW_IF,
    ACTIONS(27), 1,
      sym_TOKEN_KW_SWITCH,
    ACTIONS(29), 1,
      sym_TOKEN_KW_WHILE,
    ACTIONS(31), 1,
      sym_TOKEN_KW_PORYSWITCH,
    ACTIONS(75), 1,
      sym_TOKEN_P_BCLOSE,
    STATE(301), 1,
      sym_SCRIPT_FN_LIT,
    ACTIONS(73), 2,
      sym_TOKEN_KW_CASE,
      sym_TOKEN_KW_DEFAULT,
    ACTIONS(35), 3,
      anon_sym_lock,
      anon_sym_faceplayer,
      anon_sym_release,
    ACTIONS(19), 5,
      sym_TOKEN_KW_BREAK,
      sym_TOKEN_KW_CONTINUE,
      sym_TOKEN_KW_END,
      sym_TOKEN_KW_RETURN,
      sym_IDENT,
    ACTIONS(37), 5,
      anon_sym_msgbox,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_value,
      anon_sym_defeated,
    STATE(4), 9,
      sym__script_statements,
      sym_script_if,
      sym_script_while,
      sym_script_do_while,
      sym_script_switch,
      sym_poryswitch_script,
      sym_script_application,
      sym_SCRIPT_0_LIT,
      aux_sym_script_block_repeat1,
  [224] = 12,
    ACTIONS(23), 1,
      sym_TOKEN_KW_DO,
    ACTIONS(25), 1,
      sym_TOKEN_KW_IF,
    ACTIONS(27), 1,
      sym_TOKEN_KW_SWITCH,
    ACTIONS(29), 1,
      sym_TOKEN_KW_WHILE,
    ACTIONS(31), 1,
      sym_TOKEN_KW_PORYSWITCH,
    ACTIONS(81), 1,
      sym_TOKEN_P_BCLOSE,
    STATE(301), 1,
      sym_SCRIPT_FN_LIT,
    ACTIONS(79), 2,
      sym_TOKEN_KW_CASE,
      sym_TOKEN_KW_DEFAULT,
    ACTIONS(35), 3,
      anon_sym_lock,
      anon_sym_faceplayer,
      anon_sym_release,
    ACTIONS(37), 5,
      anon_sym_msgbox,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_value,
      anon_sym_defeated,
    ACTIONS(77), 5,
      sym_TOKEN_KW_BREAK,
      sym_TOKEN_KW_CONTINUE,
      sym_TOKEN_KW_END,
      sym_TOKEN_KW_RETURN,
      sym_IDENT,
    STATE(5), 9,
      sym__script_statements,
      sym_script_if,
      sym_script_while,
      sym_script_do_while,
      sym_script_switch,
      sym_poryswitch_script,
      sym_script_application,
      sym_SCRIPT_0_LIT,
      aux_sym_script_block_repeat1,
  [280] = 11,
    ACTIONS(85), 1,
      sym_TOKEN_KW_DO,
    ACTIONS(87), 1,
      sym_TOKEN_KW_IF,
    ACTIONS(89), 1,
      sym_TOKEN_KW_SWITCH,
    ACTIONS(91), 1,
      sym_TOKEN_KW_WHILE,
    ACTIONS(93), 1,
      sym_TOKEN_KW_PORYSWITCH,
    ACTIONS(95), 1,
      sym_TOKEN_P_BCLOSE,
    STATE(240), 1,
      sym_SCRIPT_FN_LIT,
    ACTIONS(97), 3,
      anon_sym_lock,
      anon_sym_faceplayer,
      anon_sym_release,
    ACTIONS(37), 5,
      anon_sym_msgbox,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_value,
      anon_sym_defeated,
    ACTIONS(83), 5,
      sym_TOKEN_KW_BREAK,
      sym_TOKEN_KW_CONTINUE,
      sym_TOKEN_KW_END,
      sym_TOKEN_KW_RETURN,
      sym_IDENT,
    STATE(16), 9,
      sym__script_statements,
      sym_script_if,
      sym_script_while,
      sym_script_do_while,
      sym_script_switch,
      sym_poryswitch_script,
      sym_script_application,
      sym_SCRIPT_0_LIT,
      aux_sym_script_block_repeat1,
  [332] = 11,
    ACTIONS(85), 1,
      sym_TOKEN_KW_DO,
    ACTIONS(87), 1,
      sym_TOKEN_KW_IF,
    ACTIONS(89), 1,
      sym_TOKEN_KW_SWITCH,
    ACTIONS(91), 1,
      sym_TOKEN_KW_WHILE,
    ACTIONS(93), 1,
      sym_TOKEN_KW_PORYSWITCH,
    ACTIONS(101), 1,
      sym_TOKEN_P_BCLOSE,
    STATE(240), 1,
      sym_SCRIPT_FN_LIT,
    ACTIONS(97), 3,
      anon_sym_lock,
      anon_sym_faceplayer,
      anon_sym_release,
    ACTIONS(37), 5,
      anon_sym_msgbox,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_value,
      anon_sym_defeated,
    ACTIONS(99), 5,
      sym_TOKEN_KW_BREAK,
      sym_TOKEN_KW_CONTINUE,
      sym_TOKEN_KW_END,
      sym_TOKEN_KW_RETURN,
      sym_IDENT,
    STATE(11), 9,
      sym__script_statements,
      sym_script_if,
      sym_script_while,
      sym_script_do_while,
      sym_script_switch,
      sym_poryswitch_script,
      sym_script_application,
      sym_SCRIPT_0_LIT,
      aux_sym_script_block_repeat1,
  [384] = 11,
    ACTIONS(85), 1,
      sym_TOKEN_KW_DO,
    ACTIONS(87), 1,
      sym_TOKEN_KW_IF,
    ACTIONS(89), 1,
      sym_TOKEN_KW_SWITCH,
    ACTIONS(91), 1,
      sym_TOKEN_KW_WHILE,
    ACTIONS(93), 1,
      sym_TOKEN_KW_PORYSWITCH,
    ACTIONS(105), 1,
      sym_TOKEN_P_BCLOSE,
    STATE(240), 1,
      sym_SCRIPT_FN_LIT,
    ACTIONS(97), 3,
      anon_sym_lock,
      anon_sym_faceplayer,
      anon_sym_release,
    ACTIONS(37), 5,
      anon_sym_msgbox,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_value,
      anon_sym_defeated,
    ACTIONS(103), 5,
      sym_TOKEN_KW_BREAK,
      sym_TOKEN_KW_CONTINUE,
      sym_TOKEN_KW_END,
      sym_TOKEN_KW_RETURN,
      sym_IDENT,
    STATE(22), 9,
      sym__script_statements,
      sym_script_if,
      sym_script_while,
      sym_script_do_while,
      sym_script_switch,
      sym_poryswitch_script,
      sym_script_application,
      sym_SCRIPT_0_LIT,
      aux_sym_script_block_repeat1,
  [436] = 11,
    ACTIONS(85), 1,
      sym_TOKEN_KW_DO,
    ACTIONS(87), 1,
      sym_TOKEN_KW_IF,
    ACTIONS(89), 1,
      sym_TOKEN_KW_SWITCH,
    ACTIONS(91), 1,
      sym_TOKEN_KW_WHILE,
    ACTIONS(93), 1,
      sym_TOKEN_KW_PORYSWITCH,
    ACTIONS(107), 1,
      sym_TOKEN_P_BCLOSE,
    STATE(240), 1,
      sym_SCRIPT_FN_LIT,
    ACTIONS(97), 3,
      anon_sym_lock,
      anon_sym_faceplayer,
      anon_sym_release,
    ACTIONS(37), 5,
      anon_sym_msgbox,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_value,
      anon_sym_defeated,
    ACTIONS(99), 5,
      sym_TOKEN_KW_BREAK,
      sym_TOKEN_KW_CONTINUE,
      sym_TOKEN_KW_END,
      sym_TOKEN_KW_RETURN,
      sym_IDENT,
    STATE(11), 9,
      sym__script_statements,
      sym_script_if,
      sym_script_while,
      sym_script_do_while,
      sym_script_switch,
      sym_poryswitch_script,
      sym_script_application,
      sym_SCRIPT_0_LIT,
      aux_sym_script_block_repeat1,
  [488] = 11,
    ACTIONS(65), 1,
      sym_TOKEN_P_BCLOSE,
    ACTIONS(112), 1,
      sym_TOKEN_KW_DO,
    ACTIONS(115), 1,
      sym_TOKEN_KW_IF,
    ACTIONS(118), 1,
      sym_TOKEN_KW_SWITCH,
    ACTIONS(121), 1,
      sym_TOKEN_KW_WHILE,
    ACTIONS(124), 1,
      sym_TOKEN_KW_PORYSWITCH,
    STATE(240), 1,
      sym_SCRIPT_FN_LIT,
    ACTIONS(127), 3,
      anon_sym_lock,
      anon_sym_faceplayer,
      anon_sym_release,
    ACTIONS(70), 5,
      anon_sym_msgbox,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_value,
      anon_sym_defeated,
    ACTIONS(109), 5,
      sym_TOKEN_KW_BREAK,
      sym_TOKEN_KW_CONTINUE,
      sym_TOKEN_KW_END,
      sym_TOKEN_KW_RETURN,
      sym_IDENT,
    STATE(11), 9,
      sym__script_statements,
      sym_script_if,
      sym_script_while,
      sym_script_do_while,
      sym_script_switch,
      sym_poryswitch_script,
      sym_script_application,
      sym_SCRIPT_0_LIT,
      aux_sym_script_block_repeat1,
  [540] = 11,
    ACTIONS(85), 1,
      sym_TOKEN_KW_DO,
    ACTIONS(87), 1,
      sym_TOKEN_KW_IF,
    ACTIONS(89), 1,
      sym_TOKEN_KW_SWITCH,
    ACTIONS(91), 1,
      sym_TOKEN_KW_WHILE,
    ACTIONS(93), 1,
      sym_TOKEN_KW_PORYSWITCH,
    ACTIONS(132), 1,
      sym_TOKEN_P_BCLOSE,
    STATE(240), 1,
      sym_SCRIPT_FN_LIT,
    ACTIONS(97), 3,
      anon_sym_lock,
      anon_sym_faceplayer,
      anon_sym_release,
    ACTIONS(37), 5,
      anon_sym_msgbox,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_value,
      anon_sym_defeated,
    ACTIONS(130), 5,
      sym_TOKEN_KW_BREAK,
      sym_TOKEN_KW_CONTINUE,
      sym_TOKEN_KW_END,
      sym_TOKEN_KW_RETURN,
      sym_IDENT,
    STATE(13), 9,
      sym__script_statements,
      sym_script_if,
      sym_script_while,
      sym_script_do_while,
      sym_script_switch,
      sym_poryswitch_script,
      sym_script_application,
      sym_SCRIPT_0_LIT,
      aux_sym_script_block_repeat1,
  [592] = 11,
    ACTIONS(85), 1,
      sym_TOKEN_KW_DO,
    ACTIONS(87), 1,
      sym_TOKEN_KW_IF,
    ACTIONS(89), 1,
      sym_TOKEN_KW_SWITCH,
    ACTIONS(91), 1,
      sym_TOKEN_KW_WHILE,
    ACTIONS(93), 1,
      sym_TOKEN_KW_PORYSWITCH,
    ACTIONS(134), 1,
      sym_TOKEN_P_BCLOSE,
    STATE(240), 1,
      sym_SCRIPT_FN_LIT,
    ACTIONS(97), 3,
      anon_sym_lock,
      anon_sym_faceplayer,
      anon_sym_release,
    ACTIONS(37), 5,
      anon_sym_msgbox,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_value,
      anon_sym_defeated,
    ACTIONS(99), 5,
      sym_TOKEN_KW_BREAK,
      sym_TOKEN_KW_CONTINUE,
      sym_TOKEN_KW_END,
      sym_TOKEN_KW_RETURN,
      sym_IDENT,
    STATE(11), 9,
      sym__script_statements,
      sym_script_if,
      sym_script_while,
      sym_script_do_while,
      sym_script_switch,
      sym_poryswitch_script,
      sym_script_application,
      sym_SCRIPT_0_LIT,
      aux_sym_script_block_repeat1,
  [644] = 11,
    ACTIONS(85), 1,
      sym_TOKEN_KW_DO,
    ACTIONS(87), 1,
      sym_TOKEN_KW_IF,
    ACTIONS(89), 1,
      sym_TOKEN_KW_SWITCH,
    ACTIONS(91), 1,
      sym_TOKEN_KW_WHILE,
    ACTIONS(93), 1,
      sym_TOKEN_KW_PORYSWITCH,
    ACTIONS(138), 1,
      sym_TOKEN_P_BCLOSE,
    STATE(240), 1,
      sym_SCRIPT_FN_LIT,
    ACTIONS(97), 3,
      anon_sym_lock,
      anon_sym_faceplayer,
      anon_sym_release,
    ACTIONS(37), 5,
      anon_sym_msgbox,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_value,
      anon_sym_defeated,
    ACTIONS(136), 5,
      sym_TOKEN_KW_BREAK,
      sym_TOKEN_KW_CONTINUE,
      sym_TOKEN_KW_END,
      sym_TOKEN_KW_RETURN,
      sym_IDENT,
    STATE(18), 9,
      sym__script_statements,
      sym_script_if,
      sym_script_while,
      sym_script_do_while,
      sym_script_switch,
      sym_poryswitch_script,
      sym_script_application,
      sym_SCRIPT_0_LIT,
      aux_sym_script_block_repeat1,
  [696] = 11,
    ACTIONS(85), 1,
      sym_TOKEN_KW_DO,
    ACTIONS(87), 1,
      sym_TOKEN_KW_IF,
    ACTIONS(89), 1,
      sym_TOKEN_KW_SWITCH,
    ACTIONS(91), 1,
      sym_TOKEN_KW_WHILE,
    ACTIONS(93), 1,
      sym_TOKEN_KW_PORYSWITCH,
    ACTIONS(142), 1,
      sym_TOKEN_P_BCLOSE,
    STATE(240), 1,
      sym_SCRIPT_FN_LIT,
    ACTIONS(97), 3,
      anon_sym_lock,
      anon_sym_faceplayer,
      anon_sym_release,
    ACTIONS(37), 5,
      anon_sym_msgbox,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_value,
      anon_sym_defeated,
    ACTIONS(140), 5,
      sym_TOKEN_KW_BREAK,
      sym_TOKEN_KW_CONTINUE,
      sym_TOKEN_KW_END,
      sym_TOKEN_KW_RETURN,
      sym_IDENT,
    STATE(23), 9,
      sym__script_statements,
      sym_script_if,
      sym_script_while,
      sym_script_do_while,
      sym_script_switch,
      sym_poryswitch_script,
      sym_script_application,
      sym_SCRIPT_0_LIT,
      aux_sym_script_block_repeat1,
  [748] = 11,
    ACTIONS(85), 1,
      sym_TOKEN_KW_DO,
    ACTIONS(87), 1,
      sym_TOKEN_KW_IF,
    ACTIONS(89), 1,
      sym_TOKEN_KW_SWITCH,
    ACTIONS(91), 1,
      sym_TOKEN_KW_WHILE,
    ACTIONS(93), 1,
      sym_TOKEN_KW_PORYSWITCH,
    ACTIONS(144), 1,
      sym_TOKEN_P_BCLOSE,
    STATE(240), 1,
      sym_SCRIPT_FN_LIT,
    ACTIONS(97), 3,
      anon_sym_lock,
      anon_sym_faceplayer,
      anon_sym_release,
    ACTIONS(37), 5,
      anon_sym_msgbox,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_value,
      anon_sym_defeated,
    ACTIONS(99), 5,
      sym_TOKEN_KW_BREAK,
      sym_TOKEN_KW_CONTINUE,
      sym_TOKEN_KW_END,
      sym_TOKEN_KW_RETURN,
      sym_IDENT,
    STATE(11), 9,
      sym__script_statements,
      sym_script_if,
      sym_script_while,
      sym_script_do_while,
      sym_script_switch,
      sym_poryswitch_script,
      sym_script_application,
      sym_SCRIPT_0_LIT,
      aux_sym_script_block_repeat1,
  [800] = 11,
    ACTIONS(85), 1,
      sym_TOKEN_KW_DO,
    ACTIONS(87), 1,
      sym_TOKEN_KW_IF,
    ACTIONS(89), 1,
      sym_TOKEN_KW_SWITCH,
    ACTIONS(91), 1,
      sym_TOKEN_KW_WHILE,
    ACTIONS(93), 1,
      sym_TOKEN_KW_PORYSWITCH,
    ACTIONS(146), 1,
      sym_TOKEN_P_BCLOSE,
    STATE(240), 1,
      sym_SCRIPT_FN_LIT,
    ACTIONS(97), 3,
      anon_sym_lock,
      anon_sym_faceplayer,
      anon_sym_release,
    ACTIONS(37), 5,
      anon_sym_msgbox,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_value,
      anon_sym_defeated,
    ACTIONS(99), 5,
      sym_TOKEN_KW_BREAK,
      sym_TOKEN_KW_CONTINUE,
      sym_TOKEN_KW_END,
      sym_TOKEN_KW_RETURN,
      sym_IDENT,
    STATE(11), 9,
      sym__script_statements,
      sym_script_if,
      sym_script_while,
      sym_script_do_while,
      sym_script_switch,
      sym_poryswitch_script,
      sym_script_application,
      sym_SCRIPT_0_LIT,
      aux_sym_script_block_repeat1,
  [852] = 11,
    ACTIONS(85), 1,
      sym_TOKEN_KW_DO,
    ACTIONS(87), 1,
      sym_TOKEN_KW_IF,
    ACTIONS(89), 1,
      sym_TOKEN_KW_SWITCH,
    ACTIONS(91), 1,
      sym_TOKEN_KW_WHILE,
    ACTIONS(93), 1,
      sym_TOKEN_KW_PORYSWITCH,
    ACTIONS(148), 1,
      sym_TOKEN_P_BCLOSE,
    STATE(240), 1,
      sym_SCRIPT_FN_LIT,
    ACTIONS(97), 3,
      anon_sym_lock,
      anon_sym_faceplayer,
      anon_sym_release,
    ACTIONS(37), 5,
      anon_sym_msgbox,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_value,
      anon_sym_defeated,
    ACTIONS(99), 5,
      sym_TOKEN_KW_BREAK,
      sym_TOKEN_KW_CONTINUE,
      sym_TOKEN_KW_END,
      sym_TOKEN_KW_RETURN,
      sym_IDENT,
    STATE(11), 9,
      sym__script_statements,
      sym_script_if,
      sym_script_while,
      sym_script_do_while,
      sym_script_switch,
      sym_poryswitch_script,
      sym_script_application,
      sym_SCRIPT_0_LIT,
      aux_sym_script_block_repeat1,
  [904] = 11,
    ACTIONS(85), 1,
      sym_TOKEN_KW_DO,
    ACTIONS(87), 1,
      sym_TOKEN_KW_IF,
    ACTIONS(89), 1,
      sym_TOKEN_KW_SWITCH,
    ACTIONS(91), 1,
      sym_TOKEN_KW_WHILE,
    ACTIONS(93), 1,
      sym_TOKEN_KW_PORYSWITCH,
    ACTIONS(152), 1,
      sym_TOKEN_P_BCLOSE,
    STATE(240), 1,
      sym_SCRIPT_FN_LIT,
    ACTIONS(97), 3,
      anon_sym_lock,
      anon_sym_faceplayer,
      anon_sym_release,
    ACTIONS(37), 5,
      anon_sym_msgbox,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_value,
      anon_sym_defeated,
    ACTIONS(150), 5,
      sym_TOKEN_KW_BREAK,
      sym_TOKEN_KW_CONTINUE,
      sym_TOKEN_KW_END,
      sym_TOKEN_KW_RETURN,
      sym_IDENT,
    STATE(17), 9,
      sym__script_statements,
      sym_script_if,
      sym_script_while,
      sym_script_do_while,
      sym_script_switch,
      sym_poryswitch_script,
      sym_script_application,
      sym_SCRIPT_0_LIT,
      aux_sym_script_block_repeat1,
  [956] = 11,
    ACTIONS(85), 1,
      sym_TOKEN_KW_DO,
    ACTIONS(87), 1,
      sym_TOKEN_KW_IF,
    ACTIONS(89), 1,
      sym_TOKEN_KW_SWITCH,
    ACTIONS(91), 1,
      sym_TOKEN_KW_WHILE,
    ACTIONS(93), 1,
      sym_TOKEN_KW_PORYSWITCH,
    ACTIONS(154), 1,
      sym_TOKEN_P_BCLOSE,
    STATE(240), 1,
      sym_SCRIPT_FN_LIT,
    ACTIONS(97), 3,
      anon_sym_lock,
      anon_sym_faceplayer,
      anon_sym_release,
    ACTIONS(37), 5,
      anon_sym_msgbox,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_value,
      anon_sym_defeated,
    ACTIONS(99), 5,
      sym_TOKEN_KW_BREAK,
      sym_TOKEN_KW_CONTINUE,
      sym_TOKEN_KW_END,
      sym_TOKEN_KW_RETURN,
      sym_IDENT,
    STATE(11), 9,
      sym__script_statements,
      sym_script_if,
      sym_script_while,
      sym_script_do_while,
      sym_script_switch,
      sym_poryswitch_script,
      sym_script_application,
      sym_SCRIPT_0_LIT,
      aux_sym_script_block_repeat1,
  [1008] = 11,
    ACTIONS(85), 1,
      sym_TOKEN_KW_DO,
    ACTIONS(87), 1,
      sym_TOKEN_KW_IF,
    ACTIONS(89), 1,
      sym_TOKEN_KW_SWITCH,
    ACTIONS(91), 1,
      sym_TOKEN_KW_WHILE,
    ACTIONS(93), 1,
      sym_TOKEN_KW_PORYSWITCH,
    ACTIONS(158), 1,
      sym_TOKEN_P_BCLOSE,
    STATE(240), 1,
      sym_SCRIPT_FN_LIT,
    ACTIONS(97), 3,
      anon_sym_lock,
      anon_sym_faceplayer,
      anon_sym_release,
    ACTIONS(37), 5,
      anon_sym_msgbox,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_value,
      anon_sym_defeated,
    ACTIONS(156), 5,
      sym_TOKEN_KW_BREAK,
      sym_TOKEN_KW_CONTINUE,
      sym_TOKEN_KW_END,
      sym_TOKEN_KW_RETURN,
      sym_IDENT,
    STATE(20), 9,
      sym__script_statements,
      sym_script_if,
      sym_script_while,
      sym_script_do_while,
      sym_script_switch,
      sym_poryswitch_script,
      sym_script_application,
      sym_SCRIPT_0_LIT,
      aux_sym_script_block_repeat1,
  [1060] = 11,
    ACTIONS(85), 1,
      sym_TOKEN_KW_DO,
    ACTIONS(87), 1,
      sym_TOKEN_KW_IF,
    ACTIONS(89), 1,
      sym_TOKEN_KW_SWITCH,
    ACTIONS(91), 1,
      sym_TOKEN_KW_WHILE,
    ACTIONS(93), 1,
      sym_TOKEN_KW_PORYSWITCH,
    ACTIONS(160), 1,
      sym_TOKEN_P_BCLOSE,
    STATE(240), 1,
      sym_SCRIPT_FN_LIT,
    ACTIONS(97), 3,
      anon_sym_lock,
      anon_sym_faceplayer,
      anon_sym_release,
    ACTIONS(37), 5,
      anon_sym_msgbox,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_value,
      anon_sym_defeated,
    ACTIONS(99), 5,
      sym_TOKEN_KW_BREAK,
      sym_TOKEN_KW_CONTINUE,
      sym_TOKEN_KW_END,
      sym_TOKEN_KW_RETURN,
      sym_IDENT,
    STATE(11), 9,
      sym__script_statements,
      sym_script_if,
      sym_script_while,
      sym_script_do_while,
      sym_script_switch,
      sym_poryswitch_script,
      sym_script_application,
      sym_SCRIPT_0_LIT,
      aux_sym_script_block_repeat1,
  [1112] = 11,
    ACTIONS(85), 1,
      sym_TOKEN_KW_DO,
    ACTIONS(87), 1,
      sym_TOKEN_KW_IF,
    ACTIONS(89), 1,
      sym_TOKEN_KW_SWITCH,
    ACTIONS(91), 1,
      sym_TOKEN_KW_WHILE,
    ACTIONS(93), 1,
      sym_TOKEN_KW_PORYSWITCH,
    ACTIONS(162), 1,
      sym_TOKEN_P_BCLOSE,
    STATE(240), 1,
      sym_SCRIPT_FN_LIT,
    ACTIONS(97), 3,
      anon_sym_lock,
      anon_sym_faceplayer,
      anon_sym_release,
    ACTIONS(37), 5,
      anon_sym_msgbox,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_value,
      anon_sym_defeated,
    ACTIONS(99), 5,
      sym_TOKEN_KW_BREAK,
      sym_TOKEN_KW_CONTINUE,
      sym_TOKEN_KW_END,
      sym_TOKEN_KW_RETURN,
      sym_IDENT,
    STATE(11), 9,
      sym__script_statements,
      sym_script_if,
      sym_script_while,
      sym_script_do_while,
      sym_script_switch,
      sym_poryswitch_script,
      sym_script_application,
      sym_SCRIPT_0_LIT,
      aux_sym_script_block_repeat1,
  [1164] = 11,
    ACTIONS(85), 1,
      sym_TOKEN_KW_DO,
    ACTIONS(87), 1,
      sym_TOKEN_KW_IF,
    ACTIONS(89), 1,
      sym_TOKEN_KW_SWITCH,
    ACTIONS(91), 1,
      sym_TOKEN_KW_WHILE,
    ACTIONS(93), 1,
      sym_TOKEN_KW_PORYSWITCH,
    ACTIONS(166), 1,
      sym_TOKEN_P_BCLOSE,
    STATE(240), 1,
      sym_SCRIPT_FN_LIT,
    ACTIONS(97), 3,
      anon_sym_lock,
      anon_sym_faceplayer,
      anon_sym_release,
    ACTIONS(37), 5,
      anon_sym_msgbox,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_value,
      anon_sym_defeated,
    ACTIONS(164), 5,
      sym_TOKEN_KW_BREAK,
      sym_TOKEN_KW_CONTINUE,
      sym_TOKEN_KW_END,
      sym_TOKEN_KW_RETURN,
      sym_IDENT,
    STATE(8), 9,
      sym__script_statements,
      sym_script_if,
      sym_script_while,
      sym_script_do_while,
      sym_script_switch,
      sym_poryswitch_script,
      sym_script_application,
      sym_SCRIPT_0_LIT,
      aux_sym_script_block_repeat1,
  [1216] = 11,
    ACTIONS(85), 1,
      sym_TOKEN_KW_DO,
    ACTIONS(87), 1,
      sym_TOKEN_KW_IF,
    ACTIONS(89), 1,
      sym_TOKEN_KW_SWITCH,
    ACTIONS(91), 1,
      sym_TOKEN_KW_WHILE,
    ACTIONS(93), 1,
      sym_TOKEN_KW_PORYSWITCH,
    ACTIONS(168), 1,
      sym_TOKEN_P_BCLOSE,
    STATE(240), 1,
      sym_SCRIPT_FN_LIT,
    ACTIONS(97), 3,
      anon_sym_lock,
      anon_sym_faceplayer,
      anon_sym_release,
    ACTIONS(37), 5,
      anon_sym_msgbox,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_value,
      anon_sym_defeated,
    ACTIONS(99), 5,
      sym_TOKEN_KW_BREAK,
      sym_TOKEN_KW_CONTINUE,
      sym_TOKEN_KW_END,
      sym_TOKEN_KW_RETURN,
      sym_IDENT,
    STATE(11), 9,
      sym__script_statements,
      sym_script_if,
      sym_script_while,
      sym_script_do_while,
      sym_script_switch,
      sym_poryswitch_script,
      sym_script_application,
      sym_SCRIPT_0_LIT,
      aux_sym_script_block_repeat1,
  [1268] = 11,
    ACTIONS(85), 1,
      sym_TOKEN_KW_DO,
    ACTIONS(87), 1,
      sym_TOKEN_KW_IF,
    ACTIONS(89), 1,
      sym_TOKEN_KW_SWITCH,
    ACTIONS(91), 1,
      sym_TOKEN_KW_WHILE,
    ACTIONS(93), 1,
      sym_TOKEN_KW_PORYSWITCH,
    ACTIONS(172), 1,
      sym_TOKEN_P_BCLOSE,
    STATE(240), 1,
      sym_SCRIPT_FN_LIT,
    ACTIONS(97), 3,
      anon_sym_lock,
      anon_sym_faceplayer,
      anon_sym_release,
    ACTIONS(37), 5,
      anon_sym_msgbox,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_value,
      anon_sym_defeated,
    ACTIONS(170), 5,
      sym_TOKEN_KW_BREAK,
      sym_TOKEN_KW_CONTINUE,
      sym_TOKEN_KW_END,
      sym_TOKEN_KW_RETURN,
      sym_IDENT,
    STATE(25), 9,
      sym__script_statements,
      sym_script_if,
      sym_script_while,
      sym_script_do_while,
      sym_script_switch,
      sym_poryswitch_script,
      sym_script_application,
      sym_SCRIPT_0_LIT,
      aux_sym_script_block_repeat1,
  [1320] = 11,
    ACTIONS(85), 1,
      sym_TOKEN_KW_DO,
    ACTIONS(87), 1,
      sym_TOKEN_KW_IF,
    ACTIONS(89), 1,
      sym_TOKEN_KW_SWITCH,
    ACTIONS(91), 1,
      sym_TOKEN_KW_WHILE,
    ACTIONS(93), 1,
      sym_TOKEN_KW_PORYSWITCH,
    ACTIONS(174), 1,
      sym_TOKEN_P_BCLOSE,
    STATE(240), 1,
      sym_SCRIPT_FN_LIT,
    ACTIONS(97), 3,
      anon_sym_lock,
      anon_sym_faceplayer,
      anon_sym_release,
    ACTIONS(37), 5,
      anon_sym_msgbox,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_value,
      anon_sym_defeated,
    ACTIONS(99), 5,
      sym_TOKEN_KW_BREAK,
      sym_TOKEN_KW_CONTINUE,
      sym_TOKEN_KW_END,
      sym_TOKEN_KW_RETURN,
      sym_IDENT,
    STATE(11), 9,
      sym__script_statements,
      sym_script_if,
      sym_script_while,
      sym_script_do_while,
      sym_script_switch,
      sym_poryswitch_script,
      sym_script_application,
      sym_SCRIPT_0_LIT,
      aux_sym_script_block_repeat1,
  [1372] = 11,
    ACTIONS(85), 1,
      sym_TOKEN_KW_DO,
    ACTIONS(87), 1,
      sym_TOKEN_KW_IF,
    ACTIONS(89), 1,
      sym_TOKEN_KW_SWITCH,
    ACTIONS(91), 1,
      sym_TOKEN_KW_WHILE,
    ACTIONS(93), 1,
      sym_TOKEN_KW_PORYSWITCH,
    ACTIONS(178), 1,
      sym_TOKEN_P_BCLOSE,
    STATE(240), 1,
      sym_SCRIPT_FN_LIT,
    ACTIONS(97), 3,
      anon_sym_lock,
      anon_sym_faceplayer,
      anon_sym_release,
    ACTIONS(37), 5,
      anon_sym_msgbox,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_value,
      anon_sym_defeated,
    ACTIONS(176), 5,
      sym_TOKEN_KW_BREAK,
      sym_TOKEN_KW_CONTINUE,
      sym_TOKEN_KW_END,
      sym_TOKEN_KW_RETURN,
      sym_IDENT,
    STATE(10), 9,
      sym__script_statements,
      sym_script_if,
      sym_script_while,
      sym_script_do_while,
      sym_script_switch,
      sym_poryswitch_script,
      sym_script_application,
      sym_SCRIPT_0_LIT,
      aux_sym_script_block_repeat1,
  [1424] = 11,
    ACTIONS(85), 1,
      sym_TOKEN_KW_DO,
    ACTIONS(87), 1,
      sym_TOKEN_KW_IF,
    ACTIONS(89), 1,
      sym_TOKEN_KW_SWITCH,
    ACTIONS(91), 1,
      sym_TOKEN_KW_WHILE,
    ACTIONS(93), 1,
      sym_TOKEN_KW_PORYSWITCH,
    ACTIONS(182), 1,
      sym_TOKEN_P_BCLOSE,
    STATE(240), 1,
      sym_SCRIPT_FN_LIT,
    ACTIONS(97), 3,
      anon_sym_lock,
      anon_sym_faceplayer,
      anon_sym_release,
    ACTIONS(37), 5,
      anon_sym_msgbox,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_value,
      anon_sym_defeated,
    ACTIONS(180), 5,
      sym_TOKEN_KW_BREAK,
      sym_TOKEN_KW_CONTINUE,
      sym_TOKEN_KW_END,
      sym_TOKEN_KW_RETURN,
      sym_IDENT,
    STATE(27), 9,
      sym__script_statements,
      sym_script_if,
      sym_script_while,
      sym_script_do_while,
      sym_script_switch,
      sym_poryswitch_script,
      sym_script_application,
      sym_SCRIPT_0_LIT,
      aux_sym_script_block_repeat1,
  [1476] = 10,
    ACTIONS(186), 1,
      sym_TOKEN_KW_DO,
    ACTIONS(188), 1,
      sym_TOKEN_KW_IF,
    ACTIONS(190), 1,
      sym_TOKEN_KW_SWITCH,
    ACTIONS(192), 1,
      sym_TOKEN_KW_WHILE,
    ACTIONS(194), 1,
      sym_TOKEN_KW_PORYSWITCH,
    STATE(309), 1,
      sym_SCRIPT_FN_LIT,
    ACTIONS(196), 3,
      anon_sym_lock,
      anon_sym_faceplayer,
      anon_sym_release,
    ACTIONS(37), 5,
      anon_sym_msgbox,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_value,
      anon_sym_defeated,
    ACTIONS(184), 5,
      sym_TOKEN_KW_BREAK,
      sym_TOKEN_KW_CONTINUE,
      sym_TOKEN_KW_END,
      sym_TOKEN_KW_RETURN,
      sym_IDENT,
    STATE(215), 8,
      sym__script_statements,
      sym_script_if,
      sym_script_while,
      sym_script_do_while,
      sym_script_switch,
      sym_poryswitch_script,
      sym_script_application,
      sym_SCRIPT_0_LIT,
  [1524] = 2,
    ACTIONS(200), 1,
      sym_TOKEN_P_BCLOSE,
    ACTIONS(198), 22,
      sym_TOKEN_KW_BREAK,
      sym_TOKEN_KW_CASE,
      sym_TOKEN_KW_CONTINUE,
      sym_TOKEN_KW_DEFAULT,
      sym_TOKEN_KW_DO,
      sym_TOKEN_KW_ELIF,
      sym_TOKEN_KW_ELSE,
      sym_TOKEN_KW_END,
      sym_TOKEN_KW_IF,
      sym_TOKEN_KW_RETURN,
      sym_TOKEN_KW_SWITCH,
      sym_TOKEN_KW_WHILE,
      sym_TOKEN_KW_PORYSWITCH,
      anon_sym_lock,
      anon_sym_faceplayer,
      anon_sym_release,
      anon_sym_msgbox,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_value,
      anon_sym_defeated,
      sym_IDENT,
  [1552] = 4,
    ACTIONS(204), 1,
      sym_TOKEN_KW_ELIF,
    ACTIONS(206), 1,
      sym_TOKEN_KW_ELSE,
    ACTIONS(208), 1,
      sym_TOKEN_P_BCLOSE,
    ACTIONS(202), 20,
      sym_TOKEN_KW_BREAK,
      sym_TOKEN_KW_CASE,
      sym_TOKEN_KW_CONTINUE,
      sym_TOKEN_KW_DEFAULT,
      sym_TOKEN_KW_DO,
      sym_TOKEN_KW_END,
      sym_TOKEN_KW_IF,
      sym_TOKEN_KW_RETURN,
      sym_TOKEN_KW_SWITCH,
      sym_TOKEN_KW_WHILE,
      sym_TOKEN_KW_PORYSWITCH,
      anon_sym_lock,
      anon_sym_faceplayer,
      anon_sym_release,
      anon_sym_msgbox,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_value,
      anon_sym_defeated,
      sym_IDENT,
  [1584] = 2,
    ACTIONS(212), 1,
      sym_TOKEN_P_BCLOSE,
    ACTIONS(210), 22,
      sym_TOKEN_KW_BREAK,
      sym_TOKEN_KW_CASE,
      sym_TOKEN_KW_CONTINUE,
      sym_TOKEN_KW_DEFAULT,
      sym_TOKEN_KW_DO,
      sym_TOKEN_KW_ELIF,
      sym_TOKEN_KW_ELSE,
      sym_TOKEN_KW_END,
      sym_TOKEN_KW_IF,
      sym_TOKEN_KW_RETURN,
      sym_TOKEN_KW_SWITCH,
      sym_TOKEN_KW_WHILE,
      sym_TOKEN_KW_PORYSWITCH,
      anon_sym_lock,
      anon_sym_faceplayer,
      anon_sym_release,
      anon_sym_msgbox,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_value,
      anon_sym_defeated,
      sym_IDENT,
  [1612] = 2,
    ACTIONS(212), 1,
      sym_TOKEN_P_BCLOSE,
    ACTIONS(210), 21,
      sym_TOKEN_KW_BREAK,
      sym_TOKEN_KW_CASE,
      sym_TOKEN_KW_CONTINUE,
      sym_TOKEN_KW_DEFAULT,
      sym_TOKEN_KW_DO,
      sym_TOKEN_KW_ELSE,
      sym_TOKEN_KW_END,
      sym_TOKEN_KW_IF,
      sym_TOKEN_KW_RETURN,
      sym_TOKEN_KW_SWITCH,
      sym_TOKEN_KW_WHILE,
      sym_TOKEN_KW_PORYSWITCH,
      anon_sym_lock,
      anon_sym_faceplayer,
      anon_sym_release,
      anon_sym_msgbox,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_value,
      anon_sym_defeated,
      sym_IDENT,
  [1639] = 2,
    ACTIONS(200), 1,
      sym_TOKEN_P_BCLOSE,
    ACTIONS(198), 21,
      sym_TOKEN_KW_BREAK,
      sym_TOKEN_KW_CASE,
      sym_TOKEN_KW_CONTINUE,
      sym_TOKEN_KW_DEFAULT,
      sym_TOKEN_KW_DO,
      sym_TOKEN_KW_ELSE,
      sym_TOKEN_KW_END,
      sym_TOKEN_KW_IF,
      sym_TOKEN_KW_RETURN,
      sym_TOKEN_KW_SWITCH,
      sym_TOKEN_KW_WHILE,
      sym_TOKEN_KW_PORYSWITCH,
      anon_sym_lock,
      anon_sym_faceplayer,
      anon_sym_release,
      anon_sym_msgbox,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_value,
      anon_sym_defeated,
      sym_IDENT,
  [1666] = 3,
    ACTIONS(216), 1,
      sym_TOKEN_KW_ELSE,
    ACTIONS(218), 1,
      sym_TOKEN_P_BCLOSE,
    ACTIONS(214), 20,
      sym_TOKEN_KW_BREAK,
      sym_TOKEN_KW_CASE,
      sym_TOKEN_KW_CONTINUE,
      sym_TOKEN_KW_DEFAULT,
      sym_TOKEN_KW_DO,
      sym_TOKEN_KW_END,
      sym_TOKEN_KW_IF,
      sym_TOKEN_KW_RETURN,
      sym_TOKEN_KW_SWITCH,
      sym_TOKEN_KW_WHILE,
      sym_TOKEN_KW_PORYSWITCH,
      anon_sym_lock,
      anon_sym_faceplayer,
      anon_sym_release,
      anon_sym_msgbox,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_value,
      anon_sym_defeated,
      sym_IDENT,
  [1695] = 2,
    ACTIONS(212), 1,
      sym_TOKEN_P_BCLOSE,
    ACTIONS(210), 20,
      sym_TOKEN_KW_BREAK,
      sym_TOKEN_KW_CONTINUE,
      sym_TOKEN_KW_DO,
      sym_TOKEN_KW_ELIF,
      sym_TOKEN_KW_ELSE,
      sym_TOKEN_KW_END,
      sym_TOKEN_KW_IF,
      sym_TOKEN_KW_RETURN,
      sym_TOKEN_KW_SWITCH,
      sym_TOKEN_KW_WHILE,
      sym_TOKEN_KW_PORYSWITCH,
      anon_sym_lock,
      anon_sym_faceplayer,
      anon_sym_release,
      anon_sym_msgbox,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_value,
      anon_sym_defeated,
      sym_IDENT,
  [1721] = 2,
    ACTIONS(222), 1,
      sym_TOKEN_P_BCLOSE,
    ACTIONS(220), 20,
      sym_TOKEN_KW_BREAK,
      sym_TOKEN_KW_CASE,
      sym_TOKEN_KW_CONTINUE,
      sym_TOKEN_KW_DEFAULT,
      sym_TOKEN_KW_DO,
      sym_TOKEN_KW_END,
      sym_TOKEN_KW_IF,
      sym_TOKEN_KW_RETURN,
      sym_TOKEN_KW_SWITCH,
      sym_TOKEN_KW_WHILE,
      sym_TOKEN_KW_PORYSWITCH,
      anon_sym_lock,
      anon_sym_faceplayer,
      anon_sym_release,
      anon_sym_msgbox,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_value,
      anon_sym_defeated,
      sym_IDENT,
  [1747] = 2,
    ACTIONS(226), 1,
      sym_TOKEN_P_BCLOSE,
    ACTIONS(224), 20,
      sym_TOKEN_KW_BREAK,
      sym_TOKEN_KW_CASE,
      sym_TOKEN_KW_CONTINUE,
      sym_TOKEN_KW_DEFAULT,
      sym_TOKEN_KW_DO,
      sym_TOKEN_KW_END,
      sym_TOKEN_KW_IF,
      sym_TOKEN_KW_RETURN,
      sym_TOKEN_KW_SWITCH,
      sym_TOKEN_KW_WHILE,
      sym_TOKEN_KW_PORYSWITCH,
      anon_sym_lock,
      anon_sym_faceplayer,
      anon_sym_release,
      anon_sym_msgbox,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_value,
      anon_sym_defeated,
      sym_IDENT,
  [1773] = 2,
    ACTIONS(230), 1,
      sym_TOKEN_P_BCLOSE,
    ACTIONS(228), 20,
      sym_TOKEN_KW_BREAK,
      sym_TOKEN_KW_CASE,
      sym_TOKEN_KW_CONTINUE,
      sym_TOKEN_KW_DEFAULT,
      sym_TOKEN_KW_DO,
      sym_TOKEN_KW_END,
      sym_TOKEN_KW_IF,
      sym_TOKEN_KW_RETURN,
      sym_TOKEN_KW_SWITCH,
      sym_TOKEN_KW_WHILE,
      sym_TOKEN_KW_PORYSWITCH,
      anon_sym_lock,
      anon_sym_faceplayer,
      anon_sym_release,
      anon_sym_msgbox,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_value,
      anon_sym_defeated,
      sym_IDENT,
  [1799] = 2,
    ACTIONS(234), 1,
      sym_TOKEN_P_BCLOSE,
    ACTIONS(232), 20,
      sym_TOKEN_KW_BREAK,
      sym_TOKEN_KW_CASE,
      sym_TOKEN_KW_CONTINUE,
      sym_TOKEN_KW_DEFAULT,
      sym_TOKEN_KW_DO,
      sym_TOKEN_KW_END,
      sym_TOKEN_KW_IF,
      sym_TOKEN_KW_RETURN,
      sym_TOKEN_KW_SWITCH,
      sym_TOKEN_KW_WHILE,
      sym_TOKEN_KW_PORYSWITCH,
      anon_sym_lock,
      anon_sym_faceplayer,
      anon_sym_release,
      anon_sym_msgbox,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_value,
      anon_sym_defeated,
      sym_IDENT,
  [1825] = 2,
    ACTIONS(200), 1,
      sym_TOKEN_P_BCLOSE,
    ACTIONS(198), 20,
      sym_TOKEN_KW_BREAK,
      sym_TOKEN_KW_CASE,
      sym_TOKEN_KW_CONTINUE,
      sym_TOKEN_KW_DEFAULT,
      sym_TOKEN_KW_DO,
      sym_TOKEN_KW_END,
      sym_TOKEN_KW_IF,
      sym_TOKEN_KW_RETURN,
      sym_TOKEN_KW_SWITCH,
      sym_TOKEN_KW_WHILE,
      sym_TOKEN_KW_PORYSWITCH,
      anon_sym_lock,
      anon_sym_faceplayer,
      anon_sym_release,
      anon_sym_msgbox,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_value,
      anon_sym_defeated,
      sym_IDENT,
  [1851] = 2,
    ACTIONS(212), 1,
      sym_TOKEN_P_BCLOSE,
    ACTIONS(210), 20,
      sym_TOKEN_KW_BREAK,
      sym_TOKEN_KW_CASE,
      sym_TOKEN_KW_CONTINUE,
      sym_TOKEN_KW_DEFAULT,
      sym_TOKEN_KW_DO,
      sym_TOKEN_KW_END,
      sym_TOKEN_KW_IF,
      sym_TOKEN_KW_RETURN,
      sym_TOKEN_KW_SWITCH,
      sym_TOKEN_KW_WHILE,
      sym_TOKEN_KW_PORYSWITCH,
      anon_sym_lock,
      anon_sym_faceplayer,
      anon_sym_release,
      anon_sym_msgbox,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_value,
      anon_sym_defeated,
      sym_IDENT,
  [1877] = 2,
    ACTIONS(200), 1,
      sym_TOKEN_P_BCLOSE,
    ACTIONS(198), 20,
      sym_TOKEN_KW_BREAK,
      sym_TOKEN_KW_CONTINUE,
      sym_TOKEN_KW_DO,
      sym_TOKEN_KW_ELIF,
      sym_TOKEN_KW_ELSE,
      sym_TOKEN_KW_END,
      sym_TOKEN_KW_IF,
      sym_TOKEN_KW_RETURN,
      sym_TOKEN_KW_SWITCH,
      sym_TOKEN_KW_WHILE,
      sym_TOKEN_KW_PORYSWITCH,
      anon_sym_lock,
      anon_sym_faceplayer,
      anon_sym_release,
      anon_sym_msgbox,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_value,
      anon_sym_defeated,
      sym_IDENT,
  [1903] = 4,
    ACTIONS(208), 1,
      sym_TOKEN_P_BCLOSE,
    ACTIONS(236), 1,
      sym_TOKEN_KW_ELIF,
    ACTIONS(238), 1,
      sym_TOKEN_KW_ELSE,
    ACTIONS(202), 18,
      sym_TOKEN_KW_BREAK,
      sym_TOKEN_KW_CONTINUE,
      sym_TOKEN_KW_DO,
      sym_TOKEN_KW_END,
      sym_TOKEN_KW_IF,
      sym_TOKEN_KW_RETURN,
      sym_TOKEN_KW_SWITCH,
      sym_TOKEN_KW_WHILE,
      sym_TOKEN_KW_PORYSWITCH,
      anon_sym_lock,
      anon_sym_faceplayer,
      anon_sym_release,
      anon_sym_msgbox,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_value,
      anon_sym_defeated,
      sym_IDENT,
  [1933] = 2,
    ACTIONS(242), 1,
      sym_TOKEN_P_BCLOSE,
    ACTIONS(240), 20,
      sym_TOKEN_KW_BREAK,
      sym_TOKEN_KW_CASE,
      sym_TOKEN_KW_CONTINUE,
      sym_TOKEN_KW_DEFAULT,
      sym_TOKEN_KW_DO,
      sym_TOKEN_KW_END,
      sym_TOKEN_KW_IF,
      sym_TOKEN_KW_RETURN,
      sym_TOKEN_KW_SWITCH,
      sym_TOKEN_KW_WHILE,
      sym_TOKEN_KW_PORYSWITCH,
      anon_sym_lock,
      anon_sym_faceplayer,
      anon_sym_release,
      anon_sym_msgbox,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_value,
      anon_sym_defeated,
      sym_IDENT,
  [1959] = 2,
    ACTIONS(246), 1,
      sym_TOKEN_P_BCLOSE,
    ACTIONS(244), 20,
      sym_TOKEN_KW_BREAK,
      sym_TOKEN_KW_CASE,
      sym_TOKEN_KW_CONTINUE,
      sym_TOKEN_KW_DEFAULT,
      sym_TOKEN_KW_DO,
      sym_TOKEN_KW_END,
      sym_TOKEN_KW_IF,
      sym_TOKEN_KW_RETURN,
      sym_TOKEN_KW_SWITCH,
      sym_TOKEN_KW_WHILE,
      sym_TOKEN_KW_PORYSWITCH,
      anon_sym_lock,
      anon_sym_faceplayer,
      anon_sym_release,
      anon_sym_msgbox,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_value,
      anon_sym_defeated,
      sym_IDENT,
  [1985] = 2,
    ACTIONS(250), 1,
      sym_TOKEN_P_BCLOSE,
    ACTIONS(248), 20,
      sym_TOKEN_KW_BREAK,
      sym_TOKEN_KW_CASE,
      sym_TOKEN_KW_CONTINUE,
      sym_TOKEN_KW_DEFAULT,
      sym_TOKEN_KW_DO,
      sym_TOKEN_KW_END,
      sym_TOKEN_KW_IF,
      sym_TOKEN_KW_RETURN,
      sym_TOKEN_KW_SWITCH,
      sym_TOKEN_KW_WHILE,
      sym_TOKEN_KW_PORYSWITCH,
      anon_sym_lock,
      anon_sym_faceplayer,
      anon_sym_release,
      anon_sym_msgbox,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_value,
      anon_sym_defeated,
      sym_IDENT,
  [2011] = 2,
    ACTIONS(254), 1,
      sym_TOKEN_P_BCLOSE,
    ACTIONS(252), 20,
      sym_TOKEN_KW_BREAK,
      sym_TOKEN_KW_CASE,
      sym_TOKEN_KW_CONTINUE,
      sym_TOKEN_KW_DEFAULT,
      sym_TOKEN_KW_DO,
      sym_TOKEN_KW_END,
      sym_TOKEN_KW_IF,
      sym_TOKEN_KW_RETURN,
      sym_TOKEN_KW_SWITCH,
      sym_TOKEN_KW_WHILE,
      sym_TOKEN_KW_PORYSWITCH,
      anon_sym_lock,
      anon_sym_faceplayer,
      anon_sym_release,
      anon_sym_msgbox,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_value,
      anon_sym_defeated,
      sym_IDENT,
  [2037] = 2,
    ACTIONS(258), 1,
      sym_TOKEN_P_BCLOSE,
    ACTIONS(256), 20,
      sym_TOKEN_KW_BREAK,
      sym_TOKEN_KW_CASE,
      sym_TOKEN_KW_CONTINUE,
      sym_TOKEN_KW_DEFAULT,
      sym_TOKEN_KW_DO,
      sym_TOKEN_KW_END,
      sym_TOKEN_KW_IF,
      sym_TOKEN_KW_RETURN,
      sym_TOKEN_KW_SWITCH,
      sym_TOKEN_KW_WHILE,
      sym_TOKEN_KW_PORYSWITCH,
      anon_sym_lock,
      anon_sym_faceplayer,
      anon_sym_release,
      anon_sym_msgbox,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_value,
      anon_sym_defeated,
      sym_IDENT,
  [2063] = 2,
    ACTIONS(200), 1,
      sym_TOKEN_P_BCLOSE,
    ACTIONS(198), 19,
      sym_TOKEN_KW_BREAK,
      sym_TOKEN_KW_CONTINUE,
      sym_TOKEN_KW_DO,
      sym_TOKEN_KW_ELSE,
      sym_TOKEN_KW_END,
      sym_TOKEN_KW_IF,
      sym_TOKEN_KW_RETURN,
      sym_TOKEN_KW_SWITCH,
      sym_TOKEN_KW_WHILE,
      sym_TOKEN_KW_PORYSWITCH,
      anon_sym_lock,
      anon_sym_faceplayer,
      anon_sym_release,
      anon_sym_msgbox,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_value,
      anon_sym_defeated,
      sym_IDENT,
  [2088] = 2,
    ACTIONS(230), 2,
      sym_TOKEN_P_PCLOSE,
      sym_TOKEN_P_BCLOSE,
    ACTIONS(228), 18,
      sym_TOKEN_KW_BREAK,
      sym_TOKEN_KW_CONTINUE,
      sym_TOKEN_KW_DO,
      sym_TOKEN_KW_END,
      sym_TOKEN_KW_IF,
      sym_TOKEN_KW_RETURN,
      sym_TOKEN_KW_SWITCH,
      sym_TOKEN_KW_WHILE,
      sym_TOKEN_KW_PORYSWITCH,
      anon_sym_lock,
      anon_sym_faceplayer,
      anon_sym_release,
      anon_sym_msgbox,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_value,
      anon_sym_defeated,
      sym_IDENT,
  [2113] = 3,
    ACTIONS(218), 1,
      sym_TOKEN_P_BCLOSE,
    ACTIONS(260), 1,
      sym_TOKEN_KW_ELSE,
    ACTIONS(214), 18,
      sym_TOKEN_KW_BREAK,
      sym_TOKEN_KW_CONTINUE,
      sym_TOKEN_KW_DO,
      sym_TOKEN_KW_END,
      sym_TOKEN_KW_IF,
      sym_TOKEN_KW_RETURN,
      sym_TOKEN_KW_SWITCH,
      sym_TOKEN_KW_WHILE,
      sym_TOKEN_KW_PORYSWITCH,
      anon_sym_lock,
      anon_sym_faceplayer,
      anon_sym_release,
      anon_sym_msgbox,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_value,
      anon_sym_defeated,
      sym_IDENT,
  [2140] = 2,
    ACTIONS(212), 1,
      sym_TOKEN_P_BCLOSE,
    ACTIONS(210), 19,
      sym_TOKEN_KW_BREAK,
      sym_TOKEN_KW_CONTINUE,
      sym_TOKEN_KW_DO,
      sym_TOKEN_KW_ELSE,
      sym_TOKEN_KW_END,
      sym_TOKEN_KW_IF,
      sym_TOKEN_KW_RETURN,
      sym_TOKEN_KW_SWITCH,
      sym_TOKEN_KW_WHILE,
      sym_TOKEN_KW_PORYSWITCH,
      anon_sym_lock,
      anon_sym_faceplayer,
      anon_sym_release,
      anon_sym_msgbox,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_value,
      anon_sym_defeated,
      sym_IDENT,
  [2165] = 1,
    ACTIONS(262), 20,
      ts_builtin_sym_end,
      sym_TOKEN_KW_CONST,
      sym_TOKEN_KW_MART,
      sym_TOKEN_KW_MOVEMENT,
      sym_TOKEN_KW_RAW,
      sym_TOKEN_KW_SCRIPT,
      sym_TOKEN_KW_TEXT,
      sym_TOKEN_P_BCLOSE,
      sym_TOKEN_P_COLON,
      sym_TOKEN_P_PLUS,
      anon_sym_walk_left,
      anon_sym_walk_right,
      anon_sym_walk_up,
      anon_sym_walk_down,
      anon_sym_face_left,
      anon_sym_face_right,
      anon_sym_face_up,
      anon_sym_face_down,
      sym_SLASH_COMMENT,
      sym_HASH_COMMENT,
  [2188] = 2,
    ACTIONS(242), 1,
      sym_TOKEN_P_BCLOSE,
    ACTIONS(240), 18,
      sym_TOKEN_KW_BREAK,
      sym_TOKEN_KW_CONTINUE,
      sym_TOKEN_KW_DO,
      sym_TOKEN_KW_END,
      sym_TOKEN_KW_IF,
      sym_TOKEN_KW_RETURN,
      sym_TOKEN_KW_SWITCH,
      sym_TOKEN_KW_WHILE,
      sym_TOKEN_KW_PORYSWITCH,
      anon_sym_lock,
      anon_sym_faceplayer,
      anon_sym_release,
      anon_sym_msgbox,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_value,
      anon_sym_defeated,
      sym_IDENT,
  [2212] = 2,
    ACTIONS(254), 1,
      sym_TOKEN_P_BCLOSE,
    ACTIONS(252), 18,
      sym_TOKEN_KW_BREAK,
      sym_TOKEN_KW_CONTINUE,
      sym_TOKEN_KW_DO,
      sym_TOKEN_KW_END,
      sym_TOKEN_KW_IF,
      sym_TOKEN_KW_RETURN,
      sym_TOKEN_KW_SWITCH,
      sym_TOKEN_KW_WHILE,
      sym_TOKEN_KW_PORYSWITCH,
      anon_sym_lock,
      anon_sym_faceplayer,
      anon_sym_release,
      anon_sym_msgbox,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_value,
      anon_sym_defeated,
      sym_IDENT,
  [2236] = 2,
    ACTIONS(226), 1,
      sym_TOKEN_P_BCLOSE,
    ACTIONS(224), 18,
      sym_TOKEN_KW_BREAK,
      sym_TOKEN_KW_CONTINUE,
      sym_TOKEN_KW_DO,
      sym_TOKEN_KW_END,
      sym_TOKEN_KW_IF,
      sym_TOKEN_KW_RETURN,
      sym_TOKEN_KW_SWITCH,
      sym_TOKEN_KW_WHILE,
      sym_TOKEN_KW_PORYSWITCH,
      anon_sym_lock,
      anon_sym_faceplayer,
      anon_sym_release,
      anon_sym_msgbox,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_value,
      anon_sym_defeated,
      sym_IDENT,
  [2260] = 2,
    ACTIONS(212), 1,
      sym_TOKEN_P_BCLOSE,
    ACTIONS(210), 18,
      sym_TOKEN_KW_BREAK,
      sym_TOKEN_KW_CONTINUE,
      sym_TOKEN_KW_DO,
      sym_TOKEN_KW_END,
      sym_TOKEN_KW_IF,
      sym_TOKEN_KW_RETURN,
      sym_TOKEN_KW_SWITCH,
      sym_TOKEN_KW_WHILE,
      sym_TOKEN_KW_PORYSWITCH,
      anon_sym_lock,
      anon_sym_faceplayer,
      anon_sym_release,
      anon_sym_msgbox,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_value,
      anon_sym_defeated,
      sym_IDENT,
  [2284] = 2,
    ACTIONS(234), 1,
      sym_TOKEN_P_BCLOSE,
    ACTIONS(232), 18,
      sym_TOKEN_KW_BREAK,
      sym_TOKEN_KW_CONTINUE,
      sym_TOKEN_KW_DO,
      sym_TOKEN_KW_END,
      sym_TOKEN_KW_IF,
      sym_TOKEN_KW_RETURN,
      sym_TOKEN_KW_SWITCH,
      sym_TOKEN_KW_WHILE,
      sym_TOKEN_KW_PORYSWITCH,
      anon_sym_lock,
      anon_sym_faceplayer,
      anon_sym_release,
      anon_sym_msgbox,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_value,
      anon_sym_defeated,
      sym_IDENT,
  [2308] = 2,
    ACTIONS(200), 1,
      sym_TOKEN_P_BCLOSE,
    ACTIONS(198), 18,
      sym_TOKEN_KW_BREAK,
      sym_TOKEN_KW_CONTINUE,
      sym_TOKEN_KW_DO,
      sym_TOKEN_KW_END,
      sym_TOKEN_KW_IF,
      sym_TOKEN_KW_RETURN,
      sym_TOKEN_KW_SWITCH,
      sym_TOKEN_KW_WHILE,
      sym_TOKEN_KW_PORYSWITCH,
      anon_sym_lock,
      anon_sym_faceplayer,
      anon_sym_release,
      anon_sym_msgbox,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_value,
      anon_sym_defeated,
      sym_IDENT,
  [2332] = 2,
    ACTIONS(250), 1,
      sym_TOKEN_P_BCLOSE,
    ACTIONS(248), 18,
      sym_TOKEN_KW_BREAK,
      sym_TOKEN_KW_CONTINUE,
      sym_TOKEN_KW_DO,
      sym_TOKEN_KW_END,
      sym_TOKEN_KW_IF,
      sym_TOKEN_KW_RETURN,
      sym_TOKEN_KW_SWITCH,
      sym_TOKEN_KW_WHILE,
      sym_TOKEN_KW_PORYSWITCH,
      anon_sym_lock,
      anon_sym_faceplayer,
      anon_sym_release,
      anon_sym_msgbox,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_value,
      anon_sym_defeated,
      sym_IDENT,
  [2356] = 2,
    ACTIONS(222), 1,
      sym_TOKEN_P_BCLOSE,
    ACTIONS(220), 18,
      sym_TOKEN_KW_BREAK,
      sym_TOKEN_KW_CONTINUE,
      sym_TOKEN_KW_DO,
      sym_TOKEN_KW_END,
      sym_TOKEN_KW_IF,
      sym_TOKEN_KW_RETURN,
      sym_TOKEN_KW_SWITCH,
      sym_TOKEN_KW_WHILE,
      sym_TOKEN_KW_PORYSWITCH,
      anon_sym_lock,
      anon_sym_faceplayer,
      anon_sym_release,
      anon_sym_msgbox,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_value,
      anon_sym_defeated,
      sym_IDENT,
  [2380] = 2,
    ACTIONS(246), 1,
      sym_TOKEN_P_BCLOSE,
    ACTIONS(244), 18,
      sym_TOKEN_KW_BREAK,
      sym_TOKEN_KW_CONTINUE,
      sym_TOKEN_KW_DO,
      sym_TOKEN_KW_END,
      sym_TOKEN_KW_IF,
      sym_TOKEN_KW_RETURN,
      sym_TOKEN_KW_SWITCH,
      sym_TOKEN_KW_WHILE,
      sym_TOKEN_KW_PORYSWITCH,
      anon_sym_lock,
      anon_sym_faceplayer,
      anon_sym_release,
      anon_sym_msgbox,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_value,
      anon_sym_defeated,
      sym_IDENT,
  [2404] = 2,
    ACTIONS(258), 1,
      sym_TOKEN_P_BCLOSE,
    ACTIONS(256), 18,
      sym_TOKEN_KW_BREAK,
      sym_TOKEN_KW_CONTINUE,
      sym_TOKEN_KW_DO,
      sym_TOKEN_KW_END,
      sym_TOKEN_KW_IF,
      sym_TOKEN_KW_RETURN,
      sym_TOKEN_KW_SWITCH,
      sym_TOKEN_KW_WHILE,
      sym_TOKEN_KW_PORYSWITCH,
      anon_sym_lock,
      anon_sym_faceplayer,
      anon_sym_release,
      anon_sym_msgbox,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_value,
      anon_sym_defeated,
      sym_IDENT,
  [2428] = 10,
    ACTIONS(5), 1,
      sym_TOKEN_KW_CONST,
    ACTIONS(7), 1,
      sym_TOKEN_KW_MART,
    ACTIONS(9), 1,
      sym_TOKEN_KW_MOVEMENT,
    ACTIONS(11), 1,
      sym_TOKEN_KW_RAW,
    ACTIONS(13), 1,
      sym_TOKEN_KW_SCRIPT,
    ACTIONS(15), 1,
      sym_TOKEN_KW_TEXT,
    ACTIONS(264), 1,
      ts_builtin_sym_end,
    ACTIONS(17), 2,
      sym_SLASH_COMMENT,
      sym_HASH_COMMENT,
    STATE(67), 2,
      sym_statement,
      aux_sym_source_file_repeat1,
    STATE(102), 7,
      sym_const,
      sym_script,
      sym_mart,
      sym_movement,
      sym_raw,
      sym_text,
      sym_COMMENT,
  [2467] = 10,
    ACTIONS(266), 1,
      ts_builtin_sym_end,
    ACTIONS(268), 1,
      sym_TOKEN_KW_CONST,
    ACTIONS(271), 1,
      sym_TOKEN_KW_MART,
    ACTIONS(274), 1,
      sym_TOKEN_KW_MOVEMENT,
    ACTIONS(277), 1,
      sym_TOKEN_KW_RAW,
    ACTIONS(280), 1,
      sym_TOKEN_KW_SCRIPT,
    ACTIONS(283), 1,
      sym_TOKEN_KW_TEXT,
    ACTIONS(286), 2,
      sym_SLASH_COMMENT,
      sym_HASH_COMMENT,
    STATE(67), 2,
      sym_statement,
      aux_sym_source_file_repeat1,
    STATE(102), 7,
      sym_const,
      sym_script,
      sym_mart,
      sym_movement,
      sym_raw,
      sym_text,
      sym_COMMENT,
  [2506] = 5,
    ACTIONS(289), 1,
      sym_TOKEN_KW_PORYSWITCH,
    STATE(82), 1,
      sym_MOVEMENT_LIT,
    STATE(70), 2,
      sym__movement_entry,
      aux_sym_movement_values_repeat1,
    STATE(248), 2,
      sym_movement_values,
      sym_poryswitch_movement,
    ACTIONS(291), 8,
      anon_sym_walk_left,
      anon_sym_walk_right,
      anon_sym_walk_up,
      anon_sym_walk_down,
      anon_sym_face_left,
      anon_sym_face_right,
      anon_sym_face_up,
      anon_sym_face_down,
  [2531] = 5,
    ACTIONS(289), 1,
      sym_TOKEN_KW_PORYSWITCH,
    STATE(82), 1,
      sym_MOVEMENT_LIT,
    STATE(70), 2,
      sym__movement_entry,
      aux_sym_movement_values_repeat1,
    STATE(255), 2,
      sym_movement_values,
      sym_poryswitch_movement,
    ACTIONS(291), 8,
      anon_sym_walk_left,
      anon_sym_walk_right,
      anon_sym_walk_up,
      anon_sym_walk_down,
      anon_sym_face_left,
      anon_sym_face_right,
      anon_sym_face_up,
      anon_sym_face_down,
  [2556] = 4,
    ACTIONS(293), 1,
      sym_TOKEN_P_BCLOSE,
    STATE(82), 1,
      sym_MOVEMENT_LIT,
    STATE(72), 2,
      sym__movement_entry,
      aux_sym_movement_values_repeat1,
    ACTIONS(291), 8,
      anon_sym_walk_left,
      anon_sym_walk_right,
      anon_sym_walk_up,
      anon_sym_walk_down,
      anon_sym_face_left,
      anon_sym_face_right,
      anon_sym_face_up,
      anon_sym_face_down,
  [2577] = 4,
    STATE(82), 1,
      sym_MOVEMENT_LIT,
    STATE(280), 1,
      sym_movement_values,
    STATE(70), 2,
      sym__movement_entry,
      aux_sym_movement_values_repeat1,
    ACTIONS(291), 8,
      anon_sym_walk_left,
      anon_sym_walk_right,
      anon_sym_walk_up,
      anon_sym_walk_down,
      anon_sym_face_left,
      anon_sym_face_right,
      anon_sym_face_up,
      anon_sym_face_down,
  [2598] = 4,
    ACTIONS(295), 1,
      sym_TOKEN_P_BCLOSE,
    STATE(82), 1,
      sym_MOVEMENT_LIT,
    STATE(72), 2,
      sym__movement_entry,
      aux_sym_movement_values_repeat1,
    ACTIONS(297), 8,
      anon_sym_walk_left,
      anon_sym_walk_right,
      anon_sym_walk_up,
      anon_sym_walk_down,
      anon_sym_face_left,
      anon_sym_face_right,
      anon_sym_face_up,
      anon_sym_face_down,
  [2619] = 3,
    ACTIONS(302), 1,
      sym_TOKEN_P_PLUS,
    STATE(75), 1,
      aux_sym_const_repeat1,
    ACTIONS(300), 9,
      ts_builtin_sym_end,
      sym_TOKEN_KW_CONST,
      sym_TOKEN_KW_MART,
      sym_TOKEN_KW_MOVEMENT,
      sym_TOKEN_KW_RAW,
      sym_TOKEN_KW_SCRIPT,
      sym_TOKEN_KW_TEXT,
      sym_SLASH_COMMENT,
      sym_HASH_COMMENT,
  [2637] = 4,
    STATE(186), 1,
      sym_MOVEMENT_LIT,
    STATE(220), 1,
      sym__movement_entry,
    STATE(228), 1,
      sym_movement_value,
    ACTIONS(304), 8,
      anon_sym_walk_left,
      anon_sym_walk_right,
      anon_sym_walk_up,
      anon_sym_walk_down,
      anon_sym_face_left,
      anon_sym_face_right,
      anon_sym_face_up,
      anon_sym_face_down,
  [2657] = 3,
    ACTIONS(308), 1,
      sym_TOKEN_P_PLUS,
    STATE(75), 1,
      aux_sym_const_repeat1,
    ACTIONS(306), 9,
      ts_builtin_sym_end,
      sym_TOKEN_KW_CONST,
      sym_TOKEN_KW_MART,
      sym_TOKEN_KW_MOVEMENT,
      sym_TOKEN_KW_RAW,
      sym_TOKEN_KW_SCRIPT,
      sym_TOKEN_KW_TEXT,
      sym_SLASH_COMMENT,
      sym_HASH_COMMENT,
  [2675] = 3,
    ACTIONS(302), 1,
      sym_TOKEN_P_PLUS,
    STATE(73), 1,
      aux_sym_const_repeat1,
    ACTIONS(311), 9,
      ts_builtin_sym_end,
      sym_TOKEN_KW_CONST,
      sym_TOKEN_KW_MART,
      sym_TOKEN_KW_MOVEMENT,
      sym_TOKEN_KW_RAW,
      sym_TOKEN_KW_SCRIPT,
      sym_TOKEN_KW_TEXT,
      sym_SLASH_COMMENT,
      sym_HASH_COMMENT,
  [2693] = 6,
    ACTIONS(313), 1,
      sym_TOKEN_P_PCLOSE,
    ACTIONS(315), 1,
      sym_INT_LIT,
    ACTIONS(324), 1,
      sym_STRING_INTER_START,
    ACTIONS(318), 2,
      sym_HEX_LIT,
      sym_BIN_LIT,
    ACTIONS(321), 2,
      sym_STRING_LIT,
      sym_IDENT,
    STATE(77), 3,
      sym_NUM_LIT,
      sym_STRING_INTERPOLATED,
      aux_sym_script_application_repeat1,
  [2716] = 7,
    ACTIONS(327), 1,
      sym_TOKEN_BI_FORMAT,
    ACTIONS(329), 1,
      sym_TOKEN_KW_PORYSWITCH,
    ACTIONS(331), 1,
      sym_STRING_LIT,
    ACTIONS(333), 1,
      sym_STRING_INTER_START,
    STATE(123), 2,
      sym_STRING,
      aux_sym_text_values_repeat1,
    STATE(144), 2,
      sym_FORMAT_STRING,
      sym_STRING_INTERPOLATED,
    STATE(250), 2,
      sym_text_values,
      sym_poryswitch_text,
  [2741] = 7,
    ACTIONS(327), 1,
      sym_TOKEN_BI_FORMAT,
    ACTIONS(329), 1,
      sym_TOKEN_KW_PORYSWITCH,
    ACTIONS(331), 1,
      sym_STRING_LIT,
    ACTIONS(333), 1,
      sym_STRING_INTER_START,
    STATE(123), 2,
      sym_STRING,
      aux_sym_text_values_repeat1,
    STATE(144), 2,
      sym_FORMAT_STRING,
      sym_STRING_INTERPOLATED,
    STATE(261), 2,
      sym_text_values,
      sym_poryswitch_text,
  [2766] = 1,
    ACTIONS(212), 10,
      ts_builtin_sym_end,
      sym_TOKEN_KW_CONST,
      sym_TOKEN_KW_WHILE,
      sym_TOKEN_KW_MART,
      sym_TOKEN_KW_MOVEMENT,
      sym_TOKEN_KW_RAW,
      sym_TOKEN_KW_SCRIPT,
      sym_TOKEN_KW_TEXT,
      sym_SLASH_COMMENT,
      sym_HASH_COMMENT,
  [2779] = 6,
    ACTIONS(335), 1,
      sym_TOKEN_P_PCLOSE,
    ACTIONS(337), 1,
      sym_INT_LIT,
    ACTIONS(343), 1,
      sym_STRING_INTER_START,
    ACTIONS(339), 2,
      sym_HEX_LIT,
      sym_BIN_LIT,
    ACTIONS(341), 2,
      sym_STRING_LIT,
      sym_IDENT,
    STATE(77), 3,
      sym_NUM_LIT,
      sym_STRING_INTERPOLATED,
      aux_sym_script_application_repeat1,
  [2802] = 2,
    ACTIONS(347), 1,
      sym_TOKEN_P_ASTER,
    ACTIONS(345), 9,
      sym_TOKEN_P_BCLOSE,
      anon_sym_walk_left,
      anon_sym_walk_right,
      anon_sym_walk_up,
      anon_sym_walk_down,
      anon_sym_face_left,
      anon_sym_face_right,
      anon_sym_face_up,
      anon_sym_face_down,
  [2817] = 1,
    ACTIONS(349), 10,
      sym_TOKEN_P_BCLOSE,
      sym_TOKEN_P_ASTER,
      anon_sym_walk_left,
      anon_sym_walk_right,
      anon_sym_walk_up,
      anon_sym_walk_down,
      anon_sym_face_left,
      anon_sym_face_right,
      anon_sym_face_up,
      anon_sym_face_down,
  [2830] = 6,
    ACTIONS(337), 1,
      sym_INT_LIT,
    ACTIONS(343), 1,
      sym_STRING_INTER_START,
    ACTIONS(351), 1,
      sym_TOKEN_P_PCLOSE,
    ACTIONS(339), 2,
      sym_HEX_LIT,
      sym_BIN_LIT,
    ACTIONS(341), 2,
      sym_STRING_LIT,
      sym_IDENT,
    STATE(77), 3,
      sym_NUM_LIT,
      sym_STRING_INTERPOLATED,
      aux_sym_script_application_repeat1,
  [2853] = 1,
    ACTIONS(200), 10,
      ts_builtin_sym_end,
      sym_TOKEN_KW_CONST,
      sym_TOKEN_KW_WHILE,
      sym_TOKEN_KW_MART,
      sym_TOKEN_KW_MOVEMENT,
      sym_TOKEN_KW_RAW,
      sym_TOKEN_KW_SCRIPT,
      sym_TOKEN_KW_TEXT,
      sym_SLASH_COMMENT,
      sym_HASH_COMMENT,
  [2866] = 6,
    ACTIONS(337), 1,
      sym_INT_LIT,
    ACTIONS(343), 1,
      sym_STRING_INTER_START,
    ACTIONS(353), 1,
      sym_TOKEN_P_PCLOSE,
    ACTIONS(339), 2,
      sym_HEX_LIT,
      sym_BIN_LIT,
    ACTIONS(341), 2,
      sym_STRING_LIT,
      sym_IDENT,
    STATE(77), 3,
      sym_NUM_LIT,
      sym_STRING_INTERPOLATED,
      aux_sym_script_application_repeat1,
  [2889] = 1,
    ACTIONS(306), 10,
      ts_builtin_sym_end,
      sym_TOKEN_KW_CONST,
      sym_TOKEN_KW_MART,
      sym_TOKEN_KW_MOVEMENT,
      sym_TOKEN_KW_RAW,
      sym_TOKEN_KW_SCRIPT,
      sym_TOKEN_KW_TEXT,
      sym_TOKEN_P_PLUS,
      sym_SLASH_COMMENT,
      sym_HASH_COMMENT,
  [2902] = 1,
    ACTIONS(355), 9,
      ts_builtin_sym_end,
      sym_TOKEN_KW_CONST,
      sym_TOKEN_KW_MART,
      sym_TOKEN_KW_MOVEMENT,
      sym_TOKEN_KW_RAW,
      sym_TOKEN_KW_SCRIPT,
      sym_TOKEN_KW_TEXT,
      sym_SLASH_COMMENT,
      sym_HASH_COMMENT,
  [2914] = 1,
    ACTIONS(357), 9,
      ts_builtin_sym_end,
      sym_TOKEN_KW_CONST,
      sym_TOKEN_KW_MART,
      sym_TOKEN_KW_MOVEMENT,
      sym_TOKEN_KW_RAW,
      sym_TOKEN_KW_SCRIPT,
      sym_TOKEN_KW_TEXT,
      sym_SLASH_COMMENT,
      sym_HASH_COMMENT,
  [2926] = 5,
    ACTIONS(337), 1,
      sym_INT_LIT,
    ACTIONS(343), 1,
      sym_STRING_INTER_START,
    ACTIONS(339), 2,
      sym_HEX_LIT,
      sym_BIN_LIT,
    ACTIONS(359), 2,
      sym_STRING_LIT,
      sym_IDENT,
    STATE(81), 3,
      sym_NUM_LIT,
      sym_STRING_INTERPOLATED,
      aux_sym_script_application_repeat1,
  [2946] = 1,
    ACTIONS(361), 9,
      ts_builtin_sym_end,
      sym_TOKEN_KW_CONST,
      sym_TOKEN_KW_MART,
      sym_TOKEN_KW_MOVEMENT,
      sym_TOKEN_KW_RAW,
      sym_TOKEN_KW_SCRIPT,
      sym_TOKEN_KW_TEXT,
      sym_SLASH_COMMENT,
      sym_HASH_COMMENT,
  [2958] = 1,
    ACTIONS(363), 9,
      ts_builtin_sym_end,
      sym_TOKEN_KW_CONST,
      sym_TOKEN_KW_MART,
      sym_TOKEN_KW_MOVEMENT,
      sym_TOKEN_KW_RAW,
      sym_TOKEN_KW_SCRIPT,
      sym_TOKEN_KW_TEXT,
      sym_SLASH_COMMENT,
      sym_HASH_COMMENT,
  [2970] = 1,
    ACTIONS(365), 9,
      ts_builtin_sym_end,
      sym_TOKEN_KW_CONST,
      sym_TOKEN_KW_MART,
      sym_TOKEN_KW_MOVEMENT,
      sym_TOKEN_KW_RAW,
      sym_TOKEN_KW_SCRIPT,
      sym_TOKEN_KW_TEXT,
      sym_SLASH_COMMENT,
      sym_HASH_COMMENT,
  [2982] = 5,
    ACTIONS(337), 1,
      sym_INT_LIT,
    ACTIONS(343), 1,
      sym_STRING_INTER_START,
    ACTIONS(339), 2,
      sym_HEX_LIT,
      sym_BIN_LIT,
    ACTIONS(367), 2,
      sym_STRING_LIT,
      sym_IDENT,
    STATE(84), 3,
      sym_NUM_LIT,
      sym_STRING_INTERPOLATED,
      aux_sym_script_application_repeat1,
  [3002] = 1,
    ACTIONS(369), 9,
      ts_builtin_sym_end,
      sym_TOKEN_KW_CONST,
      sym_TOKEN_KW_MART,
      sym_TOKEN_KW_MOVEMENT,
      sym_TOKEN_KW_RAW,
      sym_TOKEN_KW_SCRIPT,
      sym_TOKEN_KW_TEXT,
      sym_SLASH_COMMENT,
      sym_HASH_COMMENT,
  [3014] = 1,
    ACTIONS(371), 9,
      ts_builtin_sym_end,
      sym_TOKEN_KW_CONST,
      sym_TOKEN_KW_MART,
      sym_TOKEN_KW_MOVEMENT,
      sym_TOKEN_KW_RAW,
      sym_TOKEN_KW_SCRIPT,
      sym_TOKEN_KW_TEXT,
      sym_SLASH_COMMENT,
      sym_HASH_COMMENT,
  [3026] = 1,
    ACTIONS(373), 9,
      sym_TOKEN_P_BCLOSE,
      anon_sym_walk_left,
      anon_sym_walk_right,
      anon_sym_walk_up,
      anon_sym_walk_down,
      anon_sym_face_left,
      anon_sym_face_right,
      anon_sym_face_up,
      anon_sym_face_down,
  [3038] = 1,
    ACTIONS(375), 9,
      ts_builtin_sym_end,
      sym_TOKEN_KW_CONST,
      sym_TOKEN_KW_MART,
      sym_TOKEN_KW_MOVEMENT,
      sym_TOKEN_KW_RAW,
      sym_TOKEN_KW_SCRIPT,
      sym_TOKEN_KW_TEXT,
      sym_SLASH_COMMENT,
      sym_HASH_COMMENT,
  [3050] = 1,
    ACTIONS(377), 9,
      ts_builtin_sym_end,
      sym_TOKEN_KW_CONST,
      sym_TOKEN_KW_MART,
      sym_TOKEN_KW_MOVEMENT,
      sym_TOKEN_KW_RAW,
      sym_TOKEN_KW_SCRIPT,
      sym_TOKEN_KW_TEXT,
      sym_SLASH_COMMENT,
      sym_HASH_COMMENT,
  [3062] = 5,
    ACTIONS(337), 1,
      sym_INT_LIT,
    ACTIONS(343), 1,
      sym_STRING_INTER_START,
    ACTIONS(339), 2,
      sym_HEX_LIT,
      sym_BIN_LIT,
    ACTIONS(379), 2,
      sym_STRING_LIT,
      sym_IDENT,
    STATE(86), 3,
      sym_NUM_LIT,
      sym_STRING_INTERPOLATED,
      aux_sym_script_application_repeat1,
  [3082] = 1,
    ACTIONS(381), 9,
      ts_builtin_sym_end,
      sym_TOKEN_KW_CONST,
      sym_TOKEN_KW_MART,
      sym_TOKEN_KW_MOVEMENT,
      sym_TOKEN_KW_RAW,
      sym_TOKEN_KW_SCRIPT,
      sym_TOKEN_KW_TEXT,
      sym_SLASH_COMMENT,
      sym_HASH_COMMENT,
  [3094] = 1,
    ACTIONS(383), 9,
      ts_builtin_sym_end,
      sym_TOKEN_KW_CONST,
      sym_TOKEN_KW_MART,
      sym_TOKEN_KW_MOVEMENT,
      sym_TOKEN_KW_RAW,
      sym_TOKEN_KW_SCRIPT,
      sym_TOKEN_KW_TEXT,
      sym_SLASH_COMMENT,
      sym_HASH_COMMENT,
  [3106] = 4,
    STATE(240), 1,
      sym_SCRIPT_FN_LIT,
    STATE(267), 1,
      sym_script_application,
    STATE(269), 1,
      sym_script_expression,
    ACTIONS(385), 5,
      anon_sym_msgbox,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_value,
      anon_sym_defeated,
  [3123] = 4,
    STATE(240), 1,
      sym_SCRIPT_FN_LIT,
    STATE(267), 1,
      sym_script_application,
    STATE(289), 1,
      sym_script_expression,
    ACTIONS(385), 5,
      anon_sym_msgbox,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_value,
      anon_sym_defeated,
  [3140] = 4,
    STATE(240), 1,
      sym_SCRIPT_FN_LIT,
    STATE(253), 1,
      sym_script_expression,
    STATE(267), 1,
      sym_script_application,
    ACTIONS(385), 5,
      anon_sym_msgbox,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_value,
      anon_sym_defeated,
  [3157] = 4,
    STATE(240), 1,
      sym_SCRIPT_FN_LIT,
    STATE(267), 1,
      sym_script_application,
    STATE(293), 1,
      sym_script_expression,
    ACTIONS(385), 5,
      anon_sym_msgbox,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_value,
      anon_sym_defeated,
  [3174] = 4,
    STATE(240), 1,
      sym_SCRIPT_FN_LIT,
    STATE(267), 1,
      sym_script_application,
    STATE(295), 1,
      sym_script_expression,
    ACTIONS(385), 5,
      anon_sym_msgbox,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_value,
      anon_sym_defeated,
  [3191] = 6,
    ACTIONS(327), 1,
      sym_TOKEN_BI_FORMAT,
    ACTIONS(331), 1,
      sym_STRING_LIT,
    ACTIONS(333), 1,
      sym_STRING_INTER_START,
    STATE(270), 1,
      sym_text_values,
    STATE(123), 2,
      sym_STRING,
      aux_sym_text_values_repeat1,
    STATE(144), 2,
      sym_FORMAT_STRING,
      sym_STRING_INTERPOLATED,
  [3212] = 4,
    STATE(240), 1,
      sym_SCRIPT_FN_LIT,
    STATE(267), 1,
      sym_script_application,
    STATE(268), 1,
      sym_script_expression,
    ACTIONS(385), 5,
      anon_sym_msgbox,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_value,
      anon_sym_defeated,
  [3229] = 4,
    STATE(240), 1,
      sym_SCRIPT_FN_LIT,
    STATE(267), 1,
      sym_script_application,
    STATE(296), 1,
      sym_script_expression,
    ACTIONS(385), 5,
      anon_sym_msgbox,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_value,
      anon_sym_defeated,
  [3246] = 4,
    STATE(240), 1,
      sym_SCRIPT_FN_LIT,
    STATE(267), 1,
      sym_script_application,
    STATE(288), 1,
      sym_script_expression,
    ACTIONS(385), 5,
      anon_sym_msgbox,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_value,
      anon_sym_defeated,
  [3263] = 4,
    STATE(240), 1,
      sym_SCRIPT_FN_LIT,
    STATE(267), 1,
      sym_script_application,
    STATE(300), 1,
      sym_script_expression,
    ACTIONS(385), 5,
      anon_sym_msgbox,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_value,
      anon_sym_defeated,
  [3280] = 4,
    STATE(240), 1,
      sym_SCRIPT_FN_LIT,
    STATE(266), 1,
      sym_script_expression,
    STATE(267), 1,
      sym_script_application,
    ACTIONS(385), 5,
      anon_sym_msgbox,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_value,
      anon_sym_defeated,
  [3297] = 4,
    STATE(240), 1,
      sym_SCRIPT_FN_LIT,
    STATE(247), 1,
      sym_script_expression,
    STATE(267), 1,
      sym_script_application,
    ACTIONS(385), 5,
      anon_sym_msgbox,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_value,
      anon_sym_defeated,
  [3314] = 4,
    STATE(240), 1,
      sym_SCRIPT_FN_LIT,
    STATE(267), 1,
      sym_script_application,
    STATE(318), 1,
      sym_script_expression,
    ACTIONS(385), 5,
      anon_sym_msgbox,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_value,
      anon_sym_defeated,
  [3331] = 2,
    ACTIONS(389), 1,
      sym_INT_LIT,
    ACTIONS(387), 7,
      sym_TOKEN_P_PCLOSE,
      sym_TOKEN_P_BCLOSE,
      sym_HEX_LIT,
      sym_BIN_LIT,
      sym_STRING_LIT,
      sym_STRING_INTER_START,
      sym_IDENT,
  [3344] = 4,
    STATE(239), 1,
      sym_script_expression,
    STATE(240), 1,
      sym_SCRIPT_FN_LIT,
    STATE(267), 1,
      sym_script_application,
    ACTIONS(385), 5,
      anon_sym_msgbox,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_value,
      anon_sym_defeated,
  [3361] = 4,
    STATE(240), 1,
      sym_SCRIPT_FN_LIT,
    STATE(265), 1,
      sym_script_expression,
    STATE(267), 1,
      sym_script_application,
    ACTIONS(385), 5,
      anon_sym_msgbox,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_value,
      anon_sym_defeated,
  [3378] = 2,
    ACTIONS(391), 1,
      sym_INT_LIT,
    ACTIONS(262), 7,
      sym_TOKEN_P_PCLOSE,
      sym_TOKEN_P_BCLOSE,
      sym_HEX_LIT,
      sym_BIN_LIT,
      sym_STRING_LIT,
      sym_STRING_INTER_START,
      sym_IDENT,
  [3391] = 6,
    ACTIONS(393), 1,
      sym_TOKEN_BI_FORMAT,
    ACTIONS(396), 1,
      sym_TOKEN_P_BCLOSE,
    ACTIONS(398), 1,
      sym_STRING_LIT,
    ACTIONS(401), 1,
      sym_STRING_INTER_START,
    STATE(120), 2,
      sym_STRING,
      aux_sym_text_values_repeat1,
    STATE(144), 2,
      sym_FORMAT_STRING,
      sym_STRING_INTERPOLATED,
  [3412] = 2,
    ACTIONS(406), 1,
      sym_INT_LIT,
    ACTIONS(404), 7,
      sym_TOKEN_P_PCLOSE,
      sym_TOKEN_P_BCLOSE,
      sym_HEX_LIT,
      sym_BIN_LIT,
      sym_STRING_LIT,
      sym_STRING_INTER_START,
      sym_IDENT,
  [3425] = 4,
    STATE(240), 1,
      sym_SCRIPT_FN_LIT,
    STATE(267), 1,
      sym_script_application,
    STATE(323), 1,
      sym_script_expression,
    ACTIONS(385), 5,
      anon_sym_msgbox,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_value,
      anon_sym_defeated,
  [3442] = 6,
    ACTIONS(327), 1,
      sym_TOKEN_BI_FORMAT,
    ACTIONS(331), 1,
      sym_STRING_LIT,
    ACTIONS(333), 1,
      sym_STRING_INTER_START,
    ACTIONS(408), 1,
      sym_TOKEN_P_BCLOSE,
    STATE(120), 2,
      sym_STRING,
      aux_sym_text_values_repeat1,
    STATE(144), 2,
      sym_FORMAT_STRING,
      sym_STRING_INTERPOLATED,
  [3463] = 6,
    ACTIONS(343), 1,
      sym_STRING_INTER_START,
    ACTIONS(410), 1,
      sym_TOKEN_BI_FORMAT,
    ACTIONS(412), 1,
      sym_STRING_LIT,
    STATE(189), 1,
      sym_STRING,
    STATE(212), 1,
      sym_text_value,
    STATE(201), 2,
      sym_FORMAT_STRING,
      sym_STRING_INTERPOLATED,
  [3483] = 4,
    ACTIONS(414), 1,
      sym_TOKEN_KW_CASE,
    ACTIONS(417), 1,
      sym_TOKEN_KW_DEFAULT,
    ACTIONS(420), 1,
      sym_TOKEN_P_BCLOSE,
    STATE(125), 2,
      sym_script_switch_case,
      aux_sym_script_switch_repeat1,
  [3497] = 4,
    ACTIONS(333), 1,
      sym_STRING_INTER_START,
    ACTIONS(422), 1,
      sym_TOKEN_P_PCLOSE,
    ACTIONS(424), 1,
      sym_STRING_LIT,
    STATE(135), 2,
      sym_STRING_INTERPOLATED,
      aux_sym_FORMAT_STRING_repeat1,
  [3511] = 4,
    ACTIONS(426), 1,
      sym_INT_LIT,
    ACTIONS(430), 1,
      sym_IDENT,
    STATE(87), 1,
      sym_NUM_LIT,
    ACTIONS(428), 2,
      sym_HEX_LIT,
      sym_BIN_LIT,
  [3525] = 4,
    ACTIONS(432), 1,
      sym_TOKEN_KW_CASE,
    ACTIONS(434), 1,
      sym_TOKEN_KW_DEFAULT,
    ACTIONS(436), 1,
      sym_TOKEN_P_BCLOSE,
    STATE(125), 2,
      sym_script_switch_case,
      aux_sym_script_switch_repeat1,
  [3539] = 4,
    ACTIONS(438), 1,
      sym_TOKEN_KW_PORYSWITCH,
    ACTIONS(440), 1,
      sym_IDENT,
    STATE(183), 1,
      aux_sym_mart_values_repeat1,
    STATE(252), 2,
      sym_mart_values,
      sym_poryswitch_mart,
  [3553] = 4,
    ACTIONS(432), 1,
      sym_TOKEN_KW_CASE,
    ACTIONS(434), 1,
      sym_TOKEN_KW_DEFAULT,
    ACTIONS(442), 1,
      sym_TOKEN_P_BCLOSE,
    STATE(125), 2,
      sym_script_switch_case,
      aux_sym_script_switch_repeat1,
  [3567] = 4,
    ACTIONS(333), 1,
      sym_STRING_INTER_START,
    ACTIONS(424), 1,
      sym_STRING_LIT,
    ACTIONS(444), 1,
      sym_TOKEN_P_PCLOSE,
    STATE(135), 2,
      sym_STRING_INTERPOLATED,
      aux_sym_FORMAT_STRING_repeat1,
  [3581] = 1,
    ACTIONS(387), 5,
      sym_TOKEN_BI_FORMAT,
      sym_TOKEN_P_PCLOSE,
      sym_TOKEN_P_BCLOSE,
      sym_STRING_LIT,
      sym_STRING_INTER_START,
  [3589] = 4,
    ACTIONS(438), 1,
      sym_TOKEN_KW_PORYSWITCH,
    ACTIONS(440), 1,
      sym_IDENT,
    STATE(183), 1,
      aux_sym_mart_values_repeat1,
    STATE(271), 2,
      sym_mart_values,
      sym_poryswitch_mart,
  [3603] = 4,
    ACTIONS(432), 1,
      sym_TOKEN_KW_CASE,
    ACTIONS(434), 1,
      sym_TOKEN_KW_DEFAULT,
    ACTIONS(446), 1,
      sym_TOKEN_P_BCLOSE,
    STATE(125), 2,
      sym_script_switch_case,
      aux_sym_script_switch_repeat1,
  [3617] = 4,
    ACTIONS(448), 1,
      sym_TOKEN_P_PCLOSE,
    ACTIONS(450), 1,
      sym_STRING_LIT,
    ACTIONS(453), 1,
      sym_STRING_INTER_START,
    STATE(135), 2,
      sym_STRING_INTERPOLATED,
      aux_sym_FORMAT_STRING_repeat1,
  [3631] = 1,
    ACTIONS(404), 5,
      sym_TOKEN_BI_FORMAT,
      sym_TOKEN_P_PCLOSE,
      sym_TOKEN_P_BCLOSE,
      sym_STRING_LIT,
      sym_STRING_INTER_START,
  [3639] = 4,
    ACTIONS(426), 1,
      sym_INT_LIT,
    ACTIONS(456), 1,
      sym_IDENT,
    STATE(76), 1,
      sym_NUM_LIT,
    ACTIONS(428), 2,
      sym_HEX_LIT,
      sym_BIN_LIT,
  [3653] = 3,
    ACTIONS(458), 1,
      sym_TOKEN_P_BCLOSE,
    ACTIONS(460), 1,
      sym_IDENT,
    STATE(158), 2,
      sym_poryswitch_case_script,
      aux_sym_poryswitch_script_repeat1,
  [3664] = 3,
    ACTIONS(432), 1,
      sym_TOKEN_KW_CASE,
    ACTIONS(434), 1,
      sym_TOKEN_KW_DEFAULT,
    STATE(128), 2,
      sym_script_switch_case,
      aux_sym_script_switch_repeat1,
  [3675] = 2,
    ACTIONS(200), 1,
      sym_TOKEN_P_BCLOSE,
    ACTIONS(198), 3,
      sym_TOKEN_KW_ELIF,
      sym_TOKEN_KW_ELSE,
      sym_IDENT,
  [3684] = 3,
    ACTIONS(462), 1,
      sym_TOKEN_P_BCLOSE,
    ACTIONS(464), 1,
      sym_IDENT,
    STATE(156), 2,
      sym_poryswitch_case_mart,
      aux_sym_poryswitch_mart_repeat1,
  [3695] = 2,
    ACTIONS(212), 1,
      sym_TOKEN_P_BCLOSE,
    ACTIONS(210), 3,
      sym_TOKEN_KW_ELIF,
      sym_TOKEN_KW_ELSE,
      sym_IDENT,
  [3704] = 3,
    ACTIONS(466), 1,
      sym_TOKEN_P_BCLOSE,
    ACTIONS(468), 1,
      sym_IDENT,
    STATE(159), 2,
      sym_poryswitch_case_movement,
      aux_sym_poryswitch_movement_repeat1,
  [3715] = 1,
    ACTIONS(470), 4,
      sym_TOKEN_BI_FORMAT,
      sym_TOKEN_P_BCLOSE,
      sym_STRING_LIT,
      sym_STRING_INTER_START,
  [3722] = 4,
    ACTIONS(202), 1,
      sym_IDENT,
    ACTIONS(208), 1,
      sym_TOKEN_P_BCLOSE,
    ACTIONS(472), 1,
      sym_TOKEN_KW_ELIF,
    ACTIONS(474), 1,
      sym_TOKEN_KW_ELSE,
  [3735] = 3,
    ACTIONS(426), 1,
      sym_INT_LIT,
    STATE(97), 1,
      sym_NUM_LIT,
    ACTIONS(428), 2,
      sym_HEX_LIT,
      sym_BIN_LIT,
  [3746] = 3,
    ACTIONS(426), 1,
      sym_INT_LIT,
    STATE(303), 1,
      sym_NUM_LIT,
    ACTIONS(428), 2,
      sym_HEX_LIT,
      sym_BIN_LIT,
  [3757] = 3,
    ACTIONS(333), 1,
      sym_STRING_INTER_START,
    ACTIONS(476), 1,
      sym_STRING_LIT,
    STATE(131), 2,
      sym_STRING_INTERPOLATED,
      aux_sym_FORMAT_STRING_repeat1,
  [3768] = 3,
    ACTIONS(460), 1,
      sym_IDENT,
    ACTIONS(478), 1,
      sym_TOKEN_P_BCLOSE,
    STATE(158), 2,
      sym_poryswitch_case_script,
      aux_sym_poryswitch_script_repeat1,
  [3779] = 3,
    ACTIONS(460), 1,
      sym_IDENT,
    ACTIONS(480), 1,
      sym_TOKEN_P_BCLOSE,
    STATE(158), 2,
      sym_poryswitch_case_script,
      aux_sym_poryswitch_script_repeat1,
  [3790] = 3,
    ACTIONS(337), 1,
      sym_INT_LIT,
    STATE(204), 1,
      sym_NUM_LIT,
    ACTIONS(339), 2,
      sym_HEX_LIT,
      sym_BIN_LIT,
  [3801] = 3,
    ACTIONS(482), 1,
      sym_TOKEN_P_BCLOSE,
    ACTIONS(484), 1,
      sym_IDENT,
    STATE(154), 2,
      sym_poryswitch_case_text,
      aux_sym_poryswitch_text_repeat1,
  [3812] = 3,
    ACTIONS(432), 1,
      sym_TOKEN_KW_CASE,
    ACTIONS(434), 1,
      sym_TOKEN_KW_DEFAULT,
    STATE(134), 2,
      sym_script_switch_case,
      aux_sym_script_switch_repeat1,
  [3823] = 3,
    ACTIONS(486), 1,
      sym_TOKEN_P_BCLOSE,
    ACTIONS(488), 1,
      sym_IDENT,
    STATE(154), 2,
      sym_poryswitch_case_text,
      aux_sym_poryswitch_text_repeat1,
  [3834] = 3,
    ACTIONS(432), 1,
      sym_TOKEN_KW_CASE,
    ACTIONS(434), 1,
      sym_TOKEN_KW_DEFAULT,
    STATE(130), 2,
      sym_script_switch_case,
      aux_sym_script_switch_repeat1,
  [3845] = 3,
    ACTIONS(491), 1,
      sym_TOKEN_P_BCLOSE,
    ACTIONS(493), 1,
      sym_IDENT,
    STATE(156), 2,
      sym_poryswitch_case_mart,
      aux_sym_poryswitch_mart_repeat1,
  [3856] = 1,
    ACTIONS(496), 4,
      sym_TOKEN_BI_FORMAT,
      sym_TOKEN_P_BCLOSE,
      sym_STRING_LIT,
      sym_STRING_INTER_START,
  [3863] = 3,
    ACTIONS(498), 1,
      sym_TOKEN_P_BCLOSE,
    ACTIONS(500), 1,
      sym_IDENT,
    STATE(158), 2,
      sym_poryswitch_case_script,
      aux_sym_poryswitch_script_repeat1,
  [3874] = 3,
    ACTIONS(503), 1,
      sym_TOKEN_P_BCLOSE,
    ACTIONS(505), 1,
      sym_IDENT,
    STATE(159), 2,
      sym_poryswitch_case_movement,
      aux_sym_poryswitch_movement_repeat1,
  [3885] = 3,
    ACTIONS(333), 1,
      sym_STRING_INTER_START,
    ACTIONS(508), 1,
      sym_STRING_LIT,
    STATE(126), 2,
      sym_STRING_INTERPOLATED,
      aux_sym_FORMAT_STRING_repeat1,
  [3896] = 3,
    ACTIONS(510), 1,
      sym_STRING_INTER_MID,
    ACTIONS(512), 1,
      sym_STRING_INTER_END,
    STATE(174), 1,
      aux_sym_STRING_INTERPOLATED_repeat1,
  [3906] = 3,
    ACTIONS(514), 1,
      sym_IDENT,
    STATE(183), 1,
      aux_sym_mart_values_repeat1,
    STATE(284), 1,
      sym_mart_values,
  [3916] = 3,
    ACTIONS(516), 1,
      sym_TOKEN_P_POPEN,
    ACTIONS(518), 1,
      sym_IDENT,
    STATE(283), 1,
      sym_scope_modifier,
  [3926] = 3,
    ACTIONS(516), 1,
      sym_TOKEN_P_POPEN,
    ACTIONS(520), 1,
      sym_IDENT,
    STATE(281), 1,
      sym_scope_modifier,
  [3936] = 3,
    ACTIONS(522), 1,
      sym_TOKEN_P_POPEN,
    ACTIONS(524), 1,
      sym_TOKEN_P_BOPEN,
    STATE(39), 1,
      sym_script_block,
  [3946] = 2,
    ACTIONS(200), 1,
      sym_TOKEN_P_BCLOSE,
    ACTIONS(198), 2,
      sym_TOKEN_KW_ELSE,
      sym_IDENT,
  [3954] = 2,
    ACTIONS(460), 1,
      sym_IDENT,
    STATE(149), 2,
      sym_poryswitch_case_script,
      aux_sym_poryswitch_script_repeat1,
  [3962] = 2,
    ACTIONS(212), 1,
      sym_TOKEN_P_BCLOSE,
    ACTIONS(210), 2,
      sym_TOKEN_KW_ELSE,
      sym_IDENT,
  [3970] = 2,
    ACTIONS(460), 1,
      sym_IDENT,
    STATE(138), 2,
      sym_poryswitch_case_script,
      aux_sym_poryswitch_script_repeat1,
  [3978] = 3,
    ACTIONS(510), 1,
      sym_STRING_INTER_MID,
    ACTIONS(526), 1,
      sym_STRING_INTER_END,
    STATE(174), 1,
      aux_sym_STRING_INTERPOLATED_repeat1,
  [3988] = 3,
    ACTIONS(528), 1,
      sym_TOKEN_P_POPEN,
    ACTIONS(530), 1,
      sym_TOKEN_P_BOPEN,
    STATE(58), 1,
      sym_script_block,
  [3998] = 3,
    ACTIONS(516), 1,
      sym_TOKEN_P_POPEN,
    ACTIONS(532), 1,
      sym_IDENT,
    STATE(286), 1,
      sym_scope_modifier,
  [4008] = 3,
    ACTIONS(214), 1,
      sym_IDENT,
    ACTIONS(218), 1,
      sym_TOKEN_P_BCLOSE,
    ACTIONS(534), 1,
      sym_TOKEN_KW_ELSE,
  [4018] = 3,
    ACTIONS(536), 1,
      sym_STRING_INTER_MID,
    ACTIONS(539), 1,
      sym_STRING_INTER_END,
    STATE(174), 1,
      aux_sym_STRING_INTERPOLATED_repeat1,
  [4028] = 3,
    ACTIONS(510), 1,
      sym_STRING_INTER_MID,
    ACTIONS(541), 1,
      sym_STRING_INTER_END,
    STATE(161), 1,
      aux_sym_STRING_INTERPOLATED_repeat1,
  [4038] = 2,
    ACTIONS(464), 1,
      sym_IDENT,
    STATE(141), 2,
      sym_poryswitch_case_mart,
      aux_sym_poryswitch_mart_repeat1,
  [4046] = 2,
    ACTIONS(460), 1,
      sym_IDENT,
    STATE(150), 2,
      sym_poryswitch_case_script,
      aux_sym_poryswitch_script_repeat1,
  [4054] = 2,
    ACTIONS(468), 1,
      sym_IDENT,
    STATE(143), 2,
      sym_poryswitch_case_movement,
      aux_sym_poryswitch_movement_repeat1,
  [4062] = 2,
    ACTIONS(484), 1,
      sym_IDENT,
    STATE(152), 2,
      sym_poryswitch_case_text,
      aux_sym_poryswitch_text_repeat1,
  [4070] = 3,
    ACTIONS(543), 1,
      sym_TOKEN_P_BCLOSE,
    ACTIONS(545), 1,
      sym_IDENT,
    STATE(180), 1,
      aux_sym_mart_values_repeat1,
  [4080] = 3,
    ACTIONS(516), 1,
      sym_TOKEN_P_POPEN,
    ACTIONS(548), 1,
      sym_IDENT,
    STATE(294), 1,
      sym_scope_modifier,
  [4090] = 3,
    ACTIONS(550), 1,
      sym_TOKEN_P_POPEN,
    ACTIONS(552), 1,
      sym_TOKEN_P_BOPEN,
    STATE(219), 1,
      sym_script_block,
  [4100] = 3,
    ACTIONS(554), 1,
      sym_TOKEN_P_BCLOSE,
    ACTIONS(556), 1,
      sym_IDENT,
    STATE(180), 1,
      aux_sym_mart_values_repeat1,
  [4110] = 3,
    ACTIONS(510), 1,
      sym_STRING_INTER_MID,
    ACTIONS(558), 1,
      sym_STRING_INTER_END,
    STATE(170), 1,
      aux_sym_STRING_INTERPOLATED_repeat1,
  [4120] = 1,
    ACTIONS(349), 3,
      sym_TOKEN_P_BCLOSE,
      sym_TOKEN_P_ASTER,
      sym_IDENT,
  [4126] = 2,
    ACTIONS(560), 1,
      sym_TOKEN_P_ASTER,
    ACTIONS(345), 2,
      sym_TOKEN_P_BCLOSE,
      sym_IDENT,
  [4134] = 2,
    ACTIONS(552), 1,
      sym_TOKEN_P_BOPEN,
    STATE(229), 1,
      sym_script_block,
  [4141] = 2,
    ACTIONS(524), 1,
      sym_TOKEN_P_BOPEN,
    STATE(47), 1,
      sym_script_block,
  [4148] = 1,
    ACTIONS(562), 2,
      sym_TOKEN_P_BCLOSE,
      sym_IDENT,
  [4153] = 1,
    ACTIONS(564), 2,
      sym_TOKEN_P_BCLOSE,
      sym_IDENT,
  [4158] = 1,
    ACTIONS(566), 2,
      sym_TOKEN_P_BCLOSE,
      sym_IDENT,
  [4163] = 2,
    ACTIONS(568), 1,
      sym_TOKEN_P_BOPEN,
    STATE(53), 1,
      sym_script_block,
  [4170] = 2,
    ACTIONS(570), 1,
      sym_TOKEN_P_BOPEN,
    ACTIONS(572), 1,
      sym_TOKEN_P_COLON,
  [4177] = 1,
    ACTIONS(574), 2,
      sym_TOKEN_KW_LOCAL,
      sym_TOKEN_KW_GLOBAL,
  [4182] = 2,
    ACTIONS(576), 1,
      sym_TOKEN_P_BOPEN,
    STATE(145), 1,
      sym_script_block,
  [4189] = 2,
    ACTIONS(578), 1,
      sym_TOKEN_P_BOPEN,
    ACTIONS(580), 1,
      sym_TOKEN_P_COLON,
  [4196] = 2,
    ACTIONS(530), 1,
      sym_TOKEN_P_BOPEN,
    STATE(56), 1,
      sym_script_block,
  [4203] = 2,
    ACTIONS(552), 1,
      sym_TOKEN_P_BOPEN,
    STATE(225), 1,
      sym_script_block,
  [4210] = 2,
    ACTIONS(552), 1,
      sym_TOKEN_P_BOPEN,
    STATE(223), 1,
      sym_script_block,
  [4217] = 1,
    ACTIONS(582), 2,
      sym_TOKEN_P_BCLOSE,
      sym_IDENT,
  [4222] = 1,
    ACTIONS(470), 2,
      sym_TOKEN_P_BCLOSE,
      sym_IDENT,
  [4227] = 1,
    ACTIONS(584), 2,
      sym_TOKEN_P_BCLOSE,
      sym_IDENT,
  [4232] = 2,
    ACTIONS(524), 1,
      sym_TOKEN_P_BOPEN,
    STATE(46), 1,
      sym_script_block,
  [4239] = 1,
    ACTIONS(373), 2,
      sym_TOKEN_P_BCLOSE,
      sym_IDENT,
  [4244] = 2,
    ACTIONS(586), 1,
      sym_TOKEN_P_BOPEN,
    STATE(36), 1,
      sym_script_block,
  [4251] = 2,
    ACTIONS(588), 1,
      sym_TOKEN_P_BOPEN,
    ACTIONS(590), 1,
      sym_TOKEN_P_COLON,
  [4258] = 1,
    ACTIONS(496), 2,
      sym_TOKEN_P_BCLOSE,
      sym_IDENT,
  [4263] = 2,
    ACTIONS(592), 1,
      sym_TOKEN_P_BOPEN,
    STATE(256), 1,
      sym_script_block,
  [4270] = 2,
    ACTIONS(594), 1,
      sym_TOKEN_P_BOPEN,
    STATE(173), 1,
      sym_script_block,
  [4277] = 2,
    ACTIONS(524), 1,
      sym_TOKEN_P_BOPEN,
    STATE(49), 1,
      sym_script_block,
  [4284] = 2,
    ACTIONS(592), 1,
      sym_TOKEN_P_BOPEN,
    STATE(317), 1,
      sym_script_block,
  [4291] = 1,
    ACTIONS(596), 2,
      sym_TOKEN_P_BCLOSE,
      sym_IDENT,
  [4296] = 2,
    ACTIONS(598), 1,
      sym_TOKEN_P_BOPEN,
    STATE(32), 1,
      sym_script_block,
  [4303] = 2,
    ACTIONS(600), 1,
      sym_IDENT,
    STATE(230), 1,
      sym_mart_value,
  [4310] = 1,
    ACTIONS(602), 2,
      sym_TOKEN_P_BCLOSE,
      sym_IDENT,
  [4315] = 1,
    ACTIONS(539), 2,
      sym_STRING_INTER_MID,
      sym_STRING_INTER_END,
  [4320] = 2,
    ACTIONS(592), 1,
      sym_TOKEN_P_BOPEN,
    STATE(96), 1,
      sym_script_block,
  [4327] = 1,
    ACTIONS(222), 2,
      sym_TOKEN_P_BCLOSE,
      sym_IDENT,
  [4332] = 1,
    ACTIONS(226), 2,
      sym_TOKEN_P_BCLOSE,
      sym_IDENT,
  [4337] = 1,
    ACTIONS(604), 2,
      sym_TOKEN_P_BCLOSE,
      sym_IDENT,
  [4342] = 1,
    ACTIONS(230), 2,
      sym_TOKEN_P_BCLOSE,
      sym_IDENT,
  [4347] = 2,
    ACTIONS(530), 1,
      sym_TOKEN_P_BOPEN,
    STATE(57), 1,
      sym_script_block,
  [4354] = 1,
    ACTIONS(246), 2,
      sym_TOKEN_P_BCLOSE,
      sym_IDENT,
  [4359] = 1,
    ACTIONS(258), 2,
      sym_TOKEN_P_BCLOSE,
      sym_IDENT,
  [4364] = 1,
    ACTIONS(254), 2,
      sym_TOKEN_P_BCLOSE,
      sym_IDENT,
  [4369] = 1,
    ACTIONS(250), 2,
      sym_TOKEN_P_BCLOSE,
      sym_IDENT,
  [4374] = 1,
    ACTIONS(234), 2,
      sym_TOKEN_P_BCLOSE,
      sym_IDENT,
  [4379] = 1,
    ACTIONS(606), 2,
      sym_TOKEN_P_BCLOSE,
      sym_IDENT,
  [4384] = 1,
    ACTIONS(242), 2,
      sym_TOKEN_P_BCLOSE,
      sym_IDENT,
  [4389] = 1,
    ACTIONS(608), 2,
      sym_TOKEN_P_BCLOSE,
      sym_IDENT,
  [4394] = 1,
    ACTIONS(212), 2,
      sym_TOKEN_P_BCLOSE,
      sym_IDENT,
  [4399] = 1,
    ACTIONS(200), 2,
      sym_TOKEN_P_BCLOSE,
      sym_IDENT,
  [4404] = 2,
    ACTIONS(592), 1,
      sym_TOKEN_P_BOPEN,
    STATE(322), 1,
      sym_script_block,
  [4411] = 2,
    ACTIONS(610), 1,
      sym_TOKEN_P_BOPEN,
    ACTIONS(612), 1,
      sym_TOKEN_P_COLON,
  [4418] = 1,
    ACTIONS(614), 2,
      sym_TOKEN_P_BCLOSE,
      sym_IDENT,
  [4423] = 2,
    ACTIONS(592), 1,
      sym_TOKEN_P_BOPEN,
    STATE(93), 1,
      sym_script_block,
  [4430] = 2,
    ACTIONS(616), 1,
      sym_TOKEN_P_BOPEN,
    STATE(45), 1,
      sym_script_block,
  [4437] = 2,
    ACTIONS(530), 1,
      sym_TOKEN_P_BOPEN,
    STATE(64), 1,
      sym_script_block,
  [4444] = 1,
    ACTIONS(618), 1,
      sym_TOKEN_P_PCLOSE,
  [4448] = 1,
    ACTIONS(620), 1,
      sym_TOKEN_P_POPEN,
  [4452] = 1,
    ACTIONS(622), 1,
      sym_TOKEN_P_POPEN,
  [4456] = 1,
    ACTIONS(624), 1,
      sym_TOKEN_P_POPEN,
  [4460] = 1,
    ACTIONS(626), 1,
      sym_TOKEN_P_POPEN,
  [4464] = 1,
    ACTIONS(628), 1,
      sym_TOKEN_P_POPEN,
  [4468] = 1,
    ACTIONS(630), 1,
      sym_TOKEN_P_POPEN,
  [4472] = 1,
    ACTIONS(632), 1,
      sym_TOKEN_P_POPEN,
  [4476] = 1,
    ACTIONS(634), 1,
      sym_TOKEN_P_PCLOSE,
  [4480] = 1,
    ACTIONS(636), 1,
      sym_TOKEN_P_BCLOSE,
  [4484] = 1,
    ACTIONS(638), 1,
      sym_IDENT,
  [4488] = 1,
    ACTIONS(640), 1,
      sym_TOKEN_P_BCLOSE,
  [4492] = 1,
    ACTIONS(642), 1,
      sym_IDENT,
  [4496] = 1,
    ACTIONS(644), 1,
      sym_TOKEN_P_BCLOSE,
  [4500] = 1,
    ACTIONS(646), 1,
      sym_TOKEN_P_PCLOSE,
  [4504] = 1,
    ACTIONS(648), 1,
      sym_IDENT,
  [4508] = 1,
    ACTIONS(650), 1,
      sym_TOKEN_P_BCLOSE,
  [4512] = 1,
    ACTIONS(652), 1,
      sym_TOKEN_KW_WHILE,
  [4516] = 1,
    ACTIONS(654), 1,
      sym_IDENT,
  [4520] = 1,
    ACTIONS(656), 1,
      sym_IDENT,
  [4524] = 1,
    ACTIONS(658), 1,
      sym_TOKEN_P_POPEN,
  [4528] = 1,
    ACTIONS(660), 1,
      sym_IDENT,
  [4532] = 1,
    ACTIONS(662), 1,
      sym_TOKEN_P_BCLOSE,
  [4536] = 1,
    ACTIONS(664), 1,
      sym_TOKEN_P_PCLOSE,
  [4540] = 1,
    ACTIONS(666), 1,
      sym_TOKEN_P_PCLOSE,
  [4544] = 1,
    ACTIONS(668), 1,
      sym_TOKEN_P_POPEN,
  [4548] = 1,
    ACTIONS(670), 1,
      sym_TOKEN_P_PCLOSE,
  [4552] = 1,
    ACTIONS(672), 1,
      sym_TOKEN_P_PCLOSE,
  [4556] = 1,
    ACTIONS(674), 1,
      sym_TOKEN_P_PCLOSE,
  [4560] = 1,
    ACTIONS(676), 1,
      sym_TOKEN_P_PCLOSE,
  [4564] = 1,
    ACTIONS(678), 1,
      sym_TOKEN_P_PCLOSE,
  [4568] = 1,
    ACTIONS(680), 1,
      sym_TOKEN_P_BCLOSE,
  [4572] = 1,
    ACTIONS(682), 1,
      sym_TOKEN_P_BCLOSE,
  [4576] = 1,
    ACTIONS(684), 1,
      sym_TOKEN_P_POPEN,
  [4580] = 1,
    ACTIONS(686), 1,
      sym_IDENT,
  [4584] = 1,
    ACTIONS(688), 1,
      sym_TOKEN_P_BOPEN,
  [4588] = 1,
    ACTIONS(690), 1,
      sym_TOKEN_P_PCLOSE,
  [4592] = 1,
    ACTIONS(692), 1,
      sym_TOKEN_P_BOPEN,
  [4596] = 1,
    ACTIONS(694), 1,
      sym_TOKEN_P_BOPEN,
  [4600] = 1,
    ACTIONS(696), 1,
      sym_TOKEN_P_PCLOSE,
  [4604] = 1,
    ACTIONS(698), 1,
      sym_TOKEN_P_PCLOSE,
  [4608] = 1,
    ACTIONS(700), 1,
      sym_TOKEN_P_BCLOSE,
  [4612] = 1,
    ACTIONS(702), 1,
      sym_IDENT,
  [4616] = 1,
    ACTIONS(704), 1,
      sym_TOKEN_P_BOPEN,
  [4620] = 1,
    ACTIONS(706), 1,
      sym_IDENT,
  [4624] = 1,
    ACTIONS(708), 1,
      sym_TOKEN_P_BCLOSE,
  [4628] = 1,
    ACTIONS(710), 1,
      sym_IDENT,
  [4632] = 1,
    ACTIONS(712), 1,
      sym_IDENT,
  [4636] = 1,
    ACTIONS(714), 1,
      sym_TOKEN_P_BCLOSE,
  [4640] = 1,
    ACTIONS(716), 1,
      sym_TOKEN_P_PCLOSE,
  [4644] = 1,
    ACTIONS(718), 1,
      sym_TOKEN_P_PCLOSE,
  [4648] = 1,
    ACTIONS(720), 1,
      sym_TOKEN_P_BOPEN,
  [4652] = 1,
    ACTIONS(722), 1,
      sym_IDENT,
  [4656] = 1,
    ACTIONS(724), 1,
      sym_TOKEN_P_BOPEN,
  [4660] = 1,
    ACTIONS(726), 1,
      sym_TOKEN_P_PCLOSE,
  [4664] = 1,
    ACTIONS(728), 1,
      sym_IDENT,
  [4668] = 1,
    ACTIONS(730), 1,
      sym_TOKEN_P_PCLOSE,
  [4672] = 1,
    ACTIONS(732), 1,
      sym_TOKEN_P_PCLOSE,
  [4676] = 1,
    ACTIONS(734), 1,
      sym_TOKEN_P_BOPEN,
  [4680] = 1,
    ACTIONS(736), 1,
      sym_TOKEN_P_BOPEN,
  [4684] = 1,
    ACTIONS(738), 1,
      sym_TOKEN_P_BOPEN,
  [4688] = 1,
    ACTIONS(740), 1,
      sym_TOKEN_P_PCLOSE,
  [4692] = 1,
    ACTIONS(742), 1,
      sym_TOKEN_P_POPEN,
  [4696] = 1,
    ACTIONS(744), 1,
      sym_TOKEN_P_POPEN,
  [4700] = 1,
    ACTIONS(746), 1,
      sym_TOKEN_P_COLON,
  [4704] = 1,
    ACTIONS(748), 1,
      sym_TOKEN_P_EQUALS,
  [4708] = 1,
    ACTIONS(750), 1,
      sym_TOKEN_P_POPEN,
  [4712] = 1,
    ACTIONS(752), 1,
      sym_TOKEN_P_BOPEN,
  [4716] = 1,
    ACTIONS(754), 1,
      sym_TOKEN_P_BOPEN,
  [4720] = 1,
    ACTIONS(756), 1,
      ts_builtin_sym_end,
  [4724] = 1,
    ACTIONS(758), 1,
      sym_TOKEN_P_POPEN,
  [4728] = 1,
    ACTIONS(760), 1,
      sym_TOKEN_P_BOPEN,
  [4732] = 1,
    ACTIONS(762), 1,
      sym_TOKEN_P_BCLOSE,
  [4736] = 1,
    ACTIONS(764), 1,
      sym_TOKEN_P_POPEN,
  [4740] = 1,
    ACTIONS(766), 1,
      sym_TOKEN_P_BOPEN,
  [4744] = 1,
    ACTIONS(768), 1,
      sym_TOKEN_P_BOPEN,
  [4748] = 1,
    ACTIONS(770), 1,
      sym_RAW_LIT,
  [4752] = 1,
    ACTIONS(772), 1,
      sym_TOKEN_P_POPEN,
  [4756] = 1,
    ACTIONS(774), 1,
      sym_TOKEN_KW_WHILE,
  [4760] = 1,
    ACTIONS(776), 1,
      sym_TOKEN_P_PCLOSE,
  [4764] = 1,
    ACTIONS(778), 1,
      sym_TOKEN_P_PCLOSE,
  [4768] = 1,
    ACTIONS(780), 1,
      sym_TOKEN_P_POPEN,
  [4772] = 1,
    ACTIONS(782), 1,
      sym_TOKEN_P_POPEN,
  [4776] = 1,
    ACTIONS(784), 1,
      sym_TOKEN_KW_WHILE,
  [4780] = 1,
    ACTIONS(786), 1,
      sym_TOKEN_P_PCLOSE,
  [4784] = 1,
    ACTIONS(788), 1,
      sym_TOKEN_P_PCLOSE,
  [4788] = 1,
    ACTIONS(790), 1,
      sym_TOKEN_P_POPEN,
  [4792] = 1,
    ACTIONS(792), 1,
      sym_TOKEN_P_BCLOSE,
  [4796] = 1,
    ACTIONS(794), 1,
      sym_TOKEN_P_COLON,
  [4800] = 1,
    ACTIONS(796), 1,
      sym_IDENT,
  [4804] = 1,
    ACTIONS(798), 1,
      sym_TOKEN_P_POPEN,
  [4808] = 1,
    ACTIONS(800), 1,
      sym_TOKEN_P_BOPEN,
  [4812] = 1,
    ACTIONS(802), 1,
      sym_IDENT,
  [4816] = 1,
    ACTIONS(804), 1,
      sym_TOKEN_P_POPEN,
  [4820] = 1,
    ACTIONS(806), 1,
      sym_TOKEN_P_POPEN,
  [4824] = 1,
    ACTIONS(808), 1,
      sym_TOKEN_P_POPEN,
  [4828] = 1,
    ACTIONS(810), 1,
      sym_TOKEN_P_POPEN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 56,
  [SMALL_STATE(4)] = 112,
  [SMALL_STATE(5)] = 168,
  [SMALL_STATE(6)] = 224,
  [SMALL_STATE(7)] = 280,
  [SMALL_STATE(8)] = 332,
  [SMALL_STATE(9)] = 384,
  [SMALL_STATE(10)] = 436,
  [SMALL_STATE(11)] = 488,
  [SMALL_STATE(12)] = 540,
  [SMALL_STATE(13)] = 592,
  [SMALL_STATE(14)] = 644,
  [SMALL_STATE(15)] = 696,
  [SMALL_STATE(16)] = 748,
  [SMALL_STATE(17)] = 800,
  [SMALL_STATE(18)] = 852,
  [SMALL_STATE(19)] = 904,
  [SMALL_STATE(20)] = 956,
  [SMALL_STATE(21)] = 1008,
  [SMALL_STATE(22)] = 1060,
  [SMALL_STATE(23)] = 1112,
  [SMALL_STATE(24)] = 1164,
  [SMALL_STATE(25)] = 1216,
  [SMALL_STATE(26)] = 1268,
  [SMALL_STATE(27)] = 1320,
  [SMALL_STATE(28)] = 1372,
  [SMALL_STATE(29)] = 1424,
  [SMALL_STATE(30)] = 1476,
  [SMALL_STATE(31)] = 1524,
  [SMALL_STATE(32)] = 1552,
  [SMALL_STATE(33)] = 1584,
  [SMALL_STATE(34)] = 1612,
  [SMALL_STATE(35)] = 1639,
  [SMALL_STATE(36)] = 1666,
  [SMALL_STATE(37)] = 1695,
  [SMALL_STATE(38)] = 1721,
  [SMALL_STATE(39)] = 1747,
  [SMALL_STATE(40)] = 1773,
  [SMALL_STATE(41)] = 1799,
  [SMALL_STATE(42)] = 1825,
  [SMALL_STATE(43)] = 1851,
  [SMALL_STATE(44)] = 1877,
  [SMALL_STATE(45)] = 1903,
  [SMALL_STATE(46)] = 1933,
  [SMALL_STATE(47)] = 1959,
  [SMALL_STATE(48)] = 1985,
  [SMALL_STATE(49)] = 2011,
  [SMALL_STATE(50)] = 2037,
  [SMALL_STATE(51)] = 2063,
  [SMALL_STATE(52)] = 2088,
  [SMALL_STATE(53)] = 2113,
  [SMALL_STATE(54)] = 2140,
  [SMALL_STATE(55)] = 2165,
  [SMALL_STATE(56)] = 2188,
  [SMALL_STATE(57)] = 2212,
  [SMALL_STATE(58)] = 2236,
  [SMALL_STATE(59)] = 2260,
  [SMALL_STATE(60)] = 2284,
  [SMALL_STATE(61)] = 2308,
  [SMALL_STATE(62)] = 2332,
  [SMALL_STATE(63)] = 2356,
  [SMALL_STATE(64)] = 2380,
  [SMALL_STATE(65)] = 2404,
  [SMALL_STATE(66)] = 2428,
  [SMALL_STATE(67)] = 2467,
  [SMALL_STATE(68)] = 2506,
  [SMALL_STATE(69)] = 2531,
  [SMALL_STATE(70)] = 2556,
  [SMALL_STATE(71)] = 2577,
  [SMALL_STATE(72)] = 2598,
  [SMALL_STATE(73)] = 2619,
  [SMALL_STATE(74)] = 2637,
  [SMALL_STATE(75)] = 2657,
  [SMALL_STATE(76)] = 2675,
  [SMALL_STATE(77)] = 2693,
  [SMALL_STATE(78)] = 2716,
  [SMALL_STATE(79)] = 2741,
  [SMALL_STATE(80)] = 2766,
  [SMALL_STATE(81)] = 2779,
  [SMALL_STATE(82)] = 2802,
  [SMALL_STATE(83)] = 2817,
  [SMALL_STATE(84)] = 2830,
  [SMALL_STATE(85)] = 2853,
  [SMALL_STATE(86)] = 2866,
  [SMALL_STATE(87)] = 2889,
  [SMALL_STATE(88)] = 2902,
  [SMALL_STATE(89)] = 2914,
  [SMALL_STATE(90)] = 2926,
  [SMALL_STATE(91)] = 2946,
  [SMALL_STATE(92)] = 2958,
  [SMALL_STATE(93)] = 2970,
  [SMALL_STATE(94)] = 2982,
  [SMALL_STATE(95)] = 3002,
  [SMALL_STATE(96)] = 3014,
  [SMALL_STATE(97)] = 3026,
  [SMALL_STATE(98)] = 3038,
  [SMALL_STATE(99)] = 3050,
  [SMALL_STATE(100)] = 3062,
  [SMALL_STATE(101)] = 3082,
  [SMALL_STATE(102)] = 3094,
  [SMALL_STATE(103)] = 3106,
  [SMALL_STATE(104)] = 3123,
  [SMALL_STATE(105)] = 3140,
  [SMALL_STATE(106)] = 3157,
  [SMALL_STATE(107)] = 3174,
  [SMALL_STATE(108)] = 3191,
  [SMALL_STATE(109)] = 3212,
  [SMALL_STATE(110)] = 3229,
  [SMALL_STATE(111)] = 3246,
  [SMALL_STATE(112)] = 3263,
  [SMALL_STATE(113)] = 3280,
  [SMALL_STATE(114)] = 3297,
  [SMALL_STATE(115)] = 3314,
  [SMALL_STATE(116)] = 3331,
  [SMALL_STATE(117)] = 3344,
  [SMALL_STATE(118)] = 3361,
  [SMALL_STATE(119)] = 3378,
  [SMALL_STATE(120)] = 3391,
  [SMALL_STATE(121)] = 3412,
  [SMALL_STATE(122)] = 3425,
  [SMALL_STATE(123)] = 3442,
  [SMALL_STATE(124)] = 3463,
  [SMALL_STATE(125)] = 3483,
  [SMALL_STATE(126)] = 3497,
  [SMALL_STATE(127)] = 3511,
  [SMALL_STATE(128)] = 3525,
  [SMALL_STATE(129)] = 3539,
  [SMALL_STATE(130)] = 3553,
  [SMALL_STATE(131)] = 3567,
  [SMALL_STATE(132)] = 3581,
  [SMALL_STATE(133)] = 3589,
  [SMALL_STATE(134)] = 3603,
  [SMALL_STATE(135)] = 3617,
  [SMALL_STATE(136)] = 3631,
  [SMALL_STATE(137)] = 3639,
  [SMALL_STATE(138)] = 3653,
  [SMALL_STATE(139)] = 3664,
  [SMALL_STATE(140)] = 3675,
  [SMALL_STATE(141)] = 3684,
  [SMALL_STATE(142)] = 3695,
  [SMALL_STATE(143)] = 3704,
  [SMALL_STATE(144)] = 3715,
  [SMALL_STATE(145)] = 3722,
  [SMALL_STATE(146)] = 3735,
  [SMALL_STATE(147)] = 3746,
  [SMALL_STATE(148)] = 3757,
  [SMALL_STATE(149)] = 3768,
  [SMALL_STATE(150)] = 3779,
  [SMALL_STATE(151)] = 3790,
  [SMALL_STATE(152)] = 3801,
  [SMALL_STATE(153)] = 3812,
  [SMALL_STATE(154)] = 3823,
  [SMALL_STATE(155)] = 3834,
  [SMALL_STATE(156)] = 3845,
  [SMALL_STATE(157)] = 3856,
  [SMALL_STATE(158)] = 3863,
  [SMALL_STATE(159)] = 3874,
  [SMALL_STATE(160)] = 3885,
  [SMALL_STATE(161)] = 3896,
  [SMALL_STATE(162)] = 3906,
  [SMALL_STATE(163)] = 3916,
  [SMALL_STATE(164)] = 3926,
  [SMALL_STATE(165)] = 3936,
  [SMALL_STATE(166)] = 3946,
  [SMALL_STATE(167)] = 3954,
  [SMALL_STATE(168)] = 3962,
  [SMALL_STATE(169)] = 3970,
  [SMALL_STATE(170)] = 3978,
  [SMALL_STATE(171)] = 3988,
  [SMALL_STATE(172)] = 3998,
  [SMALL_STATE(173)] = 4008,
  [SMALL_STATE(174)] = 4018,
  [SMALL_STATE(175)] = 4028,
  [SMALL_STATE(176)] = 4038,
  [SMALL_STATE(177)] = 4046,
  [SMALL_STATE(178)] = 4054,
  [SMALL_STATE(179)] = 4062,
  [SMALL_STATE(180)] = 4070,
  [SMALL_STATE(181)] = 4080,
  [SMALL_STATE(182)] = 4090,
  [SMALL_STATE(183)] = 4100,
  [SMALL_STATE(184)] = 4110,
  [SMALL_STATE(185)] = 4120,
  [SMALL_STATE(186)] = 4126,
  [SMALL_STATE(187)] = 4134,
  [SMALL_STATE(188)] = 4141,
  [SMALL_STATE(189)] = 4148,
  [SMALL_STATE(190)] = 4153,
  [SMALL_STATE(191)] = 4158,
  [SMALL_STATE(192)] = 4163,
  [SMALL_STATE(193)] = 4170,
  [SMALL_STATE(194)] = 4177,
  [SMALL_STATE(195)] = 4182,
  [SMALL_STATE(196)] = 4189,
  [SMALL_STATE(197)] = 4196,
  [SMALL_STATE(198)] = 4203,
  [SMALL_STATE(199)] = 4210,
  [SMALL_STATE(200)] = 4217,
  [SMALL_STATE(201)] = 4222,
  [SMALL_STATE(202)] = 4227,
  [SMALL_STATE(203)] = 4232,
  [SMALL_STATE(204)] = 4239,
  [SMALL_STATE(205)] = 4244,
  [SMALL_STATE(206)] = 4251,
  [SMALL_STATE(207)] = 4258,
  [SMALL_STATE(208)] = 4263,
  [SMALL_STATE(209)] = 4270,
  [SMALL_STATE(210)] = 4277,
  [SMALL_STATE(211)] = 4284,
  [SMALL_STATE(212)] = 4291,
  [SMALL_STATE(213)] = 4296,
  [SMALL_STATE(214)] = 4303,
  [SMALL_STATE(215)] = 4310,
  [SMALL_STATE(216)] = 4315,
  [SMALL_STATE(217)] = 4320,
  [SMALL_STATE(218)] = 4327,
  [SMALL_STATE(219)] = 4332,
  [SMALL_STATE(220)] = 4337,
  [SMALL_STATE(221)] = 4342,
  [SMALL_STATE(222)] = 4347,
  [SMALL_STATE(223)] = 4354,
  [SMALL_STATE(224)] = 4359,
  [SMALL_STATE(225)] = 4364,
  [SMALL_STATE(226)] = 4369,
  [SMALL_STATE(227)] = 4374,
  [SMALL_STATE(228)] = 4379,
  [SMALL_STATE(229)] = 4384,
  [SMALL_STATE(230)] = 4389,
  [SMALL_STATE(231)] = 4394,
  [SMALL_STATE(232)] = 4399,
  [SMALL_STATE(233)] = 4404,
  [SMALL_STATE(234)] = 4411,
  [SMALL_STATE(235)] = 4418,
  [SMALL_STATE(236)] = 4423,
  [SMALL_STATE(237)] = 4430,
  [SMALL_STATE(238)] = 4437,
  [SMALL_STATE(239)] = 4444,
  [SMALL_STATE(240)] = 4448,
  [SMALL_STATE(241)] = 4452,
  [SMALL_STATE(242)] = 4456,
  [SMALL_STATE(243)] = 4460,
  [SMALL_STATE(244)] = 4464,
  [SMALL_STATE(245)] = 4468,
  [SMALL_STATE(246)] = 4472,
  [SMALL_STATE(247)] = 4476,
  [SMALL_STATE(248)] = 4480,
  [SMALL_STATE(249)] = 4484,
  [SMALL_STATE(250)] = 4488,
  [SMALL_STATE(251)] = 4492,
  [SMALL_STATE(252)] = 4496,
  [SMALL_STATE(253)] = 4500,
  [SMALL_STATE(254)] = 4504,
  [SMALL_STATE(255)] = 4508,
  [SMALL_STATE(256)] = 4512,
  [SMALL_STATE(257)] = 4516,
  [SMALL_STATE(258)] = 4520,
  [SMALL_STATE(259)] = 4524,
  [SMALL_STATE(260)] = 4528,
  [SMALL_STATE(261)] = 4532,
  [SMALL_STATE(262)] = 4536,
  [SMALL_STATE(263)] = 4540,
  [SMALL_STATE(264)] = 4544,
  [SMALL_STATE(265)] = 4548,
  [SMALL_STATE(266)] = 4552,
  [SMALL_STATE(267)] = 4556,
  [SMALL_STATE(268)] = 4560,
  [SMALL_STATE(269)] = 4564,
  [SMALL_STATE(270)] = 4568,
  [SMALL_STATE(271)] = 4572,
  [SMALL_STATE(272)] = 4576,
  [SMALL_STATE(273)] = 4580,
  [SMALL_STATE(274)] = 4584,
  [SMALL_STATE(275)] = 4588,
  [SMALL_STATE(276)] = 4592,
  [SMALL_STATE(277)] = 4596,
  [SMALL_STATE(278)] = 4600,
  [SMALL_STATE(279)] = 4604,
  [SMALL_STATE(280)] = 4608,
  [SMALL_STATE(281)] = 4612,
  [SMALL_STATE(282)] = 4616,
  [SMALL_STATE(283)] = 4620,
  [SMALL_STATE(284)] = 4624,
  [SMALL_STATE(285)] = 4628,
  [SMALL_STATE(286)] = 4632,
  [SMALL_STATE(287)] = 4636,
  [SMALL_STATE(288)] = 4640,
  [SMALL_STATE(289)] = 4644,
  [SMALL_STATE(290)] = 4648,
  [SMALL_STATE(291)] = 4652,
  [SMALL_STATE(292)] = 4656,
  [SMALL_STATE(293)] = 4660,
  [SMALL_STATE(294)] = 4664,
  [SMALL_STATE(295)] = 4668,
  [SMALL_STATE(296)] = 4672,
  [SMALL_STATE(297)] = 4676,
  [SMALL_STATE(298)] = 4680,
  [SMALL_STATE(299)] = 4684,
  [SMALL_STATE(300)] = 4688,
  [SMALL_STATE(301)] = 4692,
  [SMALL_STATE(302)] = 4696,
  [SMALL_STATE(303)] = 4700,
  [SMALL_STATE(304)] = 4704,
  [SMALL_STATE(305)] = 4708,
  [SMALL_STATE(306)] = 4712,
  [SMALL_STATE(307)] = 4716,
  [SMALL_STATE(308)] = 4720,
  [SMALL_STATE(309)] = 4724,
  [SMALL_STATE(310)] = 4728,
  [SMALL_STATE(311)] = 4732,
  [SMALL_STATE(312)] = 4736,
  [SMALL_STATE(313)] = 4740,
  [SMALL_STATE(314)] = 4744,
  [SMALL_STATE(315)] = 4748,
  [SMALL_STATE(316)] = 4752,
  [SMALL_STATE(317)] = 4756,
  [SMALL_STATE(318)] = 4760,
  [SMALL_STATE(319)] = 4764,
  [SMALL_STATE(320)] = 4768,
  [SMALL_STATE(321)] = 4772,
  [SMALL_STATE(322)] = 4776,
  [SMALL_STATE(323)] = 4780,
  [SMALL_STATE(324)] = 4784,
  [SMALL_STATE(325)] = 4788,
  [SMALL_STATE(326)] = 4792,
  [SMALL_STATE(327)] = 4796,
  [SMALL_STATE(328)] = 4800,
  [SMALL_STATE(329)] = 4804,
  [SMALL_STATE(330)] = 4808,
  [SMALL_STATE(331)] = 4812,
  [SMALL_STATE(332)] = 4816,
  [SMALL_STATE(333)] = 4820,
  [SMALL_STATE(334)] = 4824,
  [SMALL_STATE(335)] = 4828,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_switch_case, 3, .production_id = 12),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(316),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(332),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(333),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_switch_case, 3, .production_id = 12),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_switch_case, 2),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_switch_case, 2),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_block_repeat1, 2), SHIFT_REPEAT(4),
  [48] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_script_block_repeat1, 2),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_block_repeat1, 2), SHIFT_REPEAT(211),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_block_repeat1, 2), SHIFT_REPEAT(316),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_block_repeat1, 2), SHIFT_REPEAT(332),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_block_repeat1, 2), SHIFT_REPEAT(165),
  [62] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_block_repeat1, 2), SHIFT_REPEAT(333),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_script_block_repeat1, 2),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_block_repeat1, 2), SHIFT_REPEAT(38),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_block_repeat1, 2), SHIFT_REPEAT(242),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_switch_case, 4, .production_id = 13),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_switch_case, 4, .production_id = 13),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_switch_case, 3, .production_id = 11),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_switch_case, 3, .production_id = 11),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [109] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_block_repeat1, 2), SHIFT_REPEAT(11),
  [112] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_block_repeat1, 2), SHIFT_REPEAT(208),
  [115] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_block_repeat1, 2), SHIFT_REPEAT(244),
  [118] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_block_repeat1, 2), SHIFT_REPEAT(241),
  [121] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_block_repeat1, 2), SHIFT_REPEAT(171),
  [124] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_block_repeat1, 2), SHIFT_REPEAT(243),
  [127] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_block_repeat1, 2), SHIFT_REPEAT(63),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(321),
  [190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(334),
  [192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(335),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_block, 3),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_block, 3),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_if, 5, .production_id = 4),
  [204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(320),
  [206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_if, 5, .production_id = 4),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_block, 2),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_block, 2),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_if, 10, .production_id = 14),
  [216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_if, 10, .production_id = 14),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_SCRIPT_0_LIT, 1),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_SCRIPT_0_LIT, 1),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_while, 2, .production_id = 3),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_while, 2, .production_id = 3),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_application, 4),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_application, 4),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_poryswitch_script, 7, .production_id = 7),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_poryswitch_script, 7, .production_id = 7),
  [236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(329),
  [238] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_if, 12, .production_id = 15),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_if, 12, .production_id = 15),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_while, 5, .production_id = 5),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_while, 5, .production_id = 5),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_switch, 7, .production_id = 9),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_switch, 7, .production_id = 9),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_if, 7, .production_id = 8),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_if, 7, .production_id = 8),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_do_while, 6, .production_id = 6),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_do_while, 6, .production_id = 6),
  [260] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NUM_LIT, 1),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [268] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(260),
  [271] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(181),
  [274] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(172),
  [277] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(315),
  [280] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(163),
  [283] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(164),
  [286] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(89),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_movement_values, 1),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_movement_values_repeat1, 2),
  [297] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_movement_values_repeat1, 2), SHIFT_REPEAT(83),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const, 5),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_const_repeat1, 2),
  [308] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_const_repeat1, 2), SHIFT_REPEAT(127),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const, 4),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_script_application_repeat1, 2),
  [315] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_application_repeat1, 2), SHIFT_REPEAT(119),
  [318] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_application_repeat1, 2), SHIFT_REPEAT(119),
  [321] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_application_repeat1, 2), SHIFT_REPEAT(77),
  [324] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_application_repeat1, 2), SHIFT_REPEAT(285),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [337] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__movement_entry, 1),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_MOVEMENT_LIT, 1),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 5, .production_id = 1),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_COMMENT, 1),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mart, 5, .production_id = 1),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_movement, 5, .production_id = 1),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script, 3, .production_id = 1),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mart, 6, .production_id = 2),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script, 4, .production_id = 2),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__movement_entry, 3),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_movement, 6, .production_id = 2),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 6, .production_id = 2),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw, 2),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_STRING_INTERPOLATED, 4),
  [389] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_STRING_INTERPOLATED, 4),
  [391] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_NUM_LIT, 1),
  [393] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_text_values_repeat1, 2), SHIFT_REPEAT(246),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_text_values_repeat1, 2),
  [398] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_text_values_repeat1, 2), SHIFT_REPEAT(144),
  [401] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_text_values_repeat1, 2), SHIFT_REPEAT(249),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_STRING_INTERPOLATED, 3),
  [406] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_STRING_INTERPOLATED, 3),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_values, 1),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [414] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_switch_repeat1, 2), SHIFT_REPEAT(147),
  [417] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_switch_repeat1, 2), SHIFT_REPEAT(327),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_script_switch_repeat1, 2),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [426] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [438] = {.entry = {.count = 1, .reusable = false}}, SHIFT(272),
  [440] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_FORMAT_STRING_repeat1, 2),
  [450] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_FORMAT_STRING_repeat1, 2), SHIFT_REPEAT(135),
  [453] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_FORMAT_STRING_repeat1, 2), SHIFT_REPEAT(249),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_STRING, 1),
  [472] = {.entry = {.count = 1, .reusable = false}}, SHIFT(325),
  [474] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_poryswitch_text_repeat1, 2),
  [488] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_poryswitch_text_repeat1, 2), SHIFT_REPEAT(206),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_poryswitch_mart_repeat1, 2),
  [493] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_poryswitch_mart_repeat1, 2), SHIFT_REPEAT(196),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_FORMAT_STRING, 4),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_poryswitch_script_repeat1, 2),
  [500] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_poryswitch_script_repeat1, 2), SHIFT_REPEAT(193),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_poryswitch_movement_repeat1, 2),
  [505] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_poryswitch_movement_repeat1, 2), SHIFT_REPEAT(234),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [534] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [536] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_STRING_INTERPOLATED_repeat1, 2), SHIFT_REPEAT(291),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_STRING_INTERPOLATED_repeat1, 2),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_mart_values_repeat1, 2),
  [545] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mart_values_repeat1, 2), SHIFT_REPEAT(180),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mart_values, 1),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_value, 1),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_poryswitch_case_mart, 4, .production_id = 10),
  [566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_poryswitch_case_movement, 4, .production_id = 10),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_poryswitch_case_text, 4, .production_id = 10),
  [584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_poryswitch_case_script, 4, .production_id = 10),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_poryswitch_case_text, 3, .production_id = 10),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_poryswitch_case_script, 3, .production_id = 10),
  [604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_movement_value, 1),
  [606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_poryswitch_case_movement, 3, .production_id = 10),
  [608] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_poryswitch_case_mart, 3, .production_id = 10),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mart_value, 1),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_SCRIPT_FN_LIT, 1),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_expression, 1),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [686] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scope_modifier, 3),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [714] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_poryswitch_text, 7, .production_id = 7),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [756] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [762] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_poryswitch_movement, 7, .production_id = 7),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [792] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_poryswitch_mart, 7, .production_id = 7),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_poryscript(void) {
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
