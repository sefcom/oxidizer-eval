
  uint64_t ruff_python_formatter::other::parameters::find_parameter_separators::h04892e8d923259e9(uint32_t* arg1, char* arg2, uint64_t arg3, uint64_t arg4, int64_t arg5, int32_t arg6, uint64_t arg7 @ rbp, uint64_t arg8 @ r12, uint64_t arg9 @ r15)

{
    uint64_t var_8 = arg7;
    uint64_t var_10 = arg9;
    uint64_t var_28 = arg8;
    uint64_t r14 = arg4;
    uint64_t result = *(arg4 + 0x10);
    int64_t r13;
    r13 = 1;
    int32_t var_9c;
    int128_t var_98;
    int128_t var_60;
    int32_t rdi_3;
    
    if (result)
    {
        result = result * 0x58 + *(r14 + 8);
        
        if (result == 0x58)
            goto label_714d39;
        
        arg7 = *(result - 0x54);
        int32_t r8 = *(r14 + 0x4c);
        
        if (arg7 > r8)
        {
            core::panicking::panic::h85d6dd562679980c("assertion failed: start.raw <= e…");
            /* no return */
        }
        
        arg9 = arg2;
        ruff_python_trivia::tokenizer::SimpleTokenizer::new::h4feeda0403e55ee2(&var_60, arg2, arg3, 
            arg7, r8);
        int128_t var_40;
        int128_t var_78_1 = var_40;
        int128_t var_50;
        int128_t var_88_1 = var_50;
        var_98 = var_60;
        core::iter::traits::iterator::Iterator::try_fold::hef860e9780b175fa(&var_60, &var_98);
        
        if (*var_60[8] == 0x5a)
        {
            core::option::expect_failed::h3f620cfb8545dc61("The function definition can't en…");
            /* no return */
        }
        
        arg4 =
            core::iter::traits::iterator::Iterator::try_fold::hef860e9780b175fa(&var_60, &var_98);
        
        if (*var_60[8] == 0x5a || *var_60[8] == 0x5a)
        {
            core::option::expect_failed::h3f620cfb8545dc61("The function definition can't en…");
            /* no return */
        }
        
        var_9c = var_60;
        result = *var_60[4];
        r13 = 0;
        arg8 = result;
        arg2 = arg9;
        rdi_3 = 0;
        
        if (*(r14 + 0x50) || !*(r14 + 0x40))
            goto label_714d6f;
        
        goto label_714d49;
    }
    
    label_714d39:
    rdi_3 = 0;
    int64_t r8_1;
    
    if (*(r14 + 0x50) || !*(r14 + 0x40))
    {
        label_714d6f:
        r8_1 = *(r14 + 0x28);
        int32_t* r11;
        
        if (!r8_1)
        {
            label_714ea4:
            r11 = *(r14 + 0x50);
            
            if (r11)
                arg2 = *r11;
        }
        else
        {
            label_714d7c:
            arg2 = *(r14 + 0x20);
            arg6 = *arg2;
            r11 = *(r14 + 0x50);
            
            if (r11)
                arg2 = *r11;
        }
        
        int64_t r10_1;
        r10_1 = r8_1 | r11;
        
        if (!r11)
            arg2 = result;
        
        if (r8_1)
            arg2 = arg6;
        
        int32_t* r9 = *(r14 + 0x58);
        int32_t r8_4;
        
        if (!r9)
        {
            r10_1 |= rdi_3;
            r8_4 = arg2;
            
            if (!r10_1)
                r8_4 = *(r14 + 0x4c);
        }
        else
        {
            r8_4 = arg2;
            
            if (!rdi_3)
                r8_4 = *r9;
            
            if (r10_1)
                r8_4 = arg2;
        }
        
        r13 ^= 1;
        *arg1 = r13;
        arg1[1] = var_9c;
        arg1[2] = arg8;
        arg1[3] = arg7;
        arg1[4] = r8_4;
        arg1[5] = rdi_3;
        arg1[6] = result;
        arg1[7] = arg4;
        arg1[8] = arg9;
        arg1[9] = arg3;
        return result;
    }
    
    label_714d49:
    int64_t rax_2 = *(r14 + 0x28);
    int32_t* rcx_1 = *(r14 + 0x38);
    void* rax_4;
    
    if (rax_2)
        rax_4 = rax_2 * 0x58 + *(r14 + 0x20);
    
    if (!rax_2 || rax_4 == 0x58)
    {
        arg9 = arg8;
        
        if (!r13)
            goto label_714df0;
        
        ruff_python_trivia::tokenizer::SimpleTokenizer::new::h4feeda0403e55ee2(&var_60, arg2, arg3, 
            *(r14 + 0x48), *(r14 + 0x4c));
        arg2 =
            core::iter::traits::iterator::Iterator::try_fold::hef860e9780b175fa(&var_98, &var_60);
        uint32_t rax_5 = *var_98[8];
        
        if (rax_5 == 5)
        {
            arg2 = core::iter::traits::iterator::Iterator::try_fold::hef860e9780b175fa(&var_98, 
                &var_60);
            
            if (*var_98[8] == 0x5a || *var_98[8] == 0x5a)
            {
                core::option::expect_failed::h3f620cfb8545dc61("The function definition can't en…");
                /* no return */
            }
            
            result = var_98;
            arg4 = *var_98[4];
        }
        else
        {
            if (rax_5 == 0x5a)
            {
                core::option::expect_failed::h3f620cfb8545dc61("The function definition can't en…");
                /* no return */
            }
            
            result = var_98;
            arg4 = result >> 0x20;
        }
        
        arg9 = *(r14 + 0x48);
    }
    else
    {
        arg9 = *(rax_4 - 0x54);
        label_714df0:
        int32_t r8_3 = *(r14 + 0x4c);
        
        if (arg9 > r8_3)
        {
            core::panicking::panic::h85d6dd562679980c("assertion failed: start.raw <= e…");
            /* no return */
        }
        
        ruff_python_trivia::tokenizer::SimpleTokenizer::new::h4feeda0403e55ee2(&var_60, arg2, arg3, 
            arg9, r8_3);
        core::iter::traits::iterator::Iterator::try_fold::hef860e9780b175fa(&var_98, &var_60);
        
        if (*var_98[8] == 0x5a)
        {
            core::option::expect_failed::h3f620cfb8545dc61("The function definition can't en…");
            /* no return */
        }
        
        arg2 =
            core::iter::traits::iterator::Iterator::try_fold::hef860e9780b175fa(&var_98, &var_60);
        
        if (*var_98[8] != 0x5a)
            arg8 = arg8;
        
        if (*var_98[8] == 0x5a || *var_98[8] == 0x5a)
        {
            core::option::expect_failed::h3f620cfb8545dc61("The function definition can't en…");
            /* no return */
        }
        
        result = var_98;
        arg4 = *var_98[4];
    }
    
    arg3 = *rcx_1;
    rdi_3 = 1;
    r8_1 = *(r14 + 0x28);
    
    if (r8_1)
        goto label_714d7c;
    
    goto label_714ea4;
}
