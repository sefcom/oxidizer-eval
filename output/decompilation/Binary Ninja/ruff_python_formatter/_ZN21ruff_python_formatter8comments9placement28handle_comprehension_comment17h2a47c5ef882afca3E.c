
  uint64_t ruff_python_formatter::comments::placement::handle_comprehension_comment::h2a47c5ef882afca3(int64_t* arg1, int128_t* arg2, void* arg3, char* arg4, int64_t arg5)

{
    char r13 = *(arg2 + 0x48);
    int32_t result_1 = arg2[4];
    int32_t result_2 = *(arg2 + 0x44);
    uint64_t result = _$LT$ruff_python_ast..generated..Expr$u20$as$u20$ruff_text_size..traits..Ranged$GT$::range::h0f7a5d5c6b46f102(arg3 + 0x18);
    
    if (result_2 >= result)
    {
        int32_t rdx = _$LT$ruff_python_ast..generated..Expr$u20$as$u20$ruff_text_size..traits..Ranged$GT$::range::h0f7a5d5c6b46f102(arg3 + 0x18);
        int32_t rax = _$LT$ruff_python_ast..generated..Expr$u20$as$u20$ruff_text_size..traits..Ranged$GT$::range::h0f7a5d5c6b46f102(arg3 + 0x68);
        
        if (rdx > rax)
        {
            core::panicking::panic::h85d6dd562679980c("assertion failed: start.raw <= e…");
            /* no return */
        }
        
        int32_t var_3c;
        ruff_python_trivia::tokenizer::find_only_token_in_range::hf615155300975391(&var_3c, rdx, 
            rax, 0x47, arg4, arg5);
        
        if (result_1 >= var_3c)
        {
            result = result_2;
            
            if (result_1 >= _$LT$ruff_python_ast..generated..Expr$u20$as$u20$ruff_text_size..traits..Ranged$GT$::range::h0f7a5d5c6b46f102(arg3 + 0x68))
            {
                int32_t rdx_2 = _$LT$ruff_python_ast..generated..Expr$u20$as$u20$ruff_text_size..traits..Ranged$GT$::range::h0f7a5d5c6b46f102(arg3 + 0x68);
                result = *(arg3 + 0x10);
                
                if (!result)
                    goto label_70459f;
                
                int32_t r15_2 = rdx_2;
                int32_t* rbp_2 = *(arg3 + 8);
                uint64_t rax_2 = result << 4;
                int32_t result_3;
                int32_t var_48;
                
                if (!r13)
                {
                    uint64_t r13_3 = rax_2 * 5;
                    result_3 = result_1;
                    
                    while (true)
                    {
                        int32_t rax_4 = _$LT$ruff_python_ast..generated..Expr$u20$as$u20$ruff_text_size..traits..Ranged$GT$::range::h0f7a5d5c6b46f102(rbp_2);
                        
                        if (r15_2 > rax_4)
                            goto label_7045e7;
                        
                        ruff_python_trivia::tokenizer::find_only_token_in_range::hf615155300975391(
                            &var_48, r15_2, rax_4, 0x45, arg4, arg5);
                        
                        if (var_48 < result_3 && result_3 < _$LT$ruff_python_ast..generated..Expr$u20$as$u20$ruff_text_size..traits..Ranged$GT$::range::h0f7a5d5c6b46f102(rbp_2))
                        {
                            result = 0;
                            break;
                        }
                        
                        int32_t rdx_5;
                        result = _$LT$ruff_python_ast..generated..Expr$u20$as$u20$ruff_text_size..traits..Ranged$GT$::range::h0f7a5d5c6b46f102(rbp_2);
                        r15_2 = rdx_5;
                        rbp_2 = &rbp_2[0x14];
                        uint64_t temp0_1 = r13_3;
                        r13_3 -= 0x50;
                        
                        if (temp0_1 == 0x50)
                            goto label_70459f;
                    }
                }
                else
                {
                    uint64_t r13_2 = rax_2 * 5;
                    
                    while (true)
                    {
                        int32_t rax_3 = _$LT$ruff_python_ast..generated..Expr$u20$as$u20$ruff_text_size..traits..Ranged$GT$::range::h0f7a5d5c6b46f102(rbp_2);
                        
                        if (r15_2 > rax_3)
                        {
                            label_7045e7:
                            core::panicking::panic::h85d6dd562679980c(
                                "assertion failed: start.raw <= e…");
                            /* no return */
                        }
                        
                        ruff_python_trivia::tokenizer::find_only_token_in_range::hf615155300975391(
                            &var_48, r15_2, rax_3, 0x45, arg4, arg5);
                        result_3 = result_1;
                        
                        if (r15_2 < result_3 && result_3 < var_48)
                        {
                            result = 1;
                            break;
                        }
                        
                        int32_t rdx_3;
                        result = _$LT$ruff_python_ast..generated..Expr$u20$as$u20$ruff_text_size..traits..Ranged$GT$::range::h0f7a5d5c6b46f102(rbp_2);
                        r15_2 = rdx_3;
                        rbp_2 = &rbp_2[0x14];
                        uint64_t temp1_1 = r13_2;
                        r13_2 -= 0x50;
                        
                        if (temp1_1 == 0x50)
                            goto label_70459f;
                    }
                }
                arg1[1] = 0x4d;
                arg1[2] = arg3;
                arg1[3] = result_3;
                *(arg1 + 0x1c) = result_2;
                arg1[4] = 0;
                *(arg1 + 0x21) = result;
                *arg1 = 0x60;
            }
            else
            {
                if (r13)
                    goto label_70459f;
                
                arg1[1] = 0x4d;
                arg1[2] = arg3;
                arg1[3] = result_1;
                *(arg1 + 0x1c) = result;
                arg1[4] = 0;
                *arg1 = 0x60;
            }
        }
        else
        {
            result = result_2;
            
            if (!r13)
                goto label_70459f;
            
            arg1[1] = 0x4d;
            arg1[2] = arg3;
            arg1[3] = result_1;
            *(arg1 + 0x1c) = result;
            arg1[4] = 0x100;
            *arg1 = 0x60;
        }
    }
    else if (r13)
    {
        label_70459f:
        *(arg1 + 0x40) = arg2[4];
        int128_t zmm0_1 = *arg2;
        int128_t zmm1_1 = arg2[1];
        int128_t zmm2_1 = arg2[2];
        *(arg1 + 0x30) = arg2[3];
        *(arg1 + 0x20) = zmm2_1;
        *(arg1 + 0x10) = zmm1_1;
        *arg1 = zmm0_1;
    }
    else
    {
        arg1[1] = 0x4d;
        arg1[2] = arg3;
        result = result_1;
        arg1[3] = result;
        *(arg1 + 0x1c) = result_2;
        arg1[4] = 0;
        *arg1 = 0x60;
    }
    
    return result;
}
