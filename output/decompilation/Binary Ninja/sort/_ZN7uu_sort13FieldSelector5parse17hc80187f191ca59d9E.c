
  int64_t* uu_sort::FieldSelector::parse::hc80187f191ca59d9(int64_t* arg1, int64_t arg2, uint64_t arg3, int64_t arg4)

{
    int64_t var_f8 = arg4;
    void var_68;
    _$LT$char$u20$as$u20$core..str..pattern..Pattern$GT$::into_searcher::h77b0cfb9226a3587(&var_68, 
        0x2c, arg2, arg3);
    int64_t var_78 = 0;
    uint64_t var_70 = arg3;
    int16_t var_38 = 1;
    char* rax;
    void* rdx_1;
    rax = core::str::iter::SplitInternal$LT$P$GT$::next::h1ca17ad8b676764c(&var_78);
    
    if (!rax)
    {
        core::option::unwrap_failed::h0e11329e76906eaa();
        /* no return */
    }
    
    int64_t var_d0;
    uu_sort::FieldSelector::split_key_options::h3befb314b865dbc5(&var_d0, rax, rdx_1);
    int64_t r13 = var_d0;
    char* rax_1;
    void* rdx_2;
    rax_1 = core::str::iter::SplitInternal$LT$P$GT$::next::h1ca17ad8b676764c(&var_78);
    int64_t var_f0;
    int64_t var_b8;
    
    if (rax_1)
    {
        core::ops::function::FnOnce::call_once::h0bf0484f61ddc553(&var_f0, rax_1, rdx_2);
        
        if (var_b8)
            goto label_52132b;
        
        goto label_5212b0;
    }
    
    var_f0 = 0;
    int128_t var_128;
    int128_t var_118;
    int128_t var_e0;
    int64_t var_c8;
    char var_99;
    
    if (!var_b8)
    {
        label_5212b0:
        
        if (var_f0 && !_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hb9af56cf5f49fd41(var_e0, *var_e0[8], 1, 0))
            goto label_52132b;
        
        var_128 = r13;
        *var_128[8] = var_c8;
        var_118 = &var_f8;
        *var_118[8] = &var_f0;
        uu_sort::FieldSelector::parse::_$u7b$$u7b$closure$u7d$$u7d$::hbfab5933502ce6d9(&var_d0, 
            &var_128);
        
        if (var_99 == 2)
            goto label_521382;
        
        goto label_521308;
    }
    
    label_52132b:
    int64_t var_98 = r13;
    int64_t var_90_1 = var_c8;
    int64_t var_c0;
    int64_t var_88_1 = var_c0;
    int64_t var_80_1 = var_b8;
    var_118 = var_e0;
    var_128 = var_f0;
    uu_sort::FieldSelector::parse_with_options::hf97b85c869b37397(&var_d0, &var_98, &var_128);
    
    if (var_99 != 2)
    {
        label_521308:
        int64_t var_a0;
        arg1[6] = var_a0;
        int128_t zmm0_2 = var_d0;
        int128_t var_b0;
        *(arg1 + 0x20) = var_b0;
        *(arg1 + 0x10) = var_c0;
        *arg1 = zmm0_2;
    }
    else
    {
        label_521382:
        var_118 = var_c0;
        var_128 = var_d0;
        *arg1 = uu_sort::FieldSelector::parse::_$u7b$$u7b$closure$u7d$$u7d$::h449a10a279cbece7(
            arg2, arg3, &var_128);
        arg1[1] = &data_5ff678;
        *(arg1 + 0x37) = 2;
    }
    
    return arg1;
}
