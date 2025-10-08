
  fn just::lexer::Lexer::lex_digraph::h7eb8b1388d0dddbe(arg1: *mut u64, arg2: *mut c_void, arg3: u64, arg4: i32, arg5: i8) -> i64

{
    let mut var_88: i128;
    let mut result: i8 = just::lexer::Lexer::presume::h784be375f7ec3dad(&var_88, arg2, arg3);
    let var_40: i8;
    let mut var_78: i128;
    let var_68: i128;
    let var_58: i128;
    let var_48: i128;
    
    if var_40 != 0x25
    {
        'label_6726cd:
        *arg1.byte_offset(0x40) = var_48;
        let zmm0_1: i128 = var_88;
        *arg1.byte_offset(0x30) = var_58;
        *arg1.byte_offset(0x20) = var_68;
        *arg1.byte_offset(0x10) = var_78;
        *arg1 = zmm0_1;
    }
    else
    {
        just::lexer::Lexer::accepted::h2b4063f26d19f617(&var_88, arg2, arg4);
        result = var_88;
        
        if var_40 != 0x25
        {
            arg1[8] = var_48;
            let zmm0_2: i128 = var_88;
            *arg1.byte_offset(0x31) = var_58;
            *arg1.byte_offset(0x21) = var_68;
            *arg1.byte_offset(0x11) = var_78;
            *arg1.byte_offset(1) = zmm0_2;
            let var_3f: i32;
            *arg1.byte_offset(0x49) = var_3f;
            *arg1.byte_offset(0x4c) = var_3f;
            *arg1 = result;
            arg1[9] = var_40;
        }
        else
        {
            if (result & 1) == 0
            {
                just::lexer::Lexer::token::h8b86862a20389d16(arg2);
                
                if just::lexer::Lexer::at_eof::h5321ae9ca03a4d44(arg2) != 0
                {
                    let rax_1: u64 = alloc::alloc::Global::alloc_impl::h6fb1b6049873c120(4, 4);
                    
                    if rax_1 == 0
                    {
                        alloc::alloc::handle_alloc_error::h88aa4f4f9d19c4f9();
                        /* no return */
                    }
                    
                    *rax_1 = arg4;
                    *var_88[8] = 1;
                    var_78 = rax_1;
                    *var_78[8] = 1;
                    var_88 = -0x7fffffffffffffc9;
                    return just::lexer::Lexer::error::h92eb8a4dd6b17c78(arg1, arg2, &var_88);
                }
                
                result = just::lexer::Lexer::advance::hab928493b22c646a(&var_88, arg2);
                
                if var_40 != 0x25
                {
                    goto 'label_6726cd;
                }
                
                let rax_3: u64 = alloc::alloc::Global::alloc_impl::h6fb1b6049873c120(4, 4);
                
                if rax_3 == 0
                {
                    alloc::alloc::handle_alloc_error::h88aa4f4f9d19c4f9();
                    /* no return */
                }
                
                *rax_3 = arg4;
                *var_88[8] = 1;
                var_78 = rax_3;
                *var_78[8] = 1;
                var_88 = -0x7fffffffffffffcb;
                return just::lexer::Lexer::error::h92eb8a4dd6b17c78(arg1, arg2, &var_88);
            }
            
            result = just::lexer::Lexer::token::h8b86862a20389d16(arg2);
            arg1[9] = 0x25;
        }
    }
    result
}
