
  fn uu_tail::args::Settings::from::hd259b094c0210bc3(arg1: *mut i64, arg2: *mut c_void) -> *mut i64

{
    let r13: i8 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg2, 
        "Fretryfollowuse-pollingverbose-p…", 1);
    let mut rax: i8 = 1;
    
    if r13 == 0
    {
        rax = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            arg2, "retryfollowuse-pollingverbose-pr…", 5);
    }
    
    let mut var_1c8: *mut *mut [i8; 0x89];
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h7b3d077d0028ebf2(
        &var_1c8, arg2, "followuse-pollingverbose-presume…", 6);
    let rax_1: *mut c_void = clap_builder::parser::error::MatchesError::unwrap::hf1a769ab7d4b2739(
        "followuse-pollingverbose-presume…", 6, &var_1c8);
    let mut rdx: *mut i64;
    
    if rax_1 == 0
    {
        rdx = 2;
        
        if r13 != 0
        {
            rdx = 1;
        }
    }
    else
    {
        let r15_1: i64 = *rax_1.byte_offset(8);
        let r12_1: u64 = *rax_1.byte_offset(0x10);
        
        if r13 == 0
        {
            'label_49f126:
            let mut rax_4: i8;
            rax_4 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h700a79b2753b21bb(r15_1, r12_1, &data_421a48[0x10], 4);
            
            if rax_4 != 0
            {
                rdx = 1;
            }
            else
            {
                rdx = nullptr;
            }
        }
        else
        {
            let mut rax_2: i8;
            let mut rdx_1: i64;
            rax_2 =
                clap_builder::parser::matches::arg_matches::ArgMatches::index_of::h533e2cba337d4042(
                arg2, "Fretryfollowuse-pollingverbose-p…", 1);
            let mut rax_3: i8;
            rax_3 =
                clap_builder::parser::matches::arg_matches::ArgMatches::index_of::h533e2cba337d4042(
                arg2, "followuse-pollingverbose-presume…", 6);
            let rcx_1: bool = rdx_1 <= rdx;
            
            if (rax_2 & 1) == 0
            {
                goto 'label_49f126;
            }
            
            rdx = 1;
            
            if (rax_3 & rcx_1) != 0
            {
                goto 'label_49f126;
            }
        }
    }
    
    let var_154: i8 = rdx;
    let rax_5: i8 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg2, 
        "use-pollingverbose-presume-input…", 0xb);
    uu_tail::args::FilterMode::from::hb59232841d18f0f6(&var_1c8, arg2);
    let rbp_1: *mut *mut [i8; 0x89] = var_1c8;
    let mut result: *mut i64;
    let mut var_1c0: i64;
    let var_1b8: i64;
    
    if rbp_1 != 5
    {
        let rax_6: i8 =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            arg2, "verbose-presume-input-pipesleep-…", 7);
        let rax_7: i8 =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            arg2, "-presume-input-pipesleep-interva…", 0x13);
        _$LT$uu_tail..args..Settings$u20$as$u20$core..default..Default$GT$::default::hab317295196880fb(&var_1c8);
        let var_fc_1: i8 = var_154;
        let mut var_148: *mut *mut [i8; 0x89] = rbp_1;
        let var_140_1: i64 = var_1c0;
        let var_188: i64;
        let mut var_108_1: i64 = var_188;
        let var_190: i32;
        let var_110_1: i32 = var_190;
        let var_ff_1: i8 = rax_5;
        let var_fe_1: i8 = rax_6;
        result = arg1;
        let mut var_1b0: i128;
        let mut var_130: i128 = var_1b0;
        let var_1a0: i128;
        let mut var_120_1: i128 = var_1a0;
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h7b3d077d0028ebf2(
            &var_1c8, arg2, "sleep-intervalmax-unchanged-stat…", 0xe);
        let rax_14: *mut c_void =
            clap_builder::parser::error::MatchesError::unwrap::hf1a769ab7d4b2739(
            "sleep-intervalmax-unchanged-stat…", 0xe, &var_1c8);
        
        if rax_14 == 0
        {
            goto 'label_49f309;
        }
        
        let mut var_d8: *mut c_void = rax_14;
        let mut var_d0: i64;
        uucore::features::parser::parse_time::from_str::h30003dba666110f8(&var_d0, 
            *rax_14.byte_offset(8), *rax_14.byte_offset(0x10), 0);
        let mut rax_19: u64;
        let mut rax_20: *mut *mut c_void;
        
        if !(0 + -(var_d0))
        {
            rax_19 = uu_tail::args::Settings::from::_$u7b$$u7b$closure$u7d$$u7d$::hfdc7478eec48226d(
                &var_d8, &var_d0);
            'label_49f405:
            result[1] = rax_19;
            rax_20 = &data_573010;
            'label_49f74c:
            result[2] = rax_20;
            *result = 5;
            core::ptr::drop_in_place$LT$uu_tail..args..Settings$GT$::h19701cb79d8addd9(&var_148);
        }
        else
        {
            let var_c8: i64;
            *var_120_1[8] = var_c8;
            let var_c0: i32;
            let var_110_2: i32 = var_c0;
            'label_49f309:
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h7b3d077d0028ebf2(
                &var_1c8, arg2, "max-unchanged-statspidfilesquiet…", 0x13);
            let rax_16: *mut c_void =
                clap_builder::parser::error::MatchesError::unwrap::hf1a769ab7d4b2739(
                "max-unchanged-statspidfilesquiet…", 0x13, &var_1c8);
            let mut var_178: i64;
            let mut var_f8: *mut i64;
            
            if rax_16 != 0
            {
                let r15_3: *mut i8 = *rax_16.byte_offset(8);
                let r12_4: i64 = *rax_16.byte_offset(0x10);
                let rax_17: i64 =
                    core::num::_$LT$impl$u20$u32$GT$::from_ascii_radix::h825576ac29f90020(r15_3, 
                    r12_4);
                
                if (rax_17 & 1) != 0
                {
                    var_178 = 0;
                    let var_170_1: *mut i8 = r15_3;
                    let var_168_1: i64 = r12_4;
                    let var_160_1: i8 = 1;
                    var_f8 = &var_178;
                    let var_f0_1: fn(arg1: *mut i32, arg2: *mut i64) -> i64 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                    var_1c8 = &data_572fb0;
                    let var_1c0_1: i64 = 1;
                    *var_1b0[8] = 0;
                    let var_1b8_1: *mut *mut i64 = &var_f8;
                    var_1b0 = 1;
                    let mut var_b8: i128;
                    core::option::Option$LT$T$GT$::map_or_else::h0ad4dbebb1db8692(&var_b8, 
                        &var_1c8);
                    var_1b0 = 1;
                    var_1c8 = var_b8;
                    let var_a8: i64;
                    let var_1b8_2: i64 = var_a8;
                    rax_19 = alloc::boxed::Box$LT$T$GT$::new::hb525c77ba03b79d9(&var_1c8);
                    goto 'label_49f405;
                }
                
                var_108_1 = rax_17 >> 0x20;
            }
            
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h7b3d077d0028ebf2(
                &var_1c8, arg2, "pidfilesquietinvalid number of s…", 3);
            let rax_22: *mut c_void =
                clap_builder::parser::error::MatchesError::unwrap::hf1a769ab7d4b2739(
                "pidfilesquietinvalid number of s…", 3, &var_1c8);
            
            if rax_22 != 0
            {
                let r12_5: *mut i8 = *rax_22.byte_offset(8);
                let r15_4: i64 = *rax_22.byte_offset(0x10);
                let rax_23: i64 =
                    core::num::_$LT$impl$u20$i32$GT$::from_ascii_radix::h8c416a74051ba1e6(r12_5, 
                    r15_4);
                let mut rax_25: u64;
                
                if (rax_23 & 1) != 0
                {
                    let mut var_1c9: i8 = *rax_23[1];
                    var_178 = 0;
                    let var_170_2: *mut i8 = r12_5;
                    let var_168_2: i64 = r15_4;
                    let var_160_2: i8 = 1;
                    var_f8 = &var_178;
                    let var_f0_2: fn(arg1: *mut i32, arg2: *mut i64) -> i64 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                    let var_e8_1: *mut i8 = &var_1c9;
                    let var_e0_1: fn(arg1: *mut i8, arg2: *mut i64) -> i64 = _$LT$core..num..error..ParseIntError$u20$as$u20$core..fmt..Display$GT$::fmt::h3e61086f3d7b9af4;
                    var_1c8 = &data_572fd0;
                    let var_1c0_2: i64 = 2;
                    *var_1b0[8] = 0;
                    let var_1b8_3: *mut *mut i64 = &var_f8;
                    var_1b0 = 2;
                    let mut var_88: i128;
                    core::option::Option$LT$T$GT$::map_or_else::h0ad4dbebb1db8692(&var_88, 
                        &var_1c8);
                    var_1b0 = 1;
                    var_1c8 = var_88;
                    let var_78: i64;
                    let var_1b8_4: i64 = var_78;
                    rax_25 = alloc::boxed::Box$LT$T$GT$::new::hb525c77ba03b79d9(&var_1c8);
                    'label_49f741:
                    result[1] = rax_25;
                    rax_20 = &data_572f18;
                    goto 'label_49f74c;
                }
                
                if rax_23 < 0
                {
                    var_178 = 0;
                    let var_170_3: *mut i8 = r12_5;
                    let var_168_3: i64 = r15_4;
                    let var_160_3: i8 = 1;
                    var_f8 = &var_178;
                    let var_f0_3: fn(arg1: *mut i32, arg2: *mut i64) -> i64 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                    var_1c8 = &data_572fc0;
                    let var_1c0_3: i64 = 1;
                    *var_1b0[8] = 0;
                    let var_1b8_5: *mut *mut i64 = &var_f8;
                    var_1b0 = 1;
                    let mut var_a0: i128;
                    core::option::Option$LT$T$GT$::map_or_else::h0ad4dbebb1db8692(&var_a0, 
                        &var_1c8);
                    var_1b0 = 1;
                    var_1c8 = var_a0;
                    let var_90: i64;
                    let var_1b8_6: i64 = var_90;
                    rax_25 = alloc::boxed::Box$LT$T$GT$::new::hb525c77ba03b79d9(&var_1c8);
                    goto 'label_49f741;
                }
                
                *var_108_1[4] = rax_23 >> 0x20;
            }
            
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::hfeeaae4cf3e9fe7d(
                &var_1c8, arg2);
            let mut var_70: i64;
            clap_builder::parser::error::MatchesError::unwrap::h06967c07660eda5f(&var_70, &var_1c8);
            
            if var_70 == 0
            {
                uu_tail::args::Settings::from::_$u7b$$u7b$closure$u7d$$u7d$::h7af28a89fa321ee6(
                    &var_1c8);
            }
            else
            {
                core::iter::traits::iterator::Iterator::collect::hac11550ad94c7bc1(&var_1c8, 
                    &var_70);
                let rax_27: *mut *mut [i8; 0x89] = var_1c8;
                var_178 = var_1c0;
                
                if -(rax_27) != -0x8000000000000000
                {
                    var_1c0 = var_178;
                    var_1c8 = rax_27;
                }
                else
                {
                    uu_tail::args::Settings::from::_$u7b$$u7b$closure$u7d$$u7d$::h7af28a89fa321ee6(
                        &var_1c8);
                }
            }
            
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_tail..paths..Input$GT$$GT$::hc1e8b2989ad93a4f(&var_130);
            var_120_1 = var_1b8;
            var_130 = var_1c8;
            result = arg1;
            let mut rax_30: i8;
            
            if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
                arg2, "verbose-presume-input-pipesleep-…", 7) != 0 || var_120_1 >= 2
            {
                rax_30 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg2, "quietinvalid number of seconds: …", 5) ^ 1;
            }
            else
            {
                rax_30 = 0;
            }
            
            let zmm0_6: i128 = var_148;
            let zmm2_1: i128 = var_130;
            *result.byte_offset(0x30) = var_120_1;
            *result.byte_offset(0x20) = zmm2_1;
            *result.byte_offset(0x10) = var_1b8;
            *result = zmm0_6;
            result[8] = var_108_1;
            result[9] = rax;
            *result.byte_offset(0x4a) = rax_30;
            *result.byte_offset(0x4b) = rax_7;
            let var_f9: i8;
            *result.byte_offset(0x4f) = var_f9;
        }
    }
    else
    {
        arg1[1] = var_1c0;
        arg1[2] = var_1b8;
        result = arg1;
        *arg1 = 5;
    }
    result
}
