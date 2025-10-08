
  fn just::lexer::Lexer::lex_choices::h87db0effb4b54026(arg1: *mut u64, arg2: *mut c_void, arg3: u64, arg4: *mut i32, arg5: i8) -> i64

{
    let mut r15: *mut i32 = arg4;
    let mut var_90: i128;
    let mut result: i8 = just::lexer::Lexer::presume::h784be375f7ec3dad(&var_90, arg2, arg3);
    let result_1: i8;
    let mut var_80: i128;
    let var_70: i128;
    let var_60: i128;
    let var_50: i128;
    
    if result_1 != 0x25
    {
        *arg1.byte_offset(0x40) = var_50;
        let zmm0_1: i128 = var_90;
        *arg1.byte_offset(0x30) = var_60;
        *arg1.byte_offset(0x20) = var_70;
        *arg1.byte_offset(0x10) = var_80;
        *arg1 = zmm0_1;
    }
    else
    {
        just::lexer::Lexer::accepted::h2b4063f26d19f617(&var_90, arg2, *r15);
        result = result_1;
        
        if result != 0x25
        {
            'label_672216:
            let rcx: i8 = var_90;
            arg1[8] = var_50;
            *arg1.byte_offset(0x31) = var_60;
            *arg1.byte_offset(0x21) = var_70;
            *arg1.byte_offset(0x11) = var_80;
            *arg1.byte_offset(1) = var_90;
            let var_47: i32;
            *arg1.byte_offset(0x49) = var_47;
            *arg1.byte_offset(0x4c) = var_47;
            *arg1 = rcx;
            arg1[9] = result;
        }
        else
        {
            if var_90 != 0
            {
                goto 'label_6721ac;
            }
            
            just::lexer::Lexer::accepted::h2b4063f26d19f617(&var_90, arg2, r15[2]);
            result = result_1;
            
            if result != 0x25
            {
                goto 'label_672216;
            }
            
            if var_90 == 0
            {
                if arg5 == 0x25
                {
                    just::lexer::Lexer::token::h8b86862a20389d16(arg2);
                    let mut var_a8: i128;
                    core::iter::traits::iterator::Iterator::collect::he7d9c722beb08c19(&var_a8, 
                        r15);
                    let mut rax_2: i64;
                    let var_98: i64;
                    
                    if just::lexer::Lexer::at_eof::h5321ae9ca03a4d44(arg2) == 0
                    {
                        just::lexer::Lexer::advance::hab928493b22c646a(&var_90, arg2);
                        
                        if result_1 != 0x25
                        {
                            *arg1.byte_offset(0x40) = var_50;
                            let zmm0_4: i128 = var_90;
                            *arg1.byte_offset(0x30) = var_60;
                            *arg1.byte_offset(0x20) = var_70;
                            *arg1.byte_offset(0x10) = var_80;
                            *arg1 = zmm0_4;
                            return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u32$GT$$GT$::h4b26006e42ee6c54(var_a8, *var_a8[8]);
                        }
                        
                        *var_80[8] = var_98;
                        var_90 = var_a8;
                        rax_2 = -0x7fffffffffffffcb;
                    }
                    else
                    {
                        *var_80[8] = var_98;
                        var_90 = var_a8;
                        rax_2 = -0x7fffffffffffffc9;
                    }
                    var_90 = rax_2;
                    return just::lexer::Lexer::error::h92eb8a4dd6b17c78(arg1, arg2, &var_90);
                }
                
                result = just::lexer::Lexer::token::h8b86862a20389d16(arg2);
                arg1[9] = 0x25;
            }
            else
            {
                r15 = &r15[2];
                'label_6721ac:
                r15[1];
                result = just::lexer::Lexer::token::h8b86862a20389d16(arg2);
                arg1[9] = 0x25;
            }
        }
    }
    result
}
