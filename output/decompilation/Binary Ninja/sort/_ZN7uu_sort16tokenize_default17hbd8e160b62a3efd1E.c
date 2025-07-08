
  int64_t uu_sort::tokenize_default::hbd8e160b62a3efd1(int64_t arg1, int64_t arg2, int64_t* arg3)

{
    alloc::vec::Vec$LT$T$C$A$GT$::push::h0ef512be9be90a46(arg3, 0, 0);
    int64_t var_40 = arg1;
    int64_t var_38 = arg1 + arg2;
    int64_t var_30 = 0;
    int32_t rcx;
    rcx = 1;
    
    while (true)
    {
        char rbp_1 = rcx;
        int64_t rax_1;
        int32_t rdx;
        rax_1 = _$LT$core..str..iter..CharIndices$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he645eee637d411ae(&var_40);
        
        if (rdx == 0x20)
        {
            label_520c1f:
            rcx = 1;
            
            if (rbp_1 & 1)
                continue;
        }
        else
        {
            if (rdx == 0x110000)
                break;
            
            if (rdx - 9 < 5)
                goto label_520c1f;
            
            rcx = 0;
            
            if (rdx < 0x80)
                continue;
            else
            {
                rcx = core::unicode::unicode_data::white_space::lookup::hc2937f3d40e148ab(rdx);
                
                if ((rbp_1 | ~rcx) & 1)
                    continue;
            }
        }
        
        int64_t rcx_1 = arg3[2];
        
        if (!rcx_1)
        {
            core::option::unwrap_failed::h0e11329e76906eaa();
            /* no return */
        }
        
        *((rcx_1 << 4) + arg3[1] - 8) = rax_1;
        alloc::vec::Vec$LT$T$C$A$GT$::push::h0ef512be9be90a46(arg3, rax_1, 0);
        rcx = 1;
    }
    
    int64_t rax_3 = arg3[2];
    
    if (!rax_3)
    {
        core::option::unwrap_failed::h0e11329e76906eaa();
        /* no return */
    }
    
    int64_t result = rax_3 << 4;
    *(result + arg3[1] - 8) = arg2;
    return result;
}
