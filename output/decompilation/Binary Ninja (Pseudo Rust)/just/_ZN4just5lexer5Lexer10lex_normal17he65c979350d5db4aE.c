
  fn just::lexer::Lexer::lex_normal::he65c979350d5db4a(arg1: *mut i8, arg2: *mut c_void, arg3: i32) -> i64

{
    let rax: u64 = arg3 - 9;
    let mut var_80: u64;
    
    if rax > 0x74
    {
        if arg3 == 0xfeff
        {
            /* tailcall */
            return just::lexer::Lexer::lex_single::ha33377f4e645bc1d(arg1, arg2, 0xb);
        }
        
        'label_671a65:
        let mut rax_15: i32;
        
        if arg3 - 0x61 >= 0x1a && arg3 >= 0x41
        {
            rax_15 = arg3 < 0x5b;
        }
        
        if arg3 - 0x61 < 0x1a || (arg3 >= 0x41 && (arg3 == 0x5f | rax_15) != 0)
        {
            /* tailcall */
            return just::lexer::Lexer::lex_identifier::hf1dac9d9d56230f3(arg1, arg2);
        }
        
        let r14_2: *mut u64 = arg1;
        let result: i64 = just::lexer::Lexer::advance::hab928493b22c646a(&var_80, arg2);
        let var_38: i8;
        
        if var_38 == 0x25
        {
            let var_78_1: i32 = arg3;
            var_80 = -0x7fffffffffffffbc;
            return just::lexer::Lexer::error::h92eb8a4dd6b17c78(r14_2, arg2, &var_80);
        }
        
        let var_40: i128;
        *r14_2.byte_offset(0x40) = var_40;
        let zmm0_11: i128 = var_80;
        let var_50: i128;
        *r14_2.byte_offset(0x30) = var_50;
        let var_60: i128;
        *r14_2.byte_offset(0x20) = var_60;
        let var_70: i128;
        *r14_2.byte_offset(0x10) = var_70;
        *r14_2 = zmm0_11;
        return result;
    }
    
    match rax
    {
        0 | 0x17 =>
        {
            /* tailcall */
            just::lexer::Lexer::lex_whitespace::h8e907693bc02b7bb(arg1, arg2)
        }
        1 | 4 =>
        {
            /* tailcall */
            just::lexer::Lexer::lex_eol::h7f8dde0d41698e62(arg1, arg2)
        }
        2 | 3 | 5 | 6 | 7 | 8 | 9 | 0xa | 0xb | 0xc | 0xd | 0xe | 0xf | 0x10 | 0x11 | 0x12 | 0x13 |
            0x14 | 0x15 | 0x16 | 0x1c | 0x24 | 0x25 | 0x27 | 0x28 | 0x29 | 0x2a | 0x2b | 0x2c | 0x2d
            | 0x2e | 0x2f | 0x30 | 0x32 | 0x33 | 0x35 | 0x38 | 0x39 | 0x3a | 0x3b | 0x3c | 0x3d |
            0x3e | 0x3f | 0x40 | 0x41 | 0x42 | 0x43 | 0x44 | 0x45 | 0x46 | 0x47 | 0x48 | 0x49 | 0x4a
            | 0x4b | 0x4c | 0x4d | 0x4e | 0x4f | 0x50 | 0x51 | 0x55 | 0x56 | 0x58 | 0x59 | 0x5a |
            0x5b | 0x5c | 0x5d | 0x5e | 0x5f | 0x60 | 0x61 | 0x62 | 0x63 | 0x64 | 0x65 | 0x66 | 0x67
            | 0x68 | 0x69 | 0x6a | 0x6b | 0x6c | 0x6d | 0x6e | 0x6f | 0x70 | 0x71 =>
        {
            goto 'label_671a65;
        }
        0x18 =>
        {
            let mut rax_9: *mut c_void;
            let mut rdx_10: i64;
            rax_9 = just::lexer::Lexer::rest::h4f82959a07fe6144(arg2);
            
            if core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::h8590487e544a86f3(rax_9, 
                rdx_10, "!includeS", 8) == 0
            {
                /* tailcall */
                return just::lexer::Lexer::lex_choices::h87db0effb4b54026(arg1, arg2, 0x21, "=", 
                    0x25);
            }
            
            var_80 = -0x7fffffffffffffda;
            just::lexer::Lexer::error::h92eb8a4dd6b17c78(arg1, arg2, &var_80)
        }
        0x19 | 0x1e | 0x57 =>
        {
            /* tailcall */
            just::lexer::Lexer::lex_string::hf16a7b23cc25ab92(arg1, arg2)
        }
        0x1a =>
        {
            /* tailcall */
            just::lexer::Lexer::lex_comment::h56d1597af2c2fc00(arg1, arg2)
        }
        0x1b =>
        {
            /* tailcall */
            just::lexer::Lexer::lex_single::ha33377f4e645bc1d(arg1, arg2, 0x12)
        }
        0x1d =>
        {
            /* tailcall */
            just::lexer::Lexer::lex_digraph::h7eb8b1388d0dddbe(arg1, arg2, 0x26, 0x26, 0)
        }
        0x1f =>
        {
            /* tailcall */
            just::lexer::Lexer::lex_delimiter::h2949cd4fddbf158b(arg1, arg2, 0x1c)
        }
        0x20 =>
        {
            /* tailcall */
            just::lexer::Lexer::lex_delimiter::h2949cd4fddbf158b(arg1, arg2, 0x1d)
        }
        0x21 =>
        {
            /* tailcall */
            just::lexer::Lexer::lex_single::ha33377f4e645bc1d(arg1, arg2, 1)
        }
        0x22 =>
        {
            /* tailcall */
            just::lexer::Lexer::lex_single::ha33377f4e645bc1d(arg1, arg2, 0x1e)
        }
        0x23 =>
        {
            /* tailcall */
            just::lexer::Lexer::lex_single::ha33377f4e645bc1d(arg1, arg2, 0xf)
        }
        0x26 =>
        {
            /* tailcall */
            just::lexer::Lexer::lex_single::ha33377f4e645bc1d(arg1, arg2, 0x20)
        }
        0x31 =>
        {
            /* tailcall */
            just::lexer::Lexer::lex_colon::he29ae39e0cf2f603(arg1, arg2)
        }
        0x34 =>
        {
            /* tailcall */
            just::lexer::Lexer::lex_choices::h87db0effb4b54026(arg1, arg2, 0x3d, &data_465d30, 0x15)
        }
        0x36 =>
        {
            /* tailcall */
            just::lexer::Lexer::lex_single::ha33377f4e645bc1d(arg1, arg2, 0x1f)
        }
        0x37 =>
        {
            /* tailcall */
            just::lexer::Lexer::lex_single::ha33377f4e645bc1d(arg1, arg2, 2)
        }
        0x52 =>
        {
            /* tailcall */
            just::lexer::Lexer::lex_delimiter::h2949cd4fddbf158b(arg1, arg2, 9)
        }
        0x53 =>
        {
            /* tailcall */
            just::lexer::Lexer::lex_escape::hfa0aaf6f8bea1e9a(arg1, arg2)
        }
        0x54 =>
        {
            /* tailcall */
            just::lexer::Lexer::lex_delimiter::h2949cd4fddbf158b(arg1, arg2, 0xa)
        }
        0x72 =>
        {
            /* tailcall */
            just::lexer::Lexer::lex_delimiter::h2949cd4fddbf158b(arg1, arg2, 7)
        }
        0x73 =>
        {
            /* tailcall */
            just::lexer::Lexer::lex_digraph::h7eb8b1388d0dddbe(arg1, arg2, 0x7c, 0x7c, 6)
        }
        0x74 =>
        {
            /* tailcall */
            just::lexer::Lexer::lex_delimiter::h2949cd4fddbf158b(arg1, arg2, 8)
        }
    }
}
