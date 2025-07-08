
  fn uu_numfmt::parse_options::h74b780a1d54305df(arg1: *mut i64, arg2: *mut c_void) -> *mut i64

{
    let mut var_1d8: *mut *mut [i8; 0xfd];
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hb067340ef573e101(
        &var_1d8, arg2, "fromAutoBOLDBlue\x1b[4mUNITSomed…", 4);
    let rax: *mut c_void = clap_builder::parser::error::MatchesError::unwrap::h08e9593b0ad642d4(
        "fromAutoBOLDBlue\x1b[4mUNITSomed…", 4, &var_1d8);
    
    if rax == 0
    {
        core::option::unwrap_failed::h0e11329e76906eaa();
        /* no return */
    }
    
    let mut var_138: *mut *mut [i8; 0xfd];
    uu_numfmt::parse_unit::hdfe14114e84c44e9(&var_138, *rax.byte_offset(8), *rax.byte_offset(0x10));
    let rax_1: *mut *mut [i8; 0xfd] = var_138;
    let mut var_130: i8;
    let mut var_12f: i64;
    
    if rax_1 != -0x8000000000000000
    {
        arg1[3] = var_12f;
        *arg1.byte_offset(0x11) = var_12f;
        arg1[1] = rax_1;
        arg1[2] = var_130;
        *arg1 = 2;
    }
    else
    {
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hb067340ef573e101(
            &var_1d8, arg2, "tofrom-unitto-unitpaddingheaderf…", 2);
        let rax_2: *mut c_void =
            clap_builder::parser::error::MatchesError::unwrap::h08e9593b0ad642d4(
            "tofrom-unitto-unitpaddingheaderf…", 2, &var_1d8);
        
        if rax_2 == 0
        {
            core::option::unwrap_failed::h0e11329e76906eaa();
            /* no return */
        }
        
        uu_numfmt::parse_unit::hdfe14114e84c44e9(&var_138, *rax_2.byte_offset(8), 
            *rax_2.byte_offset(0x10));
        let rax_3: *mut *mut [i8; 0xfd] = var_138;
        
        if rax_3 != -0x8000000000000000
        {
            arg1[3] = var_12f;
            *arg1.byte_offset(0x11) = var_12f;
            arg1[1] = rax_3;
            arg1[2] = var_130;
            *arg1 = 2;
        }
        else
        {
            let var_202_1: i8 = var_130;
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hb067340ef573e101(
                &var_1d8, arg2, "from-unitto-unitpaddingheaderfie…", 9);
            let rax_4: *mut c_void =
                clap_builder::parser::error::MatchesError::unwrap::h08e9593b0ad642d4(
                "from-unitto-unitpaddingheaderfie…", 9, &var_1d8);
            
            if rax_4 == 0
            {
                core::option::unwrap_failed::h0e11329e76906eaa();
                /* no return */
            }
            
            uu_numfmt::parse_unit_size::hba45e7319bcb81ae(&var_1d8, *rax_4.byte_offset(8), 
                *rax_4.byte_offset(0x10));
            let mut rax_5: *mut *mut [i8; 0xfd] = var_1d8;
            let mut var_1d0: [i32; 0x4];
            let mut zmm0_1: [i32; 0x4] = var_1d0;
            
            if rax_5 != -0x8000000000000000
            {
                goto 'label_4c08dc;
            }
            
            let var_58_1: [i32; 0x4] = zmm0_1;
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hb067340ef573e101(
                &var_1d8, arg2, "to-unitpaddingheaderfieldformatg…", 7);
            let rax_6: *mut c_void =
                clap_builder::parser::error::MatchesError::unwrap::h08e9593b0ad642d4(
                "to-unitpaddingheaderfieldformatg…", 7, &var_1d8);
            
            if rax_6 == 0
            {
                core::option::unwrap_failed::h0e11329e76906eaa();
                /* no return */
            }
            
            uu_numfmt::parse_unit_size::hba45e7319bcb81ae(&var_1d8, *rax_6.byte_offset(8), 
                *rax_6.byte_offset(0x10));
            rax_5 = var_1d8;
            zmm0_1 = var_1d0;
            
            if rax_5 != -0x8000000000000000
            {
                goto 'label_4c08dc;
            }
            
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hb067340ef573e101(
                &var_1d8, arg2, "paddingheaderfieldformatgrouping…", 7);
            let rax_7: *mut c_void =
                clap_builder::parser::error::MatchesError::unwrap::h08e9593b0ad642d4(
                "paddingheaderfieldformatgrouping…", 7, &var_1d8);
            let mut rax_8: i64;
            
            if rax_7 == 0
            {
                rax_8 = 0;
                'label_4c0723:
                let mut rax_11: i64;
                
                if clap_builder::parser::matches::arg_matches::ArgMatches::value_source::h1b5412f9501eb404(arg2, "headerfieldformatgrouping cannot…", 6) == 2
                {
                    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hb067340ef573e101(&var_1d8, arg2, "headerfieldformatgrouping cannot…", 6);
                    let rax_10: *mut c_void =
                        clap_builder::parser::error::MatchesError::unwrap::h08e9593b0ad642d4(
                        "headerfieldformatgrouping cannot…", 6, &var_1d8);
                    
                    if rax_10 == 0
                    {
                        core::option::unwrap_failed::h0e11329e76906eaa();
                        /* no return */
                    }
                    
                    core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$usize$GT$::from_str::h35e67cae0c0452a5(&var_1d8, *rax_10.byte_offset(8), *rax_10.byte_offset(0x10));
                    
                    if var_1d8 == 0
                    {
                        rax_11 = var_1d0[0];
                    }
                    
                    if var_1d8 == 0 && rax_11 != 0
                    {
                        goto 'label_4c07c1;
                    }
                    
                    *rax_10.byte_offset(8);
                    *rax_10.byte_offset(0x10);
                    uu_numfmt::parse_options::_$u7b$$u7b$closure$u7d$$u7d$::h7cf9a379c7bec393(
                        &var_1d8);
                    rax_5 = var_1d8;
                    
                    if rax_5 != -0x8000000000000000
                    {
                        goto 'label_4c08d7;
                    }
                    
                    rax_11 = var_1d0[0];
                    goto 'label_4c07c1;
                }
                
                rax_11 = 0;
                'label_4c07c1:
                let var_201_1: i8 = var_130;
                clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hb067340ef573e101(&var_1d8, arg2, "fieldformatgrouping cannot be co…", 5);
                let rax_12: *mut c_void =
                    clap_builder::parser::error::MatchesError::unwrap::h08e9593b0ad642d4(
                    "fieldformatgrouping cannot be co…", 5, &var_1d8);
                
                if rax_12 == 0
                {
                    core::option::unwrap_failed::h0e11329e76906eaa();
                    /* no return */
                }
                
                let r15_3: i64 = *rax_12.byte_offset(8);
                let r12_1: i64 = *rax_12.byte_offset(0x10);
                _$LT$core..str..pattern..MultiCharEqPattern$LT$C$GT$$u20$as$u20$core..str..pattern..Pattern$GT$::into_searcher::h3869e540bcd9fb10(&var_1d8, r15_3, r12_1);
                let mut var_1a8_1: i64 = 0;
                let var_1a0_1: i64 = r12_1;
                let mut var_198_1: i16 = 1;
                let mut var_d8: [i32; 0x4];
                let mut r15_4: i8;
                
                if _$LT$core..ops..control_flow..ControlFlow$LT$B$C$C$GT$$u20$as$u20$core..cmp..PartialEq$GT$::eq::h4dbd70c27d8de298(core::iter::traits::iterator::Iterator::try_fold::h3a7d74c346e468e3(&var_1d8))
                    != 0
                {
                    let rax_15: *mut i64 =
                        alloc::alloc::Global::alloc_impl::hf61749d460433fff(0x10);
                    r15_4 = var_202_1;
                    
                    if rax_15 == 0
                    {
                        alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1();
                        /* no return */
                    }
                    
                    *rax_15 = 1;
                    rax_15[1] = -1;
                    alloc::slice::hack::into_vec::hb3f415a8a3a51118(&var_d8, rax_15, 1);
                    goto 'label_4c0934;
                }
                
                uucore::features::ranges::Range::from_list::hf67be8a5ce4e6c04(&var_1d8, r15_3, 
                    r12_1);
                var_138 = var_1d0;
                let mut var_1c0: i64;
                var_12f = var_1c0;
                r15_4 = var_202_1;
                
                if var_1d8 == 0
                {
                    let var_c8: i64 = var_12f;
                    var_d8 = var_138;
                    'label_4c0934:
                    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hb067340ef573e101(&var_1d8, arg2, "formatgrouping cannot be combine…", 6);
                    let rax_20: *mut c_void =
                        clap_builder::parser::error::MatchesError::unwrap::h08e9593b0ad642d4(
                        "formatgrouping cannot be combine…", 6, &var_1d8);
                    let mut var_1f8: [i32; 0x4];
                    let mut var_1e8: i64;
                    let mut var_118: i64;
                    let mut var_108_1: i128;
                    let mut var_f8: i64;
                    let mut var_e8: i16;
                    let mut zmm0_5: [i32; 0x4];
                    
                    if rax_20 == 0
                    {
                        var_e8 = 0;
                        var_138 = nullptr;
                        var_12f = 0;
                        var_118 = 0;
                        let var_110_1: i64 = 1;
                        var_108_1 = {0};
                        var_f8 = 1;
                        let var_f0_1: i64 = 0;
                        'label_4c0a19:
                        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hb067340ef573e101(&var_1d8, arg2, "delimiterroundupfrom-zerotowards…", 9);
                        let rax_23: *mut c_void =
                            clap_builder::parser::error::MatchesError::unwrap::h08e9593b0ad642d4(
                            "delimiterroundupfrom-zerotowards…", 9, &var_1d8);
                        var_1d0[0] = -0x8000000000000000;
                        let var_40: i128;
                        var_1d0 = var_40;
                        var_1d8 = nullptr;
                        core::option::Option$LT$T$GT$::map_or::h196257d03fbff2c6(&var_1f8, rax_23, 
                            &var_1d8);
                        zmm0_5 = var_1f8;
                        let var_1e0: i64;
                        
                        if var_1f8[0] == 0
                        {
                            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hb067340ef573e101(&var_1d8, arg2, "roundupfrom-zerotowards-zeronear…", 5);
                            let rax_28: *mut c_void = clap_builder::parser::error::MatchesError::unwrap::h08e9593b0ad642d4("roundupfrom-zerotowards-zeronear…", 5, 
                                &var_1d8);
                            
                            if rax_28 == 0
                            {
                                core::option::unwrap_failed::h0e11329e76906eaa();
                                /* no return */
                            }
                            
                            let r15_5: i64 = *rax_28.byte_offset(8);
                            let r12_2: u64 = *rax_28.byte_offset(0x10);
                            let mut r13_1: i8;
                            
                            if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h476a084f905105c4(r15_5, r12_2, "upfrom-zerotowards-zeronearestin…", 2) == 0
                            {
                                r13_1 = 1;
                                
                                if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h476a084f905105c4(r15_5, r12_2, "downhelpNoneshimname\x1b[0m    C…", 4) == 0
                                {
                                    r13_1 = 2;
                                    
                                    if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h476a084f905105c4(r15_5, r12_2, "from-zerotowards-zeronearestinte…", 9) == 0
                                    {
                                        r13_1 = 3;
                                        
                                        if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h476a084f905105c4(r15_5, r12_2, "towards-zeronearestinternal erro…", 0xc)
                                            == 0
                                        {
                                            r13_1 = 4;
                                            
                                            if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h476a084f905105c4(r15_5, r12_2, "nearestinternal error: entered u…", 7)
                                                == 0
                                            {
                                                var_1d8 = &data_5358f0;
                                                var_1d0[0] = 1;
                                                let mut var_200: ();
                                                var_1d0[2] = &var_200;
                                                var_1c0 = {0};
                                                core::panicking::panic_fmt::he12d0d7468628bb4(
                                                    &var_1d8);
                                                /* no return */
                                            }
                                        }
                                    }
                                }
                            }
                            else
                            {
                                r13_1 = 0;
                            }
                            
                            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hb067340ef573e101(&var_1d8, arg2, "suffixinvalidinvalid padding val…", 6);
                            let rax_34: *mut c_void = clap_builder::parser::error::MatchesError::unwrap::h08e9593b0ad642d4("suffixinvalidinvalid padding val…", 6, 
                                &var_1d8);
                            
                            if rax_34 == 0
                            {
                                var_1f8[0] = -0x8000000000000000;
                                var_1f8 = var_40;
                            }
                            else
                            {
                                _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(&var_1d8, rax_34);
                                var_1e8 = var_1d0[2];
                                var_1f8 = var_1d8;
                            }
                            
                            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hb067340ef573e101(&var_1d8, arg2, "invalidinvalid padding value inv…", 7);
                            let rax_36: *mut c_void = clap_builder::parser::error::MatchesError::unwrap::h08e9593b0ad642d4("invalidinvalid padding value inv…", 7, 
                                &var_1d8);
                            
                            if rax_36 == 0
                            {
                                core::option::unwrap_failed::h0e11329e76906eaa();
                                /* no return */
                            }
                            
                            _$LT$uu_numfmt..options..InvalidModes$u20$as$u20$core..str..traits..FromStr$GT$::from_str::h8733635cdad8a454(&var_1d8, *rax_36.byte_offset(8), *rax_36.byte_offset(0x10));
                            let rax_37: i8 =
                                core::result::Result$LT$T$C$E$GT$::unwrap::h5e69027b68aabff9(
                                &var_1d8);
                            let var_170_1: i64 = var_c8;
                            let var_180_1: [i32; 0x4] = var_d8;
                            let var_168_1: [i32; 0x4] = zmm0_5;
                            let var_158_1: i64 = var_1e0;
                            let var_150_1: [i32; 0x4] = var_1f8;
                            let var_140_1: i64 = var_1e8;
                            var_1d8 = var_138;
                            var_1d0 = *var_12f[7];
                            let var_1b8_1: i128 = var_118;
                            var_1a8_1 = var_108_1;
                            var_198_1 = var_f8;
                            let var_188_1: i64 = var_e8;
                            memcpy(arg1, &var_1d8, 0xa0);
                            *arg1.byte_offset(0xa0) = __unpcklpd_xmmpd_memdq(var_58_1, zmm0_1);
                            arg1[0x16] = var_201_1;
                            *arg1.byte_offset(0xb1) = var_202_1;
                            arg1[0x17] = rax_8;
                            arg1[0x18] = rax_11;
                            arg1[0x19] = rax_37;
                            *arg1.byte_offset(0xc9) = r13_1;
                        }
                        else
                        {
                            arg1[3] = var_1e0;
                            'label_4c0b2f:
                            *arg1.byte_offset(8) = zmm0_5;
                            *arg1 = 2;
                            core::ptr::drop_in_place$LT$uu_numfmt..options..FormatOptions$GT$::h145f8e2eba079399(&var_138);
                            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uucore..features..ranges..Range$GT$$GT$::hc100239ae3031ff0(&var_d8);
                        }
                    }
                    else
                    {
                        _$LT$uu_numfmt..options..FormatOptions$u20$as$u20$core..str..traits..FromStr$GT$::from_str::hdd662aa66ead1457(&var_1d8, *rax_20.byte_offset(8), *rax_20.byte_offset(0x10));
                        let rax_21: *mut *mut [i8; 0xfd] = var_1d8;
                        var_1f8 = var_1d0;
                        var_1e8 = var_1c0;
                        
                        if rax_21 != 2
                        {
                            let var_188: i64;
                            var_e8 = var_188;
                            var_f8 = var_198_1;
                            var_108_1 = var_1a8_1;
                            let var_1b8: [i32; 0x4];
                            var_118 = var_1b8;
                            var_130 = var_1f8;
                            let var_120_1: i64 = var_1e8;
                            var_138 = rax_21;
                            
                            if r15_4 == 5 || var_188 == 0
                            {
                                goto 'label_4c0a19;
                            }
                            
                            _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h523a2f825c855b37(&var_1d8, "grouping cannot be combined with…", 0x25);
                            arg1[3] = var_1d0[2];
                            zmm0_5 = var_1d8;
                            goto 'label_4c0b2f;
                        }
                        
                        arg1[3] = var_1e8;
                        *arg1.byte_offset(8) = var_1f8;
                        *arg1 = 2;
                        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uucore..features..ranges..Range$GT$$GT$::hc100239ae3031ff0(&var_d8);
                    }
                }
                else
                {
                    arg1[3] = var_12f;
                    *arg1.byte_offset(8) = var_138;
                    *arg1 = 2;
                }
            }
            else
            {
                core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$isize$GT$::from_str::h4967ea1478f9fe2a(&var_1d8, *rax_7.byte_offset(8), *rax_7.byte_offset(0x10));
                
                if var_1d8 == 0
                {
                    rax_8 = var_1d0[0];
                }
                
                if var_1d8 == 0 && rax_8 != 0
                {
                    goto 'label_4c0723;
                }
                
                *rax_7.byte_offset(8);
                *rax_7.byte_offset(0x10);
                uu_numfmt::parse_options::_$u7b$$u7b$closure$u7d$$u7d$::h552d86bdbb68f662(&var_1d8);
                rax_5 = var_1d8;
                
                if rax_5 == -0x8000000000000000
                {
                    rax_8 = var_1d0[0];
                    goto 'label_4c0723;
                }
                
                'label_4c08d7:
                zmm0_1 = var_1d0;
                'label_4c08dc:
                arg1[1] = rax_5;
                *arg1.byte_offset(0x10) = zmm0_1;
                *arg1 = 2;
            }
        }
    }
    arg1
}
