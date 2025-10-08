
  fn uu_mv::rename::h274fbdeb4e433295(arg1: i64, arg2: u64, arg3: i64, arg4: u64, arg5: *mut c_void, arg6: *mut *mut c_void) -> *mut *mut c_void

{
    let mut result_23: *mut i128 = -0x8000000000000000;
    let mut result_14: *mut i128;
    std::fs::metadata::h12bb7891128f5212(&result_14, arg3);
    let result_17: i32 = result_14;
    let mut result_16: *mut *mut c_void = core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h6bf03d231ff2ee2d(&result_14);
    let mut result: *mut *mut c_void;
    let mut result_9: *mut *mut c_void;
    let mut result_10: *mut *mut c_void;
    let mut var_2b8: i32;
    let mut var_2a0: u64;
    let mut result_1: *mut *mut c_void;
    let mut var_288: *mut *mut *mut c_void;
    let mut result_2: *mut *mut *mut c_void;
    let mut var_1d8: *mut *mut i128;
    let mut var_1d0: i8;
    let mut result_21: *mut *mut c_void;
    let mut var_100: u64;
    let mut rax_7: u32;
    let mut result_7: *mut c_void;
    let mut result_22: *mut i128;
    
    if result_17 != 2
    {
        match *arg5.byte_offset(0x37)
        {
            0 =>
            {
                rax_7 = *arg5.byte_offset(0x35);
                
                if rax_7 == 0
                {
                    'label_48d465:
                    
                    if *arg5.byte_offset(0x34) == 0
                    {
                        result = nullptr;
                    }
                    else
                    {
                        result_2 = 1;
                        let var_1e0_8: i64 = arg3;
                        var_1d8 = arg4;
                        let var_1d0_4: i8 = 1;
                        result_21 = &result_2;
                        let var_108_8: fn(arg1: *mut i32, arg2: *mut i64) -> i64 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                        result_14 = &data_5419a0;
                        let var_290_7: i64 = 2;
                        let var_278_9: i64 = 0;
                        var_288 = &result_21;
                        let var_280_9: i64 = 1;
                        result_16 = std::io::stdio::_print::h5e446ff973c02de6(&result_14);
                        result = nullptr;
                    }
                }
                else
                {
                    'label_48cba4:
                    let mut rax_11: i8;
                    
                    if rax_7 == 1
                    {
                        let mut result_12: *mut *mut *mut c_void;
                        let mut rdx_4: i64;
                        result_12 = uucore::util_name::h074417a1e6395129();
                        result_2 = result_12;
                        let var_1e0_1: i64 = rdx_4;
                        result_21 = &result_2;
                        let var_108_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
                            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h553019366b827b87;
                        result_14 = &data_541650;
                        let var_290: i64 = 2;
                        let var_278_1: i64 = 0;
                        var_288 = &result_21;
                        let var_280_1: i64 = 1;
                        std::io::stdio::_eprint::h57899770eacec2ad(&result_14);
                        result_2 = 1;
                        let var_1e0_2: i64 = arg3;
                        var_1d8 = arg4;
                        var_1d0 = 1;
                        result_21 = &result_2;
                        let var_108_2: fn(arg1: *mut i32, arg2: *mut i64) -> i64 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                        result_14 = &data_5419d0;
                        let var_290_1: i64 = 2;
                        let var_278_2: i64 = 0;
                        var_288 = &result_21;
                        let mut var_280_2: i64 = 1;
                        std::io::stdio::_eprint::h57899770eacec2ad(&result_14);
                        result_14 = &data_541690;
                        result_1 = 1;
                        var_288 = 8;
                        var_280_2 = {0};
                        std::io::stdio::_eprint::h57899770eacec2ad(&result_14);
                        result_14 = &std::io::stdio::stderr::INSTANCE::h8cff5a7d41eb89e3;
                        _$LT$std..io..stdio..Stderr$u20$as$u20$std..io..Write$GT$::flush::h73119290360117e3(&result_14);
                        rax_11 = uucore::read_yes::h67cb9532536454c0();
                    }
                    
                    if rax_7 == 1 && rax_11 == 0
                    {
                        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h19a54565959f0f6f(&result_2, 1, 0);
                        var_288 = var_1d8;
                        result_14 = result_2;
                        result_7 = std::io::error::Error::_new::hbf6e5d7f23cac6f9(0x28, 
                            alloc::boxed::Box$LT$T$GT$::new::hfa7a333923b705a4(&result_14), 
                            &data_541778);
                        result = result_7;
                    }
                    else
                    {
                        core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::h69e481ccc24b6e8d(-0x8000000000000000, 
                            uucore::features::backup_control::get_backup_path::hd1136aea6807a071(
                                &result_14, *arg5.byte_offset(0x36), arg3, arg4, 
                                *arg5.byte_offset(8), *arg5.byte_offset(0x10)));
                        let result_19: *mut i128 = result_14;
                        let rcx_2: u64 = var_288;
                        result_9 = result_1;
                        var_2a0 = rcx_2;
                        
                        if result_19 == -0x8000000000000000
                        {
                            goto 'label_48cac3;
                        }
                        
                        let result_6: *mut *mut c_void =
                            uu_mv::rename_with_fallback::h3652858bdc29b866(arg3, arg4, result_1, 
                            rcx_2, arg6);
                        result = result_6;
                        
                        if result_6 == 0
                        {
                            result_22 = result_19;
                            goto 'label_48cad4;
                        }
                        
                        result_23 = result_19;
                        result_16 = result_9;
                    }
                }
            }
            1 =>
            {
                if *arg5.byte_offset(0x34) == 1
                {
                    result_2 = 1;
                    let var_1e0_6: i64 = arg3;
                    var_1d8 = arg4;
                    let var_1d0_2: i8 = 1;
                    result_21 = &result_2;
                    let var_108_5: fn(arg1: *mut i32, arg2: *mut i64) -> i64 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                    result_14 = &data_5419a0;
                    let var_290_4: i64 = 2;
                    let var_278_6: i64 = 0;
                    var_288 = &result_21;
                    let var_280_6: i64 = 1;
                    result_16 = std::io::stdio::_print::h5e446ff973c02de6(&result_14);
                }
                
                result = nullptr;
            }
            2 =>
            {
                result_16 = std::fs::metadata::h12bb7891128f5212(&result_14, arg1);
                let result_18: *mut i128 = result_14;
                result = result_1;
                
                if result_18 != 2
                {
                    memcpy(&var_100, &var_288, 0xa0);
                    result_21 = result_18;
                    let result_3: *mut *mut c_void = result;
                    result_16 =
                        std::fs::Metadata::modified::he3c19aa683c05d81(&result_2, &result_21);
                    result = result_2;
                    let var_1e0: i32;
                    
                    if var_1e0 != 0x3b9aca00
                    {
                        var_2a0 = var_1e0;
                        result_16 = std::fs::metadata::h12bb7891128f5212(&result_14, arg3);
                        let result_13: *mut i128 = result_14;
                        let mut result_8: *mut *mut c_void = result_1;
                        
                        if result_13 != 2
                        {
                            memcpy(&var_1d8, &var_288, 0xa0);
                            result_2 = result_13;
                            let result_11: *mut *mut c_void = result_8;
                            result_16 = std::fs::Metadata::modified::he3c19aa683c05d81(&result_10, 
                                &result_2);
                            result_8 = result_10;
                        }
                        
                        if result_13 == 2 || var_2b8 == 0x3b9aca00
                        {
                            result = result_8;
                        }
                        else if result == result_8
                        {
                            if var_2a0 > var_2b8
                            {
                                'label_48d454:
                                rax_7 = *arg5.byte_offset(0x35);
                                
                                if rax_7 != 0
                                {
                                    goto 'label_48cba4;
                                }
                                
                                goto 'label_48d465;
                            }
                            
                            result = nullptr;
                        }
                        else
                        {
                            if result > result_8
                            {
                                goto 'label_48d454;
                            }
                            
                            result = nullptr;
                        }
                    }
                }
            }
            3 =>
            {
                result_2 = 1;
                let var_1e0_5: i64 = arg3;
                var_1d8 = arg4;
                let var_1d0_1: i8 = 1;
                result_21 = &result_2;
                let var_108_4: fn(arg1: *mut i32, arg2: *mut i64) -> i64 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                result_14 = &data_5419c0;
                let var_290_3: i64 = 1;
                let var_278_5: i64 = 0;
                var_288 = &result_21;
                let var_280_5: i64 = 1;
                let mut var_48: ();
                core::option::Option$LT$T$GT$::map_or_else::h26cd0638306e3785(&var_48, &result_14);
                result_7 = std::io::error::Error::_new::hbf6e5d7f23cac6f9(0x28, 
                    alloc::boxed::Box$LT$T$GT$::new::hfa7a333923b705a4(&var_48), &data_541778);
                result = result_7;
            }
        }
    }
    else
    {
        'label_48cac3:
        result_22 = -0x8000000000000000;
        'label_48cad4:
        std::fs::metadata::h12bb7891128f5212(&result_14, arg3);
        let result_20: i32 = result_14;
        core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h6bf03d231ff2ee2d(&result_14);
        
        if result_20 == 2
        {
            'label_48cb5f:
            let result_5: *mut *mut c_void =
                uu_mv::rename_with_fallback::h3652858bdc29b866(arg1, arg2, arg3, arg4, arg6);
            result = result_5;
            
            if result_5 == 0
            {
                if *arg5.byte_offset(0x31) == 0
                {
                    let mut rax_13: *mut c_void;
                    rax_13 = result_22 == -0x8000000000000000;
                    rax_13 = rax_13;
                    
                    if rax_13 == 0
                    {
                        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h7ff9893d52172353(
                            result_22, result_9);
                    }
                }
                else
                {
                    result = result_22 != -0x8000000000000000;
                    let mut var_130: i128;
                    
                    if result_22 == -0x8000000000000000
                    {
                        result_21 = 1;
                        let var_108_6: i64 = arg1;
                        var_100 = arg2;
                        let var_f8_2: i8 = 1;
                        result_2 = 1;
                        let var_1e0_7: i64 = arg3;
                        var_1d8 = arg4;
                        let var_1d0_3: i8 = 1;
                        result_10 = &result_21;
                        var_2b8 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                        let var_2b0_2: *mut *mut *mut *mut c_void = &result_2;
                        let var_2a8_1: fn(arg1: *mut i32, arg2: *mut i64) -> i64 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                        result_14 = &data_541a30;
                        let var_290_5: i64 = 2;
                        let var_278_7: i64 = 0;
                        var_288 = &result_10;
                        let var_280_7: i64 = 2;
                        core::option::Option$LT$T$GT$::map_or_else::h26cd0638306e3785(&var_130, 
                            &result_14);
                        result_2 = var_130;
                        let var_120: *mut *mut i128;
                        var_1d8 = var_120;
                        
                        if arg6 != 0
                        {
                            indicatif::multi::MultiProgress::suspend::h8665c0f9399b7cba(*arg6, 
                                &result_2);
                        }
                        else
                        {
                            'label_48d316:
                            result_21 = &result_2;
                            let var_108_7: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                            result_14 = &data_541a50;
                            let var_290_6: i64 = 2;
                            let var_278_8: i64 = 0;
                            var_288 = &result_21;
                            let var_280_8: i64 = 1;
                            std::io::stdio::_print::h5e446ff973c02de6(&result_14);
                        }
                    }
                    else
                    {
                        var_130 = 1;
                        *var_130[8] = arg1;
                        let var_120_1: u64 = arg2;
                        let var_118_1: i8 = 1;
                        result_10 = 1;
                        var_2b8 = arg3;
                        let var_2b0_1: u64 = arg4;
                        let mut var_2a8: i64;
                        var_2a8 = 1;
                        result_21 = 1;
                        let result_15: *mut *mut c_void = result_9;
                        var_100 = var_2a0;
                        let var_f8_1: i8 = 1;
                        result_14 = &var_130;
                        let var_290_2: fn(arg1: *mut i32, arg2: *mut i64) -> i64 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                        var_288 = &result_10;
                        let var_280_4: fn(arg1: *mut i32, arg2: *mut i64) -> i64 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                        let var_278_4: *mut *mut *mut c_void = &result_21;
                        let var_270_1: fn(arg1: *mut i32, arg2: *mut i64) -> i64 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                        result_2 = &data_5419f0;
                        let var_1e0_4: i64 = 4;
                        let var_1c8_1: i64 = 0;
                        var_1d8 = &result_14;
                        var_1d0 = 3;
                        let mut var_60: i128;
                        core::option::Option$LT$T$GT$::map_or_else::h26cd0638306e3785(&var_60, 
                            &result_2);
                        result_2 = var_60;
                        let var_50: *mut *mut i128;
                        var_1d8 = var_50;
                        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h7ff9893d52172353(
                            result_22, result_9);
                        
                        if arg6 == 0
                        {
                            goto 'label_48d316;
                        }
                        
                        indicatif::multi::MultiProgress::suspend::h8665c0f9399b7cba(*arg6, 
                            &result_2);
                    }
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h8db761034a9103d6(
                        &result_2);
                    
                    if (result_22 == -0x8000000000000000 | result) == 0
                    {
                        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h7ff9893d52172353(
                            result_22, result_9);
                    }
                }
                
                return nullptr;
            }
        }
        else
        {
            if std::path::Path::is_dir::h02edbc48c38d7d9e(arg3, arg4) == 0
            {
                goto 'label_48cb5f;
            }
            
            if std::path::Path::is_dir::h02edbc48c38d7d9e(arg1, arg2) == 0
            {
                goto 'label_48cb5f;
            }
            
            if uu_mv::is_empty_dir::h380343aaab058219(arg3) == 0
            {
                _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h19a54565959f0f6f(&result_2, "Directory not empty (backup: ){m…", 0x13);
                var_288 = var_1d8;
                result_14 = result_2;
                result = std::io::error::Error::_new::hbf6e5d7f23cac6f9(0x28, 
                    alloc::boxed::Box$LT$T$GT$::new::hfa7a333923b705a4(&result_14), &data_541778);
            }
            else
            {
                let result_4: *mut *mut c_void = std::fs::remove_dir::h83cddb2f81627111(arg3);
                result = result_4;
                
                if result_4 == 0
                {
                    goto 'label_48cb5f;
                }
            }
        }
        
        result_23 = result_22;
        result_16 = result_9;
    }
    core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::h69e481ccc24b6e8d(result_23, result_16);
    result
}
