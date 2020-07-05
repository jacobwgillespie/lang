#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 11
#define STATE_COUNT 103
#define LARGE_STATE_COUNT 13
#define SYMBOL_COUNT 57
#define ALIAS_COUNT 0
#define TOKEN_COUNT 30
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 13
#define MAX_ALIAS_SEQUENCE_LENGTH 5

enum {
  anon_sym_let = 1,
  anon_sym_EQ = 2,
  sym_boolType = 3,
  anon_sym_EQ_GT = 4,
  anon_sym_LBRACK_RBRACK = 5,
  sym_numberType = 6,
  anon_sym_QMARK = 7,
  anon_sym_COLON = 8,
  anon_sym_LPAREN = 9,
  anon_sym_COMMA = 10,
  anon_sym_RPAREN = 11,
  anon_sym_LT = 12,
  anon_sym_GT = 13,
  anon_sym_extends = 14,
  sym_typeIdentifier = 15,
  anon_sym_match = 16,
  anon_sym_LBRACE = 17,
  anon_sym_RBRACE = 18,
  sym_identifier = 19,
  sym_anything = 20,
  anon_sym_false = 21,
  anon_sym_true = 22,
  sym_numberLiteral = 23,
  sym_unitLiteral = 24,
  sym_raw_string_literal = 25,
  anon_sym_DQUOTE = 26,
  aux_sym_interpreted_string_literal_token1 = 27,
  sym_escape_sequence = 28,
  sym__terminator = 29,
  sym_sourceFile = 30,
  sym__definition = 31,
  sym_binding = 32,
  sym__type = 33,
  sym_lambdaType = 34,
  sym_listType = 35,
  sym_ternaryType = 36,
  sym_tupleType = 37,
  sym_tupleElement = 38,
  sym_typeApplication = 39,
  sym_typeConditional = 40,
  sym__expression = 41,
  sym_lambda = 42,
  sym_application = 43,
  sym_matchExpression = 44,
  sym_matchClause = 45,
  sym_ternaryExpression = 46,
  sym__literal = 47,
  sym_boolLiteral = 48,
  sym__string_literal = 49,
  sym_interpreted_string_literal = 50,
  aux_sym_sourceFile_repeat1 = 51,
  aux_sym_tupleType_repeat1 = 52,
  aux_sym_typeApplication_repeat1 = 53,
  aux_sym_application_repeat1 = 54,
  aux_sym_matchExpression_repeat1 = 55,
  aux_sym_interpreted_string_literal_repeat1 = 56,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_let] = "let",
  [anon_sym_EQ] = "=",
  [sym_boolType] = "boolType",
  [anon_sym_EQ_GT] = "=>",
  [anon_sym_LBRACK_RBRACK] = "[]",
  [sym_numberType] = "numberType",
  [anon_sym_QMARK] = "?",
  [anon_sym_COLON] = ":",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_extends] = "extends",
  [sym_typeIdentifier] = "typeIdentifier",
  [anon_sym_match] = "match",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_identifier] = "identifier",
  [sym_anything] = "anything",
  [anon_sym_false] = "false",
  [anon_sym_true] = "true",
  [sym_numberLiteral] = "numberLiteral",
  [sym_unitLiteral] = "unitLiteral",
  [sym_raw_string_literal] = "raw_string_literal",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_interpreted_string_literal_token1] = "interpreted_string_literal_token1",
  [sym_escape_sequence] = "escape_sequence",
  [sym__terminator] = "_terminator",
  [sym_sourceFile] = "sourceFile",
  [sym__definition] = "_definition",
  [sym_binding] = "binding",
  [sym__type] = "_type",
  [sym_lambdaType] = "lambdaType",
  [sym_listType] = "listType",
  [sym_ternaryType] = "ternaryType",
  [sym_tupleType] = "tupleType",
  [sym_tupleElement] = "tupleElement",
  [sym_typeApplication] = "typeApplication",
  [sym_typeConditional] = "typeConditional",
  [sym__expression] = "_expression",
  [sym_lambda] = "lambda",
  [sym_application] = "application",
  [sym_matchExpression] = "matchExpression",
  [sym_matchClause] = "matchClause",
  [sym_ternaryExpression] = "ternaryExpression",
  [sym__literal] = "_literal",
  [sym_boolLiteral] = "boolLiteral",
  [sym__string_literal] = "_string_literal",
  [sym_interpreted_string_literal] = "interpreted_string_literal",
  [aux_sym_sourceFile_repeat1] = "sourceFile_repeat1",
  [aux_sym_tupleType_repeat1] = "tupleType_repeat1",
  [aux_sym_typeApplication_repeat1] = "typeApplication_repeat1",
  [aux_sym_application_repeat1] = "application_repeat1",
  [aux_sym_matchExpression_repeat1] = "matchExpression_repeat1",
  [aux_sym_interpreted_string_literal_repeat1] = "interpreted_string_literal_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_let] = anon_sym_let,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_boolType] = sym_boolType,
  [anon_sym_EQ_GT] = anon_sym_EQ_GT,
  [anon_sym_LBRACK_RBRACK] = anon_sym_LBRACK_RBRACK,
  [sym_numberType] = sym_numberType,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_extends] = anon_sym_extends,
  [sym_typeIdentifier] = sym_typeIdentifier,
  [anon_sym_match] = anon_sym_match,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_identifier] = sym_identifier,
  [sym_anything] = sym_anything,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_true] = anon_sym_true,
  [sym_numberLiteral] = sym_numberLiteral,
  [sym_unitLiteral] = sym_unitLiteral,
  [sym_raw_string_literal] = sym_raw_string_literal,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_interpreted_string_literal_token1] = aux_sym_interpreted_string_literal_token1,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym__terminator] = sym__terminator,
  [sym_sourceFile] = sym_sourceFile,
  [sym__definition] = sym__definition,
  [sym_binding] = sym_binding,
  [sym__type] = sym__type,
  [sym_lambdaType] = sym_lambdaType,
  [sym_listType] = sym_listType,
  [sym_ternaryType] = sym_ternaryType,
  [sym_tupleType] = sym_tupleType,
  [sym_tupleElement] = sym_tupleElement,
  [sym_typeApplication] = sym_typeApplication,
  [sym_typeConditional] = sym_typeConditional,
  [sym__expression] = sym__expression,
  [sym_lambda] = sym_lambda,
  [sym_application] = sym_application,
  [sym_matchExpression] = sym_matchExpression,
  [sym_matchClause] = sym_matchClause,
  [sym_ternaryExpression] = sym_ternaryExpression,
  [sym__literal] = sym__literal,
  [sym_boolLiteral] = sym_boolLiteral,
  [sym__string_literal] = sym__string_literal,
  [sym_interpreted_string_literal] = sym_interpreted_string_literal,
  [aux_sym_sourceFile_repeat1] = aux_sym_sourceFile_repeat1,
  [aux_sym_tupleType_repeat1] = aux_sym_tupleType_repeat1,
  [aux_sym_typeApplication_repeat1] = aux_sym_typeApplication_repeat1,
  [aux_sym_application_repeat1] = aux_sym_application_repeat1,
  [aux_sym_matchExpression_repeat1] = aux_sym_matchExpression_repeat1,
  [aux_sym_interpreted_string_literal_repeat1] = aux_sym_interpreted_string_literal_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_let] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_boolType] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_EQ_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [sym_numberType] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_extends] = {
    .visible = true,
    .named = false,
  },
  [sym_typeIdentifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_match] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_anything] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [sym_numberLiteral] = {
    .visible = true,
    .named = true,
  },
  [sym_unitLiteral] = {
    .visible = true,
    .named = true,
  },
  [sym_raw_string_literal] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_interpreted_string_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym__terminator] = {
    .visible = false,
    .named = true,
  },
  [sym_sourceFile] = {
    .visible = true,
    .named = true,
  },
  [sym__definition] = {
    .visible = false,
    .named = true,
  },
  [sym_binding] = {
    .visible = true,
    .named = true,
  },
  [sym__type] = {
    .visible = false,
    .named = true,
  },
  [sym_lambdaType] = {
    .visible = true,
    .named = true,
  },
  [sym_listType] = {
    .visible = true,
    .named = true,
  },
  [sym_ternaryType] = {
    .visible = true,
    .named = true,
  },
  [sym_tupleType] = {
    .visible = true,
    .named = true,
  },
  [sym_tupleElement] = {
    .visible = true,
    .named = true,
  },
  [sym_typeApplication] = {
    .visible = true,
    .named = true,
  },
  [sym_typeConditional] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_lambda] = {
    .visible = true,
    .named = true,
  },
  [sym_application] = {
    .visible = true,
    .named = true,
  },
  [sym_matchExpression] = {
    .visible = true,
    .named = true,
  },
  [sym_matchClause] = {
    .visible = true,
    .named = true,
  },
  [sym_ternaryExpression] = {
    .visible = true,
    .named = true,
  },
  [sym__literal] = {
    .visible = false,
    .named = true,
  },
  [sym_boolLiteral] = {
    .visible = true,
    .named = true,
  },
  [sym__string_literal] = {
    .visible = false,
    .named = true,
  },
  [sym_interpreted_string_literal] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_sourceFile_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_tupleType_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_typeApplication_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_application_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_matchExpression_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_interpreted_string_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_body = 1,
  field_candidate = 2,
  field_condition = 3,
  field_from = 4,
  field_identifier = 5,
  field_label = 6,
  field_name = 7,
  field_param = 8,
  field_parameters = 9,
  field_to = 10,
  field_type = 11,
  field_valueIfFalse = 12,
  field_valueIfTrue = 13,
};

static const char *ts_field_names[] = {
  [0] = NULL,
  [field_body] = "body",
  [field_candidate] = "candidate",
  [field_condition] = "condition",
  [field_from] = "from",
  [field_identifier] = "identifier",
  [field_label] = "label",
  [field_name] = "name",
  [field_param] = "param",
  [field_parameters] = "parameters",
  [field_to] = "to",
  [field_type] = "type",
  [field_valueIfFalse] = "valueIfFalse",
  [field_valueIfTrue] = "valueIfTrue",
};

static const TSFieldMapSlice ts_field_map_slices[14] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 1},
  [3] = {.index = 3, .length = 1},
  [4] = {.index = 4, .length = 1},
  [5] = {.index = 5, .length = 2},
  [6] = {.index = 7, .length = 2},
  [7] = {.index = 9, .length = 2},
  [8] = {.index = 11, .length = 2},
  [9] = {.index = 13, .length = 2},
  [10] = {.index = 15, .length = 3},
  [11] = {.index = 18, .length = 2},
  [12] = {.index = 20, .length = 3},
  [13] = {.index = 23, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_body, 3},
    {field_name, 1},
  [2] =
    {field_label, 0},
  [3] =
    {field_type, 0},
  [4] =
    {field_identifier, 0},
  [5] =
    {field_from, 0},
    {field_to, 2},
  [7] =
    {field_body, 2},
    {field_parameters, 0},
  [9] =
    {field_label, 0},
    {field_type, 2},
  [11] =
    {field_identifier, 0},
    {field_type, 2},
  [13] =
    {field_identifier, 0},
    {field_param, 2},
  [15] =
    {field_identifier, 0},
    {field_type, 2},
    {field_type, 3},
  [18] =
    {field_candidate, 3},
    {field_parameters, 1},
  [20] =
    {field_identifier, 0},
    {field_param, 2},
    {field_param, 3},
  [23] =
    {field_condition, 0},
    {field_valueIfFalse, 4},
    {field_valueIfTrue, 2},
};

static TSSymbol ts_alias_sequences[14][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(48);
      if (lookahead == '"') ADVANCE(100);
      if (lookahead == '(') ADVANCE(61);
      if (lookahead == ')') ADVANCE(63);
      if (lookahead == ',') ADVANCE(62);
      if (lookahead == ':') ADVANCE(59);
      if (lookahead == '<') ADVANCE(64);
      if (lookahead == '=') ADVANCE(51);
      if (lookahead == '>') ADVANCE(65);
      if (lookahead == '?') ADVANCE(58);
      if (lookahead == '[') ADVANCE(8);
      if (lookahead == '\\') ADVANCE(7);
      if (lookahead == '_') ADVANCE(92);
      if (lookahead == '`') ADVANCE(9);
      if (lookahead == 'b') ADVANCE(25);
      if (lookahead == 'e') ADVANCE(36);
      if (lookahead == 'f') ADVANCE(10);
      if (lookahead == 'l') ADVANCE(19);
      if (lookahead == 'm') ADVANCE(11);
      if (lookahead == 'n') ADVANCE(34);
      if (lookahead == 't') ADVANCE(28);
      if (lookahead == '{') ADVANCE(70);
      if (lookahead == '}') ADVANCE(71);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(46)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(97);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(67);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(106);
      if (lookahead == '(') ADVANCE(60);
      if (lookahead == '=') ADVANCE(6);
      if (lookahead == '?') ADVANCE(58);
      if (lookahead == '[') ADVANCE(8);
      if (lookahead == 'e') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(5)
      if (lookahead == '"') ADVANCE(100);
      if (lookahead == '\\') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(101);
      if (lookahead != 0) ADVANCE(102);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(100);
      if (lookahead == '(') ADVANCE(61);
      if (lookahead == ')') ADVANCE(63);
      if (lookahead == '=') ADVANCE(50);
      if (lookahead == '_') ADVANCE(92);
      if (lookahead == '`') ADVANCE(9);
      if (lookahead == 'b') ADVANCE(83);
      if (lookahead == 'f') ADVANCE(72);
      if (lookahead == 'm') ADVANCE(73);
      if (lookahead == 'n') ADVANCE(89);
      if (lookahead == 't') ADVANCE(86);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(97);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(67);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(100);
      if (lookahead == '(') ADVANCE(61);
      if (lookahead == ')') ADVANCE(63);
      if (lookahead == '_') ADVANCE(92);
      if (lookahead == '`') ADVANCE(9);
      if (lookahead == 'b') ADVANCE(83);
      if (lookahead == 'f') ADVANCE(72);
      if (lookahead == 'n') ADVANCE(89);
      if (lookahead == 't') ADVANCE(86);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(97);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(67);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(100);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      END_STATE();
    case 6:
      if (lookahead == '>') ADVANCE(54);
      END_STATE();
    case 7:
      if (lookahead == 'U') ADVANCE(45);
      if (lookahead == 'u') ADVANCE(41);
      if (lookahead == 'x') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(105);
      if (lookahead != 0) ADVANCE(103);
      END_STATE();
    case 8:
      if (lookahead == ']') ADVANCE(55);
      END_STATE();
    case 9:
      if (lookahead == '`') ADVANCE(99);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(21);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(32);
      END_STATE();
    case 12:
      if (lookahead == 'b') ADVANCE(18);
      END_STATE();
    case 13:
      if (lookahead == 'c') ADVANCE(20);
      END_STATE();
    case 14:
      if (lookahead == 'd') ADVANCE(29);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(24);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(95);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(93);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 20:
      if (lookahead == 'h') ADVANCE(68);
      END_STATE();
    case 21:
      if (lookahead == 'l') ADVANCE(30);
      END_STATE();
    case 22:
      if (lookahead == 'l') ADVANCE(52);
      END_STATE();
    case 23:
      if (lookahead == 'm') ADVANCE(12);
      END_STATE();
    case 24:
      if (lookahead == 'n') ADVANCE(14);
      END_STATE();
    case 25:
      if (lookahead == 'o') ADVANCE(26);
      END_STATE();
    case 26:
      if (lookahead == 'o') ADVANCE(22);
      END_STATE();
    case 27:
      if (lookahead == 'r') ADVANCE(56);
      END_STATE();
    case 28:
      if (lookahead == 'r') ADVANCE(35);
      END_STATE();
    case 29:
      if (lookahead == 's') ADVANCE(66);
      END_STATE();
    case 30:
      if (lookahead == 's') ADVANCE(17);
      END_STATE();
    case 31:
      if (lookahead == 't') ADVANCE(49);
      END_STATE();
    case 32:
      if (lookahead == 't') ADVANCE(13);
      END_STATE();
    case 33:
      if (lookahead == 't') ADVANCE(15);
      END_STATE();
    case 34:
      if (lookahead == 'u') ADVANCE(23);
      END_STATE();
    case 35:
      if (lookahead == 'u') ADVANCE(16);
      END_STATE();
    case 36:
      if (lookahead == 'x') ADVANCE(33);
      END_STATE();
    case 37:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(37)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 38:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(103);
      END_STATE();
    case 39:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(38);
      END_STATE();
    case 40:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(39);
      END_STATE();
    case 41:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(40);
      END_STATE();
    case 42:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(41);
      END_STATE();
    case 43:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(42);
      END_STATE();
    case 44:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(43);
      END_STATE();
    case 45:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(44);
      END_STATE();
    case 46:
      if (eof) ADVANCE(48);
      if (lookahead == '"') ADVANCE(100);
      if (lookahead == '(') ADVANCE(61);
      if (lookahead == ')') ADVANCE(63);
      if (lookahead == ',') ADVANCE(62);
      if (lookahead == ':') ADVANCE(59);
      if (lookahead == '<') ADVANCE(64);
      if (lookahead == '=') ADVANCE(51);
      if (lookahead == '>') ADVANCE(65);
      if (lookahead == '?') ADVANCE(58);
      if (lookahead == '[') ADVANCE(8);
      if (lookahead == '_') ADVANCE(92);
      if (lookahead == '`') ADVANCE(9);
      if (lookahead == 'b') ADVANCE(25);
      if (lookahead == 'e') ADVANCE(36);
      if (lookahead == 'f') ADVANCE(10);
      if (lookahead == 'l') ADVANCE(19);
      if (lookahead == 'm') ADVANCE(11);
      if (lookahead == 'n') ADVANCE(34);
      if (lookahead == 't') ADVANCE(28);
      if (lookahead == '{') ADVANCE(70);
      if (lookahead == '}') ADVANCE(71);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(46)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(97);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(67);
      END_STATE();
    case 47:
      if (eof) ADVANCE(48);
      if (lookahead == '(') ADVANCE(60);
      if (lookahead == ')') ADVANCE(63);
      if (lookahead == ',') ADVANCE(62);
      if (lookahead == ':') ADVANCE(59);
      if (lookahead == '<') ADVANCE(64);
      if (lookahead == '=') ADVANCE(6);
      if (lookahead == '>') ADVANCE(65);
      if (lookahead == '?') ADVANCE(58);
      if (lookahead == '[') ADVANCE(8);
      if (lookahead == 'e') ADVANCE(36);
      if (lookahead == 'l') ADVANCE(19);
      if (lookahead == '{') ADVANCE(70);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(47)
      END_STATE();
    case 48:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '>') ADVANCE(54);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_boolType);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_boolType);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_LBRACK_RBRACK);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_numberType);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_numberType);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == ')') ADVANCE(98);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_extends);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_typeIdentifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_match);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_match);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_anything);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_numberLiteral);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(97);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_unitLiteral);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_raw_string_literal);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_interpreted_string_literal_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(101);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(102);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_interpreted_string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(102);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(103);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym__terminator);
      if (lookahead == '\n') ADVANCE(106);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 3},
  [3] = {.lex_state = 3},
  [4] = {.lex_state = 3},
  [5] = {.lex_state = 3},
  [6] = {.lex_state = 3},
  [7] = {.lex_state = 3},
  [8] = {.lex_state = 3},
  [9] = {.lex_state = 3},
  [10] = {.lex_state = 3},
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 4},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 4},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 47},
  [29] = {.lex_state = 47},
  [30] = {.lex_state = 47},
  [31] = {.lex_state = 47},
  [32] = {.lex_state = 47},
  [33] = {.lex_state = 47},
  [34] = {.lex_state = 47},
  [35] = {.lex_state = 47},
  [36] = {.lex_state = 47},
  [37] = {.lex_state = 47},
  [38] = {.lex_state = 47},
  [39] = {.lex_state = 47},
  [40] = {.lex_state = 47},
  [41] = {.lex_state = 47},
  [42] = {.lex_state = 47},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 47},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 47},
  [51] = {.lex_state = 47},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 1},
  [55] = {.lex_state = 1},
  [56] = {.lex_state = 1},
  [57] = {.lex_state = 1},
  [58] = {.lex_state = 47},
  [59] = {.lex_state = 2},
  [60] = {.lex_state = 47},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 2},
  [63] = {.lex_state = 2},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 47},
  [66] = {.lex_state = 2},
  [67] = {.lex_state = 2},
  [68] = {.lex_state = 47},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 1},
  [76] = {.lex_state = 47},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 47},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 47},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 1},
  [85] = {.lex_state = 1},
  [86] = {.lex_state = 1},
  [87] = {.lex_state = 1},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 47},
  [90] = {.lex_state = 1},
  [91] = {.lex_state = 1},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 1},
  [95] = {.lex_state = 47},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 3},
  [99] = {.lex_state = 1},
  [100] = {.lex_state = 37},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [sym_boolType] = ACTIONS(1),
    [anon_sym_EQ_GT] = ACTIONS(1),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(1),
    [sym_numberType] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_extends] = ACTIONS(1),
    [sym_typeIdentifier] = ACTIONS(1),
    [anon_sym_match] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_anything] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [sym_numberLiteral] = ACTIONS(1),
    [sym_unitLiteral] = ACTIONS(1),
    [sym_raw_string_literal] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
  },
  [1] = {
    [sym_sourceFile] = STATE(101),
    [sym__definition] = STATE(52),
    [sym_binding] = STATE(52),
    [aux_sym_sourceFile_repeat1] = STATE(52),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_let] = ACTIONS(5),
  },
  [2] = {
    [sym__type] = STATE(79),
    [sym_lambdaType] = STATE(79),
    [sym_listType] = STATE(79),
    [sym_ternaryType] = STATE(79),
    [sym_tupleType] = STATE(79),
    [sym_typeApplication] = STATE(79),
    [sym_typeConditional] = STATE(97),
    [sym__expression] = STATE(61),
    [sym_lambda] = STATE(61),
    [sym_application] = STATE(61),
    [sym_matchExpression] = STATE(61),
    [sym_ternaryExpression] = STATE(61),
    [sym__literal] = STATE(33),
    [sym_boolLiteral] = STATE(33),
    [sym__string_literal] = STATE(33),
    [sym_interpreted_string_literal] = STATE(33),
    [sym_boolType] = ACTIONS(7),
    [sym_numberType] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_RPAREN] = ACTIONS(11),
    [sym_typeIdentifier] = ACTIONS(13),
    [anon_sym_match] = ACTIONS(15),
    [sym_identifier] = ACTIONS(17),
    [sym_anything] = ACTIONS(19),
    [anon_sym_false] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(21),
    [sym_numberLiteral] = ACTIONS(23),
    [sym_unitLiteral] = ACTIONS(23),
    [sym_raw_string_literal] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
  },
  [3] = {
    [sym__type] = STATE(79),
    [sym_lambdaType] = STATE(79),
    [sym_listType] = STATE(79),
    [sym_ternaryType] = STATE(79),
    [sym_tupleType] = STATE(79),
    [sym_typeApplication] = STATE(79),
    [sym_typeConditional] = STATE(97),
    [sym__expression] = STATE(64),
    [sym_lambda] = STATE(64),
    [sym_application] = STATE(64),
    [sym_matchExpression] = STATE(64),
    [sym_ternaryExpression] = STATE(64),
    [sym__literal] = STATE(33),
    [sym_boolLiteral] = STATE(33),
    [sym__string_literal] = STATE(33),
    [sym_interpreted_string_literal] = STATE(33),
    [sym_boolType] = ACTIONS(7),
    [sym_numberType] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_RPAREN] = ACTIONS(27),
    [sym_typeIdentifier] = ACTIONS(13),
    [anon_sym_match] = ACTIONS(15),
    [sym_identifier] = ACTIONS(17),
    [sym_anything] = ACTIONS(19),
    [anon_sym_false] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(21),
    [sym_numberLiteral] = ACTIONS(23),
    [sym_unitLiteral] = ACTIONS(23),
    [sym_raw_string_literal] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
  },
  [4] = {
    [sym__type] = STATE(81),
    [sym_lambdaType] = STATE(81),
    [sym_listType] = STATE(81),
    [sym_ternaryType] = STATE(81),
    [sym_tupleType] = STATE(81),
    [sym_typeApplication] = STATE(81),
    [sym_typeConditional] = STATE(97),
    [sym__expression] = STATE(49),
    [sym_lambda] = STATE(49),
    [sym_application] = STATE(49),
    [sym_matchExpression] = STATE(49),
    [sym_ternaryExpression] = STATE(49),
    [sym__literal] = STATE(33),
    [sym_boolLiteral] = STATE(33),
    [sym__string_literal] = STATE(33),
    [sym_interpreted_string_literal] = STATE(33),
    [sym_boolType] = ACTIONS(29),
    [sym_numberType] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(9),
    [sym_typeIdentifier] = ACTIONS(13),
    [anon_sym_match] = ACTIONS(15),
    [sym_identifier] = ACTIONS(17),
    [sym_anything] = ACTIONS(31),
    [anon_sym_false] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(21),
    [sym_numberLiteral] = ACTIONS(23),
    [sym_unitLiteral] = ACTIONS(23),
    [sym_raw_string_literal] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
  },
  [5] = {
    [sym__type] = STATE(79),
    [sym_lambdaType] = STATE(79),
    [sym_listType] = STATE(79),
    [sym_ternaryType] = STATE(79),
    [sym_tupleType] = STATE(79),
    [sym_typeApplication] = STATE(79),
    [sym_typeConditional] = STATE(97),
    [sym__expression] = STATE(92),
    [sym_lambda] = STATE(92),
    [sym_application] = STATE(92),
    [sym_matchExpression] = STATE(92),
    [sym_ternaryExpression] = STATE(92),
    [sym__literal] = STATE(33),
    [sym_boolLiteral] = STATE(33),
    [sym__string_literal] = STATE(33),
    [sym_interpreted_string_literal] = STATE(33),
    [sym_boolType] = ACTIONS(7),
    [sym_numberType] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(9),
    [sym_typeIdentifier] = ACTIONS(13),
    [anon_sym_match] = ACTIONS(15),
    [sym_identifier] = ACTIONS(17),
    [sym_anything] = ACTIONS(19),
    [anon_sym_false] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(21),
    [sym_numberLiteral] = ACTIONS(23),
    [sym_unitLiteral] = ACTIONS(23),
    [sym_raw_string_literal] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
  },
  [6] = {
    [sym__type] = STATE(81),
    [sym_lambdaType] = STATE(81),
    [sym_listType] = STATE(81),
    [sym_ternaryType] = STATE(81),
    [sym_tupleType] = STATE(81),
    [sym_typeApplication] = STATE(81),
    [sym_typeConditional] = STATE(97),
    [sym__expression] = STATE(87),
    [sym_lambda] = STATE(87),
    [sym_application] = STATE(87),
    [sym_matchExpression] = STATE(87),
    [sym_ternaryExpression] = STATE(87),
    [sym__literal] = STATE(56),
    [sym_boolLiteral] = STATE(56),
    [sym__string_literal] = STATE(56),
    [sym_interpreted_string_literal] = STATE(56),
    [sym_boolType] = ACTIONS(29),
    [sym_numberType] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(9),
    [sym_typeIdentifier] = ACTIONS(13),
    [anon_sym_match] = ACTIONS(33),
    [sym_identifier] = ACTIONS(35),
    [sym_anything] = ACTIONS(31),
    [anon_sym_false] = ACTIONS(37),
    [anon_sym_true] = ACTIONS(37),
    [sym_numberLiteral] = ACTIONS(39),
    [sym_unitLiteral] = ACTIONS(39),
    [sym_raw_string_literal] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(41),
  },
  [7] = {
    [sym__type] = STATE(79),
    [sym_lambdaType] = STATE(79),
    [sym_listType] = STATE(79),
    [sym_ternaryType] = STATE(79),
    [sym_tupleType] = STATE(79),
    [sym_typeApplication] = STATE(79),
    [sym_typeConditional] = STATE(97),
    [sym__expression] = STATE(73),
    [sym_lambda] = STATE(73),
    [sym_application] = STATE(73),
    [sym_matchExpression] = STATE(73),
    [sym_ternaryExpression] = STATE(73),
    [sym__literal] = STATE(33),
    [sym_boolLiteral] = STATE(33),
    [sym__string_literal] = STATE(33),
    [sym_interpreted_string_literal] = STATE(33),
    [sym_boolType] = ACTIONS(7),
    [sym_numberType] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(9),
    [sym_typeIdentifier] = ACTIONS(13),
    [anon_sym_match] = ACTIONS(15),
    [sym_identifier] = ACTIONS(17),
    [sym_anything] = ACTIONS(19),
    [anon_sym_false] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(21),
    [sym_numberLiteral] = ACTIONS(23),
    [sym_unitLiteral] = ACTIONS(23),
    [sym_raw_string_literal] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
  },
  [8] = {
    [sym__type] = STATE(76),
    [sym_lambdaType] = STATE(76),
    [sym_listType] = STATE(76),
    [sym_ternaryType] = STATE(76),
    [sym_tupleType] = STATE(76),
    [sym_typeApplication] = STATE(76),
    [sym_typeConditional] = STATE(97),
    [sym__expression] = STATE(86),
    [sym_lambda] = STATE(86),
    [sym_application] = STATE(86),
    [sym_matchExpression] = STATE(86),
    [sym_ternaryExpression] = STATE(86),
    [sym__literal] = STATE(56),
    [sym_boolLiteral] = STATE(56),
    [sym__string_literal] = STATE(56),
    [sym_interpreted_string_literal] = STATE(56),
    [sym_boolType] = ACTIONS(43),
    [sym_numberType] = ACTIONS(43),
    [anon_sym_LPAREN] = ACTIONS(9),
    [sym_typeIdentifier] = ACTIONS(13),
    [anon_sym_match] = ACTIONS(33),
    [sym_identifier] = ACTIONS(35),
    [sym_anything] = ACTIONS(45),
    [anon_sym_false] = ACTIONS(37),
    [anon_sym_true] = ACTIONS(37),
    [sym_numberLiteral] = ACTIONS(39),
    [sym_unitLiteral] = ACTIONS(39),
    [sym_raw_string_literal] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(41),
  },
  [9] = {
    [sym__type] = STATE(79),
    [sym_lambdaType] = STATE(79),
    [sym_listType] = STATE(79),
    [sym_ternaryType] = STATE(79),
    [sym_tupleType] = STATE(79),
    [sym_typeApplication] = STATE(79),
    [sym_typeConditional] = STATE(97),
    [sym__expression] = STATE(70),
    [sym_lambda] = STATE(70),
    [sym_application] = STATE(70),
    [sym_matchExpression] = STATE(70),
    [sym_ternaryExpression] = STATE(70),
    [sym__literal] = STATE(33),
    [sym_boolLiteral] = STATE(33),
    [sym__string_literal] = STATE(33),
    [sym_interpreted_string_literal] = STATE(33),
    [sym_boolType] = ACTIONS(7),
    [sym_numberType] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(9),
    [sym_typeIdentifier] = ACTIONS(13),
    [anon_sym_match] = ACTIONS(15),
    [sym_identifier] = ACTIONS(17),
    [sym_anything] = ACTIONS(19),
    [anon_sym_false] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(21),
    [sym_numberLiteral] = ACTIONS(23),
    [sym_unitLiteral] = ACTIONS(23),
    [sym_raw_string_literal] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
  },
  [10] = {
    [sym__type] = STATE(81),
    [sym_lambdaType] = STATE(81),
    [sym_listType] = STATE(81),
    [sym_ternaryType] = STATE(81),
    [sym_tupleType] = STATE(81),
    [sym_typeApplication] = STATE(81),
    [sym_typeConditional] = STATE(97),
    [sym__expression] = STATE(91),
    [sym_lambda] = STATE(91),
    [sym_application] = STATE(91),
    [sym_matchExpression] = STATE(91),
    [sym_ternaryExpression] = STATE(91),
    [sym__literal] = STATE(56),
    [sym_boolLiteral] = STATE(56),
    [sym__string_literal] = STATE(56),
    [sym_interpreted_string_literal] = STATE(56),
    [sym_boolType] = ACTIONS(29),
    [sym_numberType] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(9),
    [sym_typeIdentifier] = ACTIONS(13),
    [anon_sym_match] = ACTIONS(33),
    [sym_identifier] = ACTIONS(35),
    [sym_anything] = ACTIONS(31),
    [anon_sym_false] = ACTIONS(37),
    [anon_sym_true] = ACTIONS(37),
    [sym_numberLiteral] = ACTIONS(39),
    [sym_unitLiteral] = ACTIONS(39),
    [sym_raw_string_literal] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(41),
  },
  [11] = {
    [sym__type] = STATE(79),
    [sym_lambdaType] = STATE(79),
    [sym_listType] = STATE(79),
    [sym_ternaryType] = STATE(79),
    [sym_tupleType] = STATE(79),
    [sym_typeApplication] = STATE(79),
    [sym_typeConditional] = STATE(97),
    [sym__expression] = STATE(93),
    [sym_lambda] = STATE(93),
    [sym_application] = STATE(93),
    [sym_matchExpression] = STATE(93),
    [sym_ternaryExpression] = STATE(93),
    [sym__literal] = STATE(33),
    [sym_boolLiteral] = STATE(33),
    [sym__string_literal] = STATE(33),
    [sym_interpreted_string_literal] = STATE(33),
    [sym_boolType] = ACTIONS(7),
    [sym_numberType] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(9),
    [sym_typeIdentifier] = ACTIONS(13),
    [anon_sym_match] = ACTIONS(15),
    [sym_identifier] = ACTIONS(17),
    [sym_anything] = ACTIONS(19),
    [anon_sym_false] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(21),
    [sym_numberLiteral] = ACTIONS(23),
    [sym_unitLiteral] = ACTIONS(23),
    [sym_raw_string_literal] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
  },
  [12] = {
    [sym__type] = STATE(79),
    [sym_lambdaType] = STATE(79),
    [sym_listType] = STATE(79),
    [sym_ternaryType] = STATE(79),
    [sym_tupleType] = STATE(79),
    [sym_typeApplication] = STATE(79),
    [sym_typeConditional] = STATE(97),
    [sym__expression] = STATE(47),
    [sym_lambda] = STATE(47),
    [sym_application] = STATE(47),
    [sym_matchExpression] = STATE(47),
    [sym_ternaryExpression] = STATE(47),
    [sym__literal] = STATE(33),
    [sym_boolLiteral] = STATE(33),
    [sym__string_literal] = STATE(33),
    [sym_interpreted_string_literal] = STATE(33),
    [sym_boolType] = ACTIONS(7),
    [sym_numberType] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(9),
    [sym_typeIdentifier] = ACTIONS(13),
    [anon_sym_match] = ACTIONS(15),
    [sym_identifier] = ACTIONS(17),
    [sym_anything] = ACTIONS(19),
    [anon_sym_false] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(21),
    [sym_numberLiteral] = ACTIONS(23),
    [sym_unitLiteral] = ACTIONS(23),
    [sym_raw_string_literal] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      sym_typeIdentifier,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(49), 1,
      anon_sym_RBRACE,
    STATE(97), 1,
      sym_typeConditional,
    STATE(99), 1,
      sym_lambda,
    ACTIONS(51), 2,
      anon_sym_false,
      anon_sym_true,
    STATE(15), 2,
      sym_matchClause,
      aux_sym_matchExpression_repeat1,
    ACTIONS(47), 6,
      sym_boolType,
      sym_numberType,
      sym_anything,
      sym_numberLiteral,
      sym_unitLiteral,
      sym_raw_string_literal,
    STATE(68), 10,
      sym__type,
      sym_lambdaType,
      sym_listType,
      sym_ternaryType,
      sym_tupleType,
      sym_typeApplication,
      sym__literal,
      sym_boolLiteral,
      sym__string_literal,
      sym_interpreted_string_literal,
  [47] = 10,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      sym_typeIdentifier,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      anon_sym_RBRACE,
    STATE(97), 1,
      sym_typeConditional,
    STATE(99), 1,
      sym_lambda,
    ACTIONS(51), 2,
      anon_sym_false,
      anon_sym_true,
    STATE(15), 2,
      sym_matchClause,
      aux_sym_matchExpression_repeat1,
    ACTIONS(47), 6,
      sym_boolType,
      sym_numberType,
      sym_anything,
      sym_numberLiteral,
      sym_unitLiteral,
      sym_raw_string_literal,
    STATE(68), 10,
      sym__type,
      sym_lambdaType,
      sym_listType,
      sym_ternaryType,
      sym_tupleType,
      sym_typeApplication,
      sym__literal,
      sym_boolLiteral,
      sym__string_literal,
      sym_interpreted_string_literal,
  [94] = 10,
    ACTIONS(58), 1,
      anon_sym_LPAREN,
    ACTIONS(61), 1,
      sym_typeIdentifier,
    ACTIONS(64), 1,
      anon_sym_RBRACE,
    ACTIONS(69), 1,
      anon_sym_DQUOTE,
    STATE(97), 1,
      sym_typeConditional,
    STATE(99), 1,
      sym_lambda,
    ACTIONS(66), 2,
      anon_sym_false,
      anon_sym_true,
    STATE(15), 2,
      sym_matchClause,
      aux_sym_matchExpression_repeat1,
    ACTIONS(55), 6,
      sym_boolType,
      sym_numberType,
      sym_anything,
      sym_numberLiteral,
      sym_unitLiteral,
      sym_raw_string_literal,
    STATE(68), 10,
      sym__type,
      sym_lambdaType,
      sym_listType,
      sym_ternaryType,
      sym_tupleType,
      sym_typeApplication,
      sym__literal,
      sym_boolLiteral,
      sym__string_literal,
      sym_interpreted_string_literal,
  [141] = 9,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      sym_typeIdentifier,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    STATE(97), 1,
      sym_typeConditional,
    STATE(99), 1,
      sym_lambda,
    ACTIONS(51), 2,
      anon_sym_false,
      anon_sym_true,
    STATE(13), 2,
      sym_matchClause,
      aux_sym_matchExpression_repeat1,
    ACTIONS(47), 6,
      sym_boolType,
      sym_numberType,
      sym_anything,
      sym_numberLiteral,
      sym_unitLiteral,
      sym_raw_string_literal,
    STATE(68), 10,
      sym__type,
      sym_lambdaType,
      sym_listType,
      sym_ternaryType,
      sym_tupleType,
      sym_typeApplication,
      sym__literal,
      sym_boolLiteral,
      sym__string_literal,
      sym_interpreted_string_literal,
  [185] = 12,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      sym_typeIdentifier,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(74), 1,
      anon_sym_RPAREN,
    ACTIONS(76), 1,
      sym_identifier,
    ACTIONS(78), 1,
      sym_anything,
    STATE(69), 1,
      sym_tupleElement,
    STATE(97), 1,
      sym_typeConditional,
    ACTIONS(21), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(72), 2,
      sym_boolType,
      sym_numberType,
    ACTIONS(80), 3,
      sym_numberLiteral,
      sym_unitLiteral,
      sym_raw_string_literal,
    STATE(51), 10,
      sym__type,
      sym_lambdaType,
      sym_listType,
      sym_ternaryType,
      sym_tupleType,
      sym_typeApplication,
      sym__literal,
      sym_boolLiteral,
      sym__string_literal,
      sym_interpreted_string_literal,
  [235] = 9,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      sym_typeIdentifier,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    STATE(97), 1,
      sym_typeConditional,
    STATE(99), 1,
      sym_lambda,
    ACTIONS(51), 2,
      anon_sym_false,
      anon_sym_true,
    STATE(14), 2,
      sym_matchClause,
      aux_sym_matchExpression_repeat1,
    ACTIONS(47), 6,
      sym_boolType,
      sym_numberType,
      sym_anything,
      sym_numberLiteral,
      sym_unitLiteral,
      sym_raw_string_literal,
    STATE(68), 10,
      sym__type,
      sym_lambdaType,
      sym_listType,
      sym_ternaryType,
      sym_tupleType,
      sym_typeApplication,
      sym__literal,
      sym_boolLiteral,
      sym__string_literal,
      sym_interpreted_string_literal,
  [279] = 11,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      sym_typeIdentifier,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(76), 1,
      sym_identifier,
    ACTIONS(78), 1,
      sym_anything,
    STATE(88), 1,
      sym_tupleElement,
    STATE(97), 1,
      sym_typeConditional,
    ACTIONS(21), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(72), 2,
      sym_boolType,
      sym_numberType,
    ACTIONS(80), 3,
      sym_numberLiteral,
      sym_unitLiteral,
      sym_raw_string_literal,
    STATE(51), 10,
      sym__type,
      sym_lambdaType,
      sym_listType,
      sym_ternaryType,
      sym_tupleType,
      sym_typeApplication,
      sym__literal,
      sym_boolLiteral,
      sym__string_literal,
      sym_interpreted_string_literal,
  [326] = 7,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      sym_typeIdentifier,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    STATE(97), 1,
      sym_typeConditional,
    ACTIONS(51), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(82), 6,
      sym_boolType,
      sym_numberType,
      sym_anything,
      sym_numberLiteral,
      sym_unitLiteral,
      sym_raw_string_literal,
    STATE(39), 10,
      sym__type,
      sym_lambdaType,
      sym_listType,
      sym_ternaryType,
      sym_tupleType,
      sym_typeApplication,
      sym__literal,
      sym_boolLiteral,
      sym__string_literal,
      sym_interpreted_string_literal,
  [363] = 7,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      sym_typeIdentifier,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    STATE(97), 1,
      sym_typeConditional,
    ACTIONS(51), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(84), 6,
      sym_boolType,
      sym_numberType,
      sym_anything,
      sym_numberLiteral,
      sym_unitLiteral,
      sym_raw_string_literal,
    STATE(38), 10,
      sym__type,
      sym_lambdaType,
      sym_listType,
      sym_ternaryType,
      sym_tupleType,
      sym_typeApplication,
      sym__literal,
      sym_boolLiteral,
      sym__string_literal,
      sym_interpreted_string_literal,
  [400] = 7,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      sym_typeIdentifier,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    STATE(97), 1,
      sym_typeConditional,
    ACTIONS(51), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(86), 6,
      sym_boolType,
      sym_numberType,
      sym_anything,
      sym_numberLiteral,
      sym_unitLiteral,
      sym_raw_string_literal,
    STATE(58), 10,
      sym__type,
      sym_lambdaType,
      sym_listType,
      sym_ternaryType,
      sym_tupleType,
      sym_typeApplication,
      sym__literal,
      sym_boolLiteral,
      sym__string_literal,
      sym_interpreted_string_literal,
  [437] = 7,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      sym_typeIdentifier,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    STATE(97), 1,
      sym_typeConditional,
    ACTIONS(51), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(88), 6,
      sym_boolType,
      sym_numberType,
      sym_anything,
      sym_numberLiteral,
      sym_unitLiteral,
      sym_raw_string_literal,
    STATE(50), 10,
      sym__type,
      sym_lambdaType,
      sym_listType,
      sym_ternaryType,
      sym_tupleType,
      sym_typeApplication,
      sym__literal,
      sym_boolLiteral,
      sym__string_literal,
      sym_interpreted_string_literal,
  [474] = 7,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      sym_typeIdentifier,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    STATE(97), 1,
      sym_typeConditional,
    ACTIONS(51), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(90), 6,
      sym_boolType,
      sym_numberType,
      sym_anything,
      sym_numberLiteral,
      sym_unitLiteral,
      sym_raw_string_literal,
    STATE(65), 10,
      sym__type,
      sym_lambdaType,
      sym_listType,
      sym_ternaryType,
      sym_tupleType,
      sym_typeApplication,
      sym__literal,
      sym_boolLiteral,
      sym__string_literal,
      sym_interpreted_string_literal,
  [511] = 7,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      sym_typeIdentifier,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    STATE(97), 1,
      sym_typeConditional,
    ACTIONS(51), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(92), 6,
      sym_boolType,
      sym_numberType,
      sym_anything,
      sym_numberLiteral,
      sym_unitLiteral,
      sym_raw_string_literal,
    STATE(44), 10,
      sym__type,
      sym_lambdaType,
      sym_listType,
      sym_ternaryType,
      sym_tupleType,
      sym_typeApplication,
      sym__literal,
      sym_boolLiteral,
      sym__string_literal,
      sym_interpreted_string_literal,
  [548] = 7,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      sym_typeIdentifier,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    STATE(97), 1,
      sym_typeConditional,
    ACTIONS(51), 2,
      anon_sym_false,
      anon_sym_true,
    ACTIONS(94), 6,
      sym_boolType,
      sym_numberType,
      sym_anything,
      sym_numberLiteral,
      sym_unitLiteral,
      sym_raw_string_literal,
    STATE(60), 10,
      sym__type,
      sym_lambdaType,
      sym_listType,
      sym_ternaryType,
      sym_tupleType,
      sym_typeApplication,
      sym__literal,
      sym_boolLiteral,
      sym__string_literal,
      sym_interpreted_string_literal,
  [585] = 2,
    ACTIONS(98), 1,
      anon_sym_LPAREN,
    ACTIONS(96), 11,
      sym_boolType,
      sym_numberType,
      sym_typeIdentifier,
      anon_sym_RBRACE,
      sym_anything,
      anon_sym_false,
      anon_sym_true,
      sym_numberLiteral,
      sym_unitLiteral,
      sym_raw_string_literal,
      anon_sym_DQUOTE,
  [602] = 1,
    ACTIONS(100), 10,
      ts_builtin_sym_end,
      anon_sym_let,
      anon_sym_EQ_GT,
      anon_sym_LBRACK_RBRACK,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_extends,
  [615] = 1,
    ACTIONS(102), 10,
      ts_builtin_sym_end,
      anon_sym_let,
      anon_sym_EQ_GT,
      anon_sym_LBRACK_RBRACK,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_extends,
  [628] = 1,
    ACTIONS(104), 10,
      ts_builtin_sym_end,
      anon_sym_let,
      anon_sym_EQ_GT,
      anon_sym_LBRACK_RBRACK,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_extends,
  [641] = 2,
    ACTIONS(108), 1,
      anon_sym_LT,
    ACTIONS(106), 8,
      anon_sym_EQ_GT,
      anon_sym_LBRACK_RBRACK,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_extends,
  [655] = 1,
    ACTIONS(110), 9,
      anon_sym_EQ_GT,
      anon_sym_LBRACK_RBRACK,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_extends,
      anon_sym_LBRACE,
  [667] = 2,
    ACTIONS(106), 3,
      anon_sym_EQ_GT,
      anon_sym_LBRACK_RBRACK,
      anon_sym_extends,
    ACTIONS(112), 6,
      ts_builtin_sym_end,
      anon_sym_let,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [681] = 1,
    ACTIONS(114), 9,
      anon_sym_EQ_GT,
      anon_sym_LBRACK_RBRACK,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_extends,
      anon_sym_LBRACE,
  [693] = 1,
    ACTIONS(116), 9,
      anon_sym_EQ_GT,
      anon_sym_LBRACK_RBRACK,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_extends,
      anon_sym_LBRACE,
  [705] = 1,
    ACTIONS(118), 8,
      anon_sym_EQ_GT,
      anon_sym_LBRACK_RBRACK,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_extends,
  [716] = 1,
    ACTIONS(120), 8,
      anon_sym_EQ_GT,
      anon_sym_LBRACK_RBRACK,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_extends,
  [727] = 2,
    ACTIONS(124), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(122), 7,
      anon_sym_EQ_GT,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_extends,
  [740] = 4,
    ACTIONS(124), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(126), 1,
      anon_sym_EQ_GT,
    ACTIONS(130), 1,
      anon_sym_extends,
    ACTIONS(128), 5,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_GT,
  [757] = 1,
    ACTIONS(132), 8,
      anon_sym_EQ_GT,
      anon_sym_LBRACK_RBRACK,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_extends,
  [768] = 2,
    ACTIONS(134), 1,
      anon_sym_LPAREN,
    ACTIONS(112), 6,
      ts_builtin_sym_end,
      anon_sym_let,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [780] = 3,
    ACTIONS(136), 1,
      anon_sym_COLON,
    ACTIONS(138), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(106), 3,
      anon_sym_EQ_GT,
      anon_sym_LBRACK_RBRACK,
      anon_sym_extends,
  [793] = 1,
    ACTIONS(141), 6,
      ts_builtin_sym_end,
      anon_sym_let,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [802] = 6,
    ACTIONS(124), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(126), 1,
      anon_sym_EQ_GT,
    ACTIONS(130), 1,
      anon_sym_extends,
    ACTIONS(143), 1,
      anon_sym_COMMA,
    ACTIONS(145), 1,
      anon_sym_GT,
    STATE(78), 1,
      aux_sym_typeApplication_repeat1,
  [821] = 1,
    ACTIONS(147), 6,
      ts_builtin_sym_end,
      anon_sym_let,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [830] = 1,
    ACTIONS(149), 6,
      ts_builtin_sym_end,
      anon_sym_let,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [839] = 2,
    ACTIONS(153), 1,
      anon_sym_QMARK,
    ACTIONS(151), 5,
      ts_builtin_sym_end,
      anon_sym_let,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [850] = 1,
    ACTIONS(155), 6,
      ts_builtin_sym_end,
      anon_sym_let,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [859] = 1,
    ACTIONS(157), 6,
      ts_builtin_sym_end,
      anon_sym_let,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [868] = 4,
    ACTIONS(124), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(126), 1,
      anon_sym_EQ_GT,
    ACTIONS(130), 1,
      anon_sym_extends,
    ACTIONS(159), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [882] = 4,
    ACTIONS(124), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(126), 1,
      anon_sym_EQ_GT,
    ACTIONS(130), 1,
      anon_sym_extends,
    ACTIONS(161), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [896] = 3,
    ACTIONS(5), 1,
      anon_sym_let,
    ACTIONS(163), 1,
      ts_builtin_sym_end,
    STATE(53), 3,
      sym__definition,
      sym_binding,
      aux_sym_sourceFile_repeat1,
  [908] = 3,
    ACTIONS(165), 1,
      ts_builtin_sym_end,
    ACTIONS(167), 1,
      anon_sym_let,
    STATE(53), 3,
      sym__definition,
      sym_binding,
      aux_sym_sourceFile_repeat1,
  [920] = 2,
    ACTIONS(100), 1,
      sym__terminator,
    ACTIONS(170), 4,
      anon_sym_EQ_GT,
      anon_sym_LBRACK_RBRACK,
      anon_sym_QMARK,
      anon_sym_extends,
  [930] = 2,
    ACTIONS(102), 1,
      sym__terminator,
    ACTIONS(172), 4,
      anon_sym_EQ_GT,
      anon_sym_LBRACK_RBRACK,
      anon_sym_QMARK,
      anon_sym_extends,
  [940] = 3,
    ACTIONS(112), 1,
      sym__terminator,
    ACTIONS(176), 1,
      anon_sym_QMARK,
    ACTIONS(174), 3,
      anon_sym_EQ_GT,
      anon_sym_LBRACK_RBRACK,
      anon_sym_extends,
  [952] = 2,
    ACTIONS(104), 1,
      sym__terminator,
    ACTIONS(178), 4,
      anon_sym_EQ_GT,
      anon_sym_LBRACK_RBRACK,
      anon_sym_QMARK,
      anon_sym_extends,
  [962] = 4,
    ACTIONS(124), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(126), 1,
      anon_sym_EQ_GT,
    ACTIONS(130), 1,
      anon_sym_extends,
    ACTIONS(180), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [976] = 3,
    ACTIONS(182), 1,
      anon_sym_DQUOTE,
    STATE(62), 1,
      aux_sym_interpreted_string_literal_repeat1,
    ACTIONS(184), 2,
      aux_sym_interpreted_string_literal_token1,
      sym_escape_sequence,
  [987] = 4,
    ACTIONS(124), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(126), 1,
      anon_sym_EQ_GT,
    ACTIONS(130), 1,
      anon_sym_extends,
    ACTIONS(186), 1,
      anon_sym_COLON,
  [1000] = 4,
    ACTIONS(153), 1,
      anon_sym_QMARK,
    ACTIONS(188), 1,
      anon_sym_COMMA,
    ACTIONS(190), 1,
      anon_sym_RPAREN,
    STATE(77), 1,
      aux_sym_application_repeat1,
  [1013] = 3,
    ACTIONS(192), 1,
      anon_sym_DQUOTE,
    STATE(62), 1,
      aux_sym_interpreted_string_literal_repeat1,
    ACTIONS(194), 2,
      aux_sym_interpreted_string_literal_token1,
      sym_escape_sequence,
  [1024] = 3,
    ACTIONS(197), 1,
      anon_sym_DQUOTE,
    STATE(62), 1,
      aux_sym_interpreted_string_literal_repeat1,
    ACTIONS(184), 2,
      aux_sym_interpreted_string_literal_token1,
      sym_escape_sequence,
  [1035] = 4,
    ACTIONS(153), 1,
      anon_sym_QMARK,
    ACTIONS(188), 1,
      anon_sym_COMMA,
    ACTIONS(199), 1,
      anon_sym_RPAREN,
    STATE(80), 1,
      aux_sym_application_repeat1,
  [1048] = 4,
    ACTIONS(124), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(126), 1,
      anon_sym_EQ_GT,
    ACTIONS(130), 1,
      anon_sym_extends,
    ACTIONS(201), 1,
      anon_sym_QMARK,
  [1061] = 3,
    ACTIONS(203), 1,
      anon_sym_DQUOTE,
    STATE(63), 1,
      aux_sym_interpreted_string_literal_repeat1,
    ACTIONS(205), 2,
      aux_sym_interpreted_string_literal_token1,
      sym_escape_sequence,
  [1072] = 3,
    ACTIONS(207), 1,
      anon_sym_DQUOTE,
    STATE(59), 1,
      aux_sym_interpreted_string_literal_repeat1,
    ACTIONS(209), 2,
      aux_sym_interpreted_string_literal_token1,
      sym_escape_sequence,
  [1083] = 3,
    ACTIONS(124), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(130), 1,
      anon_sym_extends,
    ACTIONS(211), 1,
      anon_sym_EQ_GT,
  [1093] = 3,
    ACTIONS(213), 1,
      anon_sym_COMMA,
    ACTIONS(215), 1,
      anon_sym_RPAREN,
    STATE(82), 1,
      aux_sym_tupleType_repeat1,
  [1103] = 2,
    ACTIONS(153), 1,
      anon_sym_QMARK,
    ACTIONS(217), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1111] = 2,
    ACTIONS(136), 1,
      anon_sym_COLON,
    ACTIONS(219), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1119] = 3,
    ACTIONS(217), 1,
      anon_sym_RPAREN,
    ACTIONS(221), 1,
      anon_sym_COMMA,
    STATE(72), 1,
      aux_sym_application_repeat1,
  [1129] = 2,
    ACTIONS(153), 1,
      anon_sym_QMARK,
    ACTIONS(224), 2,
      ts_builtin_sym_end,
      anon_sym_let,
  [1137] = 3,
    ACTIONS(226), 1,
      anon_sym_COMMA,
    ACTIONS(229), 1,
      anon_sym_RPAREN,
    STATE(74), 1,
      aux_sym_tupleType_repeat1,
  [1147] = 3,
    ACTIONS(112), 1,
      sym__terminator,
    ACTIONS(176), 1,
      anon_sym_QMARK,
    ACTIONS(231), 1,
      anon_sym_LPAREN,
  [1157] = 3,
    ACTIONS(124), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(130), 1,
      anon_sym_extends,
    ACTIONS(233), 1,
      anon_sym_EQ_GT,
  [1167] = 3,
    ACTIONS(188), 1,
      anon_sym_COMMA,
    ACTIONS(235), 1,
      anon_sym_RPAREN,
    STATE(72), 1,
      aux_sym_application_repeat1,
  [1177] = 3,
    ACTIONS(143), 1,
      anon_sym_COMMA,
    ACTIONS(237), 1,
      anon_sym_GT,
    STATE(83), 1,
      aux_sym_typeApplication_repeat1,
  [1187] = 3,
    ACTIONS(124), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(130), 1,
      anon_sym_extends,
    ACTIONS(239), 1,
      anon_sym_EQ_GT,
  [1197] = 3,
    ACTIONS(188), 1,
      anon_sym_COMMA,
    ACTIONS(241), 1,
      anon_sym_RPAREN,
    STATE(72), 1,
      aux_sym_application_repeat1,
  [1207] = 2,
    ACTIONS(124), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(122), 2,
      anon_sym_EQ_GT,
      anon_sym_extends,
  [1215] = 3,
    ACTIONS(213), 1,
      anon_sym_COMMA,
    ACTIONS(243), 1,
      anon_sym_RPAREN,
    STATE(74), 1,
      aux_sym_tupleType_repeat1,
  [1225] = 3,
    ACTIONS(180), 1,
      anon_sym_GT,
    ACTIONS(245), 1,
      anon_sym_COMMA,
    STATE(83), 1,
      aux_sym_typeApplication_repeat1,
  [1235] = 2,
    ACTIONS(155), 1,
      sym__terminator,
    ACTIONS(248), 1,
      anon_sym_QMARK,
  [1242] = 2,
    ACTIONS(141), 1,
      sym__terminator,
    ACTIONS(250), 1,
      anon_sym_QMARK,
  [1249] = 2,
    ACTIONS(151), 1,
      sym__terminator,
    ACTIONS(252), 1,
      anon_sym_QMARK,
  [1256] = 2,
    ACTIONS(157), 1,
      sym__terminator,
    ACTIONS(254), 1,
      anon_sym_QMARK,
  [1263] = 1,
    ACTIONS(229), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1268] = 2,
    ACTIONS(256), 1,
      anon_sym_LPAREN,
    STATE(96), 1,
      sym_tupleType,
  [1275] = 2,
    ACTIONS(149), 1,
      sym__terminator,
    ACTIONS(258), 1,
      anon_sym_QMARK,
  [1282] = 2,
    ACTIONS(157), 1,
      sym__terminator,
    ACTIONS(252), 1,
      anon_sym_QMARK,
  [1289] = 2,
    ACTIONS(153), 1,
      anon_sym_QMARK,
    ACTIONS(260), 1,
      anon_sym_COLON,
  [1296] = 2,
    ACTIONS(153), 1,
      anon_sym_QMARK,
    ACTIONS(262), 1,
      anon_sym_COLON,
  [1303] = 2,
    ACTIONS(147), 1,
      sym__terminator,
    ACTIONS(264), 1,
      anon_sym_QMARK,
  [1310] = 2,
    ACTIONS(256), 1,
      anon_sym_LPAREN,
    STATE(102), 1,
      sym_tupleType,
  [1317] = 1,
    ACTIONS(266), 1,
      anon_sym_LBRACE,
  [1321] = 1,
    ACTIONS(268), 1,
      anon_sym_QMARK,
  [1325] = 1,
    ACTIONS(270), 1,
      anon_sym_EQ,
  [1329] = 1,
    ACTIONS(272), 1,
      sym__terminator,
  [1333] = 1,
    ACTIONS(274), 1,
      sym_identifier,
  [1337] = 1,
    ACTIONS(276), 1,
      ts_builtin_sym_end,
  [1341] = 1,
    ACTIONS(278), 1,
      anon_sym_LBRACE,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(13)] = 0,
  [SMALL_STATE(14)] = 47,
  [SMALL_STATE(15)] = 94,
  [SMALL_STATE(16)] = 141,
  [SMALL_STATE(17)] = 185,
  [SMALL_STATE(18)] = 235,
  [SMALL_STATE(19)] = 279,
  [SMALL_STATE(20)] = 326,
  [SMALL_STATE(21)] = 363,
  [SMALL_STATE(22)] = 400,
  [SMALL_STATE(23)] = 437,
  [SMALL_STATE(24)] = 474,
  [SMALL_STATE(25)] = 511,
  [SMALL_STATE(26)] = 548,
  [SMALL_STATE(27)] = 585,
  [SMALL_STATE(28)] = 602,
  [SMALL_STATE(29)] = 615,
  [SMALL_STATE(30)] = 628,
  [SMALL_STATE(31)] = 641,
  [SMALL_STATE(32)] = 655,
  [SMALL_STATE(33)] = 667,
  [SMALL_STATE(34)] = 681,
  [SMALL_STATE(35)] = 693,
  [SMALL_STATE(36)] = 705,
  [SMALL_STATE(37)] = 716,
  [SMALL_STATE(38)] = 727,
  [SMALL_STATE(39)] = 740,
  [SMALL_STATE(40)] = 757,
  [SMALL_STATE(41)] = 768,
  [SMALL_STATE(42)] = 780,
  [SMALL_STATE(43)] = 793,
  [SMALL_STATE(44)] = 802,
  [SMALL_STATE(45)] = 821,
  [SMALL_STATE(46)] = 830,
  [SMALL_STATE(47)] = 839,
  [SMALL_STATE(48)] = 850,
  [SMALL_STATE(49)] = 859,
  [SMALL_STATE(50)] = 868,
  [SMALL_STATE(51)] = 882,
  [SMALL_STATE(52)] = 896,
  [SMALL_STATE(53)] = 908,
  [SMALL_STATE(54)] = 920,
  [SMALL_STATE(55)] = 930,
  [SMALL_STATE(56)] = 940,
  [SMALL_STATE(57)] = 952,
  [SMALL_STATE(58)] = 962,
  [SMALL_STATE(59)] = 976,
  [SMALL_STATE(60)] = 987,
  [SMALL_STATE(61)] = 1000,
  [SMALL_STATE(62)] = 1013,
  [SMALL_STATE(63)] = 1024,
  [SMALL_STATE(64)] = 1035,
  [SMALL_STATE(65)] = 1048,
  [SMALL_STATE(66)] = 1061,
  [SMALL_STATE(67)] = 1072,
  [SMALL_STATE(68)] = 1083,
  [SMALL_STATE(69)] = 1093,
  [SMALL_STATE(70)] = 1103,
  [SMALL_STATE(71)] = 1111,
  [SMALL_STATE(72)] = 1119,
  [SMALL_STATE(73)] = 1129,
  [SMALL_STATE(74)] = 1137,
  [SMALL_STATE(75)] = 1147,
  [SMALL_STATE(76)] = 1157,
  [SMALL_STATE(77)] = 1167,
  [SMALL_STATE(78)] = 1177,
  [SMALL_STATE(79)] = 1187,
  [SMALL_STATE(80)] = 1197,
  [SMALL_STATE(81)] = 1207,
  [SMALL_STATE(82)] = 1215,
  [SMALL_STATE(83)] = 1225,
  [SMALL_STATE(84)] = 1235,
  [SMALL_STATE(85)] = 1242,
  [SMALL_STATE(86)] = 1249,
  [SMALL_STATE(87)] = 1256,
  [SMALL_STATE(88)] = 1263,
  [SMALL_STATE(89)] = 1268,
  [SMALL_STATE(90)] = 1275,
  [SMALL_STATE(91)] = 1282,
  [SMALL_STATE(92)] = 1289,
  [SMALL_STATE(93)] = 1296,
  [SMALL_STATE(94)] = 1303,
  [SMALL_STATE(95)] = 1310,
  [SMALL_STATE(96)] = 1317,
  [SMALL_STATE(97)] = 1321,
  [SMALL_STATE(98)] = 1325,
  [SMALL_STATE(99)] = 1329,
  [SMALL_STATE(100)] = 1333,
  [SMALL_STATE(101)] = 1337,
  [SMALL_STATE(102)] = 1341,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sourceFile, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_matchExpression_repeat1, 2), SHIFT_REPEAT(68),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_matchExpression_repeat1, 2), SHIFT_REPEAT(17),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_matchExpression_repeat1, 2), SHIFT_REPEAT(31),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_matchExpression_repeat1, 2),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_matchExpression_repeat1, 2), SHIFT_REPEAT(30),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_matchExpression_repeat1, 2), SHIFT_REPEAT(67),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_matchClause, 2),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_matchClause, 2),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpreted_string_literal, 3),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpreted_string_literal, 2),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolLiteral, 1),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type, 1),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tupleType, 3),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tupleType, 2),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tupleType, 4),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typeApplication, 5, .production_id = 10),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_listType, 2),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lambdaType, 3, .production_id = 5),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ternaryType, 5, .production_id = 13),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typeApplication, 4, .production_id = 8),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [138] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__type, 1), REDUCE(sym_tupleElement, 1, .production_id = 2),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_application, 5, .production_id = 12),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_application, 3, .production_id = 4),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_application, 4, .production_id = 9),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ternaryExpression, 5, .production_id = 13),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_matchExpression, 5, .production_id = 11),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lambda, 3, .production_id = 6),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tupleElement, 3, .production_id = 7),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tupleElement, 1, .production_id = 3),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sourceFile, 1),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sourceFile_repeat1, 2),
  [167] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sourceFile_repeat1, 2), SHIFT_REPEAT(100),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpreted_string_literal, 3),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpreted_string_literal, 2),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type, 1),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolLiteral, 1),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_typeApplication_repeat1, 2),
  [182] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_interpreted_string_literal_repeat1, 2),
  [194] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interpreted_string_literal_repeat1, 2), SHIFT_REPEAT(62),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typeConditional, 3),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_application_repeat1, 2),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tupleElement, 1, .production_id = 2),
  [221] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_application_repeat1, 2), SHIFT_REPEAT(9),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binding, 4, .production_id = 1),
  [226] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tupleType_repeat1, 2), SHIFT_REPEAT(19),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tupleType_repeat1, 2),
  [231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [245] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_typeApplication_repeat1, 2), SHIFT_REPEAT(22),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_matchExpression, 5, .production_id = 11),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_application, 5, .production_id = 12),
  [252] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lambda, 3, .production_id = 6),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_application, 4, .production_id = 9),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_application, 3, .production_id = 4),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [276] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_lang(void) {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const unsigned short *)ts_parse_table,
    .small_parse_table = (const uint16_t *)ts_small_parse_table,
    .small_parse_table_map = (const uint32_t *)ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .symbol_names = ts_symbol_names,
    .public_symbol_map = ts_symbol_map,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .field_count = FIELD_COUNT,
    .field_names = ts_field_names,
    .field_map_slices = (const TSFieldMapSlice *)ts_field_map_slices,
    .field_map_entries = (const TSFieldMapEntry *)ts_field_map_entries,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
