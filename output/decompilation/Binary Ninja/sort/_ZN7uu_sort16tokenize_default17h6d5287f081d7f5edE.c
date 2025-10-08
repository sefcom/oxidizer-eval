
  int64_t uu_sort::tokenize_default::h6d5287f081d7f5ed(int64_t arg1, int64_t arg2, int64_t* arg3)

{
    alloc::vec::Vec$LT$T$C$A$GT$::push::h5e09b1a2e814c1b4(arg3, 0, 0);
    int64_t var_48 = arg1;
    int64_t var_40 = arg1 + arg2;
    int64_t var_38 = 0;
    int32_t rcx_1;
    rcx_1 = 1;
    
    while (true)
    {
        char rbp_1 = rcx_1;
        int64_t rax_1;
        int32_t rdx;
        rax_1 = _$LT$core..str..iter..CharIndices$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h3a48939ae6ec65bf(&var_48);
        
        if (rdx == 0x20)
        {
            label_4d2b0f:
            rcx_1 = 1;
            
            if (rbp_1 & 1)
                continue;
        }
        else
        {
            if (rdx == 0x110000)
                break;
            
            if (rdx - 9 < 5)
                goto label_4d2b0f;
            
            rcx_1 = 0;
            
            if (rdx < 0x80)
                continue;
            else
            {
                rcx_1 = core::unicode::unicode_data::white_space::lookup::hae563f9e204d99ae(rdx);
                
                if ((rbp_1 | ~rcx_1) & 1)
                    continue;
            }
        }
        
        int64_t rcx_2 = arg3[2];
        
        if (!rcx_2)
        {
            core::option::unwrap_failed::h893f57cb7db71cb7();
            /* no return */
        }
        
        *(arg3[1] + (rcx_2 << 4) - 8) = rax_1;
        alloc::vec::Vec$LT$T$C$A$GT$::push::h5e09b1a2e814c1b4(arg3, rax_1, 0);
        rcx_1 = 1;
    }
    
    int64_t rax_3 = arg3[2];
    
    if (!rax_3)
    {
        core::option::unwrap_failed::h893f57cb7db71cb7();
        /* no return */
    }
    
    int64_t result = rax_3 << 4;
    *(arg3[1] + result - 8) = arg2;
    return result;
}
