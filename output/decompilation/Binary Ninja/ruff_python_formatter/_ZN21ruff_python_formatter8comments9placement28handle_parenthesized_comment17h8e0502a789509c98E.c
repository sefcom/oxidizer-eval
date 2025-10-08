
  int512_t ruff_python_formatter::comments::placement::handle_parenthesized_comment::h8e0502a789509c98(int128_t* arg1, int32_t* arg2, char* arg3, int64_t arg4)

{
    int128_t result;
    
    if (*arg2 == 0x2c)
    {
        label_70118c:
        arg1[4] = *(arg2 + 0x40);
        result = *arg2;
        int128_t zmm1 = *(arg2 + 0x10);
        int128_t zmm2 = *(arg2 + 0x20);
        arg1[3] = *(arg2 + 0x30);
        arg1[2] = zmm2;
        arg1[1] = zmm1;
        *arg1 = result;
    }
    else
    {
        int64_t rax_1 = *(arg2 + 0x10);
        
        if (rax_1 == 0x5e)
            goto label_70118c;
        
        int64_t r8_1 = *(arg2 + 0x18);
        int64_t var_88 = rax_1;
        int64_t var_80_1 = r8_1;
        int64_t r13_1 = *(arg2 + 0x20);
        
        if (r13_1 == 0x5e)
            goto label_70118c;
        
        int64_t rbp_1 = *(arg2 + 0x28);
        int64_t var_78 = r13_1;
        int64_t var_70_1 = rbp_1;
        int32_t rdx = _$LT$ruff_python_ast..generated..AnyNodeRef$u20$as$u20$ruff_text_size..traits..Ranged$GT$::range::h63c57de0951e4c55(&var_88);
        int32_t rbx_1 = arg2[0x10];
        
        if (rdx > rbx_1)
        {
            core::panicking::panic::h85d6dd562679980c("assertion failed: start.raw <= e…");
            /* no return */
        }
        
        int32_t rax_3 = arg2[0x11];
        int32_t var_b0 = rdx;
        int32_t var_ac_1 = rbx_1;
        void var_68;
        ruff_python_trivia::tokenizer::SimpleTokenizer::new::h4feeda0403e55ee2(&var_68, arg3, arg4, 
            rdx, rbx_1);
        char var_38_1 = 0;
        char* var_a0 = arg3;
        int64_t var_98_1 = arg4;
        int32_t* var_90_1 = &var_b0;
        char rax_4;
        rax_4 = _$LT$core..iter..adapters..take_while..TakeWhile$LT$I$C$P$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::try_fold::he549855285b6f0d8(&var_68, &var_a0);
        
        if (!_$LT$core..ops..control_flow..ControlFlow$LT$B$C$C$GT$$u20$as$u20$core..cmp..PartialEq$GT$::eq::h0e6737ab96195750(rax_4, 1))
        {
            int32_t rax_8 = _$LT$ruff_python_ast..generated..AnyNodeRef$u20$as$u20$ruff_text_size..traits..Ranged$GT$::range::h63c57de0951e4c55(&var_78);
            
            if (rax_3 > rax_8)
            {
                core::panicking::panic::h85d6dd562679980c("assertion failed: start.raw <= e…");
                /* no return */
            }
            
            int32_t var_a8 = rax_3;
            int32_t var_a4_1 = rax_8;
            ruff_python_trivia::tokenizer::SimpleTokenizer::new::h4feeda0403e55ee2(&var_68, arg3, 
                arg4, rax_3, rax_8);
            char var_38_2 = 0;
            var_a0 = arg3;
            int64_t var_98_2 = arg4;
            int32_t* var_90_2 = &var_a8;
            
            if (!_$LT$core..ops..control_flow..ControlFlow$LT$B$C$C$GT$$u20$as$u20$core..cmp..PartialEq$GT$::eq::h0e6737ab96195750(
                _$LT$core..iter..adapters..take_while..TakeWhile$LT$I$C$P$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::try_fold::ha19a1d5c640575e3(&var_68, &var_a0), 
                1))
            {
                arg1[4] = *(arg2 + 0x40);
                result = *arg2;
                int128_t zmm1_1 = *(arg2 + 0x10);
                int128_t zmm2_1 = *(arg2 + 0x20);
                arg1[3] = *(arg2 + 0x30);
                arg1[2] = zmm2_1;
                arg1[1] = zmm1_1;
                *arg1 = result;
            }
            else
            {
                char rax_12 = arg2[0x12];
                result = var_88;
                int64_t* rcx_3 = arg1;
                *(rcx_3 + 8) = result;
                rcx_3[3] = rbx_1;
                *(rcx_3 + 0x1c) = rax_3;
                rcx_3[4] = 0;
                *(rcx_3 + 0x21) = rax_12;
                *rcx_3 = 0x5f;
            }
        }
        else
        {
            char rax_7 = arg2[0x12];
            *(arg1 + 8) = r13_1;
            arg1[1] = rbp_1;
            *(arg1 + 0x18) = rbx_1;
            *(arg1 + 0x1c) = rax_3;
            arg1[2] = 0;
            *(arg1 + 0x21) = rax_7;
            *arg1 = 0x5e;
        }
    }
    
    return result;
}
