function mk_poryswitch_case($, block, single) {
  return seq(
    field('case', $.IDENT), 
    choice(
      seq(
        $.TOKEN_P_BOPEN,
        block,
        $.TOKEN_P_BCLOSE
      ),
      seq(
        $.TOKEN_P_COLON,
        single
      )
    )
  );
}

function mk_poryswitch($, poryswitch_case) {
  return seq(
    $.TOKEN_KW_PORYSWITCH,
    $.TOKEN_P_POPEN,
    field('switch', $.IDENT),
    $.TOKEN_P_PCLOSE,
    $.TOKEN_P_BOPEN,
    repeat1(poryswitch_case),
    $.TOKEN_P_BCLOSE
  );
}

module.exports = grammar({
  name: 'poryscript',

  rules: {
    // top
    source_file: $ => repeat($.statement),

    statement: $ => choice(
      $.COMMENT, // TODO: this needs to be handled better
      $.const,
      $.script,
      // $.mapscripts,
      $.mart,
      $.movement,
      $.raw,
      $.text,
    ),

    const: $ => seq(
      $.TOKEN_KW_CONST,
      $.IDENT,
      $.TOKEN_P_EQUALS, 
      // TODO: this is not a great
      // parsing of this
      choice($.NUM_LIT, $.IDENT),
      repeat(seq(
        $.TOKEN_P_PLUS,
        choice($.NUM_LIT, $.IDENT)
      ))
    ),

    script: $ => seq(
      $.TOKEN_KW_SCRIPT,
      optional($.scope_modifier),
      field('name', $.IDENT),
      $.script_block
    ),

    script_block: $ => seq(
      $.TOKEN_P_BOPEN,
      repeat($._script_statements),
      $.TOKEN_P_BCLOSE
    ),

    _script_statements: $ => choice(
      $.script_if,
      $.script_while,
      $.script_do_while,
      $.script_switch,
      $.script_application,
      $.SCRIPT_0_LIT,
      $.TOKEN_KW_BREAK,
      $.TOKEN_KW_CONTINUE,
      $.TOKEN_KW_END,
      $.TOKEN_KW_RETURN,
      $.IDENT
    ),

    script_if: $ => seq(
      $.TOKEN_KW_IF,
      $.TOKEN_P_POPEN,
      field('ifcond', $.script_expression), 
      $.TOKEN_P_PCLOSE,
      field('ifbody', $.script_block),
      optional(seq(
        $.TOKEN_KW_ELIF,
        $.TOKEN_P_POPEN,
        field('elifcond', $.script_expression), 
        $.TOKEN_P_PCLOSE,
        field('elifbody', $.script_block),
      )),
      optional(seq(
        $.TOKEN_KW_ELSE,
        field('elsebody', $.script_block),
      )),
    ),

    script_while: $ => seq(
      $.TOKEN_KW_WHILE,
      optional(seq(
        $.TOKEN_P_POPEN,
        field('whilecond', $.script_expression), 
        $.TOKEN_P_PCLOSE,
      )),
      field('whilebody', $.script_block),
    ),

    script_do_while: $ => seq(
      $.TOKEN_KW_DO,
      field('dobody', $.script_block),
      $.TOKEN_KW_WHILE,
      $.TOKEN_P_POPEN,
      field('docond', $.script_expression), 
      $.TOKEN_P_PCLOSE,
    ),

    script_switch: $ => seq(
      $.TOKEN_KW_SWITCH,
        $.TOKEN_P_POPEN,
        field('switchexpr', $.script_expression), 
        $.TOKEN_P_PCLOSE,
        $.TOKEN_P_BOPEN,
        repeat1($.script_switch_case),
        $.TOKEN_P_BCLOSE
    ),

    script_switch_case: $ => choice(
      seq(
        $.TOKEN_KW_CASE,
        field('caseval', $.NUM_LIT),
        $.TOKEN_P_COLON,
        field('casebody', repeat($._script_statements)),
      ),
      seq(
        $.TOKEN_KW_DEFAULT,
        $.TOKEN_P_COLON,
        field('defaultbody', repeat($._script_statements)),
      ),
    ),

    script_expression: $ => choice(
      $.script_application,
      // TODO: Binops / Boolean exprs
      // TODO: fix parameters for a application. comma splits params, adj str_lits are one param
      // TODO: labels
      // poryswitch inside of script
      // TODO: const expr in const assignment
      // mapscript
    ),

    script_application: $ => seq(
      $.SCRIPT_FN_LIT,
      $.TOKEN_P_POPEN,
      repeat1(choice(
        $.STRING_LIT,
        $.STRING_INTERPOLATED,
        $.NUM_LIT,
        $.IDENT
      )),
      $.TOKEN_P_PCLOSE
    ),


    mart: $ => seq(
      $.TOKEN_KW_MART,
      optional($.scope_modifier),
      field('name', $.IDENT),
      $.TOKEN_P_BOPEN,
      choice(
        $.mart_values,
        alias($.poryswitch_mart, $.poryswitch)
      ),
      $.TOKEN_P_BCLOSE
    ),

    mart_values: $ => repeat1($.IDENT),
    mart_value: $ => $.IDENT,
    poryswitch_case_mart: $ => mk_poryswitch_case($, $.mart_values, $.mart_value),
    poryswitch_mart: $ => mk_poryswitch($, alias($.poryswitch_case_mart, $.poryswitch_case)),

    movement: $ => seq(
      $.TOKEN_KW_MOVEMENT,
      optional($.scope_modifier),
      field('name', $.IDENT),
      $.TOKEN_P_BOPEN,
      choice(
        $.movement_values,
        alias($.poryswitch_movement, $.poryswitch)
      ),
      $.TOKEN_P_BCLOSE
    ),

    movement_values: $ => repeat1($._movement_entry),
    movement_value: $ =>  $._movement_entry,
    _movement_entry: $ => seq(
      $.MOVEMENT_LIT,
      optional(seq(
        $.TOKEN_P_ASTER,
        $.NUM_LIT
      ))
    ),

    poryswitch_case_movement: $ => mk_poryswitch_case($, $.movement_values, $.movement_value),
    poryswitch_movement: $ => mk_poryswitch($, alias($.poryswitch_case_movement, $.poryswitch_case)),

    raw: $ => seq(
      $.TOKEN_KW_RAW,
      $.RAW_LIT
    ),

    text: $ => seq(
      $.TOKEN_KW_TEXT,
      optional($.scope_modifier),
      field('name', $.IDENT),
      $.TOKEN_P_BOPEN,
      choice(
        $.text_values,
        alias($.poryswitch_text, $.poryswitch)
      ),
      $.TOKEN_P_BCLOSE
    ),

    text_values: $ => repeat1($.STRING),
    text_value: $ => $.STRING,
    poryswitch_case_text: $ => mk_poryswitch_case($, $.text_values, $.text_value),
    poryswitch_text: $ => mk_poryswitch($, alias($.poryswitch_case_text, $.poryswitch_case)),

    scope_modifier: $ => seq(
      $.TOKEN_P_POPEN,
      choice(
        $.TOKEN_KW_LOCAL,
        $.TOKEN_KW_GLOBAL
      ),
      $.TOKEN_P_PCLOSE
    ),

    // Built in funcs
    TOKEN_BI_FORMAT: _ => 'format',

    // Keywords
    TOKEN_KW_BREAK: _ => 'break',
    TOKEN_KW_CASE: _ => 'case',
    TOKEN_KW_CONST: _ => 'const',
    TOKEN_KW_CONTINUE: _ => 'continue',
    TOKEN_KW_DEFAULT: _ => 'default',
    TOKEN_KW_DO: _ => 'do',
    TOKEN_KW_ELIF: _ => 'elif',
    TOKEN_KW_ELSE: _ => 'else',
    TOKEN_KW_END: _ => 'end',
    TOKEN_KW_IF: _ => 'if',
    TOKEN_KW_LOCAL: _ => 'local',
    TOKEN_KW_GLOBAL: _ => 'global',
    TOKEN_KW_RETURN: _ => 'return',
    TOKEN_KW_SWITCH: _ => 'switch',
    TOKEN_KW_WHILE: _ => 'while',

    TOKEN_KW_PORYSWITCH: _ => 'poryswitch',

    TOKEN_KW_MART: _ => 'mart',
    TOKEN_KW_MOVEMENT: _ => 'movement',
    TOKEN_KW_RAW: _ => 'raw',
    TOKEN_KW_SCRIPT: _ => 'script',
    TOKEN_KW_TEXT: _ => 'text',

    // Special punctuation
    TOKEN_P_EQUALS: _ => "=",
    TOKEN_P_POPEN: _ => "(",
    TOKEN_P_PCLOSE: _ => ")",
    TOKEN_P_BOPEN: _ => "{",
    TOKEN_P_BCLOSE: _ => "}",
    TOKEN_P_SOPEN: _ => "[",
    TOKEN_P_SCLOSE: _ => "]",
    TOKEN_P_COLON: _ => ":",
    TOKEN_P_ASTER: _ => "*",
    TOKEN_P_PLUS: _ => "+",

    // Numbers
    NUM_LIT: $ => choice(
      $.INT_LIT,
      $.HEX_LIT,
      $.BIN_LIT,
    ),

    INT_LIT: _ => /[0-9]+/,
    HEX_LIT: _ => /0x[0-9A-Fa-f]+/,
    BIN_LIT: _ => /0b[0-9A-Fa-f]+/,

    // Strings
    STRING: $ => choice(
      $.STRING_LIT,
      $.STRING_INTERPOLATED,
      $.FORMAT_STRING,
    ),

    FORMAT_STRING: $ => seq(
      $.TOKEN_BI_FORMAT,
      $.TOKEN_P_POPEN,
      repeat1(choice($.STRING_LIT, $.STRING_INTERPOLATED)),
      $.TOKEN_P_PCLOSE,
    ),

    STRING_INTERPOLATED: $ => seq(
      $.STRING_INTER_START,
      $.IDENT,
      repeat(seq(
        $.STRING_INTER_MID,
        $.IDENT,
      )),
      $.STRING_INTER_END,
    ),

    // Any run of text that 
    // - starts with a "
    // - doesn't contain any of " {  } internally
    // - ends with a "
    STRING_LIT: _ => /[\"][^\"{}]*[\"]/,


    // Any run of text that
    // - starts with a "
    // - doesn't contain a "{} internally
    // - ends with a {
    STRING_INTER_START: _ => /[\"][^{}\"]*[{]/, 

    // Any run of text that
    // - starts with a {
    // - doesn't contain a "{} internally
    // - ends with a }
    STRING_INTER_MID: _ => /[}][^{}\"]*[{]/,

    // Any run of text that
    // - starts with a }
    // - doesn't contain a "{} internally
    // - ends with a "
    STRING_INTER_END: _ => /[}][^\{}"]*[\"]/, 

    // Raws
    // Any run of text that 
    // - starts with a `
    // - doesn't contain any of ` internally
    // - ends with a `
    RAW_LIT: _ => /[`][^`]*[`]/,

    // Movements
    MOVEMENT_LIT: _ => choice(
      'walk_left',
      'walk_right',
      'walk_up',
      'walk_down',
      'face_left',
      'face_right',
      'face_up',
      'face_down',
    ),

    // Script commands
    SCRIPT_0_LIT: _ => choice(
      'lock',
      'faceplayer',
      'release',
    ),
    
    SCRIPT_FN_LIT: _ => choice(
      'msgbox',
      'flag',
      'var',
      'value',
      'defeated',
    ),

    // Identifiers

    // Any run of non-whitespace text containing 
    //  - any latin alpha
    //  - any aribic numerals
    //  - an underscore
    //  - starting with either an alpha or underscore
    IDENT: _ => /[A-Za-z_][A-Za-z_0-9]*/,

    // Comments
    COMMENT: $ => choice(
      $.SLASH_COMMENT,
      $.HASH_COMMENT,
    ),

    // Any run of text 
    // - starting with //
    // - ending with a newline
    SLASH_COMMENT: _ => /[\/][\/].*/,
    
    // Any run of text 
    // - starting with #
    // - ending with a newline
    HASH_COMMENT: _ => /[#].*/,
    
  }
});

