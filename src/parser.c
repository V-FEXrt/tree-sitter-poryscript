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
#define STATE_COUNT 258
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 112
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
  sym_script_expression = 71,
  sym_script_application = 72,
  sym_mart = 73,
  sym_mart_values = 74,
  sym_mart_value = 75,
  sym_poryswitch_case_mart = 76,
  sym_poryswitch_mart = 77,
  sym_movement = 78,
  sym_movement_values = 79,
  sym_movement_value = 80,
  sym__movement_entry = 81,
  sym_poryswitch_case_movement = 82,
  sym_poryswitch_movement = 83,
  sym_raw = 84,
  sym_text = 85,
  sym_text_values = 86,
  sym_text_value = 87,
  sym_poryswitch_case_text = 88,
  sym_poryswitch_text = 89,
  sym_scope_modifier = 90,
  sym_NUM_LIT = 91,
  sym_STRING = 92,
  sym_FORMAT_STRING = 93,
  sym_STRING_INTERPOLATED = 94,
  sym_MOVEMENT_LIT = 95,
  sym_SCRIPT_0_LIT = 96,
  sym_SCRIPT_FN_LIT = 97,
  sym_COMMENT = 98,
  aux_sym_source_file_repeat1 = 99,
  aux_sym_const_repeat1 = 100,
  aux_sym_script_block_repeat1 = 101,
  aux_sym_script_switch_repeat1 = 102,
  aux_sym_script_application_repeat1 = 103,
  aux_sym_mart_values_repeat1 = 104,
  aux_sym_poryswitch_mart_repeat1 = 105,
  aux_sym_movement_values_repeat1 = 106,
  aux_sym_poryswitch_movement_repeat1 = 107,
  aux_sym_text_values_repeat1 = 108,
  aux_sym_poryswitch_text_repeat1 = 109,
  aux_sym_FORMAT_STRING_repeat1 = 110,
  aux_sym_STRING_INTERPOLATED_repeat1 = 111,
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
  [sym_script_expression] = sym_script_expression,
  [sym_script_application] = sym_script_application,
  [sym_mart] = sym_mart,
  [sym_mart_values] = sym_mart_values,
  [sym_mart_value] = sym_mart_value,
  [sym_poryswitch_case_mart] = sym_poryswitch_case_mart,
  [sym_poryswitch_mart] = sym_poryswitch_mart,
  [sym_movement] = sym_movement,
  [sym_movement_values] = sym_movement_values,
  [sym_movement_value] = sym_movement_value,
  [sym__movement_entry] = sym__movement_entry,
  [sym_poryswitch_case_movement] = sym_poryswitch_case_mart,
  [sym_poryswitch_movement] = sym_poryswitch_mart,
  [sym_raw] = sym_raw,
  [sym_text] = sym_text,
  [sym_text_values] = sym_text_values,
  [sym_text_value] = sym_text_value,
  [sym_poryswitch_case_text] = sym_poryswitch_case_mart,
  [sym_poryswitch_text] = sym_poryswitch_mart,
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
  [8] = 7,
  [9] = 9,
  [10] = 7,
  [11] = 9,
  [12] = 7,
  [13] = 9,
  [14] = 7,
  [15] = 9,
  [16] = 2,
  [17] = 7,
  [18] = 9,
  [19] = 9,
  [20] = 9,
  [21] = 7,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 23,
  [26] = 26,
  [27] = 22,
  [28] = 28,
  [29] = 22,
  [30] = 23,
  [31] = 22,
  [32] = 23,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 24,
  [42] = 26,
  [43] = 40,
  [44] = 22,
  [45] = 23,
  [46] = 36,
  [47] = 37,
  [48] = 34,
  [49] = 22,
  [50] = 50,
  [51] = 28,
  [52] = 39,
  [53] = 38,
  [54] = 23,
  [55] = 35,
  [56] = 56,
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
  [67] = 22,
  [68] = 66,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 23,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 76,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 92,
  [96] = 96,
  [97] = 97,
  [98] = 93,
  [99] = 99,
  [100] = 96,
  [101] = 101,
  [102] = 102,
  [103] = 33,
  [104] = 101,
  [105] = 99,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 90,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 107,
  [115] = 115,
  [116] = 115,
  [117] = 91,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 122,
  [128] = 128,
  [129] = 124,
  [130] = 130,
  [131] = 131,
  [132] = 121,
  [133] = 133,
  [134] = 134,
  [135] = 73,
  [136] = 134,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 145,
  [148] = 148,
  [149] = 146,
  [150] = 150,
  [151] = 70,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 161,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 163,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 162,
  [178] = 126,
  [179] = 179,
  [180] = 165,
  [181] = 153,
  [182] = 158,
  [183] = 123,
  [184] = 85,
  [185] = 185,
  [186] = 186,
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
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 187,
  [237] = 221,
  [238] = 238,
  [239] = 239,
  [240] = 217,
  [241] = 239,
  [242] = 242,
  [243] = 218,
  [244] = 192,
  [245] = 191,
  [246] = 246,
  [247] = 247,
  [248] = 242,
  [249] = 189,
  [250] = 250,
  [251] = 195,
  [252] = 233,
  [253] = 223,
  [254] = 207,
  [255] = 255,
  [256] = 256,
  [257] = 194,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(148);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '#') ADVANCE(315);
      if (lookahead == '(') ADVANCE(185);
      if (lookahead == ')') ADVANCE(186);
      if (lookahead == '*') ADVANCE(192);
      if (lookahead == '+') ADVANCE(193);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '0') ADVANCE(194);
      if (lookahead == ':') ADVANCE(191);
      if (lookahead == '=') ADVANCE(184);
      if (lookahead == '[') ADVANCE(189);
      if (lookahead == ']') ADVANCE(190);
      if (lookahead == '`') ADVANCE(8);
      if (lookahead == 'b') ADVANCE(112);
      if (lookahead == 'c') ADVANCE(9);
      if (lookahead == 'd') ADVANCE(48);
      if (lookahead == 'e') ADVANCE(80);
      if (lookahead == 'f') ADVANCE(10);
      if (lookahead == 'g') ADVANCE(85);
      if (lookahead == 'i') ADVANCE(57);
      if (lookahead == 'l') ADVANCE(99);
      if (lookahead == 'm') ADVANCE(17);
      if (lookahead == 'p') ADVANCE(102);
      if (lookahead == 'r') ADVANCE(11);
      if (lookahead == 's') ADVANCE(34);
      if (lookahead == 't') ADVANCE(40);
      if (lookahead == 'v') ADVANCE(12);
      if (lookahead == 'w') ADVANCE(13);
      if (lookahead == '{') ADVANCE(187);
      if (lookahead == '}') ADVANCE(188);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(195);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '(') ADVANCE(185);
      if (lookahead == ')') ADVANCE(186);
      if (lookahead == '*') ADVANCE(192);
      if (lookahead == '0') ADVANCE(194);
      if (lookahead == '}') ADVANCE(188);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(195);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(198);
      if (lookahead == '{') ADVANCE(199);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(201);
      if (lookahead == '{') ADVANCE(200);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == ')') ADVANCE(186);
      if (lookahead == 'b') ADVANCE(291);
      if (lookahead == 'c') ADVANCE(286);
      if (lookahead == 'd') ADVANCE(254);
      if (lookahead == 'e') ADVANCE(281);
      if (lookahead == 'f') ADVANCE(227);
      if (lookahead == 'i') ADVANCE(258);
      if (lookahead == 'l') ADVANCE(287);
      if (lookahead == 'm') ADVANCE(294);
      if (lookahead == 'r') ADVANCE(243);
      if (lookahead == 's') ADVANCE(308);
      if (lookahead == 'v') ADVANCE(228);
      if (lookahead == 'w') ADVANCE(266);
      if (lookahead == '}') ADVANCE(188);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      END_STATE();
    case 5:
      if (lookahead == '/') ADVANCE(314);
      END_STATE();
    case 6:
      if (lookahead == '_') ADVANCE(38);
      if (lookahead == 'p') ADVANCE(86);
      END_STATE();
    case 7:
      if (lookahead == '_') ADVANCE(39);
      END_STATE();
    case 8:
      if (lookahead == '`') ADVANCE(202);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(116);
      if (lookahead == 'o') ADVANCE(92);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(35);
      if (lookahead == 'l') ADVANCE(14);
      if (lookahead == 'o') ADVANCE(108);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(138);
      if (lookahead == 'e') ADVANCE(89);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(84);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(81);
      if (lookahead == 'h') ADVANCE(73);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(62);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(145);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(79);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(109);
      if (lookahead == 'o') ADVANCE(137);
      if (lookahead == 's') ADVANCE(63);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(133);
      if (lookahead == 'e') ADVANCE(20);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(82);
      if (lookahead == 'k') ADVANCE(211);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(132);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(122);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(83);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(118);
      END_STATE();
    case 24:
      if (lookahead == 'b') ADVANCE(291);
      if (lookahead == 'c') ADVANCE(230);
      if (lookahead == 'd') ADVANCE(251);
      if (lookahead == 'e') ADVANCE(281);
      if (lookahead == 'f') ADVANCE(227);
      if (lookahead == 'i') ADVANCE(258);
      if (lookahead == 'l') ADVANCE(287);
      if (lookahead == 'm') ADVANCE(294);
      if (lookahead == 'r') ADVANCE(243);
      if (lookahead == 's') ADVANCE(308);
      if (lookahead == 'v') ADVANCE(228);
      if (lookahead == 'w') ADVANCE(266);
      if (lookahead == '}') ADVANCE(188);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(24)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      END_STATE();
    case 25:
      if (lookahead == 'b') ADVANCE(291);
      if (lookahead == 'c') ADVANCE(230);
      if (lookahead == 'd') ADVANCE(251);
      if (lookahead == 'e') ADVANCE(274);
      if (lookahead == 'f') ADVANCE(227);
      if (lookahead == 'i') ADVANCE(258);
      if (lookahead == 'l') ADVANCE(287);
      if (lookahead == 'm') ADVANCE(294);
      if (lookahead == 'r') ADVANCE(243);
      if (lookahead == 's') ADVANCE(308);
      if (lookahead == 'v') ADVANCE(228);
      if (lookahead == 'w') ADVANCE(266);
      if (lookahead == '}') ADVANCE(188);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(25)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      END_STATE();
    case 26:
      if (lookahead == 'b') ADVANCE(291);
      if (lookahead == 'c') ADVANCE(230);
      if (lookahead == 'd') ADVANCE(251);
      if (lookahead == 'e') ADVANCE(280);
      if (lookahead == 'f') ADVANCE(227);
      if (lookahead == 'i') ADVANCE(258);
      if (lookahead == 'l') ADVANCE(287);
      if (lookahead == 'm') ADVANCE(294);
      if (lookahead == 'r') ADVANCE(243);
      if (lookahead == 's') ADVANCE(308);
      if (lookahead == 'v') ADVANCE(228);
      if (lookahead == 'w') ADVANCE(266);
      if (lookahead == '}') ADVANCE(188);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      END_STATE();
    case 27:
      if (lookahead == 'b') ADVANCE(291);
      if (lookahead == 'c') ADVANCE(286);
      if (lookahead == 'd') ADVANCE(254);
      if (lookahead == 'e') ADVANCE(274);
      if (lookahead == 'f') ADVANCE(227);
      if (lookahead == 'i') ADVANCE(258);
      if (lookahead == 'l') ADVANCE(287);
      if (lookahead == 'm') ADVANCE(294);
      if (lookahead == 'r') ADVANCE(243);
      if (lookahead == 's') ADVANCE(308);
      if (lookahead == 'v') ADVANCE(228);
      if (lookahead == 'w') ADVANCE(266);
      if (lookahead == '}') ADVANCE(188);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      END_STATE();
    case 28:
      if (lookahead == 'b') ADVANCE(291);
      if (lookahead == 'c') ADVANCE(286);
      if (lookahead == 'd') ADVANCE(254);
      if (lookahead == 'e') ADVANCE(280);
      if (lookahead == 'f') ADVANCE(227);
      if (lookahead == 'i') ADVANCE(258);
      if (lookahead == 'l') ADVANCE(287);
      if (lookahead == 'm') ADVANCE(294);
      if (lookahead == 'r') ADVANCE(243);
      if (lookahead == 's') ADVANCE(308);
      if (lookahead == 'v') ADVANCE(228);
      if (lookahead == 'w') ADVANCE(266);
      if (lookahead == '}') ADVANCE(188);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(28)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      END_STATE();
    case 29:
      if (lookahead == 'b') ADVANCE(100);
      END_STATE();
    case 30:
      if (lookahead == 'b') ADVANCE(22);
      END_STATE();
    case 31:
      if (lookahead == 'c') ADVANCE(19);
      END_STATE();
    case 32:
      if (lookahead == 'c') ADVANCE(66);
      END_STATE();
    case 33:
      if (lookahead == 'c') ADVANCE(67);
      END_STATE();
    case 34:
      if (lookahead == 'c') ADVANCE(114);
      if (lookahead == 'w') ADVANCE(72);
      END_STATE();
    case 35:
      if (lookahead == 'c') ADVANCE(43);
      END_STATE();
    case 36:
      if (lookahead == 'd') ADVANCE(165);
      END_STATE();
    case 37:
      if (lookahead == 'd') ADVANCE(225);
      END_STATE();
    case 38:
      if (lookahead == 'd') ADVANCE(101);
      if (lookahead == 'l') ADVANCE(52);
      if (lookahead == 'r') ADVANCE(75);
      if (lookahead == 'u') ADVANCE(104);
      END_STATE();
    case 39:
      if (lookahead == 'd') ADVANCE(103);
      if (lookahead == 'l') ADVANCE(56);
      if (lookahead == 'r') ADVANCE(77);
      if (lookahead == 'u') ADVANCE(105);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(143);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(152);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(163);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(6);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(223);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(175);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(215);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(155);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(59);
      if (lookahead == 'o') ADVANCE(159);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(90);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(16);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(96);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(111);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 57:
      if (lookahead == 'f') ADVANCE(167);
      END_STATE();
    case 58:
      if (lookahead == 'f') ADVANCE(161);
      END_STATE();
    case 59:
      if (lookahead == 'f') ADVANCE(18);
      END_STATE();
    case 60:
      if (lookahead == 'f') ADVANCE(126);
      END_STATE();
    case 61:
      if (lookahead == 'f') ADVANCE(127);
      END_STATE();
    case 62:
      if (lookahead == 'g') ADVANCE(219);
      END_STATE();
    case 63:
      if (lookahead == 'g') ADVANCE(29);
      END_STATE();
    case 64:
      if (lookahead == 'g') ADVANCE(68);
      END_STATE();
    case 65:
      if (lookahead == 'g') ADVANCE(69);
      END_STATE();
    case 66:
      if (lookahead == 'h') ADVANCE(173);
      END_STATE();
    case 67:
      if (lookahead == 'h') ADVANCE(177);
      END_STATE();
    case 68:
      if (lookahead == 'h') ADVANCE(128);
      END_STATE();
    case 69:
      if (lookahead == 'h') ADVANCE(129);
      END_STATE();
    case 70:
      if (lookahead == 'i') ADVANCE(107);
      END_STATE();
    case 71:
      if (lookahead == 'i') ADVANCE(97);
      END_STATE();
    case 72:
      if (lookahead == 'i') ADVANCE(130);
      END_STATE();
    case 73:
      if (lookahead == 'i') ADVANCE(87);
      END_STATE();
    case 74:
      if (lookahead == 'i') ADVANCE(58);
      if (lookahead == 's') ADVANCE(42);
      END_STATE();
    case 75:
      if (lookahead == 'i') ADVANCE(64);
      END_STATE();
    case 76:
      if (lookahead == 'i') ADVANCE(131);
      END_STATE();
    case 77:
      if (lookahead == 'i') ADVANCE(65);
      END_STATE();
    case 78:
      if (lookahead == 'k') ADVANCE(7);
      END_STATE();
    case 79:
      if (lookahead == 'k') ADVANCE(150);
      END_STATE();
    case 80:
      if (lookahead == 'l') ADVANCE(74);
      if (lookahead == 'n') ADVANCE(36);
      END_STATE();
    case 81:
      if (lookahead == 'l') ADVANCE(78);
      END_STATE();
    case 82:
      if (lookahead == 'l') ADVANCE(169);
      END_STATE();
    case 83:
      if (lookahead == 'l') ADVANCE(170);
      END_STATE();
    case 84:
      if (lookahead == 'l') ADVANCE(135);
      if (lookahead == 'r') ADVANCE(221);
      END_STATE();
    case 85:
      if (lookahead == 'l') ADVANCE(98);
      END_STATE();
    case 86:
      if (lookahead == 'l') ADVANCE(15);
      END_STATE();
    case 87:
      if (lookahead == 'l') ADVANCE(45);
      END_STATE();
    case 88:
      if (lookahead == 'l') ADVANCE(124);
      END_STATE();
    case 89:
      if (lookahead == 'l') ADVANCE(54);
      if (lookahead == 't') ADVANCE(134);
      END_STATE();
    case 90:
      if (lookahead == 'm') ADVANCE(53);
      END_STATE();
    case 91:
      if (lookahead == 'm') ADVANCE(21);
      END_STATE();
    case 92:
      if (lookahead == 'n') ADVANCE(117);
      END_STATE();
    case 93:
      if (lookahead == 'n') ADVANCE(171);
      END_STATE();
    case 94:
      if (lookahead == 'n') ADVANCE(210);
      END_STATE();
    case 95:
      if (lookahead == 'n') ADVANCE(206);
      END_STATE();
    case 96:
      if (lookahead == 'n') ADVANCE(125);
      END_STATE();
    case 97:
      if (lookahead == 'n') ADVANCE(136);
      END_STATE();
    case 98:
      if (lookahead == 'o') ADVANCE(30);
      END_STATE();
    case 99:
      if (lookahead == 'o') ADVANCE(31);
      END_STATE();
    case 100:
      if (lookahead == 'o') ADVANCE(142);
      END_STATE();
    case 101:
      if (lookahead == 'o') ADVANCE(139);
      END_STATE();
    case 102:
      if (lookahead == 'o') ADVANCE(110);
      END_STATE();
    case 103:
      if (lookahead == 'o') ADVANCE(140);
      END_STATE();
    case 104:
      if (lookahead == 'p') ADVANCE(209);
      END_STATE();
    case 105:
      if (lookahead == 'p') ADVANCE(205);
      END_STATE();
    case 106:
      if (lookahead == 'p') ADVANCE(288);
      if (lookahead == '}') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(106)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      END_STATE();
    case 107:
      if (lookahead == 'p') ADVANCE(123);
      END_STATE();
    case 108:
      if (lookahead == 'r') ADVANCE(91);
      END_STATE();
    case 109:
      if (lookahead == 'r') ADVANCE(119);
      END_STATE();
    case 110:
      if (lookahead == 'r') ADVANCE(144);
      END_STATE();
    case 111:
      if (lookahead == 'r') ADVANCE(213);
      END_STATE();
    case 112:
      if (lookahead == 'r') ADVANCE(51);
      END_STATE();
    case 113:
      if (lookahead == 'r') ADVANCE(93);
      END_STATE();
    case 114:
      if (lookahead == 'r') ADVANCE(70);
      END_STATE();
    case 115:
      if (lookahead == 's') ADVANCE(141);
      END_STATE();
    case 116:
      if (lookahead == 's') ADVANCE(41);
      END_STATE();
    case 117:
      if (lookahead == 's') ADVANCE(121);
      if (lookahead == 't') ADVANCE(71);
      END_STATE();
    case 118:
      if (lookahead == 's') ADVANCE(46);
      END_STATE();
    case 119:
      if (lookahead == 't') ADVANCE(179);
      END_STATE();
    case 120:
      if (lookahead == 't') ADVANCE(183);
      END_STATE();
    case 121:
      if (lookahead == 't') ADVANCE(154);
      END_STATE();
    case 122:
      if (lookahead == 't') ADVANCE(149);
      END_STATE();
    case 123:
      if (lookahead == 't') ADVANCE(182);
      END_STATE();
    case 124:
      if (lookahead == 't') ADVANCE(157);
      END_STATE();
    case 125:
      if (lookahead == 't') ADVANCE(180);
      END_STATE();
    case 126:
      if (lookahead == 't') ADVANCE(207);
      END_STATE();
    case 127:
      if (lookahead == 't') ADVANCE(203);
      END_STATE();
    case 128:
      if (lookahead == 't') ADVANCE(208);
      END_STATE();
    case 129:
      if (lookahead == 't') ADVANCE(204);
      END_STATE();
    case 130:
      if (lookahead == 't') ADVANCE(32);
      END_STATE();
    case 131:
      if (lookahead == 't') ADVANCE(33);
      END_STATE();
    case 132:
      if (lookahead == 't') ADVANCE(49);
      END_STATE();
    case 133:
      if (lookahead == 'u') ADVANCE(88);
      END_STATE();
    case 134:
      if (lookahead == 'u') ADVANCE(113);
      END_STATE();
    case 135:
      if (lookahead == 'u') ADVANCE(44);
      END_STATE();
    case 136:
      if (lookahead == 'u') ADVANCE(47);
      END_STATE();
    case 137:
      if (lookahead == 'v') ADVANCE(50);
      END_STATE();
    case 138:
      if (lookahead == 'w') ADVANCE(181);
      END_STATE();
    case 139:
      if (lookahead == 'w') ADVANCE(94);
      END_STATE();
    case 140:
      if (lookahead == 'w') ADVANCE(95);
      END_STATE();
    case 141:
      if (lookahead == 'w') ADVANCE(76);
      END_STATE();
    case 142:
      if (lookahead == 'x') ADVANCE(217);
      END_STATE();
    case 143:
      if (lookahead == 'x') ADVANCE(120);
      END_STATE();
    case 144:
      if (lookahead == 'y') ADVANCE(115);
      END_STATE();
    case 145:
      if (lookahead == 'y') ADVANCE(55);
      END_STATE();
    case 146:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(197);
      END_STATE();
    case 147:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(196);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_TOKEN_BI_FORMAT);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_TOKEN_KW_BREAK);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_TOKEN_KW_BREAK);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_TOKEN_KW_CASE);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_TOKEN_KW_CASE);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_TOKEN_KW_CONST);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_TOKEN_KW_CONTINUE);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_TOKEN_KW_CONTINUE);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_TOKEN_KW_DEFAULT);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_TOKEN_KW_DEFAULT);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_TOKEN_KW_DO);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_TOKEN_KW_DO);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_TOKEN_KW_ELIF);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_TOKEN_KW_ELIF);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_TOKEN_KW_ELSE);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_TOKEN_KW_ELSE);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_TOKEN_KW_END);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_TOKEN_KW_END);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_TOKEN_KW_IF);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_TOKEN_KW_IF);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_TOKEN_KW_LOCAL);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_TOKEN_KW_GLOBAL);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_TOKEN_KW_RETURN);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_TOKEN_KW_RETURN);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_TOKEN_KW_SWITCH);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_TOKEN_KW_SWITCH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_TOKEN_KW_WHILE);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_TOKEN_KW_WHILE);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_TOKEN_KW_PORYSWITCH);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_TOKEN_KW_PORYSWITCH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_TOKEN_KW_MART);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_TOKEN_KW_MOVEMENT);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_TOKEN_KW_RAW);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_TOKEN_KW_SCRIPT);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_TOKEN_KW_TEXT);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_TOKEN_P_EQUALS);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_TOKEN_P_POPEN);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_TOKEN_P_PCLOSE);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_TOKEN_P_BOPEN);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_TOKEN_P_BCLOSE);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_TOKEN_P_SOPEN);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_TOKEN_P_SCLOSE);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_TOKEN_P_COLON);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_TOKEN_P_ASTER);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_TOKEN_P_PLUS);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_INT_LIT);
      if (lookahead == 'b') ADVANCE(146);
      if (lookahead == 'x') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(195);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_INT_LIT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(195);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_HEX_LIT);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(196);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_BIN_LIT);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(197);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_STRING_LIT);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_STRING_INTER_START);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_STRING_INTER_MID);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_STRING_INTER_END);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_RAW_LIT);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_walk_left);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_walk_right);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_walk_up);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_walk_down);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_face_left);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_face_right);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_face_up);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_face_down);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_lock);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_lock);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_faceplayer);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_faceplayer);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_release);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_release);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_msgbox);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_msgbox);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_flag);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_flag);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_var);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_var);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_value);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_value);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_defeated);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_defeated);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'a') ADVANCE(240);
      if (lookahead == 'l') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'a') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'a') ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'a') ADVANCE(295);
      if (lookahead == 'o') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'a') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'a') ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'a') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'a') ADVANCE(305);
      if (lookahead == 'e') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'a') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'b') ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'c') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'c') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'c') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'c') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'd') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'd') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'e') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'e') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'e') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'e') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'e') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'e') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'e') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'e') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'e') ADVANCE(259);
      if (lookahead == 'o') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'e') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'e') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'e') ADVANCE(261);
      if (lookahead == 'o') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'e') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'e') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'e') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'f') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'f') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'f') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'f') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'g') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'g') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'h') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'h') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'h') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'i') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'i') ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'i') ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'i') ADVANCE(260);
      if (lookahead == 's') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'i') ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'k') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'k') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'l') ADVANCE(270);
      if (lookahead == 'n') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'l') ADVANCE(306);
      if (lookahead == 'r') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'l') ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'l') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'l') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'l') ADVANCE(257);
      if (lookahead == 't') ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'l') ADVANCE(297);
      if (lookahead == 'n') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'n') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'n') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'n') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'n') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'o') ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'o') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'o') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'o') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'p') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'r') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'r') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'r') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'r') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 's') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 's') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 's') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 's') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 's') ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 't') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 't') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 't') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 't') ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 't') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'u') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'u') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'u') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'u') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'w') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'w') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'x') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'y') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_IDENT);
      if (lookahead == 'y') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_IDENT);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(313);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_SLASH_COMMENT);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(314);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_HASH_COMMENT);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(315);
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
  [22] = {.lex_state = 25},
  [23] = {.lex_state = 25},
  [24] = {.lex_state = 25},
  [25] = {.lex_state = 26},
  [26] = {.lex_state = 26},
  [27] = {.lex_state = 26},
  [28] = {.lex_state = 24},
  [29] = {.lex_state = 24},
  [30] = {.lex_state = 24},
  [31] = {.lex_state = 27},
  [32] = {.lex_state = 27},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 24},
  [35] = {.lex_state = 24},
  [36] = {.lex_state = 24},
  [37] = {.lex_state = 24},
  [38] = {.lex_state = 24},
  [39] = {.lex_state = 24},
  [40] = {.lex_state = 24},
  [41] = {.lex_state = 27},
  [42] = {.lex_state = 28},
  [43] = {.lex_state = 4},
  [44] = {.lex_state = 28},
  [45] = {.lex_state = 28},
  [46] = {.lex_state = 4},
  [47] = {.lex_state = 4},
  [48] = {.lex_state = 4},
  [49] = {.lex_state = 4},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 4},
  [52] = {.lex_state = 4},
  [53] = {.lex_state = 4},
  [54] = {.lex_state = 4},
  [55] = {.lex_state = 4},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 1},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 1},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 1},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 1},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 1},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 1},
  [91] = {.lex_state = 1},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 1},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 1},
  [109] = {.lex_state = 106},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 106},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 1},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 1},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 1},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 1},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 1},
  [131] = {.lex_state = 1},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 1},
  [134] = {.lex_state = 106},
  [135] = {.lex_state = 1},
  [136] = {.lex_state = 106},
  [137] = {.lex_state = 1},
  [138] = {.lex_state = 106},
  [139] = {.lex_state = 1},
  [140] = {.lex_state = 1},
  [141] = {.lex_state = 1},
  [142] = {.lex_state = 1},
  [143] = {.lex_state = 1},
  [144] = {.lex_state = 1},
  [145] = {.lex_state = 106},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 106},
  [148] = {.lex_state = 1},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 1},
  [151] = {.lex_state = 1},
  [152] = {.lex_state = 1},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 106},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 1},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 1},
  [167] = {.lex_state = 1},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 1},
  [170] = {.lex_state = 1},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 1},
  [174] = {.lex_state = 1},
  [175] = {.lex_state = 1},
  [176] = {.lex_state = 1},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 1},
  [179] = {.lex_state = 1},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 1},
  [184] = {.lex_state = 1},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 1},
  [188] = {.lex_state = 1},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 1},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 1},
  [210] = {.lex_state = 1},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 1},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 1},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 1},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 1},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 1},
  [236] = {.lex_state = 1},
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
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 1},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 0},
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
    [sym_source_file] = STATE(231),
    [sym_statement] = STATE(50),
    [sym_const] = STATE(78),
    [sym_script] = STATE(78),
    [sym_mart] = STATE(78),
    [sym_movement] = STATE(78),
    [sym_raw] = STATE(78),
    [sym_text] = STATE(78),
    [sym_COMMENT] = STATE(78),
    [aux_sym_source_file_repeat1] = STATE(50),
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
  [0] = 11,
    ACTIONS(24), 1,
      sym_TOKEN_KW_DO,
    ACTIONS(27), 1,
      sym_TOKEN_KW_IF,
    ACTIONS(30), 1,
      sym_TOKEN_KW_SWITCH,
    ACTIONS(33), 1,
      sym_TOKEN_KW_WHILE,
    ACTIONS(36), 1,
      sym_TOKEN_P_BCLOSE,
    STATE(244), 1,
      sym_SCRIPT_FN_LIT,
    ACTIONS(22), 2,
      sym_TOKEN_KW_CASE,
      sym_TOKEN_KW_DEFAULT,
    ACTIONS(38), 3,
      anon_sym_lock,
      anon_sym_faceplayer,
      anon_sym_release,
    ACTIONS(19), 5,
      sym_TOKEN_KW_BREAK,
      sym_TOKEN_KW_CONTINUE,
      sym_TOKEN_KW_END,
      sym_TOKEN_KW_RETURN,
      sym_IDENT,
    ACTIONS(41), 5,
      anon_sym_msgbox,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_value,
      anon_sym_defeated,
    STATE(2), 8,
      sym__script_statements,
      sym_script_if,
      sym_script_while,
      sym_script_do_while,
      sym_script_switch,
      sym_script_application,
      sym_SCRIPT_0_LIT,
      aux_sym_script_block_repeat1,
  [52] = 11,
    ACTIONS(48), 1,
      sym_TOKEN_KW_DO,
    ACTIONS(50), 1,
      sym_TOKEN_KW_IF,
    ACTIONS(52), 1,
      sym_TOKEN_KW_SWITCH,
    ACTIONS(54), 1,
      sym_TOKEN_KW_WHILE,
    ACTIONS(56), 1,
      sym_TOKEN_P_BCLOSE,
    STATE(244), 1,
      sym_SCRIPT_FN_LIT,
    ACTIONS(46), 2,
      sym_TOKEN_KW_CASE,
      sym_TOKEN_KW_DEFAULT,
    ACTIONS(58), 3,
      anon_sym_lock,
      anon_sym_faceplayer,
      anon_sym_release,
    ACTIONS(44), 5,
      sym_TOKEN_KW_BREAK,
      sym_TOKEN_KW_CONTINUE,
      sym_TOKEN_KW_END,
      sym_TOKEN_KW_RETURN,
      sym_IDENT,
    ACTIONS(60), 5,
      anon_sym_msgbox,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_value,
      anon_sym_defeated,
    STATE(2), 8,
      sym__script_statements,
      sym_script_if,
      sym_script_while,
      sym_script_do_while,
      sym_script_switch,
      sym_script_application,
      sym_SCRIPT_0_LIT,
      aux_sym_script_block_repeat1,
  [104] = 11,
    ACTIONS(48), 1,
      sym_TOKEN_KW_DO,
    ACTIONS(50), 1,
      sym_TOKEN_KW_IF,
    ACTIONS(52), 1,
      sym_TOKEN_KW_SWITCH,
    ACTIONS(54), 1,
      sym_TOKEN_KW_WHILE,
    ACTIONS(64), 1,
      sym_TOKEN_P_BCLOSE,
    STATE(244), 1,
      sym_SCRIPT_FN_LIT,
    ACTIONS(62), 2,
      sym_TOKEN_KW_CASE,
      sym_TOKEN_KW_DEFAULT,
    ACTIONS(58), 3,
      anon_sym_lock,
      anon_sym_faceplayer,
      anon_sym_release,
    ACTIONS(44), 5,
      sym_TOKEN_KW_BREAK,
      sym_TOKEN_KW_CONTINUE,
      sym_TOKEN_KW_END,
      sym_TOKEN_KW_RETURN,
      sym_IDENT,
    ACTIONS(60), 5,
      anon_sym_msgbox,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_value,
      anon_sym_defeated,
    STATE(2), 8,
      sym__script_statements,
      sym_script_if,
      sym_script_while,
      sym_script_do_while,
      sym_script_switch,
      sym_script_application,
      sym_SCRIPT_0_LIT,
      aux_sym_script_block_repeat1,
  [156] = 11,
    ACTIONS(48), 1,
      sym_TOKEN_KW_DO,
    ACTIONS(50), 1,
      sym_TOKEN_KW_IF,
    ACTIONS(52), 1,
      sym_TOKEN_KW_SWITCH,
    ACTIONS(54), 1,
      sym_TOKEN_KW_WHILE,
    ACTIONS(70), 1,
      sym_TOKEN_P_BCLOSE,
    STATE(244), 1,
      sym_SCRIPT_FN_LIT,
    ACTIONS(68), 2,
      sym_TOKEN_KW_CASE,
      sym_TOKEN_KW_DEFAULT,
    ACTIONS(58), 3,
      anon_sym_lock,
      anon_sym_faceplayer,
      anon_sym_release,
    ACTIONS(60), 5,
      anon_sym_msgbox,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_value,
      anon_sym_defeated,
    ACTIONS(66), 5,
      sym_TOKEN_KW_BREAK,
      sym_TOKEN_KW_CONTINUE,
      sym_TOKEN_KW_END,
      sym_TOKEN_KW_RETURN,
      sym_IDENT,
    STATE(3), 8,
      sym__script_statements,
      sym_script_if,
      sym_script_while,
      sym_script_do_while,
      sym_script_switch,
      sym_script_application,
      sym_SCRIPT_0_LIT,
      aux_sym_script_block_repeat1,
  [208] = 11,
    ACTIONS(48), 1,
      sym_TOKEN_KW_DO,
    ACTIONS(50), 1,
      sym_TOKEN_KW_IF,
    ACTIONS(52), 1,
      sym_TOKEN_KW_SWITCH,
    ACTIONS(54), 1,
      sym_TOKEN_KW_WHILE,
    ACTIONS(76), 1,
      sym_TOKEN_P_BCLOSE,
    STATE(244), 1,
      sym_SCRIPT_FN_LIT,
    ACTIONS(74), 2,
      sym_TOKEN_KW_CASE,
      sym_TOKEN_KW_DEFAULT,
    ACTIONS(58), 3,
      anon_sym_lock,
      anon_sym_faceplayer,
      anon_sym_release,
    ACTIONS(60), 5,
      anon_sym_msgbox,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_value,
      anon_sym_defeated,
    ACTIONS(72), 5,
      sym_TOKEN_KW_BREAK,
      sym_TOKEN_KW_CONTINUE,
      sym_TOKEN_KW_END,
      sym_TOKEN_KW_RETURN,
      sym_IDENT,
    STATE(4), 8,
      sym__script_statements,
      sym_script_if,
      sym_script_while,
      sym_script_do_while,
      sym_script_switch,
      sym_script_application,
      sym_SCRIPT_0_LIT,
      aux_sym_script_block_repeat1,
  [260] = 10,
    ACTIONS(80), 1,
      sym_TOKEN_KW_DO,
    ACTIONS(82), 1,
      sym_TOKEN_KW_IF,
    ACTIONS(84), 1,
      sym_TOKEN_KW_SWITCH,
    ACTIONS(86), 1,
      sym_TOKEN_KW_WHILE,
    ACTIONS(88), 1,
      sym_TOKEN_P_BCLOSE,
    STATE(192), 1,
      sym_SCRIPT_FN_LIT,
    ACTIONS(90), 3,
      anon_sym_lock,
      anon_sym_faceplayer,
      anon_sym_release,
    ACTIONS(60), 5,
      anon_sym_msgbox,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_value,
      anon_sym_defeated,
    ACTIONS(78), 5,
      sym_TOKEN_KW_BREAK,
      sym_TOKEN_KW_CONTINUE,
      sym_TOKEN_KW_END,
      sym_TOKEN_KW_RETURN,
      sym_IDENT,
    STATE(16), 8,
      sym__script_statements,
      sym_script_if,
      sym_script_while,
      sym_script_do_while,
      sym_script_switch,
      sym_script_application,
      sym_SCRIPT_0_LIT,
      aux_sym_script_block_repeat1,
  [308] = 10,
    ACTIONS(80), 1,
      sym_TOKEN_KW_DO,
    ACTIONS(82), 1,
      sym_TOKEN_KW_IF,
    ACTIONS(84), 1,
      sym_TOKEN_KW_SWITCH,
    ACTIONS(86), 1,
      sym_TOKEN_KW_WHILE,
    ACTIONS(92), 1,
      sym_TOKEN_P_BCLOSE,
    STATE(192), 1,
      sym_SCRIPT_FN_LIT,
    ACTIONS(90), 3,
      anon_sym_lock,
      anon_sym_faceplayer,
      anon_sym_release,
    ACTIONS(60), 5,
      anon_sym_msgbox,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_value,
      anon_sym_defeated,
    ACTIONS(78), 5,
      sym_TOKEN_KW_BREAK,
      sym_TOKEN_KW_CONTINUE,
      sym_TOKEN_KW_END,
      sym_TOKEN_KW_RETURN,
      sym_IDENT,
    STATE(16), 8,
      sym__script_statements,
      sym_script_if,
      sym_script_while,
      sym_script_do_while,
      sym_script_switch,
      sym_script_application,
      sym_SCRIPT_0_LIT,
      aux_sym_script_block_repeat1,
  [356] = 10,
    ACTIONS(80), 1,
      sym_TOKEN_KW_DO,
    ACTIONS(82), 1,
      sym_TOKEN_KW_IF,
    ACTIONS(84), 1,
      sym_TOKEN_KW_SWITCH,
    ACTIONS(86), 1,
      sym_TOKEN_KW_WHILE,
    ACTIONS(96), 1,
      sym_TOKEN_P_BCLOSE,
    STATE(192), 1,
      sym_SCRIPT_FN_LIT,
    ACTIONS(90), 3,
      anon_sym_lock,
      anon_sym_faceplayer,
      anon_sym_release,
    ACTIONS(60), 5,
      anon_sym_msgbox,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_value,
      anon_sym_defeated,
    ACTIONS(94), 5,
      sym_TOKEN_KW_BREAK,
      sym_TOKEN_KW_CONTINUE,
      sym_TOKEN_KW_END,
      sym_TOKEN_KW_RETURN,
      sym_IDENT,
    STATE(8), 8,
      sym__script_statements,
      sym_script_if,
      sym_script_while,
      sym_script_do_while,
      sym_script_switch,
      sym_script_application,
      sym_SCRIPT_0_LIT,
      aux_sym_script_block_repeat1,
  [404] = 10,
    ACTIONS(80), 1,
      sym_TOKEN_KW_DO,
    ACTIONS(82), 1,
      sym_TOKEN_KW_IF,
    ACTIONS(84), 1,
      sym_TOKEN_KW_SWITCH,
    ACTIONS(86), 1,
      sym_TOKEN_KW_WHILE,
    ACTIONS(98), 1,
      sym_TOKEN_P_BCLOSE,
    STATE(192), 1,
      sym_SCRIPT_FN_LIT,
    ACTIONS(90), 3,
      anon_sym_lock,
      anon_sym_faceplayer,
      anon_sym_release,
    ACTIONS(60), 5,
      anon_sym_msgbox,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_value,
      anon_sym_defeated,
    ACTIONS(78), 5,
      sym_TOKEN_KW_BREAK,
      sym_TOKEN_KW_CONTINUE,
      sym_TOKEN_KW_END,
      sym_TOKEN_KW_RETURN,
      sym_IDENT,
    STATE(16), 8,
      sym__script_statements,
      sym_script_if,
      sym_script_while,
      sym_script_do_while,
      sym_script_switch,
      sym_script_application,
      sym_SCRIPT_0_LIT,
      aux_sym_script_block_repeat1,
  [452] = 10,
    ACTIONS(80), 1,
      sym_TOKEN_KW_DO,
    ACTIONS(82), 1,
      sym_TOKEN_KW_IF,
    ACTIONS(84), 1,
      sym_TOKEN_KW_SWITCH,
    ACTIONS(86), 1,
      sym_TOKEN_KW_WHILE,
    ACTIONS(102), 1,
      sym_TOKEN_P_BCLOSE,
    STATE(192), 1,
      sym_SCRIPT_FN_LIT,
    ACTIONS(90), 3,
      anon_sym_lock,
      anon_sym_faceplayer,
      anon_sym_release,
    ACTIONS(60), 5,
      anon_sym_msgbox,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_value,
      anon_sym_defeated,
    ACTIONS(100), 5,
      sym_TOKEN_KW_BREAK,
      sym_TOKEN_KW_CONTINUE,
      sym_TOKEN_KW_END,
      sym_TOKEN_KW_RETURN,
      sym_IDENT,
    STATE(10), 8,
      sym__script_statements,
      sym_script_if,
      sym_script_while,
      sym_script_do_while,
      sym_script_switch,
      sym_script_application,
      sym_SCRIPT_0_LIT,
      aux_sym_script_block_repeat1,
  [500] = 10,
    ACTIONS(80), 1,
      sym_TOKEN_KW_DO,
    ACTIONS(82), 1,
      sym_TOKEN_KW_IF,
    ACTIONS(84), 1,
      sym_TOKEN_KW_SWITCH,
    ACTIONS(86), 1,
      sym_TOKEN_KW_WHILE,
    ACTIONS(104), 1,
      sym_TOKEN_P_BCLOSE,
    STATE(192), 1,
      sym_SCRIPT_FN_LIT,
    ACTIONS(90), 3,
      anon_sym_lock,
      anon_sym_faceplayer,
      anon_sym_release,
    ACTIONS(60), 5,
      anon_sym_msgbox,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_value,
      anon_sym_defeated,
    ACTIONS(78), 5,
      sym_TOKEN_KW_BREAK,
      sym_TOKEN_KW_CONTINUE,
      sym_TOKEN_KW_END,
      sym_TOKEN_KW_RETURN,
      sym_IDENT,
    STATE(16), 8,
      sym__script_statements,
      sym_script_if,
      sym_script_while,
      sym_script_do_while,
      sym_script_switch,
      sym_script_application,
      sym_SCRIPT_0_LIT,
      aux_sym_script_block_repeat1,
  [548] = 10,
    ACTIONS(80), 1,
      sym_TOKEN_KW_DO,
    ACTIONS(82), 1,
      sym_TOKEN_KW_IF,
    ACTIONS(84), 1,
      sym_TOKEN_KW_SWITCH,
    ACTIONS(86), 1,
      sym_TOKEN_KW_WHILE,
    ACTIONS(108), 1,
      sym_TOKEN_P_BCLOSE,
    STATE(192), 1,
      sym_SCRIPT_FN_LIT,
    ACTIONS(90), 3,
      anon_sym_lock,
      anon_sym_faceplayer,
      anon_sym_release,
    ACTIONS(60), 5,
      anon_sym_msgbox,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_value,
      anon_sym_defeated,
    ACTIONS(106), 5,
      sym_TOKEN_KW_BREAK,
      sym_TOKEN_KW_CONTINUE,
      sym_TOKEN_KW_END,
      sym_TOKEN_KW_RETURN,
      sym_IDENT,
    STATE(12), 8,
      sym__script_statements,
      sym_script_if,
      sym_script_while,
      sym_script_do_while,
      sym_script_switch,
      sym_script_application,
      sym_SCRIPT_0_LIT,
      aux_sym_script_block_repeat1,
  [596] = 10,
    ACTIONS(80), 1,
      sym_TOKEN_KW_DO,
    ACTIONS(82), 1,
      sym_TOKEN_KW_IF,
    ACTIONS(84), 1,
      sym_TOKEN_KW_SWITCH,
    ACTIONS(86), 1,
      sym_TOKEN_KW_WHILE,
    ACTIONS(110), 1,
      sym_TOKEN_P_BCLOSE,
    STATE(192), 1,
      sym_SCRIPT_FN_LIT,
    ACTIONS(90), 3,
      anon_sym_lock,
      anon_sym_faceplayer,
      anon_sym_release,
    ACTIONS(60), 5,
      anon_sym_msgbox,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_value,
      anon_sym_defeated,
    ACTIONS(78), 5,
      sym_TOKEN_KW_BREAK,
      sym_TOKEN_KW_CONTINUE,
      sym_TOKEN_KW_END,
      sym_TOKEN_KW_RETURN,
      sym_IDENT,
    STATE(16), 8,
      sym__script_statements,
      sym_script_if,
      sym_script_while,
      sym_script_do_while,
      sym_script_switch,
      sym_script_application,
      sym_SCRIPT_0_LIT,
      aux_sym_script_block_repeat1,
  [644] = 10,
    ACTIONS(80), 1,
      sym_TOKEN_KW_DO,
    ACTIONS(82), 1,
      sym_TOKEN_KW_IF,
    ACTIONS(84), 1,
      sym_TOKEN_KW_SWITCH,
    ACTIONS(86), 1,
      sym_TOKEN_KW_WHILE,
    ACTIONS(114), 1,
      sym_TOKEN_P_BCLOSE,
    STATE(192), 1,
      sym_SCRIPT_FN_LIT,
    ACTIONS(90), 3,
      anon_sym_lock,
      anon_sym_faceplayer,
      anon_sym_release,
    ACTIONS(60), 5,
      anon_sym_msgbox,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_value,
      anon_sym_defeated,
    ACTIONS(112), 5,
      sym_TOKEN_KW_BREAK,
      sym_TOKEN_KW_CONTINUE,
      sym_TOKEN_KW_END,
      sym_TOKEN_KW_RETURN,
      sym_IDENT,
    STATE(14), 8,
      sym__script_statements,
      sym_script_if,
      sym_script_while,
      sym_script_do_while,
      sym_script_switch,
      sym_script_application,
      sym_SCRIPT_0_LIT,
      aux_sym_script_block_repeat1,
  [692] = 10,
    ACTIONS(36), 1,
      sym_TOKEN_P_BCLOSE,
    ACTIONS(119), 1,
      sym_TOKEN_KW_DO,
    ACTIONS(122), 1,
      sym_TOKEN_KW_IF,
    ACTIONS(125), 1,
      sym_TOKEN_KW_SWITCH,
    ACTIONS(128), 1,
      sym_TOKEN_KW_WHILE,
    STATE(192), 1,
      sym_SCRIPT_FN_LIT,
    ACTIONS(131), 3,
      anon_sym_lock,
      anon_sym_faceplayer,
      anon_sym_release,
    ACTIONS(41), 5,
      anon_sym_msgbox,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_value,
      anon_sym_defeated,
    ACTIONS(116), 5,
      sym_TOKEN_KW_BREAK,
      sym_TOKEN_KW_CONTINUE,
      sym_TOKEN_KW_END,
      sym_TOKEN_KW_RETURN,
      sym_IDENT,
    STATE(16), 8,
      sym__script_statements,
      sym_script_if,
      sym_script_while,
      sym_script_do_while,
      sym_script_switch,
      sym_script_application,
      sym_SCRIPT_0_LIT,
      aux_sym_script_block_repeat1,
  [740] = 10,
    ACTIONS(80), 1,
      sym_TOKEN_KW_DO,
    ACTIONS(82), 1,
      sym_TOKEN_KW_IF,
    ACTIONS(84), 1,
      sym_TOKEN_KW_SWITCH,
    ACTIONS(86), 1,
      sym_TOKEN_KW_WHILE,
    ACTIONS(134), 1,
      sym_TOKEN_P_BCLOSE,
    STATE(192), 1,
      sym_SCRIPT_FN_LIT,
    ACTIONS(90), 3,
      anon_sym_lock,
      anon_sym_faceplayer,
      anon_sym_release,
    ACTIONS(60), 5,
      anon_sym_msgbox,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_value,
      anon_sym_defeated,
    ACTIONS(78), 5,
      sym_TOKEN_KW_BREAK,
      sym_TOKEN_KW_CONTINUE,
      sym_TOKEN_KW_END,
      sym_TOKEN_KW_RETURN,
      sym_IDENT,
    STATE(16), 8,
      sym__script_statements,
      sym_script_if,
      sym_script_while,
      sym_script_do_while,
      sym_script_switch,
      sym_script_application,
      sym_SCRIPT_0_LIT,
      aux_sym_script_block_repeat1,
  [788] = 10,
    ACTIONS(80), 1,
      sym_TOKEN_KW_DO,
    ACTIONS(82), 1,
      sym_TOKEN_KW_IF,
    ACTIONS(84), 1,
      sym_TOKEN_KW_SWITCH,
    ACTIONS(86), 1,
      sym_TOKEN_KW_WHILE,
    ACTIONS(138), 1,
      sym_TOKEN_P_BCLOSE,
    STATE(192), 1,
      sym_SCRIPT_FN_LIT,
    ACTIONS(90), 3,
      anon_sym_lock,
      anon_sym_faceplayer,
      anon_sym_release,
    ACTIONS(60), 5,
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
    STATE(21), 8,
      sym__script_statements,
      sym_script_if,
      sym_script_while,
      sym_script_do_while,
      sym_script_switch,
      sym_script_application,
      sym_SCRIPT_0_LIT,
      aux_sym_script_block_repeat1,
  [836] = 10,
    ACTIONS(80), 1,
      sym_TOKEN_KW_DO,
    ACTIONS(82), 1,
      sym_TOKEN_KW_IF,
    ACTIONS(84), 1,
      sym_TOKEN_KW_SWITCH,
    ACTIONS(86), 1,
      sym_TOKEN_KW_WHILE,
    ACTIONS(142), 1,
      sym_TOKEN_P_BCLOSE,
    STATE(192), 1,
      sym_SCRIPT_FN_LIT,
    ACTIONS(90), 3,
      anon_sym_lock,
      anon_sym_faceplayer,
      anon_sym_release,
    ACTIONS(60), 5,
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
    STATE(17), 8,
      sym__script_statements,
      sym_script_if,
      sym_script_while,
      sym_script_do_while,
      sym_script_switch,
      sym_script_application,
      sym_SCRIPT_0_LIT,
      aux_sym_script_block_repeat1,
  [884] = 10,
    ACTIONS(80), 1,
      sym_TOKEN_KW_DO,
    ACTIONS(82), 1,
      sym_TOKEN_KW_IF,
    ACTIONS(84), 1,
      sym_TOKEN_KW_SWITCH,
    ACTIONS(86), 1,
      sym_TOKEN_KW_WHILE,
    ACTIONS(146), 1,
      sym_TOKEN_P_BCLOSE,
    STATE(192), 1,
      sym_SCRIPT_FN_LIT,
    ACTIONS(90), 3,
      anon_sym_lock,
      anon_sym_faceplayer,
      anon_sym_release,
    ACTIONS(60), 5,
      anon_sym_msgbox,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_value,
      anon_sym_defeated,
    ACTIONS(144), 5,
      sym_TOKEN_KW_BREAK,
      sym_TOKEN_KW_CONTINUE,
      sym_TOKEN_KW_END,
      sym_TOKEN_KW_RETURN,
      sym_IDENT,
    STATE(7), 8,
      sym__script_statements,
      sym_script_if,
      sym_script_while,
      sym_script_do_while,
      sym_script_switch,
      sym_script_application,
      sym_SCRIPT_0_LIT,
      aux_sym_script_block_repeat1,
  [932] = 10,
    ACTIONS(80), 1,
      sym_TOKEN_KW_DO,
    ACTIONS(82), 1,
      sym_TOKEN_KW_IF,
    ACTIONS(84), 1,
      sym_TOKEN_KW_SWITCH,
    ACTIONS(86), 1,
      sym_TOKEN_KW_WHILE,
    ACTIONS(148), 1,
      sym_TOKEN_P_BCLOSE,
    STATE(192), 1,
      sym_SCRIPT_FN_LIT,
    ACTIONS(90), 3,
      anon_sym_lock,
      anon_sym_faceplayer,
      anon_sym_release,
    ACTIONS(60), 5,
      anon_sym_msgbox,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_value,
      anon_sym_defeated,
    ACTIONS(78), 5,
      sym_TOKEN_KW_BREAK,
      sym_TOKEN_KW_CONTINUE,
      sym_TOKEN_KW_END,
      sym_TOKEN_KW_RETURN,
      sym_IDENT,
    STATE(16), 8,
      sym__script_statements,
      sym_script_if,
      sym_script_while,
      sym_script_do_while,
      sym_script_switch,
      sym_script_application,
      sym_SCRIPT_0_LIT,
      aux_sym_script_block_repeat1,
  [980] = 2,
    ACTIONS(152), 1,
      sym_TOKEN_P_BCLOSE,
    ACTIONS(150), 21,
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
      anon_sym_lock,
      anon_sym_faceplayer,
      anon_sym_release,
      anon_sym_msgbox,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_value,
      anon_sym_defeated,
      sym_IDENT,
  [1007] = 2,
    ACTIONS(156), 1,
      sym_TOKEN_P_BCLOSE,
    ACTIONS(154), 21,
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
      anon_sym_lock,
      anon_sym_faceplayer,
      anon_sym_release,
      anon_sym_msgbox,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_value,
      anon_sym_defeated,
      sym_IDENT,
  [1034] = 4,
    ACTIONS(160), 1,
      sym_TOKEN_KW_ELIF,
    ACTIONS(162), 1,
      sym_TOKEN_KW_ELSE,
    ACTIONS(164), 1,
      sym_TOKEN_P_BCLOSE,
    ACTIONS(158), 19,
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
      anon_sym_lock,
      anon_sym_faceplayer,
      anon_sym_release,
      anon_sym_msgbox,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_value,
      anon_sym_defeated,
      sym_IDENT,
  [1065] = 2,
    ACTIONS(156), 1,
      sym_TOKEN_P_BCLOSE,
    ACTIONS(154), 20,
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
      anon_sym_lock,
      anon_sym_faceplayer,
      anon_sym_release,
      anon_sym_msgbox,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_value,
      anon_sym_defeated,
      sym_IDENT,
  [1091] = 3,
    ACTIONS(168), 1,
      sym_TOKEN_KW_ELSE,
    ACTIONS(170), 1,
      sym_TOKEN_P_BCLOSE,
    ACTIONS(166), 19,
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
      anon_sym_lock,
      anon_sym_faceplayer,
      anon_sym_release,
      anon_sym_msgbox,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_value,
      anon_sym_defeated,
      sym_IDENT,
  [1119] = 2,
    ACTIONS(152), 1,
      sym_TOKEN_P_BCLOSE,
    ACTIONS(150), 20,
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
      anon_sym_lock,
      anon_sym_faceplayer,
      anon_sym_release,
      anon_sym_msgbox,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_value,
      anon_sym_defeated,
      sym_IDENT,
  [1145] = 2,
    ACTIONS(174), 1,
      sym_TOKEN_P_BCLOSE,
    ACTIONS(172), 19,
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
      anon_sym_lock,
      anon_sym_faceplayer,
      anon_sym_release,
      anon_sym_msgbox,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_value,
      anon_sym_defeated,
      sym_IDENT,
  [1170] = 2,
    ACTIONS(152), 1,
      sym_TOKEN_P_BCLOSE,
    ACTIONS(150), 19,
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
      anon_sym_lock,
      anon_sym_faceplayer,
      anon_sym_release,
      anon_sym_msgbox,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_value,
      anon_sym_defeated,
      sym_IDENT,
  [1195] = 2,
    ACTIONS(156), 1,
      sym_TOKEN_P_BCLOSE,
    ACTIONS(154), 19,
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
      anon_sym_lock,
      anon_sym_faceplayer,
      anon_sym_release,
      anon_sym_msgbox,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_value,
      anon_sym_defeated,
      sym_IDENT,
  [1220] = 2,
    ACTIONS(152), 1,
      sym_TOKEN_P_BCLOSE,
    ACTIONS(150), 19,
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
      anon_sym_lock,
      anon_sym_faceplayer,
      anon_sym_release,
      anon_sym_msgbox,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_value,
      anon_sym_defeated,
      sym_IDENT,
  [1245] = 2,
    ACTIONS(156), 1,
      sym_TOKEN_P_BCLOSE,
    ACTIONS(154), 19,
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
      anon_sym_lock,
      anon_sym_faceplayer,
      anon_sym_release,
      anon_sym_msgbox,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_value,
      anon_sym_defeated,
      sym_IDENT,
  [1270] = 1,
    ACTIONS(176), 20,
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
  [1293] = 2,
    ACTIONS(180), 1,
      sym_TOKEN_P_BCLOSE,
    ACTIONS(178), 19,
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
      anon_sym_lock,
      anon_sym_faceplayer,
      anon_sym_release,
      anon_sym_msgbox,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_value,
      anon_sym_defeated,
      sym_IDENT,
  [1318] = 2,
    ACTIONS(184), 1,
      sym_TOKEN_P_BCLOSE,
    ACTIONS(182), 19,
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
      anon_sym_lock,
      anon_sym_faceplayer,
      anon_sym_release,
      anon_sym_msgbox,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_value,
      anon_sym_defeated,
      sym_IDENT,
  [1343] = 2,
    ACTIONS(188), 1,
      sym_TOKEN_P_BCLOSE,
    ACTIONS(186), 19,
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
      anon_sym_lock,
      anon_sym_faceplayer,
      anon_sym_release,
      anon_sym_msgbox,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_value,
      anon_sym_defeated,
      sym_IDENT,
  [1368] = 2,
    ACTIONS(192), 1,
      sym_TOKEN_P_BCLOSE,
    ACTIONS(190), 19,
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
      anon_sym_lock,
      anon_sym_faceplayer,
      anon_sym_release,
      anon_sym_msgbox,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_value,
      anon_sym_defeated,
      sym_IDENT,
  [1393] = 2,
    ACTIONS(196), 1,
      sym_TOKEN_P_BCLOSE,
    ACTIONS(194), 19,
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
      anon_sym_lock,
      anon_sym_faceplayer,
      anon_sym_release,
      anon_sym_msgbox,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_value,
      anon_sym_defeated,
      sym_IDENT,
  [1418] = 2,
    ACTIONS(200), 1,
      sym_TOKEN_P_BCLOSE,
    ACTIONS(198), 19,
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
      anon_sym_lock,
      anon_sym_faceplayer,
      anon_sym_release,
      anon_sym_msgbox,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_value,
      anon_sym_defeated,
      sym_IDENT,
  [1443] = 2,
    ACTIONS(204), 1,
      sym_TOKEN_P_BCLOSE,
    ACTIONS(202), 19,
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
      anon_sym_lock,
      anon_sym_faceplayer,
      anon_sym_release,
      anon_sym_msgbox,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_value,
      anon_sym_defeated,
      sym_IDENT,
  [1468] = 4,
    ACTIONS(164), 1,
      sym_TOKEN_P_BCLOSE,
    ACTIONS(206), 1,
      sym_TOKEN_KW_ELIF,
    ACTIONS(208), 1,
      sym_TOKEN_KW_ELSE,
    ACTIONS(158), 17,
      sym_TOKEN_KW_BREAK,
      sym_TOKEN_KW_CONTINUE,
      sym_TOKEN_KW_DO,
      sym_TOKEN_KW_END,
      sym_TOKEN_KW_IF,
      sym_TOKEN_KW_RETURN,
      sym_TOKEN_KW_SWITCH,
      sym_TOKEN_KW_WHILE,
      anon_sym_lock,
      anon_sym_faceplayer,
      anon_sym_release,
      anon_sym_msgbox,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_value,
      anon_sym_defeated,
      sym_IDENT,
  [1497] = 3,
    ACTIONS(170), 1,
      sym_TOKEN_P_BCLOSE,
    ACTIONS(210), 1,
      sym_TOKEN_KW_ELSE,
    ACTIONS(166), 17,
      sym_TOKEN_KW_BREAK,
      sym_TOKEN_KW_CONTINUE,
      sym_TOKEN_KW_DO,
      sym_TOKEN_KW_END,
      sym_TOKEN_KW_IF,
      sym_TOKEN_KW_RETURN,
      sym_TOKEN_KW_SWITCH,
      sym_TOKEN_KW_WHILE,
      anon_sym_lock,
      anon_sym_faceplayer,
      anon_sym_release,
      anon_sym_msgbox,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_value,
      anon_sym_defeated,
      sym_IDENT,
  [1523] = 2,
    ACTIONS(204), 2,
      sym_TOKEN_P_PCLOSE,
      sym_TOKEN_P_BCLOSE,
    ACTIONS(202), 17,
      sym_TOKEN_KW_BREAK,
      sym_TOKEN_KW_CONTINUE,
      sym_TOKEN_KW_DO,
      sym_TOKEN_KW_END,
      sym_TOKEN_KW_IF,
      sym_TOKEN_KW_RETURN,
      sym_TOKEN_KW_SWITCH,
      sym_TOKEN_KW_WHILE,
      anon_sym_lock,
      anon_sym_faceplayer,
      anon_sym_release,
      anon_sym_msgbox,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_value,
      anon_sym_defeated,
      sym_IDENT,
  [1547] = 2,
    ACTIONS(152), 1,
      sym_TOKEN_P_BCLOSE,
    ACTIONS(150), 18,
      sym_TOKEN_KW_BREAK,
      sym_TOKEN_KW_CONTINUE,
      sym_TOKEN_KW_DO,
      sym_TOKEN_KW_ELSE,
      sym_TOKEN_KW_END,
      sym_TOKEN_KW_IF,
      sym_TOKEN_KW_RETURN,
      sym_TOKEN_KW_SWITCH,
      sym_TOKEN_KW_WHILE,
      anon_sym_lock,
      anon_sym_faceplayer,
      anon_sym_release,
      anon_sym_msgbox,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_value,
      anon_sym_defeated,
      sym_IDENT,
  [1571] = 2,
    ACTIONS(156), 1,
      sym_TOKEN_P_BCLOSE,
    ACTIONS(154), 18,
      sym_TOKEN_KW_BREAK,
      sym_TOKEN_KW_CONTINUE,
      sym_TOKEN_KW_DO,
      sym_TOKEN_KW_ELSE,
      sym_TOKEN_KW_END,
      sym_TOKEN_KW_IF,
      sym_TOKEN_KW_RETURN,
      sym_TOKEN_KW_SWITCH,
      sym_TOKEN_KW_WHILE,
      anon_sym_lock,
      anon_sym_faceplayer,
      anon_sym_release,
      anon_sym_msgbox,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_value,
      anon_sym_defeated,
      sym_IDENT,
  [1595] = 2,
    ACTIONS(188), 1,
      sym_TOKEN_P_BCLOSE,
    ACTIONS(186), 17,
      sym_TOKEN_KW_BREAK,
      sym_TOKEN_KW_CONTINUE,
      sym_TOKEN_KW_DO,
      sym_TOKEN_KW_END,
      sym_TOKEN_KW_IF,
      sym_TOKEN_KW_RETURN,
      sym_TOKEN_KW_SWITCH,
      sym_TOKEN_KW_WHILE,
      anon_sym_lock,
      anon_sym_faceplayer,
      anon_sym_release,
      anon_sym_msgbox,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_value,
      anon_sym_defeated,
      sym_IDENT,
  [1618] = 2,
    ACTIONS(192), 1,
      sym_TOKEN_P_BCLOSE,
    ACTIONS(190), 17,
      sym_TOKEN_KW_BREAK,
      sym_TOKEN_KW_CONTINUE,
      sym_TOKEN_KW_DO,
      sym_TOKEN_KW_END,
      sym_TOKEN_KW_IF,
      sym_TOKEN_KW_RETURN,
      sym_TOKEN_KW_SWITCH,
      sym_TOKEN_KW_WHILE,
      anon_sym_lock,
      anon_sym_faceplayer,
      anon_sym_release,
      anon_sym_msgbox,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_value,
      anon_sym_defeated,
      sym_IDENT,
  [1641] = 2,
    ACTIONS(180), 1,
      sym_TOKEN_P_BCLOSE,
    ACTIONS(178), 17,
      sym_TOKEN_KW_BREAK,
      sym_TOKEN_KW_CONTINUE,
      sym_TOKEN_KW_DO,
      sym_TOKEN_KW_END,
      sym_TOKEN_KW_IF,
      sym_TOKEN_KW_RETURN,
      sym_TOKEN_KW_SWITCH,
      sym_TOKEN_KW_WHILE,
      anon_sym_lock,
      anon_sym_faceplayer,
      anon_sym_release,
      anon_sym_msgbox,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_value,
      anon_sym_defeated,
      sym_IDENT,
  [1664] = 2,
    ACTIONS(152), 1,
      sym_TOKEN_P_BCLOSE,
    ACTIONS(150), 17,
      sym_TOKEN_KW_BREAK,
      sym_TOKEN_KW_CONTINUE,
      sym_TOKEN_KW_DO,
      sym_TOKEN_KW_END,
      sym_TOKEN_KW_IF,
      sym_TOKEN_KW_RETURN,
      sym_TOKEN_KW_SWITCH,
      sym_TOKEN_KW_WHILE,
      anon_sym_lock,
      anon_sym_faceplayer,
      anon_sym_release,
      anon_sym_msgbox,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_value,
      anon_sym_defeated,
      sym_IDENT,
  [1687] = 10,
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
    ACTIONS(212), 1,
      ts_builtin_sym_end,
    ACTIONS(17), 2,
      sym_SLASH_COMMENT,
      sym_HASH_COMMENT,
    STATE(56), 2,
      sym_statement,
      aux_sym_source_file_repeat1,
    STATE(78), 7,
      sym_const,
      sym_script,
      sym_mart,
      sym_movement,
      sym_raw,
      sym_text,
      sym_COMMENT,
  [1726] = 2,
    ACTIONS(174), 1,
      sym_TOKEN_P_BCLOSE,
    ACTIONS(172), 17,
      sym_TOKEN_KW_BREAK,
      sym_TOKEN_KW_CONTINUE,
      sym_TOKEN_KW_DO,
      sym_TOKEN_KW_END,
      sym_TOKEN_KW_IF,
      sym_TOKEN_KW_RETURN,
      sym_TOKEN_KW_SWITCH,
      sym_TOKEN_KW_WHILE,
      anon_sym_lock,
      anon_sym_faceplayer,
      anon_sym_release,
      anon_sym_msgbox,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_value,
      anon_sym_defeated,
      sym_IDENT,
  [1749] = 2,
    ACTIONS(200), 1,
      sym_TOKEN_P_BCLOSE,
    ACTIONS(198), 17,
      sym_TOKEN_KW_BREAK,
      sym_TOKEN_KW_CONTINUE,
      sym_TOKEN_KW_DO,
      sym_TOKEN_KW_END,
      sym_TOKEN_KW_IF,
      sym_TOKEN_KW_RETURN,
      sym_TOKEN_KW_SWITCH,
      sym_TOKEN_KW_WHILE,
      anon_sym_lock,
      anon_sym_faceplayer,
      anon_sym_release,
      anon_sym_msgbox,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_value,
      anon_sym_defeated,
      sym_IDENT,
  [1772] = 2,
    ACTIONS(196), 1,
      sym_TOKEN_P_BCLOSE,
    ACTIONS(194), 17,
      sym_TOKEN_KW_BREAK,
      sym_TOKEN_KW_CONTINUE,
      sym_TOKEN_KW_DO,
      sym_TOKEN_KW_END,
      sym_TOKEN_KW_IF,
      sym_TOKEN_KW_RETURN,
      sym_TOKEN_KW_SWITCH,
      sym_TOKEN_KW_WHILE,
      anon_sym_lock,
      anon_sym_faceplayer,
      anon_sym_release,
      anon_sym_msgbox,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_value,
      anon_sym_defeated,
      sym_IDENT,
  [1795] = 2,
    ACTIONS(156), 1,
      sym_TOKEN_P_BCLOSE,
    ACTIONS(154), 17,
      sym_TOKEN_KW_BREAK,
      sym_TOKEN_KW_CONTINUE,
      sym_TOKEN_KW_DO,
      sym_TOKEN_KW_END,
      sym_TOKEN_KW_IF,
      sym_TOKEN_KW_RETURN,
      sym_TOKEN_KW_SWITCH,
      sym_TOKEN_KW_WHILE,
      anon_sym_lock,
      anon_sym_faceplayer,
      anon_sym_release,
      anon_sym_msgbox,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_value,
      anon_sym_defeated,
      sym_IDENT,
  [1818] = 2,
    ACTIONS(184), 1,
      sym_TOKEN_P_BCLOSE,
    ACTIONS(182), 17,
      sym_TOKEN_KW_BREAK,
      sym_TOKEN_KW_CONTINUE,
      sym_TOKEN_KW_DO,
      sym_TOKEN_KW_END,
      sym_TOKEN_KW_IF,
      sym_TOKEN_KW_RETURN,
      sym_TOKEN_KW_SWITCH,
      sym_TOKEN_KW_WHILE,
      anon_sym_lock,
      anon_sym_faceplayer,
      anon_sym_release,
      anon_sym_msgbox,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_value,
      anon_sym_defeated,
      sym_IDENT,
  [1841] = 10,
    ACTIONS(214), 1,
      ts_builtin_sym_end,
    ACTIONS(216), 1,
      sym_TOKEN_KW_CONST,
    ACTIONS(219), 1,
      sym_TOKEN_KW_MART,
    ACTIONS(222), 1,
      sym_TOKEN_KW_MOVEMENT,
    ACTIONS(225), 1,
      sym_TOKEN_KW_RAW,
    ACTIONS(228), 1,
      sym_TOKEN_KW_SCRIPT,
    ACTIONS(231), 1,
      sym_TOKEN_KW_TEXT,
    ACTIONS(234), 2,
      sym_SLASH_COMMENT,
      sym_HASH_COMMENT,
    STATE(56), 2,
      sym_statement,
      aux_sym_source_file_repeat1,
    STATE(78), 7,
      sym_const,
      sym_script,
      sym_mart,
      sym_movement,
      sym_raw,
      sym_text,
      sym_COMMENT,
  [1880] = 5,
    ACTIONS(237), 1,
      sym_TOKEN_KW_PORYSWITCH,
    STATE(73), 1,
      sym_MOVEMENT_LIT,
    STATE(59), 2,
      sym__movement_entry,
      aux_sym_movement_values_repeat1,
    STATE(197), 2,
      sym_movement_values,
      sym_poryswitch_movement,
    ACTIONS(239), 8,
      anon_sym_walk_left,
      anon_sym_walk_right,
      anon_sym_walk_up,
      anon_sym_walk_down,
      anon_sym_face_left,
      anon_sym_face_right,
      anon_sym_face_up,
      anon_sym_face_down,
  [1905] = 5,
    ACTIONS(237), 1,
      sym_TOKEN_KW_PORYSWITCH,
    STATE(73), 1,
      sym_MOVEMENT_LIT,
    STATE(59), 2,
      sym__movement_entry,
      aux_sym_movement_values_repeat1,
    STATE(213), 2,
      sym_movement_values,
      sym_poryswitch_movement,
    ACTIONS(239), 8,
      anon_sym_walk_left,
      anon_sym_walk_right,
      anon_sym_walk_up,
      anon_sym_walk_down,
      anon_sym_face_left,
      anon_sym_face_right,
      anon_sym_face_up,
      anon_sym_face_down,
  [1930] = 4,
    ACTIONS(241), 1,
      sym_TOKEN_P_BCLOSE,
    STATE(73), 1,
      sym_MOVEMENT_LIT,
    STATE(60), 2,
      sym__movement_entry,
      aux_sym_movement_values_repeat1,
    ACTIONS(239), 8,
      anon_sym_walk_left,
      anon_sym_walk_right,
      anon_sym_walk_up,
      anon_sym_walk_down,
      anon_sym_face_left,
      anon_sym_face_right,
      anon_sym_face_up,
      anon_sym_face_down,
  [1951] = 4,
    ACTIONS(243), 1,
      sym_TOKEN_P_BCLOSE,
    STATE(73), 1,
      sym_MOVEMENT_LIT,
    STATE(60), 2,
      sym__movement_entry,
      aux_sym_movement_values_repeat1,
    ACTIONS(245), 8,
      anon_sym_walk_left,
      anon_sym_walk_right,
      anon_sym_walk_up,
      anon_sym_walk_down,
      anon_sym_face_left,
      anon_sym_face_right,
      anon_sym_face_up,
      anon_sym_face_down,
  [1972] = 4,
    STATE(73), 1,
      sym_MOVEMENT_LIT,
    STATE(219), 1,
      sym_movement_values,
    STATE(59), 2,
      sym__movement_entry,
      aux_sym_movement_values_repeat1,
    ACTIONS(239), 8,
      anon_sym_walk_left,
      anon_sym_walk_right,
      anon_sym_walk_up,
      anon_sym_walk_down,
      anon_sym_face_left,
      anon_sym_face_right,
      anon_sym_face_up,
      anon_sym_face_down,
  [1993] = 3,
    ACTIONS(250), 1,
      sym_TOKEN_P_PLUS,
    STATE(62), 1,
      aux_sym_const_repeat1,
    ACTIONS(248), 9,
      ts_builtin_sym_end,
      sym_TOKEN_KW_CONST,
      sym_TOKEN_KW_MART,
      sym_TOKEN_KW_MOVEMENT,
      sym_TOKEN_KW_RAW,
      sym_TOKEN_KW_SCRIPT,
      sym_TOKEN_KW_TEXT,
      sym_SLASH_COMMENT,
      sym_HASH_COMMENT,
  [2011] = 3,
    ACTIONS(255), 1,
      sym_TOKEN_P_PLUS,
    STATE(65), 1,
      aux_sym_const_repeat1,
    ACTIONS(253), 9,
      ts_builtin_sym_end,
      sym_TOKEN_KW_CONST,
      sym_TOKEN_KW_MART,
      sym_TOKEN_KW_MOVEMENT,
      sym_TOKEN_KW_RAW,
      sym_TOKEN_KW_SCRIPT,
      sym_TOKEN_KW_TEXT,
      sym_SLASH_COMMENT,
      sym_HASH_COMMENT,
  [2029] = 4,
    STATE(135), 1,
      sym_MOVEMENT_LIT,
    STATE(169), 1,
      sym_movement_value,
    STATE(170), 1,
      sym__movement_entry,
    ACTIONS(257), 8,
      anon_sym_walk_left,
      anon_sym_walk_right,
      anon_sym_walk_up,
      anon_sym_walk_down,
      anon_sym_face_left,
      anon_sym_face_right,
      anon_sym_face_up,
      anon_sym_face_down,
  [2049] = 3,
    ACTIONS(255), 1,
      sym_TOKEN_P_PLUS,
    STATE(62), 1,
      aux_sym_const_repeat1,
    ACTIONS(259), 9,
      ts_builtin_sym_end,
      sym_TOKEN_KW_CONST,
      sym_TOKEN_KW_MART,
      sym_TOKEN_KW_MOVEMENT,
      sym_TOKEN_KW_RAW,
      sym_TOKEN_KW_SCRIPT,
      sym_TOKEN_KW_TEXT,
      sym_SLASH_COMMENT,
      sym_HASH_COMMENT,
  [2067] = 6,
    ACTIONS(261), 1,
      sym_TOKEN_P_PCLOSE,
    ACTIONS(263), 1,
      sym_INT_LIT,
    ACTIONS(269), 1,
      sym_STRING_INTER_START,
    ACTIONS(265), 2,
      sym_HEX_LIT,
      sym_BIN_LIT,
    ACTIONS(267), 2,
      sym_STRING_LIT,
      sym_IDENT,
    STATE(71), 3,
      sym_NUM_LIT,
      sym_STRING_INTERPOLATED,
      aux_sym_script_application_repeat1,
  [2090] = 1,
    ACTIONS(152), 10,
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
  [2103] = 6,
    ACTIONS(263), 1,
      sym_INT_LIT,
    ACTIONS(269), 1,
      sym_STRING_INTER_START,
    ACTIONS(271), 1,
      sym_TOKEN_P_PCLOSE,
    ACTIONS(265), 2,
      sym_HEX_LIT,
      sym_BIN_LIT,
    ACTIONS(267), 2,
      sym_STRING_LIT,
      sym_IDENT,
    STATE(71), 3,
      sym_NUM_LIT,
      sym_STRING_INTERPOLATED,
      aux_sym_script_application_repeat1,
  [2126] = 7,
    ACTIONS(273), 1,
      sym_TOKEN_BI_FORMAT,
    ACTIONS(275), 1,
      sym_TOKEN_KW_PORYSWITCH,
    ACTIONS(277), 1,
      sym_STRING_LIT,
    ACTIONS(279), 1,
      sym_STRING_INTER_START,
    STATE(94), 2,
      sym_STRING,
      aux_sym_text_values_repeat1,
    STATE(126), 2,
      sym_FORMAT_STRING,
      sym_STRING_INTERPOLATED,
    STATE(250), 2,
      sym_text_values,
      sym_poryswitch_text,
  [2151] = 1,
    ACTIONS(281), 10,
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
  [2164] = 6,
    ACTIONS(283), 1,
      sym_TOKEN_P_PCLOSE,
    ACTIONS(285), 1,
      sym_INT_LIT,
    ACTIONS(294), 1,
      sym_STRING_INTER_START,
    ACTIONS(288), 2,
      sym_HEX_LIT,
      sym_BIN_LIT,
    ACTIONS(291), 2,
      sym_STRING_LIT,
      sym_IDENT,
    STATE(71), 3,
      sym_NUM_LIT,
      sym_STRING_INTERPOLATED,
      aux_sym_script_application_repeat1,
  [2187] = 1,
    ACTIONS(248), 10,
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
  [2200] = 2,
    ACTIONS(299), 1,
      sym_TOKEN_P_ASTER,
    ACTIONS(297), 9,
      sym_TOKEN_P_BCLOSE,
      anon_sym_walk_left,
      anon_sym_walk_right,
      anon_sym_walk_up,
      anon_sym_walk_down,
      anon_sym_face_left,
      anon_sym_face_right,
      anon_sym_face_up,
      anon_sym_face_down,
  [2215] = 1,
    ACTIONS(156), 10,
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
  [2228] = 7,
    ACTIONS(273), 1,
      sym_TOKEN_BI_FORMAT,
    ACTIONS(275), 1,
      sym_TOKEN_KW_PORYSWITCH,
    ACTIONS(277), 1,
      sym_STRING_LIT,
    ACTIONS(279), 1,
      sym_STRING_INTER_START,
    STATE(94), 2,
      sym_STRING,
      aux_sym_text_values_repeat1,
    STATE(126), 2,
      sym_FORMAT_STRING,
      sym_STRING_INTERPOLATED,
    STATE(222), 2,
      sym_text_values,
      sym_poryswitch_text,
  [2253] = 5,
    ACTIONS(263), 1,
      sym_INT_LIT,
    ACTIONS(269), 1,
      sym_STRING_INTER_START,
    ACTIONS(265), 2,
      sym_HEX_LIT,
      sym_BIN_LIT,
    ACTIONS(301), 2,
      sym_STRING_LIT,
      sym_IDENT,
    STATE(66), 3,
      sym_NUM_LIT,
      sym_STRING_INTERPOLATED,
      aux_sym_script_application_repeat1,
  [2273] = 1,
    ACTIONS(303), 9,
      ts_builtin_sym_end,
      sym_TOKEN_KW_CONST,
      sym_TOKEN_KW_MART,
      sym_TOKEN_KW_MOVEMENT,
      sym_TOKEN_KW_RAW,
      sym_TOKEN_KW_SCRIPT,
      sym_TOKEN_KW_TEXT,
      sym_SLASH_COMMENT,
      sym_HASH_COMMENT,
  [2285] = 1,
    ACTIONS(305), 9,
      ts_builtin_sym_end,
      sym_TOKEN_KW_CONST,
      sym_TOKEN_KW_MART,
      sym_TOKEN_KW_MOVEMENT,
      sym_TOKEN_KW_RAW,
      sym_TOKEN_KW_SCRIPT,
      sym_TOKEN_KW_TEXT,
      sym_SLASH_COMMENT,
      sym_HASH_COMMENT,
  [2297] = 1,
    ACTIONS(307), 9,
      ts_builtin_sym_end,
      sym_TOKEN_KW_CONST,
      sym_TOKEN_KW_MART,
      sym_TOKEN_KW_MOVEMENT,
      sym_TOKEN_KW_RAW,
      sym_TOKEN_KW_SCRIPT,
      sym_TOKEN_KW_TEXT,
      sym_SLASH_COMMENT,
      sym_HASH_COMMENT,
  [2309] = 1,
    ACTIONS(309), 9,
      ts_builtin_sym_end,
      sym_TOKEN_KW_CONST,
      sym_TOKEN_KW_MART,
      sym_TOKEN_KW_MOVEMENT,
      sym_TOKEN_KW_RAW,
      sym_TOKEN_KW_SCRIPT,
      sym_TOKEN_KW_TEXT,
      sym_SLASH_COMMENT,
      sym_HASH_COMMENT,
  [2321] = 5,
    ACTIONS(263), 1,
      sym_INT_LIT,
    ACTIONS(269), 1,
      sym_STRING_INTER_START,
    ACTIONS(265), 2,
      sym_HEX_LIT,
      sym_BIN_LIT,
    ACTIONS(311), 2,
      sym_STRING_LIT,
      sym_IDENT,
    STATE(68), 3,
      sym_NUM_LIT,
      sym_STRING_INTERPOLATED,
      aux_sym_script_application_repeat1,
  [2341] = 1,
    ACTIONS(313), 9,
      ts_builtin_sym_end,
      sym_TOKEN_KW_CONST,
      sym_TOKEN_KW_MART,
      sym_TOKEN_KW_MOVEMENT,
      sym_TOKEN_KW_RAW,
      sym_TOKEN_KW_SCRIPT,
      sym_TOKEN_KW_TEXT,
      sym_SLASH_COMMENT,
      sym_HASH_COMMENT,
  [2353] = 1,
    ACTIONS(315), 9,
      ts_builtin_sym_end,
      sym_TOKEN_KW_CONST,
      sym_TOKEN_KW_MART,
      sym_TOKEN_KW_MOVEMENT,
      sym_TOKEN_KW_RAW,
      sym_TOKEN_KW_SCRIPT,
      sym_TOKEN_KW_TEXT,
      sym_SLASH_COMMENT,
      sym_HASH_COMMENT,
  [2365] = 1,
    ACTIONS(317), 9,
      ts_builtin_sym_end,
      sym_TOKEN_KW_CONST,
      sym_TOKEN_KW_MART,
      sym_TOKEN_KW_MOVEMENT,
      sym_TOKEN_KW_RAW,
      sym_TOKEN_KW_SCRIPT,
      sym_TOKEN_KW_TEXT,
      sym_SLASH_COMMENT,
      sym_HASH_COMMENT,
  [2377] = 1,
    ACTIONS(319), 9,
      sym_TOKEN_P_BCLOSE,
      anon_sym_walk_left,
      anon_sym_walk_right,
      anon_sym_walk_up,
      anon_sym_walk_down,
      anon_sym_face_left,
      anon_sym_face_right,
      anon_sym_face_up,
      anon_sym_face_down,
  [2389] = 1,
    ACTIONS(321), 9,
      ts_builtin_sym_end,
      sym_TOKEN_KW_CONST,
      sym_TOKEN_KW_MART,
      sym_TOKEN_KW_MOVEMENT,
      sym_TOKEN_KW_RAW,
      sym_TOKEN_KW_SCRIPT,
      sym_TOKEN_KW_TEXT,
      sym_SLASH_COMMENT,
      sym_HASH_COMMENT,
  [2401] = 1,
    ACTIONS(323), 9,
      ts_builtin_sym_end,
      sym_TOKEN_KW_CONST,
      sym_TOKEN_KW_MART,
      sym_TOKEN_KW_MOVEMENT,
      sym_TOKEN_KW_RAW,
      sym_TOKEN_KW_SCRIPT,
      sym_TOKEN_KW_TEXT,
      sym_SLASH_COMMENT,
      sym_HASH_COMMENT,
  [2413] = 1,
    ACTIONS(325), 9,
      ts_builtin_sym_end,
      sym_TOKEN_KW_CONST,
      sym_TOKEN_KW_MART,
      sym_TOKEN_KW_MOVEMENT,
      sym_TOKEN_KW_RAW,
      sym_TOKEN_KW_SCRIPT,
      sym_TOKEN_KW_TEXT,
      sym_SLASH_COMMENT,
      sym_HASH_COMMENT,
  [2425] = 1,
    ACTIONS(327), 9,
      ts_builtin_sym_end,
      sym_TOKEN_KW_CONST,
      sym_TOKEN_KW_MART,
      sym_TOKEN_KW_MOVEMENT,
      sym_TOKEN_KW_RAW,
      sym_TOKEN_KW_SCRIPT,
      sym_TOKEN_KW_TEXT,
      sym_SLASH_COMMENT,
      sym_HASH_COMMENT,
  [2437] = 2,
    ACTIONS(331), 1,
      sym_INT_LIT,
    ACTIONS(329), 7,
      sym_TOKEN_P_PCLOSE,
      sym_TOKEN_P_BCLOSE,
      sym_HEX_LIT,
      sym_BIN_LIT,
      sym_STRING_LIT,
      sym_STRING_INTER_START,
      sym_IDENT,
  [2450] = 2,
    ACTIONS(335), 1,
      sym_INT_LIT,
    ACTIONS(333), 7,
      sym_TOKEN_P_PCLOSE,
      sym_TOKEN_P_BCLOSE,
      sym_HEX_LIT,
      sym_BIN_LIT,
      sym_STRING_LIT,
      sym_STRING_INTER_START,
      sym_IDENT,
  [2463] = 4,
    STATE(192), 1,
      sym_SCRIPT_FN_LIT,
    STATE(223), 1,
      sym_script_expression,
    STATE(238), 1,
      sym_script_application,
    ACTIONS(337), 5,
      anon_sym_msgbox,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_value,
      anon_sym_defeated,
  [2480] = 4,
    STATE(192), 1,
      sym_SCRIPT_FN_LIT,
    STATE(217), 1,
      sym_script_expression,
    STATE(238), 1,
      sym_script_application,
    ACTIONS(337), 5,
      anon_sym_msgbox,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_value,
      anon_sym_defeated,
  [2497] = 6,
    ACTIONS(273), 1,
      sym_TOKEN_BI_FORMAT,
    ACTIONS(277), 1,
      sym_STRING_LIT,
    ACTIONS(279), 1,
      sym_STRING_INTER_START,
    ACTIONS(339), 1,
      sym_TOKEN_P_BCLOSE,
    STATE(97), 2,
      sym_STRING,
      aux_sym_text_values_repeat1,
    STATE(126), 2,
      sym_FORMAT_STRING,
      sym_STRING_INTERPOLATED,
  [2518] = 4,
    STATE(192), 1,
      sym_SCRIPT_FN_LIT,
    STATE(238), 1,
      sym_script_application,
    STATE(253), 1,
      sym_script_expression,
    ACTIONS(337), 5,
      anon_sym_msgbox,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_value,
      anon_sym_defeated,
  [2535] = 4,
    STATE(192), 1,
      sym_SCRIPT_FN_LIT,
    STATE(238), 1,
      sym_script_application,
    STATE(243), 1,
      sym_script_expression,
    ACTIONS(337), 5,
      anon_sym_msgbox,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_value,
      anon_sym_defeated,
  [2552] = 6,
    ACTIONS(341), 1,
      sym_TOKEN_BI_FORMAT,
    ACTIONS(344), 1,
      sym_TOKEN_P_BCLOSE,
    ACTIONS(346), 1,
      sym_STRING_LIT,
    ACTIONS(349), 1,
      sym_STRING_INTER_START,
    STATE(97), 2,
      sym_STRING,
      aux_sym_text_values_repeat1,
    STATE(126), 2,
      sym_FORMAT_STRING,
      sym_STRING_INTERPOLATED,
  [2573] = 4,
    STATE(192), 1,
      sym_SCRIPT_FN_LIT,
    STATE(238), 1,
      sym_script_application,
    STATE(240), 1,
      sym_script_expression,
    ACTIONS(337), 5,
      anon_sym_msgbox,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_value,
      anon_sym_defeated,
  [2590] = 4,
    STATE(192), 1,
      sym_SCRIPT_FN_LIT,
    STATE(238), 1,
      sym_script_application,
    STATE(239), 1,
      sym_script_expression,
    ACTIONS(337), 5,
      anon_sym_msgbox,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_value,
      anon_sym_defeated,
  [2607] = 4,
    STATE(192), 1,
      sym_SCRIPT_FN_LIT,
    STATE(218), 1,
      sym_script_expression,
    STATE(238), 1,
      sym_script_application,
    ACTIONS(337), 5,
      anon_sym_msgbox,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_value,
      anon_sym_defeated,
  [2624] = 4,
    STATE(192), 1,
      sym_SCRIPT_FN_LIT,
    STATE(221), 1,
      sym_script_expression,
    STATE(238), 1,
      sym_script_application,
    ACTIONS(337), 5,
      anon_sym_msgbox,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_value,
      anon_sym_defeated,
  [2641] = 6,
    ACTIONS(273), 1,
      sym_TOKEN_BI_FORMAT,
    ACTIONS(277), 1,
      sym_STRING_LIT,
    ACTIONS(279), 1,
      sym_STRING_INTER_START,
    STATE(214), 1,
      sym_text_values,
    STATE(94), 2,
      sym_STRING,
      aux_sym_text_values_repeat1,
    STATE(126), 2,
      sym_FORMAT_STRING,
      sym_STRING_INTERPOLATED,
  [2662] = 2,
    ACTIONS(352), 1,
      sym_INT_LIT,
    ACTIONS(176), 7,
      sym_TOKEN_P_PCLOSE,
      sym_TOKEN_P_BCLOSE,
      sym_HEX_LIT,
      sym_BIN_LIT,
      sym_STRING_LIT,
      sym_STRING_INTER_START,
      sym_IDENT,
  [2675] = 4,
    STATE(192), 1,
      sym_SCRIPT_FN_LIT,
    STATE(237), 1,
      sym_script_expression,
    STATE(238), 1,
      sym_script_application,
    ACTIONS(337), 5,
      anon_sym_msgbox,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_value,
      anon_sym_defeated,
  [2692] = 4,
    STATE(192), 1,
      sym_SCRIPT_FN_LIT,
    STATE(238), 1,
      sym_script_application,
    STATE(241), 1,
      sym_script_expression,
    ACTIONS(337), 5,
      anon_sym_msgbox,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_value,
      anon_sym_defeated,
  [2709] = 6,
    ACTIONS(269), 1,
      sym_STRING_INTER_START,
    ACTIONS(354), 1,
      sym_TOKEN_BI_FORMAT,
    ACTIONS(356), 1,
      sym_STRING_LIT,
    STATE(173), 1,
      sym_text_value,
    STATE(174), 1,
      sym_STRING,
    STATE(178), 2,
      sym_FORMAT_STRING,
      sym_STRING_INTERPOLATED,
  [2729] = 4,
    ACTIONS(279), 1,
      sym_STRING_INTER_START,
    ACTIONS(358), 1,
      sym_TOKEN_P_PCLOSE,
    ACTIONS(360), 1,
      sym_STRING_LIT,
    STATE(118), 2,
      sym_STRING_INTERPOLATED,
      aux_sym_FORMAT_STRING_repeat1,
  [2743] = 4,
    ACTIONS(362), 1,
      sym_INT_LIT,
    ACTIONS(366), 1,
      sym_IDENT,
    STATE(63), 1,
      sym_NUM_LIT,
    ACTIONS(364), 2,
      sym_HEX_LIT,
      sym_BIN_LIT,
  [2757] = 4,
    ACTIONS(368), 1,
      sym_TOKEN_KW_PORYSWITCH,
    ACTIONS(370), 1,
      sym_IDENT,
    STATE(148), 1,
      aux_sym_mart_values_repeat1,
    STATE(201), 2,
      sym_mart_values,
      sym_poryswitch_mart,
  [2771] = 1,
    ACTIONS(329), 5,
      sym_TOKEN_BI_FORMAT,
      sym_TOKEN_P_PCLOSE,
      sym_TOKEN_P_BCLOSE,
      sym_STRING_LIT,
      sym_STRING_INTER_START,
  [2779] = 4,
    ACTIONS(368), 1,
      sym_TOKEN_KW_PORYSWITCH,
    ACTIONS(370), 1,
      sym_IDENT,
    STATE(148), 1,
      aux_sym_mart_values_repeat1,
    STATE(229), 2,
      sym_mart_values,
      sym_poryswitch_mart,
  [2793] = 4,
    ACTIONS(372), 1,
      sym_TOKEN_KW_CASE,
    ACTIONS(375), 1,
      sym_TOKEN_KW_DEFAULT,
    ACTIONS(378), 1,
      sym_TOKEN_P_BCLOSE,
    STATE(112), 2,
      sym_script_switch_case,
      aux_sym_script_switch_repeat1,
  [2807] = 4,
    ACTIONS(362), 1,
      sym_INT_LIT,
    ACTIONS(380), 1,
      sym_IDENT,
    STATE(72), 1,
      sym_NUM_LIT,
    ACTIONS(364), 2,
      sym_HEX_LIT,
      sym_BIN_LIT,
  [2821] = 4,
    ACTIONS(279), 1,
      sym_STRING_INTER_START,
    ACTIONS(360), 1,
      sym_STRING_LIT,
    ACTIONS(382), 1,
      sym_TOKEN_P_PCLOSE,
    STATE(118), 2,
      sym_STRING_INTERPOLATED,
      aux_sym_FORMAT_STRING_repeat1,
  [2835] = 4,
    ACTIONS(384), 1,
      sym_TOKEN_KW_CASE,
    ACTIONS(386), 1,
      sym_TOKEN_KW_DEFAULT,
    ACTIONS(388), 1,
      sym_TOKEN_P_BCLOSE,
    STATE(112), 2,
      sym_script_switch_case,
      aux_sym_script_switch_repeat1,
  [2849] = 4,
    ACTIONS(384), 1,
      sym_TOKEN_KW_CASE,
    ACTIONS(386), 1,
      sym_TOKEN_KW_DEFAULT,
    ACTIONS(390), 1,
      sym_TOKEN_P_BCLOSE,
    STATE(112), 2,
      sym_script_switch_case,
      aux_sym_script_switch_repeat1,
  [2863] = 1,
    ACTIONS(333), 5,
      sym_TOKEN_BI_FORMAT,
      sym_TOKEN_P_PCLOSE,
      sym_TOKEN_P_BCLOSE,
      sym_STRING_LIT,
      sym_STRING_INTER_START,
  [2871] = 4,
    ACTIONS(392), 1,
      sym_TOKEN_P_PCLOSE,
    ACTIONS(394), 1,
      sym_STRING_LIT,
    ACTIONS(397), 1,
      sym_STRING_INTER_START,
    STATE(118), 2,
      sym_STRING_INTERPOLATED,
      aux_sym_FORMAT_STRING_repeat1,
  [2885] = 3,
    ACTIONS(362), 1,
      sym_INT_LIT,
    STATE(225), 1,
      sym_NUM_LIT,
    ACTIONS(364), 2,
      sym_HEX_LIT,
      sym_BIN_LIT,
  [2896] = 3,
    ACTIONS(400), 1,
      sym_TOKEN_P_BCLOSE,
    ACTIONS(402), 1,
      sym_IDENT,
    STATE(120), 2,
      sym_poryswitch_case_movement,
      aux_sym_poryswitch_movement_repeat1,
  [2907] = 3,
    ACTIONS(263), 1,
      sym_INT_LIT,
    STATE(184), 1,
      sym_NUM_LIT,
    ACTIONS(265), 2,
      sym_HEX_LIT,
      sym_BIN_LIT,
  [2918] = 3,
    ACTIONS(384), 1,
      sym_TOKEN_KW_CASE,
    ACTIONS(386), 1,
      sym_TOKEN_KW_DEFAULT,
    STATE(115), 2,
      sym_script_switch_case,
      aux_sym_script_switch_repeat1,
  [2929] = 1,
    ACTIONS(405), 4,
      sym_TOKEN_BI_FORMAT,
      sym_TOKEN_P_BCLOSE,
      sym_STRING_LIT,
      sym_STRING_INTER_START,
  [2936] = 3,
    ACTIONS(279), 1,
      sym_STRING_INTER_START,
    ACTIONS(407), 1,
      sym_STRING_LIT,
    STATE(114), 2,
      sym_STRING_INTERPOLATED,
      aux_sym_FORMAT_STRING_repeat1,
  [2947] = 3,
    ACTIONS(409), 1,
      sym_TOKEN_P_BCLOSE,
    ACTIONS(411), 1,
      sym_IDENT,
    STATE(128), 2,
      sym_poryswitch_case_text,
      aux_sym_poryswitch_text_repeat1,
  [2958] = 1,
    ACTIONS(413), 4,
      sym_TOKEN_BI_FORMAT,
      sym_TOKEN_P_BCLOSE,
      sym_STRING_LIT,
      sym_STRING_INTER_START,
  [2965] = 3,
    ACTIONS(384), 1,
      sym_TOKEN_KW_CASE,
    ACTIONS(386), 1,
      sym_TOKEN_KW_DEFAULT,
    STATE(116), 2,
      sym_script_switch_case,
      aux_sym_script_switch_repeat1,
  [2976] = 3,
    ACTIONS(415), 1,
      sym_TOKEN_P_BCLOSE,
    ACTIONS(417), 1,
      sym_IDENT,
    STATE(128), 2,
      sym_poryswitch_case_text,
      aux_sym_poryswitch_text_repeat1,
  [2987] = 3,
    ACTIONS(279), 1,
      sym_STRING_INTER_START,
    ACTIONS(420), 1,
      sym_STRING_LIT,
    STATE(107), 2,
      sym_STRING_INTERPOLATED,
      aux_sym_FORMAT_STRING_repeat1,
  [2998] = 3,
    ACTIONS(422), 1,
      sym_TOKEN_P_BCLOSE,
    ACTIONS(424), 1,
      sym_IDENT,
    STATE(130), 2,
      sym_poryswitch_case_mart,
      aux_sym_poryswitch_mart_repeat1,
  [3009] = 3,
    ACTIONS(427), 1,
      sym_TOKEN_P_BCLOSE,
    ACTIONS(429), 1,
      sym_IDENT,
    STATE(130), 2,
      sym_poryswitch_case_mart,
      aux_sym_poryswitch_mart_repeat1,
  [3020] = 3,
    ACTIONS(362), 1,
      sym_INT_LIT,
    STATE(85), 1,
      sym_NUM_LIT,
    ACTIONS(364), 2,
      sym_HEX_LIT,
      sym_BIN_LIT,
  [3031] = 3,
    ACTIONS(431), 1,
      sym_TOKEN_P_BCLOSE,
    ACTIONS(433), 1,
      sym_IDENT,
    STATE(120), 2,
      sym_poryswitch_case_movement,
      aux_sym_poryswitch_movement_repeat1,
  [3042] = 3,
    ACTIONS(435), 1,
      sym_STRING_INTER_MID,
    ACTIONS(437), 1,
      sym_STRING_INTER_END,
    STATE(145), 1,
      aux_sym_STRING_INTERPOLATED_repeat1,
  [3052] = 2,
    ACTIONS(439), 1,
      sym_TOKEN_P_ASTER,
    ACTIONS(297), 2,
      sym_TOKEN_P_BCLOSE,
      sym_IDENT,
  [3060] = 3,
    ACTIONS(435), 1,
      sym_STRING_INTER_MID,
    ACTIONS(441), 1,
      sym_STRING_INTER_END,
    STATE(147), 1,
      aux_sym_STRING_INTERPOLATED_repeat1,
  [3070] = 3,
    ACTIONS(443), 1,
      sym_TOKEN_P_POPEN,
    ACTIONS(445), 1,
      sym_IDENT,
    STATE(227), 1,
      sym_scope_modifier,
  [3080] = 3,
    ACTIONS(447), 1,
      sym_STRING_INTER_MID,
    ACTIONS(450), 1,
      sym_STRING_INTER_END,
    STATE(138), 1,
      aux_sym_STRING_INTERPOLATED_repeat1,
  [3090] = 2,
    ACTIONS(429), 1,
      sym_IDENT,
    STATE(131), 2,
      sym_poryswitch_case_mart,
      aux_sym_poryswitch_mart_repeat1,
  [3098] = 2,
    ACTIONS(433), 1,
      sym_IDENT,
    STATE(133), 2,
      sym_poryswitch_case_movement,
      aux_sym_poryswitch_movement_repeat1,
  [3106] = 3,
    ACTIONS(443), 1,
      sym_TOKEN_P_POPEN,
    ACTIONS(452), 1,
      sym_IDENT,
    STATE(216), 1,
      sym_scope_modifier,
  [3116] = 3,
    ACTIONS(443), 1,
      sym_TOKEN_P_POPEN,
    ACTIONS(454), 1,
      sym_IDENT,
    STATE(212), 1,
      sym_scope_modifier,
  [3126] = 3,
    ACTIONS(443), 1,
      sym_TOKEN_P_POPEN,
    ACTIONS(456), 1,
      sym_IDENT,
    STATE(210), 1,
      sym_scope_modifier,
  [3136] = 2,
    ACTIONS(411), 1,
      sym_IDENT,
    STATE(125), 2,
      sym_poryswitch_case_text,
      aux_sym_poryswitch_text_repeat1,
  [3144] = 3,
    ACTIONS(435), 1,
      sym_STRING_INTER_MID,
    ACTIONS(458), 1,
      sym_STRING_INTER_END,
    STATE(138), 1,
      aux_sym_STRING_INTERPOLATED_repeat1,
  [3154] = 3,
    ACTIONS(460), 1,
      sym_TOKEN_P_POPEN,
    ACTIONS(462), 1,
      sym_TOKEN_P_BOPEN,
    STATE(34), 1,
      sym_script_block,
  [3164] = 3,
    ACTIONS(435), 1,
      sym_STRING_INTER_MID,
    ACTIONS(464), 1,
      sym_STRING_INTER_END,
    STATE(138), 1,
      aux_sym_STRING_INTERPOLATED_repeat1,
  [3174] = 3,
    ACTIONS(466), 1,
      sym_TOKEN_P_BCLOSE,
    ACTIONS(468), 1,
      sym_IDENT,
    STATE(150), 1,
      aux_sym_mart_values_repeat1,
  [3184] = 3,
    ACTIONS(470), 1,
      sym_TOKEN_P_POPEN,
    ACTIONS(472), 1,
      sym_TOKEN_P_BOPEN,
    STATE(48), 1,
      sym_script_block,
  [3194] = 3,
    ACTIONS(474), 1,
      sym_TOKEN_P_BCLOSE,
    ACTIONS(476), 1,
      sym_IDENT,
    STATE(150), 1,
      aux_sym_mart_values_repeat1,
  [3204] = 1,
    ACTIONS(281), 3,
      sym_TOKEN_P_BCLOSE,
      sym_TOKEN_P_ASTER,
      sym_IDENT,
  [3210] = 3,
    ACTIONS(479), 1,
      sym_IDENT,
    STATE(148), 1,
      aux_sym_mart_values_repeat1,
    STATE(220), 1,
      sym_mart_values,
  [3220] = 2,
    ACTIONS(462), 1,
      sym_TOKEN_P_BOPEN,
    STATE(35), 1,
      sym_script_block,
  [3227] = 2,
    ACTIONS(481), 1,
      sym_TOKEN_P_BOPEN,
    STATE(77), 1,
      sym_script_block,
  [3234] = 1,
    ACTIONS(450), 2,
      sym_STRING_INTER_MID,
      sym_STRING_INTER_END,
  [3239] = 2,
    ACTIONS(483), 1,
      sym_TOKEN_P_BOPEN,
    ACTIONS(485), 1,
      sym_TOKEN_P_COLON,
  [3246] = 2,
    ACTIONS(487), 1,
      sym_IDENT,
    STATE(167), 1,
      sym_mart_value,
  [3253] = 2,
    ACTIONS(481), 1,
      sym_TOKEN_P_BOPEN,
    STATE(252), 1,
      sym_script_block,
  [3260] = 2,
    ACTIONS(489), 1,
      sym_TOKEN_P_BOPEN,
    ACTIONS(491), 1,
      sym_TOKEN_P_COLON,
  [3267] = 1,
    ACTIONS(493), 2,
      sym_TOKEN_KW_LOCAL,
      sym_TOKEN_KW_GLOBAL,
  [3272] = 2,
    ACTIONS(472), 1,
      sym_TOKEN_P_BOPEN,
    STATE(52), 1,
      sym_script_block,
  [3279] = 2,
    ACTIONS(495), 1,
      sym_TOKEN_P_BOPEN,
    STATE(26), 1,
      sym_script_block,
  [3286] = 2,
    ACTIONS(462), 1,
      sym_TOKEN_P_BOPEN,
    STATE(37), 1,
      sym_script_block,
  [3293] = 2,
    ACTIONS(462), 1,
      sym_TOKEN_P_BOPEN,
    STATE(39), 1,
      sym_script_block,
  [3300] = 2,
    ACTIONS(497), 1,
      sym_TOKEN_P_BOPEN,
    STATE(24), 1,
      sym_script_block,
  [3307] = 1,
    ACTIONS(499), 2,
      sym_TOKEN_P_BCLOSE,
      sym_IDENT,
  [3312] = 1,
    ACTIONS(501), 2,
      sym_TOKEN_P_BCLOSE,
      sym_IDENT,
  [3317] = 2,
    ACTIONS(503), 1,
      sym_TOKEN_P_BOPEN,
    ACTIONS(505), 1,
      sym_TOKEN_P_COLON,
  [3324] = 1,
    ACTIONS(507), 2,
      sym_TOKEN_P_BCLOSE,
      sym_IDENT,
  [3329] = 1,
    ACTIONS(509), 2,
      sym_TOKEN_P_BCLOSE,
      sym_IDENT,
  [3334] = 2,
    ACTIONS(481), 1,
      sym_TOKEN_P_BOPEN,
    STATE(80), 1,
      sym_script_block,
  [3341] = 2,
    ACTIONS(472), 1,
      sym_TOKEN_P_BOPEN,
    STATE(47), 1,
      sym_script_block,
  [3348] = 1,
    ACTIONS(511), 2,
      sym_TOKEN_P_BCLOSE,
      sym_IDENT,
  [3353] = 1,
    ACTIONS(513), 2,
      sym_TOKEN_P_BCLOSE,
      sym_IDENT,
  [3358] = 1,
    ACTIONS(515), 2,
      sym_TOKEN_P_BCLOSE,
      sym_IDENT,
  [3363] = 1,
    ACTIONS(517), 2,
      sym_TOKEN_P_BCLOSE,
      sym_IDENT,
  [3368] = 2,
    ACTIONS(519), 1,
      sym_TOKEN_P_BOPEN,
    STATE(42), 1,
      sym_script_block,
  [3375] = 1,
    ACTIONS(413), 2,
      sym_TOKEN_P_BCLOSE,
      sym_IDENT,
  [3380] = 1,
    ACTIONS(521), 2,
      sym_TOKEN_P_BCLOSE,
      sym_IDENT,
  [3385] = 2,
    ACTIONS(523), 1,
      sym_TOKEN_P_BOPEN,
    STATE(41), 1,
      sym_script_block,
  [3392] = 2,
    ACTIONS(472), 1,
      sym_TOKEN_P_BOPEN,
    STATE(55), 1,
      sym_script_block,
  [3399] = 2,
    ACTIONS(481), 1,
      sym_TOKEN_P_BOPEN,
    STATE(233), 1,
      sym_script_block,
  [3406] = 1,
    ACTIONS(405), 2,
      sym_TOKEN_P_BCLOSE,
      sym_IDENT,
  [3411] = 1,
    ACTIONS(319), 2,
      sym_TOKEN_P_BCLOSE,
      sym_IDENT,
  [3416] = 1,
    ACTIONS(525), 1,
      sym_TOKEN_P_BOPEN,
  [3420] = 1,
    ACTIONS(527), 1,
      sym_TOKEN_P_BCLOSE,
  [3424] = 1,
    ACTIONS(529), 1,
      sym_IDENT,
  [3428] = 1,
    ACTIONS(531), 1,
      sym_IDENT,
  [3432] = 1,
    ACTIONS(533), 1,
      sym_TOKEN_P_BOPEN,
  [3436] = 1,
    ACTIONS(535), 1,
      sym_TOKEN_P_POPEN,
  [3440] = 1,
    ACTIONS(537), 1,
      sym_TOKEN_P_POPEN,
  [3444] = 1,
    ACTIONS(539), 1,
      sym_TOKEN_P_POPEN,
  [3448] = 1,
    ACTIONS(541), 1,
      sym_TOKEN_P_POPEN,
  [3452] = 1,
    ACTIONS(543), 1,
      sym_TOKEN_P_POPEN,
  [3456] = 1,
    ACTIONS(545), 1,
      sym_TOKEN_P_POPEN,
  [3460] = 1,
    ACTIONS(547), 1,
      sym_TOKEN_P_BOPEN,
  [3464] = 1,
    ACTIONS(549), 1,
      sym_TOKEN_P_BCLOSE,
  [3468] = 1,
    ACTIONS(551), 1,
      sym_TOKEN_P_POPEN,
  [3472] = 1,
    ACTIONS(553), 1,
      sym_TOKEN_P_BOPEN,
  [3476] = 1,
    ACTIONS(555), 1,
      sym_TOKEN_P_BOPEN,
  [3480] = 1,
    ACTIONS(557), 1,
      sym_TOKEN_P_BCLOSE,
  [3484] = 1,
    ACTIONS(559), 1,
      sym_TOKEN_P_POPEN,
  [3488] = 1,
    ACTIONS(561), 1,
      sym_IDENT,
  [3492] = 1,
    ACTIONS(563), 1,
      sym_TOKEN_P_BOPEN,
  [3496] = 1,
    ACTIONS(565), 1,
      sym_TOKEN_P_BOPEN,
  [3500] = 1,
    ACTIONS(567), 1,
      sym_TOKEN_P_COLON,
  [3504] = 1,
    ACTIONS(569), 1,
      sym_TOKEN_P_POPEN,
  [3508] = 1,
    ACTIONS(571), 1,
      sym_TOKEN_P_PCLOSE,
  [3512] = 1,
    ACTIONS(573), 1,
      sym_IDENT,
  [3516] = 1,
    ACTIONS(575), 1,
      sym_IDENT,
  [3520] = 1,
    ACTIONS(577), 1,
      sym_TOKEN_P_BOPEN,
  [3524] = 1,
    ACTIONS(579), 1,
      sym_IDENT,
  [3528] = 1,
    ACTIONS(581), 1,
      sym_TOKEN_P_BCLOSE,
  [3532] = 1,
    ACTIONS(583), 1,
      sym_TOKEN_P_BCLOSE,
  [3536] = 1,
    ACTIONS(585), 1,
      sym_TOKEN_P_PCLOSE,
  [3540] = 1,
    ACTIONS(587), 1,
      sym_IDENT,
  [3544] = 1,
    ACTIONS(589), 1,
      sym_TOKEN_P_PCLOSE,
  [3548] = 1,
    ACTIONS(591), 1,
      sym_TOKEN_P_PCLOSE,
  [3552] = 1,
    ACTIONS(593), 1,
      sym_TOKEN_P_BCLOSE,
  [3556] = 1,
    ACTIONS(595), 1,
      sym_TOKEN_P_BCLOSE,
  [3560] = 1,
    ACTIONS(597), 1,
      sym_TOKEN_P_PCLOSE,
  [3564] = 1,
    ACTIONS(599), 1,
      sym_TOKEN_P_BCLOSE,
  [3568] = 1,
    ACTIONS(601), 1,
      sym_TOKEN_P_PCLOSE,
  [3572] = 1,
    ACTIONS(603), 1,
      sym_IDENT,
  [3576] = 1,
    ACTIONS(605), 1,
      sym_TOKEN_P_COLON,
  [3580] = 1,
    ACTIONS(607), 1,
      sym_TOKEN_P_BOPEN,
  [3584] = 1,
    ACTIONS(609), 1,
      sym_IDENT,
  [3588] = 1,
    ACTIONS(611), 1,
      sym_TOKEN_P_BOPEN,
  [3592] = 1,
    ACTIONS(613), 1,
      sym_TOKEN_P_BCLOSE,
  [3596] = 1,
    ACTIONS(615), 1,
      sym_TOKEN_P_EQUALS,
  [3600] = 1,
    ACTIONS(617), 1,
      ts_builtin_sym_end,
  [3604] = 1,
    ACTIONS(619), 1,
      sym_TOKEN_P_BCLOSE,
  [3608] = 1,
    ACTIONS(621), 1,
      sym_TOKEN_KW_WHILE,
  [3612] = 1,
    ACTIONS(623), 1,
      sym_RAW_LIT,
  [3616] = 1,
    ACTIONS(625), 1,
      sym_IDENT,
  [3620] = 1,
    ACTIONS(627), 1,
      sym_IDENT,
  [3624] = 1,
    ACTIONS(629), 1,
      sym_TOKEN_P_PCLOSE,
  [3628] = 1,
    ACTIONS(631), 1,
      sym_TOKEN_P_PCLOSE,
  [3632] = 1,
    ACTIONS(633), 1,
      sym_TOKEN_P_PCLOSE,
  [3636] = 1,
    ACTIONS(635), 1,
      sym_TOKEN_P_PCLOSE,
  [3640] = 1,
    ACTIONS(637), 1,
      sym_TOKEN_P_PCLOSE,
  [3644] = 1,
    ACTIONS(639), 1,
      sym_TOKEN_P_POPEN,
  [3648] = 1,
    ACTIONS(641), 1,
      sym_TOKEN_P_PCLOSE,
  [3652] = 1,
    ACTIONS(643), 1,
      sym_TOKEN_P_POPEN,
  [3656] = 1,
    ACTIONS(645), 1,
      sym_TOKEN_P_POPEN,
  [3660] = 1,
    ACTIONS(647), 1,
      sym_TOKEN_P_PCLOSE,
  [3664] = 1,
    ACTIONS(649), 1,
      sym_TOKEN_P_PCLOSE,
  [3668] = 1,
    ACTIONS(651), 1,
      sym_TOKEN_P_POPEN,
  [3672] = 1,
    ACTIONS(653), 1,
      sym_TOKEN_P_BOPEN,
  [3676] = 1,
    ACTIONS(655), 1,
      sym_TOKEN_P_BCLOSE,
  [3680] = 1,
    ACTIONS(657), 1,
      sym_TOKEN_P_POPEN,
  [3684] = 1,
    ACTIONS(659), 1,
      sym_TOKEN_KW_WHILE,
  [3688] = 1,
    ACTIONS(661), 1,
      sym_TOKEN_P_PCLOSE,
  [3692] = 1,
    ACTIONS(663), 1,
      sym_TOKEN_P_POPEN,
  [3696] = 1,
    ACTIONS(665), 1,
      sym_IDENT,
  [3700] = 1,
    ACTIONS(667), 1,
      sym_TOKEN_P_BCLOSE,
  [3704] = 1,
    ACTIONS(669), 1,
      sym_TOKEN_P_POPEN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 52,
  [SMALL_STATE(4)] = 104,
  [SMALL_STATE(5)] = 156,
  [SMALL_STATE(6)] = 208,
  [SMALL_STATE(7)] = 260,
  [SMALL_STATE(8)] = 308,
  [SMALL_STATE(9)] = 356,
  [SMALL_STATE(10)] = 404,
  [SMALL_STATE(11)] = 452,
  [SMALL_STATE(12)] = 500,
  [SMALL_STATE(13)] = 548,
  [SMALL_STATE(14)] = 596,
  [SMALL_STATE(15)] = 644,
  [SMALL_STATE(16)] = 692,
  [SMALL_STATE(17)] = 740,
  [SMALL_STATE(18)] = 788,
  [SMALL_STATE(19)] = 836,
  [SMALL_STATE(20)] = 884,
  [SMALL_STATE(21)] = 932,
  [SMALL_STATE(22)] = 980,
  [SMALL_STATE(23)] = 1007,
  [SMALL_STATE(24)] = 1034,
  [SMALL_STATE(25)] = 1065,
  [SMALL_STATE(26)] = 1091,
  [SMALL_STATE(27)] = 1119,
  [SMALL_STATE(28)] = 1145,
  [SMALL_STATE(29)] = 1170,
  [SMALL_STATE(30)] = 1195,
  [SMALL_STATE(31)] = 1220,
  [SMALL_STATE(32)] = 1245,
  [SMALL_STATE(33)] = 1270,
  [SMALL_STATE(34)] = 1293,
  [SMALL_STATE(35)] = 1318,
  [SMALL_STATE(36)] = 1343,
  [SMALL_STATE(37)] = 1368,
  [SMALL_STATE(38)] = 1393,
  [SMALL_STATE(39)] = 1418,
  [SMALL_STATE(40)] = 1443,
  [SMALL_STATE(41)] = 1468,
  [SMALL_STATE(42)] = 1497,
  [SMALL_STATE(43)] = 1523,
  [SMALL_STATE(44)] = 1547,
  [SMALL_STATE(45)] = 1571,
  [SMALL_STATE(46)] = 1595,
  [SMALL_STATE(47)] = 1618,
  [SMALL_STATE(48)] = 1641,
  [SMALL_STATE(49)] = 1664,
  [SMALL_STATE(50)] = 1687,
  [SMALL_STATE(51)] = 1726,
  [SMALL_STATE(52)] = 1749,
  [SMALL_STATE(53)] = 1772,
  [SMALL_STATE(54)] = 1795,
  [SMALL_STATE(55)] = 1818,
  [SMALL_STATE(56)] = 1841,
  [SMALL_STATE(57)] = 1880,
  [SMALL_STATE(58)] = 1905,
  [SMALL_STATE(59)] = 1930,
  [SMALL_STATE(60)] = 1951,
  [SMALL_STATE(61)] = 1972,
  [SMALL_STATE(62)] = 1993,
  [SMALL_STATE(63)] = 2011,
  [SMALL_STATE(64)] = 2029,
  [SMALL_STATE(65)] = 2049,
  [SMALL_STATE(66)] = 2067,
  [SMALL_STATE(67)] = 2090,
  [SMALL_STATE(68)] = 2103,
  [SMALL_STATE(69)] = 2126,
  [SMALL_STATE(70)] = 2151,
  [SMALL_STATE(71)] = 2164,
  [SMALL_STATE(72)] = 2187,
  [SMALL_STATE(73)] = 2200,
  [SMALL_STATE(74)] = 2215,
  [SMALL_STATE(75)] = 2228,
  [SMALL_STATE(76)] = 2253,
  [SMALL_STATE(77)] = 2273,
  [SMALL_STATE(78)] = 2285,
  [SMALL_STATE(79)] = 2297,
  [SMALL_STATE(80)] = 2309,
  [SMALL_STATE(81)] = 2321,
  [SMALL_STATE(82)] = 2341,
  [SMALL_STATE(83)] = 2353,
  [SMALL_STATE(84)] = 2365,
  [SMALL_STATE(85)] = 2377,
  [SMALL_STATE(86)] = 2389,
  [SMALL_STATE(87)] = 2401,
  [SMALL_STATE(88)] = 2413,
  [SMALL_STATE(89)] = 2425,
  [SMALL_STATE(90)] = 2437,
  [SMALL_STATE(91)] = 2450,
  [SMALL_STATE(92)] = 2463,
  [SMALL_STATE(93)] = 2480,
  [SMALL_STATE(94)] = 2497,
  [SMALL_STATE(95)] = 2518,
  [SMALL_STATE(96)] = 2535,
  [SMALL_STATE(97)] = 2552,
  [SMALL_STATE(98)] = 2573,
  [SMALL_STATE(99)] = 2590,
  [SMALL_STATE(100)] = 2607,
  [SMALL_STATE(101)] = 2624,
  [SMALL_STATE(102)] = 2641,
  [SMALL_STATE(103)] = 2662,
  [SMALL_STATE(104)] = 2675,
  [SMALL_STATE(105)] = 2692,
  [SMALL_STATE(106)] = 2709,
  [SMALL_STATE(107)] = 2729,
  [SMALL_STATE(108)] = 2743,
  [SMALL_STATE(109)] = 2757,
  [SMALL_STATE(110)] = 2771,
  [SMALL_STATE(111)] = 2779,
  [SMALL_STATE(112)] = 2793,
  [SMALL_STATE(113)] = 2807,
  [SMALL_STATE(114)] = 2821,
  [SMALL_STATE(115)] = 2835,
  [SMALL_STATE(116)] = 2849,
  [SMALL_STATE(117)] = 2863,
  [SMALL_STATE(118)] = 2871,
  [SMALL_STATE(119)] = 2885,
  [SMALL_STATE(120)] = 2896,
  [SMALL_STATE(121)] = 2907,
  [SMALL_STATE(122)] = 2918,
  [SMALL_STATE(123)] = 2929,
  [SMALL_STATE(124)] = 2936,
  [SMALL_STATE(125)] = 2947,
  [SMALL_STATE(126)] = 2958,
  [SMALL_STATE(127)] = 2965,
  [SMALL_STATE(128)] = 2976,
  [SMALL_STATE(129)] = 2987,
  [SMALL_STATE(130)] = 2998,
  [SMALL_STATE(131)] = 3009,
  [SMALL_STATE(132)] = 3020,
  [SMALL_STATE(133)] = 3031,
  [SMALL_STATE(134)] = 3042,
  [SMALL_STATE(135)] = 3052,
  [SMALL_STATE(136)] = 3060,
  [SMALL_STATE(137)] = 3070,
  [SMALL_STATE(138)] = 3080,
  [SMALL_STATE(139)] = 3090,
  [SMALL_STATE(140)] = 3098,
  [SMALL_STATE(141)] = 3106,
  [SMALL_STATE(142)] = 3116,
  [SMALL_STATE(143)] = 3126,
  [SMALL_STATE(144)] = 3136,
  [SMALL_STATE(145)] = 3144,
  [SMALL_STATE(146)] = 3154,
  [SMALL_STATE(147)] = 3164,
  [SMALL_STATE(148)] = 3174,
  [SMALL_STATE(149)] = 3184,
  [SMALL_STATE(150)] = 3194,
  [SMALL_STATE(151)] = 3204,
  [SMALL_STATE(152)] = 3210,
  [SMALL_STATE(153)] = 3220,
  [SMALL_STATE(154)] = 3227,
  [SMALL_STATE(155)] = 3234,
  [SMALL_STATE(156)] = 3239,
  [SMALL_STATE(157)] = 3246,
  [SMALL_STATE(158)] = 3253,
  [SMALL_STATE(159)] = 3260,
  [SMALL_STATE(160)] = 3267,
  [SMALL_STATE(161)] = 3272,
  [SMALL_STATE(162)] = 3279,
  [SMALL_STATE(163)] = 3286,
  [SMALL_STATE(164)] = 3293,
  [SMALL_STATE(165)] = 3300,
  [SMALL_STATE(166)] = 3307,
  [SMALL_STATE(167)] = 3312,
  [SMALL_STATE(168)] = 3317,
  [SMALL_STATE(169)] = 3324,
  [SMALL_STATE(170)] = 3329,
  [SMALL_STATE(171)] = 3334,
  [SMALL_STATE(172)] = 3341,
  [SMALL_STATE(173)] = 3348,
  [SMALL_STATE(174)] = 3353,
  [SMALL_STATE(175)] = 3358,
  [SMALL_STATE(176)] = 3363,
  [SMALL_STATE(177)] = 3368,
  [SMALL_STATE(178)] = 3375,
  [SMALL_STATE(179)] = 3380,
  [SMALL_STATE(180)] = 3385,
  [SMALL_STATE(181)] = 3392,
  [SMALL_STATE(182)] = 3399,
  [SMALL_STATE(183)] = 3406,
  [SMALL_STATE(184)] = 3411,
  [SMALL_STATE(185)] = 3416,
  [SMALL_STATE(186)] = 3420,
  [SMALL_STATE(187)] = 3424,
  [SMALL_STATE(188)] = 3428,
  [SMALL_STATE(189)] = 3432,
  [SMALL_STATE(190)] = 3436,
  [SMALL_STATE(191)] = 3440,
  [SMALL_STATE(192)] = 3444,
  [SMALL_STATE(193)] = 3448,
  [SMALL_STATE(194)] = 3452,
  [SMALL_STATE(195)] = 3456,
  [SMALL_STATE(196)] = 3460,
  [SMALL_STATE(197)] = 3464,
  [SMALL_STATE(198)] = 3468,
  [SMALL_STATE(199)] = 3472,
  [SMALL_STATE(200)] = 3476,
  [SMALL_STATE(201)] = 3480,
  [SMALL_STATE(202)] = 3484,
  [SMALL_STATE(203)] = 3488,
  [SMALL_STATE(204)] = 3492,
  [SMALL_STATE(205)] = 3496,
  [SMALL_STATE(206)] = 3500,
  [SMALL_STATE(207)] = 3504,
  [SMALL_STATE(208)] = 3508,
  [SMALL_STATE(209)] = 3512,
  [SMALL_STATE(210)] = 3516,
  [SMALL_STATE(211)] = 3520,
  [SMALL_STATE(212)] = 3524,
  [SMALL_STATE(213)] = 3528,
  [SMALL_STATE(214)] = 3532,
  [SMALL_STATE(215)] = 3536,
  [SMALL_STATE(216)] = 3540,
  [SMALL_STATE(217)] = 3544,
  [SMALL_STATE(218)] = 3548,
  [SMALL_STATE(219)] = 3552,
  [SMALL_STATE(220)] = 3556,
  [SMALL_STATE(221)] = 3560,
  [SMALL_STATE(222)] = 3564,
  [SMALL_STATE(223)] = 3568,
  [SMALL_STATE(224)] = 3572,
  [SMALL_STATE(225)] = 3576,
  [SMALL_STATE(226)] = 3580,
  [SMALL_STATE(227)] = 3584,
  [SMALL_STATE(228)] = 3588,
  [SMALL_STATE(229)] = 3592,
  [SMALL_STATE(230)] = 3596,
  [SMALL_STATE(231)] = 3600,
  [SMALL_STATE(232)] = 3604,
  [SMALL_STATE(233)] = 3608,
  [SMALL_STATE(234)] = 3612,
  [SMALL_STATE(235)] = 3616,
  [SMALL_STATE(236)] = 3620,
  [SMALL_STATE(237)] = 3624,
  [SMALL_STATE(238)] = 3628,
  [SMALL_STATE(239)] = 3632,
  [SMALL_STATE(240)] = 3636,
  [SMALL_STATE(241)] = 3640,
  [SMALL_STATE(242)] = 3644,
  [SMALL_STATE(243)] = 3648,
  [SMALL_STATE(244)] = 3652,
  [SMALL_STATE(245)] = 3656,
  [SMALL_STATE(246)] = 3660,
  [SMALL_STATE(247)] = 3664,
  [SMALL_STATE(248)] = 3668,
  [SMALL_STATE(249)] = 3672,
  [SMALL_STATE(250)] = 3676,
  [SMALL_STATE(251)] = 3680,
  [SMALL_STATE(252)] = 3684,
  [SMALL_STATE(253)] = 3688,
  [SMALL_STATE(254)] = 3692,
  [SMALL_STATE(255)] = 3696,
  [SMALL_STATE(256)] = 3700,
  [SMALL_STATE(257)] = 3704,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [19] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_block_repeat1, 2), SHIFT_REPEAT(2),
  [22] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_script_block_repeat1, 2),
  [24] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_block_repeat1, 2), SHIFT_REPEAT(158),
  [27] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_block_repeat1, 2), SHIFT_REPEAT(251),
  [30] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_block_repeat1, 2), SHIFT_REPEAT(257),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_block_repeat1, 2), SHIFT_REPEAT(146),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_script_block_repeat1, 2),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_block_repeat1, 2), SHIFT_REPEAT(28),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_block_repeat1, 2), SHIFT_REPEAT(193),
  [44] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_switch_case, 4, .production_id = 13),
  [48] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [50] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [52] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [54] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_switch_case, 4, .production_id = 13),
  [58] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_switch_case, 3, .production_id = 12),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_switch_case, 3, .production_id = 12),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_switch_case, 3, .production_id = 11),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_switch_case, 3, .production_id = 11),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_switch_case, 2),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_switch_case, 2),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [116] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_block_repeat1, 2), SHIFT_REPEAT(16),
  [119] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_block_repeat1, 2), SHIFT_REPEAT(182),
  [122] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_block_repeat1, 2), SHIFT_REPEAT(195),
  [125] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_block_repeat1, 2), SHIFT_REPEAT(194),
  [128] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_block_repeat1, 2), SHIFT_REPEAT(149),
  [131] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_block_repeat1, 2), SHIFT_REPEAT(51),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_block, 3),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_block, 3),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_block, 2),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_block, 2),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_if, 5, .production_id = 4),
  [160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(254),
  [162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_if, 5, .production_id = 4),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_if, 10, .production_id = 14),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_if, 10, .production_id = 14),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_SCRIPT_0_LIT, 1),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_SCRIPT_0_LIT, 1),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NUM_LIT, 1),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_while, 2, .production_id = 3),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_while, 2, .production_id = 3),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_if, 12, .production_id = 15),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_if, 12, .production_id = 15),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_switch, 7, .production_id = 9),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_switch, 7, .production_id = 9),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_if, 7, .production_id = 8),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_if, 7, .production_id = 8),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_do_while, 6, .production_id = 6),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_do_while, 6, .production_id = 6),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_while, 5, .production_id = 5),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_while, 5, .production_id = 5),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_application, 4),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_application, 4),
  [206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [216] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(235),
  [219] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(137),
  [222] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(141),
  [225] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(234),
  [228] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(142),
  [231] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(143),
  [234] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(83),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_movement_values, 1),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_movement_values_repeat1, 2),
  [245] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_movement_values_repeat1, 2), SHIFT_REPEAT(70),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_const_repeat1, 2),
  [250] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_const_repeat1, 2), SHIFT_REPEAT(113),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const, 4),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const, 5),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_MOVEMENT_LIT, 1),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_script_application_repeat1, 2),
  [285] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_script_application_repeat1, 2), SHIFT_REPEAT(103),
  [288] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_application_repeat1, 2), SHIFT_REPEAT(103),
  [291] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_application_repeat1, 2), SHIFT_REPEAT(71),
  [294] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_application_repeat1, 2), SHIFT_REPEAT(236),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__movement_entry, 1),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script, 4, .production_id = 2),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mart, 6, .production_id = 2),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script, 3, .production_id = 1),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_movement, 5, .production_id = 1),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_COMMENT, 1),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw, 2),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__movement_entry, 3),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_movement, 6, .production_id = 2),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 5, .production_id = 1),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 6, .production_id = 2),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mart, 5, .production_id = 1),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_STRING_INTERPOLATED, 3),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_STRING_INTERPOLATED, 3),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_STRING_INTERPOLATED, 4),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_STRING_INTERPOLATED, 4),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_values, 1),
  [341] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_text_values_repeat1, 2), SHIFT_REPEAT(191),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_text_values_repeat1, 2),
  [346] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_text_values_repeat1, 2), SHIFT_REPEAT(126),
  [349] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_text_values_repeat1, 2), SHIFT_REPEAT(187),
  [352] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_NUM_LIT, 1),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [362] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [368] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [370] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [372] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_switch_repeat1, 2), SHIFT_REPEAT(119),
  [375] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_script_switch_repeat1, 2), SHIFT_REPEAT(206),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_script_switch_repeat1, 2),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_FORMAT_STRING_repeat1, 2),
  [394] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_FORMAT_STRING_repeat1, 2), SHIFT_REPEAT(118),
  [397] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_FORMAT_STRING_repeat1, 2), SHIFT_REPEAT(187),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_poryswitch_movement_repeat1, 2),
  [402] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_poryswitch_movement_repeat1, 2), SHIFT_REPEAT(168),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_FORMAT_STRING, 4),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_STRING, 1),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_poryswitch_text_repeat1, 2),
  [417] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_poryswitch_text_repeat1, 2), SHIFT_REPEAT(156),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_poryswitch_mart_repeat1, 2),
  [424] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_poryswitch_mart_repeat1, 2), SHIFT_REPEAT(159),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [447] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_STRING_INTERPOLATED_repeat1, 2), SHIFT_REPEAT(209),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_STRING_INTERPOLATED_repeat1, 2),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mart_values, 1),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_mart_values_repeat1, 2),
  [476] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mart_values_repeat1, 2), SHIFT_REPEAT(150),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mart_value, 1),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_poryswitch_case_mart, 3, .production_id = 10),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_poryswitch_case_movement, 3, .production_id = 10),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_movement_value, 1),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_poryswitch_case_text, 3, .production_id = 10),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_value, 1),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_poryswitch_case_mart, 4, .production_id = 10),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_poryswitch_case_movement, 4, .production_id = 10),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_poryswitch_case_text, 4, .production_id = 10),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_poryswitch_text, 7, .production_id = 7),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_SCRIPT_FN_LIT, 1),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scope_modifier, 3),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [617] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_poryswitch_movement, 7, .production_id = 7),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_expression, 1),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_poryswitch_mart, 7, .production_id = 7),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
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
