
  fn uu_split::Settings::from::hea7ff87a16a6485d(arg1: *mut i64, arg2: *mut c_void, arg3: *mut c_void, arg4: u64) -> *mut i64

{
    let mut var_178: i64;
    uu_split::strategy::Strategy::from::h9ee849f2906356ca(&var_178, arg2, arg3, arg4);
    let rax: i64 = var_178;
    let mut var_170: i128;
    let mut var_1e8: i128 = var_170;
    let mut var_1a8: i128;
    let var_160: i64;
    let mut var_158: i64;
    let mut zmm0: i128;
    
    if rax != 4
    {
        zmm0 = var_1e8;
        var_1a8 = zmm0;
        let var_198_1: i64 = var_160;
        arg1[4] = var_160;
        *arg1.byte_offset(0x10) = zmm0;
        arg1[1] = rax;
        arg1[5] = var_158;
        *arg1 = 2;
    }
    else
    {
        zmm0 = var_1e8;
        let mut var_78: i128 = zmm0;
        let var_68_1: i64 = var_160;
        uu_split::filenames::Suffix::from::h3e22d3f4c49fbbaa(&var_178, arg2, &var_78);
        let r14_1: i64 = var_178;
        let mut var_198: i64;
        
        if -(r14_1) != -0x8000000000000000
        {
            let r15_1: i64 = var_170;
            let zmm0_1: i128 = var_158;
            let var_58_1: i128 = var_170;
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h613419db3ed32f13(
                &var_178, arg2);
            clap_builder::parser::error::MatchesError::unwrap::h667d7f3b57b3663f(&var_1e8, 
                &var_178);
            let mut var_1ec_1: i8;
            let mut var_148: i128;
            let mut rax_4: i8;
            
            if var_1e8 == 0
            {
                rax_4 = 0xa;
                'label_46eaa5:
                var_1ec_1 = rax_4;
                'label_46eac0:
                clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hf389485a9e6f35ab(&var_178, arg2, "-io-blksizeinputprefix---a-b-C-l…", 0xb);
                let rax_10: *mut c_void =
                    clap_builder::parser::error::MatchesError::unwrap::h00d609c63283993e(
                    "-io-blksizeinputprefix---a-b-C-l…", 0xb, &var_178);
                let mut var_188_1: i64;
                let mut var_d0: i64;
                
                if rax_10 == 0
                {
                    var_188_1 = 0;
                    'label_46eb70:
                    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hf389485a9e6f35ab(&var_1e8, arg2, "prefix---a-b-C-l-n-tsrc/uu/split…", 6);
                    let rax_12: *mut c_void =
                        clap_builder::parser::error::MatchesError::unwrap::h00d609c63283993e(
                        "prefix---a-b-C-l-n-tsrc/uu/split…", 6, &var_1e8);
                    
                    if rax_12 == 0
                    {
                        core::option::unwrap_failed::h893f57cb7db71cb7();
                        /* no return */
                    }
                    
                    let mut var_c8: i128;
                    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(&var_c8, rax_12);
                    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hf389485a9e6f35ab(&var_1e8, arg2, "inputprefix---a-b-C-l-n-tsrc/uu/…", 5);
                    let rax_13: *mut c_void =
                        clap_builder::parser::error::MatchesError::unwrap::h00d609c63283993e(
                        "inputprefix---a-b-C-l-n-tsrc/uu/…", 5, &var_1e8);
                    
                    if rax_13 == 0
                    {
                        core::option::unwrap_failed::h893f57cb7db71cb7();
                        /* no return */
                    }
                    
                    let mut var_b0: i128;
                    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(&var_b0, rax_13);
                    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hf389485a9e6f35ab(&var_1e8, arg2, "filternumber-dhex-suffixes-xsuff…", 6);
                    let rax_14: *mut c_void =
                        clap_builder::parser::error::MatchesError::unwrap::h00d609c63283993e(
                        "filternumber-dhex-suffixes-xsuff…", 6, &var_1e8);
                    
                    if rax_14 == 0
                    {
                        var_1a8 = -0x8000000000000000;
                    }
                    else
                    {
                        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(&var_1e8, rax_14);
                        var_198 = var_160;
                        var_1a8 = var_1e8;
                    }
                    
                    let rax_16: i8 = clap_builder::parser::matches::arg_matches::ArgMatches::value_source::h45c0c3cb9ce2c562(arg2, "verboseseparatorelide-empty-file…", 7);
                    let rax_17: i8 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg2, "elide-empty-files-io-blksizeinpu…", 0x11);
                    let var_b8: i64;
                    *var_148[8] = var_b8;
                    let var_150_1: i128 = var_c8;
                    let var_138_1: i64 = r14_1;
                    let var_130_1: i64 = r15_1;
                    let var_128_1: i128 = var_58_1;
                    let var_118_1: i128 = zmm0_1;
                    let var_108_1: i128 = var_b0;
                    let var_a0: i64;
                    let var_f8_1: i64 = var_a0;
                    let var_f0_1: i64 = var_1a8;
                    let var_e0_1: i64 = var_198;
                    let var_158_1: i64 = var_160;
                    var_170 = zmm0;
                    let var_d8_1: bool = rax_16 == 2;
                    let var_d6_1: i8 = var_1ec_1;
                    let var_d7_1: i8 = rax_17;
                    var_178 = var_188_1;
                    var_170 = var_d0;
                    let rax_20: i64 = *var_170[8];
                    
                    if rax_20 > 5 || rax_20 > 5 || !TEST_BITQ(0x2a, rax_20)
                        || var_f0_1 == -0x8000000000000000
                    {
                        memcpy(arg1, &var_178, 0xa8);
                    }
                    else
                    {
                        arg1[1] = 7;
                        *arg1 = 2;
                        core::ptr::drop_in_place$LT$uu_split..Settings$GT$::hd6b5f345aab425be(
                            &var_178);
                    }
                }
                else
                {
                    uucore::features::parser::parse_size::parse_size_u64::hcabf5090504a6d94(
                        &var_178, *rax_10.byte_offset(8), *rax_10.byte_offset(0x10));
                    
                    if var_178 != 4
                    {
                        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(&var_1e8, rax_10);
                    }
                    else
                    {
                        let rax_11: i64 = var_170;
                        
                        if rax_11 == 0
                        {
                            _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(&var_1e8, rax_10);
                        }
                        else
                        {
                            if rax_11 < 0x20000001
                            {
                                var_d0 = rax_11;
                                core::ptr::drop_in_place$LT$core..result..Result$LT$u64$C$uucore..features..parser..parse_size..ParseSizeError$GT$$GT$::h2d19b3a54b2f2f6e(&var_178);
                                var_188_1 = 1;
                                goto 'label_46eb70;
                            }
                            
                            _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(&var_1e8, rax_10);
                        }
                    }
                    
                    arg1[4] = var_160;
                    *arg1.byte_offset(0x10) = var_1e8;
                    arg1[1] = 8;
                    *arg1 = 2;
                    core::ptr::drop_in_place$LT$core..result..Result$LT$u64$C$uucore..features..parser..parse_size..ParseSizeError$GT$$GT$::h2d19b3a54b2f2f6e(&var_178);
                    core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h81504cba959ecfd9(
                        r14_1, r15_1);
                }
            }
            else
            {
                let var_1b8: i128;
                var_148 = var_1b8;
                let var_1c8: i128;
                var_158 = var_1c8;
                var_170 = var_160;
                var_178 = var_1e8;
                let rax_5: *mut c_void = _$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h30b8028acda9a64f(&var_178);
                
                if rax_5 == 0
                {
                    core::option::unwrap_failed::h893f57cb7db71cb7();
                    /* no return */
                }
                
                let mut var_180: *mut c_void = rax_5;
                let mut rcx_2: i64 = 6;
                
                if _$LT$core..ops..control_flow..ControlFlow$LT$B$C$C$GT$$u20$as$u20$core..cmp..PartialEq$GT$::eq::h428b104382774de8(
                    core::iter::traits::iterator::Iterator::try_fold::h3a3421a286b792a8(&var_178, 
                        &var_180), 
                    0) != 0
                {
                    let rax_8: *mut c_void = var_180;
                    let r13_1: *mut i8 = *rax_8.byte_offset(8);
                    let rbp_1: u64 = *rax_8.byte_offset(0x10);
                    
                    if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hb641e38be83010ce(r13_1, rbp_1, "\0'' would overwrite input; abor…", 2) != 0
                    {
                        var_1ec_1 = 0;
                        goto 'label_46eac0;
                    }
                    
                    if rbp_1 == 1
                    {
                        rax_4 = *r13_1;
                        goto 'label_46eaa5;
                    }
                    
                    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hfadfb68a35ae07bf(&var_1a8, r13_1, rbp_1);
                    arg1[4] = var_198;
                    *arg1.byte_offset(0x10) = var_1a8;
                    rcx_2 = 5;
                }
                
                arg1[1] = rcx_2;
                *arg1 = 2;
                core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h81504cba959ecfd9(
                    r14_1, r15_1);
            }
        }
        else
        {
            let zmm1_1: i128 = var_160;
            var_1a8 = var_170;
            var_198 = zmm1_1;
            *arg1.byte_offset(0x20) = zmm1_1;
            *arg1.byte_offset(0x10) = var_170;
            arg1[1] = 4;
            *arg1 = 2;
        }
    }
    arg1
}
