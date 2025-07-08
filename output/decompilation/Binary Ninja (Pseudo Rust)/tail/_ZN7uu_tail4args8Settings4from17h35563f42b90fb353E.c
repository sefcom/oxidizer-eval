
  fn uu_tail::args::Settings::from::h35563f42b90fb353(arg1: *mut i64, arg2: *mut c_void) -> *mut i64

{
    let r13: i8 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(arg2, 
        "Fretryuse-pollingverbose-presume…", 1);
    let mut rax: i8 = 1;
    
    if r13 == 0
    {
        rax = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
            arg2, "retryuse-pollingverbose-presume-…", 5);
    }
    
    let mut var_1d8: *mut *mut c_void;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h0a7145d185c82391(
        &var_1d8, arg2, "followsleep-intervalinvalid numb…", 6);
    let rax_1: *mut c_void = clap_builder::parser::error::MatchesError::unwrap::hd5b58983d4d3848b(
        "followsleep-intervalinvalid numb…", 6, &var_1d8);
    let mut rcx_1: i8;
    
    if rax_1 == 0
    {
        rcx_1 = 2;
        
        if r13 != 0
        {
            rcx_1 = 1;
        }
    }
    else
    {
        let r15_1: i64 = *rax_1.byte_offset(8);
        let r12_1: u64 = *rax_1.byte_offset(0x10);
        
        if r13 == 0
        {
            'label_4f8f76:
            
            if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h1e3c65a51412c010(r15_1, r12_1, &data_41ef2c[4], 4) != 0
            {
                rcx_1 = 1;
            }
            else
            {
                rcx_1 = 0;
            }
        }
        else
        {
            let mut rax_2: i64;
            let mut rdx_1: i64;
            rax_2 =
                clap_builder::parser::matches::arg_matches::ArgMatches::index_of::hc3c8b487726d2353(
                arg2, "Fretryuse-pollingverbose-presume…", 1);
            let mut rax_3: i64;
            let mut rdx_2: i64;
            rax_3 =
                clap_builder::parser::matches::arg_matches::ArgMatches::index_of::hc3c8b487726d2353(
                arg2, "followsleep-intervalinvalid numb…", 6);
            
            if rax_2 == 0
            {
                goto 'label_4f8f76;
            }
            
            rcx_1 = 1;
            
            if rax_3 != 0 && rdx_1 <= rdx_2
            {
                goto 'label_4f8f76;
            }
        }
    }
    
    let rax_5: i8 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(arg2, 
        "use-pollingverbose-presume-input…", 0xb);
    uu_tail::args::FilterMode::from::h013a88fb4d6b4428(&var_1d8, arg2);
    let rbp_1: *mut *mut c_void = var_1d8;
    let mut var_1d0: i64;
    let mut var_1c8: i64;
    
    if rbp_1 != 5
    {
        let rax_7: i8 =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
            arg2, "verbose-presume-input-pipequiet:…", 7);
        let rax_8: i8 =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
            arg2, "-presume-input-pipequiet: warnin…", 0x13);
        _$LT$uu_tail..args..Settings$u20$as$u20$core..default..Default$GT$::default::hfebeb1c4deedc4af(&var_1d8);
        let var_b4_1: i8 = rcx_1;
        let mut var_100: *mut *mut c_void = rbp_1;
        let var_f8_1: i64 = var_1d0;
        let var_f0_1: i64 = var_1c8;
        let mut var_198: i64;
        let mut var_c0_1: i64 = var_198;
        let var_1a0: i32;
        let var_c8_1: i32 = var_1a0;
        let var_b7_1: i8 = rax_5;
        let var_b6_1: i8 = rax_7;
        let mut var_1c0: i128;
        let mut var_e8: i128 = var_1c0;
        let mut var_1b0: i128;
        let mut var_d8_1: i128 = var_1b0;
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h0a7145d185c82391(
            &var_1d8, arg2, "sleep-intervalinvalid number of …", 0xe);
        let rax_14: *mut c_void =
            clap_builder::parser::error::MatchesError::unwrap::hd5b58983d4d3848b(
            "sleep-intervalinvalid number of …", 0xe, &var_1d8);
        
        if rax_14 == 0
        {
            goto 'label_4f91a7;
        }
        
        let mut var_b0: *mut c_void = rax_14;
        __builtin_strncpy(&var_198, "\n\n\n\n\n\n\n\n\n\n", 0xa);
        var_1d8 = data_5bb4b0;
        var_1c8 = data_5bb4c0;
        __builtin_memcpy(&*var_1c0[8], 
            "\x20\x70\x4f\x00\x00\x00\x00\x00\x40\x70\x4f\x00\x00\x00\x00\x00\x03\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00", 0x20);
        let mut var_188: i32;
        fundu_core::parse::Parser::parse_single::hf9b1910532b4386d(&var_188, &var_1d8, 
            *rax_14.byte_offset(8), *rax_14.byte_offset(0x10), &var_198);
        let mut var_158: *mut *mut [i8; 0xb9];
        let mut var_118: *mut *mut c_void;
        
        if var_188 != 8
        {
            var_118 = &var_b0;
            let var_110_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h06c7cece6fef7c8f;
            var_158 = &data_5bb450;
            let var_150_1: i64 = 2;
            let var_138_1: i64 = 0;
            let var_148_1: *mut *mut *mut c_void = &var_118;
            let mut var_140_1: i64 = 1;
            let mut var_90: i128;
            core::option::Option$LT$T$GT$::map_or_else::hb4ba59fb1ad49b60(&var_90, &var_158);
            var_140_1 = 1;
            var_158 = var_90;
            let var_80: i64;
            let var_148_2: i64 = var_80;
            arg1[1] = alloc::boxed::Box$LT$T$GT$::new::h42dcf3336ec00766(&var_158);
            arg1[2] = &data_5bb550;
            *arg1 = 5;
            core::ptr::drop_in_place$LT$core..result..Result$LT$fundu_core..time..Duration$C$fundu_core..error..ParseError$GT$$GT$::h2be0415dad2f401a(&var_188);
            core::ptr::drop_in_place$LT$uu_tail..args..Settings$GT$::h37c5ae6af18c4c5a(&var_100);
        }
        else
        {
            let var_170: i64;
            let var_98_1: i64 = var_170;
            let mut var_180: i128;
            let mut var_a8: i128 = var_180;
            let mut rax_16: i64;
            let mut rdx_5: i32;
            rax_16 = _$LT$fundu_core..time..Duration$u20$as$u20$fundu_core..time..SaturatingInto$LT$core..time..Duration$GT$$GT$::saturating_into::h30e35891ecf0eb52(&var_a8);
            *var_d8_1[8] = rax_16;
            let var_c8_2: i32 = rdx_5;
            core::ptr::drop_in_place$LT$core..result..Result$LT$fundu_core..time..Duration$C$fundu_core..error..ParseError$GT$$GT$::h2be0415dad2f401a(&var_188);
            'label_4f91a7:
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h0a7145d185c82391(
                &var_1d8, arg2, "max-unchanged-statsinvalid maxim…", 0x13);
            let rax_17: *mut c_void =
                clap_builder::parser::error::MatchesError::unwrap::hd5b58983d4d3848b(
                "max-unchanged-statsinvalid maxim…", 0x13, &var_1d8);
            
            if rax_17 == 0
            {
                goto 'label_4f9202;
            }
            
            let r15_3: *mut i8 = *rax_17.byte_offset(8);
            let r12_3: i64 = *rax_17.byte_offset(0x10);
            let rax_18: i64 = core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$u32$GT$::from_str::hecf13f2b24d2aba7(r15_3, r12_3);
            let mut var_140: i64;
            let mut rax_28: *mut *mut c_void;
            let mut rcx_5: *mut i64;
            
            if (rax_18 & 1) != 0
            {
                var_158 = nullptr;
                let var_150_2: *mut i8 = r15_3;
                let var_148_3: i64 = r12_3;
                var_140 = 1;
                var_188 = &var_158;
                var_180 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                var_1d8 = &data_5bb470;
                let var_1d0_1: i64 = 1;
                *var_1c0[8] = 0;
                let var_1c8_1: *mut i32 = &var_188;
                var_1c0 = 1;
                let mut var_78: i128;
                core::option::Option$LT$T$GT$::map_or_else::hb4ba59fb1ad49b60(&var_78, &var_1d8);
                var_1c0 = 1;
                var_1d8 = var_78;
                let var_68: i64;
                let var_1c8_2: i64 = var_68;
                rcx_5 = arg1;
                rcx_5[1] = alloc::boxed::Box$LT$T$GT$::new::h42dcf3336ec00766(&var_1d8);
                rax_28 = &data_5bb550;
                'label_4f9704:
                rcx_5[2] = rax_28;
                *rcx_5 = 5;
                core::ptr::drop_in_place$LT$uu_tail..args..Settings$GT$::h37c5ae6af18c4c5a(
                    &var_100);
            }
            else
            {
                var_c0_1 = rax_18 >> 0x20;
                'label_4f9202:
                clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h0a7145d185c82391(&var_1d8, arg2, "pidinvalid PID: : filesFretryuse…", 3);
                let rax_20: *mut c_void =
                    clap_builder::parser::error::MatchesError::unwrap::hd5b58983d4d3848b(
                    "pidinvalid PID: : filesFretryuse…", 3, &var_1d8);
                
                if rax_20 == 0
                {
                    goto 'label_4f9266;
                }
                
                let r12_4: *mut i8 = *rax_20.byte_offset(8);
                let r15_4: i64 = *rax_20.byte_offset(0x10);
                let rax_21: i64 = core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$i32$GT$::from_str::h5b8351ce1d7a5cac(r12_4, r15_4);
                let mut rax_30: *mut i128;
                
                if (rax_21 & 1) != 0
                {
                    var_118 = *rax_21[1];
                    var_158 = nullptr;
                    let var_150_3: *mut i8 = r12_4;
                    let var_148_4: i64 = r15_4;
                    var_140 = 1;
                    var_188 = &var_158;
                    var_180 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                    *var_180[8] = &var_118;
                    let var_170_1: fn(arg1: *mut i8, arg2: *mut i64) -> i64 = _$LT$core..num..error..ParseIntError$u20$as$u20$core..fmt..Display$GT$::fmt::h98d79d8d19892e5a;
                    var_1d8 = &data_5bb490;
                    let var_1d0_2: i64 = 2;
                    *var_1c0[8] = 0;
                    let var_1c8_3: *mut i32 = &var_188;
                    var_1c0 = 2;
                    let mut var_48: i128;
                    core::option::Option$LT$T$GT$::map_or_else::hb4ba59fb1ad49b60(&var_48, 
                        &var_1d8);
                    var_1c0 = 1;
                    var_1d8 = var_48;
                    let var_38: i64;
                    let var_1c8_4: i64 = var_38;
                    rax_30 = alloc::boxed::Box$LT$T$GT$::new::h7645b42f7bfbf581(&var_1d8);
                    'label_4f96f4:
                    rcx_5 = arg1;
                    rcx_5[1] = rax_30;
                    rax_28 = &data_5bb3c8;
                    goto 'label_4f9704;
                }
                
                if rax_21 < 0
                {
                    var_158 = nullptr;
                    let var_150_4: *mut i8 = r12_4;
                    let var_148_5: i64 = r15_4;
                    var_140 = 1;
                    var_188 = &var_158;
                    var_180 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                    var_1d8 = &data_5bb480;
                    let var_1d0_3: i64 = 1;
                    *var_1c0[8] = 0;
                    let var_1c8_5: *mut i32 = &var_188;
                    var_1c0 = 1;
                    let mut var_60: i128;
                    core::option::Option$LT$T$GT$::map_or_else::hb4ba59fb1ad49b60(&var_60, 
                        &var_1d8);
                    var_1c0 = 1;
                    var_1d8 = var_60;
                    let var_50: i64;
                    let var_1c8_6: i64 = var_50;
                    rax_30 = alloc::boxed::Box$LT$T$GT$::new::h7645b42f7bfbf581(&var_1d8);
                    goto 'label_4f96f4;
                }
                
                *var_c0_1[4] = rax_21 >> 0x20;
                'label_4f9266:
                clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::hcc8251d6567d3870(&var_1d8, arg2, "filesFretryuse-pollingverbose-pr…", 5);
                clap_builder::parser::error::MatchesError::unwrap::h3a2fb0b054d1f196(&var_158, 
                    "filesFretryuse-pollingverbose-pr…", 5, &var_1d8);
                
                if var_158 == 0
                {
                    uu_tail::args::Settings::from::_$u7b$$u7b$closure$u7d$$u7d$::h3c638c53028a58e9(
                        &var_1d8);
                }
                else
                {
                    let zmm0_4: i128 = var_158;
                    let var_128: i128;
                    var_1b0 = var_128;
                    let var_138: i64;
                    var_1c0 = var_138;
                    let var_148: i64;
                    var_1c8 = var_148;
                    var_1d8 = zmm0_4;
                    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h66624b19774c7a57(&var_188, &var_1d8);
                    let rax_23: *mut *mut c_void = var_188;
                    var_118 = var_180;
                    
                    if rax_23 != -0x8000000000000000
                    {
                        var_1d0 = var_118;
                        var_1d8 = rax_23;
                    }
                    else
                    {
                        uu_tail::args::Settings::from::_$u7b$$u7b$closure$u7d$$u7d$::h3c638c53028a58e9(&var_1d8);
                    }
                }
                
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_tail..paths..Input$GT$$GT$::h2f358108f234e3da(&var_e8);
                var_d8_1 = var_1c8;
                var_e8 = var_1d8;
                let mut rax_32: i8;
                
                if var_d8_1 < 2
                {
                    rax_32 = 0;
                }
                else
                {
                    rax_32 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(arg2, "quiet: warning: --retry ignored;…", 5) ^ 1;
                }
                
                let zmm0_9: i128 = var_100;
                let zmm2_2: i128 = var_e8;
                *arg1.byte_offset(0x30) = var_d8_1;
                *arg1.byte_offset(0x20) = zmm2_2;
                *arg1.byte_offset(0x10) = var_f0_1;
                *arg1 = zmm0_9;
                arg1[8] = var_c0_1;
                arg1[9] = rax;
                *arg1.byte_offset(0x4a) = rax_32;
                *arg1.byte_offset(0x4b) = rax_8;
                let var_b1: i8;
                *arg1.byte_offset(0x4f) = var_b1;
            }
        }
    }
    else
    {
        arg1[1] = var_1d0;
        arg1[2] = var_1c8;
        *arg1 = 5;
    }
    arg1
}
