
  uint64_t ruff_python_formatter::expression::expr_slice::find_colons::h3aedadfd05f6e796(int32_t* arg1, char* arg2, int64_t arg3, int32_t arg4, int32_t arg5, int64_t* arg6, int64_t* arg7)

{
    int64_t* r13 = arg7;
    int64_t* var_a8 = arg6;
    int64_t* rdi = &var_a8;
    
    if (!arg6)
        rdi = arg6;
    
    int32_t rax = core::option::Option$LT$T$GT$::map_or::hb1541e862108629a(rdi, arg4);
    
    if (rax > arg5)
    {
        core::panicking::panic::h85d6dd562679980c("assertion failed: start.raw <= e…");
        /* no return */
    }
    
    void var_68;
    ruff_python_trivia::tokenizer::SimpleTokenizer::new::h4feeda0403e55ee2(&var_68, arg2, arg3, 
        rax, arg5);
    char var_38 = 0;
    char* var_a0;
    core::iter::traits::iterator::Iterator::try_fold::h574e0d0b6077c929(&var_a0, &var_68, &var_38);
    char result_3;
    uint64_t result = result_3;
    
    if (result == 0x5a)
    {
        arg1[2] = 0;
        arg1[4] = "Didn't find any token for slice …";
        arg1[5] = 0;
        *(arg1 + 0x15) = 0;
        *(arg1 + 0x17) = 0;
        *(arg1 + 0x18) = 0x2b;
        *arg1 = 1;
    }
    else if (result != 0xc)
    {
        arg1[2] = 0;
        *(arg1 + 0x10) = "Slice first colon token was not …";
        *(arg1 + 0x18) = 0x27;
        *arg1 = 1;
    }
    else
    {
        char* rcx_1 = var_a0;
        int32_t var_b0_1 = rcx_1;
        uint32_t rcx_2 = rcx_1 >> 0x20;
        int64_t* rdi_3 = &arg7;
        
        if (!r13)
            rdi_3 = r13;
        
        int32_t rax_2 = core::option::Option$LT$T$GT$::map_or::hb1541e862108629a(rdi_3, rcx_2);
        
        if (rax_2 > arg5)
        {
            core::panicking::panic::h85d6dd562679980c("assertion failed: start.raw <= e…");
            /* no return */
        }
        
        ruff_python_trivia::tokenizer::SimpleTokenizer::new::h4feeda0403e55ee2(&var_a0, arg2, arg3, 
            rax_2, arg5);
        char var_70 = 0;
        uint64_t result_2;
        result = core::iter::traits::iterator::Iterator::try_fold::h574e0d0b6077c929(&result_2, 
            &var_a0, &var_70);
        char var_b8;
        uint16_t rcx_4 = var_b8;
        uint16_t var_cc;
        char result_1;
        
        if (rcx_4 != 0x5a)
        {
            result = result_2;
            
            if (rcx_4 == 0xc)
            {
                char result_4;
                result_1 = result_4;
                uint16_t var_b7;
                var_cc = var_b7;
                rcx_4 = 0xc;
                goto label_70cc9b;
            }
            
            arg1[2] = 0;
            *(arg1 + 0x10) = "Expected a colon for the second …";
            *(arg1 + 0x18) = 0x2b;
            *arg1 = 1;
        }
        else
        {
            rcx_4 = 0x5a;
            label_70cc9b:
            int16_t var_97;
            char var_95;
            uint32_t r15_2 = var_97 | var_95 << 0x10;
            arg1[1] = var_b0_1;
            arg1[2] = rcx_2;
            arg1[3] = 0xc;
            *(arg1 + 0xd) = r15_2;
            *(arg1 + 0xf) = r15_2 >> 0x10;
            *(arg1 + 0x10) = result;
            arg1[6] = rcx_4;
            *(arg1 + 0x19) = var_cc;
            result = result_1;
            *(arg1 + 0x1b) = result;
            *arg1 = 0;
        }
    }
    
    return result;
}
