
  fn ruff_python_formatter::comments::placement::handle_expr_if_comment::hc4c85a359012ec53(arg1: *mut i64, arg2: *mut i128, arg3: *mut i64, arg4: *mut i8, arg5: i64) -> i512

{
    let mut result: i128;
    
    if *arg2.byte_offset(0x48) == 1
    {
        'label_703706:
        *arg1.byte_offset(0x40) = arg2[4];
        result = *arg2;
        let zmm1: i128 = arg2[1];
        let zmm2: i128 = arg2[2];
        *arg1.byte_offset(0x30) = arg2[3];
        *arg1.byte_offset(0x20) = zmm2;
        *arg1.byte_offset(0x10) = zmm1;
        *arg1 = result;
    }
    else
    {
        let rdx: i32 = _$LT$ruff_python_ast..generated..Expr$u20$as$u20$ruff_text_size..traits..Ranged$GT$::range::h0f7a5d5c6b46f102(arg3[1]);
        let rax_1: i32 = _$LT$ruff_python_ast..generated..Expr$u20$as$u20$ruff_text_size..traits..Ranged$GT$::range::h0f7a5d5c6b46f102(*arg3);
        
        if rdx > rax_1
        {
            core::panicking::panic::h85d6dd562679980c("assertion failed: start.raw <= e…");
            /* no return */
        }
        
        let mut var_48: i32;
        ruff_python_trivia::tokenizer::find_only_token_in_range::hf615155300975391(&var_48, rdx, 
            rax_1, 0x45, arg4, arg5);
        let r12_2: i32 = arg2[4];
        let mut rdi_4: *mut i32;
        
        if var_48 >= r12_2
        {
            'label_70368e:
            let rdx_2: i32 = _$LT$ruff_python_ast..generated..Expr$u20$as$u20$ruff_text_size..traits..Ranged$GT$::range::h0f7a5d5c6b46f102(*arg3);
            let rax_3: i32 = _$LT$ruff_python_ast..generated..Expr$u20$as$u20$ruff_text_size..traits..Ranged$GT$::range::h0f7a5d5c6b46f102(arg3[2]);
            
            if rdx_2 > rax_3
            {
                core::panicking::panic::h85d6dd562679980c("assertion failed: start.raw <= e…");
                /* no return */
            }
            
            let mut var_3c: i32;
            ruff_python_trivia::tokenizer::find_only_token_in_range::hf615155300975391(&var_3c, 
                rdx_2, rax_3, 0x3f, arg4, arg5);
            
            if var_3c >= r12_2
            {
                goto 'label_703706;
            }
            
            if r12_2 >= _$LT$ruff_python_ast..generated..Expr$u20$as$u20$ruff_text_size..traits..Ranged$GT$::range::h0f7a5d5c6b46f102(arg3[2])
            {
                goto 'label_703706;
            }
            
            rdi_4 = arg3[2];
        }
        else
        {
            if r12_2 >= _$LT$ruff_python_ast..generated..Expr$u20$as$u20$ruff_text_size..traits..Ranged$GT$::range::h0f7a5d5c6b46f102(*arg3)
            {
                goto 'label_70368e;
            }
            
            rdi_4 = *arg3;
        }
        
        let rbp_3: i32 = *arg2.byte_offset(0x44);
        let mut rax_5: i64;
        let mut rdx_4: i64;
        rax_5 = _$LT$ruff_python_ast..generated..AnyNodeRef$u20$as$u20$core..convert..From$LT$$RF$ruff_python_ast..generated..Expr$GT$$GT$::from::h1da68d87fdef299e(rdi_4);
        arg1[1] = rax_5;
        arg1[2] = rdx_4;
        arg1[3] = r12_2;
        *arg1.byte_offset(0x1c) = rbp_3;
        arg1[4] = 0;
        *arg1 = 0x5e;
    }
    
    result
}
