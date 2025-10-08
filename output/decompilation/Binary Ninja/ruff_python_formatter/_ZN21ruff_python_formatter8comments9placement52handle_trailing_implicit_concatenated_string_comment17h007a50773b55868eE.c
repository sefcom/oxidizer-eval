
  int512_t ruff_python_formatter::comments::placement::handle_trailing_implicit_concatenated_string_comment::h007a50773b55868e(int128_t* arg1, int128_t* arg2, int64_t arg3, int64_t arg4, char* arg5, int64_t arg6)

{
    int128_t result;
    
    if (*(arg2 + 0x48))
    {
        label_704667:
        arg1[4] = arg2[4];
        result = *arg2;
        int128_t zmm1 = arg2[1];
        int128_t zmm2 = arg2[2];
        arg1[3] = arg2[3];
        arg1[2] = zmm2;
        arg1[1] = zmm1;
        *arg1 = result;
    }
    else
    {
        int64_t rax_1 = arg2[1];
        
        if (rax_1 == 0x5e)
            goto label_704667;
        
        *(arg2 + 0x18);
        int128_t* var_98_1 = arg1;
        int128_t* var_a0_1 = arg2;
        int64_t rax_2;
        int64_t rdx;
        rax_2 = ruff_python_formatter::comments::placement::handle_trailing_implicit_concatenated_string_comment::_$u7b$$u7b$closure$u7d$$u7d$::h01c9fceb56ac1f89(rax_1);
        arg2 = var_a0_1;
        arg1 = var_98_1;
        
        if (rax_2 == 4)
            goto label_704667;
        
        int64_t var_90 = rax_2;
        void var_78;
        ruff_python_ast::expression::StringLike::parts::hda13f2934d2ef180(&var_78, &var_90);
        uint64_t rax_3;
        int64_t rdx_1;
        rax_3 = _$LT$ruff_python_ast..expression..StringLikePartIter$u20$as$u20$core..iter..traits..double_ended..DoubleEndedIterator$GT$::next_back::h133d1760b6021cb4(&var_78);
        uint64_t rax_4;
        int64_t rdx_2;
        rax_4 = _$LT$ruff_python_ast..expression..StringLikePartIter$u20$as$u20$core..iter..traits..double_ended..DoubleEndedIterator$GT$::next_back::h133d1760b6021cb4(&var_78);
        
        if ((rax_4 == 4 | rax_3 == 4) == 1)
        {
            label_7047ad:
            var_98_1[4] = var_a0_1[4];
            result = *var_a0_1;
            int128_t zmm1_1 = var_a0_1[1];
            int128_t zmm2_1 = var_a0_1[2];
            var_98_1[3] = var_a0_1[3];
            var_98_1[2] = zmm2_1;
            var_98_1[1] = zmm1_1;
            *var_98_1 = result;
        }
        else
        {
            int64_t rcx_2;
            rcx_2 = rax_4 >= 2;
            int32_t rdx_3 = *(rdx_2 + (rcx_2 << 3) + 0x14);
            int64_t rax_5;
            rax_5 = rax_3 >= 2;
            int32_t rcx_3 = *(rdx_1 + (rax_5 << 3) + 0x10);
            
            if (rdx_3 > rcx_3)
            {
                core::panicking::panic::h85d6dd562679980c("assertion failed: start.raw <= e…");
                /* no return */
            }
            
            if (!_$LT$str$u20$as$u20$ruff_source_file..line_ranges..LineRanges$GT$::contains_line_break::hf0570f0be9a9b684(arg5, arg6, rdx_3, rcx_3))
                goto label_7047ad;
            
            if (!ruff_python_formatter::expression::parentheses::is_expression_parenthesized::h85689f9798fd59fb(*(&data_488bc0 + (var_90 << 3)), rdx, arg3, arg4, arg5, arg6))
                goto label_7047ad;
            
            int64_t rax_9;
            rax_9 = rax_3 >= 2;
            int32_t rcx_5 = *(rdx_1 + (rax_9 << 3) + 0x14);
            int32_t rbp_2 = var_a0_1[4];
            
            if (rcx_5 > rbp_2)
            {
                core::panicking::panic::h85d6dd562679980c("assertion failed: start.raw <= e…");
                /* no return */
            }
            
            void var_60;
            ruff_python_trivia::tokenizer::SimpleTokenizer::new::h4feeda0403e55ee2(&var_60, arg5, 
                arg6, rcx_5, rbp_2);
            char rax_11;
            rax_11 = core::iter::traits::iterator::Iterator::try_fold::h9502309d37834e02(&var_60);
            
            if (_$LT$core..ops..control_flow..ControlFlow$LT$B$C$C$GT$$u20$as$u20$core..cmp..PartialEq$GT$::eq::h0e6737ab96195750(rax_11, 1))
                goto label_7047ad;
            
            int32_t rax_15 = *(var_a0_1 + 0x44);
            int64_t* rdx_6 = var_98_1;
            rdx_6[1] = *("[" + (rax_3 << 3));
            rdx_6[2] = rdx_1;
            rdx_6[3] = rbp_2;
            *(rdx_6 + 0x1c) = rax_15;
            rdx_6[4] = 0;
            *rdx_6 = 0x5f;
        }
    }
    
    return result;
}
