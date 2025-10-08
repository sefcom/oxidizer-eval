
  void* const uu_env::parse_signal_opt::h8d80c5165791b2ec(int128_t* arg1, void* arg2, int128_t* arg3)

{
    int128_t* rbx;
    int128_t* var_30 = rbx;
    
    if (!arg3)
        return nullptr;
    
    void* const result_1 = arg2;
    char var_e8_1 = 0;
    void var_90;
    core::iter::traits::iterator::Iterator::collect::ha7d46288ae5d93f1(&var_90, &result_1);
    int64_t var_80;
    int64_t rax_1;
    int64_t rdx;
    rax_1 =
        alloc::raw_vec::RawVecInner$LT$A$GT$::with_capacity_in::ha433c616156e1495(var_80, 8, 0x10);
    int64_t var_c8 = rax_1;
    int64_t var_c0_1 = rdx;
    int64_t var_b8_1 = 0;
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h2eb1c9b2d0261f35(&result_1, &var_90);
    int64_t i;
    int64_t rdx_1;
    i = _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hb9944e073377af52(&result_1);
    
    while (i)
    {
        if (rdx_1)
            alloc::vec::Vec$LT$T$C$A$GT$::push::h6ca0b45f5c80c114(&var_c8, i, rdx_1);
        
        i = _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hb9944e073377af52(&result_1);
    }
    
    core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$$RF$std..ffi..os_str..OsStr$GT$$GT$::hfa054853d4deaf86(&result_1);
    void var_68;
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h2eb1c9b2d0261f35(&var_68, &var_c8);
    char* rax_2;
    int64_t rdx_2;
    rax_2 = _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hb9944e073377af52(&var_68);
    void* const result;
    
    if (!rax_2)
        result = nullptr;
    else
    {
        char* rbp = rax_2;
        int64_t r14_1 = rdx_2;
        
        while (true)
        {
            core::str::converts::from_utf8::h8a6dc80f786921e0(&result_1, rbp, r14_1);
            int128_t* var_b0;
            
            if (result_1 == 1)
            {
                var_b0 = 1;
                char* var_a8_1 = rbp;
                int64_t var_a0_1 = r14_1;
                char var_98_1 = 1;
                int128_t** var_78 = &var_b0;
                int64_t (* var_70_1)(int32_t* arg1, int64_t* arg2) = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                result_1 = &data_510868;
                int64_t var_f0_2 = 2;
                int64_t var_d8_1 = 0;
                var_e8_1 = &var_78;
                int64_t var_e0_1 = 1;
                int128_t var_48;
                core::option::Option$LT$T$GT$::map_or_else::h96013652e67eecbe(&var_48, &result_1);
                var_e0_1 = 1;
                result_1 = var_48;
                int64_t var_38;
                var_e8_1 = var_38;
                result = alloc::boxed::Box$LT$T$GT$::new::h0cd361b0827381d8(&result_1);
                break;
            }
            
            uu_env::parse_signal_value::hb33c53ad79b226c6(&result_1, arg3, var_e8_1);
            result = result_1;
            
            if (result)
                break;
            
            var_b0 = arg3;
            *(arg1 + 0x68);
            arg1[7];
            
            if (!_$LT$usize$u20$as$u20$core..slice..cmp..SliceContains$GT$::slice_contains::h5183ddd93362b17d(&var_b0))
                alloc::vec::Vec$LT$T$C$A$GT$::push::heafd982e1e9d61d6(&arg1[6], arg3);
            
            char* rax_3;
            int64_t rdx_3;
            rax_3 = _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hb9944e073377af52(&var_68);
            rbp = rax_3;
            r14_1 = rdx_3;
            
            if (!rax_3)
            {
                result = nullptr;
                break;
            }
        }
    }
    
    core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$$RF$std..ffi..os_str..OsStr$GT$$GT$::hfa054853d4deaf86(&var_68);
    return result;
}
