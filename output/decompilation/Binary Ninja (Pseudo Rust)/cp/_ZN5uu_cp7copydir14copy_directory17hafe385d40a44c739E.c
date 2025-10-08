
  fn uu_cp::copydir::copy_directory::hafe385d40a44c739(arg1: *mut *mut c_void, arg2: *mut i64, arg3: *mut i8, arg4: u64, arg5: *mut i64, arg6: u64, arg7: *mut c_void, arg8: *mut *mut i8, arg9: *mut i64, arg10: *mut *mut i8) -> *mut i128

{
    let r13: i8 = *arg7.byte_offset(0x59);
    
    if r13 == 0 && *arg7.byte_offset(0x58) == 0
        && std::path::Path::is_symlink::h004cfac91d04dbc0(arg3, arg4) != 0
    {
        return uu_cp::copy_file::h2d5f479453081e34(arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, 
            arg9, arg10, 1);
    }
    
    let mut result: *mut i128;
    let mut i_4: *mut c_void;
    let mut i_1: *mut *mut i128;
    let mut i_10: *mut c_void;
    
    if *arg7.byte_offset(0x5e) == 0
    {
        i_4 = 1;
        let var_380_1: *mut i8 = arg3;
        let var_378_1: u64 = arg4;
        let var_370_1: i8 = 1;
        i_1 = &i_4;
        let var_320_1: fn(arg1: *mut i32, arg2: *mut i64) -> i64 =
            _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
        i_10 = &data_55e690;
        let var_1e0: i64 = 1;
        let var_1c8_1: i64 = 0;
        let var_1d8_1: *mut *mut *mut i128 = &i_1;
        let var_1d0_1: i64 = 1;
        let rbx_1: *mut i64 = arg1;
        result = core::option::Option$LT$T$GT$::map_or_else::ha891a5b84284deb4(&rbx_1[1], &i_10);
        *rbx_1 = -0x7ffffffffffffffd;
    }
    else
    {
        uu_cp::copydir::path_has_prefix::h6e510270f6f80f62(&i_10, arg5, arg6, arg3, arg4);
        let mut result_1: *mut i128;
        
        if i_10 != 1
        {
            let mut var_380: *mut *mut i64;
            let mut result_3: *mut i128;
            let mut var_218: i128;
            let mut var_138: *mut *mut *mut i128;
            
            if (*i_10[1] & 1) == 0
            {
                let rax_4: i8 = *arg7.byte_offset(0x5c);
                let mut rax_5: *mut i8;
                let mut rdx_5: i64;
                
                if rax_4 != 0
                {
                    rax_5 = std::path::Path::parent::hef287f60afa56900(arg3, arg4);
                }
                let mut var_378: *mut i64;
                let mut var_370: i8;
                let mut var_320: *mut *mut i64;
                let mut var_318: *mut i128;
                let mut var_2d8: i128;
                let mut var_2c8: u64;
                let mut var_288: i128;
                let mut var_278: u64;
                let mut i_2: *mut *mut i128;
                let mut var_258: i64;
                let mut var_1d8: *mut *mut c_void;
                let mut var_1c8: i64;
                let mut var_1c0: i128;
                
                if rax_4 == 0 || rax_5 == 0
                {
                    std::sys::pal::unix::os::split_paths::bytes_to_path::h3f69b771c0ce4140(
                        &var_288, arg5, arg6);
                }
                else
                {
                    std::path::Path::join::h10fbe6df042abede(&var_2d8, arg5, arg6, rax_5);
                    let var_3d8: i64;
                    uu_cp::copydir::build_dir::hcf48ec2566a6908d(&i_10, &var_2d8, 1, 
                        *arg7.byte_offset(0x48), *arg7.byte_offset(0x4a), 0, var_3d8);
                    let i_12: *mut c_void = i_10;
                    
                    if i_12 != -0x7ffffffffffffff4
                    {
                        *arg1.byte_offset(0x28) = var_1c0;
                        let var_1d0: i64;
                        *arg1.byte_offset(0x18) = var_1d0;
                        *arg1.byte_offset(8) = result_1;
                        *arg1 = i_12;
                        return 
                            core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h80f4faf291cc80af(
                            &var_2d8);
                    }
                    
                    if *arg7.byte_offset(0x60) != 0
                    {
                        std::path::Path::join::h10fbe6df042abede(&result_3, arg5, arg6, arg3);
                        let var_398_1: *mut i128 = &var_2d8;
                        uu_cp::aligned_ancestors::h2e8a6c5e1cc13323(&i_10, arg3, arg4, var_218);
                        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h22eacf00db38bb5e(&var_138, &i_10);
                        _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h90db137ad036c527(&i_1, &var_138);
                        
                        for let mut i: *mut *mut i128 = i_1; i != 0; i = i_1
                        {
                            i_2 = i;
                            let var_268_1: *mut *mut i64 = var_320;
                            var_258 = var_318;
                            i_4 = &i_2;
                            var_380 = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::hdc1404ac42f64ec9;
                            var_378 = &var_258;
                            var_370 = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::hdc1404ac42f64ec9;
                            i_10 = &data_55e6c0;
                            result_1 = 3;
                            var_1c8 = 0;
                            var_1d8 = &i_4;
                            let var_1d0_3: i64 = 2;
                            std::io::stdio::_print::h5e446ff973c02de6(&i_10);
                            _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h90db137ad036c527(&i_1, &var_138);
                        }
                        
                        core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$$LP$$RF$std..path..Path$C$$RF$std..path..Path$RP$$GT$$GT$::h0259dd8f81e67d9c(&var_138);
                        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h80f4faf291cc80af(
                            &result_3);
                    }
                    
                    var_278 = var_2c8;
                    var_288 = var_2d8;
                }
                
                let rbx_2: i8 = *arg7.byte_offset(0x50);
                let var_280: i64;
                uu_cp::copydir::Context::new::h1971362967e4b6cd(&i_10, arg3, arg4, var_280, 
                    var_278);
                
                if i_10 != -0x8000000000000000
                {
                    let mut var_1a8: i128;
                    let var_f8_1: i128 = var_1a8;
                    let var_108_1: i128 = var_1c0;
                    let var_118_1: i128 = var_1c8;
                    let mut var_128: i64;
                    var_128 = var_1d8;
                    var_138 = i_10;
                    var_258 = -0x8000000000000000;
                    let var_3ac_1: i32 = 1;
                    walkdir::WalkDir::new::had0dfc259ecbd7b1(&i_4, arg3);
                    let var_345_1: i8 = *arg7.byte_offset(0x5b);
                    let mut var_350: *mut i64;
                    let var_158_1: *mut i64 = var_350;
                    let mut var_360: i128;
                    let var_168_1: i128 = var_360;
                    let var_178_1: i128 = var_370;
                    let var_347: i32;
                    let mut var_14f_1: i32 = var_347;
                    let var_344: i32;
                    var_14f_1 = var_344;
                    let var_190_1: i128 = i_4;
                    let var_180_1: *mut i64 = var_378;
                    i_10 = nullptr;
                    let var_1d8_3: i64 = 0;
                    let var_1d0_4: i64 = 8;
                    var_1c8 = {0};
                    *var_1c0[8] = 8;
                    let var_1b0_1: i128 = {0};
                    *var_1a8[8] = 8;
                    let var_198_1: i64 = 0;
                    let var_150_1: i8 = r13;
                    let var_148_1: i128 = {0};
                    let rax_18: i8 = *arg7.byte_offset(0x5a);
                    let var_338_1: *mut c_void = -0x800000000000000c;
                    
                    loop
                    {
                        _$LT$walkdir..IntoIter$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hca085ed089cd688a(&result_3, &i_10);
                        let result_4: *mut i128 = result_3;
                        let mut rcx_35: i8;
                        let mut rdx_38: i64;
                        let mut var_310: i8;
                        let var_250: i64;
                        let mut var_248: i64;
                        let var_208: i128;
                        let var_1f8: i128;
                        
                        if result_4 == -0x7fffffffffffffff
                        {
                            let var_2b8_1: i96 = var_1f8;
                            var_2c8 = var_208;
                            var_2d8 = var_218;
                            let rdx_13: i64 = *var_2d8[8];
                            uu_cp::copydir::Entry::new::h80a7ef3aebe5fae7(&i_4, &var_138, rdx_13, 
                                var_2c8, rax_18);
                            let i_5: *mut c_void = i_4;
                            
                            if i_5 == -0x8000000000000000
                            {
                                *arg1 = -0x8000000000000006;
                            }
                            else
                            {
                                let var_340: i64;
                                let var_38_1: i64 = var_340;
                                let var_48_1: i128 = var_350;
                                let var_58_1: i128 = var_360;
                                let var_68_1: i128 = var_370;
                                let var_78_1: i128 = var_380;
                                let mut i_11: *mut c_void = i_5;
                                uu_cp::copydir::copy_direntry::h5128c59f3878fb79(&i_4, arg2, &i_11, 
                                    arg7, arg8, rbx_2, arg9, arg10);
                                let i_6: *mut c_void = i_4;
                                
                                if i_6 != var_338_1
                                {
                                    *arg1.byte_offset(0x28) = var_360;
                                    *arg1.byte_offset(0x18) = var_370;
                                    *arg1.byte_offset(8) = var_380;
                                    *arg1 = i_6;
                                }
                                else if (*var_2b8_1[8] & 0xf000) != 0x4000
                                {
                                    core::ptr::drop_in_place$LT$walkdir..dent..DirEntry$GT$::h444cd82b19c00334(&var_218);
                                    continue;
                                }
                                else
                                {
                                    let mut rbx_4: *mut i8;
                                    
                                    if var_258 == -0x8000000000000000
                                    {
                                        'label_49a638:
                                        core::ptr::drop_in_place$LT$core..option..Option$LT$walkdir..dent..DirEntry$GT$$GT$::ha461187a0f94669f(&var_258);
                                        let var_238_1: i128 = var_1f8;
                                        var_248 = var_208;
                                        var_258 = var_218;
                                        continue;
                                    }
                                    else
                                    {
                                        if std::path::Path::strip_prefix::hf232be0ca9110327(
                                            var_250, var_248, rdx_13) == 0
                                        {
                                            goto 'label_49a638;
                                        }
                                        
                                        let mut rax_24: i64;
                                        let mut rdx_17: i64;
                                        rax_24 = std::path::Path::strip_prefix::hf232be0ca9110327(
                                            var_250, var_248, rdx_13);
                                        let mut rax_25: i64;
                                        let mut rdx_19: i64;
                                        rax_25 = core::result::Result$LT$T$C$E$GT$::unwrap::h60e8458df1e66a99(rax_24);
                                        let mut var_d0: *mut i8;
                                        uu_cp::copydir::skip_last::hccc8afbbff581cdb(&var_d0, 
                                            rax_25, rdx_19);
                                        rbx_4 = var_d0;
                                        
                                        if rbx_4 == 0
                                        {
                                            goto 'label_49a638;
                                        }
                                    }
                                    
                                    let var_c8: i64;
                                    let mut rbp_1: i64 = var_c8;
                                    let var_c0: *mut i8;
                                    let mut r14_3: *mut i8 = var_c0;
                                    
                                    loop
                                    {
                                        let r12_1: *mut i8 = rbx_4;
                                        let mut rax_26: *mut i8;
                                        let mut rdx_20: i64;
                                        rax_26 = std::path::Path::parent::hef287f60afa56900(rbx_4, 
                                            rbp_1);
                                        
                                        if r14_3 == 0
                                        {
                                            goto 'label_49a638;
                                        }
                                        
                                        rbx_4 = rax_26;
                                        rbp_1 = rdx_20;
                                        std::path::Path::join::h10fbe6df042abede(&i_2, rdx_13, 
                                            var_2c8, r14_3);
                                        uu_cp::copydir::Entry::new::h6fc819f4164af7ea(&i_4, 
                                            &var_138, &i_2, rax_18);
                                        let i_3: *mut *mut i128 = i_4;
                                        
                                        if i_3 == -0x8000000000000000
                                        {
                                            *arg1 = -0x8000000000000006;
                                        }
                                        else
                                        {
                                            let var_2e0_1: i64 = var_340;
                                            let zmm3_3: i128 = var_350;
                                            let var_300_1: i128 = var_360;
                                            var_310 = var_370;
                                            var_320 = var_380;
                                            i_1 = i_3;
                                            uu_cp::copy_attributes::h279b81c598780b21(&i_4, 
                                                var_320, var_318, zmm3_3, *zmm3_3[8], 
                                                arg7.byte_offset(0x48));
                                            let i_7: *mut c_void = i_4;
                                            
                                            if i_7 != var_338_1
                                            {
                                                *arg1.byte_offset(0x28) = var_360;
                                                *arg1.byte_offset(0x18) = var_370;
                                                *arg1.byte_offset(8) = var_380;
                                                *arg1 = i_7;
                                                core::ptr::drop_in_place$LT$uu_cp..copydir..Entry$GT$::h89a476cd5a29a964(&i_1);
                                            }
                                            else
                                            {
                                                core::ptr::drop_in_place$LT$uu_cp..copydir..Entry$GT$::h89a476cd5a29a964(&i_1);
                                                core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h80f4faf291cc80af(&i_2);
                                                r14_3 = r12_1;
                                                
                                                if rbx_4 == 0
                                                {
                                                    goto 'label_49a638;
                                                }
                                                
                                                continue;
                                            }
                                        }
                                        
                                        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h80f4faf291cc80af(&i_2);
                                        break;
                                    }
                                }
                            }
                            
                            core::ptr::drop_in_place$LT$walkdir..dent..DirEntry$GT$::h444cd82b19c00334(&var_2d8);
                            core::ptr::drop_in_place$LT$walkdir..IntoIter$GT$::hd310f303c53c6874(
                                &i_10);
                            rdx_38 = var_258;
                            rcx_35 = 0;
                        }
                        else if result_4 == -0x7ffffffffffffffe
                        {
                            core::ptr::drop_in_place$LT$walkdir..IntoIter$GT$::hd310f303c53c6874(
                                &i_10);
                            let rdx_24: i64 = var_258;
                            let mut rcx_22: i32;
                            rcx_22 = 1;
                            
                            if rdx_24 != -0x8000000000000000
                            {
                                let mut rax_27: i64;
                                let mut rdx_26: i64;
                                rax_27 = std::path::Path::strip_prefix::hf232be0ca9110327(var_250, 
                                    var_248, arg3);
                                let mut rax_28: *mut i8;
                                let mut rdx_28: i64;
                                rax_28 =
                                    core::result::Result$LT$T$C$E$GT$::unwrap::h60e8458df1e66a99(
                                    rax_27);
                                let mut r13_2: *mut i8 = rax_28;
                                
                                if rax_28 != 0
                                {
                                    let mut rbp_2: i64 = rdx_28;
                                    
                                    loop
                                    {
                                        let mut rax_29: *mut i8;
                                        let mut rdx_29: i64;
                                        rax_29 = std::path::Path::parent::hef287f60afa56900(r13_2, 
                                            rbp_2);
                                        std::path::Path::join::h10fbe6df042abede(&i_1, arg3, arg4, 
                                            r13_2);
                                        uu_cp::copydir::Entry::new::h6fc819f4164af7ea(&i_10, 
                                            &var_138, &i_1, rax_18);
                                        let i_8: *mut c_void = i_10;
                                        
                                        if i_8 == -0x8000000000000000
                                        {
                                            *arg1 = -0x8000000000000006;
                                        }
                                        else
                                        {
                                            let var_340_1: i64 = *var_1a8[8];
                                            var_350 = var_1b0_1;
                                            let var_360_1: i128 = var_1c0;
                                            var_370 = var_1d0_4;
                                            var_380 = result_1;
                                            i_4 = i_8;
                                            let var_348: i64;
                                            uu_cp::copy_attributes::h279b81c598780b21(&i_10, 
                                                var_380, var_378, var_350, var_348, 
                                                arg7.byte_offset(0x48));
                                            let i_13: *mut c_void = i_10;
                                            
                                            if i_13 != var_338_1
                                            {
                                                *arg1.byte_offset(0x28) = var_1c0;
                                                *arg1.byte_offset(0x18) = var_1d0_4;
                                                *arg1.byte_offset(8) = result_1;
                                                *arg1 = i_13;
                                                core::ptr::drop_in_place$LT$uu_cp..copydir..Entry$GT$::h89a476cd5a29a964(&i_4);
                                            }
                                            else
                                            {
                                                core::ptr::drop_in_place$LT$uu_cp..copydir..Entry$GT$::h89a476cd5a29a964(&i_4);
                                                core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h80f4faf291cc80af(&i_1);
                                                r13_2 = rax_29;
                                                rbp_2 = rdx_29;
                                                
                                                if rax_29 == 0
                                                {
                                                    goto 'label_49a830;
                                                }
                                                
                                                continue;
                                            }
                                        }
                                        
                                        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h80f4faf291cc80af(&i_1);
                                        break;
                                    }
                                    
                                    goto 'label_49aa6c;
                                }
                                
                                'label_49a830:
                                core::ptr::drop_in_place$LT$walkdir..dent..DirEntry$GT$::h444cd82b19c00334(&var_258);
                                rcx_22 = 0;
                            }
                            
                            if rax_4 == 0
                            {
                                goto 'label_49aabb;
                            }
                            
                            let mut rax_30: i64;
                            let mut rdx_33: i64;
                            rax_30 = std::path::Path::file_name::h6d40d88bf3fb287a(arg3, arg4);
                            
                            if rax_30 == 0
                            {
                                core::option::unwrap_failed::h893f57cb7db71cb7();
                                /* no return */
                            }
                            
                            std::path::Path::join::h10fbe6df042abede(&var_2d8, var_280, var_278, 
                                rax_30);
                            uu_cp::aligned_ancestors::h2e8a6c5e1cc13323(&i_10, arg3, arg4, 
                                *var_2d8[8]);
                            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h22eacf00db38bb5e(&i_1, &i_10);
                            _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h90db137ad036c527(&i_4, &i_1);
                            let mut i_9: *mut c_void = i_4;
                            
                            if i_9 == 0
                            {
                                'label_49aa98:
                                core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$$LP$$RF$std..path..Path$C$$RF$std..path..Path$RP$$GT$$GT$::h0259dd8f81e67d9c(&i_1);
                                core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h80f4faf291cc80af(&var_2d8);
                                'label_49aabb:
                                *arg1 = var_338_1;
                                
                                if rdx_24 != -0x8000000000000000 && rcx_22 != 0
                                {
                                    core::ptr::drop_in_place$LT$walkdir..dent..DirEntry$GT$::h444cd82b19c00334(&var_258);
                                }
                                
                                core::ptr::drop_in_place$LT$uu_cp..copydir..Context$GT$::h778f54a505d07da4(&var_138);
                                break;
                                break;
                            }
                            
                            loop
                            {
                                uucore::features::fs::canonicalize::h2a46952db6a00ca6(&result_3, 
                                    i_9, var_380, 0, 1);
                                
                                if result_3 == -0x8000000000000000
                                {
                                    core::ptr::drop_in_place$LT$core..result..Result$LT$std..path..PathBuf$C$std..io..error..Error$GT$$GT$::hd1372b83dff59979(&result_3);
                                }
                                else
                                {
                                    uu_cp::copy_attributes::h279b81c598780b21(&i_10, var_218, 
                                        *var_218[8], var_378, var_370, arg7.byte_offset(0x48));
                                    let i_14: *mut c_void = i_10;
                                    
                                    if i_14 != var_338_1
                                    {
                                        *arg1.byte_offset(0x28) = var_1c0;
                                        *arg1.byte_offset(0x18) = var_1d0_4;
                                        *arg1.byte_offset(8) = result_1;
                                        *arg1 = i_14;
                                        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h80f4faf291cc80af(&result_3);
                                        core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$$LP$$RF$std..path..Path$C$$RF$std..path..Path$RP$$GT$$GT$::h0259dd8f81e67d9c(&i_1);
                                        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h80f4faf291cc80af(&var_2d8);
                                        rcx_35 = rcx_22 ^ 1;
                                        rdx_38 = rdx_24;
                                        break;
                                    }
                                    
                                    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h80f4faf291cc80af(&result_3);
                                }
                                
                                _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h90db137ad036c527(&i_4, &i_1);
                                i_9 = i_4;
                                
                                if i_9 == 0
                                {
                                    goto 'label_49aa98;
                                }
                            }
                        }
                        else
                        {
                            i_4 = result_4;
                            var_360 = var_1f8;
                            var_370 = var_208;
                            var_380 = var_218;
                            let mut rax_20: i64;
                            let mut rdx_12: i64;
                            rax_20 = uucore::util_name::h074417a1e6395129();
                            var_2d8 = rax_20;
                            *var_2d8[8] = rdx_12;
                            i_2 = &var_2d8;
                            let var_268_2: fn(arg1: *mut i64, arg2: i64) -> i64 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::haac06c1252b30d1d;
                            i_1 = &data_55e700;
                            let var_320_4: i64 = 2;
                            let var_308_1: i64 = 0;
                            let var_318_2: *mut *mut *mut i128 = &i_2;
                            var_310 = 1;
                            std::io::stdio::_eprint::h57899770eacec2ad(&i_1);
                            var_2d8 = &i_4;
                            *var_2d8[8] = _$LT$walkdir..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h1e123ae21f310ff7;
                            i_1 = &data_55e620;
                            var_320 = 2;
                            let var_308_2: i64 = 0;
                            var_318 = &var_2d8;
                            var_310 = 1;
                            std::io::stdio::_eprint::h57899770eacec2ad(&i_1);
                            core::ptr::drop_in_place$LT$walkdir..error..Error$GT$::h67581e15ba29d162(&i_4);
                            continue;
                            continue;
                        }
                        
                        if ((rdx_38 == -0x8000000000000000 | rcx_35) & 1) != 0
                        {
                            core::ptr::drop_in_place$LT$uu_cp..copydir..Context$GT$::h778f54a505d07da4(&var_138);
                            break;
                        }
                        
                        'label_49aa6c:
                        core::ptr::drop_in_place$LT$walkdir..dent..DirEntry$GT$::h444cd82b19c00334(
                            &var_258);
                        core::ptr::drop_in_place$LT$uu_cp..copydir..Context$GT$::h778f54a505d07da4(
                            &var_138);
                        break;
                    }
                }
                else
                {
                    result_3 = result_1;
                    i_1 = &result_3;
                    let var_320_3: fn(arg1: *mut i64, arg2: *mut i64) -> i64 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::ha4645305e3b6a355;
                    i_4 = &data_55e6f0;
                    let var_380_2: i64 = 1;
                    let var_368_1: i64 = 0;
                    let var_378_2: *mut *mut *mut i128 = &i_1;
                    var_370 = 1;
                    let mut var_98: i128;
                    core::option::Option$LT$T$GT$::map_or_else::ha891a5b84284deb4(&var_98, &i_4);
                    let var_88: i64;
                    arg1[3] = var_88;
                    *arg1.byte_offset(8) = var_98;
                    *arg1 = -0x8000000000000003;
                    core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hb23d8f5d6ef8daac(
                        &result_3);
                }
                
                return core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h80f4faf291cc80af(
                    &var_288);
            }
            
            i_1 = 1;
            let var_320_2: *mut i8 = arg3;
            let var_318_1: u64 = arg4;
            let var_310_1: i8 = 1;
            let mut rax_2: i64;
            let mut rdx_3: i64;
            rax_2 = std::path::Path::file_name::h6d40d88bf3fb287a(arg3, arg4);
            
            if rax_2 == 0
            {
                core::option::unwrap_failed::h893f57cb7db71cb7();
                /* no return */
            }
            
            std::path::Path::join::h10fbe6df042abede(&result_3, arg5, arg6, rax_2);
            let zmm0_1: i128 = var_218;
            i_4 = 1;
            var_380 = zmm0_1;
            let var_370_2: i8 = 1;
            var_138 = &i_1;
            let var_130_1: fn(arg1: *mut i32, arg2: *mut i64) -> i64 =
                _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
            let var_128_1: *mut *mut c_void = &i_4;
            let var_120_1: fn(arg1: *mut i32, arg2: *mut i64) -> i64 =
                _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
            i_10 = &data_55e6a0;
            let var_1e0_1: i64 = 2;
            let var_1c8_2: i64 = 0;
            let var_1d8_2: *mut *mut *mut *mut i128 = &var_138;
            let var_1d0_2: i64 = 2;
            let mut var_b0: i128;
            core::option::Option$LT$T$GT$::map_or_else::ha891a5b84284deb4(&var_b0, &i_10);
            core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h80f4faf291cc80af(&result_3);
            let result_2: *mut i128;
            result = result_2;
            arg1[3] = result;
            *arg1.byte_offset(8) = var_b0;
            *arg1 = -0x8000000000000003;
        }
        else
        {
            result = result_1;
            *arg1 = -0x8000000000000001;
            arg1[1] = result;
        }
    }
    result
}
