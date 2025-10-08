
  fn uu_cp::handle_copy_mode::h7a192efd6f504098(arg1: *mut i64, arg2: i64, arg3: u64, arg4: *mut i8, arg5: *mut i128, arg6: *mut c_void, arg7: u64, arg8: i64, arg9: *mut c_void, arg10: *mut *mut i8, arg11: i8, arg12: i8, arg13: i8) -> *mut i128

{
    let mut result_7: *mut i64 = arg1;
    let mut r14: i64 = -0x7ffffffffffffff4;
    let rbx: i32 = 0xf000 & *arg9.byte_offset(0x38);
    let mut var_278_1: u64;
    let mut var_270_1: i64;
    let mut var_268_1: i8;
    let mut var_260_1: i8;
    let mut var_258_1: *mut *mut i8;
    let mut var_250_1: i8;
    let mut var_220: i32;
    let mut result_2: i32;
    let mut var_210: *mut *mut *mut *mut i8;
    let var_208: i64;
    let var_1f8: i128;
    let mut var_170: *mut *mut i8;
    let mut var_f8: *mut i8;
    let mut result_4: *mut i128;
    let mut result: *mut i128;
    let mut rcx_2: *mut i8;
    let mut rdi_9: *mut i64;
    let mut r9_2: *mut c_void;
    
    match *arg6.byte_offset(0x67)
    {
        0 =>
        {
            let var_240_1: u64 = arg5;
            std::fs::metadata::h87a95e5fd9b91fc7(&var_220, arg4);
            let rbx_1: i32 = var_220;
            core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::he37bb0d8b54bbf24(&var_220);
            
            if rbx_1 == 2
            {
                'label_4a37ec:
                let mut rax_9: *mut *mut [i8; 0xe8];
                let mut rbx_6: u64;
                
                if *arg6.byte_offset(0x59) == 0 && (arg11 == 0 || *arg6.byte_offset(0x58) != 1)
                {
                    rbx_6 = var_240_1;
                    rax_9 = std::fs::hard_link::h192ee4d7eeae67ad(arg2, arg3, arg4);
                }
                else if std::path::Path::is_symlink::h004cfac91d04dbc0(arg2, arg3) == 0
                {
                    rbx_6 = var_240_1;
                    rax_9 = std::fs::hard_link::h192ee4d7eeae67ad(arg2, arg3, arg4);
                }
                else
                {
                    uucore::features::fs::canonicalize::h2a46952db6a00ca6(&var_220, arg2, arg3, 2, 
                        1);
                    let mut var_48: ();
                    core::result::Result$LT$T$C$E$GT$::unwrap::h71961d5fd3e5dea1(&var_48, &var_220);
                    rbx_6 = var_240_1;
                    rax_9 = std::fs::hard_link::h54c195aab9fb1046(&var_48, arg4);
                }
                
                let var_150_1: *mut *mut [i8; 0xe8] = rax_9;
                let mut rax_14: *const i8;
                let mut rdx_10: i64;
                rax_14 = uucore::features::fs::get_filename::hf3decfe9888d2f9f(arg4, rbx_6);
                
                if rax_14 == 0
                {
                    rdx_10 = 0x11;
                }
                
                let mut rbx_7: *const i8 = "invalid file namecannot create s…";
                
                if rax_14 == 0
                {
                    rax_14 = "invalid file namecannot create s…";
                }
                
                var_170 = nullptr;
                let var_168_1: *const i8 = rax_14;
                let var_160_1: i64 = rdx_10;
                let var_158_1: i8 = 1;
                let mut rax_15: *mut i8;
                let mut result_5: *mut i128;
                rax_15 = uucore::features::fs::get_filename::hf3decfe9888d2f9f(arg2, arg3);
                
                if rax_15 == 0
                {
                    result_5 = 0x11;
                }
                
                if rax_15 != 0
                {
                    rbx_7 = rax_15;
                }
                
                var_f8 = nullptr;
                let var_f0_1: *const i8 = rbx_7;
                result_4 = result_5;
                let var_e0_1: i8 = 1;
                let mut var_118: *mut *mut *mut i8 = &var_170;
                let var_110_1: fn(arg1: *mut i32, arg2: *mut i64) -> i64 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                let var_108_1: *mut *mut i8 = &var_f8;
                let var_100_1: fn(arg1: *mut i32, arg2: *mut i64) -> i64 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                var_220 = &data_55ec90;
                result_2 = 2;
                let var_200_1: i64 = 0;
                var_210 = &var_118;
                let var_208_1: i64 = 2;
                let mut result_3: *mut i128;
                core::option::Option$LT$T$GT$::map_or_else::ha891a5b84284deb4(&result_3, &var_220);
                
                if rax_9 == 0
                {
                    result = core::ptr::drop_in_place$LT$$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$u20$as$u20$quick_error..ResultExt$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$..context$LT$alloc..string..String$GT$..$u7b$$u7b$closure$u7d$$u7d$$GT$::h92d6353b521410cd(&result_3);
                    result_7[1] = 0;
                    *result_7 = -0x7ffffffffffffff4;
                }
                else
                {
                    result = result_3;
                    
                    if result == -0x8000000000000000
                    {
                        result_7[1] = 0;
                        *result_7 = -0x7ffffffffffffff4;
                    }
                    else
                    {
                        let var_128: i128;
                        *result_7.byte_offset(0x10) = var_128;
                        *result_7 = -0x7ffffffffffffffe;
                        result_7[1] = result;
                        result_7[4] = rax_9;
                    }
                }
            }
            else
            {
                uucore::features::backup_control::get_backup_path::hd1136aea6807a071(&var_f8, 
                    *arg6.byte_offset(0x65), arg4, var_240_1, *arg6.byte_offset(8), 
                    *arg6.byte_offset(0x10));
                
                if var_f8 != -0x8000000000000000
                {
                    let var_f0: i64;
                    uu_cp::backup_dest::hdc34a5fbd97a8cc7(&var_220, arg4, var_240_1, var_f0, 
                        result_4, std::path::Path::is_symlink::h004cfac91d04dbc0(arg4, var_240_1));
                    let rax_18: i64 = var_220;
                    let mut var_148: i128 = result_2;
                    
                    if rax_18 != -0x7ffffffffffffff4
                    {
                        result_7[6] = *var_1f8[8];
                        let var_200: i64;
                        *result_7.byte_offset(0x20) = var_200;
                        result_7[3] = var_208;
                        *result_7.byte_offset(8) = var_148;
                        *result_7 = rax_18;
                        return 
                            core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h80f4faf291cc80af(
                            &var_f8);
                    }
                    
                    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h80f4faf291cc80af(&var_148);
                    let rax_19: i64 = std::fs::remove_file::h19277b2d7a4f8643(arg4);
                    
                    if rax_19 != 0
                    {
                        *result_7 = -0x7fffffffffffffff;
                        result_7[1] = rax_19;
                        return 
                            core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h80f4faf291cc80af(
                            &var_f8);
                    }
                    
                    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h80f4faf291cc80af(&var_f8);
                }
                
                if _$LT$uu_cp..OverwriteMode$u20$as$u20$core..cmp..PartialEq$GT$::eq::h7b31402d4d005f5e(*arg6.byte_offset(0x54), *arg6.byte_offset(0x55)) == 0
                {
                    goto 'label_4a37ec;
                }
                
                result = std::fs::remove_file::h19277b2d7a4f8643(arg4);
                
                if result == 0
                {
                    goto 'label_4a37ec;
                }
                
                *result_7 = -0x7fffffffffffffff;
                result_7[1] = result;
            }
        }
        1 =>
        {
            std::fs::metadata::h87a95e5fd9b91fc7(&var_220, arg4);
            let rbx_4: i32 = var_220;
            core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::he37bb0d8b54bbf24(&var_220);
            
            if rbx_4 == 2
            {
                'label_4a36a4:
                uu_cp::symlink_file::haf96ef023560a2f2(&var_220, arg2, arg3, arg4, arg5, arg10);
                result = var_220;
                
                if result != -0x7ffffffffffffff4
                {
                    goto 'label_4a36d0;
                }
                
                result_7[1] = 0;
                *result_7 = -0x7ffffffffffffff4;
            }
            else
            {
                if _$LT$uu_cp..OverwriteMode$u20$as$u20$core..cmp..PartialEq$GT$::eq::h7b31402d4d005f5e(*arg6.byte_offset(0x54), *arg6.byte_offset(0x55)) == 0
                {
                    goto 'label_4a36a4;
                }
                
                result = std::fs::remove_file::h19277b2d7a4f8643(arg4);
                
                if result == 0
                {
                    goto 'label_4a36a4;
                }
                
                *result_7 = -0x7fffffffffffffff;
                result_7[1] = result;
            }
        }
        2 =>
        {
            rdi_9 = &var_220;
            rcx_2 = arg4;
            r9_2 = arg6;
            var_250_1 = arg13;
            var_258_1 = arg10;
            var_260_1 = arg12;
            var_268_1 = rbx == 0xa000;
            var_270_1 = arg8;
            var_278_1 = arg7;
            'label_4a3546:
            uu_cp::copy_helper::hc581f8ab4f6e163d(rdi_9, arg2, arg3, rcx_2, arg5, r9_2, var_278_1, 
                var_270_1, var_268_1, var_260_1, var_258_1, var_250_1);
            result = var_220;
            
            if result != -0x7ffffffffffffff4
            {
                'label_4a36d0:
                *result_7.byte_offset(0x28) = var_1f8;
                *result_7.byte_offset(0x18) = var_208;
                *result_7.byte_offset(8) = result_2;
                *result_7 = result;
            }
            else
            {
                result_7[1] = 0;
                *result_7 = r14;
            }
        }
        3 =>
        {
            let result_1: *mut *mut i128 = result_7;
            std::fs::metadata::h87a95e5fd9b91fc7(&var_220, arg4);
            let r14_1: i32 = var_220;
            core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::he37bb0d8b54bbf24(&var_220);
            
            if r14_1 != 2
            {
                result_7 = result_1;
                r14 = -0x7ffffffffffffff4;
                
                match *arg6.byte_offset(0x66)
                {
                    0 =>
                    {
                        rdi_9 = &var_220;
                        rcx_2 = arg4;
                        r9_2 = arg6;
                        var_250_1 = arg13;
                        var_258_1 = arg10;
                        var_260_1 = arg12;
                        var_268_1 = rbx == 0xa000;
                        var_270_1 = arg8;
                        var_278_1 = arg7;
                        goto 'label_4a3546;
                    }
                    1 =>
                    {
                        result = arg5;
                        
                        if *arg6.byte_offset(0x5f) == 0
                        {
                            result_7[1] = 1;
                        }
                        else
                        {
                            var_f8 = 1;
                            let var_f0_3: *mut i8 = arg4;
                            result_4 = result;
                            let var_e0_2: i8 = 1;
                            var_170 = &var_f8;
                            let var_168_3: fn(arg1: *mut i32, arg2: *mut i64) -> i64 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                            var_220 = &data_55eb08;
                            result_2 = 2;
                            let var_200_3: i64 = 0;
                            var_210 = &var_170;
                            let var_208_3: i64 = 1;
                            result = std::io::stdio::_print::h5e446ff973c02de6(&var_220);
                            result_7[1] = 1;
                        }
                        
                        *result_7 = r14;
                    }
                    2 =>
                    {
                        std::fs::symlink_metadata::h814bc3976f7d40c5(&var_220, arg4);
                        let r14_3: *mut i8 = var_220;
                        let mut rcx_8: i64 = result_2;
                        
                        if r14_3 != 2
                        {
                            memcpy(&result_4, &var_210, 0xa0);
                            var_f8 = r14_3;
                            let var_f0_4: i64 = rcx_8;
                            std::fs::Metadata::modified::he3c19aa683c05d81(&var_220, arg9);
                            let r14_4: i64 = var_220;
                            
                            if result_2 != 0x3b9aca00
                            {
                                std::fs::Metadata::modified::he3c19aa683c05d81(&var_220, &var_f8);
                                result = result_2;
                                rcx_8 = var_220;
                                
                                if result == 0x3b9aca00
                                {
                                    goto 'label_4a3a4c;
                                }
                                
                                let mut result_6: *mut *mut i128;
                                
                                if r14_4 == rcx_8
                                {
                                    result_6 = result_1;
                                    r14 = -0x7ffffffffffffff4;
                                    
                                    if result_2 > result
                                    {
                                        'label_4a3c9c:
                                        uu_cp::OverwriteMode::verify::hcf2d8eaa11706b21(&var_220, 
                                            *arg6.byte_offset(0x54), arg4, arg5, 
                                            *arg6.byte_offset(0x5f));
                                        result = var_220;
                                        
                                        if result != -0x7ffffffffffffff4
                                        {
                                            'label_4a3d4f:
                                            *result_6.byte_offset(0x28) = var_1f8;
                                            *result_6.byte_offset(0x18) = var_208;
                                            *result_6.byte_offset(8) = result_2;
                                            *result_6 = result;
                                        }
                                        else
                                        {
                                            uu_cp::copy_helper::hc581f8ab4f6e163d(&var_220, arg2, 
                                                arg3, arg4, arg5, arg6, arg7, arg8, rbx == 0xa000, 
                                                arg12, arg10, arg13);
                                            result = var_220;
                                            
                                            if result != -0x7ffffffffffffff4
                                            {
                                                goto 'label_4a3d4f;
                                            }
                                            
                                            result_7 = result_6;
                                            result_7[1] = 0;
                                            *result_7 = r14;
                                        }
                                    }
                                    else
                                    {
                                        result_6[1] = 1;
                                        *result_6 = -0x800000000000000c;
                                    }
                                }
                                else
                                {
                                    result_6 = result_1;
                                    r14 = -0x7ffffffffffffff4;
                                    
                                    if r14_4 > rcx_8
                                    {
                                        goto 'label_4a3c9c;
                                    }
                                    
                                    result_6[1] = 1;
                                    *result_6 = -0x800000000000000c;
                                }
                            }
                            else
                            {
                                result = result_1;
                                *result = -0x7fffffffffffffff;
                                *result.byte_offset(8) = r14_4;
                            }
                        }
                        else
                        {
                            'label_4a3a4c:
                            result = result_1;
                            *result = -0x7fffffffffffffff;
                            *result.byte_offset(8) = rcx_8;
                        }
                    }
                    3 =>
                    {
                        var_f8 = arg4;
                        let var_f0_2: *mut i128 = arg5;
                        var_170 = &var_f8;
                        let var_168_2: fn(arg1: *mut i64, arg2: i64) -> u64 = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::hdc1404ac42f64ec9;
                        var_220 = &data_55ecb0;
                        result_2 = 2;
                        let var_200_2: i64 = 0;
                        var_210 = &var_170;
                        let var_208_2: i64 = 1;
                        result = core::option::Option$LT$T$GT$::map_or_else::ha891a5b84284deb4(
                            &result_7[1], &var_220);
                        *result_7 = -0x7ffffffffffffffd;
                    }
                }
            }
            else
            {
                uu_cp::copy_helper::hc581f8ab4f6e163d(&var_220, arg2, arg3, arg4, arg5, arg6, arg7, 
                    arg8, rbx == 0xa000, arg12, arg10, arg13);
                result = var_220;
                result_7 = result_1;
                
                if result != -0x7ffffffffffffff4
                {
                    goto 'label_4a36d0;
                }
                
                result_7[1] = 0;
                *result_7 = -0x7ffffffffffffff4;
            }
        }
        4 =>
        {
            var_220 = 0x1b600000000;
            let mut var_218: i32 = 0;
            let mut var_214_1: i16 = 0;
            *var_218[1] = 1;
            var_214_1 = 1;
            std::fs::OpenOptions::open::h9d0227b1746e74f9(&var_f8, &var_220, arg4);
            result = core::ptr::drop_in_place$LT$std..fs..File$GT$::h35b109c6d943b47b(
                core::result::Result$LT$T$C$E$GT$::unwrap::h46a0ee1c7738c33e(&var_f8));
            result_7[1] = 0;
            *result_7 = r14;
        }
    }
    
    result
}
