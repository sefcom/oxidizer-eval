
  fn just::lexer::Lexer::lex_interpolation::h29248a24ec5712d3(arg1: *mut u64, arg2: *mut c_void, arg3: *mut i128, arg4: i32) -> i64

{
    if just::lexer::Lexer::rest_starts_with::hd2b5246203875c01(arg2, 
        "}}Lexer::lex_interpolation found…", 2) == 0
    {
        if just::lexer::Lexer::at_eol_or_eof::h85f92b30e0726684(arg2) == 0
        {
            /* tailcall */
            return just::lexer::Lexer::lex_normal::he65c979350d5db4a(arg1, arg2, arg4);
        }
        
        /* tailcall */
        return just::lexer::Lexer::unterminated_interpolation_error::h2170ba94c271abf2(arg1, arg3);
    }
    
    let rax_1: i64 = *arg2.byte_offset(0x28);
    
    if rax_1 != 0
    {
        *arg2.byte_offset(0x28) = rax_1 - 1;
        
        if *(*arg2.byte_offset(0x20) + rax_1 * 0x48 - 8) != 0x25
        {
            /* tailcall */
            return just::lexer::Lexer::lex_double::hb969a7d085e88ace(arg1, arg2, 0x1a);
        }
    }
    
    let mut var_70: i128;
    let mut result: i64 = just::lexer::Lexer::advance::hab928493b22c646a(&var_70, arg2);
    let var_28: i8;
    
    if var_28 == 0x25
    {
        result = just::lexer::Lexer::advance::hab928493b22c646a(&var_70, arg2);
        
        if var_28 == 0x25
        {
            /* tailcall */
            return just::lexer::Lexer::internal_error::hc085b50b9a8f6202(arg1, arg2, 
                "Lexer::lex_interpolation found `…", 0x52);
        }
    }
    
    let var_30: i128;
    *arg1.byte_offset(0x40) = var_30;
    let zmm0: i128 = var_70;
    let var_40: i128;
    *arg1.byte_offset(0x30) = var_40;
    let var_50: i128;
    *arg1.byte_offset(0x20) = var_50;
    let var_60: i128;
    *arg1.byte_offset(0x10) = var_60;
    *arg1 = zmm0;
    result
}
