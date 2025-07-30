
  fn flealib::screenshot::Screenshot::take_screenshot::h7d64ee0b0da2be86(arg1: *mut i64, arg2: i64, arg3: i64) -> *mut i64

{
    let mut rax: i64;
    let mut rdx: i32;
    rax = core::time::Duration::new::hf1673e7a1b856ad0(1, 0);
    let mut rax_1: i64;
    let mut rdx_1: i32;
    rax_1 = core::time::Duration::checked_div::hd212bdea897f181f(rax, rdx);
    
    if rdx_1 == 0x3b9aca00
    {
        core::option::expect_failed::he85e4628a9d24507("divide by zero error when dividi…");
        /* no return */
    }
    
    let mut var_e0: i128;
    let mut rdx_2: i64 = scrap::common::x11::Display::primary::h19547f8d7371ee94(&var_e0);
    let var_cc: i8;
    let mut var_190: *mut *mut i128;
    let mut var_180: i128;
    let mut var_170: i128;
    let mut var_160: i64;
    let mut var_140: i128;
    let mut var_110: *mut i128;
    let mut var_a8: i128;
    
    if var_cc != 2
    {
        let var_d0: i64;
        let var_38_1: i64 = var_d0;
        let mut var_48: i128 = var_e0;
        let mut rdx_4: i64 =
            scrap::common::x11::Capturer::new::h985603e55bdb23e0(&var_180, &var_48);
        let var_154: i8;
        let mut var_198: *mut c_void;
        
        if var_154 != 2
        {
            let rcx: i64;
            let var_58_1: i64 = rcx;
            let var_150: i128;
            let var_78_1: i128 = var_150;
            let var_98_1: i128 = var_170;
            var_a8 = var_180;
            let rax_11: u64 = *var_160[4];
            let rax_12: u64 = *var_160[6];
            
            loop
            {
                scrap::common::x11::Capturer::frame::haadb427da3af460f(&var_190, &var_a8);
                let rbp_1: *mut *mut i128 = var_190;
                let var_188: i64;
                
                if rbp_1 != 0
                {
                    let mut rbx_1: u64 = rax_12;
                    
                    if core::sync::atomic::atomic_load::h8980141092664382(
                        &log::MAX_LOG_LEVEL_FILTER::hec4bd8d019e67a03) >= 4
                    {
                        var_180 = &data_b0bb80;
                        *var_180[8] = 1;
                        var_170 = 8;
                        var_170 = {0};
                        let rax_15: i64 = log::__private_api::loc::he6f33e710a34adaf(&data_b0bbb8);
                        var_140 = "flealib::screenshotException whi…";
                        *var_140[8] = 0x13;
                        let var_130_1: *const i8 = "flealib::screenshotException whi…";
                        let var_128_2: i64 = 0x13;
                        let var_120_2: i64 = rax_15;
                        log::__private_api::log::hd2d1d5843cf283e9(&var_180, 4, &var_140);
                    }
                    
                    let mut rax_16: *mut i128;
                    let mut rdx_7: i64;
                    rax_16 =
                        alloc::raw_vec::RawVecInner$LT$A$GT$::with_capacity_in::ha22eed99fdd9ad75((
                        rax_11 * rbx_1) << 2);
                    var_110 = rax_16;
                    let var_100_1: i64 = 0;
                    
                    if rbx_1 == 0
                    {
                        core::panicking::panic_const::panic_const_div_by_zero::hc6c4b1cee92020f0();
                        /* no return */
                    }
                    
                    let mut var_b8_1: u64;
                    
                    if var_188 >> 0x20 != 0
                    {
                        var_b8_1 = COMBINE(0, var_188) / rbx_1;
                        
                        if rax_11 == 0
                        {
                            goto 'label_7a4cbc;
                        }
                        
                        goto 'label_7a4ab0;
                    }
                    
                    var_b8_1 = COMBINE(0, var_188) / rbx_1;
                    
                    if rax_11 != 0
                    {
                        'label_7a4ab0:
                        let mut rax_21: i64 = 0;
                        
                        do
                        {
                            let rax_22: i64 = _$LT$usize$u20$as$u20$core..iter..range..Step$GT$::forward_unchecked::hda9d652f30f8fc0d(rax_21);
                            let rbx_3: i64 = rax_21 * var_b8_1;
                            let mut r13_1: i64 = 0;
                            let mut rax_23: i64;
                            
                            do
                            {
                                rax_23 = _$LT$usize$u20$as$u20$core..iter..range..Step$GT$::forward_unchecked::hda9d652f30f8fc0d(r13_1);
                                let mut rdi_24: i64 = rbx_3 + (r13_1 << 2) + 2;
                                
                                if rdi_24 >= var_188
                                {
                                    core::panicking::panic_bounds_check::h8f7cc6d356d411dd(rdi_24, 
                                        var_188);
                                    /* no return */
                                }
                                
                                rdi_24 = rbx_3 + (r13_1 << 2);
                                
                                if rdi_24 + 1 >= var_188
                                {
                                    core::panicking::panic_bounds_check::h8f7cc6d356d411dd(
                                        rdi_24 + 1, var_188);
                                    /* no return */
                                }
                                
                                if rdi_24 >= var_188
                                {
                                    core::panicking::panic_bounds_check::h8f7cc6d356d411dd(rdi_24, 
                                        var_188);
                                    /* no return */
                                }
                                
                                var_180 = *rbp_1.byte_offset(rdi_24).byte_offset(2);
                                *var_180[1] = (*rbp_1.byte_offset(rdi_24)).rotate_left(8);
                                *var_180[3] = 0xff;
                                alloc::vec::Vec$LT$T$C$A$GT$::append_elements::h29791fc847e31467(
                                    &var_110, &var_180, 4);
                                r13_1 = rax_23;
                            } while rax_23 < rax_11;
                            rbx_1 = rax_12;
                            rax_21 = rax_22;
                        } while rax_21 < rbx_1;
                    }
                    else
                    {
                        'label_7a4cbc:
                        let mut rax_32: i64 = 0;
                        
                        do
                        {
                            rax_32 = _$LT$usize$u20$as$u20$core..iter..range..Step$GT$::forward_unchecked::hda9d652f30f8fc0d(rax_32);
                        } while rax_32 < rbx_1;
                    }
                    
                    std::fs::File::create::hefcfd813751427cb(&var_180, arg3);
                    let mut rax_34: *mut c_void;
                    let mut rdx_15: i64;
                    rax_34 = repng::encode::h8d1eb261549b8bec(
                        core::result::Result$LT$T$C$E$GT$::unwrap::h2d27d424be40442d(&var_180), 
                        rax_11, rbx_1, rdx_7, var_100_1);
                    
                    if rax_34 == 0
                    {
                        if core::sync::atomic::atomic_load::h8980141092664382(
                            &log::MAX_LOG_LEVEL_FILTER::hec4bd8d019e67a03) > 3
                        {
                            var_180 = &data_b0bb90;
                            *var_180[8] = 1;
                            var_170 = 8;
                            var_170 = {0};
                            let rax_40: i64 =
                                log::__private_api::loc::he6f33e710a34adaf(&data_b0bc18);
                            var_140 = "flealib::screenshotException whi…";
                            *var_140[8] = 0x13;
                            let var_130_4: *const i8 = "flealib::screenshotException whi…";
                            let var_128_5: i64 = 0x13;
                            let var_120_5: i64 = rax_40;
                            log::__private_api::log::hd2d1d5843cf283e9(&var_180, 4, &var_140);
                        }
                        
                        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::hc1da1ed81c1be07b(&var_110);
                        *arg1 = -0x8000000000000000;
                        core::ptr::drop_in_place$LT$scrap..common..x11..Capturer$GT$::h1e7633a1e0d8be74(&var_a8);
                        break;
                    }
                    
                    var_198 = rax_34;
                    
                    if core::sync::atomic::atomic_load::h8980141092664382(
                        &log::MAX_LOG_LEVEL_FILTER::hec4bd8d019e67a03) != 0
                    {
                        _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h00281d94234d25d8(&var_e0, &var_198, rdx_15);
                        var_190 = &var_e0;
                        let var_188_2: fn(arg1: *mut c_void, arg2: *mut i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h9e2c9c436a613463;
                        var_180 = &data_44fb30;
                        *var_180[8] = 1;
                        var_160 = 0;
                        var_170 = &var_190;
                        *var_170[8] = 1;
                        let rax_36: i64 = log::__private_api::loc::he6f33e710a34adaf(&data_b0bc30);
                        var_140 = "flealib::screenshotException whi…";
                        *var_140[8] = 0x13;
                        let var_130_3: *const i8 = "flealib::screenshotException whi…";
                        let var_128_4: i64 = 0x13;
                        let var_120_4: i64 = rax_36;
                        log::__private_api::log::hd2d1d5843cf283e9(&var_180, 1, &var_140);
                        rdx_15 = core::ptr::drop_in_place$LT$alloc..string..String$GT$::hd935b2ddfd513885(&var_e0);
                    }
                    
                    _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h00281d94234d25d8(&var_180, &var_198, rdx_15);
                    arg1[2] = var_170;
                    *arg1 = var_180;
                    core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h96b79424257da29d(
                        &var_198);
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::hc1da1ed81c1be07b(
                        &var_110);
                }
                else
                {
                    let mut var_e8: i64 = var_188;
                    
                    if std::io::error::Error::kind::h7f0d5435ec1cf07f(var_188) != 0xd
                    {
                        let mut rax_26: *mut c_void;
                        let mut rdx_10: i64;
                        rax_26 = std::io::error::Error::new::h73bba56a22ab7bbe(0x28, 
                            "Exception while sleeping in thre…", 0x22);
                        var_198 = rax_26;
                        
                        if core::sync::atomic::atomic_load::h8980141092664382(
                            &log::MAX_LOG_LEVEL_FILTER::hec4bd8d019e67a03) != 0
                        {
                            _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h00281d94234d25d8(&var_e0, &var_198, rdx_10);
                            var_110 = &var_e0;
                            let var_108_3: fn(arg1: *mut c_void, arg2: *mut i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h9e2c9c436a613463;
                            var_180 = &data_44fb30;
                            *var_180[8] = 1;
                            var_160 = 0;
                            var_170 = &var_110;
                            *var_170[8] = 1;
                            let rax_28: i64 =
                                log::__private_api::loc::he6f33e710a34adaf(&data_b0bca8);
                            var_140 = "flealib::screenshotException whi…";
                            *var_140[8] = 0x13;
                            let var_130_2: *const i8 = "flealib::screenshotException whi…";
                            let var_128_3: i64 = 0x13;
                            let var_120_3: i64 = rax_28;
                            log::__private_api::log::hd2d1d5843cf283e9(&var_180, 1, &var_140);
                            rdx_10 = core::ptr::drop_in_place$LT$alloc..string..String$GT$::hd935b2ddfd513885(&var_e0);
                        }
                        
                        _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h00281d94234d25d8(&var_180, &var_198, rdx_10);
                        arg1[2] = var_170;
                        *arg1 = var_180;
                        core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h96b79424257da29d(
                            &var_198);
                        core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h96b79424257da29d(
                            &var_e8);
                    }
                    else
                    {
                        std::thread::sleep::h1a6eeffe1c923e1f(rax_1, rdx_1);
                        core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h96b79424257da29d(
                            &var_e8);
                        continue;
                    }
                }
                core::ptr::drop_in_place$LT$scrap..common..x11..Capturer$GT$::h1e7633a1e0d8be74(
                    &var_a8);
                return arg1;
            }
        }
        else
        {
            var_198 = var_180;
            let mut var_130: *mut *mut *mut i128;
            
            if core::sync::atomic::atomic_load::h8980141092664382(
                &log::MAX_LOG_LEVEL_FILTER::hec4bd8d019e67a03) != 0
            {
                _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h00281d94234d25d8(&var_110, &var_198, rdx_4);
                var_190 = &var_110;
                let var_188_1: fn(arg1: *mut c_void, arg2: *mut i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h9e2c9c436a613463;
                var_140 = &data_44fb30;
                *var_140[8] = 1;
                let var_120_1: i64 = 0;
                var_130 = &var_190;
                let var_128_1: i64 = 1;
                let rax_9: i64 = log::__private_api::loc::he6f33e710a34adaf(&data_b0bcc0);
                var_e0 = "flealib::screenshotException whi…";
                *var_e0[8] = 0x13;
                let var_d0_1: *const i8 = "flealib::screenshotException whi…";
                let var_c8_1: i64 = 0x13;
                let var_c0_1: i64 = rax_9;
                log::__private_api::log::hd2d1d5843cf283e9(&var_140, 1, &var_e0);
                rdx_4 = core::ptr::drop_in_place$LT$alloc..string..String$GT$::hd935b2ddfd513885(
                    &var_110);
            }
            
            _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h00281d94234d25d8(
                &var_140, &var_198, rdx_4);
            arg1[2] = var_130;
            *arg1 = var_140;
            core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h96b79424257da29d(&var_198);
        }
    }
    else
    {
        var_190 = var_e0;
        
        if core::sync::atomic::atomic_load::h8980141092664382(
            &log::MAX_LOG_LEVEL_FILTER::hec4bd8d019e67a03) != 0
        {
            _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h00281d94234d25d8(
                &var_140, &var_190, rdx_2);
            var_110 = &var_140;
            let var_108_1: fn(arg1: *mut c_void, arg2: *mut i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h9e2c9c436a613463;
            var_180 = &data_44fb30;
            *var_180[8] = 1;
            var_160 = 0;
            var_170 = &var_110;
            *var_170[8] = 1;
            let rax_4: i64 = log::__private_api::loc::he6f33e710a34adaf(&data_b0bcd8);
            var_a8 = "flealib::screenshotException whi…";
            *var_a8[8] = 0x13;
            let mut var_98: i128;
            var_98 = "flealib::screenshotException whi…";
            *var_98[8] = 0x13;
            let mut var_88: i128;
            var_88 = rax_4;
            log::__private_api::log::hd2d1d5843cf283e9(&var_180, 1, &var_a8);
            rdx_2 =
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::hd935b2ddfd513885(&var_140);
        }
        
        _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h00281d94234d25d8(
            &var_180, &var_190, rdx_2);
        arg1[2] = var_170;
        *arg1 = var_180;
        core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h96b79424257da29d(&var_190);
    }
    arg1
}
