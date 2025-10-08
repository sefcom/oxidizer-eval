
  fn just::lexer::Lexer::lex_identifier::hf1dac9d9d56230f3(arg1: *mut i128, arg2: *mut c_void) -> i64

{
    let mut var_68: i128;
    let mut result: i64 = just::lexer::Lexer::advance::hab928493b22c646a(&var_68, arg2);
    let var_20: i8;
    
    if var_20 != 0x25
    {
        'label_672c08:
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
        for let mut i: i32 = *arg2.byte_offset(0xc0); i != 0x110000; i = *arg2.byte_offset(0xc0)
        {
            if i - 0x61 >= 0x1a
            {
                let mut rcx_1: i32;
                
                if i >= 0x41
                {
                    rcx_1 = i < 0x5b;
                }
                
                if i < 0x41 || (i == 0x5f | rcx_1) == 0
                {
                    let mut rcx_2: i32;
                    rcx_2 = i - 0x30 >= 0xa;
                    i = i != 0x2d;
                    
                    if (i & rcx_2) != 0
                    {
                        break;
                    }
                }
            }
            
            result = just::lexer::Lexer::advance::hab928493b22c646a(&var_68, arg2);
            
            if var_20 != 0x25
            {
                goto 'label_672c08;
            }
        }
        
        result = just::lexer::Lexer::token::h8b86862a20389d16(arg2);
        *arg1.byte_offset(0x48) = 0x25;
    }
    
    result
}
