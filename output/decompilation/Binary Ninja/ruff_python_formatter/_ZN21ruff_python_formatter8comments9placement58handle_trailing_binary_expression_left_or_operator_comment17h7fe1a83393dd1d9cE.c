
  int512_t ruff_python_formatter::comments::placement::handle_trailing_binary_expression_left_or_operator_comment::h7fe1a83393dd1d9c(int64_t* arg1, int128_t* arg2, int64_t* arg3, char* arg4, int64_t arg5)

{
    int128_t result;
    
    if (arg2[1] == 0x5e || arg2[2] == 0x5e)
    {
        label_7028e1:
        *(arg1 + 0x40) = arg2[4];
        result = *arg2;
        int128_t zmm1 = arg2[1];
        int128_t zmm2 = arg2[2];
        *(arg1 + 0x30) = arg2[3];
        *(arg1 + 0x20) = zmm2;
        *(arg1 + 0x10) = zmm1;
        *arg1 = result;
    }
    else
    {
        int32_t rdx = _$LT$ruff_python_ast..generated..Expr$u20$as$u20$ruff_text_size..traits..Ranged$GT$::range::h0f7a5d5c6b46f102(*arg3);
        int32_t rax_1 = _$LT$ruff_python_ast..generated..Expr$u20$as$u20$ruff_text_size..traits..Ranged$GT$::range::h0f7a5d5c6b46f102(arg3[1]);
        
        if (rdx > rax_1)
        {
            core::panicking::panic::h85d6dd562679980c("assertion failed: start.raw <= e…");
            /* no return */
        }
        
        void var_68;
        ruff_python_trivia::tokenizer::SimpleTokenizer::new::h4feeda0403e55ee2(&var_68, arg4, arg5, 
            rdx, rax_1);
        char var_38 = 0;
        int32_t var_78;
        core::iter::traits::iterator::Iterator::try_fold::h574e0d0b6077c929(&var_78, &var_68, 
            &var_38);
        char var_70;
        
        if (var_70 == 0x5a)
        {
            core::option::expect_failed::h3f620cfb8545dc61("Expected a token for the operato…");
            /* no return */
        }
        
        int32_t rbp_2 = var_78;
        int32_t r12_1 = *(arg2 + 0x44);
        
        if (r12_1 >= rbp_2)
        {
            if (*(arg2 + 0x48))
                goto label_7028e1;
            
            int32_t rdx_4 = _$LT$ruff_python_ast..generated..Expr$u20$as$u20$ruff_text_size..traits..Ranged$GT$::range::h0f7a5d5c6b46f102(*arg3);
            
            if (rdx_4 > rbp_2)
            {
                core::panicking::panic::h85d6dd562679980c("assertion failed: start.raw <= e…");
                /* no return */
            }
            
            if (!_$LT$str$u20$as$u20$ruff_source_file..line_ranges..LineRanges$GT$::contains_line_break::hf0570f0be9a9b684(arg4, arg5, rdx_4, rbp_2))
                goto label_7028e1;
            
            int32_t rax_4 = _$LT$ruff_python_ast..generated..Expr$u20$as$u20$ruff_text_size..traits..Ranged$GT$::range::h0f7a5d5c6b46f102(arg3[1]);
            
            if (rax_4 < rbp_2)
            {
                core::panicking::panic::h85d6dd562679980c("assertion failed: start.raw <= e…");
                /* no return */
            }
            
            char rax_5;
            rax_5 = _$LT$str$u20$as$u20$ruff_source_file..line_ranges..LineRanges$GT$::contains_line_break::hf0570f0be9a9b684(arg4, arg5, rbp_2, rax_4);
            
            if (!rax_5)
                goto label_7028e1;
            
            int32_t rax_6 = arg2[4];
            arg1[1] = 0x1d;
            arg1[2] = arg3;
            arg1[3] = rax_6;
            *(arg1 + 0x1c) = r12_1;
            arg1[4] = 0;
            *arg1 = 0x60;
        }
        else
        {
            char rbp_3 = *(arg2 + 0x48);
            int32_t r14_1 = arg2[4];
            int64_t rax_2;
            int64_t rdx_3;
            rax_2 = _$LT$ruff_python_ast..generated..AnyNodeRef$u20$as$u20$core..convert..From$LT$$RF$ruff_python_ast..generated..Expr$GT$$GT$::from::h1da68d87fdef299e(*arg3);
            arg1[1] = rax_2;
            arg1[2] = rdx_3;
            arg1[3] = r14_1;
            *(arg1 + 0x1c) = r12_1;
            arg1[4] = 0;
            *(arg1 + 0x21) = rbp_3;
            *arg1 = 0x5f;
        }
    }
    
    return result;
}
