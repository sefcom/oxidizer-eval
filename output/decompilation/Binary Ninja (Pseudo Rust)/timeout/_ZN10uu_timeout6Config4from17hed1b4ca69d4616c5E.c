
  fn uu_timeout::Config::from::hed1b4ca69d4616c5(arg1: *mut i64, arg2: *mut c_void) -> *mut i64

{
    let mut var_f8: *mut c_void;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h750a4b638bcd2e41(&var_f8, 
        arg2, "signalpreserve-statusverbosecomm…", 6);
    let rax: *mut c_void = clap_builder::parser::error::MatchesError::unwrap::hf05e35bee3f0c992(
        "signalpreserve-statusverbosecomm…", 6, &var_f8);
    let mut rdx_1: i64;
    
    if rax == 0
    {
        let mut rax_4: i8;
        rax_4 = uucore::features::signals::signal_by_name_or_value::h89b982f23c5744ec(
            "TERMtruemaincharSTOPTTIN -> \x1b…", 4);
        
        if (rax_4 & 1) != 0
        {
            goto 'label_46d0da;
        }
        
        core::option::unwrap_failed::h893f57cb7db71cb7();
        /* no return */
    }
    
    let mut rax_1: i8;
    rax_1 = uucore::features::signals::signal_by_name_or_value::h89b982f23c5744ec(
        *rax.byte_offset(8), *rax.byte_offset(0x10));
    let mut var_b0: i64;
    
    if (rax_1 & 1) != 0
    {
        'label_46d0da:
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h750a4b638bcd2e41(
            &var_f8, arg2, "kill-aftersignalpreserve-statusv…", 0xa);
        let rax_5: *mut c_void =
            clap_builder::parser::error::MatchesError::unwrap::hf05e35bee3f0c992(
            "kill-aftersignalpreserve-statusv…", 0xa, &var_f8);
        let mut var_100_1: i32;
        let var_a8: i64;
        let var_a0: i64;
        let mut var_70: i64;
        
        if rax_5 == 0
        {
            var_100_1 = 0x3b9aca00;
            'label_46d150:
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h750a4b638bcd2e41(
                &var_f8, arg2, "duration\n       ", 8);
            let rax_8: *mut c_void =
                clap_builder::parser::error::MatchesError::unwrap::hf05e35bee3f0c992(
                "duration\n       ", 8, &var_f8);
            
            if rax_8 == 0
            {
                core::option::unwrap_failed::h893f57cb7db71cb7();
                /* no return */
            }
            
            uucore::features::parser::parse_time::from_str::h30003dba666110f8(&var_b0, 
                *rax_8.byte_offset(8), *rax_8.byte_offset(0x10), 1);
            
            if var_b0 != -0x8000000000000000
            {
                goto 'label_46d28f;
            }
            
            let rax_11: i8 =
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
                arg2, "preserve-statusverbosecommandsrc…", 0xf);
            let rax_12: i8 =
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
                arg2, "foregroundkill-aftersignalpreser…", 0xa);
            let rax_13: i8 =
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
                arg2, "verbosecommandsrc/uu/timeout/src…", 7);
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h9cd26fd33fbec693(
                &var_f8, arg2);
            clap_builder::parser::error::MatchesError::unwrap::h89a327b00226d280(&var_b0, &var_f8);
            
            if var_b0 == 0
            {
                core::option::unwrap_failed::h893f57cb7db71cb7();
                /* no return */
            }
            
            let var_80: i128;
            let var_c8_1: i128 = var_80;
            let mut var_d8: i64;
            let var_90: i128;
            var_d8 = var_90;
            let mut var_e8: i64;
            var_e8 = var_a0;
            var_f8 = var_b0;
            core::iter::traits::iterator::Iterator::collect::ha5b465dfecffc17e(arg1, &var_f8);
            arg1[3] = var_a8;
            arg1[4] = var_a0;
            arg1[5] = var_70;
            arg1[6] = var_100_1;
            arg1[7] = rdx_1;
            arg1[8] = rax_12;
            *arg1.byte_offset(0x41) = rax_11;
            *arg1.byte_offset(0x42) = rax_13;
        }
        else
        {
            uucore::features::parser::parse_time::from_str::h30003dba666110f8(&var_b0, 
                *rax_5.byte_offset(8), *rax_5.byte_offset(0x10), 1);
            
            if var_b0 == -0x8000000000000000
            {
                var_70 = var_a8;
                var_100_1 = var_a0;
                goto 'label_46d150;
            }
            
            'label_46d28f:
            let var_e8_2: i64 = var_a0;
            var_f8 = var_b0;
            let mut var_e0: i64;
            var_e0 = 0x7d;
            arg1[1] = alloc::boxed::Box$LT$T$GT$::new::h37b75c6be93c3797(&var_f8);
            arg1[2] = &data_512700;
            *arg1 = -0x8000000000000000;
        }
    }
    else
    {
        let rax_2: i64 = *rax.byte_offset(8);
        let rcx_1: i64 = *rax.byte_offset(0x10);
        let mut var_50: i64 = 0;
        let var_48_1: i64 = rax_2;
        let var_40_1: i64 = rcx_1;
        let var_38_1: i8 = 1;
        let mut var_60: *mut i64 = &var_50;
        let var_58_1: fn(arg1: *mut i32, arg2: *mut i64) -> i64 =
            _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
        var_f8 = &data_5126c0;
        let var_f0_1: i64 = 2;
        let var_d8_1: i64 = 0;
        let var_e8_1: *mut *mut i64 = &var_60;
        let var_e0_1: i64 = 1;
        core::option::Option$LT$T$GT$::map_or_else::h689cb97ed54ab1f6(&var_b0, &var_f8);
        let var_98_1: i32 = 0x7d;
        arg1[1] = alloc::boxed::Box$LT$T$GT$::new::h37b75c6be93c3797(&var_b0);
        arg1[2] = &data_512700;
        *arg1 = -0x8000000000000000;
    }
    arg1
}
