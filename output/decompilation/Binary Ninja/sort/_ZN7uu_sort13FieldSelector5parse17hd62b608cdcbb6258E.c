
  int64_t* uu_sort::FieldSelector::parse::hd62b608cdcbb6258(int64_t* arg1, int64_t arg2, uint64_t arg3, int64_t arg4)

{
    int64_t var_d8 = arg4;
    void var_68;
    _$LT$char$u20$as$u20$core..str..pattern..Pattern$GT$::into_searcher::h19abee4db16fb58d(&var_68, 
        0x2c, arg2, arg3);
    int64_t var_78 = 0;
    uint64_t var_70 = arg3;
    int16_t var_38 = 1;
    char* rax;
    int64_t rdx_1;
    rax = core::str::iter::SplitInternal$LT$P$GT$::next::hcedf3ecbc5351d30(&var_78);
    
    if (!rax)
    {
        core::option::unwrap_failed::h893f57cb7db71cb7();
        /* no return */
    }
    
    int64_t var_d0;
    uu_sort::FieldSelector::split_key_options::h52f8e7164abbfd25(&var_d0, rax, rdx_1);
    int64_t r13 = var_d0;
    char* rax_1;
    int64_t rdx_2;
    rax_1 = core::str::iter::SplitInternal$LT$P$GT$::next::hcedf3ecbc5351d30(&var_78);
    int64_t var_b8;
    int64_t var_98;
    
    if (rax_1)
    {
        uu_sort::FieldSelector::split_key_options::h52f8e7164abbfd25(&var_98, rax_1, rdx_2);
        
        if (var_b8)
            goto label_4d324b;
        
        goto label_4d31d0;
    }
    
    var_98 = 0;
    int64_t var_100;
    int64_t var_c8;
    char var_99;
    
    if (!var_b8)
    {
        label_4d31d0:
        int64_t var_88;
        uint64_t var_80;
        
        if (var_98 && !_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hf24dc1420a1402d1(var_88, var_80, 1, 0))
            goto label_4d324b;
        
        var_100 = r13;
        int64_t var_f8 = var_c8;
        int64_t* var_f0 = &var_d8;
        int64_t* var_e8 = &var_98;
        uu_sort::FieldSelector::parse::_$u7b$$u7b$closure$u7d$$u7d$::h169e2419223beb2b(&var_d0, 
            &var_100);
        
        if (var_99 == 2)
            goto label_4d328c;
        
        goto label_4d322b;
    }
    
    label_4d324b:
    var_100 = r13;
    int64_t var_f8_1 = var_c8;
    int64_t var_c0;
    int64_t var_f0_1 = var_c0;
    int64_t var_e8_1 = var_b8;
    uu_sort::FieldSelector::parse_with_options::h698e7c19784cfaad(&var_d0, &var_100, &var_98);
    
    if (var_99 != 2)
    {
        label_4d322b:
        int64_t var_a0;
        arg1[6] = var_a0;
        int128_t zmm0_1 = var_d0;
        int128_t var_b0;
        *(arg1 + 0x20) = var_b0;
        *(arg1 + 0x10) = var_c0;
        *arg1 = zmm0_1;
    }
    else
    {
        label_4d328c:
        *arg1 = uu_sort::FieldSelector::parse::_$u7b$$u7b$closure$u7d$$u7d$::h36e4ea784e6f9a09(
            arg2, arg3, &var_d0);
        arg1[1] = &data_58c448;
        *(arg1 + 0x37) = 2;
    }
    
    return arg1;
}
