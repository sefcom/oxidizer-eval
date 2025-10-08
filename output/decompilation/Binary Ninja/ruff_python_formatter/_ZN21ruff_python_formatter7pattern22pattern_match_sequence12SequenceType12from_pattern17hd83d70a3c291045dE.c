
  int64_t ruff_python_formatter::pattern::pattern_match_sequence::SequenceType::from_pattern::hd83d70a3c291045d(void* arg1, char* arg2, int64_t arg3)

{
    int32_t rbp = *(arg1 + 0x18);
    void* r13 = arg1 + 0x1c;
    int64_t r12 = *(arg1 + 0x10);
    void* rax = r13;
    
    if (r12)
    {
        int64_t* rax_1 = *(arg1 + 8);
        int64_t rcx_2 = *rax_1 ^ 0x8000000000000000;
        int64_t rdx = 3;
        
        if (rcx_2 < 8)
            rdx = rcx_2;
        
        switch (rdx)
        {
            case 0:
            {
                rax = &rax_1[2];
                break;
            }
            case 1:
            case 5:
            case 6:
            {
                rax = &rax_1[1];
                break;
            }
            case 2:
            case 7:
            {
                rax = &rax_1[4];
                break;
            }
            case 3:
            {
                rax = &rax_1[0xb];
                break;
            }
            case 4:
            {
                rax = &rax_1[0xa];
                break;
            }
        }
    }
    
    int32_t rsi = *rax;
    
    if (rbp > rsi)
    {
        core::panicking::panic::h85d6dd562679980c("assertion failed: start.raw <= e…");
        /* no return */
    }
    
    uint64_t rax_2;
    int64_t rdx_3;
    rax_2 = ruff_text_size::range::_$LT$impl$u20$core..convert..From$LT$ruff_text_size..range..TextRange$GT$$u20$for$u20$core..ops..range..Range$LT$T$GT$$GT$::from::h5565193b43bb472c(rbp, rsi);
    void* rax_3;
    int64_t rdx_5;
    rax_3 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h6f62413506656e8f(rax_2, rdx_3, arg2, arg3);
    
    if (!rax_3)
    {
        core::str::slice_error_fail::h1a2885084e28d077(arg2, arg3, rax_2, rdx_3);
        /* no return */
    }
    
    if (r12)
    {
        int64_t* r13_1 = *(arg1 + 8);
        int64_t rax_5 = *r13_1 ^ 0x8000000000000000;
        int64_t rcx_4 = 3;
        
        if (rax_5 < 8)
            rcx_4 = rax_5;
        
        switch (rcx_4)
        {
            case 0:
            {
                r13 = r13_1 + 0x14;
                break;
            }
            case 1:
            case 5:
            case 6:
            {
                r13 = r13_1 + 0xc;
                break;
            }
            case 2:
            case 7:
            {
                r13 = r13_1 + 0x24;
                break;
            }
            case 3:
            {
                r13 = r13_1 + 0x5c;
                break;
            }
            case 4:
            {
                r13 = r13_1 + 0x54;
                break;
            }
        }
    }
    
    int32_t rsi_2 = *r13;
    
    if (rbp > rsi_2)
    {
        core::panicking::panic::h85d6dd562679980c("assertion failed: start.raw <= e…");
        /* no return */
    }
    
    uint64_t rax_6;
    int64_t rdx_6;
    rax_6 = ruff_text_size::range::_$LT$impl$u20$core..convert..From$LT$ruff_text_size..range..TextRange$GT$$u20$for$u20$core..ops..range..Range$LT$T$GT$$GT$::from::h5565193b43bb472c(rbp, rsi_2);
    void* rax_7;
    int64_t rdx_8;
    rax_7 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h6f62413506656e8f(rax_6, rdx_6, arg2, arg3);
    
    if (!rax_7)
    {
        core::str::slice_error_fail::h1a2885084e28d077(arg2, arg3, rax_6, rdx_6);
        /* no return */
    }
    
    int32_t var_bc = 0;
    char* rax_8;
    uint64_t rdx_9;
    rax_8 = core::char::methods::encode_utf8_raw::h5e8f6d90a161f6f4(0x5b, &var_bc);
    
    if (core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::hf48f8dbcb851e47f(rax_3, rdx_5, 
        rax_8, rdx_9))
    {
        var_bc = 0;
        char* rax_10;
        uint64_t rdx_11;
        rax_10 = core::char::methods::encode_utf8_raw::h5e8f6d90a161f6f4(0x2c, &var_bc);
        
        if (!core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::ends_with::h74aadde88527fc22(rax_7, rdx_8, 
                rax_10, rdx_11))
            return 0;
    }
    
    var_bc = 0;
    char* rax_12;
    uint64_t rdx_13;
    rax_12 = core::char::methods::encode_utf8_raw::h5e8f6d90a161f6f4(0x28, &var_bc);
    int64_t result;
    result = 2;
    
    if (core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::hf48f8dbcb851e47f(rax_3, rdx_5, 
        rax_12, rdx_13))
    {
        if (!*(arg1 + 0x10))
            result = 1;
        else
        {
            int64_t* r14_3 = *(arg1 + 8);
            int32_t rcx_12 = *(arg1 + 0x18);
            int64_t rax_14 = *r14_3 ^ 0x8000000000000000;
            int64_t r15_1 = 3;
            
            if (rax_14 >= 8)
                rax_14 = 3;
            
            int32_t r8_1 = *(r14_3 + *(&data_48d5d0 + (rax_14 << 3)));
            
            if (rcx_12 > r8_1)
            {
                core::panicking::panic::h85d6dd562679980c("assertion failed: start.raw <= e…");
                /* no return */
            }
            
            void var_60;
            ruff_python_trivia::tokenizer::SimpleTokenizer::new::h4feeda0403e55ee2(&var_60, arg2, 
                arg3, rcx_12, r8_1);
            int64_t rax_16 =
                core::iter::traits::iterator::Iterator::fold::h84b128d4ad72991a(&var_60);
            int64_t r12_2 = -0x8000000000000000 ^ *r14_3;
            
            if (r12_2 < 8)
                r15_1 = r12_2;
            
            int32_t rcx_13 = *(r14_3 + *(&data_48d590 + (r15_1 << 3)));
            void var_98;
            ruff_python_trivia::tokenizer::SimpleTokenizer::new::h4feeda0403e55ee2(&var_98, arg2, 
                arg3, rcx_13, rcx_13);
            char var_68_1 = 0;
            result = 2;
            result = 2 - 0;
        }
    }
    
    return result;
}
