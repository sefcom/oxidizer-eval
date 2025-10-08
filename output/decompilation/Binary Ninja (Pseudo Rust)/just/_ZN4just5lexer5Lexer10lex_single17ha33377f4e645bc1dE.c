
  fn just::lexer::Lexer::lex_single::ha33377f4e645bc1d(arg1: *mut i128, arg2: *mut c_void, arg3: i8) -> i64

{
    let mut var_68: i128;
    let mut result: i64 = just::lexer::Lexer::advance::hab928493b22c646a(&var_68, arg2);
    let var_20: i8;
    
    if var_20 != 0x25
    {
        let var_28: i128;
        arg1[4] = var_28;
        let zmm0_1: i128 = var_68;
        let var_38: i128;
        arg1[3] = var_38;
        let var_48: i128;
        arg1[2] = var_48;
        let var_58: i128;
        arg1[1] = var_58;
        *arg1 = zmm0_1;
    }
    else
    {
        result = just::lexer::Lexer::token::h8b86862a20389d16(arg2);
        *arg1.byte_offset(0x48) = 0x25;
    }
    
    result
}
