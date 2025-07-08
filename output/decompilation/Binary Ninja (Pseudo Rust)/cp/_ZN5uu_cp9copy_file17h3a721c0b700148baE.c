
  fn uu_cp::copy_file::h3a721c0b700148ba(arg1: *mut i64, arg2: *mut i64, arg3: *mut i8, arg4: u64, arg5: *mut i64, arg6: u64, arg7: *mut i64, arg8: *mut i64, arg9: *mut i64, arg10: *mut i64, arg11: i8) -> *mut i64

{
    let mut r15: u64 = arg6;
    let rax: i8 = std::path::Path::is_symlink::h6ab8b58756c51c6b(arg3, arg4);
    let rax_1: i8 = std::path::Path::is_symlink::h6ab8b58756c51c6b(arg5, r15);
    let mut rbx: *mut i64 = arg7;
    let mut result: *mut i64;
    let mut var_3b8: *mut i8;
    let mut var_390: u64;
    let mut var_388: *mut i8;
    let mut var_380: *mut *mut i64;
    let mut var_2b8: i8;
    let mut var_2b0: *mut i8;
    let mut var_218: *mut i64;
    let mut rax_8: *mut *mut c_void;
    
    if rax_1 == 0
    {
        'label_5075a0:
        result = arg1;
        let mut rax_14: i64;
        
        if uucore::features::fs::are_hardlinks_to_same_file::h58f3d52af664165a(arg3, arg4, arg5)
            == 0
        {
            'label_50760f:
            let mut rax_15: bool = uu_cp::file_or_link_exists::h0326283b1ad33442(arg5);
            let rbx_1: bool = *rbx.byte_offset(0x3e);
            let mut var_3d0: i8;
            let var_378: i64;
            let var_368: i128;
            let var_358: i64;
            
            if rax_15 == 0
            {
                rax_15 = rbx_1;
                'label_5076aa:
                
                if (rax & rax_15 != 0) == 0
                    || (*arg7.byte_offset(0x3c) == 0 && *arg7.byte_offset(0x3d) == 1)
                {
                    if arg7[9] != 0
                    {
                        uu_cp::print_verbose_output::h1215961a97776bc3(*arg7.byte_offset(0x44), 
                            arg2, arg3, arg4, arg5);
                    }
                    
                    let mut var_3b0: *mut i8;
                    let mut var_3a8: *mut *mut *mut i8;
                    let var_348: i128;
                    let mut var_2d8: i128;
                    let mut var_2c8: i64;
                    let mut var_2a8: *mut *mut *mut i8;
                    let mut var_208: i64;
                    let mut var_1f8: i128;
                    let mut var_1e8: i96;
                    let mut rbx_3: i8;
                    let mut r15_4: i8;
                    
                    if arg7[7] == 0
                    {
                        rbx_3 = arg7[8];
                        r15_4 = *arg7.byte_offset(0x41);
                        'label_50784d:
                        let mut var_3c8: i8;
                        var_3c8 = arg5;
                        uu_cp::context_for::h98549e35fded8509(&var_2d8);
                        let var_2d0: i64;
                        var_3d0 = var_2d0;
                        let mut rcx_10: i8 = rbx_3;
                        
                        if arg11 == 0
                        {
                            rcx_10 = r15_4;
                        }
                        
                        if r15_4 != 0
                        {
                            rcx_10 = r15_4;
                        }
                        
                        if rcx_10 == 0
                        {
                            std::fs::symlink_metadata::h8589e79b0a107dee(&var_390, arg3);
                        }
                        else
                        {
                            std::fs::metadata::h003d8cdbffde7c56(&var_390, arg3);
                        }
                        
                        let r15_5: *mut i64 = var_390;
                        let rbx_4: *mut i8 = var_388;
                        let mut rax_29: *mut i8;
                        
                        if r15_5 != 2
                        {
                            memcpy(&var_2b8, &var_380, 0xa0);
                            memcpy(&var_1f8, &var_2a8, 0x90);
                            var_208 = var_380;
                            var_218 = r15_5;
                            let var_210_5: *mut i8 = rbx_4;
                            uu_cp::calculate_dest_permissions::he28553ee8e44ce96(&var_390, var_3c8, 
                                r15, *var_1e8[8], *arg7.byte_offset(0x32), *arg7.byte_offset(0x33), 
                                var_3d0, var_2c8);
                            let rax_30: u64 = var_390;
                            let r15_6: i32 = var_388;
                            
                            if rax_30 != 0xd
                            {
                                *result.byte_offset(0x3c) = *var_358[4];
                                let zmm0_5: i128 = *var_388[4];
                                *result.byte_offset(0x2c) = var_368;
                                *result.byte_offset(0x1c) = *var_378[4];
                                *result.byte_offset(0xc) = zmm0_5;
                                *result = rax_30;
                                result[1] = r15_6;
                            }
                            else
                            {
                                uu_cp::handle_copy_mode::h448f778e1ab38150(&var_390, arg3, arg4, 
                                    var_3c8, r15, arg7, var_3d0, var_2c8, &var_218, arg8, arg11);
                                let mut rax_32: u64 = var_390;
                                
                                if rax_32 != 0xd
                                {
                                    'label_507e91:
                                    result[7] = var_358;
                                    let zmm0_6: i128 = var_388;
                                    *result.byte_offset(0x28) = var_368;
                                    *result.byte_offset(0x18) = var_378;
                                    *result.byte_offset(8) = zmm0_6;
                                    *result = rax_32;
                                }
                                else
                                {
                                    if rax_1 == 0
                                    {
                                        let rax_33: u64 =
                                            std::fs::set_permissions::hb44ce266ed57ae7b(var_3c8, 
                                            r15, r15_6);
                                        var_390 = rax_33;
                                        
                                        if rax_33 != 0
                                        {
                                            core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::hb146834ab15375cc(&var_390);
                                        }
                                    }
                                    
                                    if rcx_10 == 0
                                    {
                                        uu_cp::copy_attributes::h0ca124c6c7245f78(&var_390, arg3, 
                                            arg4, var_3c8, r15, &arg7[6]);
                                        rax_32 = var_390;
                                        
                                        if rax_32 == 0xd
                                        {
                                            goto 'label_507f2a;
                                        }
                                        
                                        goto 'label_507e91;
                                    }
                                    
                                    uucore::features::fs::canonicalize::hb17a5541a57984e7(&var_3b8, 
                                        arg3, arg4, 0, 1);
                                    
                                    if var_3b8 != -0x8000000000000000
                                    {
                                        var_2a8 = var_3a8;
                                        var_2b8 = var_3b8;
                                        uu_cp::copy_attributes::h0ca124c6c7245f78(&var_390, 
                                            var_2b0, var_3a8, var_3c8, r15, &arg7[6]);
                                        let rax_42: u64 = var_390;
                                        
                                        if rax_42 == 0xd
                                        {
                                            core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::ha8df8090ff0f5f1e(&var_2b8);
                                            
                                            if var_3b8 == -0x8000000000000000
                                            {
                                                goto 'label_507c93;
                                            }
                                            
                                            goto 'label_507f2a;
                                        }
                                        
                                        result[7] = var_358;
                                        let zmm0_9: i128 = var_388;
                                        *result.byte_offset(0x28) = var_368;
                                        *result.byte_offset(0x18) = var_378;
                                        *result.byte_offset(8) = zmm0_9;
                                        *result = rax_42;
                                        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::ha8df8090ff0f5f1e(&var_2b8);
                                        
                                        if var_3b8 == -0x8000000000000000
                                        {
                                            core::ptr::drop_in_place$LT$core..result..Result$LT$std..path..PathBuf$C$std..io..error..Error$GT$$GT$::hc3882598e48cbc71(&var_3b8);
                                        }
                                    }
                                    else
                                    {
                                        'label_507c93:
                                        core::ptr::drop_in_place$LT$core..result..Result$LT$std..path..PathBuf$C$std..io..error..Error$GT$$GT$::hc3882598e48cbc71(&var_3b8);
                                        'label_507f2a:
                                        let mut rcx_24: i32;
                                        rcx_24 = rcx_10 != 0;
                                        uucore::features::fs::FileInformation::from_path::he917b6b2466acd0f(&var_390, arg3, arg4, rcx_24);
                                        let rbx_7: *mut i8 = var_388;
                                        
                                        if var_390 == 0
                                        {
                                            let mut var_b8: ();
                                            memcpy(&var_b8, &var_380, 0x88);
                                            let mut var_c0: *mut i8 = rbx_7;
                                            std::sys::pal::unix::os::split_paths::bytes_to_path::h0549813f23b52483(&var_390, var_3c8, r15);
                                            hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h6dd09ea9bc601e27(&var_2b8, arg10, &var_c0, &var_390);
                                            core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::he488659846a394d7(&var_2b8);
                                            
                                            if *arg2 == 0
                                            {
                                                *result = 0xd;
                                            }
                                            else
                                            {
                                                std::fs::metadata::h003d8cdbffde7c56(&var_390, 
                                                    arg3);
                                                
                                                if var_390 != 2
                                                {
                                                    indicatif::progress_bar::ProgressBar::inc::he12f7743cfc9ae04(arg2, *var_348[8]);
                                                    *result = 0xd;
                                                }
                                                else
                                                {
                                                    rax_29 = var_388;
                                                    *result = 2;
                                                    result[1] = rax_29;
                                                }
                                            }
                                        }
                                        else
                                        {
                                            *result = 2;
                                            result[1] = rbx_7;
                                        }
                                    }
                                }
                            }
                        }
                        else
                        {
                            uu_cp::copy_file::_$u7b$$u7b$closure$u7d$$u7d$::h1d4007727df2d8d4(
                                &var_3b8, arg3, arg4, rbx_4);
                            rax_29 = var_3b8;
                            *result.byte_offset(0x10) = var_3b0;
                            *result = 4;
                            result[1] = rax_29;
                        }
                        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h5bdd96f6f34778b9(
                            &var_2d8);
                    }
                    else
                    {
                        rbx_3 = arg7[8];
                        r15_4 = *arg7.byte_offset(0x41);
                        let rax_19: bool = r15_4 != 0;
                        let mut rcx_6: bool = rbx_3 != 0;
                        
                        if arg11 == 0
                        {
                            rcx_6 = rax_19;
                        }
                        
                        if r15_4 != 0
                        {
                            rcx_6 = rax_19;
                        }
                        
                        let r13_1: *mut *mut *mut i8 = arg4;
                        uucore::features::fs::FileInformation::from_path::he917b6b2466acd0f(
                            &var_390, arg3, r13_1, rcx_6);
                        var_3b8 = 1;
                        var_3b0 = arg3;
                        var_3a8 = r13_1;
                        let var_3a0_1: i8 = 1;
                        let mut var_148: *mut *mut i8 = &var_3b8;
                        let var_140_1: fn(arg1: *mut c_void, arg2: *mut c_void) -> i64 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                        var_2b8 = &data_5b5f08;
                        var_2b0 = 1;
                        let var_298_1: i64 = 0;
                        var_2a8 = &var_148;
                        let var_2a0_1: i64 = 1;
                        let mut var_160: i128;
                        core::option::Option$LT$T$GT$::map_or_else::h805a87bba4bea7c2(&var_160, 
                            &var_2b8);
                        let var_150: *mut *mut *mut i8;
                        var_2a8 = var_150;
                        var_2b8 = var_160;
                        
                        if var_390 == 0
                        {
                            var_3d0 = result;
                            var_2c8 = var_378;
                            var_2d8 = var_388;
                            let var_128_1: i96 = var_358;
                            core::ptr::drop_in_place$LT$$LT$core..result..Result$LT$uucore..features..fs..FileInformation$C$std..io..error..Error$GT$$u20$as$u20$quick_error..ResultExt$LT$uucore..features..fs..FileInformation$C$std..io..error..Error$GT$$GT$..context$LT$alloc..string..String$GT$..$u7b$$u7b$closure$u7d$$u7d$$GT$::h1ef8f78603d21391(&var_2b8);
                            var_218 = var_2d8;
                            var_208 = var_2c8;
                            let var_370: i64;
                            let var_200_3: i64 = var_370;
                            var_1f8 = var_368;
                            var_1e8 = var_128_1;
                            let var_1d8_1: i128 = var_348;
                            let var_338: i128;
                            let var_1c8_1: i128 = var_338;
                            let var_328: i128;
                            let var_1b8_1: i128 = var_328;
                            let var_318: i128;
                            let var_1a8_1: i128 = var_318;
                            let var_308: i128;
                            let var_198_1: i128 = var_308;
                            let rax_27: *mut c_void = hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get_inner::hef26ad6068154428(arg10, &var_218);
                            
                            if rax_27 == 0
                            {
                                result = var_3d0;
                                goto 'label_50784d;
                            }
                            
                            rax_14 = std::fs::hard_link::h6f8316d677157df8(
                                rax_27.byte_offset(0x90), arg5);
                            
                            if rax_14 == 0
                            {
                                result = var_3d0;
                                *result = 0xd;
                            }
                            else
                            {
                                result = var_3d0;
                                *result = 2;
                                result[1] = rax_14;
                            }
                        }
                        else
                        {
                            let rax_21: *mut i8 = var_388;
                            result[3] = var_150;
                            *result.byte_offset(8) = var_160;
                            *result = 3;
                            result[4] = rax_21;
                        }
                    }
                }
                else
                {
                    var_218 = 1;
                    let var_210_4: *mut i64 = arg5;
                    let var_208_3: u64 = r15;
                    let mut var_200: i64;
                    var_200 = 1;
                    var_2b8 = &var_218;
                    let var_2b0_4: fn(arg1: *mut c_void, arg2: *mut c_void) -> i64 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                    rax_8 = &data_5b6038;
                    'label_5078fe:
                    var_390 = rax_8;
                    var_388 = 2;
                    let var_370_3: i64 = 0;
                    var_380 = &var_2b8;
                    let var_378_2: i64 = 1;
                    core::option::Option$LT$T$GT$::map_or_else::h805a87bba4bea7c2(&result[1], 
                        &var_390);
                    *result = 4;
                }
            }
            else
            {
                if rbx_1 != 0
                {
                    rax_15 = true;
                }
                
                if rbx_1 != 0 && (*arg7.byte_offset(0x3c) != 0 || *arg7.byte_offset(0x3d) != 1)
                {
                    goto 'label_5076aa;
                }
                
                let rax_16: i8 = uucore::features::fs::paths_refer_to_same_file::hbd4c553d00ffcef7(
                    arg3, arg4, arg5, r15, 1);
                let r15_3: i8 = *arg7.byte_offset(0x4e);
                
                if rax_16 == 0 || r15_3 != 0
                {
                    'label_507cee:
                    uu_cp::handle_existing_dest::h1a418223b4b32809(&var_390, arg3, arg4, arg5, r15, 
                        arg7, arg11, arg10);
                    let rax_36: u64 = var_390;
                    
                    if rax_36 != 0xd
                    {
                        result[7] = var_358;
                        let zmm0_8: i128 = var_388;
                        *result.byte_offset(0x28) = var_368;
                        *result.byte_offset(0x18) = var_378;
                        *result.byte_offset(8) = zmm0_8;
                        *result = rax_36;
                    }
                    else
                    {
                        if uucore::features::fs::are_hardlinks_to_same_file::h58f3d52af664165a(
                            arg3, arg4, arg5) == 0
                        {
                            rax_15 = rbx_1;
                            goto 'label_5076aa;
                        }
                        
                        if r15_3 != 2 || *arg7.byte_offset(0x4c) == 0
                        {
                            if (rax_1 & rax) != 0
                            {
                                rax_15 = rbx_1;
                                goto 'label_5076aa;
                            }
                            
                            rax_15 = rbx_1;
                            
                            if r15_3 != 0
                            {
                                goto 'label_5076aa;
                            }
                            
                            *result = 0xd;
                        }
                        else
                        {
                            *result = 0xd;
                        }
                    }
                }
                else if rax == 0
                {
                    let mut rax_34: *mut i64;
                    rax_34 = *arg7.byte_offset(0x4c) == 0;
                    rax_34 |= rax_1;
                    
                    if rax_34 != 0
                    {
                        goto 'label_507cee;
                    }
                    
                    var_3d0 = result;
                    std::path::Path::components::h4f3217acf0fc8653(&var_218, arg3, arg4);
                    std::path::Path::components::h4f3217acf0fc8653(&var_390, arg5, r15);
                    
                    if _$LT$std..path..Components$u20$as$u20$core..cmp..PartialEq$GT$::eq::h5cac1ec2999e76da(&var_218, &var_390) == 0
                    {
                        result = var_3d0;
                        *result = 0xd;
                    }
                    else
                    {
                        result = var_3d0;
                        
                        if (*arg7.byte_offset(0x3c) | *arg7.byte_offset(0x3d)) == 0
                        {
                            goto 'label_507cee;
                        }
                        
                        *result = 0xd;
                    }
                }
                else
                {
                    if rax_1 != 0 && *arg7.byte_offset(0x41) != 0
                    {
                        goto 'label_507cee;
                    }
                    
                    *result = 0xd;
                }
            }
        }
        else
        {
            std::path::Path::components::h4f3217acf0fc8653(&var_218, arg3, arg4);
            std::path::Path::components::h4f3217acf0fc8653(&var_390, arg5, r15);
            rbx = arg7;
            
            if _$LT$std..path..Components$u20$as$u20$core..cmp..PartialEq$GT$::eq::h5cac1ec2999e76da(&var_218, &var_390) != 0 || *rbx.byte_offset(0x3c) != 0
                || *rbx.byte_offset(0x3d) != 1
            {
                goto 'label_50760f;
            }
            
            rax_14 = std::fs::remove_file::h38159f05e7b4dc34(arg5);
            
            if rax_14 == 0
            {
                goto 'label_50760f;
            }
            
            *result = 2;
            result[1] = rax_14;
        }
    }
    else
    {
        uucore::features::fs::FileInformation::from_path::he917b6b2466acd0f(&var_390, arg5, r15, 0);
        
        if var_390 == 0
        {
            memcpy(&var_218, &var_388, 0x90);
            result = arg1;
            
            if hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get_inner::hd8db7bc2a0d0ef09(arg8, 
                &var_218) == 0
            {
                goto 'label_5072dd;
            }
            
            var_3b8 = arg3;
            let var_3b0_2: u64 = arg4;
            var_2b8 = arg5;
            let var_2b0_2: u64 = r15;
            var_218 = &var_3b8;
            let var_210_2: fn(arg1: *mut i64, arg2: *mut c_void) -> i64 =
                _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h5a3c32fa16876e76;
            let var_208_2: *mut i8 = &var_2b8;
            let var_200_2: fn(arg1: *mut i64, arg2: *mut c_void) -> i64 =
                _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h5a3c32fa16876e76;
            var_390 = &data_5b5fe8;
            var_388 = 3;
            let var_370_2: i64 = 0;
            var_380 = &var_218;
            'label_50741b:
            let var_378_1: i64 = 2;
            core::option::Option$LT$T$GT$::map_or_else::h805a87bba4bea7c2(&result[1], &var_390);
            *result = 4;
        }
        else
        {
            var_2b0 = var_388;
            var_2b8 = 1;
            core::ptr::drop_in_place$LT$core..result..Result$LT$bool$C$std..io..error..Error$GT$$GT$::h9c31107a5315a077(&var_2b8);
            result = arg1;
            'label_5072dd:
            let mut rax_3: *mut c_void =
                hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get_inner::hf39b9bbbffc687fc(arg9, 
                arg5, r15);
            
            if rax_3 != 0
            {
                var_3b8 = arg3;
                let var_3b0_1: u64 = arg4;
                var_2b8 = arg5;
                let var_2b0_1: u64 = r15;
                var_218 = &var_3b8;
                let var_210_1: fn(arg1: *mut i64, arg2: *mut c_void) -> i64 = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h5a3c32fa16876e76;
                let var_208_1: *mut i8 = &var_2b8;
                let var_200_1: fn(arg1: *mut i64, arg2: *mut c_void) -> i64 = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h5a3c32fa16876e76;
                var_390 = &data_5b5fe8;
                var_388 = 3;
                let var_370_1: i64 = 0;
                var_380 = &var_218;
                goto 'label_50741b;
            }
            
            rbx = arg7;
            
            if *rbx.byte_offset(0x41) == 0
            {
                rax_3 = rbx[8] != 0;
            }
            
            if *rbx.byte_offset(0x41) != 0 || (arg11 & rax_3) != 0 || rax != 1
            {
                std::fs::metadata::h003d8cdbffde7c56(&var_390, arg5);
                let var_3d8_1: u64 = r15;
                let r15_1: i32 = var_390;
                rbx = arg7;
                core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h6e54671ee6a51b2a(&var_390);
                r15 = var_3d8_1;
                
                if r15_1 != 2 || (*rbx.byte_offset(0x3c) == 0 && *rbx.byte_offset(0x3d) == 1)
                {
                    goto 'label_50754d;
                }
                
                if uucore::features::fs::is_symlink_loop::h6176a52fb38b92f8(arg5, r15) != 0
                {
                    goto 'label_50754d;
                }
                
                std::env::var_os::h1986be097247ce4a(&var_390, "POSIXLY_CORRECTNo such file or d…");
                let r15_2: u64 = var_390;
                rbx = arg7;
                core::ptr::drop_in_place$LT$core..option..Option$LT$std..ffi..os_str..OsString$GT$$GT$::h221d2028a300d640(&var_390);
                r15 = var_3d8_1;
                
                if r15_2 != -0x8000000000000000
                {
                    goto 'label_50754d;
                }
                
                var_218 = arg5;
                let var_210_3: u64 = r15;
                var_2b8 = &var_218;
                let var_2b0_3: fn(arg1: *mut i64, arg2: *mut c_void) -> i64 = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h5a3c32fa16876e76;
                rax_8 = &data_5b6018;
                goto 'label_5078fe;
            }
            
            'label_50754d:
            
            if uucore::features::fs::paths_refer_to_same_file::hbd4c553d00ffcef7(arg3, arg4, arg5, 
                r15, 1) == 0 || *rbx.byte_offset(0x3c) != 0 || *rbx.byte_offset(0x3d) != 1
                || *rbx.byte_offset(0x4c) != 0
            {
                goto 'label_5075a0;
            }
            
            let rax_11: i64 = std::fs::remove_file::h38159f05e7b4dc34(arg5);
            
            if rax_11 == 0
            {
                goto 'label_5075a0;
            }
            
            result = arg1;
            *arg1 = 2;
            arg1[1] = rax_11;
        }
    }
    result
}
