
  int64_t uu_split::strategy::NumberType::from::hc4926dd19f854e4e(int64_t* arg1, int64_t arg2, uint64_t arg3)

{
    int64_t r13 = arg2;
    void var_1d0;
    _$LT$char$u20$as$u20$core..str..pattern..Pattern$GT$::into_searcher::h19abee4db16fb58d(
        &var_1d0, arg2, arg3);
    int64_t var_1e0 = 0;
    uint64_t var_1d8 = arg3;
    int16_t var_1a0 = 1;
    int64_t var_1e8 = 3;
    void* rax;
    uint64_t rdx;
    rax = core::str::iter::SplitInternal$LT$P$GT$::next::h4684a7967878d36b(&var_1e0);
    int64_t result;
    int64_t result_1;
    int64_t result_2;
    int128_t var_228;
    int128_t var_218_1;
    int64_t rax_2;
    int64_t result_12;
    void* r15_1;
    
    if (var_1e8)
    {
        int64_t var_1f8_1 = r13;
        int64_t var_1e8_1;
        void* rax_1;
        uint64_t rdx_1;
        
        if (var_1e8 != 1)
        {
            var_1e8_1 = var_1e8 - 1;
            rax_1 = core::str::iter::SplitInternal$LT$P$GT$::next::h4684a7967878d36b(&var_1e0);
        }
        else
        {
            var_1e8_1 = 0;
            rax_1 = core::str::iter::SplitInternal$LT$P$GT$::get_end::h646a6ea46284ce37(&var_1e0);
        }
        
        uint64_t var_1f0;
        
        if (!var_1e8_1)
        {
            r15_1 = nullptr;
            rax_2 = 0;
        }
        else
        {
            int64_t var_1e8_2;
            void* rax_4;
            uint64_t rdx_2;
            
            if (var_1e8_1 != 1)
            {
                var_1e8_2 = var_1e8_1 - 1;
                rax_4 = core::str::iter::SplitInternal$LT$P$GT$::next::h4684a7967878d36b(&var_1e0);
            }
            else
            {
                var_1e8_2 = 0;
                rax_4 =
                    core::str::iter::SplitInternal$LT$P$GT$::get_end::h646a6ea46284ce37(&var_1e0);
            }
            
            r15_1 = rax_4;
            var_1f0 = rdx_2;
            
            if (!var_1e8_2)
                rax_2 = 0;
            else if (var_1e8_2 != 1)
            {
                int64_t var_1e8_4 = var_1e8_2 - 1;
                rax_2 = core::str::iter::SplitInternal$LT$P$GT$::next::h4684a7967878d36b(&var_1e0);
            }
            else
            {
                int64_t var_1e8_3 = 0;
                rax_2 =
                    core::str::iter::SplitInternal$LT$P$GT$::get_end::h646a6ea46284ce37(&var_1e0);
            }
        }
        
        r13 = var_1f8_1;
        
        if (!rax)
        {
            result = _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hfadfb68a35ae07bf(&arg1[1], r13, arg3);
            *arg1 = 0;
        }
        else
        {
            if (!rax_1)
                goto label_46c665;
            
            int128_t var_218_2;
            int64_t result_13;
            
            if (!r15_1)
            {
                if (rax_2)
                {
                    result = _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hfadfb68a35ae07bf(&arg1[1], r13, arg3);
                    *arg1 = 0;
                }
                else
                {
                    result_1 = 0;
                    char* rax_9;
                    uint64_t rdx_4;
                    rax_9 =
                        core::char::methods::encode_utf8_raw::h5e8f6d90a161f6f4(0x6c, &result_1);
                    char rax_10 =
                        core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::hae3dd1415174f1af(
                        rax, rdx, rax_9, rdx_4);
                    char rax_12;
                    
                    if (!rax_10)
                    {
                        result_1 = 0;
                        char* rax_11;
                        uint64_t rdx_6;
                        rax_11 = core::char::methods::encode_utf8_raw::h5e8f6d90a161f6f4(0x72, 
                            &result_1);
                        rax_12 = core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::hae3dd1415174f1af(rax, rdx, rax_11, rdx_6);
                    }
                    
                    if (!rax_10 && !rax_12)
                    {
                        int32_t var_178;
                        uucore::features::parser::parse_size::parse_size_u64::hcabf5090504a6d94(
                            &var_178, rax_1, rdx_1);
                        int64_t result_14;
                        
                        if (var_178 != 4)
                        {
                            uu_split::strategy::NumberType::from::_$u7b$$u7b$closure$u7d$$u7d$::h15fe79e5260eb355(&result_1, rax_1, rdx_1, &var_178);
                            result = result_1;
                            result_13 = result_2;
                            var_218_2 = var_228;
                            
                            if (result != 2)
                                goto label_46cafb;
                        }
                        else
                            result_13 = result_14;
                        int32_t var_158;
                        uucore::features::parser::parse_size::parse_size_u64::hcabf5090504a6d94(
                            &var_158, rax, rdx);
                        int64_t result_4;
                        
                        if (var_158 != 4)
                        {
                            uu_split::strategy::NumberType::from::_$u7b$$u7b$closure$u7d$$u7d$::h1344f155129ae797(&result_1, rax, rdx, &var_158);
                            result_12 = result_1;
                            result = result_2;
                            var_218_1 = var_228;
                            
                            if (result_12 != 2)
                                goto label_46cbd3;
                        }
                        else
                            result = result_4;
                        
                        if (result - 1 < result_13)
                        {
                            arg1[1] = 1;
                            goto label_46cbba;
                        }
                        
                        int128_t var_78;
                        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hfadfb68a35ae07bf(&var_78, rax, rdx);
                        *arg1 = 1;
                        *(arg1 + 8) = var_78;
                        int64_t result_9;
                        result = result_9;
                        arg1[3] = result;
                    }
                    else if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hb641e38be83010ce(rax, rdx, "lsrc/uu/split/src/strategy.rsbyt…", 1))
                    {
                        if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hb641e38be83010ce(rax, rdx, "rlsrc/uu/split/src/strategy.rsby…", 1))
                        {
                            result = _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hfadfb68a35ae07bf(&arg1[1], var_1f8_1, arg3);
                            *arg1 = 0;
                        }
                        else
                        {
                            int32_t var_d8;
                            uucore::features::parser::parse_size::parse_size_u64::hcabf5090504a6d94(
                                &var_d8, rax_1, rdx_1);
                            
                            if (var_d8 != 4)
                            {
                                uu_split::strategy::NumberType::from::_$u7b$$u7b$closure$u7d$$u7d$::h15fe79e5260eb355(&result_1, rax_1, rdx_1, &var_d8);
                                result_12 = result_1;
                                result = result_2;
                                var_218_1 = var_228;
                                
                                if (result_12 != 2)
                                    goto label_46cbd3;
                                
                                arg1[1] = 4;
                                arg1[2] = result;
                                *arg1 = 2;
                            }
                            else
                            {
                                int64_t result_7;
                                result = result_7;
                                arg1[1] = 4;
                                arg1[2] = result;
                                *arg1 = 2;
                            }
                        }
                    }
                    else
                    {
                        int32_t var_138;
                        uucore::features::parser::parse_size::parse_size_u64::hcabf5090504a6d94(
                            &var_138, rax_1, rdx_1);
                        int64_t result_5;
                        
                        if (var_138 != 4)
                        {
                            uu_split::strategy::NumberType::from::_$u7b$$u7b$closure$u7d$$u7d$::h15fe79e5260eb355(&result_1, rax_1, rdx_1, &var_138);
                            result_12 = result_1;
                            result = result_2;
                            var_218_1 = var_228;
                            
                            if (result_12 != 2)
                                goto label_46cbd3;
                        }
                        else
                            result = result_5;
                        arg1[1] = 2;
                        arg1[2] = result;
                        *arg1 = 2;
                    }
                }
            }
            else if (rax_2)
            {
                result = _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hfadfb68a35ae07bf(&arg1[1], r13, arg3);
                *arg1 = 0;
            }
            else if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hb641e38be83010ce(rax, rdx, "lsrc/uu/split/src/strategy.rsbyt…", 1))
            {
                if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hb641e38be83010ce(rax, rdx, "rlsrc/uu/split/src/strategy.rsby…", 1))
                {
                    result = _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hfadfb68a35ae07bf(&arg1[1], var_1f8_1, arg3);
                    *arg1 = 0;
                }
                else
                {
                    int32_t var_b8;
                    uucore::features::parser::parse_size::parse_size_u64::hcabf5090504a6d94(
                        &var_b8, r15_1, var_1f0);
                    int64_t result_16;
                    
                    if (var_b8 != 4)
                    {
                        uu_split::strategy::NumberType::from::_$u7b$$u7b$closure$u7d$$u7d$::h15fe79e5260eb355(&result_1, r15_1, var_1f0, &var_b8);
                        result = result_1;
                        result_13 = result_2;
                        var_218_2 = var_228;
                        
                        if (result != 2)
                            goto label_46cafb;
                    }
                    else
                        result_13 = result_16;
                    int32_t var_98;
                    uucore::features::parser::parse_size::parse_size_u64::hcabf5090504a6d94(
                        &var_98, rax_1, rdx_1);
                    int64_t result_8;
                    
                    if (var_98 != 4)
                    {
                        uu_split::strategy::NumberType::from::_$u7b$$u7b$closure$u7d$$u7d$::h1344f155129ae797(&result_1, rax_1, rdx_1, &var_98);
                        result_12 = result_1;
                        result = result_2;
                        var_218_1 = var_228;
                        
                        if (result_12 != 2)
                            goto label_46cbd3;
                    }
                    else
                        result = result_8;
                    
                    if (result - 1 < result_13)
                    {
                        arg1[1] = 5;
                        goto label_46cbba;
                    }
                    
                    int128_t var_48;
                    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hfadfb68a35ae07bf(&var_48, rax_1, rdx_1);
                    *arg1 = 1;
                    *(arg1 + 8) = var_48;
                    int64_t result_11;
                    result = result_11;
                    arg1[3] = result;
                }
            }
            else
            {
                int32_t var_118;
                uucore::features::parser::parse_size::parse_size_u64::hcabf5090504a6d94(&var_118, 
                    r15_1, var_1f0);
                
                if (var_118 != 4)
                {
                    uu_split::strategy::NumberType::from::_$u7b$$u7b$closure$u7d$$u7d$::h15fe79e5260eb355(&result_1, r15_1, var_1f0, &var_118);
                    result = result_1;
                    result_13 = result_2;
                    var_218_2 = var_228;
                    
                    if (result == 2)
                        goto label_46c851;
                    
                    label_46cafb:
                    *(arg1 + 0x10) = var_218_2;
                    *arg1 = result;
                    arg1[1] = result_13;
                }
                else
                {
                    int64_t result_15;
                    result_13 = result_15;
                    label_46c851:
                    int32_t var_f8;
                    uucore::features::parser::parse_size::parse_size_u64::hcabf5090504a6d94(
                        &var_f8, rax_1, rdx_1);
                    int64_t result_6;
                    
                    if (var_f8 != 4)
                    {
                        uu_split::strategy::NumberType::from::_$u7b$$u7b$closure$u7d$$u7d$::h1344f155129ae797(&result_1, rax_1, rdx_1, &var_f8);
                        result_12 = result_1;
                        result = result_2;
                        var_218_1 = var_228;
                        
                        if (result_12 != 2)
                            goto label_46cbd3;
                    }
                    else
                        result = result_6;
                    
                    if (result - 1 >= result_13)
                    {
                        int128_t var_60;
                        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hfadfb68a35ae07bf(&var_60, rax_1, rdx_1);
                        *arg1 = 1;
                        *(arg1 + 8) = var_60;
                        int64_t result_10;
                        result = result_10;
                        arg1[3] = result;
                    }
                    else
                    {
                        arg1[1] = 3;
                        label_46cbba:
                        arg1[2] = result;
                        arg1[3] = result_13;
                        *arg1 = 2;
                    }
                }
            }
        }
    }
    else if (!rax)
    {
        result = _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hfadfb68a35ae07bf(&arg1[1], r13, arg3);
        *arg1 = 0;
    }
    else
    {
        r15_1 = nullptr;
        rax_2 = 0;
        label_46c665:
        
        if (r15_1 | rax_2)
        {
            result = _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hfadfb68a35ae07bf(&arg1[1], r13, arg3);
            *arg1 = 0;
        }
        else
        {
            int32_t var_198;
            uucore::features::parser::parse_size::parse_size_u64::hcabf5090504a6d94(&var_198, rax, 
                rdx);
            
            if (var_198 != 4)
            {
                uu_split::strategy::NumberType::from::_$u7b$$u7b$closure$u7d$$u7d$::h15fe79e5260eb355(&result_1, rax, rdx, &var_198);
                result_12 = result_1;
                result = result_2;
                var_218_1 = var_228;
                
                if (result_12 == 2)
                    goto label_46c792;
                
                label_46cbd3:
                *(arg1 + 0x10) = var_218_1;
                *arg1 = result_12;
                arg1[1] = result;
            }
            else
            {
                int64_t result_3;
                result = result_3;
                label_46c792:
                
                if (!result)
                {
                    result = _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hfadfb68a35ae07bf(&arg1[1], r13, arg3);
                    *arg1 = 0;
                }
                else
                {
                    arg1[1] = 0;
                    arg1[2] = result;
                    *arg1 = 2;
                }
            }
        }
    }
    return result;
}
