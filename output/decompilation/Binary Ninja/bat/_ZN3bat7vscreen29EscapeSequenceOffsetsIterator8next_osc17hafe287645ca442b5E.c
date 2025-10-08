
  int64_t bat::vscreen::EscapeSequenceOffsetsIterator::next_osc::hafe287645ca442b5(int64_t* arg1, void* arg2, int64_t arg3)

{
    int64_t rax = *(arg2 + 0x28);
    int32_t rbp = *(arg2 + 0x30);
    *(arg2 + 0x30) = 0x110001;
    
    if (rbp == 0x110001)
    {
        int32_t rdx;
        rax = _$LT$core..str..iter..CharIndices$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h3a48939ae6ec65bf(arg2 + 0x10);
        rbp = rdx;
    }
    
    if (rbp == 0x110000)
    {
        core::option::expect_failed::h3f620cfb8545dc61("to not be finishedthis should no…");
        /* no return */
    }
    
    int32_t var_70;
    int32_t* rdi_1 = &var_70;
    int64_t result;
    int64_t result_1;
    
    while (true)
    {
        bat::vscreen::EscapeSequenceOffsetsIterator::chars_take_while::hb0c8fb03173e56da(rdi_1, 
            arg2);
        
        if (var_70 != 1)
        {
            result = *(arg2 + 8);
            result_1 = result;
            break;
        }
        
        int64_t result_2;
        result_1 = result_2;
        int64_t rax_1 = *(arg2 + 0x28);
        int32_t rdx_1 = *(arg2 + 0x30);
        *(arg2 + 0x30) = 0x110001;
        
        if (rdx_1 == 0x110001)
            rax_1 = _$LT$core..str..iter..CharIndices$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h3a48939ae6ec65bf(arg2 + 0x10);
        
        if (rdx_1 == 0x110000)
        {
            result = result_1;
            break;
        }
        
        if (rdx_1 != 7)
        {
            if (rdx_1 != 0x1b)
            {
                int32_t var_8c = rdx_1;
                int32_t* var_40 = &var_8c;
                int64_t (* var_38)(int32_t* arg1, int64_t* arg2) =
                    _$LT$char$u20$as$u20$core..fmt..Debug$GT$::fmt::h3216ceddb89fec0b;
                var_70 = &data_acee50;
                int64_t var_68 = 1;
                int64_t var_50 = 0;
                int32_t** var_60 = &var_40;
                int64_t var_58 = 1;
                core::panicking::panic_fmt::h96f341d36638c225(&var_70);
                /* no return */
            }
            
            int64_t rcx_1 = *(arg2 + 0x28);
            int32_t rdx_2 = *(arg2 + 0x30);
            *(arg2 + 0x30) = 0x110001;
            
            if (rdx_2 == 0x110001)
            {
                int64_t rax_2;
                rax_2 = _$LT$core..str..iter..CharIndices$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h3a48939ae6ec65bf(arg2 + 0x10);
                rcx_1 = rax_2;
            }
            
            if (rdx_2 == 0x5c)
            {
                result = rcx_1 + 1;
                break;
            }
            
            rdi_1 = &var_70;
            
            if (rdx_2 != 0x110000)
                continue;
        }
        
        result = rax_1 + 1;
        break;
    }
    
    int64_t rcx_2 = 1;
    
    if (rbp >= 0x80)
    {
        rcx_2 = 2;
        
        if (rbp >= 0x800)
            rcx_2 = 4 - 0;
    }
    
    *arg1 = 3;
    arg1[1] = arg3;
    arg1[2] = rcx_2 + rax;
    arg1[3] = result_1;
    arg1[4] = result;
    return result;
}
