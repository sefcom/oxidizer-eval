
  fn ruff_python_formatter::comments::placement::handle_trailing_implicit_concatenated_string_comment::h007a50773b55868e(arg1: *mut i128, arg2: *mut i128, arg3: i64, arg4: i64, arg5: *mut i8, arg6: i64) -> i512

{
    let mut result: i128;
    
    if *arg2.byte_offset(0x48) != 0
    {
        'label_704667:
        arg1[4] = arg2[4];
        result = *arg2;
        let zmm1: i128 = arg2[1];
        let zmm2: i128 = arg2[2];
        arg1[3] = arg2[3];
        arg1[2] = zmm2;
        arg1[1] = zmm1;
        *arg1 = result;
    }
    else
    {
        let rax_1: i64 = arg2[1];
        
        if rax_1 == 0x5e
        {
            goto 'label_704667;
        }
        
        *arg2.byte_offset(0x18);
        let var_98_1: *mut i128 = arg1;
        let var_a0_1: *mut i128 = arg2;
        let mut rax_2: i64;
        let mut rdx: i64;
        rax_2 = ruff_python_formatter::comments::placement::handle_trailing_implicit_concatenated_string_comment::_$u7b$$u7b$closure$u7d$$u7d$::h01c9fceb56ac1f89(rax_1);
        arg2 = var_a0_1;
        arg1 = var_98_1;
        
        if rax_2 == 4
        {
            goto 'label_704667;
        }
        
        let mut var_90: i64 = rax_2;
        let mut var_78: ();
        ruff_python_ast::expression::StringLike::parts::hda13f2934d2ef180(&var_78, &var_90);
        let mut rax_3: u64;
        let mut rdx_1: i64;
        rax_3 = _$LT$ruff_python_ast..expression..StringLikePartIter$u20$as$u20$core..iter..traits..double_ended..DoubleEndedIterator$GT$::next_back::h133d1760b6021cb4(&var_78);
        let mut rax_4: u64;
        let mut rdx_2: i64;
        rax_4 = _$LT$ruff_python_ast..expression..StringLikePartIter$u20$as$u20$core..iter..traits..double_ended..DoubleEndedIterator$GT$::next_back::h133d1760b6021cb4(&var_78);
        
        if (rax_4 == 4 | rax_3 == 4) == 1
        {
            'label_7047ad:
            var_98_1[4] = var_a0_1[4];
            result = *var_a0_1;
            let zmm1_1: i128 = var_a0_1[1];
            let zmm2_1: i128 = var_a0_1[2];
            var_98_1[3] = var_a0_1[3];
            var_98_1[2] = zmm2_1;
            var_98_1[1] = zmm1_1;
            *var_98_1 = result;
        }
        else
        {
            let mut rcx_2: i64;
            rcx_2 = rax_4 >= 2;
            let rdx_3: i32 = *(rdx_2 + (rcx_2 << 3) + 0x14);
            let mut rax_5: i64;
            rax_5 = rax_3 >= 2;
            let rcx_3: i32 = *(rdx_1 + (rax_5 << 3) + 0x10);
            
            if rdx_3 > rcx_3
            {
                core::panicking::panic::h85d6dd562679980c("assertion failed: start.raw <= e…");
                /* no return */
            }
            
            if _$LT$str$u20$as$u20$ruff_source_file..line_ranges..LineRanges$GT$::contains_line_break::hf0570f0be9a9b684(arg5, arg6, rdx_3, rcx_3) == 0
            {
                goto 'label_7047ad;
            }
            
            if ruff_python_formatter::expression::parentheses::is_expression_parenthesized::h85689f9798fd59fb(*(&data_488bc0).byte_offset(var_90 << 3), rdx, arg3, arg4, arg5, arg6) == 0
            {
                goto 'label_7047ad;
            }
            
            let mut rax_9: i64;
            rax_9 = rax_3 >= 2;
            let rcx_5: i32 = *(rdx_1 + (rax_9 << 3) + 0x14);
            let rbp_2: i32 = var_a0_1[4];
            
            if rcx_5 > rbp_2
            {
                core::panicking::panic::h85d6dd562679980c("assertion failed: start.raw <= e…");
                /* no return */
            }
            
            let mut var_60: ();
            ruff_python_trivia::tokenizer::SimpleTokenizer::new::h4feeda0403e55ee2(&var_60, arg5, 
                arg6, rcx_5, rbp_2);
            let mut rax_11: i8;
            rax_11 = core::iter::traits::iterator::Iterator::try_fold::h9502309d37834e02(&var_60);
            
            if _$LT$core..ops..control_flow..ControlFlow$LT$B$C$C$GT$$u20$as$u20$core..cmp..PartialEq$GT$::eq::h0e6737ab96195750(rax_11, 1) != 0
            {
                goto 'label_7047ad;
            }
            
            let rax_15: i32 = *var_a0_1.byte_offset(0x44);
            let rdx_6: *mut i64 = var_98_1;
            rdx_6[1] = *"[".byte_offset(rax_3 << 3);
            rdx_6[2] = rdx_1;
            rdx_6[3] = rbp_2;
            *rdx_6.byte_offset(0x1c) = rax_15;
            rdx_6[4] = 0;
            *rdx_6 = 0x5f;
        }
    }
    
    result
}
