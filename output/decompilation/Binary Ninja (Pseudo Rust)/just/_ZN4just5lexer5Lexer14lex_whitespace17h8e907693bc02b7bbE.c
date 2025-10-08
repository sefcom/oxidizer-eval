
  fn just::lexer::Lexer::lex_whitespace::h8e907693bc02b7bb(arg1: *mut i128, arg2: *mut c_void) -> i64

{
    let mut result: i64;
    
    if just::lexer::Lexer::next_is_whitespace::h1ab180af553eaaf1(*arg2.byte_offset(0xc0)) == 0
    {
        'label_672d4a:
        result = just::lexer::Lexer::token::h8b86862a20389d16(arg2);
        *arg1.byte_offset(0x48) = 0x25;
    }
    else
    {
        loop
        {
            let mut var_68: i128;
            result = just::lexer::Lexer::advance::hab928493b22c646a(&var_68, arg2);
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
                break;
            }
            
            if just::lexer::Lexer::next_is_whitespace::h1ab180af553eaaf1(*arg2.byte_offset(0xc0))
                == 0
            {
                goto 'label_672d4a;
            }
        }
    }
    
    result
}
