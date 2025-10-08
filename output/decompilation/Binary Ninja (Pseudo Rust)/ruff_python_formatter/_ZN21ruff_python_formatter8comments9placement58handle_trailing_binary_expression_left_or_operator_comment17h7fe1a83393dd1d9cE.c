
  fn ruff_python_formatter::comments::placement::handle_trailing_binary_expression_left_or_operator_comment::h7fe1a83393dd1d9c(arg1: *mut i64, arg2: *mut i128, arg3: *mut i64, arg4: *mut i8, arg5: i64) -> i512

{
    let mut result: i128;
    
    if arg2[1] == 0x5e || arg2[2] == 0x5e
    {
        'label_7028e1:
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
        let rdx: i32 = _$LT$ruff_python_ast..generated..Expr$u20$as$u20$ruff_text_size..traits..Ranged$GT$::range::h0f7a5d5c6b46f102(*arg3);
        let rax_1: i32 = _$LT$ruff_python_ast..generated..Expr$u20$as$u20$ruff_text_size..traits..Ranged$GT$::range::h0f7a5d5c6b46f102(arg3[1]);
        
        if rdx > rax_1
        {
            core::panicking::panic::h85d6dd562679980c("assertion failed: start.raw <= e…");
            /* no return */
        }
        
        let mut var_68: ();
        ruff_python_trivia::tokenizer::SimpleTokenizer::new::h4feeda0403e55ee2(&var_68, arg4, arg5, 
            rdx, rax_1);
        let mut var_38: i8 = 0;
        let mut var_78: i32;
        core::iter::traits::iterator::Iterator::try_fold::h574e0d0b6077c929(&var_78, &var_68, 
            &var_38);
        let var_70: i8;
        
        if var_70 == 0x5a
        {
            core::option::expect_failed::h3f620cfb8545dc61("Expected a token for the operato…");
            /* no return */
        }
        
        let rbp_2: i32 = var_78;
        let r12_1: i32 = *arg2.byte_offset(0x44);
        
        if r12_1 >= rbp_2
        {
            if *arg2.byte_offset(0x48) != 0
            {
                goto 'label_7028e1;
            }
            
            let rdx_4: i32 = _$LT$ruff_python_ast..generated..Expr$u20$as$u20$ruff_text_size..traits..Ranged$GT$::range::h0f7a5d5c6b46f102(*arg3);
            
            if rdx_4 > rbp_2
            {
                core::panicking::panic::h85d6dd562679980c("assertion failed: start.raw <= e…");
                /* no return */
            }
            
            if _$LT$str$u20$as$u20$ruff_source_file..line_ranges..LineRanges$GT$::contains_line_break::hf0570f0be9a9b684(arg4, arg5, rdx_4, rbp_2) == 0
            {
                goto 'label_7028e1;
            }
            
            let rax_4: i32 = _$LT$ruff_python_ast..generated..Expr$u20$as$u20$ruff_text_size..traits..Ranged$GT$::range::h0f7a5d5c6b46f102(arg3[1]);
            
            if rax_4 < rbp_2
            {
                core::panicking::panic::h85d6dd562679980c("assertion failed: start.raw <= e…");
                /* no return */
            }
            
            let mut rax_5: i8;
            rax_5 = _$LT$str$u20$as$u20$ruff_source_file..line_ranges..LineRanges$GT$::contains_line_break::hf0570f0be9a9b684(arg4, arg5, rbp_2, rax_4);
            
            if rax_5 == 0
            {
                goto 'label_7028e1;
            }
            
            let rax_6: i32 = arg2[4];
            arg1[1] = 0x1d;
            arg1[2] = arg3;
            arg1[3] = rax_6;
            *arg1.byte_offset(0x1c) = r12_1;
            arg1[4] = 0;
            *arg1 = 0x60;
        }
        else
        {
            let rbp_3: i8 = *arg2.byte_offset(0x48);
            let r14_1: i32 = arg2[4];
            let mut rax_2: i64;
            let mut rdx_3: i64;
            rax_2 = _$LT$ruff_python_ast..generated..AnyNodeRef$u20$as$u20$core..convert..From$LT$$RF$ruff_python_ast..generated..Expr$GT$$GT$::from::h1da68d87fdef299e(*arg3);
            arg1[1] = rax_2;
            arg1[2] = rdx_3;
            arg1[3] = r14_1;
            *arg1.byte_offset(0x1c) = r12_1;
            arg1[4] = 0;
            *arg1.byte_offset(0x21) = rbp_3;
            *arg1 = 0x5f;
        }
    }
    
    result
}
