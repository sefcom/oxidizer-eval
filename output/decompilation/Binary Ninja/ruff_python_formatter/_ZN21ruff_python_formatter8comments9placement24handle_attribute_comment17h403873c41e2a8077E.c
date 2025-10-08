
  uint64_t ruff_python_formatter::comments::placement::handle_attribute_comment::h403873c41e2a8077(int64_t* arg1, int128_t* arg2, int32_t* arg3, char* arg4, int64_t arg5)

{
    uint64_t result;
    
    if (arg2[1] != 0x5e)
    {
        int32_t var_68;
        ruff_python_trivia::tokenizer::SimpleTokenizer::starts_at::h166ec428bdd164b3(&var_68, 
            _$LT$ruff_python_ast..generated..Expr$u20$as$u20$ruff_text_size..traits..Ranged$GT$::range::h0f7a5d5c6b46f102(*(arg3 + 0x28)), 
            arg4, arg5);
        char var_38_1 = 0;
        char var_6c_1 = 0x5a;
        int32_t var_80;
        void var_74;
        _$LT$core..iter..adapters..take_while..TakeWhile$LT$I$C$P$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::fold::h8cf438245f98d522(&var_80, &var_68, &var_74);
        char var_78;
        int32_t rbp_2;
        
        if (var_78 != 0x5a)
            rbp_2 = arg2[4];
        
        if (var_78 == 0x5a || rbp_2 >= var_80)
        {
            char rbp_3 = *(arg2 + 0x48);
            int32_t r12_2;
            
            if (!rbp_3)
            {
                int32_t rdx_5 = _$LT$ruff_python_ast..generated..Expr$u20$as$u20$ruff_text_size..traits..Ranged$GT$::range::h0f7a5d5c6b46f102(*(arg3 + 0x28));
                int32_t rdx_6 = *arg3;
                
                if (rdx_5 > rdx_6)
                {
                    core::panicking::panic::h85d6dd562679980c("assertion failed: start.raw <= e…");
                    /* no return */
                }
                
                ruff_python_trivia::tokenizer::find_only_token_in_range::hf615155300975391(&var_68, 
                    rdx_5, rdx_6, 0x10, arg4, arg5);
                r12_2 = *(arg2 + 0x44);
                
                if (r12_2 >= var_68)
                    goto label_7035ad;
                
                int32_t rbp_4 = arg2[4];
                int64_t rdx_7;
                result = _$LT$ruff_python_ast..generated..AnyNodeRef$u20$as$u20$core..convert..From$LT$$RF$ruff_python_ast..generated..Expr$GT$$GT$::from::h1da68d87fdef299e(*(arg3 + 0x28));
                arg1[1] = result;
                arg1[2] = rdx_7;
                arg1[3] = rbp_4;
                *(arg1 + 0x1c) = r12_2;
                arg1[4] = 0;
                *arg1 = 0x5f;
            }
            else
            {
                r12_2 = *(arg2 + 0x44);
                label_7035ad:
                result = arg2[4];
                *(arg1 + 8) = *arg2;
                arg1[3] = result;
                *(arg1 + 0x1c) = r12_2;
                arg1[4] = 0;
                *(arg1 + 0x21) = rbp_3;
                *arg1 = 0x60;
            }
        }
        else
        {
            char r15_1 = *(arg2 + 0x48);
            int32_t r14_1 = *(arg2 + 0x44);
            int64_t rdx_4;
            result = _$LT$ruff_python_ast..generated..AnyNodeRef$u20$as$u20$core..convert..From$LT$$RF$ruff_python_ast..generated..Expr$GT$$GT$::from::h1da68d87fdef299e(*(arg3 + 0x28));
            arg1[1] = result;
            arg1[2] = rdx_4;
            arg1[3] = rbp_2;
            *(arg1 + 0x1c) = r14_1;
            arg1[4] = 0;
            *(arg1 + 0x21) = r15_1;
            *arg1 = 0x5f;
        }
    }
    else
    {
        char rbp_1 = *(arg2 + 0x48);
        int64_t rax;
        int64_t rdx;
        rax = _$LT$ruff_python_ast..generated..AnyNodeRef$u20$as$u20$core..convert..From$LT$$RF$ruff_python_ast..generated..Expr$GT$$GT$::from::h1da68d87fdef299e(*(arg3 + 0x28));
        arg1[1] = rax;
        arg1[2] = rdx;
        result = arg2[4];
        arg1[3] = result;
        arg1[4] = 0;
        *(arg1 + 0x21) = rbp_1;
        *arg1 = 0x5e;
    }
    
    return result;
}
