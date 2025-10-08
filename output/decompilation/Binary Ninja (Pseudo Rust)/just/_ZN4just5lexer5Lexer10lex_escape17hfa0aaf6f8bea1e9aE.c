
  fn just::lexer::Lexer::lex_escape::hfa0aaf6f8bea1e9a(arg1: *mut i8, arg2: *mut c_void) -> u32

{
    let mut var_80: i128;
    let mut result: u32 = just::lexer::Lexer::presume::h784be375f7ec3dad(&var_80, arg2, 0x5c);
    let var_38: i8;
    let var_70: i128;
    let var_60: i128;
    let var_50: i128;
    let var_40: i128;
    
    if var_38 != 0x25
    {
        'label_672983:
        *arg1.byte_offset(0x40) = var_40;
        let zmm0_1: i128 = var_80;
        *arg1.byte_offset(0x30) = var_50;
        *arg1.byte_offset(0x20) = var_60;
        *arg1.byte_offset(0x10) = var_70;
        *arg1 = zmm0_1;
    }
    else
    {
        just::lexer::Lexer::accepted::h2b4063f26d19f617(&var_80, arg2, 0xa);
        result = var_80;
        let mut rcx_1: i8 = var_38;
        
        if rcx_1 != 0x25
        {
            'label_6729b1:
            *arg1.byte_offset(0x40) = var_40;
            let zmm0_2: i128 = var_80;
            *arg1.byte_offset(0x31) = var_50;
            *arg1.byte_offset(0x21) = var_60;
            *arg1.byte_offset(0x11) = var_70;
            *arg1.byte_offset(1) = zmm0_2;
            let var_37: i32;
            *arg1.byte_offset(0x49) = var_37;
            *arg1.byte_offset(0x4c) = var_37;
            *arg1 = result;
            arg1[0x48] = rcx_1;
        }
        else if (result & 1) == 0
        {
            just::lexer::Lexer::accepted::h2b4063f26d19f617(&var_80, arg2, 0xd);
            result = var_80;
            rcx_1 = var_38;
            
            if rcx_1 != 0x25
            {
                goto 'label_6729b1;
            }
            
            if (result & 1) == 0
            {
                result = *arg2.byte_offset(0xc0);
                
                if result != 0x110000
                {
                    *var_80[8] = result;
                    var_80 = -0x7fffffffffffffd6;
                    return just::lexer::Lexer::error::h92eb8a4dd6b17c78(arg1, arg2, &var_80);
                }
                
                arg1[0x48] = 0x25;
            }
            else
            {
                just::lexer::Lexer::accepted::h2b4063f26d19f617(&var_80, arg2, 0xa);
                result = var_80;
                rcx_1 = var_38;
                
                if rcx_1 != 0x25
                {
                    goto 'label_6729b1;
                }
                
                if (result & 1) == 0
                {
                    var_80 = -0x7fffffffffffffbb;
                    return just::lexer::Lexer::error::h92eb8a4dd6b17c78(arg1, arg2, &var_80);
                }
                
                if just::lexer::Lexer::next_is_whitespace::h1ab180af553eaaf1(
                    *arg2.byte_offset(0xc0)) != 0
                {
                    let mut i: bool;
                    
                    do
                    {
                        result = just::lexer::Lexer::advance::hab928493b22c646a(&var_80, arg2);
                        
                        if var_38 != 0x25
                        {
                            goto 'label_672983;
                        }
                        
                        i = just::lexer::Lexer::next_is_whitespace::h1ab180af553eaaf1(
                            *arg2.byte_offset(0xc0));
                    } while i != 0;
                }
                
                result = just::lexer::Lexer::token::h8b86862a20389d16(arg2);
                arg1[0x48] = 0x25;
            }
        }
        else
        {
            if just::lexer::Lexer::next_is_whitespace::h1ab180af553eaaf1(*arg2.byte_offset(0xc0))
                != 0
            {
                let mut i_1: bool;
                
                do
                {
                    result = just::lexer::Lexer::advance::hab928493b22c646a(&var_80, arg2);
                    
                    if var_38 != 0x25
                    {
                        goto 'label_672983;
                    }
                    
                    i_1 = just::lexer::Lexer::next_is_whitespace::h1ab180af553eaaf1(
                        *arg2.byte_offset(0xc0));
                } while i_1 != 0;
            }
            
            result = just::lexer::Lexer::token::h8b86862a20389d16(arg2);
            arg1[0x48] = 0x25;
        }
    }
    result
}
