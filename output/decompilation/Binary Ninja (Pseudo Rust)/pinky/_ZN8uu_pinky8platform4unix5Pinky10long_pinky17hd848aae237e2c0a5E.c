
  fn uu_pinky::platform::unix::Pinky::long_pinky::hd848aae237e2c0a5(arg1: *mut c_void) -> *mut c_void

{
    let mut result: *mut c_void = *arg1.byte_offset(0x10);
    
    if result != 0
    {
        let mut rbp_1: *mut c_void = *arg1.byte_offset(8);
        let rcx_1: i8 = *arg1.byte_offset(0x1e);
        let rcx_2: i8 = *arg1.byte_offset(0x1b);
        let rcx_3: i8 = *arg1.byte_offset(0x1c);
        let mut i_1: i64 = result * 0x18;
        let mut i: i64;
        
        do
        {
            let mut var_170: *mut c_void = rbp_1;
            let mut var_b0: *mut i64 = &var_170;
            let var_a8_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h3d9b1dc5a3e6c5f8;
            let mut var_138: *mut *mut [i8; 0x1b] = &data_4f9090;
            let var_130_2: i64 = 2;
            let mut var_118_1: *mut c_void = &data_41a8a0;
            let var_110_1: i64 = 1;
            let mut var_128_2: *mut *mut i64 = &var_b0;
            let mut var_120: i64 = 1;
            std::io::stdio::_print::h5e446ff973c02de6(&var_138);
            let rax_1: *mut c_void = var_170;
            _$LT$uucore..features..entries..Passwd$u20$as$u20$uucore..features..entries..Locate$LT$$RF$str$GT$$GT$::locate::h4bb3a5c7c498e57d(&var_b0, *rax_1.byte_offset(8), *rax_1.byte_offset(0x10));
            
            if var_b0 == -0x8000000000000000
            {
                core::ptr::drop_in_place$LT$core..result..Result$LT$uucore..features..entries..Passwd$C$std..io..error..Error$GT$$GT$::h9dd5054bcb71dab2(&var_b0);
                var_138 = &data_4f9080;
                let var_130_1: i64 = 1;
                let var_128_1: i64 = 8;
                var_120 = {0};
                result = std::io::stdio::_print::h5e446ff973c02de6(&var_138);
            }
            else
            {
                let var_40: i128;
                let var_c8_1: i128 = var_40;
                let var_50: i128;
                let mut var_d8: i128 = var_50;
                let var_90: i128;
                var_118_1 = var_90;
                let var_a0: i128;
                var_128_2 = var_a0;
                var_138 = var_b0;
                let mut var_1c8: *mut *mut c_void;
                uu_pinky::platform::unix::gecos_to_fullname::hc5cc590c8c5acc48(&var_1c8, &var_138);
                let mut var_1b8: i64;
                let mut var_180: i128;
                let mut var_168: i128;
                let mut rax_2: i64;
                let var_70: i128;
                let var_60: i128;
                
                if var_1c8 != -0x8000000000000000
                {
                    let var_158_2: i64 = var_1b8;
                    var_168 = var_1c8;
                    rax_2 = *var_70[8];
                    
                    if rax_2 != -0x8000000000000000
                    {
                        var_180 = var_60;
                    }
                    else
                    {
                        'label_463c61:
                        var_180 = 1;
                        *var_180[8] = 0;
                        rax_2 = 0;
                    }
                }
                else
                {
                    var_168 = 0;
                    *var_168[8] = 1;
                    let var_158_1: i64 = 0;
                    rax_2 = *var_70[8];
                    
                    if rax_2 == -0x8000000000000000
                    {
                        goto 'label_463c61;
                    }
                    
                    var_180 = var_60;
                }
                let mut var_188: i64 = rax_2;
                let var_80: i128;
                let mut rax_4: i64 = var_80;
                
                if rax_4 != -0x8000000000000000
                {
                    let mut var_148: i128 = var_80;
                }
                else
                {
                    var_148 = 1;
                    *var_148[8] = 0;
                    rax_4 = 0;
                }
                
                let mut var_150: i64 = rax_4;
                let mut var_1e8: *mut i128 = &var_168;
                let var_1e0_1: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                var_1c8 = &data_4f9020;
                let var_1c0_1: i64 = 2;
                let var_1a8_1: i64 = 0;
                let mut var_1b8_1: *mut *mut i128 = &var_1e8;
                let mut var_1b0_1: i64 = 1;
                std::io::stdio::_print::h5e446ff973c02de6(&var_1c8);
                
                if (rcx_1 & 1) != 0
                {
                    var_1e8 = &var_188;
                    let var_1e0_2: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                    var_1c8 = &data_4f90b0;
                    let var_1c0_2: i64 = 1;
                    let var_1a8_2: *mut c_void = &data_41a8e0;
                    let var_1a0_1: i64 = 1;
                    let var_1b8_2: *mut *mut i128 = &var_1e8;
                    let var_1b0_2: i64 = 1;
                    std::io::stdio::_print::h5e446ff973c02de6(&var_1c8);
                    var_1e8 = &var_150;
                    let var_1e0_3: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                    var_1c8 = &data_4f9040;
                    let var_1c0_3: i64 = 2;
                    let var_1a8_3: i64 = 0;
                    var_1b8_1 = &var_1e8;
                    var_1b0_1 = 1;
                    std::io::stdio::_print::h5e446ff973c02de6(&var_1c8);
                }
                
                let mut var_198: i32;
                let var_194: i32;
                
                if (rcx_2 & 1) != 0
                {
                    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hf329c2e59eb871a4(&var_1c8, var_180, *var_180[8]);
                    var_1e8 = var_1c8;
                    std::path::PathBuf::push::had6f445dae3e5da7(&var_1e8, 
                        ".project\n       Februaryextern …");
                    var_1c8 = var_1e8;
                    std::fs::File::open::ha0c637b6d5aad0c6(&var_198, &var_1c8);
                    
                    if var_198 != 1
                    {
                        var_1c8 = &data_4f9060;
                        let var_1c0_4: i64 = 1;
                        var_1b8_1 = 8;
                        var_1b0_1 = {0};
                        std::io::stdio::_print::h5e446ff973c02de6(&var_1c8);
                        uu_pinky::platform::unix::read_to_console::hc6a6cffdbcb4a9a1(var_194);
                    }
                    else
                    {
                        core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..File$C$std..io..error..Error$GT$$GT$::h7f4d083a74fe168d(&var_198);
                    }
                }
                
                if (rcx_3 & 1) != 0
                {
                    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hf329c2e59eb871a4(&var_1c8, var_180, *var_180[8]);
                    var_1e8 = var_1c8;
                    std::path::PathBuf::push::had6f445dae3e5da7(&var_1e8, 
                        ".plan(uutils coreutils) 0.0.30Di…");
                    let var_1b8_3: *mut *mut i128 = var_1b8_1;
                    var_1c8 = var_1e8;
                    std::fs::File::open::ha0c637b6d5aad0c6(&var_198, &var_1c8);
                    
                    if var_198 != 1
                    {
                        var_1c8 = &data_4f9070;
                        let var_1c0_5: i64 = 1;
                        let var_1b8_4: i64 = 8;
                        var_1b0_1 = {0};
                        std::io::stdio::_print::h5e446ff973c02de6(&var_1c8);
                        uu_pinky::platform::unix::read_to_console::hc6a6cffdbcb4a9a1(var_194);
                    }
                    else
                    {
                        core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..File$C$std..io..error..Error$GT$$GT$::h7f4d083a74fe168d(&var_198);
                    }
                }
                
                var_1c8 = &data_4f8f70;
                let var_1c0_6: i64 = 1;
                var_1b8 = 8;
                var_1b0_1 = {0};
                std::io::stdio::_print::h5e446ff973c02de6(&var_1c8);
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h14fcc68f829f922f(&var_150);
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h14fcc68f829f922f(&var_188);
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h14fcc68f829f922f(&var_168);
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h14fcc68f829f922f(&var_138);
                core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::h29ddd331d55ccf59(
                    &var_120);
                result = core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::h29ddd331d55ccf59(&var_d8);
            }
            
            rbp_1 += 0x18;
            i = i_1;
            i_1 -= 0x18;
        } while i != 0x18;
    }
    
    result
}
