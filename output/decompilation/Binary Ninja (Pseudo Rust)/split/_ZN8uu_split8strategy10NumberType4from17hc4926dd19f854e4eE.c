
  fn uu_split::strategy::NumberType::from::hc4926dd19f854e4e(arg1: *mut i64, arg2: i64, arg3: u64) -> i64

{
    let mut r13: i64 = arg2;
    let mut var_1d0: ();
    _$LT$char$u20$as$u20$core..str..pattern..Pattern$GT$::into_searcher::h19abee4db16fb58d(
        &var_1d0, arg2, arg3);
    let mut var_1e0: i64 = 0;
    let var_1d8: u64 = arg3;
    let var_1a0: i16 = 1;
    let var_1e8: i64 = 3;
    let mut rax: *mut c_void;
    let mut rdx: u64;
    rax = core::str::iter::SplitInternal$LT$P$GT$::next::h4684a7967878d36b(&var_1e0);
    let mut result: i64;
    let mut result_1: i64;
    let result_2: i64;
    let var_228: i128;
    let mut var_218_1: i128;
    let mut rax_2: i64;
    let mut result_12: i64;
    let mut r15_1: *mut c_void;
    
    if var_1e8 != 0
    {
        let var_1f8_1: i64 = r13;
        let mut var_1e8_1: i64;
        let mut rax_1: *mut c_void;
        let mut rdx_1: u64;
        
        if var_1e8 != 1
        {
            var_1e8_1 = var_1e8 - 1;
            rax_1 = core::str::iter::SplitInternal$LT$P$GT$::next::h4684a7967878d36b(&var_1e0);
        }
        else
        {
            var_1e8_1 = 0;
            rax_1 = core::str::iter::SplitInternal$LT$P$GT$::get_end::h646a6ea46284ce37(&var_1e0);
        }
        
        let mut var_1f0: u64;
        
        if var_1e8_1 == 0
        {
            r15_1 = nullptr;
            rax_2 = 0;
        }
        else
        {
            let mut var_1e8_2: i64;
            let mut rax_4: *mut c_void;
            let mut rdx_2: u64;
            
            if var_1e8_1 != 1
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
            
            if var_1e8_2 == 0
            {
                rax_2 = 0;
            }
            else if var_1e8_2 != 1
            {
                let var_1e8_4: i64 = var_1e8_2 - 1;
                rax_2 = core::str::iter::SplitInternal$LT$P$GT$::next::h4684a7967878d36b(&var_1e0);
            }
            else
            {
                let var_1e8_3: i64 = 0;
                rax_2 =
                    core::str::iter::SplitInternal$LT$P$GT$::get_end::h646a6ea46284ce37(&var_1e0);
            }
        }
        
        r13 = var_1f8_1;
        
        if rax == 0
        {
            result = _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hfadfb68a35ae07bf(&arg1[1], r13, arg3);
            *arg1 = 0;
        }
        else
        {
            if rax_1 == 0
            {
                goto 'label_46c665;
            }
            
            let mut var_218_2: i128;
            let mut result_13: i64;
            
            if r15_1 == 0
            {
                if rax_2 != 0
                {
                    result = _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hfadfb68a35ae07bf(&arg1[1], r13, arg3);
                    *arg1 = 0;
                }
                else
                {
                    result_1 = 0;
                    let mut rax_9: *mut i8;
                    let mut rdx_4: u64;
                    rax_9 =
                        core::char::methods::encode_utf8_raw::h5e8f6d90a161f6f4(0x6c, &result_1);
                    let rax_10: i8 =
                        core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::hae3dd1415174f1af(
                        rax, rdx, rax_9, rdx_4);
                    let mut rax_12: i8;
                    
                    if rax_10 == 0
                    {
                        result_1 = 0;
                        let mut rax_11: *mut i8;
                        let mut rdx_6: u64;
                        rax_11 = core::char::methods::encode_utf8_raw::h5e8f6d90a161f6f4(0x72, 
                            &result_1);
                        rax_12 = core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::hae3dd1415174f1af(rax, rdx, rax_11, rdx_6);
                    }
                    
                    if rax_10 == 0 && rax_12 == 0
                    {
                        let mut var_178: i32;
                        uucore::features::parser::parse_size::parse_size_u64::hcabf5090504a6d94(
                            &var_178, rax_1, rdx_1);
                        let result_14: i64;
                        
                        if var_178 != 4
                        {
                            uu_split::strategy::NumberType::from::_$u7b$$u7b$closure$u7d$$u7d$::h15fe79e5260eb355(&result_1, rax_1, rdx_1, &var_178);
                            result = result_1;
                            result_13 = result_2;
                            var_218_2 = var_228;
                            
                            if result != 2
                            {
                                goto 'label_46cafb;
                            }
                        }
                        else
                        {
                            result_13 = result_14;
                        }
                        let mut var_158: i32;
                        uucore::features::parser::parse_size::parse_size_u64::hcabf5090504a6d94(
                            &var_158, rax, rdx);
                        let result_4: i64;
                        
                        if var_158 != 4
                        {
                            uu_split::strategy::NumberType::from::_$u7b$$u7b$closure$u7d$$u7d$::h1344f155129ae797(&result_1, rax, rdx, &var_158);
                            result_12 = result_1;
                            result = result_2;
                            var_218_1 = var_228;
                            
                            if result_12 != 2
                            {
                                goto 'label_46cbd3;
                            }
                        }
                        else
                        {
                            result = result_4;
                        }
                        
                        if result - 1 < result_13
                        {
                            arg1[1] = 1;
                            goto 'label_46cbba;
                        }
                        
                        let mut var_78: i128;
                        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hfadfb68a35ae07bf(&var_78, rax, rdx);
                        *arg1 = 1;
                        *arg1.byte_offset(8) = var_78;
                        let result_9: i64;
                        result = result_9;
                        arg1[3] = result;
                    }
                    else if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hb641e38be83010ce(rax, rdx, "lsrc/uu/split/src/strategy.rsbyt…", 1) == 0
                    {
                        if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hb641e38be83010ce(rax, rdx, "rlsrc/uu/split/src/strategy.rsby…", 1) == 0
                        {
                            result = _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hfadfb68a35ae07bf(&arg1[1], var_1f8_1, arg3);
                            *arg1 = 0;
                        }
                        else
                        {
                            let mut var_d8: i32;
                            uucore::features::parser::parse_size::parse_size_u64::hcabf5090504a6d94(
                                &var_d8, rax_1, rdx_1);
                            
                            if var_d8 != 4
                            {
                                uu_split::strategy::NumberType::from::_$u7b$$u7b$closure$u7d$$u7d$::h15fe79e5260eb355(&result_1, rax_1, rdx_1, &var_d8);
                                result_12 = result_1;
                                result = result_2;
                                var_218_1 = var_228;
                                
                                if result_12 != 2
                                {
                                    goto 'label_46cbd3;
                                }
                                
                                arg1[1] = 4;
                                arg1[2] = result;
                                *arg1 = 2;
                            }
                            else
                            {
                                let result_7: i64;
                                result = result_7;
                                arg1[1] = 4;
                                arg1[2] = result;
                                *arg1 = 2;
                            }
                        }
                    }
                    else
                    {
                        let mut var_138: i32;
                        uucore::features::parser::parse_size::parse_size_u64::hcabf5090504a6d94(
                            &var_138, rax_1, rdx_1);
                        let result_5: i64;
                        
                        if var_138 != 4
                        {
                            uu_split::strategy::NumberType::from::_$u7b$$u7b$closure$u7d$$u7d$::h15fe79e5260eb355(&result_1, rax_1, rdx_1, &var_138);
                            result_12 = result_1;
                            result = result_2;
                            var_218_1 = var_228;
                            
                            if result_12 != 2
                            {
                                goto 'label_46cbd3;
                            }
                        }
                        else
                        {
                            result = result_5;
                        }
                        arg1[1] = 2;
                        arg1[2] = result;
                        *arg1 = 2;
                    }
                }
            }
            else if rax_2 != 0
            {
                result = _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hfadfb68a35ae07bf(&arg1[1], r13, arg3);
                *arg1 = 0;
            }
            else if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hb641e38be83010ce(rax, rdx, "lsrc/uu/split/src/strategy.rsbyt…", 1) == 0
            {
                if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hb641e38be83010ce(rax, rdx, "rlsrc/uu/split/src/strategy.rsby…", 1) == 0
                {
                    result = _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hfadfb68a35ae07bf(&arg1[1], var_1f8_1, arg3);
                    *arg1 = 0;
                }
                else
                {
                    let mut var_b8: i32;
                    uucore::features::parser::parse_size::parse_size_u64::hcabf5090504a6d94(
                        &var_b8, r15_1, var_1f0);
                    let result_16: i64;
                    
                    if var_b8 != 4
                    {
                        uu_split::strategy::NumberType::from::_$u7b$$u7b$closure$u7d$$u7d$::h15fe79e5260eb355(&result_1, r15_1, var_1f0, &var_b8);
                        result = result_1;
                        result_13 = result_2;
                        var_218_2 = var_228;
                        
                        if result != 2
                        {
                            goto 'label_46cafb;
                        }
                    }
                    else
                    {
                        result_13 = result_16;
                    }
                    let mut var_98: i32;
                    uucore::features::parser::parse_size::parse_size_u64::hcabf5090504a6d94(
                        &var_98, rax_1, rdx_1);
                    let result_8: i64;
                    
                    if var_98 != 4
                    {
                        uu_split::strategy::NumberType::from::_$u7b$$u7b$closure$u7d$$u7d$::h1344f155129ae797(&result_1, rax_1, rdx_1, &var_98);
                        result_12 = result_1;
                        result = result_2;
                        var_218_1 = var_228;
                        
                        if result_12 != 2
                        {
                            goto 'label_46cbd3;
                        }
                    }
                    else
                    {
                        result = result_8;
                    }
                    
                    if result - 1 < result_13
                    {
                        arg1[1] = 5;
                        goto 'label_46cbba;
                    }
                    
                    let mut var_48: i128;
                    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hfadfb68a35ae07bf(&var_48, rax_1, rdx_1);
                    *arg1 = 1;
                    *arg1.byte_offset(8) = var_48;
                    let result_11: i64;
                    result = result_11;
                    arg1[3] = result;
                }
            }
            else
            {
                let mut var_118: i32;
                uucore::features::parser::parse_size::parse_size_u64::hcabf5090504a6d94(&var_118, 
                    r15_1, var_1f0);
                
                if var_118 != 4
                {
                    uu_split::strategy::NumberType::from::_$u7b$$u7b$closure$u7d$$u7d$::h15fe79e5260eb355(&result_1, r15_1, var_1f0, &var_118);
                    result = result_1;
                    result_13 = result_2;
                    var_218_2 = var_228;
                    
                    if result == 2
                    {
                        goto 'label_46c851;
                    }
                    
                    'label_46cafb:
                    *arg1.byte_offset(0x10) = var_218_2;
                    *arg1 = result;
                    arg1[1] = result_13;
                }
                else
                {
                    let result_15: i64;
                    result_13 = result_15;
                    'label_46c851:
                    let mut var_f8: i32;
                    uucore::features::parser::parse_size::parse_size_u64::hcabf5090504a6d94(
                        &var_f8, rax_1, rdx_1);
                    let result_6: i64;
                    
                    if var_f8 != 4
                    {
                        uu_split::strategy::NumberType::from::_$u7b$$u7b$closure$u7d$$u7d$::h1344f155129ae797(&result_1, rax_1, rdx_1, &var_f8);
                        result_12 = result_1;
                        result = result_2;
                        var_218_1 = var_228;
                        
                        if result_12 != 2
                        {
                            goto 'label_46cbd3;
                        }
                    }
                    else
                    {
                        result = result_6;
                    }
                    
                    if result - 1 >= result_13
                    {
                        let mut var_60: i128;
                        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hfadfb68a35ae07bf(&var_60, rax_1, rdx_1);
                        *arg1 = 1;
                        *arg1.byte_offset(8) = var_60;
                        let result_10: i64;
                        result = result_10;
                        arg1[3] = result;
                    }
                    else
                    {
                        arg1[1] = 3;
                        'label_46cbba:
                        arg1[2] = result;
                        arg1[3] = result_13;
                        *arg1 = 2;
                    }
                }
            }
        }
    }
    else if rax == 0
    {
        result = _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hfadfb68a35ae07bf(&arg1[1], r13, arg3);
        *arg1 = 0;
    }
    else
    {
        r15_1 = nullptr;
        rax_2 = 0;
        'label_46c665:
        
        if (r15_1 | rax_2) != 0
        {
            result = _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hfadfb68a35ae07bf(&arg1[1], r13, arg3);
            *arg1 = 0;
        }
        else
        {
            let mut var_198: i32;
            uucore::features::parser::parse_size::parse_size_u64::hcabf5090504a6d94(&var_198, rax, 
                rdx);
            
            if var_198 != 4
            {
                uu_split::strategy::NumberType::from::_$u7b$$u7b$closure$u7d$$u7d$::h15fe79e5260eb355(&result_1, rax, rdx, &var_198);
                result_12 = result_1;
                result = result_2;
                var_218_1 = var_228;
                
                if result_12 == 2
                {
                    goto 'label_46c792;
                }
                
                'label_46cbd3:
                *arg1.byte_offset(0x10) = var_218_1;
                *arg1 = result_12;
                arg1[1] = result;
            }
            else
            {
                let result_3: i64;
                result = result_3;
                'label_46c792:
                
                if result == 0
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
    result
}
