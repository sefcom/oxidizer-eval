
  fn alacritty::config::load_imports::h54203247dc29364f(arg1: *mut i64, arg2: *mut i64, arg3: i64, arg4: i64, arg5: *mut i64, arg6: i64) -> *mut i64

{
    let mut rbp: i64;
    let var_8: i64 = rbp;
    let mut var_248: i32;
    alacritty::config::imports::he228980ef6034b5f(&var_248, arg2, arg3, arg4, arg6);
    let mut var_240: i128;
    let var_230: i64;
    let mut var_218: i128;
    let mut var_1d8: *mut i128;
    let mut var_1b8: *mut i128;
    let mut var_140: *mut c_void;
    
    if var_248 == 1
    {
        let var_208_1: i64 = var_230;
        var_218 = var_240;
        
        if core::sync::atomic::atomic_load::h45f93311b58385bb(
            &log::MAX_LOG_LEVEL_FILTER::hfa6ade34c357dc26, 0) != 0
        {
            var_1d8 = &var_218;
            let var_1d0_1: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
            var_1b8 = &data_4e8b60;
            let var_1b0_1: i64 = 1;
            let var_198_1: i64 = 0;
            let var_1a8_1: *mut *mut i128 = &var_1d8;
            let var_1a0_1: i64 = 1;
            let rax_2: i64 = log::__private_api::loc::h250021ea1f26630a(&data_c81f18);
            var_140 = "alacritty_config_derivealacritty…";
            let var_138_1: i64 = 0x17;
            let var_130_1: *const i8 = "alacritty::configReloading confi…";
            let var_128_1: i64 = 0x11;
            let var_120_1: i64 = rax_2;
            log::__private_api::log::h0b6680b994d742b1(&var_1b8, 1, &var_140);
        }
        
        *arg1 = 0;
        arg1[2] = 0;
        *arg1.byte_offset(0x17) = 0;
        return core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcb6d23ea7ad1ac3a(&var_218);
    }
    
    let var_88_1: i64 = var_230;
    let mut var_98: i128 = var_240;
    let mut var_e8: i64 = 0;
    let mut var_d8_1: i64 = 0;
    *var_d8_1[7] = 0;
    let mut var_78: ();
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h2441c7966b064cd0(&var_78, &var_98);
    let mut i_1: i64;
    _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h48ec69800376c184(&i_1, &var_78);
    let mut i: i64 = i_1;
    
    if i != 2
    {
        let var_1e8_1: i64 = arg6 - 1;
        
        do
        {
            let mut var_1a8: *mut *mut i128;
            let mut var_198: i64;
            let mut var_138: i64;
            let mut var_130: *const i8;
            let mut var_128: i64;
            let mut var_120: i64;
            let var_b0: i128;
            let var_a0: u64;
            
            if (i & 1) == 0
            {
                let var_148_1: u64 = var_a0;
                let mut var_158: i128 = var_b0;
                alacritty::config::parse_config::hb79bebbd33e5efa7(&var_140, *var_158[8], var_a0, 
                    arg5, var_1e8_1);
                let r15_1: *mut c_void = var_140;
                rbp = r15_1 == 7;
                
                if r15_1 != 7
                {
                    let mut rax_8: i8;
                    
                    if r15_1 == 3
                    {
                        rax_8 = std::io::error::Error::kind::h135fe00c4e7365f3(var_138);
                    }
                    
                    if r15_1 == 3 && rax_8 == 0
                    {
                        let mut var_1e0: i64 = var_138;
                        
                        if core::sync::atomic::atomic_load::h45f93311b58385bb(
                            &log::MAX_LOG_LEVEL_FILTER::hfa6ade34c357dc26, 0) >= 3
                        {
                            var_218 = var_158;
                            var_1d8 = &var_218;
                            let var_1d0_3: fn(arg1: *mut i128, arg2: *mut i64) -> i64 = _$LT$std..path..Display$u20$as$u20$core..fmt..Debug$GT$::fmt::h805f8819fa6944ce;
                            var_1b8 = &data_c81ea0;
                            let var_1b0_3: i64 = 1;
                            var_198 = 0;
                            var_1a8 = &var_1d8;
                            let var_1a0_3: i64 = 1;
                            let rax_14: i64 =
                                log::__private_api::loc::h250021ea1f26630a(&data_c81ed0);
                            var_248 = "alacritty_config_derivealacritty…";
                            var_240 = 0x17;
                            *var_240[8] = "alacritty::configReloading confi…";
                            let var_230_2: i64 = 0x11;
                            let var_228_2: i64 = rax_14;
                            log::__private_api::log::h0b6680b994d742b1(&var_1b8, 3, &var_248);
                        }
                        
                        core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h3428ae91bc3bac8a(
                            &var_1e0);
                        let rax_15: *mut c_void = var_140;
                        
                        if rax_15 != 7 && rax_15 != 3
                        {
                            core::ptr::drop_in_place$LT$alacritty..config..Error$GT$::hc0565752af3cd056(&var_140);
                        }
                    }
                    else
                    {
                        let var_f0: i64;
                        let var_168_1: i64 = var_f0;
                        let var_100: i128;
                        let var_178_1: i128 = var_100;
                        let var_110: i128;
                        let var_188_1: i128 = var_110;
                        var_198 = var_120;
                        var_1a8 = var_130;
                        var_1b8 = var_140;
                        
                        if core::sync::atomic::atomic_load::h45f93311b58385bb(
                            &log::MAX_LOG_LEVEL_FILTER::hfa6ade34c357dc26, 0) != 0
                        {
                            var_1d8 = &var_158;
                            let var_1d0_2: fn(arg1: *mut c_void, arg2: *mut i64) -> i64 = _$LT$std..path..PathBuf$u20$as$u20$core..fmt..Debug$GT$::fmt::h56ce33c072e686b1;
                            let var_1c8_1: *const *mut i128 = &var_1b8;
                            let var_1c0_1: fn(arg1: *mut i64, arg2: *mut i64) -> i64 = _$LT$alacritty..config..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h8f6deb2eaa2aacd3;
                            var_248 = &data_c81eb0;
                            var_240 = 2;
                            let var_228_1: i64 = 0;
                            *var_240[8] = &var_1d8;
                            let var_230_1: i64 = 2;
                            let rax_11: i64 =
                                log::__private_api::loc::h250021ea1f26630a(&data_c81ee8);
                            var_218 = "alacritty_config_derivealacritty…";
                            *var_218[8] = 0x17;
                            let var_208_2: *const i8 = "alacritty::configReloading confi…";
                            let var_200_1: i64 = 0x11;
                            let var_1f8_1: i64 = rax_11;
                            log::__private_api::log::h0b6680b994d742b1(&var_248, 1, &var_218);
                        }
                        
                        let mut r13: *mut i32;
                        r13 = 1;
                        core::ptr::drop_in_place$LT$alacritty..config..Error$GT$::hc0565752af3cd056(
                            &var_1b8);
                    }
                }
                else
                {
                    let var_48_1: i128 = var_128;
                    let mut var_58: i128 = var_138;
                    alacritty::config::serde_utils::merge::h0b6a4a70fea81bc1(&var_1b8, &var_e8, 
                        &var_58);
                    var_d8_1 = var_1a8;
                    var_e8 = var_1b8;
                }
                
                core::mem::drop::ha42964a555fb617b(&var_158);
            }
            else
            {
                *var_240[8] = var_a0;
                var_248 = var_b0;
                
                if core::sync::atomic::atomic_load::h45f93311b58385bb(
                    &log::MAX_LOG_LEVEL_FILTER::hfa6ade34c357dc26, 0) != 0
                {
                    var_218 = &var_248;
                    *var_218[8] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                    var_1b8 = &data_4e8b60;
                    let var_1b0_2: i64 = 1;
                    var_198 = 0;
                    var_1a8 = &var_218;
                    let var_1a0_2: i64 = 1;
                    let rax_7: i64 = log::__private_api::loc::h250021ea1f26630a(&data_c81f00);
                    var_140 = "alacritty_config_derivealacritty…";
                    var_138 = 0x17;
                    var_130 = "alacritty::configReloading confi…";
                    var_128 = 0x11;
                    var_120 = rax_7;
                    log::__private_api::log::h0b6680b994d742b1(&var_1b8, 1, &var_140);
                }
                
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcb6d23ea7ad1ac3a(&var_248);
            }
            _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h48ec69800376c184(&i_1, &var_78);
            i = i_1;
        } while i != 2;
    }
    
    core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$core..result..Result$LT$std..path..PathBuf$C$alloc..string..String$GT$$GT$$GT$::h43a6db806a26cc75(&var_78);
    let zmm0_2: i128 = var_e8;
    *arg1.byte_offset(0x10) = var_d8_1;
    *arg1 = zmm0_2;
    arg1
}
