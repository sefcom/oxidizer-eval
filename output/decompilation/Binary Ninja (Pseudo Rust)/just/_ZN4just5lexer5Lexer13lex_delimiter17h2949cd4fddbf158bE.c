
  fn just::lexer::Lexer::lex_delimiter::h2949cd4fddbf158b(arg1: *mut i128, arg2: *mut c_void, arg3: u64) -> i64

{
    let mut var_91: i8 = arg3;
    let r15: u32 = arg3;
    let rax: u64 = r15 - 7;
    let mut var_90: u64;
    let var_48: i8;
    let mut result: i64;
    
    if rax <= 0x16
    {
        match rax
        {
            0 =>
            {
                just::lexer::Lexer::open_delimiter::h93fd7bc087573307(arg2, 0);
                /* tailcall */
                return just::lexer::Lexer::lex_single::ha33377f4e645bc1d(arg1, arg2, r15);
            }
            1 =>
            {
                result = just::lexer::Lexer::close_delimiter::ha2c6f40e739c3a44(&var_90, arg2, 0);
                
                if var_48 != 0x25
                {
                    goto 'label_67247d;
                }
                
                /* tailcall */
                return just::lexer::Lexer::lex_single::ha33377f4e645bc1d(arg1, arg2, r15);
            }
            2 =>
            {
                just::lexer::Lexer::open_delimiter::h93fd7bc087573307(arg2, 1);
                /* tailcall */
                return just::lexer::Lexer::lex_single::ha33377f4e645bc1d(arg1, arg2, r15);
            }
            3 =>
            {
                result = just::lexer::Lexer::close_delimiter::ha2c6f40e739c3a44(&var_90, arg2, 1);
                
                if var_48 == 0x25
                {
                    /* tailcall */
                    return just::lexer::Lexer::lex_single::ha33377f4e645bc1d(arg1, arg2, r15);
                }
                
                goto 'label_67247d;
            }
            0x15 =>
            {
                just::lexer::Lexer::open_delimiter::h93fd7bc087573307(arg2, 2);
                /* tailcall */
                return just::lexer::Lexer::lex_single::ha33377f4e645bc1d(arg1, arg2, r15);
            }
            0x16 =>
            {
                result = just::lexer::Lexer::close_delimiter::ha2c6f40e739c3a44(&var_90, arg2, 2);
                
                if var_48 == 0x25
                {
                    /* tailcall */
                    return just::lexer::Lexer::lex_single::ha33377f4e645bc1d(arg1, arg2, r15);
                }
                
                'label_67247d:
                let var_50: i128;
                arg1[4] = var_50;
                let zmm0_1: i128 = var_90;
                let var_60: i128;
                arg1[3] = var_60;
                let var_70: i64;
                arg1[2] = var_70;
                let var_80: i64;
                arg1[1] = var_80;
                *arg1 = zmm0_1;
                return result;
            }
        }
    }
    let mut var_40: *mut i8 = &var_91;
    let var_38_1: fn(arg1: *mut i8, arg2: *mut i64) -> i64 =
        _$LT$just..token_kind..TokenKind$u20$as$u20$core..fmt..Display$GT$::fmt::h4cb9518a42607a95;
    var_90 = &data_830500;
    let var_88_1: i64 = 2;
    let var_70_1: i64 = 0;
    let var_80_1: *mut *mut i8 = &var_40;
    let var_78_1: i64 = 1;
    let mut var_30: ();
    core::option::Option$LT$T$GT$::map_or_else::h4ceadf09b7aa2c32(&var_30, 0, arg3, &var_90);
    just::lexer::Lexer::internal_error::h78cb678bc55cc920(arg1, arg2, &var_30)
}
