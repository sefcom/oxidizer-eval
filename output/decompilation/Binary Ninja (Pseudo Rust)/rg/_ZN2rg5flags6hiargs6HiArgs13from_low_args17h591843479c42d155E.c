
  fn rg::flags::hiargs::HiArgs::from_low_args::h591843479c42d155(arg1: *mut i64, arg2: *mut i128) -> i64

{
    let mut var_328: u64;
    
    if *arg2.byte_offset(0x25b) != 5
    {
        var_328 = &data_7eade0;
        let var_320_2: i64 = 1;
        let var_318_1: i64 = 8;
        let var_310_1: i128 = {0};
        core::panicking::assert_failed::h3ee9e59ce2d1dbf6(arg2.byte_offset(0x25b), &var_328);
        /* no return */
    }
    
    let mut rax_1: u64;
    
    if *arg2.byte_offset(0x22a) != 2
    {
        rax_1 =
            rg::flags::lowargs::SortMode::supported::h121845340401e666(*arg2.byte_offset(0x22b));
    }
    
    if *arg2.byte_offset(0x22a) != 2 && rax_1 != 0
    {
        arg1[1] = rax_1;
        *arg1 = 2;
    }
    else
    {
        if *arg2.byte_offset(0x22c) == 0
        {
            let mut rax_3: u32 = *arg2.byte_offset(0x22d);
            
            if rax_3 == 3
            {
                rax_3 = 4;
                
                if *arg2.byte_offset(0x248) != 0
                {
                    *arg2.byte_offset(0x22d) = rax_3;
                }
            }
            else if rax_3 == 4
            {
                rax_3 = 3;
                
                if *arg2.byte_offset(0x236) != 0
                {
                    *arg2.byte_offset(0x22d) = rax_3;
                }
            }
        }
        
        rg::flags::hiargs::State::new::h193f40371f2d9d77(&var_328);
        let rcx_1: u64 = var_328;
        let mut var_320: u64;
        
        if -(rcx_1) != -0x8000000000000000
        {
            let mut var_318: *mut *mut i64;
            let mut var_288: i128 = var_318;
            let mut var_298: u64 = rcx_1;
            let var_290_1: u64 = var_320;
            rg::flags::hiargs::Patterns::from_low_args::hc7cc9fe7a840f0f3(&var_328, &var_298, arg2);
            let mut r15_1: u64 = -0x8000000000000000;
            let rcx_2: u64 = var_328;
            
            if rcx_2 != -0x8000000000000000
            {
                let mut var_248: u64 = rcx_2;
                let var_240_1: u64 = var_320;
                let var_238_1: *mut *mut i64 = var_318;
                rg::flags::hiargs::Paths::from_low_args::hfc0513af1d20ff5a(&var_328, &var_298, 
                    arg2);
                let rcx_3: u64 = var_328;
                
                if rcx_3 != -0x8000000000000000
                {
                    let zmm0_2: i128 = var_318;
                    let mut var_270: u64 = rcx_3;
                    let var_268_1: u64 = var_320;
                    let rax_5: i32 =
                        rg::flags::hiargs::BinaryDetection::from_low_args::h6e6bee379070ab5d(
                        *arg2.byte_offset(0x246), *arg2.byte_offset(0x24f));
                    let mut var_7b: i128;
                    rg::flags::hiargs::take_color_specs::h0b7bead426c7466d(&var_7b, arg2);
                    let mut var_2a8: u64 =
                        rg::flags::hiargs::take_hyperlink_config::h6e331ae3f264474d(arg2);
                    let mut rbp_1: i32;
                    let mut r13_1: i32;
                    
                    if *arg2.byte_offset(0x22c) == 0
                    {
                        let mut rax_6: u64;
                        rax_6 = *arg2.byte_offset(0x22d) == 5;
                        rax_6 |= *arg2.byte_offset(0x24b);
                        rbp_1 = rax_6 ^ 1;
                        r13_1 = 0x3b9aca00;
                        
                        if rax_6 != 0
                        {
                            r13_1 = 0;
                        }
                    }
                    else
                    {
                        r13_1 = 0x3b9aca00;
                        rbp_1 = 1;
                    }
                    
                    rg::flags::hiargs::types::h1591fa6a84c3e5d9(&var_328, arg2[0x1b], 
                        *arg2.byte_offset(0x1b8));
                    let rcx_4: u64 = var_328;
                    
                    if rcx_4 != -0x8000000000000000
                    {
                        let zmm0_3: i128 = var_318;
                        let mut var_310: i128;
                        let var_198_1: i128 = var_310;
                        let mut var_1b8: u64 = rcx_4;
                        let var_1b0_1: u64 = var_320;
                        rg::flags::hiargs::globs::h25ebd56cf030eec2(&var_328, &var_298, arg2);
                        let rcx_5: u64 = var_328;
                        
                        if rcx_5 != -0x8000000000000000
                        {
                            let zmm0_4: i128 = var_318;
                            let var_200_1: i128 = var_310;
                            let mut var_220: u64 = rcx_5;
                            let var_218_1: u64 = var_320;
                            rg::flags::hiargs::preprocessor_globs::h42aee61fc9b1d1ae(&var_328, 
                                &var_298, *arg2.byte_offset(0x198), arg2[0x1a]);
                            let rcx_7: u64 = var_328;
                            
                            if rcx_7 != -0x8000000000000000
                            {
                                let var_120_1: i128 = var_310;
                                let var_130_1: i128 = var_318;
                                let var_138_1: u64 = var_320;
                                let rax_11: i8 = *arg2.byte_offset(0x25a);
                                let mut var_32c_1: i8;
                                
                                if rax_11 != 1 || *var_288[8] == 1
                                {
                                    var_32c_1 = rax_11;
                                }
                                else
                                {
                                    var_32c_1 = 0;
                                }
                                
                                let mut rcx_8: i8 = *arg2.byte_offset(0x253);
                                let rax_12: i8 = *arg2.byte_offset(0x24e);
                                
                                if rcx_8 == 2
                                {
                                    rcx_8 = rax_12;
                                }
                                
                                let mut var_333: i8 = rcx_8;
                                let rcx_9: i8 = *arg2.byte_offset(0x255);
                                let mut var_330_1: i8;
                                
                                if rcx_9 != 2
                                {
                                    let mut rdx_12: i8 = 0;
                                    
                                    if (rcx_9 & 1) != 0
                                    {
                                        rdx_12 = rax_12 ^ 1;
                                    }
                                    
                                    var_330_1 = rdx_12;
                                }
                                else if (rax_12 & 1) == 0
                                {
                                    var_330_1 = *var_288[8];
                                }
                                else
                                {
                                    var_330_1 = 0;
                                }
                                
                                let mut rcx_10: i8 = 0;
                                
                                if rbp_1 != 0
                                {
                                    rcx_10 = *arg2.byte_offset(0x249);
                                }
                                
                                let rax_16: i8 = *arg2.byte_offset(0x245);
                                let mut rax_17: i64 = 1;
                                
                                if *arg2.byte_offset(0x22a) == 2 && *zmm0_2[9] == 0
                                {
                                    if arg2[6] != 1
                                    {
                                        let mut rax_18: i64;
                                        let mut rdx_13: i64;
                                        rax_18 =
                                            std::thread::available_parallelism::h897bc36791d72018();
                                        rax_17 = core::cmp::Ord::min::h01c96ae1c08faf0a(
                                            core::result::Result$LT$T$C$E$GT$::map_or::h3a782d7cb59878b1(rax_18, rdx_13), 
                                            0xc);
                                    }
                                    else
                                    {
                                        rax_17 = *arg2.byte_offset(0x68);
                                    }
                                }
                                
                                let mut var_250: i64 = rax_17;
                                
                                if core::sync::atomic::atomic_load::headb9992cbbd027a(
                                    &log::MAX_LOG_LEVEL_FILTER::hb16df1a2b362bf4c, 0) >= 4
                                {
                                    let mut var_230: *mut i64 = &var_250;
                                    let var_228_1: fn(arg1: *mut i64, arg2: *mut i64) -> u64 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::h3bef13756113ac7b;
                                    var_328 = &data_7eadf0;
                                    var_320 = 2;
                                    *var_310[8] = 0;
                                    var_318 = &var_230;
                                    var_310 = 1;
                                    let rax_21: i64 =
                                        log::__private_api::loc::h53b04f6fd0066707(&data_7eae28);
                                    let mut var_d8: *const i8 = "rg::flags::hiargserror building …";
                                    let var_d0_1: i64 = 0x11;
                                    let var_c8_1: *const i8 = "rg::flags::hiargserror building …";
                                    let var_c0_1: i64 = 0x11;
                                    let var_b8_1: i64 = rax_21;
                                    log::__private_api::log::h124fdfc9e9ed7585(&var_328, 4, 
                                        &var_d8);
                                }
                                
                                let mut rax_22: i8 = *arg2.byte_offset(0x259);
                                
                                if rax_22 == 2
                                {
                                    rax_22 = 1;
                                    
                                    if *arg2.byte_offset(0x24e) == 0
                                    {
                                        rax_22 = *zmm0_2[9] ^ 1;
                                    }
                                }
                                
                                let mut var_2b0: u64;
                                let mut var_278: *mut *mut i64;
                                
                                if (*arg2.byte_offset(0x22d) | *arg2.byte_offset(0x22c)) == 0
                                {
                                    if (var_330_1 & 1) != 0
                                    {
                                        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h1dbf6ec1d593e24c(&var_328, 1, 0);
                                        r15_1 = var_328;
                                        var_2b0 = var_320;
                                        var_278 = var_318;
                                    }
                                    else if arg2[7] != 2
                                    {
                                        let mut rax_26: i64;
                                        let mut rdx_15: i64;
                                        rax_26 = rg::flags::lowargs::ContextModeLimited::get::h7014c861f00e9897(&arg2[7]);
                                        
                                        if (rdx_15 | rax_26) != 0
                                            && arg2[0x1c] != -0x8000000000000000
                                        {
                                            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h92b52b9ab5dd1bb4(&var_328, *arg2.byte_offset(0x1c8), arg2[0x1d]);
                                            let rax_27: u64 = var_328;
                                            
                                            if rax_27 != -0x8000000000000000
                                            {
                                                var_2b0 = var_320;
                                                var_278 = var_318;
                                                r15_1 = rax_27;
                                            }
                                        }
                                    }
                                }
                                
                                let mut rax_28: u32 = *arg2.byte_offset(0x256);
                                let mut var_b0: *mut c_void = arg2.byte_offset(0x22c);
                                let var_a8_1: *mut c_void = arg2.byte_offset(0x249);
                                let var_a0_1: *mut c_void = arg2.byte_offset(0x24e);
                                let var_98_1: *mut c_void = &*var_288[8];
                                let var_90_1: *mut u64 = &var_270;
                                let var_88_1: *mut i8 = &var_333;
                                
                                if rax_28 == 2
                                {
                                    rax_28 = rg::flags::hiargs::HiArgs::from_low_args::_$u7b$$u7b$closure$u7d$$u7d$::h64fa314adebbcf1e(&var_b0);
                                }
                                
                                let mut rcx_12: u32 = *arg2.byte_offset(0x258);
                                
                                if rcx_12 == 0
                                {
                                    let rdx_18: i64 = zmm0_2;
                                    rcx_12 = 1;
                                    
                                    if rdx_18 < 0xb
                                    {
                                        var_328 = var_268_1;
                                        let var_320_1: i64 = var_268_1 + rdx_18 * 0x18;
                                        rax_28 = rax_28;
                                        rcx_12 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::all::ha7dcd94a8ceee422(&var_328) ^ 1;
                                    }
                                }
                                else if rcx_12 != 1
                                {
                                    rcx_12 = 1;
                                }
                                else
                                {
                                    rcx_12 = 0;
                                }
                                
                                arg1[0x30] = var_238_1;
                                *arg1.byte_offset(0x170) = var_248;
                                let mut zmm0_5: i128 = var_270;
                                *arg1.byte_offset(0x160) = zmm0_2;
                                *arg1.byte_offset(0x150) = zmm0_5;
                                zmm0_5 = arg2[7];
                                let mut zmm1_3: i128 = arg2[8];
                                *arg1.byte_offset(0x80) = arg2[9];
                                *arg1.byte_offset(0x70) = zmm1_3;
                                *arg1.byte_offset(0x60) = zmm0_5;
                                arg1[0x4f] = arg2[0x1d];
                                *arg1.byte_offset(0x268) = arg2[0x1c];
                                *arg1.byte_offset(0xa0) = *arg2.byte_offset(0xf8);
                                arg1[0x16] = *arg2.byte_offset(0x108);
                                arg1[0x19] = arg2[0x12];
                                *arg1.byte_offset(0xb8) = arg2[0x11];
                                *arg1.byte_offset(0x138) = *arg2.byte_offset(0x178);
                                arg1[0x29] = *arg2.byte_offset(0x188);
                                *arg1.byte_offset(0xd0) = var_220;
                                *arg1.byte_offset(0xe0) = zmm0_4;
                                *arg1.byte_offset(0xf0) = var_200_1;
                                let var_2f8: i128;
                                *arg1.byte_offset(0x100) = var_2f8;
                                let var_2e8: i128;
                                *arg1.byte_offset(0x110) = var_2e8;
                                let var_2d8: i128;
                                *arg1.byte_offset(0x120) = var_2d8;
                                let var_2c8: i128;
                                arg1[0x26] = var_2c8;
                                *arg1.byte_offset(0x298) = arg2[0x1f];
                                arg1[0x55] = arg2[0x20];
                                *arg1.byte_offset(0x188) = rcx_7;
                                *arg1.byte_offset(0x198) = var_130_1;
                                *arg1.byte_offset(0x1a8) = var_120_1;
                                *arg1.byte_offset(0x1b8) = var_2f8;
                                *arg1.byte_offset(0x1c8) = var_2e8;
                                *arg1.byte_offset(0x1d8) = var_2d8;
                                arg1[0x3d] = var_2c8;
                                *arg1.byte_offset(0x2b0) = *arg2.byte_offset(0x208);
                                arg1[0x58] = *arg2.byte_offset(0x218);
                                let var_2b8: i64;
                                arg1[0x4c] = var_2b8;
                                zmm0_5 = arg2[0xa];
                                *arg1.byte_offset(0x1f0) = var_1b8;
                                *arg1.byte_offset(0x200) = zmm0_3;
                                *arg1.byte_offset(0x210) = var_198_1;
                                *arg1.byte_offset(0x220) = var_2f8;
                                *arg1.byte_offset(0x230) = var_2e8;
                                *arg1.byte_offset(0x240) = var_2d8;
                                *arg1.byte_offset(0x250) = var_2c8;
                                let var_40: i128;
                                *arg1.byte_offset(0x360) = var_40;
                                zmm1_3 = var_7b;
                                let var_4b: i128;
                                *arg1.byte_offset(0x355) = var_4b;
                                let var_5b: i128;
                                *arg1.byte_offset(0x345) = var_5b;
                                let var_6b: i128;
                                *arg1.byte_offset(0x335) = var_6b;
                                *arg1.byte_offset(0x325) = zmm1_3;
                                *arg1 = *arg2;
                                *arg1.byte_offset(0x10) = arg2[1];
                                *arg1.byte_offset(0x20) = arg2[2];
                                *arg1.byte_offset(0x30) = arg2[3];
                                *arg1.byte_offset(0x40) = arg2[4];
                                *arg1.byte_offset(0x50) = arg2[5];
                                *arg1.byte_offset(0x90) = zmm0_5;
                                arg1[0x50] = r15_1;
                                arg1[0x51] = var_2b0;
                                arg1[0x52] = var_278;
                                __builtin_memset(&arg1[0x59], 0, 0x38);
                                arg1[0x60] = r13_1;
                                arg1[0x61] = var_2a8;
                                arg1[0x62] = var_250;
                                arg1[0x63] = rax_5;
                                *arg1.byte_offset(0x31c) = *arg2.byte_offset(0x228);
                                *arg1.byte_offset(0x31e) = rax_16;
                                *arg1.byte_offset(0x31f) = 0;
                                arg1[0x64] = *arg2.byte_offset(0x22a);
                                let rsi_9: i8 = var_333;
                                *arg1.byte_offset(0x324) = *arg2.byte_offset(0x22e);
                                arg1[0x6e] = rsi_9;
                                *arg1.byte_offset(0x371) = *arg2.byte_offset(0x22f);
                                *arg1.byte_offset(0x372) = arg2[0x23];
                                *arg1.byte_offset(0x374) = var_330_1;
                                *arg1.byte_offset(0x375) = *arg2.byte_offset(0x233);
                                *arg1.byte_offset(0x379) = *var_288[8];
                                rax_28 &= 1;
                                *arg1.byte_offset(0x37a) = rax_28;
                                *arg1.byte_offset(0x37b) = *arg2.byte_offset(0x237);
                                *arg1.byte_offset(0x37c) = rcx_12;
                                *arg1.byte_offset(0x37d) = *arg2.byte_offset(0x238);
                                *arg1.byte_offset(0x37f) = *arg2.byte_offset(0x23b);
                                *arg1.byte_offset(0x383) = arg2[0x24];
                                *arg1.byte_offset(0x385) = *arg2.byte_offset(0x243);
                                *arg1.byte_offset(0x387) = *arg2.byte_offset(0x246);
                                *arg1.byte_offset(0x38b) = rcx_10;
                                *arg1.byte_offset(0x38c) = *arg2.byte_offset(0x24a);
                                *arg1.byte_offset(0x38d) = *arg2.byte_offset(0x24c);
                                *arg1.byte_offset(0x38f) = *arg2.byte_offset(0x24e);
                                arg1[0x72] = rax_22;
                                *arg1.byte_offset(0x391) = arg2[0x25];
                                *arg1.byte_offset(0x393) = *arg2.byte_offset(0x252);
                                *arg1.byte_offset(0x394) = *arg2.byte_offset(0x254);
                                *arg1.byte_offset(0x395) = var_32c_1;
                                core::ptr::drop_in_place$LT$rg..flags..hiargs..State$GT$::he4afa94967356500(&var_298);
                                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..ffi..os_str..OsString$GT$$GT$::hdf4ecb22c21181e2(&arg2[0xb]);
                                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$rg..flags..lowargs..PatternSource$GT$$GT$::h95e03c0a78b183d3(arg2.byte_offset(0xc8));
                                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$grep_printer..color..UserColorSpec$GT$$GT$::hfc23f7e53dc8fcc5(arg2[0xe], *arg2.byte_offset(0xe8));
                                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h86d7461d11433c9d(arg2.byte_offset(0x128));
                                core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::h8f23796f433813df(arg2.byte_offset(0x1d8));
                                core::ptr::drop_in_place$LT$grep_printer..hyperlink..HyperlinkFormat$GT$::h1cb5bdcdc060898b(&arg2[0x14]);
                                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h86d7461d11433c9d(&arg2[0x16]);
                                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h86d7461d11433c9d(&arg2[0x19]);
                                return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$rg..flags..lowargs..TypeChange$GT$$GT$::hb2325711b27c33dd(arg2.byte_offset(0x1a8));
                            }
                            
                            arg1[1] = var_320;
                            *arg1 = 2;
                            core::ptr::drop_in_place$LT$ignore..overrides..Override$GT$::hae0bd07e5bff913c(&var_220);
                        }
                        else
                        {
                            arg1[1] = var_320;
                            *arg1 = 2;
                        }
                        
                        core::ptr::drop_in_place$LT$ignore..types..Types$GT$::h1839ad6e7f2058be(
                            &var_1b8);
                    }
                    else
                    {
                        arg1[1] = var_320;
                        *arg1 = 2;
                    }
                    
                    core::ptr::drop_in_place$LT$grep_printer..hyperlink..HyperlinkConfig$GT$::had63c3d070c9667f(&var_2a8);
                    core::ptr::drop_in_place$LT$rg..flags..hiargs..Paths$GT$::hf5dee04892f7ed87(
                        &var_270);
                }
                else
                {
                    arg1[1] = var_320;
                    *arg1 = 2;
                }
                
                core::ptr::drop_in_place$LT$rg..flags..hiargs..Patterns$GT$::head6f9c15187a03e(
                    &var_248);
            }
            else
            {
                arg1[1] = var_320;
                *arg1 = 2;
            }
            
            core::ptr::drop_in_place$LT$rg..flags..hiargs..State$GT$::he4afa94967356500(&var_298);
        }
        else
        {
            arg1[1] = var_320;
            *arg1 = 2;
        }
    }
    
    core::ptr::drop_in_place$LT$rg..flags..lowargs..LowArgs$GT$::h7b549ec26e82ff0b(arg2)
}
