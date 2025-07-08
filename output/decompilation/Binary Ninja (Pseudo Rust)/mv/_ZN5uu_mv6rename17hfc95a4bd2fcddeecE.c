
  fn uu_mv::rename::hfc95a4bd2fcddeec(arg1: *mut i8, arg2: u64, arg3: *mut i8, arg4: *mut i32, arg5: *mut c_void, arg6: *mut i64) -> *mut *mut c_void

{
    let mut var_318: i64 = -0x8000000000000000;
    let mut rax: i32;
    rax = 1;
    let var_32c: i32 = rax;
    let mut var_2c8: i32;
    std::fs::metadata::h1d9ddf5324749f9a(&var_2c8, arg3);
    let mut result: *mut *mut c_void;
    let mut var_308: u64;
    let mut result_8: *mut *const *mut *mut [i8; 0x41];
    let mut var_2e8: i32;
    let mut var_2b8: *mut i64;
    let mut result_2: *mut *mut [i8; 0x41];
    let mut var_208: *mut i32;
    let mut var_200: i8;
    let mut var_148: *mut c_void;
    let mut var_128: *const *mut *mut [i8; 0x41];
    let mut var_118: u64;
    
    if var_2c8 != 2
    {
        core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h1a38c79198e9333e(&var_2c8);
        let r12_1: i8 = *arg5.byte_offset(0x35);
        let rax_1: i8 = *arg5.byte_offset(0x37);
        
        if rax_1 == 2 && r12_1 == 1
        {
            result = nullptr;
        }
        else if rax_1 == 1
        {
            if *arg5.byte_offset(0x34) != 0
            {
                result_2 = 1;
                let var_210_1: *mut i8 = arg3;
                var_208 = arg4;
                let var_200_1: i8 = 1;
                var_128 = &result_2;
                let var_120_1: fn(arg1: *mut c_void, arg2: *mut c_void) -> i64 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                var_2c8 = &data_5881a0;
                let var_2c0: i64 = 2;
                let var_2a8_1: i64 = 0;
                var_2b8 = &var_128;
                let var_2b0_1: i64 = 1;
                std::io::stdio::_print::he918bceb0c89db46(&var_2c8);
            }
            
            result = nullptr;
        }
        else if rax_1 == 2
        {
            std::fs::metadata::h1d9ddf5324749f9a(&var_2c8, arg1);
            let r13_1: *mut *mut *mut [i8; 0x41] = var_2c8;
            let result_1: *mut *mut *mut *mut [i8; 0x41];
            result = result_1;
            
            if r13_1 != 2
            {
                memcpy(&var_118, &var_2b8, 0xa0);
                var_128 = r13_1;
                let result_3: *mut *mut c_void = result;
                std::fs::Metadata::modified::h6f16921acf618ae6(&result_2, &var_128);
                result = result_2;
                let var_210: i32;
                
                if var_210 != 0x3b9aca00
                {
                    std::fs::metadata::h1d9ddf5324749f9a(&var_2c8, arg3);
                    let result_11: *mut *mut [i8; 0x41] = var_2c8;
                    let mut result_7: *mut *const *mut *mut [i8; 0x41] = result_1;
                    
                    if result_11 != 2
                    {
                        memcpy(&var_208, &var_2b8, 0xa0);
                        result_2 = result_11;
                        let result_9: *mut *const *mut *mut [i8; 0x41] = result_7;
                        std::fs::Metadata::modified::h6f16921acf618ae6(&result_8, &result_2);
                        result_7 = result_8;
                    }
                    
                    if result_11 != 2 && var_2e8 != 0x3b9aca00
                    {
                        let mut rcx_2: bool = result != result_7;
                        
                        if result < result_7
                        {
                            rcx_2 = true;
                        }
                        
                        let mut rsi_19: bool = var_210 != var_2e8;
                        
                        if var_210 < var_2e8
                        {
                            rsi_19 = true;
                        }
                        
                        if rcx_2 != 0
                        {
                            rsi_19 = rcx_2;
                        }
                        
                        if rsi_19 == 1
                        {
                            goto 'label_4eb40e;
                        }
                        
                        result = nullptr;
                    }
                    else
                    {
                        result = result_7;
                    }
                }
            }
        }
        else if rax_1 != 3
        {
            'label_4eb40e:
            let rax_18: u32 = r12_1;
            
            if rax_18 == 0
            {
                if *arg5.byte_offset(0x34) != 0
                {
                    result_2 = 1;
                    let var_210_7: *mut i8 = arg3;
                    var_208 = arg4;
                    let var_200_4: i8 = 1;
                    var_128 = &result_2;
                    let var_120_8: fn(arg1: *mut c_void, arg2: *mut c_void) -> i64 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                    var_2c8 = &data_5881a0;
                    let var_2c0_8: i64 = 2;
                    let var_2a8_8: i64 = 0;
                    var_2b8 = &var_128;
                    let var_2b0_8: i64 = 1;
                    std::io::stdio::_print::he918bceb0c89db46(&var_2c8);
                }
                
                result = nullptr;
            }
            else
            {
                let mut rax_19: i8;
                
                if rax_18 == 1
                {
                    let mut result_10: *mut *mut [i8; 0x41];
                    let mut rdx_6: i64;
                    result_10 = uucore::util_name::h60d842bf27b05e82();
                    result_2 = result_10;
                    let var_210_5: i64 = rdx_6;
                    var_128 = &result_2;
                    let var_120_6: fn(arg1: *mut i64, arg2: i64) -> i64 =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h2fb83001df40ac3a;
                    var_2c8 = &data_587e10;
                    let var_2c0_5: i64 = 2;
                    let var_2a8_6: i64 = 0;
                    var_2b8 = &var_128;
                    let var_2b0_6: i64 = 1;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&var_2c8);
                    result_2 = 1;
                    let var_210_6: *mut i8 = arg3;
                    var_208 = arg4;
                    var_200 = 1;
                    var_128 = &result_2;
                    let var_120_7: fn(arg1: *mut c_void, arg2: *mut c_void) -> i64 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                    var_2c8 = &data_5881d0;
                    let var_2c0_6: i64 = 2;
                    let var_2a8_7: i64 = 0;
                    var_2b8 = &var_128;
                    let mut var_2b0_7: i64 = 1;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&var_2c8);
                    var_2c8 = &data_587e50;
                    let var_2c0_7: i64 = 1;
                    var_2b8 = 8;
                    var_2b0_7 = {0};
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&var_2c8);
                    var_148 = &std::io::stdio::stderr::INSTANCE::ha28648ccba9ff424;
                    _$LT$std..io..stdio..Stderr$u20$as$u20$std..io..Write$GT$::flush::hf7b2528795edb6d7(&var_148);
                    rax_19 = uucore::read_yes::hc350e858ab85cf03();
                }
                
                if rax_18 == 1 && rax_19 == 0
                {
                    result = std::io::error::Error::new::h0657970bda442b78(0x27, 1, 0);
                }
                else
                {
                    uucore::features::backup_control::get_backup_path::hb28e229807111f9d(&var_2c8, 
                        *arg5.byte_offset(0x36), arg3, arg4, *arg5.byte_offset(8), 
                        *arg5.byte_offset(0x10));
                    core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::h3aed14150e82ecca(&var_318);
                    var_308 = var_2b8;
                    var_318 = var_2c8;
                    
                    if var_318 == -0x8000000000000000
                    {
                        goto 'label_4ead4d;
                    }
                    
                    let var_310: *mut i8;
                    let result_6: *mut *mut c_void = uu_mv::rename_with_fallback::h48f1d4f2ed6b729f(
                        arg3, arg4, var_310, var_308, arg6);
                    result = result_6;
                    
                    if result_6 == 0
                    {
                        goto 'label_4ead4d;
                    }
                }
            }
        }
        else
        {
            result_2 = 1;
            let var_210_3: *mut i8 = arg3;
            var_208 = arg4;
            let var_200_2: i8 = 1;
            var_128 = &result_2;
            let var_120_3: fn(arg1: *mut c_void, arg2: *mut c_void) -> i64 =
                _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
            var_2c8 = &data_5881c0;
            let var_2c0_2: i64 = 1;
            let var_2a8_3: i64 = 0;
            var_2b8 = &var_128;
            let var_2b0_3: i64 = 1;
            let mut var_48: ();
            core::option::Option$LT$T$GT$::map_or_else::h70402eff178ea70d(&var_48, &var_2c8);
            result = std::io::error::Error::new::h3b474d96466fa494(0x27, &var_48);
        }
    }
    else
    {
        core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h1a38c79198e9333e(&var_2c8);
        'label_4ead4d:
        std::fs::metadata::h1d9ddf5324749f9a(&var_2c8, arg3);
        
        if var_2c8 != 2
        {
            core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h1a38c79198e9333e(&var_2c8);
            
            if std::path::Path::is_dir::h9ac0db933706da51(arg3, arg4) == 0
            {
                goto 'label_4eae97;
            }
            
            if std::path::Path::is_dir::h9ac0db933706da51(arg1, arg2) == 0
            {
                goto 'label_4eae97;
            }
            
            if uu_mv::is_empty_dir::he3f2d58304cc65e8(arg3) == 0
            {
                result = std::io::error::Error::new::h0657970bda442b78(0x27, 
                    "Directory not empty{msg}: [{elap…", 0x13);
            }
            else
            {
                let result_4: *mut *mut c_void = std::fs::remove_dir::hab61638394c5814d(arg3);
                result = result_4;
                
                if result_4 == 0
                {
                    goto 'label_4eae97;
                }
            }
        }
        else
        {
            core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h1a38c79198e9333e(&var_2c8);
            'label_4eae97:
            let result_5: *mut *mut c_void =
                uu_mv::rename_with_fallback::h48f1d4f2ed6b729f(arg1, arg2, arg3, arg4, arg6);
            result = result_5;
            
            if result_5 == 0
            {
                if *arg5.byte_offset(0x31) == 0
                {
                    result = nullptr;
                }
                else
                {
                    let temp0_1: i64 = var_318;
                    result = temp0_1 != -0x8000000000000000;
                    
                    if temp0_1 == -0x8000000000000000
                    {
                        var_128 = 1;
                        let var_120_4: *mut i8 = arg1;
                        var_118 = arg2;
                        let var_110_2: i8 = 1;
                        result_2 = 1;
                        let var_210_4: *mut i8 = arg3;
                        var_208 = arg4;
                        let var_200_3: i8 = 1;
                        result_8 = &var_128;
                        var_2e8 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                        let var_2e0_2: *const *mut *mut [i8; 0x41] = &result_2;
                        let var_2d8_1: fn(arg1: *mut c_void, arg2: *mut c_void) -> i64 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                        var_2c8 = &data_588230;
                        let var_2c0_3: i64 = 2;
                        let var_2a8_4: i64 = 0;
                        var_2b8 = &result_8;
                        let var_2b0_4: i64 = 2;
                        let mut var_60: i128;
                        core::option::Option$LT$T$GT$::map_or_else::h70402eff178ea70d(&var_60, 
                            &var_2c8);
                        result_2 = var_60;
                        let var_50: *mut i32;
                        var_208 = var_50;
                        let mut rax_17: *mut i32;
                        rax_17 = 1;
                        let var_32c_3: i32 = rax_17;
                    }
                    else
                    {
                        let mut var_168: i128 = var_318;
                        var_148 = 1;
                        let var_140_1: *mut i8 = arg1;
                        let var_138_1: u64 = arg2;
                        let var_130_1: i8 = 1;
                        result_8 = 1;
                        var_2e8 = arg3;
                        let var_2e0_1: *mut i32 = arg4;
                        let mut var_2d8: i64;
                        var_2d8 = 1;
                        let rax_9: i64 = *var_168[8];
                        var_128 = 1;
                        let var_120_2: i64 = rax_9;
                        var_118 = var_308;
                        let var_110_1: i8 = 1;
                        var_2c8 = &var_148;
                        let var_2c0_1: fn(arg1: *mut c_void, arg2: *mut c_void) -> i64 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                        var_2b8 = &result_8;
                        let var_2b0_2: fn(arg1: *mut c_void, arg2: *mut c_void) -> i64 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                        let var_2a8_2: *mut i64 = &var_128;
                        let var_2a0_1: fn(arg1: *mut c_void, arg2: *mut c_void) -> i64 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                        result_2 = &data_5881f0;
                        let var_210_2: i64 = 4;
                        let var_1f8_1: i64 = 0;
                        var_208 = &var_2c8;
                        var_200 = 3;
                        let mut var_78: i128;
                        core::option::Option$LT$T$GT$::map_or_else::h70402eff178ea70d(&var_78, 
                            &result_2);
                        result_2 = var_78;
                        let var_68: *mut i32;
                        var_208 = var_68;
                        let var_32c_1: i32 = 0;
                        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hcf72403e0182be36(
                            &var_168);
                        let var_32c_2: i32 = 0;
                    }
                    
                    if arg6 == 0
                    {
                        var_128 = &result_2;
                        let var_120_5: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                        var_2c8 = &data_587e60;
                        let var_2c0_4: i64 = 2;
                        let var_2a8_5: i64 = 0;
                        var_2b8 = &var_128;
                        let var_2b0_5: i64 = 1;
                        std::io::stdio::_print::he918bceb0c89db46(&var_2c8);
                    }
                    else
                    {
                        indicatif::multi::MultiProgress::suspend::hc6003d08fa5df55b(arg6, 
                            &result_2);
                    }
                    
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h0a66651b389f0fd4(
                        &result_2);
                }
                
                if result == 0 && var_318 != -0x8000000000000000
                {
                    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hcf72403e0182be36(&var_318);
                }
                
                return nullptr;
            }
        }
    }
    core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::h3aed14150e82ecca(&var_318);
    result
}
