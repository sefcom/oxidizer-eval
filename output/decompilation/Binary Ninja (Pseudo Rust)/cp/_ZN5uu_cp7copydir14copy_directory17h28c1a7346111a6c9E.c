
  fn uu_cp::copydir::copy_directory::h28c1a7346111a6c9(arg1: *mut i64, arg2: *mut i64, arg3: *mut i8, arg4: u64, arg5: *mut i64, arg6: u64, arg7: *mut i64, arg8: *mut i64, arg9: *mut i64, arg10: *mut i64, arg11: i8) -> *mut i64

{
    let mut r12: *mut i64 = arg7;
    let r14: i8 = *r12.byte_offset(0x41);
    
    if r14 != 0 || (arg11 != 0 && r12[8] != 0)
    {
        'label_50e791:
        let mut var_288: *mut i64;
        let mut var_218: *mut *mut c_void;
        let mut i_1: *mut *mut i64;
        
        if *r12.byte_offset(0x46) == 0
        {
            var_288 = 1;
            let var_280_1: *mut i8 = arg3;
            let var_278_1: u64 = arg4;
            let var_270_1: i8 = 1;
            i_1 = &var_288;
            let var_100_1: fn(arg1: *mut c_void, arg2: *mut c_void) -> i64 =
                _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
            var_218 = &data_5b6330;
            let var_210_1: i64 = 1;
            let var_1f8_1: i64 = 0;
            let var_208_1: *mut *mut *mut i64 = &i_1;
            let var_200_1: i64 = 1;
            core::option::Option$LT$T$GT$::map_or_else::h805a87bba4bea7c2(&arg1[1], &var_218);
            *arg1 = 4;
        }
        else
        {
            uu_cp::copydir::path_has_prefix::hcf43da5c11f3d99b(&var_218, arg5, arg6, arg3, arg4);
            let mut var_210: *mut c_void;
            
            if var_218 != 0
            {
                *arg1 = 2;
                arg1[1] = var_210;
            }
            else
            {
                let mut var_2d8: i128;
                let var_2c8: u64;
                let mut var_2b8: *mut c_void;
                let mut var_2b0: i128;
                let mut var_280: fn(arg1: *mut i64, arg2: *mut c_void) -> i64;
                let mut var_148: *mut i64;
                
                if *var_218[1] == 0
                {
                    let r14_2: i8 = *r12.byte_offset(0x44);
                    let mut rax_6: *mut i8;
                    let mut rdx_4: i64;
                    
                    if r14_2 != 0
                    {
                        rax_6 = std::path::Path::parent::h65c9a340a6266f2d(arg3, arg4);
                    }
                    let mut rdi_31: *mut i128;
                    let mut var_278: *mut i128;
                    let mut var_270: i8;
                    let mut var_238: i128;
                    let mut var_208: *mut *mut i64;
                    let mut var_1f8: i64;
                    let mut var_1f0: i128;
                    let mut var_1e0: i64;
                    let mut var_168: i128;
                    let mut var_158: u64;
                    let mut var_f8: i64;
                    
                    if r14_2 == 0 || rax_6 == 0
                    {
                        std::sys::pal::unix::os::split_paths::bytes_to_path::h0549813f23b52483(
                            &var_168, arg5, arg6);
                        'label_50ebb3:
                        let rax_9: i8 = r12[7];
                        let var_160: *mut c_void;
                        uu_cp::copydir::Context::new::h4cc136cbd57b6fd2(&var_218, arg3, arg4, 
                            var_160, var_158);
                        
                        if var_218 != -0x8000000000000000
                        {
                            let mut var_1d8: i128;
                            let var_c8_1: i128 = var_1d8;
                            let var_d8_1: i128 = var_1f0;
                            let var_e8_1: i128 = var_1f8;
                            var_f8 = var_208;
                            i_1 = var_218;
                            walkdir::WalkDir::new::h4dd3b028fcf7969e(&var_288, arg3);
                            let var_220_1: *mut i8 = &r12[6];
                            let var_245_1: i8 = *r12.byte_offset(0x43);
                            let mut var_250: i64;
                            let var_188_1: i64 = var_250;
                            let mut var_260: i128;
                            let var_198_1: i128 = var_260;
                            let var_1a8_1: i128 = var_270;
                            let var_247: i32;
                            let mut var_17f_1: i32 = var_247;
                            let var_244: i32;
                            var_17f_1 = var_244;
                            let var_1c0_1: i128 = var_288;
                            let var_1b0_1: *mut i128 = var_278;
                            var_218 = nullptr;
                            let var_208_3: i64 = 0;
                            let var_200_4: i64 = 8;
                            var_1f8 = {0};
                            *var_1f0[8] = 8;
                            var_1e0 = {0};
                            *var_1d8[8] = 8;
                            let var_1c8_1: i64 = 0;
                            let var_180_1: i8 = r14;
                            let var_178_1: i128 = {0};
                            let rax_20: i8 = *r12.byte_offset(0x42);
                            let mut var_2bc_1: i8;
                            var_2bc_1 = rax_9;
                            
                            loop
                            {
                                _$LT$walkdir..IntoIter$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h918699d9fecda50e(&var_148, &var_218);
                                let rax_22: *mut i64 = var_148;
                                let mut var_298: i128;
                                let var_140: i64;
                                let var_130: i64;
                                let var_120: i128;
                                
                                if rax_22 == 2
                                {
                                    let zmm1_3: i128 = var_130;
                                    var_298 = var_120;
                                    var_2b8 = var_140;
                                    uu_cp::copydir::Entry::new::heaaef3e8d8dce243(&var_288, &i_1, 
                                        zmm1_3, *zmm1_3[8], rax_20 != 0);
                                    let rax_24: *mut i64 = var_288;
                                    let mut rax_25: *mut i64;
                                    
                                    if rax_24 == -0x8000000000000000
                                    {
                                        rax_25 = 7;
                                    }
                                    else
                                    {
                                        let var_240: i64;
                                        let var_38_1: i64 = var_240;
                                        let var_48_1: i128 = var_250;
                                        let var_58_1: i128 = var_260;
                                        let var_68_1: i128 = var_270;
                                        let var_78_1: i128 = var_280;
                                        let mut var_80: *mut i64 = rax_24;
                                        uu_cp::copydir::copy_direntry::he742c4f146ad7097(&var_288, 
                                            arg2, &var_80, arg7, arg8, var_2bc_1, arg9, arg10);
                                        rax_25 = var_288;
                                        
                                        if rax_25 != 0xd
                                        {
                                            arg1[7] = var_250;
                                            *arg1.byte_offset(0x28) = var_260;
                                            *arg1.byte_offset(0x18) = var_270;
                                            *arg1.byte_offset(8) = var_280;
                                        }
                                        else
                                        {
                                            core::ptr::drop_in_place$LT$walkdir..dent..DirEntry$GT$::h9d34ac2f24bfd23e(&var_2b8);
                                            continue;
                                        }
                                    }
                                    
                                    *arg1 = rax_25;
                                    core::ptr::drop_in_place$LT$walkdir..dent..DirEntry$GT$::h9d34ac2f24bfd23e(&var_2b8);
                                    core::ptr::drop_in_place$LT$walkdir..IntoIter$GT$::h27f2d4fc927cd168(&var_218);
                                }
                                else if rax_22 == 3
                                {
                                    core::ptr::drop_in_place$LT$walkdir..IntoIter$GT$::h27f2d4fc927cd168(&var_218);
                                    
                                    if r14_2 == 0
                                    {
                                        uu_cp::copy_attributes::h0ca124c6c7245f78(&var_218, arg3, 
                                            arg4, var_160, var_158, var_220_1);
                                        let rax_30: *mut *mut c_void = var_218;
                                        
                                        if rax_30 == 0xd
                                        {
                                            goto 'label_50f380;
                                        }
                                        
                                        arg1[7] = var_1e0;
                                        *arg1.byte_offset(0x28) = var_1f0;
                                        *arg1.byte_offset(0x18) = var_200_4;
                                        *arg1.byte_offset(8) = var_210;
                                        *arg1 = rax_30;
                                    }
                                    else
                                    {
                                        let mut rax_26: i64;
                                        let mut rdx_15: i64;
                                        rax_26 = std::path::Path::file_name::h79ecbb7850a9c7f3(
                                            arg3, arg4);
                                        
                                        if rax_26 == 0
                                        {
                                            core::option::unwrap_failed::h0e11329e76906eaa();
                                            /* no return */
                                        }
                                        
                                        std::path::Path::join::h58957b2d6fcd4dce(&var_238, var_160, 
                                            var_158, rax_26);
                                        let var_228: i64;
                                        uu_cp::copy_attributes::h0ca124c6c7245f78(&var_218, arg3, 
                                            arg4, *var_238[8], var_228, var_220_1);
                                        let rax_27: *mut *mut c_void = var_218;
                                        
                                        if rax_27 != 0xd
                                        {
                                            arg1[7] = var_1e0;
                                            *arg1.byte_offset(0x28) = var_1f0;
                                            *arg1.byte_offset(0x18) = var_200_4;
                                            *arg1.byte_offset(8) = var_210;
                                            *arg1 = rax_27;
                                            core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::ha8df8090ff0f5f1e(&var_238);
                                        }
                                        else
                                        {
                                            uu_cp::aligned_ancestors::h4cf131ef21f6aa74(&var_218, 
                                                arg3, arg4, *var_238[8]);
                                            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h6511090ed0ef25d3(&var_148, &var_218);
                                            _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h109fcabe2eb45d25(&var_288, &var_148);
                                            let mut rsi_28: *mut i64 = var_288;
                                            
                                            if rsi_28 == 0
                                            {
                                                'label_50f36e:
                                                core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$$LP$$RF$std..path..Path$C$$RF$std..path..Path$RP$$GT$$GT$::h0c6e777e5bffd2a5(&var_148);
                                                core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::ha8df8090ff0f5f1e(&var_238);
                                                'label_50f380:
                                                *arg1 = 0xd;
                                                core::ptr::drop_in_place$LT$uu_cp..copydir..Context$GT$::h0379bb3a1fe34402(&i_1);
                                                break;
                                            }
                                            
                                            loop
                                            {
                                                uucore::features::fs::canonicalize::hb17a5541a57984e7(&var_2d8, rsi_28, var_280, 0, 1);
                                                
                                                if var_2d8 == -0x8000000000000000
                                                {
                                                    core::ptr::drop_in_place$LT$core..result..Result$LT$std..path..PathBuf$C$std..io..error..Error$GT$$GT$::hc3882598e48cbc71(&var_2d8);
                                                }
                                                else
                                                {
                                                    *var_2b0[8] = var_2c8;
                                                    var_2b8 = var_2d8;
                                                    uu_cp::copy_attributes::h0ca124c6c7245f78(
                                                        &var_218, var_2b0, var_2c8, var_278, 
                                                        var_270, var_220_1);
                                                    let rax_28: *mut *mut c_void = var_218;
                                                    
                                                    if rax_28 != 0xd
                                                    {
                                                        arg1[7] = var_1e0;
                                                        *arg1.byte_offset(0x28) = var_1f0;
                                                        *arg1.byte_offset(0x18) = var_200_4;
                                                        *arg1.byte_offset(8) = var_210;
                                                        *arg1 = rax_28;
                                                        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::ha8df8090ff0f5f1e(&var_2b8);
                                                        
                                                        if var_2d8 == -0x8000000000000000
                                                        {
                                                            core::ptr::drop_in_place$LT$core..result..Result$LT$std..path..PathBuf$C$std..io..error..Error$GT$$GT$::hc3882598e48cbc71(&var_2d8);
                                                        }
                                                        
                                                        core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$$LP$$RF$std..path..Path$C$$RF$std..path..Path$RP$$GT$$GT$::h0c6e777e5bffd2a5(&var_148);
                                                        break;
                                                    }
                                                    
                                                    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::ha8df8090ff0f5f1e(&var_2b8);
                                                    
                                                    if var_2d8 == -0x8000000000000000
                                                    {
                                                        core::ptr::drop_in_place$LT$core..result..Result$LT$std..path..PathBuf$C$std..io..error..Error$GT$$GT$::hc3882598e48cbc71(&var_2d8);
                                                    }
                                                }
                                                
                                                _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h109fcabe2eb45d25(&var_288, &var_148);
                                                rsi_28 = var_288;
                                                
                                                if rsi_28 == 0
                                                {
                                                    goto 'label_50f36e;
                                                }
                                            }
                                            
                                            core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::ha8df8090ff0f5f1e(&var_238);
                                        }
                                    }
                                }
                                else
                                {
                                    var_288 = rax_22;
                                    var_260 = var_120;
                                    var_270 = var_130;
                                    var_280 = var_140;
                                    let var_110: i64;
                                    var_250 = var_110;
                                    let mut rax_23: i64;
                                    let mut rdx_12: i64;
                                    rax_23 = uucore::util_name::h60d842bf27b05e82();
                                    var_2d8 = rax_23;
                                    *var_2d8[8] = rdx_12;
                                    var_238 = &var_2d8;
                                    *var_238[8] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h52491f3ba70e88c7;
                                    var_2b8 = &data_5b63a0;
                                    var_2b0 = 2;
                                    var_298 = 0;
                                    *var_2b0[8] = &var_238;
                                    let var_2a0_1: i64 = 1;
                                    std::io::stdio::_eprint::hcdfeec148c7134f7(&var_2b8);
                                    var_2d8 = &var_288;
                                    *var_2d8[8] = _$LT$walkdir..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h133db1da499347d6;
                                    var_2b8 = &data_5b62c0;
                                    var_2b0 = 2;
                                    var_298 = 0;
                                    *var_2b0[8] = &var_2d8;
                                    let var_2a0_2: i64 = 1;
                                    std::io::stdio::_eprint::hcdfeec148c7134f7(&var_2b8);
                                    core::ptr::drop_in_place$LT$walkdir..error..Error$GT$::he082ec0f4c9f2f1f(&var_288);
                                    continue;
                                }
                                core::ptr::drop_in_place$LT$uu_cp..copydir..Context$GT$::h0379bb3a1fe34402(&i_1);
                                break;
                            }
                        }
                        else
                        {
                            var_2b8 = var_210;
                            var_148 = &var_2b8;
                            let var_140_2: fn(arg1: *mut i64, arg2: *mut i64) -> i64 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h59fe8285afbb4739;
                            var_288 = &data_5b6390;
                            let var_280_2: i64 = 1;
                            let var_268_1: i64 = 0;
                            let var_278_2: *mut *mut i64 = &var_148;
                            var_270 = 1;
                            let mut var_98: i128;
                            core::option::Option$LT$T$GT$::map_or_else::h805a87bba4bea7c2(&var_98, 
                                &var_288);
                            let var_88: i64;
                            arg1[3] = var_88;
                            *arg1.byte_offset(8) = var_98;
                            *arg1 = 4;
                            core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h414e413090760199(var_2b8);
                        }
                        
                        rdi_31 = &var_168;
                    }
                    else
                    {
                        std::path::Path::join::hb28666e9f3e91503(&var_2d8, arg5, arg6, rax_6);
                        uu_cp::copydir::build_dir::h8f7105fdecd19cc9(&var_218, r12[6], 
                            *r12.byte_offset(0x32), &var_2d8);
                        let rax_7: *mut *mut c_void = var_218;
                        
                        if rax_7 == 0xd
                        {
                            if r12[9] != 0
                            {
                                std::path::Path::join::hb28666e9f3e91503(&var_2b8, arg5, arg6, 
                                    arg3);
                                uu_cp::aligned_ancestors::h4cf131ef21f6aa74(&var_218, arg3, arg4, 
                                    var_2b0);
                                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h6511090ed0ef25d3(&var_148, &var_218);
                                _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h109fcabe2eb45d25(&i_1, &var_148);
                                
                                for let mut i: *mut *mut i64 = i_1; i != 0; i = i_1
                                {
                                    let mut i_2: *mut *mut i64 = i;
                                    let var_100: i64;
                                    let var_a0_1: i64 = var_100;
                                    var_238 = var_f8;
                                    var_288 = &i_2;
                                    var_280 = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h5a3c32fa16876e76;
                                    var_278 = &var_238;
                                    var_270 = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h5a3c32fa16876e76;
                                    var_218 = &data_5b6360;
                                    var_210 = 3;
                                    var_1f8 = 0;
                                    var_208 = &var_288;
                                    let var_200_3: i64 = 2;
                                    std::io::stdio::_print::he918bceb0c89db46(&var_218);
                                    _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h109fcabe2eb45d25(&i_1, &var_148);
                                }
                                
                                core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$$LP$$RF$std..path..Path$C$$RF$std..path..Path$RP$$GT$$GT$::h0c6e777e5bffd2a5(&var_148);
                                core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::ha8df8090ff0f5f1e(&var_2b8);
                            }
                            
                            var_158 = var_2c8;
                            var_168 = var_2d8;
                            goto 'label_50ebb3;
                        }
                        
                        arg1[7] = var_1e0;
                        *arg1.byte_offset(0x28) = var_1f0;
                        let var_200: i64;
                        *arg1.byte_offset(0x18) = var_200;
                        *arg1.byte_offset(8) = var_210;
                        *arg1 = rax_7;
                        rdi_31 = &var_2d8;
                    }
                    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::ha8df8090ff0f5f1e(rdi_31);
                }
                else
                {
                    i_1 = 1;
                    let var_100_2: *mut i8 = arg3;
                    let var_f8_1: u64 = arg4;
                    let var_f0_1: i8 = 1;
                    let mut rax_4: i64;
                    let mut rdx_2: i64;
                    rax_4 = std::path::Path::file_name::h79ecbb7850a9c7f3(arg3, arg4);
                    
                    if rax_4 == 0
                    {
                        core::option::unwrap_failed::h0e11329e76906eaa();
                        /* no return */
                    }
                    
                    std::path::Path::join::h58957b2d6fcd4dce(&var_2b8, arg5, arg6, rax_4);
                    var_288 = 1;
                    var_280 = var_2b0;
                    let var_270_2: i8 = 1;
                    var_148 = &i_1;
                    let var_140_1: fn(arg1: *mut c_void, arg2: *mut c_void) -> i64 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                    let var_138_1: *mut i64 = &var_288;
                    let var_130_1: fn(arg1: *mut c_void, arg2: *mut c_void) -> i64 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                    var_218 = &data_5b6340;
                    let var_210_2: i64 = 2;
                    let var_1f8_2: i64 = 0;
                    let var_208_2: *mut *mut i64 = &var_148;
                    let var_200_2: i64 = 2;
                    core::option::Option$LT$T$GT$::map_or_else::h805a87bba4bea7c2(&var_2d8, 
                        &var_218);
                    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::ha8df8090ff0f5f1e(&var_2b8);
                    arg1[3] = var_2c8;
                    *arg1.byte_offset(8) = var_2d8;
                    *arg1 = 4;
                }
            }
        }
    }
    else
    {
        r12 = arg7;
        
        if std::path::Path::is_symlink::h6ab8b58756c51c6b(arg3, arg4) == 0
        {
            goto 'label_50e791;
        }
        
        uu_cp::copy_file::h3a721c0b700148ba(arg1, arg2, arg3, arg4, arg5, arg6, r12, arg8, arg9, 
            arg10, arg11);
    }
    
    arg1
}
