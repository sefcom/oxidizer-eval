
  fn ruff_python_formatter::comments::placement::handle_comprehension_comment::h2a47c5ef882afca3(arg1: *mut i64, arg2: *mut i128, arg3: *mut c_void, arg4: *mut i8, arg5: i64) -> u64

{
    let r13: i8 = *arg2.byte_offset(0x48);
    let result_1: i32 = arg2[4];
    let result_2: i32 = *arg2.byte_offset(0x44);
    let mut result: u64 = _$LT$ruff_python_ast..generated..Expr$u20$as$u20$ruff_text_size..traits..Ranged$GT$::range::h0f7a5d5c6b46f102(arg3.byte_offset(0x18));
    
    if result_2 >= result
    {
        let rdx: i32 = _$LT$ruff_python_ast..generated..Expr$u20$as$u20$ruff_text_size..traits..Ranged$GT$::range::h0f7a5d5c6b46f102(arg3.byte_offset(0x18));
        let rax: i32 = _$LT$ruff_python_ast..generated..Expr$u20$as$u20$ruff_text_size..traits..Ranged$GT$::range::h0f7a5d5c6b46f102(arg3.byte_offset(0x68));
        
        if rdx > rax
        {
            core::panicking::panic::h85d6dd562679980c("assertion failed: start.raw <= e…");
            /* no return */
        }
        
        let mut var_3c: i32;
        ruff_python_trivia::tokenizer::find_only_token_in_range::hf615155300975391(&var_3c, rdx, 
            rax, 0x47, arg4, arg5);
        
        if result_1 >= var_3c
        {
            result = result_2;
            
            if result_1 >= _$LT$ruff_python_ast..generated..Expr$u20$as$u20$ruff_text_size..traits..Ranged$GT$::range::h0f7a5d5c6b46f102(arg3.byte_offset(0x68))
            {
                let rdx_2: i32 = _$LT$ruff_python_ast..generated..Expr$u20$as$u20$ruff_text_size..traits..Ranged$GT$::range::h0f7a5d5c6b46f102(arg3.byte_offset(0x68));
                result = *arg3.byte_offset(0x10);
                
                if result == 0
                {
                    goto 'label_70459f;
                }
                
                let mut r15_2: i32 = rdx_2;
                let mut rbp_2: *mut i32 = *arg3.byte_offset(8);
                let rax_2: u64 = result << 4;
                let mut result_3: i32;
                let mut var_48: i32;
                
                if r13 == 0
                {
                    let mut r13_3: u64 = rax_2 * 5;
                    result_3 = result_1;
                    
                    loop
                    {
                        let rax_4: i32 = _$LT$ruff_python_ast..generated..Expr$u20$as$u20$ruff_text_size..traits..Ranged$GT$::range::h0f7a5d5c6b46f102(rbp_2);
                        
                        if r15_2 > rax_4
                        {
                            goto 'label_7045e7;
                        }
                        
                        ruff_python_trivia::tokenizer::find_only_token_in_range::hf615155300975391(
                            &var_48, r15_2, rax_4, 0x45, arg4, arg5);
                        
                        if var_48 < result_3 && result_3 < _$LT$ruff_python_ast..generated..Expr$u20$as$u20$ruff_text_size..traits..Ranged$GT$::range::h0f7a5d5c6b46f102(rbp_2)
                        {
                            result = 0;
                            break;
                        }
                        
                        let mut rdx_5: i32;
                        result = _$LT$ruff_python_ast..generated..Expr$u20$as$u20$ruff_text_size..traits..Ranged$GT$::range::h0f7a5d5c6b46f102(rbp_2);
                        r15_2 = rdx_5;
                        rbp_2 = &rbp_2[0x14];
                        let temp0_1: u64 = r13_3;
                        r13_3 -= 0x50;
                        
                        if temp0_1 == 0x50
                        {
                            goto 'label_70459f;
                        }
                    }
                }
                else
                {
                    let mut r13_2: u64 = rax_2 * 5;
                    
                    loop
                    {
                        let rax_3: i32 = _$LT$ruff_python_ast..generated..Expr$u20$as$u20$ruff_text_size..traits..Ranged$GT$::range::h0f7a5d5c6b46f102(rbp_2);
                        
                        if r15_2 > rax_3
                        {
                            'label_7045e7:
                            core::panicking::panic::h85d6dd562679980c(
                                "assertion failed: start.raw <= e…");
                            /* no return */
                        }
                        
                        ruff_python_trivia::tokenizer::find_only_token_in_range::hf615155300975391(
                            &var_48, r15_2, rax_3, 0x45, arg4, arg5);
                        result_3 = result_1;
                        
                        if r15_2 < result_3 && result_3 < var_48
                        {
                            result = 1;
                            break;
                        }
                        
                        let mut rdx_3: i32;
                        result = _$LT$ruff_python_ast..generated..Expr$u20$as$u20$ruff_text_size..traits..Ranged$GT$::range::h0f7a5d5c6b46f102(rbp_2);
                        r15_2 = rdx_3;
                        rbp_2 = &rbp_2[0x14];
                        let temp1_1: u64 = r13_2;
                        r13_2 -= 0x50;
                        
                        if temp1_1 == 0x50
                        {
                            goto 'label_70459f;
                        }
                    }
                }
                arg1[1] = 0x4d;
                arg1[2] = arg3;
                arg1[3] = result_3;
                *arg1.byte_offset(0x1c) = result_2;
                arg1[4] = 0;
                *arg1.byte_offset(0x21) = result;
                *arg1 = 0x60;
            }
            else
            {
                if r13 != 0
                {
                    goto 'label_70459f;
                }
                
                arg1[1] = 0x4d;
                arg1[2] = arg3;
                arg1[3] = result_1;
                *arg1.byte_offset(0x1c) = result;
                arg1[4] = 0;
                *arg1 = 0x60;
            }
        }
        else
        {
            result = result_2;
            
            if r13 == 0
            {
                goto 'label_70459f;
            }
            
            arg1[1] = 0x4d;
            arg1[2] = arg3;
            arg1[3] = result_1;
            *arg1.byte_offset(0x1c) = result;
            arg1[4] = 0x100;
            *arg1 = 0x60;
        }
    }
    else if r13 != 0
    {
        'label_70459f:
        *arg1.byte_offset(0x40) = arg2[4];
        let zmm0_1: i128 = *arg2;
        let zmm1_1: i128 = arg2[1];
        let zmm2_1: i128 = arg2[2];
        *arg1.byte_offset(0x30) = arg2[3];
        *arg1.byte_offset(0x20) = zmm2_1;
        *arg1.byte_offset(0x10) = zmm1_1;
        *arg1 = zmm0_1;
    }
    else
    {
        arg1[1] = 0x4d;
        arg1[2] = arg3;
        result = result_1;
        arg1[3] = result;
        *arg1.byte_offset(0x1c) = result_2;
        arg1[4] = 0;
        *arg1 = 0x60;
    }
    
    result
}
