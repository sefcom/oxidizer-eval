
  int64_t uu_dd::Output::write_blocks::hd1d1fad151688f0b(int64_t* arg1, char* arg2, void** arg3)

{
    int64_t rax_1 = *(*(arg2 + 0x10) + 0x78);
    void** const var_60;
    
    if (!rax_1)
    {
        var_60 = &data_53d1a0;
        int64_t var_58_1 = 1;
        int64_t var_50_1 = 8;
        int128_t var_48 = {0};
        core::panicking::panic_fmt::h96f341d36638c225(&var_60);
        /* no return */
    }
    
    var_60 = arg3;
    int64_t rcx;
    int64_t var_58 = rcx;
    int64_t var_50 = rax_1;
    int64_t result;
    int64_t rdx;
    result = _$LT$core..slice..iter..Chunks$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h2d70f533d6737a69(&var_60);
    int64_t rbp;
    int64_t r12;
    int64_t r13;
    
    if (!result)
    {
        rbp = 0;
        r13 = 0;
        r12 = 0;
        label_490dc2:
        arg1[2] = rbp;
        arg1[3] = 0;
        arg1[4] = r12;
        arg1[5] = r13;
        *arg1 = 0;
    }
    else
    {
        r12 = 0;
        r13 = 0;
        rbp = 0;
        
        while (true)
        {
            int64_t rdx_1;
            result = uu_dd::Output::write_block::ha48c1850e6d52037(arg2, result, rdx);
            
            if (result & 1)
            {
                arg1[1] = rdx_1;
                *arg1 = 1;
                break;
            }
            
            int64_t temp0_1 = *(*(arg2 + 0x10) + 0x78);
            int64_t rcx_1;
            rcx_1 = temp0_1 <= rdx_1;
            int64_t rsi_1;
            rsi_1 = temp0_1 > rdx_1;
            r13 += rsi_1;
            r12 += rcx_1;
            rbp += rdx_1;
            result = _$LT$core..slice..iter..Chunks$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h2d70f533d6737a69(&var_60);
            
            if (!result)
                goto label_490dc2;
        }
    }
    return result;
}
