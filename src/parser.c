#include "tree_sitter/parser.h"

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
#define STATE_COUNT 371
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 137
#define ALIAS_COUNT 0
#define TOKEN_COUNT 63
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 8
#define MAX_ALIAS_SEQUENCE_LENGTH 14
#define PRODUCTION_ID_COUNT 20

enum ts_symbol_identifiers {
  sym__whitespace = 1,
  sym_line_comment = 2,
  anon_sym_LPAREN = 3,
  anon_sym_set_DASHoption = 4,
  anon_sym_RPAREN = 5,
  anon_sym_datatype = 6,
  anon_sym_sort = 7,
  anon_sym_function = 8,
  anon_sym_COLONcost = 9,
  anon_sym_COLONunextractable = 10,
  anon_sym_COLONon_merge = 11,
  anon_sym_COLONmerge = 12,
  anon_sym_COLONdefault = 13,
  anon_sym_declare = 14,
  anon_sym_relation = 15,
  anon_sym_ruleset = 16,
  anon_sym_rule = 17,
  anon_sym_COLONruleset = 18,
  anon_sym_COLONname = 19,
  anon_sym_rewrite = 20,
  anon_sym_COLONsubsume = 21,
  anon_sym_COLONwhen = 22,
  anon_sym_birewrite = 23,
  anon_sym_run = 24,
  anon_sym_COLONuntil = 25,
  anon_sym_simplify = 26,
  anon_sym_calc = 27,
  anon_sym_query_DASHextract = 28,
  anon_sym_COLONvariants = 29,
  anon_sym_check = 30,
  anon_sym_check_DASHproof = 31,
  anon_sym_run_DASHschedule = 32,
  anon_sym_print_DASHstats = 33,
  anon_sym_push = 34,
  anon_sym_pop = 35,
  anon_sym_print_DASHfunction = 36,
  anon_sym_print_DASHsize = 37,
  anon_sym_input = 38,
  anon_sym_output = 39,
  anon_sym_fail = 40,
  anon_sym_include = 41,
  anon_sym_saturate = 42,
  anon_sym_seq = 43,
  anon_sym_repeat = 44,
  anon_sym_let = 45,
  anon_sym_set = 46,
  anon_sym_delete = 47,
  anon_sym_subsume = 48,
  anon_sym_union = 49,
  anon_sym_panic = 50,
  anon_sym_extract = 51,
  anon_sym_EQ = 52,
  sym_literal_int = 53,
  anon_sym_NaN = 54,
  aux_sym_literal_float_token1 = 55,
  anon_sym_inf = 56,
  anon_sym_DASHinf = 57,
  anon_sym_true = 58,
  anon_sym_false = 59,
  sym_literal_string = 60,
  aux_sym_ident_token1 = 61,
  aux_sym_ident_token2 = 62,
  sym_program = 63,
  sym_command = 64,
  sym_command_set_option = 65,
  sym_command_datatype = 66,
  sym_command_sort = 67,
  sym_command_function = 68,
  sym_command_declare = 69,
  sym_command_relation = 70,
  sym_command_ruleset = 71,
  sym_command_rule = 72,
  sym_command_rewrite = 73,
  sym_command_birewrite = 74,
  sym_command_run = 75,
  sym_command_simplify = 76,
  sym_command_calc = 77,
  sym_command_query_extract = 78,
  sym_command_check = 79,
  sym_command_check_proof = 80,
  sym_command_run_schedule = 81,
  sym_command_print_stats = 82,
  sym_command_push = 83,
  sym_command_pop = 84,
  sym_command_print_function = 85,
  sym_command_print_size = 86,
  sym_command_input = 87,
  sym_command_output = 88,
  sym_command_fail = 89,
  sym_command_include = 90,
  sym_command_action = 91,
  sym__schedule = 92,
  sym_schedule_saturate = 93,
  sym_schedule_seq = 94,
  sym_schedule_repeat = 95,
  sym_schedule_run = 96,
  sym_schedule_ident = 97,
  sym__action = 98,
  sym_action_let = 99,
  sym_action_set = 100,
  sym_action_delete = 101,
  sym_action_subsume = 102,
  sym_action_union = 103,
  sym_action_panic = 104,
  sym_action_extract = 105,
  sym_action_call = 106,
  sym__fact = 107,
  sym_fact_eq = 108,
  sym_fact_call = 109,
  sym_schema = 110,
  sym__expr = 111,
  sym_expr_ident = 112,
  sym_expr_literal = 113,
  sym_expr_call = 114,
  sym__literal = 115,
  sym_literal_unit = 116,
  sym_literal_float = 117,
  sym_literal_bool = 118,
  sym_variant = 119,
  sym__type = 120,
  sym_type_ident = 121,
  sym__sort = 122,
  sym_sort_ident = 123,
  sym_ident = 124,
  sym__actions = 125,
  sym__types = 126,
  sym__facts = 127,
  sym__sorts = 128,
  aux_sym_program_repeat1 = 129,
  aux_sym_command_datatype_repeat1 = 130,
  aux_sym_command_sort_repeat1 = 131,
  aux_sym_command_run_repeat1 = 132,
  aux_sym_command_run_schedule_repeat1 = 133,
  aux_sym_variant_repeat1 = 134,
  aux_sym__actions_repeat1 = 135,
  aux_sym__sorts_repeat1 = 136,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__whitespace] = "_whitespace",
  [sym_line_comment] = "line_comment",
  [anon_sym_LPAREN] = "(",
  [anon_sym_set_DASHoption] = "set-option",
  [anon_sym_RPAREN] = ")",
  [anon_sym_datatype] = "datatype",
  [anon_sym_sort] = "sort",
  [anon_sym_function] = "function",
  [anon_sym_COLONcost] = ":cost",
  [anon_sym_COLONunextractable] = ":unextractable",
  [anon_sym_COLONon_merge] = ":on_merge",
  [anon_sym_COLONmerge] = ":merge",
  [anon_sym_COLONdefault] = ":default",
  [anon_sym_declare] = "declare",
  [anon_sym_relation] = "relation",
  [anon_sym_ruleset] = "ruleset",
  [anon_sym_rule] = "rule",
  [anon_sym_COLONruleset] = ":ruleset",
  [anon_sym_COLONname] = ":name",
  [anon_sym_rewrite] = "rewrite",
  [anon_sym_COLONsubsume] = ":subsume",
  [anon_sym_COLONwhen] = ":when",
  [anon_sym_birewrite] = "birewrite",
  [anon_sym_run] = "run",
  [anon_sym_COLONuntil] = ":until",
  [anon_sym_simplify] = "simplify",
  [anon_sym_calc] = "calc",
  [anon_sym_query_DASHextract] = "query-extract",
  [anon_sym_COLONvariants] = ":variants",
  [anon_sym_check] = "check",
  [anon_sym_check_DASHproof] = "check-proof",
  [anon_sym_run_DASHschedule] = "run-schedule",
  [anon_sym_print_DASHstats] = "print-stats",
  [anon_sym_push] = "push",
  [anon_sym_pop] = "pop",
  [anon_sym_print_DASHfunction] = "print-function",
  [anon_sym_print_DASHsize] = "print-size",
  [anon_sym_input] = "input",
  [anon_sym_output] = "output",
  [anon_sym_fail] = "fail",
  [anon_sym_include] = "include",
  [anon_sym_saturate] = "saturate",
  [anon_sym_seq] = "seq",
  [anon_sym_repeat] = "repeat",
  [anon_sym_let] = "let",
  [anon_sym_set] = "set",
  [anon_sym_delete] = "delete",
  [anon_sym_subsume] = "subsume",
  [anon_sym_union] = "union",
  [anon_sym_panic] = "panic",
  [anon_sym_extract] = "extract",
  [anon_sym_EQ] = "=",
  [sym_literal_int] = "literal_int",
  [anon_sym_NaN] = "NaN",
  [aux_sym_literal_float_token1] = "literal_float_token1",
  [anon_sym_inf] = "inf",
  [anon_sym_DASHinf] = "-inf",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_literal_string] = "literal_string",
  [aux_sym_ident_token1] = "ident_token1",
  [aux_sym_ident_token2] = "ident_token2",
  [sym_program] = "program",
  [sym_command] = "command",
  [sym_command_set_option] = "command_set_option",
  [sym_command_datatype] = "command_datatype",
  [sym_command_sort] = "command_sort",
  [sym_command_function] = "command_function",
  [sym_command_declare] = "command_declare",
  [sym_command_relation] = "command_relation",
  [sym_command_ruleset] = "command_ruleset",
  [sym_command_rule] = "command_rule",
  [sym_command_rewrite] = "command_rewrite",
  [sym_command_birewrite] = "command_birewrite",
  [sym_command_run] = "command_run",
  [sym_command_simplify] = "command_simplify",
  [sym_command_calc] = "command_calc",
  [sym_command_query_extract] = "command_query_extract",
  [sym_command_check] = "command_check",
  [sym_command_check_proof] = "command_check_proof",
  [sym_command_run_schedule] = "command_run_schedule",
  [sym_command_print_stats] = "command_print_stats",
  [sym_command_push] = "command_push",
  [sym_command_pop] = "command_pop",
  [sym_command_print_function] = "command_print_function",
  [sym_command_print_size] = "command_print_size",
  [sym_command_input] = "command_input",
  [sym_command_output] = "command_output",
  [sym_command_fail] = "command_fail",
  [sym_command_include] = "command_include",
  [sym_command_action] = "command_action",
  [sym__schedule] = "_schedule",
  [sym_schedule_saturate] = "schedule_saturate",
  [sym_schedule_seq] = "schedule_seq",
  [sym_schedule_repeat] = "schedule_repeat",
  [sym_schedule_run] = "schedule_run",
  [sym_schedule_ident] = "schedule_ident",
  [sym__action] = "_action",
  [sym_action_let] = "action_let",
  [sym_action_set] = "action_set",
  [sym_action_delete] = "action_delete",
  [sym_action_subsume] = "action_subsume",
  [sym_action_union] = "action_union",
  [sym_action_panic] = "action_panic",
  [sym_action_extract] = "action_extract",
  [sym_action_call] = "action_call",
  [sym__fact] = "_fact",
  [sym_fact_eq] = "fact_eq",
  [sym_fact_call] = "fact_call",
  [sym_schema] = "schema",
  [sym__expr] = "_expr",
  [sym_expr_ident] = "expr_ident",
  [sym_expr_literal] = "expr_literal",
  [sym_expr_call] = "expr_call",
  [sym__literal] = "_literal",
  [sym_literal_unit] = "literal_unit",
  [sym_literal_float] = "literal_float",
  [sym_literal_bool] = "literal_bool",
  [sym_variant] = "variant",
  [sym__type] = "_type",
  [sym_type_ident] = "type_ident",
  [sym__sort] = "_sort",
  [sym_sort_ident] = "sort_ident",
  [sym_ident] = "ident",
  [sym__actions] = "_actions",
  [sym__types] = "_types",
  [sym__facts] = "_facts",
  [sym__sorts] = "_sorts",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_command_datatype_repeat1] = "command_datatype_repeat1",
  [aux_sym_command_sort_repeat1] = "command_sort_repeat1",
  [aux_sym_command_run_repeat1] = "command_run_repeat1",
  [aux_sym_command_run_schedule_repeat1] = "command_run_schedule_repeat1",
  [aux_sym_variant_repeat1] = "variant_repeat1",
  [aux_sym__actions_repeat1] = "_actions_repeat1",
  [aux_sym__sorts_repeat1] = "_sorts_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym__whitespace] = sym__whitespace,
  [sym_line_comment] = sym_line_comment,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_set_DASHoption] = anon_sym_set_DASHoption,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_datatype] = anon_sym_datatype,
  [anon_sym_sort] = anon_sym_sort,
  [anon_sym_function] = anon_sym_function,
  [anon_sym_COLONcost] = anon_sym_COLONcost,
  [anon_sym_COLONunextractable] = anon_sym_COLONunextractable,
  [anon_sym_COLONon_merge] = anon_sym_COLONon_merge,
  [anon_sym_COLONmerge] = anon_sym_COLONmerge,
  [anon_sym_COLONdefault] = anon_sym_COLONdefault,
  [anon_sym_declare] = anon_sym_declare,
  [anon_sym_relation] = anon_sym_relation,
  [anon_sym_ruleset] = anon_sym_ruleset,
  [anon_sym_rule] = anon_sym_rule,
  [anon_sym_COLONruleset] = anon_sym_COLONruleset,
  [anon_sym_COLONname] = anon_sym_COLONname,
  [anon_sym_rewrite] = anon_sym_rewrite,
  [anon_sym_COLONsubsume] = anon_sym_COLONsubsume,
  [anon_sym_COLONwhen] = anon_sym_COLONwhen,
  [anon_sym_birewrite] = anon_sym_birewrite,
  [anon_sym_run] = anon_sym_run,
  [anon_sym_COLONuntil] = anon_sym_COLONuntil,
  [anon_sym_simplify] = anon_sym_simplify,
  [anon_sym_calc] = anon_sym_calc,
  [anon_sym_query_DASHextract] = anon_sym_query_DASHextract,
  [anon_sym_COLONvariants] = anon_sym_COLONvariants,
  [anon_sym_check] = anon_sym_check,
  [anon_sym_check_DASHproof] = anon_sym_check_DASHproof,
  [anon_sym_run_DASHschedule] = anon_sym_run_DASHschedule,
  [anon_sym_print_DASHstats] = anon_sym_print_DASHstats,
  [anon_sym_push] = anon_sym_push,
  [anon_sym_pop] = anon_sym_pop,
  [anon_sym_print_DASHfunction] = anon_sym_print_DASHfunction,
  [anon_sym_print_DASHsize] = anon_sym_print_DASHsize,
  [anon_sym_input] = anon_sym_input,
  [anon_sym_output] = anon_sym_output,
  [anon_sym_fail] = anon_sym_fail,
  [anon_sym_include] = anon_sym_include,
  [anon_sym_saturate] = anon_sym_saturate,
  [anon_sym_seq] = anon_sym_seq,
  [anon_sym_repeat] = anon_sym_repeat,
  [anon_sym_let] = anon_sym_let,
  [anon_sym_set] = anon_sym_set,
  [anon_sym_delete] = anon_sym_delete,
  [anon_sym_subsume] = anon_sym_subsume,
  [anon_sym_union] = anon_sym_union,
  [anon_sym_panic] = anon_sym_panic,
  [anon_sym_extract] = anon_sym_extract,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_literal_int] = sym_literal_int,
  [anon_sym_NaN] = anon_sym_NaN,
  [aux_sym_literal_float_token1] = aux_sym_literal_float_token1,
  [anon_sym_inf] = anon_sym_inf,
  [anon_sym_DASHinf] = anon_sym_DASHinf,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_literal_string] = sym_literal_string,
  [aux_sym_ident_token1] = aux_sym_ident_token1,
  [aux_sym_ident_token2] = aux_sym_ident_token2,
  [sym_program] = sym_program,
  [sym_command] = sym_command,
  [sym_command_set_option] = sym_command_set_option,
  [sym_command_datatype] = sym_command_datatype,
  [sym_command_sort] = sym_command_sort,
  [sym_command_function] = sym_command_function,
  [sym_command_declare] = sym_command_declare,
  [sym_command_relation] = sym_command_relation,
  [sym_command_ruleset] = sym_command_ruleset,
  [sym_command_rule] = sym_command_rule,
  [sym_command_rewrite] = sym_command_rewrite,
  [sym_command_birewrite] = sym_command_birewrite,
  [sym_command_run] = sym_command_run,
  [sym_command_simplify] = sym_command_simplify,
  [sym_command_calc] = sym_command_calc,
  [sym_command_query_extract] = sym_command_query_extract,
  [sym_command_check] = sym_command_check,
  [sym_command_check_proof] = sym_command_check_proof,
  [sym_command_run_schedule] = sym_command_run_schedule,
  [sym_command_print_stats] = sym_command_print_stats,
  [sym_command_push] = sym_command_push,
  [sym_command_pop] = sym_command_pop,
  [sym_command_print_function] = sym_command_print_function,
  [sym_command_print_size] = sym_command_print_size,
  [sym_command_input] = sym_command_input,
  [sym_command_output] = sym_command_output,
  [sym_command_fail] = sym_command_fail,
  [sym_command_include] = sym_command_include,
  [sym_command_action] = sym_command_action,
  [sym__schedule] = sym__schedule,
  [sym_schedule_saturate] = sym_schedule_saturate,
  [sym_schedule_seq] = sym_schedule_seq,
  [sym_schedule_repeat] = sym_schedule_repeat,
  [sym_schedule_run] = sym_schedule_run,
  [sym_schedule_ident] = sym_schedule_ident,
  [sym__action] = sym__action,
  [sym_action_let] = sym_action_let,
  [sym_action_set] = sym_action_set,
  [sym_action_delete] = sym_action_delete,
  [sym_action_subsume] = sym_action_subsume,
  [sym_action_union] = sym_action_union,
  [sym_action_panic] = sym_action_panic,
  [sym_action_extract] = sym_action_extract,
  [sym_action_call] = sym_action_call,
  [sym__fact] = sym__fact,
  [sym_fact_eq] = sym_fact_eq,
  [sym_fact_call] = sym_fact_call,
  [sym_schema] = sym_schema,
  [sym__expr] = sym__expr,
  [sym_expr_ident] = sym_expr_ident,
  [sym_expr_literal] = sym_expr_literal,
  [sym_expr_call] = sym_expr_call,
  [sym__literal] = sym__literal,
  [sym_literal_unit] = sym_literal_unit,
  [sym_literal_float] = sym_literal_float,
  [sym_literal_bool] = sym_literal_bool,
  [sym_variant] = sym_variant,
  [sym__type] = sym__type,
  [sym_type_ident] = sym_type_ident,
  [sym__sort] = sym__sort,
  [sym_sort_ident] = sym_sort_ident,
  [sym_ident] = sym_ident,
  [sym__actions] = sym__actions,
  [sym__types] = sym__types,
  [sym__facts] = sym__facts,
  [sym__sorts] = sym__sorts,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym_command_datatype_repeat1] = aux_sym_command_datatype_repeat1,
  [aux_sym_command_sort_repeat1] = aux_sym_command_sort_repeat1,
  [aux_sym_command_run_repeat1] = aux_sym_command_run_repeat1,
  [aux_sym_command_run_schedule_repeat1] = aux_sym_command_run_schedule_repeat1,
  [aux_sym_variant_repeat1] = aux_sym_variant_repeat1,
  [aux_sym__actions_repeat1] = aux_sym__actions_repeat1,
  [aux_sym__sorts_repeat1] = aux_sym__sorts_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym__whitespace] = {
    .visible = false,
    .named = true,
  },
  [sym_line_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_set_DASHoption] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_datatype] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sort] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_function] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLONcost] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLONunextractable] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLONon_merge] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLONmerge] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLONdefault] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_declare] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_relation] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ruleset] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rule] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLONruleset] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLONname] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rewrite] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLONsubsume] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLONwhen] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_birewrite] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_run] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLONuntil] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_simplify] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_calc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_query_DASHextract] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLONvariants] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_check] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_check_DASHproof] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_run_DASHschedule] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_print_DASHstats] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_push] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pop] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_print_DASHfunction] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_print_DASHsize] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_input] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_output] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fail] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_include] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_saturate] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_seq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_repeat] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_let] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_set] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_delete] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_subsume] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_union] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_panic] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_extract] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_literal_int] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_NaN] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_literal_float_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_inf] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASHinf] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [sym_literal_string] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_ident_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_ident_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym_command] = {
    .visible = true,
    .named = true,
  },
  [sym_command_set_option] = {
    .visible = true,
    .named = true,
  },
  [sym_command_datatype] = {
    .visible = true,
    .named = true,
  },
  [sym_command_sort] = {
    .visible = true,
    .named = true,
  },
  [sym_command_function] = {
    .visible = true,
    .named = true,
  },
  [sym_command_declare] = {
    .visible = true,
    .named = true,
  },
  [sym_command_relation] = {
    .visible = true,
    .named = true,
  },
  [sym_command_ruleset] = {
    .visible = true,
    .named = true,
  },
  [sym_command_rule] = {
    .visible = true,
    .named = true,
  },
  [sym_command_rewrite] = {
    .visible = true,
    .named = true,
  },
  [sym_command_birewrite] = {
    .visible = true,
    .named = true,
  },
  [sym_command_run] = {
    .visible = true,
    .named = true,
  },
  [sym_command_simplify] = {
    .visible = true,
    .named = true,
  },
  [sym_command_calc] = {
    .visible = true,
    .named = true,
  },
  [sym_command_query_extract] = {
    .visible = true,
    .named = true,
  },
  [sym_command_check] = {
    .visible = true,
    .named = true,
  },
  [sym_command_check_proof] = {
    .visible = true,
    .named = true,
  },
  [sym_command_run_schedule] = {
    .visible = true,
    .named = true,
  },
  [sym_command_print_stats] = {
    .visible = true,
    .named = true,
  },
  [sym_command_push] = {
    .visible = true,
    .named = true,
  },
  [sym_command_pop] = {
    .visible = true,
    .named = true,
  },
  [sym_command_print_function] = {
    .visible = true,
    .named = true,
  },
  [sym_command_print_size] = {
    .visible = true,
    .named = true,
  },
  [sym_command_input] = {
    .visible = true,
    .named = true,
  },
  [sym_command_output] = {
    .visible = true,
    .named = true,
  },
  [sym_command_fail] = {
    .visible = true,
    .named = true,
  },
  [sym_command_include] = {
    .visible = true,
    .named = true,
  },
  [sym_command_action] = {
    .visible = true,
    .named = true,
  },
  [sym__schedule] = {
    .visible = false,
    .named = true,
  },
  [sym_schedule_saturate] = {
    .visible = true,
    .named = true,
  },
  [sym_schedule_seq] = {
    .visible = true,
    .named = true,
  },
  [sym_schedule_repeat] = {
    .visible = true,
    .named = true,
  },
  [sym_schedule_run] = {
    .visible = true,
    .named = true,
  },
  [sym_schedule_ident] = {
    .visible = true,
    .named = true,
  },
  [sym__action] = {
    .visible = false,
    .named = true,
  },
  [sym_action_let] = {
    .visible = true,
    .named = true,
  },
  [sym_action_set] = {
    .visible = true,
    .named = true,
  },
  [sym_action_delete] = {
    .visible = true,
    .named = true,
  },
  [sym_action_subsume] = {
    .visible = true,
    .named = true,
  },
  [sym_action_union] = {
    .visible = true,
    .named = true,
  },
  [sym_action_panic] = {
    .visible = true,
    .named = true,
  },
  [sym_action_extract] = {
    .visible = true,
    .named = true,
  },
  [sym_action_call] = {
    .visible = true,
    .named = true,
  },
  [sym__fact] = {
    .visible = false,
    .named = true,
  },
  [sym_fact_eq] = {
    .visible = true,
    .named = true,
  },
  [sym_fact_call] = {
    .visible = true,
    .named = true,
  },
  [sym_schema] = {
    .visible = true,
    .named = true,
  },
  [sym__expr] = {
    .visible = false,
    .named = true,
  },
  [sym_expr_ident] = {
    .visible = true,
    .named = true,
  },
  [sym_expr_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_expr_call] = {
    .visible = true,
    .named = true,
  },
  [sym__literal] = {
    .visible = false,
    .named = true,
  },
  [sym_literal_unit] = {
    .visible = true,
    .named = true,
  },
  [sym_literal_float] = {
    .visible = true,
    .named = true,
  },
  [sym_literal_bool] = {
    .visible = true,
    .named = true,
  },
  [sym_variant] = {
    .visible = true,
    .named = true,
  },
  [sym__type] = {
    .visible = false,
    .named = true,
  },
  [sym_type_ident] = {
    .visible = true,
    .named = true,
  },
  [sym__sort] = {
    .visible = false,
    .named = true,
  },
  [sym_sort_ident] = {
    .visible = true,
    .named = true,
  },
  [sym_ident] = {
    .visible = true,
    .named = true,
  },
  [sym__actions] = {
    .visible = false,
    .named = true,
  },
  [sym__types] = {
    .visible = false,
    .named = true,
  },
  [sym__facts] = {
    .visible = false,
    .named = true,
  },
  [sym__sorts] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_program_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_command_datatype_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_command_sort_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_command_run_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_command_run_schedule_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_variant_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__actions_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__sorts_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_function_def = 1,
  field_function_use = 2,
  field_option = 3,
  field_ruleset_use = 4,
  field_type_def = 5,
  field_type_use = 6,
  field_variable_def = 7,
  field_variable_use = 8,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_function_def] = "function_def",
  [field_function_use] = "function_use",
  [field_option] = "option",
  [field_ruleset_use] = "ruleset_use",
  [field_type_def] = "type_def",
  [field_type_use] = "type_use",
  [field_variable_def] = "variable_def",
  [field_variable_use] = "variable_use",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 1},
  [5] = {.index = 4, .length = 1},
  [6] = {.index = 5, .length = 1},
  [7] = {.index = 6, .length = 1},
  [8] = {.index = 7, .length = 1},
  [9] = {.index = 8, .length = 2},
  [10] = {.index = 10, .length = 1},
  [11] = {.index = 11, .length = 1},
  [12] = {.index = 12, .length = 1},
  [13] = {.index = 13, .length = 1},
  [14] = {.index = 14, .length = 2},
  [15] = {.index = 16, .length = 1},
  [16] = {.index = 17, .length = 1},
  [17] = {.index = 18, .length = 1},
  [18] = {.index = 19, .length = 1},
  [19] = {.index = 20, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_variable_use, 0},
  [1] =
    {field_ruleset_use, 0},
  [2] =
    {field_function_use, 1},
  [3] =
    {field_type_def, 2},
  [4] =
    {field_function_use, 2},
  [5] =
    {field_option, 2},
  [6] =
    {field_type_use, 0},
  [7] =
    {field_function_def, 2},
  [8] =
    {field_type_use, 3},
    {field_variable_def, 2},
  [10] =
    {field_ruleset_use, 2},
  [11] =
    {field_variable_def, 2},
  [12] =
    {field_function_def, 1},
  [13] =
    {field_function_use, 3},
  [14] =
    {field_type_def, 2},
    {field_type_use, 4},
  [16] =
    {field_ruleset_use, 5},
  [17] =
    {field_type_use, 1},
  [18] =
    {field_ruleset_use, 6},
  [19] =
    {field_ruleset_use, 7},
  [20] =
    {field_ruleset_use, 8},
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
  [55] = 55,
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
  [67] = 67,
  [68] = 68,
  [69] = 64,
  [70] = 70,
  [71] = 71,
  [72] = 70,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 71,
  [78] = 74,
  [79] = 68,
  [80] = 67,
  [81] = 81,
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
  [111] = 106,
  [112] = 112,
  [113] = 113,
  [114] = 107,
  [115] = 115,
  [116] = 102,
  [117] = 109,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 10,
  [130] = 130,
  [131] = 130,
  [132] = 82,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 88,
  [137] = 85,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 89,
  [143] = 143,
  [144] = 91,
  [145] = 92,
  [146] = 146,
  [147] = 90,
  [148] = 87,
  [149] = 149,
  [150] = 93,
  [151] = 83,
  [152] = 84,
  [153] = 81,
  [154] = 86,
  [155] = 139,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
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
  [236] = 236,
  [237] = 237,
  [238] = 238,
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
  [253] = 253,
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
  [265] = 265,
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
  [279] = 278,
  [280] = 280,
  [281] = 281,
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 285,
  [286] = 286,
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 291,
  [292] = 292,
  [293] = 293,
  [294] = 294,
  [295] = 295,
  [296] = 296,
  [297] = 297,
  [298] = 298,
  [299] = 299,
  [300] = 300,
  [301] = 301,
  [302] = 302,
  [303] = 303,
  [304] = 304,
  [305] = 305,
  [306] = 306,
  [307] = 307,
  [308] = 308,
  [309] = 309,
  [310] = 310,
  [311] = 311,
  [312] = 312,
  [313] = 313,
  [314] = 314,
  [315] = 315,
  [316] = 316,
  [317] = 317,
  [318] = 318,
  [319] = 319,
  [320] = 320,
  [321] = 321,
  [322] = 322,
  [323] = 323,
  [324] = 324,
  [325] = 325,
  [326] = 326,
  [327] = 327,
  [328] = 328,
  [329] = 329,
  [330] = 330,
  [331] = 331,
  [332] = 332,
  [333] = 333,
  [334] = 334,
  [335] = 335,
  [336] = 336,
  [337] = 337,
  [338] = 338,
  [339] = 339,
  [340] = 340,
  [341] = 341,
  [342] = 342,
  [343] = 343,
  [344] = 344,
  [345] = 345,
  [346] = 346,
  [347] = 347,
  [348] = 348,
  [349] = 349,
  [350] = 350,
  [351] = 351,
  [352] = 352,
  [353] = 353,
  [354] = 354,
  [355] = 355,
  [356] = 356,
  [357] = 357,
  [358] = 358,
  [359] = 359,
  [360] = 360,
  [361] = 361,
  [362] = 362,
  [363] = 363,
  [364] = 364,
  [365] = 365,
  [366] = 366,
  [367] = 367,
  [368] = 368,
  [369] = 369,
  [370] = 351,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(246);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '(') ADVANCE(249);
      if (lookahead == ')') ADVANCE(252);
      if (lookahead == '-') ADVANCE(514);
      if (lookahead == ':') ADVANCE(38);
      if (lookahead == ';') ADVANCE(248);
      if (lookahead == '=') ADVANCE(333);
      if (lookahead == 'N') ADVANCE(14);
      if (lookahead == 'b') ADVANCE(100);
      if (lookahead == 'c') ADVANCE(15);
      if (lookahead == 'd') ADVANCE(16);
      if (lookahead == 'e') ADVANCE(236);
      if (lookahead == 'f') ADVANCE(17);
      if (lookahead == 'i') ADVANCE(132);
      if (lookahead == 'l') ADVANCE(76);
      if (lookahead == 'o') ADVANCE(223);
      if (lookahead == 'p') ADVANCE(28);
      if (lookahead == 'q') ADVANCE(230);
      if (lookahead == 'r') ADVANCE(53);
      if (lookahead == 's') ADVANCE(21);
      if (lookahead == 't') ADVANCE(178);
      if (lookahead == 'u') ADVANCE(143);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(334);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '_' ||
          lookahead == '|') ADVANCE(516);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(347);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '(') ADVANCE(249);
      if (lookahead == ')') ADVANCE(252);
      if (lookahead == ':') ADVANCE(39);
      if (lookahead == ';') ADVANCE(248);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(247);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '_' ||
          lookahead == '|') ADVANCE(516);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 3:
      if (lookahead == '+') ADVANCE(6);
      if (lookahead == '-') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      END_STATE();
    case 4:
      if (lookahead == '-') ADVANCE(93);
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(515);
      if (lookahead == ';') ADVANCE(248);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(335);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '_' ||
          lookahead == '|') ADVANCE(516);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 6:
      if (lookahead == '-') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(88);
      END_STATE();
    case 8:
      if (lookahead == ';') ADVANCE(248);
      if (lookahead == '=') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(247);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '_' ||
          lookahead == '|') ADVANCE(516);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 9:
      if (lookahead == ';') ADVANCE(248);
      if (lookahead == 'b') ADVANCE(407);
      if (lookahead == 'c') ADVANCE(351);
      if (lookahead == 'd') ADVANCE(352);
      if (lookahead == 'e') ADVANCE(507);
      if (lookahead == 'f') ADVANCE(354);
      if (lookahead == 'i') ADVANCE(433);
      if (lookahead == 'l') ADVANCE(393);
      if (lookahead == 'o') ADVANCE(500);
      if (lookahead == 'p') ADVANCE(359);
      if (lookahead == 'q') ADVANCE(499);
      if (lookahead == 'r') ADVANCE(377);
      if (lookahead == 's') ADVANCE(395);
      if (lookahead == 'u') ADVANCE(441);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(247);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '_' ||
          lookahead == '|') ADVANCE(516);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 10:
      if (lookahead == ';') ADVANCE(248);
      if (lookahead == 'd') ADVANCE(396);
      if (lookahead == 'e') ADVANCE(507);
      if (lookahead == 'l') ADVANCE(393);
      if (lookahead == 'p') ADVANCE(360);
      if (lookahead == 's') ADVANCE(399);
      if (lookahead == 'u') ADVANCE(441);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(247);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '_' ||
          lookahead == '|') ADVANCE(516);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 11:
      if (lookahead == ';') ADVANCE(248);
      if (lookahead == 'r') ADVANCE(85);
      if (lookahead == 's') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(247);
      END_STATE();
    case 12:
      if (lookahead == 'N') ADVANCE(336);
      END_STATE();
    case 13:
      if (lookahead == '_') ADVANCE(131);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(12);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(115);
      if (lookahead == 'h') ADVANCE(74);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(205);
      if (lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(103);
      if (lookahead == 'u') ADVANCE(144);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(128);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(36);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(170);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(206);
      if (lookahead == 'e') ADVANCE(166);
      if (lookahead == 'i') ADVANCE(127);
      if (lookahead == 'o') ADVANCE(172);
      if (lookahead == 'u') ADVANCE(35);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(206);
      if (lookahead == 'e') ADVANCE(165);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(49);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(225);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(204);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(197);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(209);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(145);
      if (lookahead == 'o') ADVANCE(158);
      if (lookahead == 'r') ADVANCE(105);
      if (lookahead == 'u') ADVANCE(184);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(176);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(46);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(147);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(47);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(213);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(217);
      END_STATE();
    case 35:
      if (lookahead == 'b') ADVANCE(186);
      END_STATE();
    case 36:
      if (lookahead == 'b') ADVANCE(125);
      END_STATE();
    case 37:
      if (lookahead == 'b') ADVANCE(190);
      END_STATE();
    case 38:
      if (lookahead == 'c') ADVANCE(149);
      if (lookahead == 'd') ADVANCE(73);
      if (lookahead == 'm') ADVANCE(77);
      if (lookahead == 'n') ADVANCE(18);
      if (lookahead == 'o') ADVANCE(134);
      if (lookahead == 'r') ADVANCE(222);
      if (lookahead == 's') ADVANCE(234);
      if (lookahead == 'u') ADVANCE(135);
      if (lookahead == 'v') ADVANCE(20);
      if (lookahead == 'w') ADVANCE(97);
      END_STATE();
    case 39:
      if (lookahead == 'c') ADVANCE(149);
      if (lookahead == 'd') ADVANCE(73);
      if (lookahead == 'm') ADVANCE(77);
      if (lookahead == 'o') ADVANCE(134);
      if (lookahead == 'u') ADVANCE(135);
      END_STATE();
    case 40:
      if (lookahead == 'c') ADVANCE(286);
      END_STATE();
    case 41:
      if (lookahead == 'c') ADVANCE(114);
      END_STATE();
    case 42:
      if (lookahead == 'c') ADVANCE(329);
      END_STATE();
    case 43:
      if (lookahead == 'c') ADVANCE(118);
      if (lookahead == 'l') ADVANCE(81);
      END_STATE();
    case 44:
      if (lookahead == 'c') ADVANCE(119);
      if (lookahead == 'f') ADVANCE(340);
      if (lookahead == 'p') ADVANCE(227);
      END_STATE();
    case 45:
      if (lookahead == 'c') ADVANCE(215);
      END_STATE();
    case 46:
      if (lookahead == 'c') ADVANCE(198);
      END_STATE();
    case 47:
      if (lookahead == 'c') ADVANCE(202);
      END_STATE();
    case 48:
      if (lookahead == 'c') ADVANCE(98);
      END_STATE();
    case 49:
      if (lookahead == 'c') ADVANCE(210);
      END_STATE();
    case 50:
      if (lookahead == 'c') ADVANCE(219);
      END_STATE();
    case 51:
      if (lookahead == 'd') ADVANCE(62);
      END_STATE();
    case 52:
      if (lookahead == 'd') ADVANCE(229);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(126);
      if (lookahead == 'u') ADVANCE(121);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(235);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(270);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(343);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(273);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(345);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(262);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(323);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(264);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(313);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(274);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(325);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(276);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(253);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(315);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(261);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(278);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(305);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(295);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(260);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(92);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(191);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(167);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(189);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(168);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(136);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(211);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(199);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(201);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(177);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(160);
      if (lookahead == 'u') ADVANCE(142);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(237);
      if (lookahead == 't') ADVANCE(106);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(238);
      END_STATE();
    case 89:
      if (lookahead == 'f') ADVANCE(342);
      END_STATE();
    case 90:
      if (lookahead == 'f') ADVANCE(293);
      END_STATE();
    case 91:
      if (lookahead == 'f') ADVANCE(239);
      END_STATE();
    case 92:
      if (lookahead == 'f') ADVANCE(24);
      END_STATE();
    case 93:
      if (lookahead == 'f') ADVANCE(233);
      if (lookahead == 's') ADVANCE(99);
      END_STATE();
    case 94:
      if (lookahead == 'g') ADVANCE(59);
      END_STATE();
    case 95:
      if (lookahead == 'g') ADVANCE(68);
      END_STATE();
    case 96:
      if (lookahead == 'h') ADVANCE(299);
      END_STATE();
    case 97:
      if (lookahead == 'h') ADVANCE(80);
      END_STATE();
    case 98:
      if (lookahead == 'h') ADVANCE(75);
      END_STATE();
    case 99:
      if (lookahead == 'i') ADVANCE(242);
      if (lookahead == 't') ADVANCE(27);
      END_STATE();
    case 100:
      if (lookahead == 'i') ADVANCE(171);
      END_STATE();
    case 101:
      if (lookahead == 'i') ADVANCE(153);
      END_STATE();
    case 102:
      if (lookahead == 'i') ADVANCE(91);
      END_STATE();
    case 103:
      if (lookahead == 'i') ADVANCE(116);
      if (lookahead == 'l') ADVANCE(188);
      END_STATE();
    case 104:
      if (lookahead == 'i') ADVANCE(42);
      END_STATE();
    case 105:
      if (lookahead == 'i') ADVANCE(146);
      END_STATE();
    case 106:
      if (lookahead == 'i') ADVANCE(117);
      END_STATE();
    case 107:
      if (lookahead == 'i') ADVANCE(31);
      END_STATE();
    case 108:
      if (lookahead == 'i') ADVANCE(154);
      END_STATE();
    case 109:
      if (lookahead == 'i') ADVANCE(212);
      END_STATE();
    case 110:
      if (lookahead == 'i') ADVANCE(155);
      END_STATE();
    case 111:
      if (lookahead == 'i') ADVANCE(156);
      END_STATE();
    case 112:
      if (lookahead == 'i') ADVANCE(214);
      END_STATE();
    case 113:
      if (lookahead == 'i') ADVANCE(157);
      END_STATE();
    case 114:
      if (lookahead == 'k') ADVANCE(291);
      END_STATE();
    case 115:
      if (lookahead == 'l') ADVANCE(40);
      END_STATE();
    case 116:
      if (lookahead == 'l') ADVANCE(311);
      END_STATE();
    case 117:
      if (lookahead == 'l') ADVANCE(283);
      END_STATE();
    case 118:
      if (lookahead == 'l') ADVANCE(29);
      END_STATE();
    case 119:
      if (lookahead == 'l') ADVANCE(221);
      END_STATE();
    case 120:
      if (lookahead == 'l') ADVANCE(102);
      END_STATE();
    case 121:
      if (lookahead == 'l') ADVANCE(55);
      if (lookahead == 'n') ADVANCE(282);
      END_STATE();
    case 122:
      if (lookahead == 'l') ADVANCE(78);
      END_STATE();
    case 123:
      if (lookahead == 'l') ADVANCE(200);
      END_STATE();
    case 124:
      if (lookahead == 'l') ADVANCE(71);
      END_STATE();
    case 125:
      if (lookahead == 'l') ADVANCE(72);
      END_STATE();
    case 126:
      if (lookahead == 'l') ADVANCE(34);
      if (lookahead == 'p') ADVANCE(86);
      if (lookahead == 'w') ADVANCE(174);
      END_STATE();
    case 127:
      if (lookahead == 'm') ADVANCE(159);
      END_STATE();
    case 128:
      if (lookahead == 'm') ADVANCE(57);
      END_STATE();
    case 129:
      if (lookahead == 'm') ADVANCE(64);
      END_STATE();
    case 130:
      if (lookahead == 'm') ADVANCE(65);
      END_STATE();
    case 131:
      if (lookahead == 'm') ADVANCE(84);
      END_STATE();
    case 132:
      if (lookahead == 'n') ADVANCE(44);
      END_STATE();
    case 133:
      if (lookahead == 'n') ADVANCE(89);
      END_STATE();
    case 134:
      if (lookahead == 'n') ADVANCE(13);
      END_STATE();
    case 135:
      if (lookahead == 'n') ADVANCE(87);
      END_STATE();
    case 136:
      if (lookahead == 'n') ADVANCE(277);
      END_STATE();
    case 137:
      if (lookahead == 'n') ADVANCE(327);
      END_STATE();
    case 138:
      if (lookahead == 'n') ADVANCE(257);
      END_STATE();
    case 139:
      if (lookahead == 'n') ADVANCE(266);
      END_STATE();
    case 140:
      if (lookahead == 'n') ADVANCE(250);
      END_STATE();
    case 141:
      if (lookahead == 'n') ADVANCE(303);
      END_STATE();
    case 142:
      if (lookahead == 'n') ADVANCE(280);
      END_STATE();
    case 143:
      if (lookahead == 'n') ADVANCE(101);
      END_STATE();
    case 144:
      if (lookahead == 'n') ADVANCE(45);
      END_STATE();
    case 145:
      if (lookahead == 'n') ADVANCE(104);
      END_STATE();
    case 146:
      if (lookahead == 'n') ADVANCE(195);
      END_STATE();
    case 147:
      if (lookahead == 'n') ADVANCE(208);
      END_STATE();
    case 148:
      if (lookahead == 'n') ADVANCE(50);
      END_STATE();
    case 149:
      if (lookahead == 'o') ADVANCE(187);
      END_STATE();
    case 150:
      if (lookahead == 'o') ADVANCE(164);
      END_STATE();
    case 151:
      if (lookahead == 'o') ADVANCE(90);
      END_STATE();
    case 152:
      if (lookahead == 'o') ADVANCE(151);
      END_STATE();
    case 153:
      if (lookahead == 'o') ADVANCE(137);
      END_STATE();
    case 154:
      if (lookahead == 'o') ADVANCE(138);
      END_STATE();
    case 155:
      if (lookahead == 'o') ADVANCE(139);
      END_STATE();
    case 156:
      if (lookahead == 'o') ADVANCE(140);
      END_STATE();
    case 157:
      if (lookahead == 'o') ADVANCE(141);
      END_STATE();
    case 158:
      if (lookahead == 'p') ADVANCE(301);
      END_STATE();
    case 159:
      if (lookahead == 'p') ADVANCE(120);
      END_STATE();
    case 160:
      if (lookahead == 'p') ADVANCE(86);
      END_STATE();
    case 161:
      if (lookahead == 'p') ADVANCE(169);
      END_STATE();
    case 162:
      if (lookahead == 'p') ADVANCE(66);
      END_STATE();
    case 163:
      if (lookahead == 'p') ADVANCE(228);
      END_STATE();
    case 164:
      if (lookahead == 'p') ADVANCE(218);
      END_STATE();
    case 165:
      if (lookahead == 'q') ADVANCE(316);
      END_STATE();
    case 166:
      if (lookahead == 'q') ADVANCE(316);
      if (lookahead == 't') ADVANCE(321);
      END_STATE();
    case 167:
      if (lookahead == 'r') ADVANCE(94);
      END_STATE();
    case 168:
      if (lookahead == 'r') ADVANCE(240);
      END_STATE();
    case 169:
      if (lookahead == 'r') ADVANCE(152);
      END_STATE();
    case 170:
      if (lookahead == 'r') ADVANCE(107);
      END_STATE();
    case 171:
      if (lookahead == 'r') ADVANCE(54);
      END_STATE();
    case 172:
      if (lookahead == 'r') ADVANCE(192);
      END_STATE();
    case 173:
      if (lookahead == 'r') ADVANCE(30);
      END_STATE();
    case 174:
      if (lookahead == 'r') ADVANCE(109);
      END_STATE();
    case 175:
      if (lookahead == 'r') ADVANCE(23);
      END_STATE();
    case 176:
      if (lookahead == 'r') ADVANCE(61);
      END_STATE();
    case 177:
      if (lookahead == 'r') ADVANCE(95);
      END_STATE();
    case 178:
      if (lookahead == 'r') ADVANCE(226);
      END_STATE();
    case 179:
      if (lookahead == 'r') ADVANCE(33);
      END_STATE();
    case 180:
      if (lookahead == 'r') ADVANCE(32);
      END_STATE();
    case 181:
      if (lookahead == 'r') ADVANCE(112);
      END_STATE();
    case 182:
      if (lookahead == 's') ADVANCE(290);
      END_STATE();
    case 183:
      if (lookahead == 's') ADVANCE(297);
      END_STATE();
    case 184:
      if (lookahead == 's') ADVANCE(96);
      END_STATE();
    case 185:
      if (lookahead == 's') ADVANCE(48);
      END_STATE();
    case 186:
      if (lookahead == 's') ADVANCE(231);
      END_STATE();
    case 187:
      if (lookahead == 's') ADVANCE(193);
      END_STATE();
    case 188:
      if (lookahead == 's') ADVANCE(58);
      END_STATE();
    case 189:
      if (lookahead == 's') ADVANCE(83);
      END_STATE();
    case 190:
      if (lookahead == 's') ADVANCE(232);
      END_STATE();
    case 191:
      if (lookahead == 't') ADVANCE(318);
      END_STATE();
    case 192:
      if (lookahead == 't') ADVANCE(255);
      END_STATE();
    case 193:
      if (lookahead == 't') ADVANCE(259);
      END_STATE();
    case 194:
      if (lookahead == 't') ADVANCE(307);
      END_STATE();
    case 195:
      if (lookahead == 't') ADVANCE(4);
      END_STATE();
    case 196:
      if (lookahead == 't') ADVANCE(309);
      END_STATE();
    case 197:
      if (lookahead == 't') ADVANCE(317);
      END_STATE();
    case 198:
      if (lookahead == 't') ADVANCE(331);
      END_STATE();
    case 199:
      if (lookahead == 't') ADVANCE(268);
      END_STATE();
    case 200:
      if (lookahead == 't') ADVANCE(263);
      END_STATE();
    case 201:
      if (lookahead == 't') ADVANCE(272);
      END_STATE();
    case 202:
      if (lookahead == 't') ADVANCE(288);
      END_STATE();
    case 203:
      if (lookahead == 't') ADVANCE(163);
      END_STATE();
    case 204:
      if (lookahead == 't') ADVANCE(241);
      END_STATE();
    case 205:
      if (lookahead == 't') ADVANCE(25);
      END_STATE();
    case 206:
      if (lookahead == 't') ADVANCE(224);
      END_STATE();
    case 207:
      if (lookahead == 't') ADVANCE(173);
      END_STATE();
    case 208:
      if (lookahead == 't') ADVANCE(182);
      END_STATE();
    case 209:
      if (lookahead == 't') ADVANCE(183);
      END_STATE();
    case 210:
      if (lookahead == 't') ADVANCE(19);
      END_STATE();
    case 211:
      if (lookahead == 't') ADVANCE(60);
      END_STATE();
    case 212:
      if (lookahead == 't') ADVANCE(63);
      END_STATE();
    case 213:
      if (lookahead == 't') ADVANCE(67);
      END_STATE();
    case 214:
      if (lookahead == 't') ADVANCE(69);
      END_STATE();
    case 215:
      if (lookahead == 't') ADVANCE(108);
      END_STATE();
    case 216:
      if (lookahead == 't') ADVANCE(175);
      END_STATE();
    case 217:
      if (lookahead == 't') ADVANCE(110);
      END_STATE();
    case 218:
      if (lookahead == 't') ADVANCE(111);
      END_STATE();
    case 219:
      if (lookahead == 't') ADVANCE(113);
      END_STATE();
    case 220:
      if (lookahead == 't') ADVANCE(180);
      END_STATE();
    case 221:
      if (lookahead == 'u') ADVANCE(51);
      END_STATE();
    case 222:
      if (lookahead == 'u') ADVANCE(122);
      END_STATE();
    case 223:
      if (lookahead == 'u') ADVANCE(203);
      END_STATE();
    case 224:
      if (lookahead == 'u') ADVANCE(179);
      END_STATE();
    case 225:
      if (lookahead == 'u') ADVANCE(123);
      END_STATE();
    case 226:
      if (lookahead == 'u') ADVANCE(56);
      END_STATE();
    case 227:
      if (lookahead == 'u') ADVANCE(194);
      END_STATE();
    case 228:
      if (lookahead == 'u') ADVANCE(196);
      END_STATE();
    case 229:
      if (lookahead == 'u') ADVANCE(124);
      END_STATE();
    case 230:
      if (lookahead == 'u') ADVANCE(79);
      END_STATE();
    case 231:
      if (lookahead == 'u') ADVANCE(129);
      END_STATE();
    case 232:
      if (lookahead == 'u') ADVANCE(130);
      END_STATE();
    case 233:
      if (lookahead == 'u') ADVANCE(148);
      END_STATE();
    case 234:
      if (lookahead == 'u') ADVANCE(37);
      END_STATE();
    case 235:
      if (lookahead == 'w') ADVANCE(181);
      END_STATE();
    case 236:
      if (lookahead == 'x') ADVANCE(207);
      END_STATE();
    case 237:
      if (lookahead == 'x') ADVANCE(216);
      END_STATE();
    case 238:
      if (lookahead == 'x') ADVANCE(220);
      END_STATE();
    case 239:
      if (lookahead == 'y') ADVANCE(284);
      END_STATE();
    case 240:
      if (lookahead == 'y') ADVANCE(7);
      END_STATE();
    case 241:
      if (lookahead == 'y') ADVANCE(162);
      END_STATE();
    case 242:
      if (lookahead == 'z') ADVANCE(70);
      END_STATE();
    case 243:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(338);
      END_STATE();
    case 244:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      END_STATE();
    case 245:
      if (eof) ADVANCE(246);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '(') ADVANCE(249);
      if (lookahead == ')') ADVANCE(252);
      if (lookahead == '-') ADVANCE(514);
      if (lookahead == ':') ADVANCE(38);
      if (lookahead == ';') ADVANCE(248);
      if (lookahead == 'N') ADVANCE(353);
      if (lookahead == 'f') ADVANCE(355);
      if (lookahead == 'i') ADVANCE(440);
      if (lookahead == 't') ADVANCE(466);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(334);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '_' ||
          lookahead == '|') ADVANCE(516);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym__whitespace);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(248);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_set_DASHoption);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_set_DASHoption);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_datatype);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_datatype);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_sort);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_sort);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_function);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_function);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_COLONcost);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_COLONunextractable);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_COLONon_merge);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_COLONmerge);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_COLONdefault);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_declare);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_declare);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_relation);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_relation);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_ruleset);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_ruleset);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_rule);
      if (lookahead == 's') ADVANCE(82);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_rule);
      if (lookahead == 's') ADVANCE(398);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_COLONruleset);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_COLONname);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_rewrite);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_rewrite);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_COLONsubsume);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_COLONwhen);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_birewrite);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_birewrite);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_run);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_run);
      if (lookahead == '-') ADVANCE(472);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_run);
      if (lookahead == '-') ADVANCE(185);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_COLONuntil);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_simplify);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_simplify);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_calc);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_calc);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_query_DASHextract);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_query_DASHextract);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_COLONvariants);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_check);
      if (lookahead == '-') ADVANCE(161);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_check);
      if (lookahead == '-') ADVANCE(455);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_check_DASHproof);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_check_DASHproof);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_run_DASHschedule);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_run_DASHschedule);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_print_DASHstats);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_print_DASHstats);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_push);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_push);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_pop);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_pop);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_print_DASHfunction);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_print_DASHfunction);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_print_DASHsize);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_print_DASHsize);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_input);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_input);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_output);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_output);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_fail);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_fail);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_include);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_saturate);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_seq);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_repeat);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_let);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_set);
      if (lookahead == '-') ADVANCE(446);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_set);
      if (lookahead == '-') ADVANCE(150);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_set);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_delete);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_delete);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_subsume);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_subsume);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_union);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_union);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_panic);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_panic);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_extract);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_extract);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '_' ||
          lookahead == '|') ADVANCE(516);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_literal_int);
      if (lookahead == '.') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(334);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_literal_int);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(335);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_NaN);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_NaN);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym_literal_float_token1);
      if (lookahead == 'e') ADVANCE(3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(338);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym_literal_float_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_inf);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_inf);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_DASHinf);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_literal_string);
      if (lookahead == '"') ADVANCE(1);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == '-') ADVANCE(404);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == '-') ADVANCE(400);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'N') ADVANCE(337);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'a') ADVANCE(421);
      if (lookahead == 'h') ADVANCE(391);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'a') ADVANCE(474);
      if (lookahead == 'e') ADVANCE(368);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'a') ADVANCE(350);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'a') ADVANCE(411);
      if (lookahead == 'u') ADVANCE(439);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'a') ADVANCE(426);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'a') ADVANCE(486);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'a') ADVANCE(488);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'a') ADVANCE(465);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'a') ADVANCE(442);
      if (lookahead == 'o') ADVANCE(453);
      if (lookahead == 'r') ADVANCE(412);
      if (lookahead == 'u') ADVANCE(469);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'a') ADVANCE(442);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'a') ADVANCE(372);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'a') ADVANCE(373);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'a') ADVANCE(493);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'b') ADVANCE(471);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'c') ADVANCE(287);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'c') ADVANCE(420);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'c') ADVANCE(330);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'c') ADVANCE(423);
      if (lookahead == 'l') ADVANCE(397);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'c') ADVANCE(406);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'c') ADVANCE(424);
      if (lookahead == 'p') ADVANCE(502);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'c') ADVANCE(492);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'c') ADVANCE(481);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'c') ADVANCE(483);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'c') ADVANCE(495);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'd') ADVANCE(501);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'd') ADVANCE(382);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'e') ADVANCE(430);
      if (lookahead == 'u') ADVANCE(425);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'e') ADVANCE(506);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'e') ADVANCE(271);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'e') ADVANCE(324);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'e') ADVANCE(265);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'e') ADVANCE(314);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'e') ADVANCE(275);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'e') ADVANCE(326);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'e') ADVANCE(254);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'e') ADVANCE(279);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'e') ADVANCE(306);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'e') ADVANCE(296);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'e') ADVANCE(344);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'e') ADVANCE(346);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'e') ADVANCE(366);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'e') ADVANCE(375);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'e') ADVANCE(475);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'e') ADVANCE(459);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'e') ADVANCE(476);
      if (lookahead == 'i') ADVANCE(431);
      if (lookahead == 'o') ADVANCE(464);
      if (lookahead == 'u') ADVANCE(364);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'e') ADVANCE(429);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'e') ADVANCE(489);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'e') ADVANCE(482);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'e') ADVANCE(484);
      if (lookahead == 'u') ADVANCE(364);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'e') ADVANCE(508);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'f') ADVANCE(294);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'f') ADVANCE(341);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'f') ADVANCE(509);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'f') ADVANCE(505);
      if (lookahead == 's') ADVANCE(410);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'h') ADVANCE(300);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'h') ADVANCE(392);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'i') ADVANCE(462);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'i') ADVANCE(448);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'i') ADVANCE(403);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'i') ADVANCE(512);
      if (lookahead == 't') ADVANCE(357);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'i') ADVANCE(422);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'i') ADVANCE(443);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'i') ADVANCE(367);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'i') ADVANCE(490);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'i') ADVANCE(491);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'i') ADVANCE(449);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'i') ADVANCE(450);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'i') ADVANCE(451);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'i') ADVANCE(452);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'k') ADVANCE(292);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'l') ADVANCE(365);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'l') ADVANCE(312);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'l') ADVANCE(358);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'l') ADVANCE(497);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'l') ADVANCE(379);
      if (lookahead == 'n') ADVANCE(281);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'l') ADVANCE(473);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'l') ADVANCE(409);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'l') ADVANCE(388);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'l') ADVANCE(397);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'l') ADVANCE(363);
      if (lookahead == 'w') ADVANCE(463);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'm') ADVANCE(454);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'm') ADVANCE(384);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'n') ADVANCE(370);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'n') ADVANCE(328);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'n') ADVANCE(258);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'n') ADVANCE(267);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'n') ADVANCE(251);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'n') ADVANCE(304);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'n') ADVANCE(371);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'n') ADVANCE(402);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'n') ADVANCE(408);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'n') ADVANCE(413);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'n') ADVANCE(479);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'n') ADVANCE(374);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'o') ADVANCE(401);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'o') ADVANCE(458);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'o') ADVANCE(445);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'o') ADVANCE(434);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'o') ADVANCE(435);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'o') ADVANCE(436);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'o') ADVANCE(437);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'o') ADVANCE(438);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'p') ADVANCE(302);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'p') ADVANCE(427);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'p') ADVANCE(461);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'p') ADVANCE(385);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'p') ADVANCE(503);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'p') ADVANCE(494);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'r') ADVANCE(510);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'r') ADVANCE(361);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'r') ADVANCE(447);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'r') ADVANCE(378);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'r') ADVANCE(414);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'r') ADVANCE(477);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'r') ADVANCE(381);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'r') ADVANCE(504);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'r') ADVANCE(415);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'r') ADVANCE(362);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 's') ADVANCE(405);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 's') ADVANCE(298);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 's') ADVANCE(498);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 's') ADVANCE(369);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 's') ADVANCE(390);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 't') ADVANCE(356);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 't') ADVANCE(319);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 't') ADVANCE(320);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 't') ADVANCE(256);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 't') ADVANCE(308);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 't') ADVANCE(348);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 't') ADVANCE(310);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 't') ADVANCE(332);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 't') ADVANCE(269);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 't') ADVANCE(289);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 't') ADVANCE(322);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 't') ADVANCE(457);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 't') ADVANCE(511);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 't') ADVANCE(460);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 't') ADVANCE(470);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 't') ADVANCE(380);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 't') ADVANCE(383);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 't') ADVANCE(386);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 't') ADVANCE(416);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 't') ADVANCE(417);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 't') ADVANCE(418);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 't') ADVANCE(419);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 't') ADVANCE(468);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'u') ADVANCE(376);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'u') ADVANCE(432);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'u') ADVANCE(394);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'u') ADVANCE(485);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'u') ADVANCE(428);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'u') ADVANCE(478);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'u') ADVANCE(480);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'u') ADVANCE(389);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'u') ADVANCE(444);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'w') ADVANCE(467);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'x') ADVANCE(487);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'x') ADVANCE(496);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'y') ADVANCE(285);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'y') ADVANCE(349);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'y') ADVANCE(456);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == 'z') ADVANCE(387);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(513);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(aux_sym_ident_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(aux_sym_ident_token2);
      if (lookahead == 'i') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(334);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '_' ||
          lookahead == '|') ADVANCE(516);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(aux_sym_ident_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(335);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '_' ||
          lookahead == '|') ADVANCE(516);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(aux_sym_ident_token2);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '_' ||
          lookahead == '|') ADVANCE(516);
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
  [5] = {.lex_state = 9},
  [6] = {.lex_state = 245},
  [7] = {.lex_state = 245},
  [8] = {.lex_state = 245},
  [9] = {.lex_state = 245},
  [10] = {.lex_state = 245},
  [11] = {.lex_state = 245},
  [12] = {.lex_state = 245},
  [13] = {.lex_state = 245},
  [14] = {.lex_state = 245},
  [15] = {.lex_state = 245},
  [16] = {.lex_state = 245},
  [17] = {.lex_state = 245},
  [18] = {.lex_state = 245},
  [19] = {.lex_state = 245},
  [20] = {.lex_state = 245},
  [21] = {.lex_state = 245},
  [22] = {.lex_state = 245},
  [23] = {.lex_state = 245},
  [24] = {.lex_state = 245},
  [25] = {.lex_state = 245},
  [26] = {.lex_state = 245},
  [27] = {.lex_state = 245},
  [28] = {.lex_state = 245},
  [29] = {.lex_state = 245},
  [30] = {.lex_state = 245},
  [31] = {.lex_state = 245},
  [32] = {.lex_state = 245},
  [33] = {.lex_state = 245},
  [34] = {.lex_state = 245},
  [35] = {.lex_state = 245},
  [36] = {.lex_state = 245},
  [37] = {.lex_state = 245},
  [38] = {.lex_state = 245},
  [39] = {.lex_state = 245},
  [40] = {.lex_state = 245},
  [41] = {.lex_state = 245},
  [42] = {.lex_state = 245},
  [43] = {.lex_state = 245},
  [44] = {.lex_state = 245},
  [45] = {.lex_state = 245},
  [46] = {.lex_state = 245},
  [47] = {.lex_state = 245},
  [48] = {.lex_state = 245},
  [49] = {.lex_state = 245},
  [50] = {.lex_state = 245},
  [51] = {.lex_state = 245},
  [52] = {.lex_state = 245},
  [53] = {.lex_state = 245},
  [54] = {.lex_state = 245},
  [55] = {.lex_state = 245},
  [56] = {.lex_state = 245},
  [57] = {.lex_state = 245},
  [58] = {.lex_state = 245},
  [59] = {.lex_state = 245},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 245},
  [64] = {.lex_state = 2},
  [65] = {.lex_state = 2},
  [66] = {.lex_state = 245},
  [67] = {.lex_state = 2},
  [68] = {.lex_state = 2},
  [69] = {.lex_state = 2},
  [70] = {.lex_state = 2},
  [71] = {.lex_state = 2},
  [72] = {.lex_state = 2},
  [73] = {.lex_state = 245},
  [74] = {.lex_state = 2},
  [75] = {.lex_state = 2},
  [76] = {.lex_state = 2},
  [77] = {.lex_state = 2},
  [78] = {.lex_state = 2},
  [79] = {.lex_state = 2},
  [80] = {.lex_state = 2},
  [81] = {.lex_state = 245},
  [82] = {.lex_state = 245},
  [83] = {.lex_state = 245},
  [84] = {.lex_state = 245},
  [85] = {.lex_state = 245},
  [86] = {.lex_state = 245},
  [87] = {.lex_state = 245},
  [88] = {.lex_state = 245},
  [89] = {.lex_state = 245},
  [90] = {.lex_state = 245},
  [91] = {.lex_state = 245},
  [92] = {.lex_state = 245},
  [93] = {.lex_state = 245},
  [94] = {.lex_state = 2},
  [95] = {.lex_state = 10},
  [96] = {.lex_state = 2},
  [97] = {.lex_state = 2},
  [98] = {.lex_state = 2},
  [99] = {.lex_state = 2},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 2},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 2},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 2},
  [123] = {.lex_state = 2},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 2},
  [130] = {.lex_state = 2},
  [131] = {.lex_state = 2},
  [132] = {.lex_state = 2},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 5},
  [136] = {.lex_state = 2},
  [137] = {.lex_state = 2},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 11},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 2},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 2},
  [145] = {.lex_state = 2},
  [146] = {.lex_state = 2},
  [147] = {.lex_state = 2},
  [148] = {.lex_state = 2},
  [149] = {.lex_state = 8},
  [150] = {.lex_state = 2},
  [151] = {.lex_state = 2},
  [152] = {.lex_state = 2},
  [153] = {.lex_state = 2},
  [154] = {.lex_state = 2},
  [155] = {.lex_state = 11},
  [156] = {.lex_state = 2},
  [157] = {.lex_state = 2},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 2},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 2},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 2},
  [178] = {.lex_state = 2},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 2},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 2},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 2},
  [185] = {.lex_state = 2},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 2},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 2},
  [192] = {.lex_state = 2},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 2},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 2},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 2},
  [200] = {.lex_state = 2},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 2},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 2},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 2},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 2},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 2},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 2},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 2},
  [247] = {.lex_state = 2},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 2},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 2},
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
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 0},
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
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 0},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 0},
  [341] = {.lex_state = 0},
  [342] = {.lex_state = 0},
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 0},
  [345] = {.lex_state = 0},
  [346] = {.lex_state = 0},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 0},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 0},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 0},
  [353] = {.lex_state = 0},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 0},
  [356] = {.lex_state = 0},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 0},
  [361] = {.lex_state = 0},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 0},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 0},
  [368] = {.lex_state = 0},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__whitespace] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_set_DASHoption] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_datatype] = ACTIONS(1),
    [anon_sym_sort] = ACTIONS(1),
    [anon_sym_function] = ACTIONS(1),
    [anon_sym_COLONcost] = ACTIONS(1),
    [anon_sym_COLONunextractable] = ACTIONS(1),
    [anon_sym_COLONon_merge] = ACTIONS(1),
    [anon_sym_COLONmerge] = ACTIONS(1),
    [anon_sym_COLONdefault] = ACTIONS(1),
    [anon_sym_declare] = ACTIONS(1),
    [anon_sym_relation] = ACTIONS(1),
    [anon_sym_ruleset] = ACTIONS(1),
    [anon_sym_rule] = ACTIONS(1),
    [anon_sym_COLONruleset] = ACTIONS(1),
    [anon_sym_COLONname] = ACTIONS(1),
    [anon_sym_rewrite] = ACTIONS(1),
    [anon_sym_COLONsubsume] = ACTIONS(1),
    [anon_sym_COLONwhen] = ACTIONS(1),
    [anon_sym_birewrite] = ACTIONS(1),
    [anon_sym_run] = ACTIONS(1),
    [anon_sym_COLONuntil] = ACTIONS(1),
    [anon_sym_simplify] = ACTIONS(1),
    [anon_sym_calc] = ACTIONS(1),
    [anon_sym_query_DASHextract] = ACTIONS(1),
    [anon_sym_COLONvariants] = ACTIONS(1),
    [anon_sym_check] = ACTIONS(1),
    [anon_sym_check_DASHproof] = ACTIONS(1),
    [anon_sym_run_DASHschedule] = ACTIONS(1),
    [anon_sym_print_DASHstats] = ACTIONS(1),
    [anon_sym_push] = ACTIONS(1),
    [anon_sym_pop] = ACTIONS(1),
    [anon_sym_print_DASHfunction] = ACTIONS(1),
    [anon_sym_print_DASHsize] = ACTIONS(1),
    [anon_sym_input] = ACTIONS(1),
    [anon_sym_output] = ACTIONS(1),
    [anon_sym_fail] = ACTIONS(1),
    [anon_sym_include] = ACTIONS(1),
    [anon_sym_saturate] = ACTIONS(1),
    [anon_sym_seq] = ACTIONS(1),
    [anon_sym_repeat] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
    [anon_sym_set] = ACTIONS(1),
    [anon_sym_delete] = ACTIONS(1),
    [anon_sym_subsume] = ACTIONS(1),
    [anon_sym_union] = ACTIONS(1),
    [anon_sym_panic] = ACTIONS(1),
    [anon_sym_extract] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [sym_literal_int] = ACTIONS(1),
    [anon_sym_NaN] = ACTIONS(1),
    [aux_sym_literal_float_token1] = ACTIONS(1),
    [anon_sym_inf] = ACTIONS(1),
    [anon_sym_DASHinf] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [sym_literal_string] = ACTIONS(1),
    [aux_sym_ident_token2] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(308),
    [sym_command] = STATE(2),
    [sym_command_set_option] = STATE(164),
    [sym_command_datatype] = STATE(164),
    [sym_command_sort] = STATE(164),
    [sym_command_function] = STATE(164),
    [sym_command_declare] = STATE(164),
    [sym_command_relation] = STATE(164),
    [sym_command_ruleset] = STATE(164),
    [sym_command_rule] = STATE(164),
    [sym_command_rewrite] = STATE(164),
    [sym_command_birewrite] = STATE(164),
    [sym_command_run] = STATE(164),
    [sym_command_simplify] = STATE(164),
    [sym_command_calc] = STATE(164),
    [sym_command_query_extract] = STATE(164),
    [sym_command_check] = STATE(164),
    [sym_command_check_proof] = STATE(164),
    [sym_command_run_schedule] = STATE(164),
    [sym_command_print_stats] = STATE(164),
    [sym_command_push] = STATE(164),
    [sym_command_pop] = STATE(164),
    [sym_command_print_function] = STATE(164),
    [sym_command_print_size] = STATE(164),
    [sym_command_input] = STATE(164),
    [sym_command_output] = STATE(164),
    [sym_command_fail] = STATE(164),
    [sym_command_include] = STATE(164),
    [sym_command_action] = STATE(164),
    [sym__action] = STATE(165),
    [sym_action_let] = STATE(165),
    [sym_action_set] = STATE(165),
    [sym_action_delete] = STATE(165),
    [sym_action_subsume] = STATE(165),
    [sym_action_union] = STATE(165),
    [sym_action_panic] = STATE(165),
    [sym_action_extract] = STATE(165),
    [sym_action_call] = STATE(165),
    [sym_expr_call] = STATE(166),
    [aux_sym_program_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym__whitespace] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
    STATE(166), 1,
      sym_expr_call,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    STATE(3), 2,
      sym_command,
      aux_sym_program_repeat1,
    STATE(165), 9,
      sym__action,
      sym_action_let,
      sym_action_set,
      sym_action_delete,
      sym_action_subsume,
      sym_action_union,
      sym_action_panic,
      sym_action_extract,
      sym_action_call,
    STATE(164), 27,
      sym_command_set_option,
      sym_command_datatype,
      sym_command_sort,
      sym_command_function,
      sym_command_declare,
      sym_command_relation,
      sym_command_ruleset,
      sym_command_rule,
      sym_command_rewrite,
      sym_command_birewrite,
      sym_command_run,
      sym_command_simplify,
      sym_command_calc,
      sym_command_query_extract,
      sym_command_check,
      sym_command_check_proof,
      sym_command_run_schedule,
      sym_command_print_stats,
      sym_command_push,
      sym_command_pop,
      sym_command_print_function,
      sym_command_print_size,
      sym_command_input,
      sym_command_output,
      sym_command_fail,
      sym_command_include,
      sym_command_action,
  [58] = 7,
    ACTIONS(11), 1,
      ts_builtin_sym_end,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    STATE(166), 1,
      sym_expr_call,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    STATE(3), 2,
      sym_command,
      aux_sym_program_repeat1,
    STATE(165), 9,
      sym__action,
      sym_action_let,
      sym_action_set,
      sym_action_delete,
      sym_action_subsume,
      sym_action_union,
      sym_action_panic,
      sym_action_extract,
      sym_action_call,
    STATE(164), 27,
      sym_command_set_option,
      sym_command_datatype,
      sym_command_sort,
      sym_command_function,
      sym_command_declare,
      sym_command_relation,
      sym_command_ruleset,
      sym_command_rule,
      sym_command_rewrite,
      sym_command_birewrite,
      sym_command_run,
      sym_command_simplify,
      sym_command_calc,
      sym_command_query_extract,
      sym_command_check,
      sym_command_check_proof,
      sym_command_run_schedule,
      sym_command_print_stats,
      sym_command_push,
      sym_command_pop,
      sym_command_print_function,
      sym_command_print_size,
      sym_command_input,
      sym_command_output,
      sym_command_fail,
      sym_command_include,
      sym_command_action,
  [116] = 6,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    STATE(166), 1,
      sym_expr_call,
    STATE(326), 1,
      sym_command,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    STATE(165), 9,
      sym__action,
      sym_action_let,
      sym_action_set,
      sym_action_delete,
      sym_action_subsume,
      sym_action_union,
      sym_action_panic,
      sym_action_extract,
      sym_action_call,
    STATE(164), 27,
      sym_command_set_option,
      sym_command_datatype,
      sym_command_sort,
      sym_command_function,
      sym_command_declare,
      sym_command_relation,
      sym_command_ruleset,
      sym_command_rule,
      sym_command_rewrite,
      sym_command_birewrite,
      sym_command_run,
      sym_command_simplify,
      sym_command_calc,
      sym_command_query_extract,
      sym_command_check,
      sym_command_check_proof,
      sym_command_run_schedule,
      sym_command_print_stats,
      sym_command_push,
      sym_command_pop,
      sym_command_print_function,
      sym_command_print_size,
      sym_command_input,
      sym_command_output,
      sym_command_fail,
      sym_command_include,
      sym_command_action,
  [170] = 37,
    ACTIONS(16), 1,
      anon_sym_set_DASHoption,
    ACTIONS(18), 1,
      anon_sym_datatype,
    ACTIONS(20), 1,
      anon_sym_sort,
    ACTIONS(22), 1,
      anon_sym_function,
    ACTIONS(24), 1,
      anon_sym_declare,
    ACTIONS(26), 1,
      anon_sym_relation,
    ACTIONS(28), 1,
      anon_sym_ruleset,
    ACTIONS(30), 1,
      anon_sym_rule,
    ACTIONS(32), 1,
      anon_sym_rewrite,
    ACTIONS(34), 1,
      anon_sym_birewrite,
    ACTIONS(36), 1,
      anon_sym_run,
    ACTIONS(38), 1,
      anon_sym_simplify,
    ACTIONS(40), 1,
      anon_sym_calc,
    ACTIONS(42), 1,
      anon_sym_query_DASHextract,
    ACTIONS(44), 1,
      anon_sym_check,
    ACTIONS(46), 1,
      anon_sym_check_DASHproof,
    ACTIONS(48), 1,
      anon_sym_run_DASHschedule,
    ACTIONS(50), 1,
      anon_sym_print_DASHstats,
    ACTIONS(52), 1,
      anon_sym_push,
    ACTIONS(54), 1,
      anon_sym_pop,
    ACTIONS(56), 1,
      anon_sym_print_DASHfunction,
    ACTIONS(58), 1,
      anon_sym_print_DASHsize,
    ACTIONS(60), 1,
      anon_sym_input,
    ACTIONS(62), 1,
      anon_sym_output,
    ACTIONS(64), 1,
      anon_sym_fail,
    ACTIONS(66), 1,
      anon_sym_include,
    ACTIONS(68), 1,
      anon_sym_let,
    ACTIONS(70), 1,
      anon_sym_set,
    ACTIONS(72), 1,
      anon_sym_delete,
    ACTIONS(74), 1,
      anon_sym_subsume,
    ACTIONS(76), 1,
      anon_sym_union,
    ACTIONS(78), 1,
      anon_sym_panic,
    ACTIONS(80), 1,
      anon_sym_extract,
    ACTIONS(82), 1,
      aux_sym_ident_token1,
    ACTIONS(84), 1,
      aux_sym_ident_token2,
    STATE(6), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
  [283] = 12,
    ACTIONS(86), 1,
      anon_sym_LPAREN,
    ACTIONS(88), 1,
      anon_sym_RPAREN,
    ACTIONS(90), 1,
      sym_literal_int,
    ACTIONS(98), 1,
      sym_literal_string,
    STATE(58), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(82), 2,
      aux_sym_ident_token1,
      aux_sym_ident_token2,
    ACTIONS(92), 2,
      anon_sym_NaN,
      anon_sym_inf,
    ACTIONS(94), 2,
      aux_sym_literal_float_token1,
      anon_sym_DASHinf,
    ACTIONS(96), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(57), 4,
      sym__literal,
      sym_literal_unit,
      sym_literal_float,
      sym_literal_bool,
    STATE(20), 5,
      sym__expr,
      sym_expr_ident,
      sym_expr_literal,
      sym_expr_call,
      aux_sym_command_sort_repeat1,
  [332] = 12,
    ACTIONS(86), 1,
      anon_sym_LPAREN,
    ACTIONS(90), 1,
      sym_literal_int,
    ACTIONS(98), 1,
      sym_literal_string,
    ACTIONS(100), 1,
      anon_sym_RPAREN,
    STATE(58), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(82), 2,
      aux_sym_ident_token1,
      aux_sym_ident_token2,
    ACTIONS(92), 2,
      anon_sym_NaN,
      anon_sym_inf,
    ACTIONS(94), 2,
      aux_sym_literal_float_token1,
      anon_sym_DASHinf,
    ACTIONS(96), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(57), 4,
      sym__literal,
      sym_literal_unit,
      sym_literal_float,
      sym_literal_bool,
    STATE(9), 5,
      sym__expr,
      sym_expr_ident,
      sym_expr_literal,
      sym_expr_call,
      aux_sym_command_sort_repeat1,
  [381] = 12,
    ACTIONS(86), 1,
      anon_sym_LPAREN,
    ACTIONS(90), 1,
      sym_literal_int,
    ACTIONS(98), 1,
      sym_literal_string,
    ACTIONS(102), 1,
      anon_sym_RPAREN,
    STATE(58), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(82), 2,
      aux_sym_ident_token1,
      aux_sym_ident_token2,
    ACTIONS(92), 2,
      anon_sym_NaN,
      anon_sym_inf,
    ACTIONS(94), 2,
      aux_sym_literal_float_token1,
      anon_sym_DASHinf,
    ACTIONS(96), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(57), 4,
      sym__literal,
      sym_literal_unit,
      sym_literal_float,
      sym_literal_bool,
    STATE(19), 5,
      sym__expr,
      sym_expr_ident,
      sym_expr_literal,
      sym_expr_call,
      aux_sym_command_sort_repeat1,
  [430] = 12,
    ACTIONS(104), 1,
      anon_sym_LPAREN,
    ACTIONS(107), 1,
      anon_sym_RPAREN,
    ACTIONS(109), 1,
      sym_literal_int,
    ACTIONS(121), 1,
      sym_literal_string,
    STATE(58), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(112), 2,
      anon_sym_NaN,
      anon_sym_inf,
    ACTIONS(115), 2,
      aux_sym_literal_float_token1,
      anon_sym_DASHinf,
    ACTIONS(118), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(124), 2,
      aux_sym_ident_token1,
      aux_sym_ident_token2,
    STATE(57), 4,
      sym__literal,
      sym_literal_unit,
      sym_literal_float,
      sym_literal_bool,
    STATE(9), 5,
      sym__expr,
      sym_expr_ident,
      sym_expr_literal,
      sym_expr_call,
      aux_sym_command_sort_repeat1,
  [479] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(129), 7,
      sym_literal_int,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_true,
      anon_sym_false,
      aux_sym_ident_token1,
      aux_sym_ident_token2,
    ACTIONS(127), 15,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COLONcost,
      anon_sym_COLONunextractable,
      anon_sym_COLONon_merge,
      anon_sym_COLONmerge,
      anon_sym_COLONdefault,
      anon_sym_COLONruleset,
      anon_sym_COLONname,
      anon_sym_COLONsubsume,
      anon_sym_COLONwhen,
      anon_sym_COLONuntil,
      aux_sym_literal_float_token1,
      anon_sym_DASHinf,
      sym_literal_string,
  [510] = 12,
    ACTIONS(86), 1,
      anon_sym_LPAREN,
    ACTIONS(90), 1,
      sym_literal_int,
    ACTIONS(98), 1,
      sym_literal_string,
    ACTIONS(131), 1,
      anon_sym_RPAREN,
    STATE(58), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(82), 2,
      aux_sym_ident_token1,
      aux_sym_ident_token2,
    ACTIONS(92), 2,
      anon_sym_NaN,
      anon_sym_inf,
    ACTIONS(94), 2,
      aux_sym_literal_float_token1,
      anon_sym_DASHinf,
    ACTIONS(96), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(57), 4,
      sym__literal,
      sym_literal_unit,
      sym_literal_float,
      sym_literal_bool,
    STATE(18), 5,
      sym__expr,
      sym_expr_ident,
      sym_expr_literal,
      sym_expr_call,
      aux_sym_command_sort_repeat1,
  [559] = 12,
    ACTIONS(86), 1,
      anon_sym_LPAREN,
    ACTIONS(90), 1,
      sym_literal_int,
    ACTIONS(98), 1,
      sym_literal_string,
    ACTIONS(133), 1,
      anon_sym_RPAREN,
    STATE(58), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(82), 2,
      aux_sym_ident_token1,
      aux_sym_ident_token2,
    ACTIONS(92), 2,
      anon_sym_NaN,
      anon_sym_inf,
    ACTIONS(94), 2,
      aux_sym_literal_float_token1,
      anon_sym_DASHinf,
    ACTIONS(96), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(57), 4,
      sym__literal,
      sym_literal_unit,
      sym_literal_float,
      sym_literal_bool,
    STATE(7), 5,
      sym__expr,
      sym_expr_ident,
      sym_expr_literal,
      sym_expr_call,
      aux_sym_command_sort_repeat1,
  [608] = 12,
    ACTIONS(86), 1,
      anon_sym_LPAREN,
    ACTIONS(90), 1,
      sym_literal_int,
    ACTIONS(98), 1,
      sym_literal_string,
    ACTIONS(135), 1,
      anon_sym_RPAREN,
    STATE(58), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(82), 2,
      aux_sym_ident_token1,
      aux_sym_ident_token2,
    ACTIONS(92), 2,
      anon_sym_NaN,
      anon_sym_inf,
    ACTIONS(94), 2,
      aux_sym_literal_float_token1,
      anon_sym_DASHinf,
    ACTIONS(96), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(57), 4,
      sym__literal,
      sym_literal_unit,
      sym_literal_float,
      sym_literal_bool,
    STATE(21), 5,
      sym__expr,
      sym_expr_ident,
      sym_expr_literal,
      sym_expr_call,
      aux_sym_command_sort_repeat1,
  [657] = 12,
    ACTIONS(86), 1,
      anon_sym_LPAREN,
    ACTIONS(90), 1,
      sym_literal_int,
    ACTIONS(98), 1,
      sym_literal_string,
    ACTIONS(137), 1,
      anon_sym_RPAREN,
    STATE(58), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(82), 2,
      aux_sym_ident_token1,
      aux_sym_ident_token2,
    ACTIONS(92), 2,
      anon_sym_NaN,
      anon_sym_inf,
    ACTIONS(94), 2,
      aux_sym_literal_float_token1,
      anon_sym_DASHinf,
    ACTIONS(96), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(57), 4,
      sym__literal,
      sym_literal_unit,
      sym_literal_float,
      sym_literal_bool,
    STATE(9), 5,
      sym__expr,
      sym_expr_ident,
      sym_expr_literal,
      sym_expr_call,
      aux_sym_command_sort_repeat1,
  [706] = 12,
    ACTIONS(86), 1,
      anon_sym_LPAREN,
    ACTIONS(90), 1,
      sym_literal_int,
    ACTIONS(98), 1,
      sym_literal_string,
    ACTIONS(139), 1,
      anon_sym_RPAREN,
    STATE(58), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(82), 2,
      aux_sym_ident_token1,
      aux_sym_ident_token2,
    ACTIONS(92), 2,
      anon_sym_NaN,
      anon_sym_inf,
    ACTIONS(94), 2,
      aux_sym_literal_float_token1,
      anon_sym_DASHinf,
    ACTIONS(96), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(57), 4,
      sym__literal,
      sym_literal_unit,
      sym_literal_float,
      sym_literal_bool,
    STATE(14), 5,
      sym__expr,
      sym_expr_ident,
      sym_expr_literal,
      sym_expr_call,
      aux_sym_command_sort_repeat1,
  [755] = 12,
    ACTIONS(86), 1,
      anon_sym_LPAREN,
    ACTIONS(90), 1,
      sym_literal_int,
    ACTIONS(98), 1,
      sym_literal_string,
    ACTIONS(141), 1,
      anon_sym_RPAREN,
    STATE(58), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(82), 2,
      aux_sym_ident_token1,
      aux_sym_ident_token2,
    ACTIONS(92), 2,
      anon_sym_NaN,
      anon_sym_inf,
    ACTIONS(94), 2,
      aux_sym_literal_float_token1,
      anon_sym_DASHinf,
    ACTIONS(96), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(57), 4,
      sym__literal,
      sym_literal_unit,
      sym_literal_float,
      sym_literal_bool,
    STATE(17), 5,
      sym__expr,
      sym_expr_ident,
      sym_expr_literal,
      sym_expr_call,
      aux_sym_command_sort_repeat1,
  [804] = 12,
    ACTIONS(86), 1,
      anon_sym_LPAREN,
    ACTIONS(90), 1,
      sym_literal_int,
    ACTIONS(98), 1,
      sym_literal_string,
    ACTIONS(143), 1,
      anon_sym_RPAREN,
    STATE(58), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(82), 2,
      aux_sym_ident_token1,
      aux_sym_ident_token2,
    ACTIONS(92), 2,
      anon_sym_NaN,
      anon_sym_inf,
    ACTIONS(94), 2,
      aux_sym_literal_float_token1,
      anon_sym_DASHinf,
    ACTIONS(96), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(57), 4,
      sym__literal,
      sym_literal_unit,
      sym_literal_float,
      sym_literal_bool,
    STATE(9), 5,
      sym__expr,
      sym_expr_ident,
      sym_expr_literal,
      sym_expr_call,
      aux_sym_command_sort_repeat1,
  [853] = 12,
    ACTIONS(86), 1,
      anon_sym_LPAREN,
    ACTIONS(90), 1,
      sym_literal_int,
    ACTIONS(98), 1,
      sym_literal_string,
    ACTIONS(145), 1,
      anon_sym_RPAREN,
    STATE(58), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(82), 2,
      aux_sym_ident_token1,
      aux_sym_ident_token2,
    ACTIONS(92), 2,
      anon_sym_NaN,
      anon_sym_inf,
    ACTIONS(94), 2,
      aux_sym_literal_float_token1,
      anon_sym_DASHinf,
    ACTIONS(96), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(57), 4,
      sym__literal,
      sym_literal_unit,
      sym_literal_float,
      sym_literal_bool,
    STATE(9), 5,
      sym__expr,
      sym_expr_ident,
      sym_expr_literal,
      sym_expr_call,
      aux_sym_command_sort_repeat1,
  [902] = 12,
    ACTIONS(86), 1,
      anon_sym_LPAREN,
    ACTIONS(90), 1,
      sym_literal_int,
    ACTIONS(98), 1,
      sym_literal_string,
    ACTIONS(147), 1,
      anon_sym_RPAREN,
    STATE(58), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(82), 2,
      aux_sym_ident_token1,
      aux_sym_ident_token2,
    ACTIONS(92), 2,
      anon_sym_NaN,
      anon_sym_inf,
    ACTIONS(94), 2,
      aux_sym_literal_float_token1,
      anon_sym_DASHinf,
    ACTIONS(96), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(57), 4,
      sym__literal,
      sym_literal_unit,
      sym_literal_float,
      sym_literal_bool,
    STATE(9), 5,
      sym__expr,
      sym_expr_ident,
      sym_expr_literal,
      sym_expr_call,
      aux_sym_command_sort_repeat1,
  [951] = 12,
    ACTIONS(86), 1,
      anon_sym_LPAREN,
    ACTIONS(90), 1,
      sym_literal_int,
    ACTIONS(98), 1,
      sym_literal_string,
    ACTIONS(149), 1,
      anon_sym_RPAREN,
    STATE(58), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(82), 2,
      aux_sym_ident_token1,
      aux_sym_ident_token2,
    ACTIONS(92), 2,
      anon_sym_NaN,
      anon_sym_inf,
    ACTIONS(94), 2,
      aux_sym_literal_float_token1,
      anon_sym_DASHinf,
    ACTIONS(96), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(57), 4,
      sym__literal,
      sym_literal_unit,
      sym_literal_float,
      sym_literal_bool,
    STATE(9), 5,
      sym__expr,
      sym_expr_ident,
      sym_expr_literal,
      sym_expr_call,
      aux_sym_command_sort_repeat1,
  [1000] = 12,
    ACTIONS(86), 1,
      anon_sym_LPAREN,
    ACTIONS(90), 1,
      sym_literal_int,
    ACTIONS(98), 1,
      sym_literal_string,
    ACTIONS(151), 1,
      anon_sym_RPAREN,
    STATE(58), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(82), 2,
      aux_sym_ident_token1,
      aux_sym_ident_token2,
    ACTIONS(92), 2,
      anon_sym_NaN,
      anon_sym_inf,
    ACTIONS(94), 2,
      aux_sym_literal_float_token1,
      anon_sym_DASHinf,
    ACTIONS(96), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(57), 4,
      sym__literal,
      sym_literal_unit,
      sym_literal_float,
      sym_literal_bool,
    STATE(9), 5,
      sym__expr,
      sym_expr_ident,
      sym_expr_literal,
      sym_expr_call,
      aux_sym_command_sort_repeat1,
  [1049] = 11,
    ACTIONS(86), 1,
      anon_sym_LPAREN,
    ACTIONS(90), 1,
      sym_literal_int,
    ACTIONS(98), 1,
      sym_literal_string,
    STATE(58), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(82), 2,
      aux_sym_ident_token1,
      aux_sym_ident_token2,
    ACTIONS(92), 2,
      anon_sym_NaN,
      anon_sym_inf,
    ACTIONS(94), 2,
      aux_sym_literal_float_token1,
      anon_sym_DASHinf,
    ACTIONS(96), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(57), 4,
      sym__literal,
      sym_literal_unit,
      sym_literal_float,
      sym_literal_bool,
    STATE(24), 5,
      sym__expr,
      sym_expr_ident,
      sym_expr_literal,
      sym_expr_call,
      aux_sym_command_sort_repeat1,
  [1095] = 12,
    ACTIONS(86), 1,
      anon_sym_LPAREN,
    ACTIONS(90), 1,
      sym_literal_int,
    ACTIONS(98), 1,
      sym_literal_string,
    ACTIONS(153), 1,
      anon_sym_RPAREN,
    STATE(58), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(82), 2,
      aux_sym_ident_token1,
      aux_sym_ident_token2,
    ACTIONS(92), 2,
      anon_sym_NaN,
      anon_sym_inf,
    ACTIONS(94), 2,
      aux_sym_literal_float_token1,
      anon_sym_DASHinf,
    ACTIONS(96), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(57), 4,
      sym__literal,
      sym_literal_unit,
      sym_literal_float,
      sym_literal_bool,
    STATE(364), 4,
      sym__expr,
      sym_expr_ident,
      sym_expr_literal,
      sym_expr_call,
  [1143] = 12,
    ACTIONS(86), 1,
      anon_sym_LPAREN,
    ACTIONS(90), 1,
      sym_literal_int,
    ACTIONS(98), 1,
      sym_literal_string,
    STATE(9), 1,
      aux_sym_command_sort_repeat1,
    STATE(58), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(82), 2,
      aux_sym_ident_token1,
      aux_sym_ident_token2,
    ACTIONS(92), 2,
      anon_sym_NaN,
      anon_sym_inf,
    ACTIONS(94), 2,
      aux_sym_literal_float_token1,
      anon_sym_DASHinf,
    ACTIONS(96), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(57), 4,
      sym__literal,
      sym_literal_unit,
      sym_literal_float,
      sym_literal_bool,
    STATE(63), 4,
      sym__expr,
      sym_expr_ident,
      sym_expr_literal,
      sym_expr_call,
  [1191] = 12,
    ACTIONS(86), 1,
      anon_sym_LPAREN,
    ACTIONS(90), 1,
      sym_literal_int,
    ACTIONS(98), 1,
      sym_literal_string,
    ACTIONS(155), 1,
      anon_sym_COLONvariants,
    STATE(58), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(82), 2,
      aux_sym_ident_token1,
      aux_sym_ident_token2,
    ACTIONS(92), 2,
      anon_sym_NaN,
      anon_sym_inf,
    ACTIONS(94), 2,
      aux_sym_literal_float_token1,
      anon_sym_DASHinf,
    ACTIONS(96), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(57), 4,
      sym__literal,
      sym_literal_unit,
      sym_literal_float,
      sym_literal_bool,
    STATE(309), 4,
      sym__expr,
      sym_expr_ident,
      sym_expr_literal,
      sym_expr_call,
  [1239] = 11,
    ACTIONS(86), 1,
      anon_sym_LPAREN,
    ACTIONS(90), 1,
      sym_literal_int,
    ACTIONS(98), 1,
      sym_literal_string,
    STATE(58), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(82), 2,
      aux_sym_ident_token1,
      aux_sym_ident_token2,
    ACTIONS(92), 2,
      anon_sym_NaN,
      anon_sym_inf,
    ACTIONS(94), 2,
      aux_sym_literal_float_token1,
      anon_sym_DASHinf,
    ACTIONS(96), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(57), 4,
      sym__literal,
      sym_literal_unit,
      sym_literal_float,
      sym_literal_bool,
    STATE(274), 4,
      sym__expr,
      sym_expr_ident,
      sym_expr_literal,
      sym_expr_call,
  [1284] = 11,
    ACTIONS(86), 1,
      anon_sym_LPAREN,
    ACTIONS(90), 1,
      sym_literal_int,
    ACTIONS(98), 1,
      sym_literal_string,
    STATE(58), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(82), 2,
      aux_sym_ident_token1,
      aux_sym_ident_token2,
    ACTIONS(92), 2,
      anon_sym_NaN,
      anon_sym_inf,
    ACTIONS(94), 2,
      aux_sym_literal_float_token1,
      anon_sym_DASHinf,
    ACTIONS(96), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(33), 4,
      sym__expr,
      sym_expr_ident,
      sym_expr_literal,
      sym_expr_call,
    STATE(57), 4,
      sym__literal,
      sym_literal_unit,
      sym_literal_float,
      sym_literal_bool,
  [1329] = 11,
    ACTIONS(86), 1,
      anon_sym_LPAREN,
    ACTIONS(90), 1,
      sym_literal_int,
    ACTIONS(98), 1,
      sym_literal_string,
    STATE(58), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(82), 2,
      aux_sym_ident_token1,
      aux_sym_ident_token2,
    ACTIONS(92), 2,
      anon_sym_NaN,
      anon_sym_inf,
    ACTIONS(94), 2,
      aux_sym_literal_float_token1,
      anon_sym_DASHinf,
    ACTIONS(96), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(57), 4,
      sym__literal,
      sym_literal_unit,
      sym_literal_float,
      sym_literal_bool,
    STATE(353), 4,
      sym__expr,
      sym_expr_ident,
      sym_expr_literal,
      sym_expr_call,
  [1374] = 11,
    ACTIONS(86), 1,
      anon_sym_LPAREN,
    ACTIONS(90), 1,
      sym_literal_int,
    ACTIONS(98), 1,
      sym_literal_string,
    STATE(58), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(82), 2,
      aux_sym_ident_token1,
      aux_sym_ident_token2,
    ACTIONS(92), 2,
      anon_sym_NaN,
      anon_sym_inf,
    ACTIONS(94), 2,
      aux_sym_literal_float_token1,
      anon_sym_DASHinf,
    ACTIONS(96), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(57), 4,
      sym__literal,
      sym_literal_unit,
      sym_literal_float,
      sym_literal_bool,
    STATE(299), 4,
      sym__expr,
      sym_expr_ident,
      sym_expr_literal,
      sym_expr_call,
  [1419] = 11,
    ACTIONS(86), 1,
      anon_sym_LPAREN,
    ACTIONS(90), 1,
      sym_literal_int,
    ACTIONS(98), 1,
      sym_literal_string,
    STATE(58), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(82), 2,
      aux_sym_ident_token1,
      aux_sym_ident_token2,
    ACTIONS(92), 2,
      anon_sym_NaN,
      anon_sym_inf,
    ACTIONS(94), 2,
      aux_sym_literal_float_token1,
      anon_sym_DASHinf,
    ACTIONS(96), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(57), 4,
      sym__literal,
      sym_literal_unit,
      sym_literal_float,
      sym_literal_bool,
    STATE(352), 4,
      sym__expr,
      sym_expr_ident,
      sym_expr_literal,
      sym_expr_call,
  [1464] = 11,
    ACTIONS(86), 1,
      anon_sym_LPAREN,
    ACTIONS(90), 1,
      sym_literal_int,
    ACTIONS(98), 1,
      sym_literal_string,
    STATE(58), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(82), 2,
      aux_sym_ident_token1,
      aux_sym_ident_token2,
    ACTIONS(92), 2,
      anon_sym_NaN,
      anon_sym_inf,
    ACTIONS(94), 2,
      aux_sym_literal_float_token1,
      anon_sym_DASHinf,
    ACTIONS(96), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(57), 4,
      sym__literal,
      sym_literal_unit,
      sym_literal_float,
      sym_literal_bool,
    STATE(322), 4,
      sym__expr,
      sym_expr_ident,
      sym_expr_literal,
      sym_expr_call,
  [1509] = 11,
    ACTIONS(86), 1,
      anon_sym_LPAREN,
    ACTIONS(90), 1,
      sym_literal_int,
    ACTIONS(98), 1,
      sym_literal_string,
    STATE(58), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(82), 2,
      aux_sym_ident_token1,
      aux_sym_ident_token2,
    ACTIONS(92), 2,
      anon_sym_NaN,
      anon_sym_inf,
    ACTIONS(94), 2,
      aux_sym_literal_float_token1,
      anon_sym_DASHinf,
    ACTIONS(96), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(57), 4,
      sym__literal,
      sym_literal_unit,
      sym_literal_float,
      sym_literal_bool,
    STATE(306), 4,
      sym__expr,
      sym_expr_ident,
      sym_expr_literal,
      sym_expr_call,
  [1554] = 11,
    ACTIONS(86), 1,
      anon_sym_LPAREN,
    ACTIONS(90), 1,
      sym_literal_int,
    ACTIONS(98), 1,
      sym_literal_string,
    STATE(58), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(82), 2,
      aux_sym_ident_token1,
      aux_sym_ident_token2,
    ACTIONS(92), 2,
      anon_sym_NaN,
      anon_sym_inf,
    ACTIONS(94), 2,
      aux_sym_literal_float_token1,
      anon_sym_DASHinf,
    ACTIONS(96), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(57), 4,
      sym__literal,
      sym_literal_unit,
      sym_literal_float,
      sym_literal_bool,
    STATE(143), 4,
      sym__expr,
      sym_expr_ident,
      sym_expr_literal,
      sym_expr_call,
  [1599] = 11,
    ACTIONS(86), 1,
      anon_sym_LPAREN,
    ACTIONS(90), 1,
      sym_literal_int,
    ACTIONS(98), 1,
      sym_literal_string,
    STATE(58), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(82), 2,
      aux_sym_ident_token1,
      aux_sym_ident_token2,
    ACTIONS(92), 2,
      anon_sym_NaN,
      anon_sym_inf,
    ACTIONS(94), 2,
      aux_sym_literal_float_token1,
      anon_sym_DASHinf,
    ACTIONS(96), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(57), 4,
      sym__literal,
      sym_literal_unit,
      sym_literal_float,
      sym_literal_bool,
    STATE(342), 4,
      sym__expr,
      sym_expr_ident,
      sym_expr_literal,
      sym_expr_call,
  [1644] = 11,
    ACTIONS(86), 1,
      anon_sym_LPAREN,
    ACTIONS(90), 1,
      sym_literal_int,
    ACTIONS(98), 1,
      sym_literal_string,
    STATE(58), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(82), 2,
      aux_sym_ident_token1,
      aux_sym_ident_token2,
    ACTIONS(92), 2,
      anon_sym_NaN,
      anon_sym_inf,
    ACTIONS(94), 2,
      aux_sym_literal_float_token1,
      anon_sym_DASHinf,
    ACTIONS(96), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(57), 4,
      sym__literal,
      sym_literal_unit,
      sym_literal_float,
      sym_literal_bool,
    STATE(367), 4,
      sym__expr,
      sym_expr_ident,
      sym_expr_literal,
      sym_expr_call,
  [1689] = 11,
    ACTIONS(86), 1,
      anon_sym_LPAREN,
    ACTIONS(90), 1,
      sym_literal_int,
    ACTIONS(98), 1,
      sym_literal_string,
    STATE(58), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(82), 2,
      aux_sym_ident_token1,
      aux_sym_ident_token2,
    ACTIONS(92), 2,
      anon_sym_NaN,
      anon_sym_inf,
    ACTIONS(94), 2,
      aux_sym_literal_float_token1,
      anon_sym_DASHinf,
    ACTIONS(96), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(57), 4,
      sym__literal,
      sym_literal_unit,
      sym_literal_float,
      sym_literal_bool,
    STATE(323), 4,
      sym__expr,
      sym_expr_ident,
      sym_expr_literal,
      sym_expr_call,
  [1734] = 11,
    ACTIONS(86), 1,
      anon_sym_LPAREN,
    ACTIONS(90), 1,
      sym_literal_int,
    ACTIONS(98), 1,
      sym_literal_string,
    STATE(58), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(82), 2,
      aux_sym_ident_token1,
      aux_sym_ident_token2,
    ACTIONS(92), 2,
      anon_sym_NaN,
      anon_sym_inf,
    ACTIONS(94), 2,
      aux_sym_literal_float_token1,
      anon_sym_DASHinf,
    ACTIONS(96), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(57), 4,
      sym__literal,
      sym_literal_unit,
      sym_literal_float,
      sym_literal_bool,
    STATE(369), 4,
      sym__expr,
      sym_expr_ident,
      sym_expr_literal,
      sym_expr_call,
  [1779] = 11,
    ACTIONS(86), 1,
      anon_sym_LPAREN,
    ACTIONS(90), 1,
      sym_literal_int,
    ACTIONS(98), 1,
      sym_literal_string,
    STATE(58), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(82), 2,
      aux_sym_ident_token1,
      aux_sym_ident_token2,
    ACTIONS(92), 2,
      anon_sym_NaN,
      anon_sym_inf,
    ACTIONS(94), 2,
      aux_sym_literal_float_token1,
      anon_sym_DASHinf,
    ACTIONS(96), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(35), 4,
      sym__expr,
      sym_expr_ident,
      sym_expr_literal,
      sym_expr_call,
    STATE(57), 4,
      sym__literal,
      sym_literal_unit,
      sym_literal_float,
      sym_literal_bool,
  [1824] = 11,
    ACTIONS(86), 1,
      anon_sym_LPAREN,
    ACTIONS(90), 1,
      sym_literal_int,
    ACTIONS(98), 1,
      sym_literal_string,
    STATE(58), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(82), 2,
      aux_sym_ident_token1,
      aux_sym_ident_token2,
    ACTIONS(92), 2,
      anon_sym_NaN,
      anon_sym_inf,
    ACTIONS(94), 2,
      aux_sym_literal_float_token1,
      anon_sym_DASHinf,
    ACTIONS(96), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(41), 4,
      sym__expr,
      sym_expr_ident,
      sym_expr_literal,
      sym_expr_call,
    STATE(57), 4,
      sym__literal,
      sym_literal_unit,
      sym_literal_float,
      sym_literal_bool,
  [1869] = 11,
    ACTIONS(86), 1,
      anon_sym_LPAREN,
    ACTIONS(90), 1,
      sym_literal_int,
    ACTIONS(98), 1,
      sym_literal_string,
    STATE(58), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(82), 2,
      aux_sym_ident_token1,
      aux_sym_ident_token2,
    ACTIONS(92), 2,
      anon_sym_NaN,
      anon_sym_inf,
    ACTIONS(94), 2,
      aux_sym_literal_float_token1,
      anon_sym_DASHinf,
    ACTIONS(96), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(23), 4,
      sym__expr,
      sym_expr_ident,
      sym_expr_literal,
      sym_expr_call,
    STATE(57), 4,
      sym__literal,
      sym_literal_unit,
      sym_literal_float,
      sym_literal_bool,
  [1914] = 11,
    ACTIONS(86), 1,
      anon_sym_LPAREN,
    ACTIONS(90), 1,
      sym_literal_int,
    ACTIONS(98), 1,
      sym_literal_string,
    STATE(58), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(82), 2,
      aux_sym_ident_token1,
      aux_sym_ident_token2,
    ACTIONS(92), 2,
      anon_sym_NaN,
      anon_sym_inf,
    ACTIONS(94), 2,
      aux_sym_literal_float_token1,
      anon_sym_DASHinf,
    ACTIONS(96), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(57), 4,
      sym__literal,
      sym_literal_unit,
      sym_literal_float,
      sym_literal_bool,
    STATE(209), 4,
      sym__expr,
      sym_expr_ident,
      sym_expr_literal,
      sym_expr_call,
  [1959] = 11,
    ACTIONS(86), 1,
      anon_sym_LPAREN,
    ACTIONS(90), 1,
      sym_literal_int,
    ACTIONS(98), 1,
      sym_literal_string,
    STATE(58), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(82), 2,
      aux_sym_ident_token1,
      aux_sym_ident_token2,
    ACTIONS(92), 2,
      anon_sym_NaN,
      anon_sym_inf,
    ACTIONS(94), 2,
      aux_sym_literal_float_token1,
      anon_sym_DASHinf,
    ACTIONS(96), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(57), 4,
      sym__literal,
      sym_literal_unit,
      sym_literal_float,
      sym_literal_bool,
    STATE(272), 4,
      sym__expr,
      sym_expr_ident,
      sym_expr_literal,
      sym_expr_call,
  [2004] = 11,
    ACTIONS(86), 1,
      anon_sym_LPAREN,
    ACTIONS(90), 1,
      sym_literal_int,
    ACTIONS(98), 1,
      sym_literal_string,
    STATE(58), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(82), 2,
      aux_sym_ident_token1,
      aux_sym_ident_token2,
    ACTIONS(92), 2,
      anon_sym_NaN,
      anon_sym_inf,
    ACTIONS(94), 2,
      aux_sym_literal_float_token1,
      anon_sym_DASHinf,
    ACTIONS(96), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(57), 4,
      sym__literal,
      sym_literal_unit,
      sym_literal_float,
      sym_literal_bool,
    STATE(296), 4,
      sym__expr,
      sym_expr_ident,
      sym_expr_literal,
      sym_expr_call,
  [2049] = 11,
    ACTIONS(86), 1,
      anon_sym_LPAREN,
    ACTIONS(90), 1,
      sym_literal_int,
    ACTIONS(98), 1,
      sym_literal_string,
    STATE(58), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(82), 2,
      aux_sym_ident_token1,
      aux_sym_ident_token2,
    ACTIONS(92), 2,
      anon_sym_NaN,
      anon_sym_inf,
    ACTIONS(94), 2,
      aux_sym_literal_float_token1,
      anon_sym_DASHinf,
    ACTIONS(96), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(57), 4,
      sym__literal,
      sym_literal_unit,
      sym_literal_float,
      sym_literal_bool,
    STATE(321), 4,
      sym__expr,
      sym_expr_ident,
      sym_expr_literal,
      sym_expr_call,
  [2094] = 11,
    ACTIONS(86), 1,
      anon_sym_LPAREN,
    ACTIONS(90), 1,
      sym_literal_int,
    ACTIONS(98), 1,
      sym_literal_string,
    STATE(58), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(82), 2,
      aux_sym_ident_token1,
      aux_sym_ident_token2,
    ACTIONS(92), 2,
      anon_sym_NaN,
      anon_sym_inf,
    ACTIONS(94), 2,
      aux_sym_literal_float_token1,
      anon_sym_DASHinf,
    ACTIONS(96), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(57), 4,
      sym__literal,
      sym_literal_unit,
      sym_literal_float,
      sym_literal_bool,
    STATE(329), 4,
      sym__expr,
      sym_expr_ident,
      sym_expr_literal,
      sym_expr_call,
  [2139] = 11,
    ACTIONS(86), 1,
      anon_sym_LPAREN,
    ACTIONS(90), 1,
      sym_literal_int,
    ACTIONS(98), 1,
      sym_literal_string,
    STATE(58), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(82), 2,
      aux_sym_ident_token1,
      aux_sym_ident_token2,
    ACTIONS(92), 2,
      anon_sym_NaN,
      anon_sym_inf,
    ACTIONS(94), 2,
      aux_sym_literal_float_token1,
      anon_sym_DASHinf,
    ACTIONS(96), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(57), 4,
      sym__literal,
      sym_literal_unit,
      sym_literal_float,
      sym_literal_bool,
    STATE(340), 4,
      sym__expr,
      sym_expr_ident,
      sym_expr_literal,
      sym_expr_call,
  [2184] = 11,
    ACTIONS(86), 1,
      anon_sym_LPAREN,
    ACTIONS(90), 1,
      sym_literal_int,
    ACTIONS(98), 1,
      sym_literal_string,
    STATE(58), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(82), 2,
      aux_sym_ident_token1,
      aux_sym_ident_token2,
    ACTIONS(92), 2,
      anon_sym_NaN,
      anon_sym_inf,
    ACTIONS(94), 2,
      aux_sym_literal_float_token1,
      anon_sym_DASHinf,
    ACTIONS(96), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(57), 4,
      sym__literal,
      sym_literal_unit,
      sym_literal_float,
      sym_literal_bool,
    STATE(307), 4,
      sym__expr,
      sym_expr_ident,
      sym_expr_literal,
      sym_expr_call,
  [2229] = 11,
    ACTIONS(86), 1,
      anon_sym_LPAREN,
    ACTIONS(90), 1,
      sym_literal_int,
    ACTIONS(98), 1,
      sym_literal_string,
    STATE(58), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(82), 2,
      aux_sym_ident_token1,
      aux_sym_ident_token2,
    ACTIONS(92), 2,
      anon_sym_NaN,
      anon_sym_inf,
    ACTIONS(94), 2,
      aux_sym_literal_float_token1,
      anon_sym_DASHinf,
    ACTIONS(96), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(57), 4,
      sym__literal,
      sym_literal_unit,
      sym_literal_float,
      sym_literal_bool,
    STATE(334), 4,
      sym__expr,
      sym_expr_ident,
      sym_expr_literal,
      sym_expr_call,
  [2274] = 11,
    ACTIONS(86), 1,
      anon_sym_LPAREN,
    ACTIONS(90), 1,
      sym_literal_int,
    ACTIONS(98), 1,
      sym_literal_string,
    STATE(58), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(82), 2,
      aux_sym_ident_token1,
      aux_sym_ident_token2,
    ACTIONS(92), 2,
      anon_sym_NaN,
      anon_sym_inf,
    ACTIONS(94), 2,
      aux_sym_literal_float_token1,
      anon_sym_DASHinf,
    ACTIONS(96), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(57), 4,
      sym__literal,
      sym_literal_unit,
      sym_literal_float,
      sym_literal_bool,
    STATE(289), 4,
      sym__expr,
      sym_expr_ident,
      sym_expr_literal,
      sym_expr_call,
  [2319] = 11,
    ACTIONS(86), 1,
      anon_sym_LPAREN,
    ACTIONS(90), 1,
      sym_literal_int,
    ACTIONS(98), 1,
      sym_literal_string,
    STATE(58), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(82), 2,
      aux_sym_ident_token1,
      aux_sym_ident_token2,
    ACTIONS(92), 2,
      anon_sym_NaN,
      anon_sym_inf,
    ACTIONS(94), 2,
      aux_sym_literal_float_token1,
      anon_sym_DASHinf,
    ACTIONS(96), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(57), 4,
      sym__literal,
      sym_literal_unit,
      sym_literal_float,
      sym_literal_bool,
    STATE(331), 4,
      sym__expr,
      sym_expr_ident,
      sym_expr_literal,
      sym_expr_call,
  [2364] = 11,
    ACTIONS(86), 1,
      anon_sym_LPAREN,
    ACTIONS(90), 1,
      sym_literal_int,
    ACTIONS(98), 1,
      sym_literal_string,
    STATE(58), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(82), 2,
      aux_sym_ident_token1,
      aux_sym_ident_token2,
    ACTIONS(92), 2,
      anon_sym_NaN,
      anon_sym_inf,
    ACTIONS(94), 2,
      aux_sym_literal_float_token1,
      anon_sym_DASHinf,
    ACTIONS(96), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(57), 4,
      sym__literal,
      sym_literal_unit,
      sym_literal_float,
      sym_literal_bool,
    STATE(312), 4,
      sym__expr,
      sym_expr_ident,
      sym_expr_literal,
      sym_expr_call,
  [2409] = 11,
    ACTIONS(86), 1,
      anon_sym_LPAREN,
    ACTIONS(90), 1,
      sym_literal_int,
    ACTIONS(98), 1,
      sym_literal_string,
    STATE(58), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(82), 2,
      aux_sym_ident_token1,
      aux_sym_ident_token2,
    ACTIONS(92), 2,
      anon_sym_NaN,
      anon_sym_inf,
    ACTIONS(94), 2,
      aux_sym_literal_float_token1,
      anon_sym_DASHinf,
    ACTIONS(96), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(57), 4,
      sym__literal,
      sym_literal_unit,
      sym_literal_float,
      sym_literal_bool,
    STATE(291), 4,
      sym__expr,
      sym_expr_ident,
      sym_expr_literal,
      sym_expr_call,
  [2454] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(159), 7,
      sym_literal_int,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_true,
      anon_sym_false,
      aux_sym_ident_token1,
      aux_sym_ident_token2,
    ACTIONS(157), 10,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COLONdefault,
      anon_sym_COLONruleset,
      anon_sym_COLONsubsume,
      anon_sym_COLONwhen,
      aux_sym_literal_float_token1,
      anon_sym_DASHinf,
      sym_literal_string,
  [2480] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(163), 7,
      sym_literal_int,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_true,
      anon_sym_false,
      aux_sym_ident_token1,
      aux_sym_ident_token2,
    ACTIONS(161), 10,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COLONdefault,
      anon_sym_COLONruleset,
      anon_sym_COLONsubsume,
      anon_sym_COLONwhen,
      aux_sym_literal_float_token1,
      anon_sym_DASHinf,
      sym_literal_string,
  [2506] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(167), 7,
      sym_literal_int,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_true,
      anon_sym_false,
      aux_sym_ident_token1,
      aux_sym_ident_token2,
    ACTIONS(165), 9,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COLONdefault,
      anon_sym_COLONruleset,
      anon_sym_COLONsubsume,
      anon_sym_COLONwhen,
      aux_sym_literal_float_token1,
      anon_sym_DASHinf,
      sym_literal_string,
  [2531] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(171), 7,
      sym_literal_int,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_true,
      anon_sym_false,
      aux_sym_ident_token1,
      aux_sym_ident_token2,
    ACTIONS(169), 9,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COLONdefault,
      anon_sym_COLONruleset,
      anon_sym_COLONsubsume,
      anon_sym_COLONwhen,
      aux_sym_literal_float_token1,
      anon_sym_DASHinf,
      sym_literal_string,
  [2556] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(175), 7,
      sym_literal_int,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_true,
      anon_sym_false,
      aux_sym_ident_token1,
      aux_sym_ident_token2,
    ACTIONS(173), 9,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COLONdefault,
      anon_sym_COLONruleset,
      anon_sym_COLONsubsume,
      anon_sym_COLONwhen,
      aux_sym_literal_float_token1,
      anon_sym_DASHinf,
      sym_literal_string,
  [2581] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(179), 7,
      sym_literal_int,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_true,
      anon_sym_false,
      aux_sym_ident_token1,
      aux_sym_ident_token2,
    ACTIONS(177), 9,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COLONdefault,
      anon_sym_COLONruleset,
      anon_sym_COLONsubsume,
      anon_sym_COLONwhen,
      aux_sym_literal_float_token1,
      anon_sym_DASHinf,
      sym_literal_string,
  [2606] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(183), 7,
      sym_literal_int,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_true,
      anon_sym_false,
      aux_sym_ident_token1,
      aux_sym_ident_token2,
    ACTIONS(181), 9,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COLONdefault,
      anon_sym_COLONruleset,
      anon_sym_COLONsubsume,
      anon_sym_COLONwhen,
      aux_sym_literal_float_token1,
      anon_sym_DASHinf,
      sym_literal_string,
  [2631] = 5,
    ACTIONS(185), 1,
      anon_sym_LPAREN,
    ACTIONS(187), 1,
      anon_sym_RPAREN,
    STATE(166), 1,
      sym_expr_call,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    STATE(62), 10,
      sym__action,
      sym_action_let,
      sym_action_set,
      sym_action_delete,
      sym_action_subsume,
      sym_action_union,
      sym_action_panic,
      sym_action_extract,
      sym_action_call,
      aux_sym__actions_repeat1,
  [2657] = 5,
    ACTIONS(189), 1,
      anon_sym_LPAREN,
    ACTIONS(192), 1,
      anon_sym_RPAREN,
    STATE(166), 1,
      sym_expr_call,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    STATE(61), 10,
      sym__action,
      sym_action_let,
      sym_action_set,
      sym_action_delete,
      sym_action_subsume,
      sym_action_union,
      sym_action_panic,
      sym_action_extract,
      sym_action_call,
      aux_sym__actions_repeat1,
  [2683] = 5,
    ACTIONS(185), 1,
      anon_sym_LPAREN,
    ACTIONS(194), 1,
      anon_sym_RPAREN,
    STATE(166), 1,
      sym_expr_call,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    STATE(61), 10,
      sym__action,
      sym_action_let,
      sym_action_set,
      sym_action_delete,
      sym_action_subsume,
      sym_action_union,
      sym_action_panic,
      sym_action_extract,
      sym_action_call,
      aux_sym__actions_repeat1,
  [2709] = 4,
    ACTIONS(198), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(196), 4,
      anon_sym_LPAREN,
      aux_sym_literal_float_token1,
      anon_sym_DASHinf,
      sym_literal_string,
    ACTIONS(200), 7,
      sym_literal_int,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_true,
      anon_sym_false,
      aux_sym_ident_token1,
      aux_sym_ident_token2,
  [2732] = 6,
    ACTIONS(202), 1,
      anon_sym_LPAREN,
    ACTIONS(204), 1,
      anon_sym_RPAREN,
    STATE(145), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(206), 2,
      aux_sym_ident_token1,
      aux_sym_ident_token2,
    STATE(77), 7,
      sym__schedule,
      sym_schedule_saturate,
      sym_schedule_seq,
      sym_schedule_repeat,
      sym_schedule_run,
      sym_schedule_ident,
      aux_sym_command_run_schedule_repeat1,
  [2759] = 6,
    ACTIONS(202), 1,
      anon_sym_LPAREN,
    ACTIONS(208), 1,
      anon_sym_RPAREN,
    STATE(145), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(206), 2,
      aux_sym_ident_token1,
      aux_sym_ident_token2,
    STATE(76), 7,
      sym__schedule,
      sym_schedule_saturate,
      sym_schedule_seq,
      sym_schedule_repeat,
      sym_schedule_run,
      sym_schedule_ident,
      aux_sym_command_run_schedule_repeat1,
  [2786] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(210), 5,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_literal_float_token1,
      anon_sym_DASHinf,
      sym_literal_string,
    ACTIONS(212), 7,
      sym_literal_int,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_true,
      anon_sym_false,
      aux_sym_ident_token1,
      aux_sym_ident_token2,
  [2807] = 6,
    ACTIONS(202), 1,
      anon_sym_LPAREN,
    ACTIONS(214), 1,
      anon_sym_RPAREN,
    STATE(145), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(206), 2,
      aux_sym_ident_token1,
      aux_sym_ident_token2,
    STATE(75), 7,
      sym__schedule,
      sym_schedule_saturate,
      sym_schedule_seq,
      sym_schedule_repeat,
      sym_schedule_run,
      sym_schedule_ident,
      aux_sym_command_run_schedule_repeat1,
  [2834] = 6,
    ACTIONS(202), 1,
      anon_sym_LPAREN,
    ACTIONS(216), 1,
      anon_sym_RPAREN,
    STATE(145), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(206), 2,
      aux_sym_ident_token1,
      aux_sym_ident_token2,
    STATE(74), 7,
      sym__schedule,
      sym_schedule_saturate,
      sym_schedule_seq,
      sym_schedule_repeat,
      sym_schedule_run,
      sym_schedule_ident,
      aux_sym_command_run_schedule_repeat1,
  [2861] = 6,
    ACTIONS(202), 1,
      anon_sym_LPAREN,
    ACTIONS(218), 1,
      anon_sym_RPAREN,
    STATE(145), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(206), 2,
      aux_sym_ident_token1,
      aux_sym_ident_token2,
    STATE(71), 7,
      sym__schedule,
      sym_schedule_saturate,
      sym_schedule_seq,
      sym_schedule_repeat,
      sym_schedule_run,
      sym_schedule_ident,
      aux_sym_command_run_schedule_repeat1,
  [2888] = 6,
    ACTIONS(202), 1,
      anon_sym_LPAREN,
    ACTIONS(220), 1,
      anon_sym_RPAREN,
    STATE(145), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(206), 2,
      aux_sym_ident_token1,
      aux_sym_ident_token2,
    STATE(80), 7,
      sym__schedule,
      sym_schedule_saturate,
      sym_schedule_seq,
      sym_schedule_repeat,
      sym_schedule_run,
      sym_schedule_ident,
      aux_sym_command_run_schedule_repeat1,
  [2915] = 6,
    ACTIONS(202), 1,
      anon_sym_LPAREN,
    ACTIONS(222), 1,
      anon_sym_RPAREN,
    STATE(145), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(206), 2,
      aux_sym_ident_token1,
      aux_sym_ident_token2,
    STATE(75), 7,
      sym__schedule,
      sym_schedule_saturate,
      sym_schedule_seq,
      sym_schedule_repeat,
      sym_schedule_run,
      sym_schedule_ident,
      aux_sym_command_run_schedule_repeat1,
  [2942] = 6,
    ACTIONS(202), 1,
      anon_sym_LPAREN,
    ACTIONS(224), 1,
      anon_sym_RPAREN,
    STATE(145), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(206), 2,
      aux_sym_ident_token1,
      aux_sym_ident_token2,
    STATE(67), 7,
      sym__schedule,
      sym_schedule_saturate,
      sym_schedule_seq,
      sym_schedule_repeat,
      sym_schedule_run,
      sym_schedule_ident,
      aux_sym_command_run_schedule_repeat1,
  [2969] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(226), 5,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_literal_float_token1,
      anon_sym_DASHinf,
      sym_literal_string,
    ACTIONS(228), 7,
      sym_literal_int,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_true,
      anon_sym_false,
      aux_sym_ident_token1,
      aux_sym_ident_token2,
  [2990] = 6,
    ACTIONS(202), 1,
      anon_sym_LPAREN,
    ACTIONS(230), 1,
      anon_sym_RPAREN,
    STATE(145), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(206), 2,
      aux_sym_ident_token1,
      aux_sym_ident_token2,
    STATE(75), 7,
      sym__schedule,
      sym_schedule_saturate,
      sym_schedule_seq,
      sym_schedule_repeat,
      sym_schedule_run,
      sym_schedule_ident,
      aux_sym_command_run_schedule_repeat1,
  [3017] = 6,
    ACTIONS(232), 1,
      anon_sym_LPAREN,
    ACTIONS(235), 1,
      anon_sym_RPAREN,
    STATE(145), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(237), 2,
      aux_sym_ident_token1,
      aux_sym_ident_token2,
    STATE(75), 7,
      sym__schedule,
      sym_schedule_saturate,
      sym_schedule_seq,
      sym_schedule_repeat,
      sym_schedule_run,
      sym_schedule_ident,
      aux_sym_command_run_schedule_repeat1,
  [3044] = 6,
    ACTIONS(202), 1,
      anon_sym_LPAREN,
    ACTIONS(240), 1,
      anon_sym_RPAREN,
    STATE(145), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(206), 2,
      aux_sym_ident_token1,
      aux_sym_ident_token2,
    STATE(75), 7,
      sym__schedule,
      sym_schedule_saturate,
      sym_schedule_seq,
      sym_schedule_repeat,
      sym_schedule_run,
      sym_schedule_ident,
      aux_sym_command_run_schedule_repeat1,
  [3071] = 6,
    ACTIONS(202), 1,
      anon_sym_LPAREN,
    ACTIONS(242), 1,
      anon_sym_RPAREN,
    STATE(145), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(206), 2,
      aux_sym_ident_token1,
      aux_sym_ident_token2,
    STATE(75), 7,
      sym__schedule,
      sym_schedule_saturate,
      sym_schedule_seq,
      sym_schedule_repeat,
      sym_schedule_run,
      sym_schedule_ident,
      aux_sym_command_run_schedule_repeat1,
  [3098] = 6,
    ACTIONS(202), 1,
      anon_sym_LPAREN,
    ACTIONS(244), 1,
      anon_sym_RPAREN,
    STATE(145), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(206), 2,
      aux_sym_ident_token1,
      aux_sym_ident_token2,
    STATE(75), 7,
      sym__schedule,
      sym_schedule_saturate,
      sym_schedule_seq,
      sym_schedule_repeat,
      sym_schedule_run,
      sym_schedule_ident,
      aux_sym_command_run_schedule_repeat1,
  [3125] = 6,
    ACTIONS(202), 1,
      anon_sym_LPAREN,
    ACTIONS(246), 1,
      anon_sym_RPAREN,
    STATE(145), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(206), 2,
      aux_sym_ident_token1,
      aux_sym_ident_token2,
    STATE(78), 7,
      sym__schedule,
      sym_schedule_saturate,
      sym_schedule_seq,
      sym_schedule_repeat,
      sym_schedule_run,
      sym_schedule_ident,
      aux_sym_command_run_schedule_repeat1,
  [3152] = 6,
    ACTIONS(202), 1,
      anon_sym_LPAREN,
    ACTIONS(248), 1,
      anon_sym_RPAREN,
    STATE(145), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(206), 2,
      aux_sym_ident_token1,
      aux_sym_ident_token2,
    STATE(75), 7,
      sym__schedule,
      sym_schedule_saturate,
      sym_schedule_seq,
      sym_schedule_repeat,
      sym_schedule_run,
      sym_schedule_ident,
      aux_sym_command_run_schedule_repeat1,
  [3179] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(250), 4,
      anon_sym_LPAREN,
      aux_sym_literal_float_token1,
      anon_sym_DASHinf,
      sym_literal_string,
    ACTIONS(252), 7,
      sym_literal_int,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_true,
      anon_sym_false,
      aux_sym_ident_token1,
      aux_sym_ident_token2,
  [3199] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(254), 4,
      anon_sym_LPAREN,
      aux_sym_literal_float_token1,
      anon_sym_DASHinf,
      sym_literal_string,
    ACTIONS(256), 7,
      sym_literal_int,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_true,
      anon_sym_false,
      aux_sym_ident_token1,
      aux_sym_ident_token2,
  [3219] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(258), 4,
      anon_sym_LPAREN,
      aux_sym_literal_float_token1,
      anon_sym_DASHinf,
      sym_literal_string,
    ACTIONS(260), 7,
      sym_literal_int,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_true,
      anon_sym_false,
      aux_sym_ident_token1,
      aux_sym_ident_token2,
  [3239] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(262), 4,
      anon_sym_LPAREN,
      aux_sym_literal_float_token1,
      anon_sym_DASHinf,
      sym_literal_string,
    ACTIONS(264), 7,
      sym_literal_int,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_true,
      anon_sym_false,
      aux_sym_ident_token1,
      aux_sym_ident_token2,
  [3259] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(266), 4,
      anon_sym_LPAREN,
      aux_sym_literal_float_token1,
      anon_sym_DASHinf,
      sym_literal_string,
    ACTIONS(268), 7,
      sym_literal_int,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_true,
      anon_sym_false,
      aux_sym_ident_token1,
      aux_sym_ident_token2,
  [3279] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(270), 4,
      anon_sym_LPAREN,
      aux_sym_literal_float_token1,
      anon_sym_DASHinf,
      sym_literal_string,
    ACTIONS(272), 7,
      sym_literal_int,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_true,
      anon_sym_false,
      aux_sym_ident_token1,
      aux_sym_ident_token2,
  [3299] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(274), 4,
      anon_sym_LPAREN,
      aux_sym_literal_float_token1,
      anon_sym_DASHinf,
      sym_literal_string,
    ACTIONS(276), 7,
      sym_literal_int,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_true,
      anon_sym_false,
      aux_sym_ident_token1,
      aux_sym_ident_token2,
  [3319] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(278), 4,
      anon_sym_LPAREN,
      aux_sym_literal_float_token1,
      anon_sym_DASHinf,
      sym_literal_string,
    ACTIONS(280), 7,
      sym_literal_int,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_true,
      anon_sym_false,
      aux_sym_ident_token1,
      aux_sym_ident_token2,
  [3339] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(282), 4,
      anon_sym_LPAREN,
      aux_sym_literal_float_token1,
      anon_sym_DASHinf,
      sym_literal_string,
    ACTIONS(284), 7,
      sym_literal_int,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_true,
      anon_sym_false,
      aux_sym_ident_token1,
      aux_sym_ident_token2,
  [3359] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(286), 4,
      anon_sym_LPAREN,
      aux_sym_literal_float_token1,
      anon_sym_DASHinf,
      sym_literal_string,
    ACTIONS(288), 7,
      sym_literal_int,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_true,
      anon_sym_false,
      aux_sym_ident_token1,
      aux_sym_ident_token2,
  [3379] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(290), 4,
      anon_sym_LPAREN,
      aux_sym_literal_float_token1,
      anon_sym_DASHinf,
      sym_literal_string,
    ACTIONS(292), 7,
      sym_literal_int,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_true,
      anon_sym_false,
      aux_sym_ident_token1,
      aux_sym_ident_token2,
  [3399] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(294), 4,
      anon_sym_LPAREN,
      aux_sym_literal_float_token1,
      anon_sym_DASHinf,
      sym_literal_string,
    ACTIONS(296), 7,
      sym_literal_int,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_true,
      anon_sym_false,
      aux_sym_ident_token1,
      aux_sym_ident_token2,
  [3419] = 3,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(298), 4,
      anon_sym_LPAREN,
      aux_sym_literal_float_token1,
      anon_sym_DASHinf,
      sym_literal_string,
    ACTIONS(300), 7,
      sym_literal_int,
      anon_sym_NaN,
      anon_sym_inf,
      anon_sym_true,
      anon_sym_false,
      aux_sym_ident_token1,
      aux_sym_ident_token2,
  [3439] = 5,
    ACTIONS(302), 1,
      anon_sym_LPAREN,
    STATE(92), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(84), 2,
      aux_sym_ident_token1,
      aux_sym_ident_token2,
    STATE(30), 6,
      sym__schedule,
      sym_schedule_saturate,
      sym_schedule_seq,
      sym_schedule_repeat,
      sym_schedule_run,
      sym_schedule_ident,
  [3462] = 11,
    ACTIONS(68), 1,
      anon_sym_let,
    ACTIONS(70), 1,
      anon_sym_set,
    ACTIONS(72), 1,
      anon_sym_delete,
    ACTIONS(74), 1,
      anon_sym_subsume,
    ACTIONS(76), 1,
      anon_sym_union,
    ACTIONS(78), 1,
      anon_sym_panic,
    ACTIONS(80), 1,
      anon_sym_extract,
    ACTIONS(82), 1,
      aux_sym_ident_token1,
    ACTIONS(84), 1,
      aux_sym_ident_token2,
    STATE(6), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
  [3497] = 6,
    ACTIONS(304), 1,
      anon_sym_RPAREN,
    ACTIONS(306), 1,
      anon_sym_COLONcost,
    STATE(98), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(206), 2,
      aux_sym_ident_token1,
      aux_sym_ident_token2,
    STATE(99), 3,
      sym__type,
      sym_type_ident,
      aux_sym_variant_repeat1,
  [3520] = 6,
    ACTIONS(308), 1,
      anon_sym_RPAREN,
    ACTIONS(310), 1,
      anon_sym_COLONcost,
    STATE(98), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(206), 2,
      aux_sym_ident_token1,
      aux_sym_ident_token2,
    STATE(96), 3,
      sym__type,
      sym_type_ident,
      aux_sym_variant_repeat1,
  [3543] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(312), 8,
      anon_sym_RPAREN,
      anon_sym_COLONcost,
      anon_sym_COLONunextractable,
      anon_sym_COLONon_merge,
      anon_sym_COLONmerge,
      anon_sym_COLONdefault,
      aux_sym_ident_token1,
      aux_sym_ident_token2,
  [3558] = 5,
    STATE(98), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(314), 2,
      anon_sym_RPAREN,
      anon_sym_COLONcost,
    ACTIONS(316), 2,
      aux_sym_ident_token1,
      aux_sym_ident_token2,
    STATE(99), 3,
      sym__type,
      sym_type_ident,
      aux_sym_variant_repeat1,
  [3579] = 5,
    ACTIONS(319), 1,
      anon_sym_LPAREN,
    ACTIONS(322), 1,
      anon_sym_RPAREN,
    STATE(290), 1,
      sym_expr_call,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    STATE(100), 4,
      sym__fact,
      sym_fact_eq,
      sym_fact_call,
      aux_sym_command_run_repeat1,
  [3599] = 5,
    ACTIONS(324), 1,
      anon_sym_LPAREN,
    ACTIONS(326), 1,
      anon_sym_RPAREN,
    STATE(290), 1,
      sym_expr_call,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    STATE(100), 4,
      sym__fact,
      sym_fact_eq,
      sym_fact_call,
      aux_sym_command_run_repeat1,
  [3619] = 5,
    ACTIONS(324), 1,
      anon_sym_LPAREN,
    ACTIONS(328), 1,
      anon_sym_RPAREN,
    STATE(290), 1,
      sym_expr_call,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    STATE(117), 4,
      sym__fact,
      sym_fact_eq,
      sym_fact_call,
      aux_sym_command_run_repeat1,
  [3639] = 5,
    ACTIONS(324), 1,
      anon_sym_LPAREN,
    ACTIONS(330), 1,
      anon_sym_RPAREN,
    STATE(290), 1,
      sym_expr_call,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    STATE(101), 4,
      sym__fact,
      sym_fact_eq,
      sym_fact_call,
      aux_sym_command_run_repeat1,
  [3659] = 5,
    ACTIONS(332), 1,
      anon_sym_RPAREN,
    STATE(98), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(206), 2,
      aux_sym_ident_token1,
      aux_sym_ident_token2,
    STATE(110), 3,
      sym__type,
      sym_type_ident,
      aux_sym_variant_repeat1,
  [3679] = 5,
    ACTIONS(324), 1,
      anon_sym_LPAREN,
    ACTIONS(334), 1,
      anon_sym_RPAREN,
    STATE(290), 1,
      sym_expr_call,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    STATE(100), 4,
      sym__fact,
      sym_fact_eq,
      sym_fact_call,
      aux_sym_command_run_repeat1,
  [3699] = 5,
    ACTIONS(324), 1,
      anon_sym_LPAREN,
    ACTIONS(336), 1,
      anon_sym_RPAREN,
    STATE(290), 1,
      sym_expr_call,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    STATE(100), 4,
      sym__fact,
      sym_fact_eq,
      sym_fact_call,
      aux_sym_command_run_repeat1,
  [3719] = 5,
    ACTIONS(324), 1,
      anon_sym_LPAREN,
    ACTIONS(338), 1,
      anon_sym_RPAREN,
    STATE(290), 1,
      sym_expr_call,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    STATE(106), 4,
      sym__fact,
      sym_fact_eq,
      sym_fact_call,
      aux_sym_command_run_repeat1,
  [3739] = 5,
    ACTIONS(324), 1,
      anon_sym_LPAREN,
    ACTIONS(340), 1,
      anon_sym_RPAREN,
    STATE(290), 1,
      sym_expr_call,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    STATE(100), 4,
      sym__fact,
      sym_fact_eq,
      sym_fact_call,
      aux_sym_command_run_repeat1,
  [3759] = 5,
    ACTIONS(324), 1,
      anon_sym_LPAREN,
    ACTIONS(342), 1,
      anon_sym_RPAREN,
    STATE(290), 1,
      sym_expr_call,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    STATE(100), 4,
      sym__fact,
      sym_fact_eq,
      sym_fact_call,
      aux_sym_command_run_repeat1,
  [3779] = 5,
    ACTIONS(344), 1,
      anon_sym_RPAREN,
    STATE(98), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(206), 2,
      aux_sym_ident_token1,
      aux_sym_ident_token2,
    STATE(99), 3,
      sym__type,
      sym_type_ident,
      aux_sym_variant_repeat1,
  [3799] = 5,
    ACTIONS(324), 1,
      anon_sym_LPAREN,
    ACTIONS(346), 1,
      anon_sym_RPAREN,
    STATE(290), 1,
      sym_expr_call,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    STATE(100), 4,
      sym__fact,
      sym_fact_eq,
      sym_fact_call,
      aux_sym_command_run_repeat1,
  [3819] = 5,
    ACTIONS(324), 1,
      anon_sym_LPAREN,
    ACTIONS(348), 1,
      anon_sym_RPAREN,
    STATE(290), 1,
      sym_expr_call,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    STATE(100), 4,
      sym__fact,
      sym_fact_eq,
      sym_fact_call,
      aux_sym_command_run_repeat1,
  [3839] = 5,
    ACTIONS(324), 1,
      anon_sym_LPAREN,
    ACTIONS(350), 1,
      anon_sym_RPAREN,
    STATE(290), 1,
      sym_expr_call,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    STATE(112), 4,
      sym__fact,
      sym_fact_eq,
      sym_fact_call,
      aux_sym_command_run_repeat1,
  [3859] = 5,
    ACTIONS(324), 1,
      anon_sym_LPAREN,
    ACTIONS(352), 1,
      anon_sym_RPAREN,
    STATE(290), 1,
      sym_expr_call,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    STATE(111), 4,
      sym__fact,
      sym_fact_eq,
      sym_fact_call,
      aux_sym_command_run_repeat1,
  [3879] = 5,
    ACTIONS(324), 1,
      anon_sym_LPAREN,
    ACTIONS(354), 1,
      anon_sym_RPAREN,
    STATE(290), 1,
      sym_expr_call,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    STATE(105), 4,
      sym__fact,
      sym_fact_eq,
      sym_fact_call,
      aux_sym_command_run_repeat1,
  [3899] = 5,
    ACTIONS(324), 1,
      anon_sym_LPAREN,
    ACTIONS(356), 1,
      anon_sym_RPAREN,
    STATE(290), 1,
      sym_expr_call,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    STATE(109), 4,
      sym__fact,
      sym_fact_eq,
      sym_fact_call,
      aux_sym_command_run_repeat1,
  [3919] = 5,
    ACTIONS(324), 1,
      anon_sym_LPAREN,
    ACTIONS(358), 1,
      anon_sym_RPAREN,
    STATE(290), 1,
      sym_expr_call,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    STATE(100), 4,
      sym__fact,
      sym_fact_eq,
      sym_fact_call,
      aux_sym_command_run_repeat1,
  [3939] = 5,
    ACTIONS(324), 1,
      anon_sym_LPAREN,
    ACTIONS(360), 1,
      anon_sym_RPAREN,
    STATE(290), 1,
      sym_expr_call,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    STATE(108), 4,
      sym__fact,
      sym_fact_eq,
      sym_fact_call,
      aux_sym_command_run_repeat1,
  [3959] = 7,
    ACTIONS(362), 1,
      anon_sym_RPAREN,
    ACTIONS(364), 1,
      anon_sym_COLONcost,
    ACTIONS(366), 1,
      anon_sym_COLONunextractable,
    ACTIONS(368), 1,
      anon_sym_COLONon_merge,
    ACTIONS(370), 1,
      anon_sym_COLONmerge,
    ACTIONS(372), 1,
      anon_sym_COLONdefault,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
  [3982] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(374), 6,
      anon_sym_RPAREN,
      anon_sym_COLONcost,
      anon_sym_COLONunextractable,
      anon_sym_COLONon_merge,
      anon_sym_COLONmerge,
      anon_sym_COLONdefault,
  [3995] = 4,
    ACTIONS(376), 1,
      anon_sym_LPAREN,
    ACTIONS(379), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    STATE(121), 3,
      sym__sort,
      sym_sort_ident,
      aux_sym__sorts_repeat1,
  [4011] = 4,
    STATE(98), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(84), 2,
      aux_sym_ident_token1,
      aux_sym_ident_token2,
    STATE(343), 2,
      sym__type,
      sym_type_ident,
  [4027] = 4,
    STATE(98), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(84), 2,
      aux_sym_ident_token1,
      aux_sym_ident_token2,
    STATE(120), 2,
      sym__type,
      sym_type_ident,
  [4043] = 4,
    ACTIONS(381), 1,
      anon_sym_LPAREN,
    ACTIONS(383), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    STATE(126), 3,
      sym__sort,
      sym_sort_ident,
      aux_sym__sorts_repeat1,
  [4059] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(385), 5,
      anon_sym_RPAREN,
      anon_sym_COLONmerge,
      anon_sym_COLONdefault,
      anon_sym_COLONruleset,
      anon_sym_COLONname,
  [4071] = 4,
    ACTIONS(381), 1,
      anon_sym_LPAREN,
    ACTIONS(387), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    STATE(121), 3,
      sym__sort,
      sym_sort_ident,
      aux_sym__sorts_repeat1,
  [4087] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(389), 5,
      anon_sym_RPAREN,
      anon_sym_COLONmerge,
      anon_sym_COLONdefault,
      anon_sym_COLONruleset,
      anon_sym_COLONname,
  [4099] = 6,
    ACTIONS(391), 1,
      anon_sym_RPAREN,
    ACTIONS(393), 1,
      anon_sym_COLONunextractable,
    ACTIONS(395), 1,
      anon_sym_COLONon_merge,
    ACTIONS(397), 1,
      anon_sym_COLONmerge,
    ACTIONS(399), 1,
      anon_sym_COLONdefault,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
  [4119] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(127), 5,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COLONcost,
      aux_sym_ident_token1,
      aux_sym_ident_token2,
  [4131] = 5,
    ACTIONS(401), 1,
      anon_sym_RPAREN,
    ACTIONS(403), 1,
      anon_sym_COLONuntil,
    STATE(278), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(84), 2,
      aux_sym_ident_token1,
      aux_sym_ident_token2,
  [4149] = 5,
    ACTIONS(405), 1,
      anon_sym_RPAREN,
    ACTIONS(407), 1,
      anon_sym_COLONuntil,
    STATE(279), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(84), 2,
      aux_sym_ident_token1,
      aux_sym_ident_token2,
  [4167] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(254), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_ident_token1,
      aux_sym_ident_token2,
  [4178] = 5,
    ACTIONS(409), 1,
      anon_sym_RPAREN,
    ACTIONS(411), 1,
      anon_sym_COLONon_merge,
    ACTIONS(413), 1,
      anon_sym_COLONmerge,
    ACTIONS(415), 1,
      anon_sym_COLONdefault,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
  [4195] = 4,
    ACTIONS(417), 1,
      anon_sym_LPAREN,
    ACTIONS(419), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    STATE(141), 2,
      sym_variant,
      aux_sym_command_datatype_repeat1,
  [4210] = 5,
    ACTIONS(82), 1,
      aux_sym_ident_token2,
    ACTIONS(84), 1,
      aux_sym_ident_token1,
    ACTIONS(421), 1,
      sym_literal_int,
    STATE(317), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
  [4227] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(278), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_ident_token1,
      aux_sym_ident_token2,
  [4238] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(266), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_ident_token1,
      aux_sym_ident_token2,
  [4249] = 4,
    ACTIONS(417), 1,
      anon_sym_LPAREN,
    ACTIONS(423), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    STATE(134), 2,
      sym_variant,
      aux_sym_command_datatype_repeat1,
  [4264] = 5,
    ACTIONS(425), 1,
      anon_sym_run,
    ACTIONS(427), 1,
      anon_sym_saturate,
    ACTIONS(429), 1,
      anon_sym_seq,
    ACTIONS(431), 1,
      anon_sym_repeat,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
  [4281] = 5,
    ACTIONS(433), 1,
      anon_sym_RPAREN,
    ACTIONS(435), 1,
      anon_sym_COLONon_merge,
    ACTIONS(437), 1,
      anon_sym_COLONmerge,
    ACTIONS(439), 1,
      anon_sym_COLONdefault,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
  [4298] = 4,
    ACTIONS(441), 1,
      anon_sym_LPAREN,
    ACTIONS(444), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    STATE(141), 2,
      sym_variant,
      aux_sym_command_datatype_repeat1,
  [4313] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(282), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_ident_token1,
      aux_sym_ident_token2,
  [4324] = 5,
    ACTIONS(446), 1,
      anon_sym_RPAREN,
    ACTIONS(448), 1,
      anon_sym_COLONruleset,
    ACTIONS(450), 1,
      anon_sym_COLONsubsume,
    ACTIONS(452), 1,
      anon_sym_COLONwhen,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
  [4341] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(290), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_ident_token1,
      aux_sym_ident_token2,
  [4352] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(294), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_ident_token1,
      aux_sym_ident_token2,
  [4363] = 4,
    ACTIONS(454), 1,
      anon_sym_RPAREN,
    STATE(6), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(84), 2,
      aux_sym_ident_token1,
      aux_sym_ident_token2,
  [4378] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(286), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_ident_token1,
      aux_sym_ident_token2,
  [4389] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(274), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_ident_token1,
      aux_sym_ident_token2,
  [4400] = 5,
    ACTIONS(82), 1,
      aux_sym_ident_token2,
    ACTIONS(84), 1,
      aux_sym_ident_token1,
    ACTIONS(456), 1,
      anon_sym_EQ,
    STATE(6), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
  [4417] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(298), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_ident_token1,
      aux_sym_ident_token2,
  [4428] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(258), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_ident_token1,
      aux_sym_ident_token2,
  [4439] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(262), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_ident_token1,
      aux_sym_ident_token2,
  [4450] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(250), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_ident_token1,
      aux_sym_ident_token2,
  [4461] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(270), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_ident_token1,
      aux_sym_ident_token2,
  [4472] = 5,
    ACTIONS(458), 1,
      anon_sym_run,
    ACTIONS(460), 1,
      anon_sym_saturate,
    ACTIONS(462), 1,
      anon_sym_seq,
    ACTIONS(464), 1,
      anon_sym_repeat,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
  [4489] = 4,
    ACTIONS(466), 1,
      anon_sym_RPAREN,
    STATE(333), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(84), 2,
      aux_sym_ident_token1,
      aux_sym_ident_token2,
  [4504] = 3,
    STATE(311), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(84), 2,
      aux_sym_ident_token1,
      aux_sym_ident_token2,
  [4516] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(468), 3,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [4526] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(470), 3,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [4536] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(472), 3,
      anon_sym_RPAREN,
      aux_sym_ident_token1,
      aux_sym_ident_token2,
  [4546] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(474), 3,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [4556] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(476), 3,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [4566] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(478), 3,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [4576] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(480), 3,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [4586] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(482), 3,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [4596] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(484), 3,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [4606] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(486), 3,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [4616] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(488), 3,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [4626] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(490), 3,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [4636] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(492), 3,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [4646] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(494), 3,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [4656] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(496), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COLONruleset,
  [4666] = 3,
    STATE(44), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(84), 2,
      aux_sym_ident_token1,
      aux_sym_ident_token2,
  [4678] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(498), 3,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [4688] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(500), 3,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [4698] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(502), 3,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [4708] = 3,
    STATE(300), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(84), 2,
      aux_sym_ident_token1,
      aux_sym_ident_token2,
  [4720] = 3,
    STATE(138), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(84), 2,
      aux_sym_ident_token1,
      aux_sym_ident_token2,
  [4732] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(504), 3,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [4742] = 3,
    STATE(314), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(84), 2,
      aux_sym_ident_token1,
      aux_sym_ident_token2,
  [4754] = 4,
    ACTIONS(506), 1,
      anon_sym_RPAREN,
    ACTIONS(508), 1,
      anon_sym_COLONruleset,
    ACTIONS(510), 1,
      anon_sym_COLONwhen,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
  [4768] = 3,
    STATE(287), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(84), 2,
      aux_sym_ident_token1,
      aux_sym_ident_token2,
  [4780] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(512), 3,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [4790] = 3,
    STATE(211), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(84), 2,
      aux_sym_ident_token1,
      aux_sym_ident_token2,
  [4802] = 3,
    STATE(217), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(206), 2,
      aux_sym_ident_token1,
      aux_sym_ident_token2,
  [4814] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(514), 3,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [4824] = 3,
    STATE(294), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(84), 2,
      aux_sym_ident_token1,
      aux_sym_ident_token2,
  [4836] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(516), 3,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [4846] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(518), 3,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [4856] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(520), 3,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [4866] = 3,
    STATE(328), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(84), 2,
      aux_sym_ident_token1,
      aux_sym_ident_token2,
  [4878] = 3,
    STATE(337), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(84), 2,
      aux_sym_ident_token1,
      aux_sym_ident_token2,
  [4890] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(522), 3,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [4900] = 3,
    STATE(11), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(84), 2,
      aux_sym_ident_token1,
      aux_sym_ident_token2,
  [4912] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(524), 3,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [4922] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(526), 3,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [4932] = 3,
    STATE(122), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(206), 2,
      aux_sym_ident_token1,
      aux_sym_ident_token2,
  [4944] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(528), 3,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [4954] = 3,
    STATE(330), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(84), 2,
      aux_sym_ident_token1,
      aux_sym_ident_token2,
  [4966] = 3,
    STATE(37), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(84), 2,
      aux_sym_ident_token1,
      aux_sym_ident_token2,
  [4978] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(530), 3,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [4988] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(532), 3,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [4998] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(534), 3,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [5008] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(536), 3,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [5018] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(538), 3,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [5028] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(540), 3,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [5038] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(542), 3,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [5048] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(544), 3,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [5058] = 4,
    ACTIONS(546), 1,
      anon_sym_RPAREN,
    ACTIONS(548), 1,
      anon_sym_COLONruleset,
    ACTIONS(550), 1,
      anon_sym_COLONwhen,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
  [5072] = 4,
    ACTIONS(552), 1,
      anon_sym_RPAREN,
    ACTIONS(554), 1,
      anon_sym_COLONruleset,
    ACTIONS(556), 1,
      anon_sym_COLONname,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
  [5086] = 4,
    ACTIONS(558), 1,
      anon_sym_LPAREN,
    STATE(119), 1,
      sym_schema,
    STATE(123), 1,
      sym__types,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
  [5100] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(560), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COLONruleset,
  [5110] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(562), 3,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [5120] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(564), 3,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [5130] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(566), 3,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [5140] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(568), 3,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [5150] = 3,
    STATE(327), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(84), 2,
      aux_sym_ident_token1,
      aux_sym_ident_token2,
  [5162] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(570), 3,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [5172] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(572), 3,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [5182] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(574), 3,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [5192] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(576), 3,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [5202] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(578), 3,
      anon_sym_RPAREN,
      aux_sym_ident_token1,
      aux_sym_ident_token2,
  [5212] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(580), 3,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [5222] = 3,
    STATE(8), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(84), 2,
      aux_sym_ident_token1,
      aux_sym_ident_token2,
  [5234] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(582), 3,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [5244] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(584), 3,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [5254] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(586), 3,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [5264] = 3,
    STATE(97), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(206), 2,
      aux_sym_ident_token1,
      aux_sym_ident_token2,
  [5276] = 4,
    ACTIONS(391), 1,
      anon_sym_RPAREN,
    ACTIONS(397), 1,
      anon_sym_COLONmerge,
    ACTIONS(399), 1,
      anon_sym_COLONdefault,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
  [5290] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(588), 3,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [5300] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(590), 3,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [5310] = 4,
    ACTIONS(592), 1,
      anon_sym_RPAREN,
    ACTIONS(594), 1,
      anon_sym_COLONmerge,
    ACTIONS(596), 1,
      anon_sym_COLONdefault,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
  [5324] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(598), 3,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [5334] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(600), 3,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [5344] = 3,
    STATE(324), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(84), 2,
      aux_sym_ident_token1,
      aux_sym_ident_token2,
  [5356] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(602), 3,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [5366] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(604), 3,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [5376] = 3,
    STATE(359), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(84), 2,
      aux_sym_ident_token1,
      aux_sym_ident_token2,
  [5388] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(606), 3,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [5398] = 4,
    ACTIONS(608), 1,
      anon_sym_RPAREN,
    ACTIONS(610), 1,
      anon_sym_COLONmerge,
    ACTIONS(612), 1,
      anon_sym_COLONdefault,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
  [5412] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(614), 3,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [5422] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(616), 3,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [5432] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(618), 3,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [5442] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(620), 3,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [5452] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(622), 3,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [5462] = 3,
    STATE(12), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(84), 2,
      aux_sym_ident_token1,
      aux_sym_ident_token2,
  [5474] = 3,
    STATE(13), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(84), 2,
      aux_sym_ident_token1,
      aux_sym_ident_token2,
  [5486] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(624), 3,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [5496] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(626), 3,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [5506] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(628), 3,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [5516] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(630), 3,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [5526] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(632), 3,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [5536] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(634), 3,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [5546] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(636), 3,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [5556] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(638), 3,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [5566] = 3,
    STATE(316), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(84), 2,
      aux_sym_ident_token1,
      aux_sym_ident_token2,
  [5578] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(640), 3,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [5588] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(642), 3,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [5598] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(644), 3,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [5608] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(646), 3,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [5618] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(648), 3,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [5628] = 3,
    STATE(315), 1,
      sym_ident,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(84), 2,
      aux_sym_ident_token1,
      aux_sym_ident_token2,
  [5640] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(650), 3,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [5650] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(652), 3,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [5660] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(654), 3,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [5670] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(656), 3,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [5680] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(658), 3,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [5690] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(660), 3,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [5700] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(662), 3,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [5710] = 4,
    ACTIONS(433), 1,
      anon_sym_RPAREN,
    ACTIONS(437), 1,
      anon_sym_COLONmerge,
    ACTIONS(439), 1,
      anon_sym_COLONdefault,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
  [5724] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(664), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [5733] = 3,
    ACTIONS(608), 1,
      anon_sym_RPAREN,
    ACTIONS(612), 1,
      anon_sym_COLONdefault,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
  [5744] = 3,
    ACTIONS(666), 1,
      anon_sym_LPAREN,
    STATE(240), 1,
      sym__actions,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
  [5755] = 3,
    ACTIONS(433), 1,
      anon_sym_RPAREN,
    ACTIONS(439), 1,
      anon_sym_COLONdefault,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
  [5766] = 3,
    ACTIONS(666), 1,
      anon_sym_LPAREN,
    STATE(229), 1,
      sym__actions,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
  [5777] = 3,
    ACTIONS(668), 1,
      anon_sym_LPAREN,
    STATE(303), 1,
      sym__facts,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
  [5788] = 3,
    ACTIONS(668), 1,
      anon_sym_LPAREN,
    STATE(301), 1,
      sym__facts,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
  [5799] = 3,
    ACTIONS(670), 1,
      anon_sym_RPAREN,
    ACTIONS(672), 1,
      anon_sym_COLONuntil,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
  [5810] = 3,
    ACTIONS(674), 1,
      anon_sym_RPAREN,
    ACTIONS(676), 1,
      anon_sym_COLONuntil,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
  [5821] = 3,
    ACTIONS(668), 1,
      anon_sym_LPAREN,
    STATE(297), 1,
      sym__facts,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
  [5832] = 3,
    ACTIONS(678), 1,
      anon_sym_RPAREN,
    ACTIONS(680), 1,
      anon_sym_COLONruleset,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
  [5843] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(682), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [5852] = 3,
    ACTIONS(684), 1,
      anon_sym_LPAREN,
    STATE(16), 1,
      sym__sorts,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
  [5863] = 3,
    ACTIONS(686), 1,
      anon_sym_RPAREN,
    ACTIONS(688), 1,
      sym_literal_int,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
  [5874] = 3,
    ACTIONS(690), 1,
      anon_sym_RPAREN,
    ACTIONS(692), 1,
      sym_literal_int,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
  [5885] = 3,
    ACTIONS(694), 1,
      anon_sym_RPAREN,
    ACTIONS(696), 1,
      anon_sym_COLONuntil,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
  [5896] = 3,
    ACTIONS(698), 1,
      anon_sym_LPAREN,
    ACTIONS(700), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
  [5907] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(702), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [5916] = 3,
    ACTIONS(704), 1,
      anon_sym_RPAREN,
    ACTIONS(706), 1,
      anon_sym_COLONdefault,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
  [5927] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(708), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [5936] = 3,
    ACTIONS(710), 1,
      anon_sym_RPAREN,
    ACTIONS(712), 1,
      anon_sym_COLONdefault,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
  [5947] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(714), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [5956] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(716), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [5965] = 3,
    ACTIONS(558), 1,
      anon_sym_LPAREN,
    STATE(335), 1,
      sym__types,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
  [5976] = 3,
    ACTIONS(666), 1,
      anon_sym_LPAREN,
    STATE(270), 1,
      sym__actions,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
  [5987] = 3,
    ACTIONS(391), 1,
      anon_sym_RPAREN,
    ACTIONS(399), 1,
      anon_sym_COLONdefault,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
  [5998] = 3,
    ACTIONS(666), 1,
      anon_sym_LPAREN,
    STATE(210), 1,
      sym__actions,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
  [6009] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
    ACTIONS(718), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [6018] = 3,
    ACTIONS(592), 1,
      anon_sym_RPAREN,
    ACTIONS(596), 1,
      anon_sym_COLONdefault,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
  [6029] = 3,
    ACTIONS(720), 1,
      anon_sym_RPAREN,
    ACTIONS(722), 1,
      anon_sym_COLONname,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
  [6040] = 3,
    ACTIONS(724), 1,
      anon_sym_RPAREN,
    ACTIONS(726), 1,
      anon_sym_COLONruleset,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
  [6051] = 3,
    ACTIONS(666), 1,
      anon_sym_LPAREN,
    STATE(232), 1,
      sym__actions,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
  [6062] = 3,
    ACTIONS(728), 1,
      anon_sym_RPAREN,
    ACTIONS(730), 1,
      anon_sym_COLONruleset,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
  [6073] = 3,
    ACTIONS(668), 1,
      anon_sym_LPAREN,
    STATE(281), 1,
      sym__facts,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
  [6084] = 3,
    ACTIONS(732), 1,
      anon_sym_RPAREN,
    ACTIONS(734), 1,
      anon_sym_COLONuntil,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
  [6095] = 2,
    ACTIONS(592), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
  [6103] = 2,
    ACTIONS(736), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
  [6111] = 2,
    ACTIONS(738), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
  [6119] = 2,
    ACTIONS(740), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
  [6127] = 2,
    ACTIONS(742), 1,
      sym_literal_int,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
  [6135] = 2,
    ACTIONS(744), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
  [6143] = 2,
    ACTIONS(608), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
  [6151] = 2,
    ACTIONS(746), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
  [6159] = 2,
    ACTIONS(748), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
  [6167] = 2,
    ACTIONS(750), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
  [6175] = 2,
    ACTIONS(752), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
  [6183] = 2,
    ACTIONS(754), 1,
      sym_literal_int,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
  [6191] = 2,
    ACTIONS(756), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
  [6199] = 2,
    ACTIONS(758), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
  [6207] = 2,
    ACTIONS(760), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
  [6215] = 2,
    ACTIONS(762), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
  [6223] = 2,
    ACTIONS(433), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
  [6231] = 2,
    ACTIONS(391), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
  [6239] = 2,
    ACTIONS(764), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
  [6247] = 2,
    ACTIONS(766), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
  [6255] = 2,
    ACTIONS(768), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
  [6263] = 2,
    ACTIONS(770), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
  [6271] = 2,
    ACTIONS(772), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
  [6279] = 2,
    ACTIONS(774), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
  [6287] = 2,
    ACTIONS(776), 1,
      sym_literal_string,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
  [6295] = 2,
    ACTIONS(710), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
  [6303] = 2,
    ACTIONS(778), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
  [6311] = 2,
    ACTIONS(780), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
  [6319] = 2,
    ACTIONS(704), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
  [6327] = 2,
    ACTIONS(782), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
  [6335] = 2,
    ACTIONS(784), 1,
      sym_literal_int,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
  [6343] = 2,
    ACTIONS(786), 1,
      sym_literal_int,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
  [6351] = 2,
    ACTIONS(788), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
  [6359] = 2,
    ACTIONS(790), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
  [6367] = 2,
    ACTIONS(792), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
  [6375] = 2,
    ACTIONS(794), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
  [6383] = 2,
    ACTIONS(796), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
  [6391] = 2,
    ACTIONS(798), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
  [6399] = 2,
    ACTIONS(800), 1,
      sym_literal_string,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
  [6407] = 2,
    ACTIONS(802), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
  [6415] = 2,
    ACTIONS(804), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
  [6423] = 2,
    ACTIONS(806), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
  [6431] = 2,
    ACTIONS(808), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
  [6439] = 2,
    ACTIONS(810), 1,
      sym_literal_string,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
  [6447] = 2,
    ACTIONS(812), 1,
      sym_literal_string,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
  [6455] = 2,
    ACTIONS(814), 1,
      sym_literal_int,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
  [6463] = 2,
    ACTIONS(816), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
  [6471] = 2,
    ACTIONS(818), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
  [6479] = 2,
    ACTIONS(820), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
  [6487] = 2,
    ACTIONS(822), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
  [6495] = 2,
    ACTIONS(824), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
  [6503] = 2,
    ACTIONS(826), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
  [6511] = 2,
    ACTIONS(828), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
  [6519] = 2,
    ACTIONS(830), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
  [6527] = 2,
    ACTIONS(832), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
  [6535] = 2,
    ACTIONS(834), 1,
      sym_literal_int,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
  [6543] = 2,
    ACTIONS(836), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
  [6551] = 2,
    ACTIONS(838), 1,
      sym_literal_int,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
  [6559] = 2,
    ACTIONS(840), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
  [6567] = 2,
    ACTIONS(842), 1,
      sym_literal_string,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
  [6575] = 2,
    ACTIONS(844), 1,
      sym_literal_string,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
  [6583] = 2,
    ACTIONS(846), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
  [6591] = 2,
    ACTIONS(848), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
  [6599] = 2,
    ACTIONS(850), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
  [6607] = 2,
    ACTIONS(852), 1,
      sym_literal_int,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_line_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 58,
  [SMALL_STATE(4)] = 116,
  [SMALL_STATE(5)] = 170,
  [SMALL_STATE(6)] = 283,
  [SMALL_STATE(7)] = 332,
  [SMALL_STATE(8)] = 381,
  [SMALL_STATE(9)] = 430,
  [SMALL_STATE(10)] = 479,
  [SMALL_STATE(11)] = 510,
  [SMALL_STATE(12)] = 559,
  [SMALL_STATE(13)] = 608,
  [SMALL_STATE(14)] = 657,
  [SMALL_STATE(15)] = 706,
  [SMALL_STATE(16)] = 755,
  [SMALL_STATE(17)] = 804,
  [SMALL_STATE(18)] = 853,
  [SMALL_STATE(19)] = 902,
  [SMALL_STATE(20)] = 951,
  [SMALL_STATE(21)] = 1000,
  [SMALL_STATE(22)] = 1049,
  [SMALL_STATE(23)] = 1095,
  [SMALL_STATE(24)] = 1143,
  [SMALL_STATE(25)] = 1191,
  [SMALL_STATE(26)] = 1239,
  [SMALL_STATE(27)] = 1284,
  [SMALL_STATE(28)] = 1329,
  [SMALL_STATE(29)] = 1374,
  [SMALL_STATE(30)] = 1419,
  [SMALL_STATE(31)] = 1464,
  [SMALL_STATE(32)] = 1509,
  [SMALL_STATE(33)] = 1554,
  [SMALL_STATE(34)] = 1599,
  [SMALL_STATE(35)] = 1644,
  [SMALL_STATE(36)] = 1689,
  [SMALL_STATE(37)] = 1734,
  [SMALL_STATE(38)] = 1779,
  [SMALL_STATE(39)] = 1824,
  [SMALL_STATE(40)] = 1869,
  [SMALL_STATE(41)] = 1914,
  [SMALL_STATE(42)] = 1959,
  [SMALL_STATE(43)] = 2004,
  [SMALL_STATE(44)] = 2049,
  [SMALL_STATE(45)] = 2094,
  [SMALL_STATE(46)] = 2139,
  [SMALL_STATE(47)] = 2184,
  [SMALL_STATE(48)] = 2229,
  [SMALL_STATE(49)] = 2274,
  [SMALL_STATE(50)] = 2319,
  [SMALL_STATE(51)] = 2364,
  [SMALL_STATE(52)] = 2409,
  [SMALL_STATE(53)] = 2454,
  [SMALL_STATE(54)] = 2480,
  [SMALL_STATE(55)] = 2506,
  [SMALL_STATE(56)] = 2531,
  [SMALL_STATE(57)] = 2556,
  [SMALL_STATE(58)] = 2581,
  [SMALL_STATE(59)] = 2606,
  [SMALL_STATE(60)] = 2631,
  [SMALL_STATE(61)] = 2657,
  [SMALL_STATE(62)] = 2683,
  [SMALL_STATE(63)] = 2709,
  [SMALL_STATE(64)] = 2732,
  [SMALL_STATE(65)] = 2759,
  [SMALL_STATE(66)] = 2786,
  [SMALL_STATE(67)] = 2807,
  [SMALL_STATE(68)] = 2834,
  [SMALL_STATE(69)] = 2861,
  [SMALL_STATE(70)] = 2888,
  [SMALL_STATE(71)] = 2915,
  [SMALL_STATE(72)] = 2942,
  [SMALL_STATE(73)] = 2969,
  [SMALL_STATE(74)] = 2990,
  [SMALL_STATE(75)] = 3017,
  [SMALL_STATE(76)] = 3044,
  [SMALL_STATE(77)] = 3071,
  [SMALL_STATE(78)] = 3098,
  [SMALL_STATE(79)] = 3125,
  [SMALL_STATE(80)] = 3152,
  [SMALL_STATE(81)] = 3179,
  [SMALL_STATE(82)] = 3199,
  [SMALL_STATE(83)] = 3219,
  [SMALL_STATE(84)] = 3239,
  [SMALL_STATE(85)] = 3259,
  [SMALL_STATE(86)] = 3279,
  [SMALL_STATE(87)] = 3299,
  [SMALL_STATE(88)] = 3319,
  [SMALL_STATE(89)] = 3339,
  [SMALL_STATE(90)] = 3359,
  [SMALL_STATE(91)] = 3379,
  [SMALL_STATE(92)] = 3399,
  [SMALL_STATE(93)] = 3419,
  [SMALL_STATE(94)] = 3439,
  [SMALL_STATE(95)] = 3462,
  [SMALL_STATE(96)] = 3497,
  [SMALL_STATE(97)] = 3520,
  [SMALL_STATE(98)] = 3543,
  [SMALL_STATE(99)] = 3558,
  [SMALL_STATE(100)] = 3579,
  [SMALL_STATE(101)] = 3599,
  [SMALL_STATE(102)] = 3619,
  [SMALL_STATE(103)] = 3639,
  [SMALL_STATE(104)] = 3659,
  [SMALL_STATE(105)] = 3679,
  [SMALL_STATE(106)] = 3699,
  [SMALL_STATE(107)] = 3719,
  [SMALL_STATE(108)] = 3739,
  [SMALL_STATE(109)] = 3759,
  [SMALL_STATE(110)] = 3779,
  [SMALL_STATE(111)] = 3799,
  [SMALL_STATE(112)] = 3819,
  [SMALL_STATE(113)] = 3839,
  [SMALL_STATE(114)] = 3859,
  [SMALL_STATE(115)] = 3879,
  [SMALL_STATE(116)] = 3899,
  [SMALL_STATE(117)] = 3919,
  [SMALL_STATE(118)] = 3939,
  [SMALL_STATE(119)] = 3959,
  [SMALL_STATE(120)] = 3982,
  [SMALL_STATE(121)] = 3995,
  [SMALL_STATE(122)] = 4011,
  [SMALL_STATE(123)] = 4027,
  [SMALL_STATE(124)] = 4043,
  [SMALL_STATE(125)] = 4059,
  [SMALL_STATE(126)] = 4071,
  [SMALL_STATE(127)] = 4087,
  [SMALL_STATE(128)] = 4099,
  [SMALL_STATE(129)] = 4119,
  [SMALL_STATE(130)] = 4131,
  [SMALL_STATE(131)] = 4149,
  [SMALL_STATE(132)] = 4167,
  [SMALL_STATE(133)] = 4178,
  [SMALL_STATE(134)] = 4195,
  [SMALL_STATE(135)] = 4210,
  [SMALL_STATE(136)] = 4227,
  [SMALL_STATE(137)] = 4238,
  [SMALL_STATE(138)] = 4249,
  [SMALL_STATE(139)] = 4264,
  [SMALL_STATE(140)] = 4281,
  [SMALL_STATE(141)] = 4298,
  [SMALL_STATE(142)] = 4313,
  [SMALL_STATE(143)] = 4324,
  [SMALL_STATE(144)] = 4341,
  [SMALL_STATE(145)] = 4352,
  [SMALL_STATE(146)] = 4363,
  [SMALL_STATE(147)] = 4378,
  [SMALL_STATE(148)] = 4389,
  [SMALL_STATE(149)] = 4400,
  [SMALL_STATE(150)] = 4417,
  [SMALL_STATE(151)] = 4428,
  [SMALL_STATE(152)] = 4439,
  [SMALL_STATE(153)] = 4450,
  [SMALL_STATE(154)] = 4461,
  [SMALL_STATE(155)] = 4472,
  [SMALL_STATE(156)] = 4489,
  [SMALL_STATE(157)] = 4504,
  [SMALL_STATE(158)] = 4516,
  [SMALL_STATE(159)] = 4526,
  [SMALL_STATE(160)] = 4536,
  [SMALL_STATE(161)] = 4546,
  [SMALL_STATE(162)] = 4556,
  [SMALL_STATE(163)] = 4566,
  [SMALL_STATE(164)] = 4576,
  [SMALL_STATE(165)] = 4586,
  [SMALL_STATE(166)] = 4596,
  [SMALL_STATE(167)] = 4606,
  [SMALL_STATE(168)] = 4616,
  [SMALL_STATE(169)] = 4626,
  [SMALL_STATE(170)] = 4636,
  [SMALL_STATE(171)] = 4646,
  [SMALL_STATE(172)] = 4656,
  [SMALL_STATE(173)] = 4666,
  [SMALL_STATE(174)] = 4678,
  [SMALL_STATE(175)] = 4688,
  [SMALL_STATE(176)] = 4698,
  [SMALL_STATE(177)] = 4708,
  [SMALL_STATE(178)] = 4720,
  [SMALL_STATE(179)] = 4732,
  [SMALL_STATE(180)] = 4742,
  [SMALL_STATE(181)] = 4754,
  [SMALL_STATE(182)] = 4768,
  [SMALL_STATE(183)] = 4780,
  [SMALL_STATE(184)] = 4790,
  [SMALL_STATE(185)] = 4802,
  [SMALL_STATE(186)] = 4814,
  [SMALL_STATE(187)] = 4824,
  [SMALL_STATE(188)] = 4836,
  [SMALL_STATE(189)] = 4846,
  [SMALL_STATE(190)] = 4856,
  [SMALL_STATE(191)] = 4866,
  [SMALL_STATE(192)] = 4878,
  [SMALL_STATE(193)] = 4890,
  [SMALL_STATE(194)] = 4900,
  [SMALL_STATE(195)] = 4912,
  [SMALL_STATE(196)] = 4922,
  [SMALL_STATE(197)] = 4932,
  [SMALL_STATE(198)] = 4944,
  [SMALL_STATE(199)] = 4954,
  [SMALL_STATE(200)] = 4966,
  [SMALL_STATE(201)] = 4978,
  [SMALL_STATE(202)] = 4988,
  [SMALL_STATE(203)] = 4998,
  [SMALL_STATE(204)] = 5008,
  [SMALL_STATE(205)] = 5018,
  [SMALL_STATE(206)] = 5028,
  [SMALL_STATE(207)] = 5038,
  [SMALL_STATE(208)] = 5048,
  [SMALL_STATE(209)] = 5058,
  [SMALL_STATE(210)] = 5072,
  [SMALL_STATE(211)] = 5086,
  [SMALL_STATE(212)] = 5100,
  [SMALL_STATE(213)] = 5110,
  [SMALL_STATE(214)] = 5120,
  [SMALL_STATE(215)] = 5130,
  [SMALL_STATE(216)] = 5140,
  [SMALL_STATE(217)] = 5150,
  [SMALL_STATE(218)] = 5162,
  [SMALL_STATE(219)] = 5172,
  [SMALL_STATE(220)] = 5182,
  [SMALL_STATE(221)] = 5192,
  [SMALL_STATE(222)] = 5202,
  [SMALL_STATE(223)] = 5212,
  [SMALL_STATE(224)] = 5222,
  [SMALL_STATE(225)] = 5234,
  [SMALL_STATE(226)] = 5244,
  [SMALL_STATE(227)] = 5254,
  [SMALL_STATE(228)] = 5264,
  [SMALL_STATE(229)] = 5276,
  [SMALL_STATE(230)] = 5290,
  [SMALL_STATE(231)] = 5300,
  [SMALL_STATE(232)] = 5310,
  [SMALL_STATE(233)] = 5324,
  [SMALL_STATE(234)] = 5334,
  [SMALL_STATE(235)] = 5344,
  [SMALL_STATE(236)] = 5356,
  [SMALL_STATE(237)] = 5366,
  [SMALL_STATE(238)] = 5376,
  [SMALL_STATE(239)] = 5388,
  [SMALL_STATE(240)] = 5398,
  [SMALL_STATE(241)] = 5412,
  [SMALL_STATE(242)] = 5422,
  [SMALL_STATE(243)] = 5432,
  [SMALL_STATE(244)] = 5442,
  [SMALL_STATE(245)] = 5452,
  [SMALL_STATE(246)] = 5462,
  [SMALL_STATE(247)] = 5474,
  [SMALL_STATE(248)] = 5486,
  [SMALL_STATE(249)] = 5496,
  [SMALL_STATE(250)] = 5506,
  [SMALL_STATE(251)] = 5516,
  [SMALL_STATE(252)] = 5526,
  [SMALL_STATE(253)] = 5536,
  [SMALL_STATE(254)] = 5546,
  [SMALL_STATE(255)] = 5556,
  [SMALL_STATE(256)] = 5566,
  [SMALL_STATE(257)] = 5578,
  [SMALL_STATE(258)] = 5588,
  [SMALL_STATE(259)] = 5598,
  [SMALL_STATE(260)] = 5608,
  [SMALL_STATE(261)] = 5618,
  [SMALL_STATE(262)] = 5628,
  [SMALL_STATE(263)] = 5640,
  [SMALL_STATE(264)] = 5650,
  [SMALL_STATE(265)] = 5660,
  [SMALL_STATE(266)] = 5670,
  [SMALL_STATE(267)] = 5680,
  [SMALL_STATE(268)] = 5690,
  [SMALL_STATE(269)] = 5700,
  [SMALL_STATE(270)] = 5710,
  [SMALL_STATE(271)] = 5724,
  [SMALL_STATE(272)] = 5733,
  [SMALL_STATE(273)] = 5744,
  [SMALL_STATE(274)] = 5755,
  [SMALL_STATE(275)] = 5766,
  [SMALL_STATE(276)] = 5777,
  [SMALL_STATE(277)] = 5788,
  [SMALL_STATE(278)] = 5799,
  [SMALL_STATE(279)] = 5810,
  [SMALL_STATE(280)] = 5821,
  [SMALL_STATE(281)] = 5832,
  [SMALL_STATE(282)] = 5843,
  [SMALL_STATE(283)] = 5852,
  [SMALL_STATE(284)] = 5863,
  [SMALL_STATE(285)] = 5874,
  [SMALL_STATE(286)] = 5885,
  [SMALL_STATE(287)] = 5896,
  [SMALL_STATE(288)] = 5907,
  [SMALL_STATE(289)] = 5916,
  [SMALL_STATE(290)] = 5927,
  [SMALL_STATE(291)] = 5936,
  [SMALL_STATE(292)] = 5947,
  [SMALL_STATE(293)] = 5956,
  [SMALL_STATE(294)] = 5965,
  [SMALL_STATE(295)] = 5976,
  [SMALL_STATE(296)] = 5987,
  [SMALL_STATE(297)] = 5998,
  [SMALL_STATE(298)] = 6009,
  [SMALL_STATE(299)] = 6018,
  [SMALL_STATE(300)] = 6029,
  [SMALL_STATE(301)] = 6040,
  [SMALL_STATE(302)] = 6051,
  [SMALL_STATE(303)] = 6062,
  [SMALL_STATE(304)] = 6073,
  [SMALL_STATE(305)] = 6084,
  [SMALL_STATE(306)] = 6095,
  [SMALL_STATE(307)] = 6103,
  [SMALL_STATE(308)] = 6111,
  [SMALL_STATE(309)] = 6119,
  [SMALL_STATE(310)] = 6127,
  [SMALL_STATE(311)] = 6135,
  [SMALL_STATE(312)] = 6143,
  [SMALL_STATE(313)] = 6151,
  [SMALL_STATE(314)] = 6159,
  [SMALL_STATE(315)] = 6167,
  [SMALL_STATE(316)] = 6175,
  [SMALL_STATE(317)] = 6183,
  [SMALL_STATE(318)] = 6191,
  [SMALL_STATE(319)] = 6199,
  [SMALL_STATE(320)] = 6207,
  [SMALL_STATE(321)] = 6215,
  [SMALL_STATE(322)] = 6223,
  [SMALL_STATE(323)] = 6231,
  [SMALL_STATE(324)] = 6239,
  [SMALL_STATE(325)] = 6247,
  [SMALL_STATE(326)] = 6255,
  [SMALL_STATE(327)] = 6263,
  [SMALL_STATE(328)] = 6271,
  [SMALL_STATE(329)] = 6279,
  [SMALL_STATE(330)] = 6287,
  [SMALL_STATE(331)] = 6295,
  [SMALL_STATE(332)] = 6303,
  [SMALL_STATE(333)] = 6311,
  [SMALL_STATE(334)] = 6319,
  [SMALL_STATE(335)] = 6327,
  [SMALL_STATE(336)] = 6335,
  [SMALL_STATE(337)] = 6343,
  [SMALL_STATE(338)] = 6351,
  [SMALL_STATE(339)] = 6359,
  [SMALL_STATE(340)] = 6367,
  [SMALL_STATE(341)] = 6375,
  [SMALL_STATE(342)] = 6383,
  [SMALL_STATE(343)] = 6391,
  [SMALL_STATE(344)] = 6399,
  [SMALL_STATE(345)] = 6407,
  [SMALL_STATE(346)] = 6415,
  [SMALL_STATE(347)] = 6423,
  [SMALL_STATE(348)] = 6431,
  [SMALL_STATE(349)] = 6439,
  [SMALL_STATE(350)] = 6447,
  [SMALL_STATE(351)] = 6455,
  [SMALL_STATE(352)] = 6463,
  [SMALL_STATE(353)] = 6471,
  [SMALL_STATE(354)] = 6479,
  [SMALL_STATE(355)] = 6487,
  [SMALL_STATE(356)] = 6495,
  [SMALL_STATE(357)] = 6503,
  [SMALL_STATE(358)] = 6511,
  [SMALL_STATE(359)] = 6519,
  [SMALL_STATE(360)] = 6527,
  [SMALL_STATE(361)] = 6535,
  [SMALL_STATE(362)] = 6543,
  [SMALL_STATE(363)] = 6551,
  [SMALL_STATE(364)] = 6559,
  [SMALL_STATE(365)] = 6567,
  [SMALL_STATE(366)] = 6575,
  [SMALL_STATE(367)] = 6583,
  [SMALL_STATE(368)] = 6591,
  [SMALL_STATE(369)] = 6599,
  [SMALL_STATE(370)] = 6607,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [13] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(5),
  [16] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [18] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [20] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [22] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [24] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [26] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [28] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [30] = {.entry = {.count = 1, .reusable = false}}, SHIFT(280),
  [32] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [34] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [36] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [38] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [40] = {.entry = {.count = 1, .reusable = false}}, SHIFT(283),
  [42] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [44] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [46] = {.entry = {.count = 1, .reusable = false}}, SHIFT(356),
  [48] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [50] = {.entry = {.count = 1, .reusable = false}}, SHIFT(355),
  [52] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [54] = {.entry = {.count = 1, .reusable = false}}, SHIFT(285),
  [56] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [58] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT(350),
  [64] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(349),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(347),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(346),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(345),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(344),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_sort_repeat1, 2), SHIFT_REPEAT(146),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_sort_repeat1, 2),
  [109] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_sort_repeat1, 2), SHIFT_REPEAT(57),
  [112] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_sort_repeat1, 2), SHIFT_REPEAT(55),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_sort_repeat1, 2), SHIFT_REPEAT(55),
  [118] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_sort_repeat1, 2), SHIFT_REPEAT(59),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_sort_repeat1, 2), SHIFT_REPEAT(57),
  [124] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_sort_repeat1, 2), SHIFT_REPEAT(10),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ident, 1),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ident, 1),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_call, 4, .production_id = 3),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_call, 4, .production_id = 3),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_call, 3, .production_id = 3),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_call, 3, .production_id = 3),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_float, 1),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_float, 1),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_unit, 2),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_unit, 2),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_literal, 1),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_literal, 1),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr_ident, 1, .production_id = 1),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr_ident, 1, .production_id = 1),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_bool, 1),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_bool, 1),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [189] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__actions_repeat1, 2), SHIFT_REPEAT(95),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__actions_repeat1, 2),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_sort_repeat1, 1),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_command_sort_repeat1, 1),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sorts, 3),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__sorts, 3),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sorts, 2),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__sorts, 2),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [232] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_run_schedule_repeat1, 2), SHIFT_REPEAT(139),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_run_schedule_repeat1, 2),
  [237] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_run_schedule_repeat1, 2), SHIFT_REPEAT(129),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_schedule_seq, 4),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_schedule_seq, 4),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_schedule_saturate, 4),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_schedule_saturate, 4),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_schedule_run, 3),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_schedule_run, 3),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_schedule_repeat, 4),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_schedule_repeat, 4),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_schedule_run, 4, .production_id = 10),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_schedule_run, 4, .production_id = 10),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_schedule_saturate, 3),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_schedule_saturate, 3),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_schedule_run, 5),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_schedule_run, 5),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_schedule_run, 4),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_schedule_run, 4),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_schedule_seq, 3),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_schedule_seq, 3),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_schedule_run, 5, .production_id = 10),
  [288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_schedule_run, 5, .production_id = 10),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_schedule_repeat, 5),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_schedule_repeat, 5),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_schedule_ident, 1, .production_id = 2),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_schedule_ident, 1, .production_id = 2),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_schedule_run, 6, .production_id = 10),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_schedule_run, 6, .production_id = 10),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_ident, 1, .production_id = 7),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variant_repeat1, 2),
  [316] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variant_repeat1, 2), SHIFT_REPEAT(129),
  [319] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_run_repeat1, 2), SHIFT_REPEAT(149),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_run_repeat1, 2),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_schema, 2),
  [376] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sorts_repeat1, 2), SHIFT_REPEAT(197),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__sorts_repeat1, 2),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__actions, 3),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__actions, 2),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [441] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_datatype_repeat1, 2), SHIFT_REPEAT(228),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_datatype_repeat1, 2),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [456] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_ruleset, 4),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_run_schedule, 4),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__types, 2),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_fail, 4),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_include, 4),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_function, 5, .production_id = 8),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_action, 1),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action_call, 1),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_check, 4),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_push, 4),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_pop, 4),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_declare, 5, .production_id = 9),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_relation, 5),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__facts, 3),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action_panic, 4),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action_extract, 4),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_rule, 5),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_rewrite, 5),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_birewrite, 5),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_run, 5),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_run, 5, .production_id = 10),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_print_size, 4, .production_id = 5),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_set_option, 5, .production_id = 6),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_datatype, 5, .production_id = 4),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_query_extract, 4),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_calc, 4),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_simplify, 5),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_function, 14, .production_id = 8),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_calc, 5),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_function, 13, .production_id = 8),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_run, 4),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_print_function, 5, .production_id = 5),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_input, 5, .production_id = 5),
  [542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_output, 5),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action_let, 5, .production_id = 11),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__facts, 2),
  [562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_function, 12, .production_id = 8),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_rule, 7, .production_id = 15),
  [566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action_union, 5),
  [568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action_extract, 5),
  [570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_function, 11, .production_id = 8),
  [572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_rewrite, 10, .production_id = 19),
  [574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_function, 10, .production_id = 8),
  [576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_birewrite, 9, .production_id = 18),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__types, 3),
  [580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_sort, 4, .production_id = 4),
  [582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_function, 6, .production_id = 8),
  [584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_rewrite, 9, .production_id = 18),
  [586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_datatype, 4, .production_id = 4),
  [588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_rule, 9, .production_id = 15),
  [590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_function, 9, .production_id = 8),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_output, 4),
  [600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action_set, 8, .production_id = 13),
  [602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_rewrite, 8),
  [604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_rewrite, 6),
  [606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_rewrite, 8, .production_id = 17),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_function, 8, .production_id = 8),
  [616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_sort, 8, .production_id = 14),
  [618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_run, 6),
  [620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_run, 6, .production_id = 10),
  [622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action_subsume, 7, .production_id = 13),
  [624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action_delete, 7, .production_id = 13),
  [626] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action_set, 7, .production_id = 13),
  [628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_check, 3),
  [630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_check_proof, 3),
  [632] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_print_size, 3),
  [634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_run_schedule, 3),
  [636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_run, 7, .production_id = 10),
  [638] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_query_extract, 6),
  [640] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_birewrite, 7),
  [642] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_pop, 3),
  [644] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action_delete, 6, .production_id = 13),
  [646] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_birewrite, 7, .production_id = 15),
  [648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action_subsume, 6, .production_id = 13),
  [650] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_rewrite, 7),
  [652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_rewrite, 7, .production_id = 15),
  [654] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_rule, 7),
  [656] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_sort, 7, .production_id = 14),
  [658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_function, 7, .production_id = 8),
  [660] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_push, 3),
  [662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_print_stats, 3),
  [664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variant, 6, .production_id = 12),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variant, 4, .production_id = 12),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [702] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variant, 3, .production_id = 12),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fact_call, 1),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [714] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sort_ident, 4, .production_id = 16),
  [716] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fact_eq, 5),
  [718] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variant, 5, .production_id = 12),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [738] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_egg(void) {
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
