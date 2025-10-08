
  fn uu_numfmt::parse_options::hdd4028f9a896523f(arg1: *mut i128, arg2: *mut c_void) -> *mut i128

{
    let mut var_178: *mut *mut c_void;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hf5a604ebb31d81af(
        &var_178, arg2, "fromkindAuto/", 4);
    let rax: *mut c_void = clap_builder::parser::error::MatchesError::unwrap::h00661b2bfd48ffd9(
        "fromkindAuto/", 4, &var_178);
    
    if rax == 0
    {
        core::option::unwrap_failed::h893f57cb7db71cb7();
        /* no return */
    }
    
    let mut var_f0: *mut *mut c_void;
    uu_numfmt::parse_unit::h5b8dda5b61233202(&var_f0, *rax.byte_offset(8), *rax.byte_offset(0x10));
    let rax_1: *mut *mut c_void = var_f0;
    let mut var_e8: i8;
    let rbp: i8 = var_e8;
    let mut var_e7: i64;
    
    if -(rax_1) != -0x8000000000000000
    {
        *arg1.byte_offset(0x18) = var_e7;
        *arg1.byte_offset(0x11) = var_e7;
        *arg1.byte_offset(8) = rax_1;
        arg1[1] = rbp;
        *arg1 = 2;
    }
    else
    {
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hf5a604ebb31d81af(
            &var_178, arg2, "tofrom-unitto-unitpaddingheaderf…", 2);
        let rax_2: *mut c_void =
            clap_builder::parser::error::MatchesError::unwrap::h00661b2bfd48ffd9(
            "tofrom-unitto-unitpaddingheaderf…", 2, &var_178);
        
        if rax_2 == 0
        {
            core::option::unwrap_failed::h893f57cb7db71cb7();
            /* no return */
        }
        
        uu_numfmt::parse_unit::h5b8dda5b61233202(&var_f0, *rax_2.byte_offset(8), 
            *rax_2.byte_offset(0x10));
        let rax_3: *mut *mut c_void = var_f0;
        
        if rax_3 != -0x8000000000000000
        {
            *arg1.byte_offset(0x18) = var_e7;
            *arg1.byte_offset(0x11) = var_e7;
            *arg1.byte_offset(8) = rax_3;
            arg1[1] = var_e8;
            *arg1 = 2;
        }
        else
        {
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hf5a604ebb31d81af(
                &var_178, arg2, "from-unitto-unitpaddingheaderfie…", 9);
            let rax_4: *mut c_void =
                clap_builder::parser::error::MatchesError::unwrap::h00661b2bfd48ffd9(
                "from-unitto-unitpaddingheaderfie…", 9, &var_178);
            
            if rax_4 == 0
            {
                core::option::unwrap_failed::h893f57cb7db71cb7();
                /* no return */
            }
            
            uu_numfmt::parse_unit_size::h03bace1e31195027(&var_178, *rax_4.byte_offset(8), 
                *rax_4.byte_offset(0x10));
            let mut rax_5: *mut *mut c_void = var_178;
            let mut var_170: i128;
            
            if rax_5 != -0x8000000000000000
            {
                'label_46cbe0:
                *arg1.byte_offset(8) = rax_5;
                arg1[1] = var_170;
                *arg1 = 2;
            }
            else
            {
                let rax_6: i64 = var_170;
                clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hf5a604ebb31d81af(&var_178, arg2, "to-unitpaddingheaderfieldformatd…", 7);
                let rax_7: *mut c_void =
                    clap_builder::parser::error::MatchesError::unwrap::h00661b2bfd48ffd9(
                    "to-unitpaddingheaderfieldformatd…", 7, &var_178);
                
                if rax_7 == 0
                {
                    core::option::unwrap_failed::h893f57cb7db71cb7();
                    /* no return */
                }
                
                uu_numfmt::parse_unit_size::h03bace1e31195027(&var_178, *rax_7.byte_offset(8), 
                    *rax_7.byte_offset(0x10));
                rax_5 = var_178;
                
                if rax_5 != -0x8000000000000000
                {
                    goto 'label_46cbe0;
                }
                
                let rax_8: i64 = var_170;
                clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hf5a604ebb31d81af(&var_178, arg2, "paddingheaderfieldformatdelimite…", 7);
                let rax_9: *mut c_void =
                    clap_builder::parser::error::MatchesError::unwrap::h00661b2bfd48ffd9(
                    "paddingheaderfieldformatdelimite…", 7, &var_178);
                let mut rcx_2: i64;
                
                if rax_9 != 0
                {
                    core::num::_$LT$impl$u20$isize$GT$::from_ascii_radix::h0e9490fe82f40334(
                        &var_178, *rax_9.byte_offset(8), *rax_9.byte_offset(0x10));
                    rcx_2 = var_170;
                    
                    if (rcx_2 == 0 | var_178) != 1
                    {
                        goto 'label_46cb41;
                    }
                    
                    uu_numfmt::parse_options::_$u7b$$u7b$closure$u7d$$u7d$::h6e66c07552a1ddec(
                        &var_178);
                    rax_5 = var_178;
                    
                    if rax_5 != -0x8000000000000000
                    {
                        goto 'label_46cbe0;
                    }
                    
                    rcx_2 = var_170;
                    goto 'label_46cb41;
                }
                
                rcx_2 = 0;
                'label_46cb41:
                let mut rcx_5: i64;
                
                if clap_builder::parser::matches::arg_matches::ArgMatches::value_source::h45c0c3cb9ce2c562(arg2, "headerfieldformatdelimiterrounds…", 6) == 2
                {
                    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hf5a604ebb31d81af(&var_178, arg2, "headerfieldformatdelimiterrounds…", 6);
                    let rax_12: *mut c_void =
                        clap_builder::parser::error::MatchesError::unwrap::h00661b2bfd48ffd9(
                        "headerfieldformatdelimiterrounds…", 6, &var_178);
                    
                    if rax_12 == 0
                    {
                        core::option::unwrap_failed::h893f57cb7db71cb7();
                        /* no return */
                    }
                    
                    core::num::_$LT$impl$u20$usize$GT$::from_ascii_radix::he77532141bbadde7(
                        &var_178, *rax_12.byte_offset(8), *rax_12.byte_offset(0x10));
                    rcx_5 = var_170;
                    
                    if (rcx_5 == 0 | var_178) == 0
                    {
                        goto 'label_46cc0e;
                    }
                    
                    uu_numfmt::parse_options::_$u7b$$u7b$closure$u7d$$u7d$::h569d4ca4d2a71d66(
                        &var_178);
                    rax_5 = var_178;
                    
                    if rax_5 != -0x8000000000000000
                    {
                        goto 'label_46cbe0;
                    }
                    
                    rcx_5 = var_170;
                    goto 'label_46cc0e;
                }
                
                rcx_5 = 0;
                'label_46cc0e:
                let var_185_1: i8 = var_e8;
                clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hf5a604ebb31d81af(&var_178, arg2, "fieldformatdelimiterroundsuffixi…", 5);
                let rax_15: *mut c_void =
                    clap_builder::parser::error::MatchesError::unwrap::h00661b2bfd48ffd9(
                    "fieldformatdelimiterroundsuffixi…", 5, &var_178);
                
                if rax_15 == 0
                {
                    core::option::unwrap_failed::h893f57cb7db71cb7();
                    /* no return */
                }
                
                let r15_3: i64 = *rax_15.byte_offset(8);
                let r12_3: i64 = *rax_15.byte_offset(0x10);
                _$LT$core..str..pattern..MultiCharEqPattern$LT$C$GT$$u20$as$u20$core..str..pattern..Pattern$GT$::into_searcher::h1608f67deb20dfc5(&var_178, r15_3, r12_3);
                let var_148_1: i64 = 0;
                let var_140_1: i64 = r12_3;
                let var_138_1: i16 = 1;
                let mut var_f8_1: i64;
                let mut r12_4: i8;
                let mut r13_2: i64;
                let mut r15_4: u64;
                
                if _$LT$core..ops..control_flow..ControlFlow$LT$B$C$C$GT$$u20$as$u20$core..cmp..PartialEq$GT$::eq::h78f8b3ebfd2d8e96(core::iter::traits::iterator::Iterator::try_fold::hddf39aa1e55312ac(&var_178))
                    != 0
                {
                    let rax_18: u64 = alloc::alloc::Global::alloc_impl::h6fb1b6049873c120(8, 0x10);
                    r12_4 = var_185_1;
                    
                    if rax_18 == 0
                    {
                        alloc::alloc::handle_alloc_error::h88aa4f4f9d19c4f9();
                        /* no return */
                    }
                    
                    r15_4 = rax_18;
                    *rax_18 = 1;
                    *(rax_18 + 8) = -1;
                    var_f8_1 = 1;
                    r13_2 = 1;
                    goto 'label_46cd2e;
                }
                
                uucore::features::ranges::Range::from_list::h55160c8343b59905(&var_178, r15_3, 
                    r12_3);
                r13_2 = var_170;
                r15_4 = *var_170[8];
                r12_4 = var_185_1;
                let mut var_160: i64;
                
                if (var_178 & 1) == 0
                {
                    var_f8_1 = var_160;
                    'label_46cd2e:
                    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hf5a604ebb31d81af(&var_178, arg2, "formatdelimiterroundsuffixinvali…", 6);
                    let rax_20: *mut c_void =
                        clap_builder::parser::error::MatchesError::unwrap::h00661b2bfd48ffd9(
                        "formatdelimiterroundsuffixinvali…", 6, &var_178);
                    let mut var_118: i128;
                    let mut var_108: i64;
                    let mut var_d0: i64;
                    let mut var_c0_1: i128;
                    let mut var_b0: i64;
                    let mut var_a0: i16;
                    let mut zmm0_4: i128;
                    
                    if rax_20 == 0
                    {
                        var_a0 = 0;
                        var_f0 = nullptr;
                        var_e7 = 0;
                        var_d0 = 0;
                        let var_c8_1: i64 = 1;
                        var_c0_1 = {0};
                        var_b0 = 1;
                        let var_a8_1: i64 = 0;
                        'label_46ce83:
                        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hf5a604ebb31d81af(&var_178, arg2, "delimiterroundsuffixinvalidzero-…", 9);
                        let rax_23: *mut c_void =
                            clap_builder::parser::error::MatchesError::unwrap::h00661b2bfd48ffd9(
                            "delimiterroundsuffixinvalidzero-…", 9, &var_178);
                        var_170 = -0x8000000000000000;
                        var_178 = nullptr;
                        core::option::Option$LT$T$GT$::map_or::hb6e0e39bf98ad812(&var_118, rax_23, 
                            &var_178);
                        zmm0_4 = var_118;
                        let var_100: i64;
                        
                        if var_118 != 1
                        {
                            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hf5a604ebb31d81af(&var_178, arg2, "roundsuffixinvalidzero-terminate…", 5);
                            let rax_27: *mut c_void = clap_builder::parser::error::MatchesError::unwrap::h00661b2bfd48ffd9("roundsuffixinvalidzero-terminate…", 5, 
                                &var_178);
                            
                            if rax_27 == 0
                            {
                                core::option::unwrap_failed::h893f57cb7db71cb7();
                                /* no return */
                            }
                            
                            let r13_3: i64 = *rax_27.byte_offset(8);
                            let r12_5: u64 = *rax_27.byte_offset(0x10);
                            let mut var_184_1: i8;
                            
                            if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h47d6932d4cc292c3(r13_3, r12_5, "upfrom-zerotowards-zeronearestin…", 2) == 0
                            {
                                var_184_1 = 1;
                                
                                if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h47d6932d4cc292c3(r13_3, r12_5, "downhelpNoneshim\x1b[0mnameCyan …", 4) == 0
                                {
                                    var_184_1 = 2;
                                    
                                    if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h47d6932d4cc292c3(r13_3, r12_5, "from-zerotowards-zeronearestinte…", 9) == 0
                                    {
                                        var_184_1 = 3;
                                        
                                        if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h47d6932d4cc292c3(r13_3, r12_5, "towards-zeronearestinternal erro…", 0xc)
                                            == 0
                                        {
                                            var_184_1 = 4;
                                            
                                            if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h47d6932d4cc292c3(r13_3, r12_5, "nearestinternal error: entered u…", 7)
                                                == 0
                                            {
                                                var_178 = &data_502870;
                                                var_170 = 1;
                                                let mut var_180: ();
                                                *var_170[8] = &var_180;
                                                var_160 = {0};
                                                core::panicking::panic_fmt::h96f341d36638c225(
                                                    &var_178);
                                                /* no return */
                                            }
                                        }
                                    }
                                }
                            }
                            else
                            {
                                var_184_1 = 0;
                            }
                            
                            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hf5a604ebb31d81af(&var_178, arg2, "suffixinvalidzero-terminatedinva…", 6);
                            let rax_33: *mut c_void = clap_builder::parser::error::MatchesError::unwrap::h00661b2bfd48ffd9("suffixinvalidzero-terminatedinva…", 6, 
                                &var_178);
                            let var_40: i128;
                            
                            if rax_33 == 0
                            {
                                var_118 = -0x8000000000000000;
                                var_118 = var_40;
                            }
                            else
                            {
                                _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(&var_178, rax_33);
                                var_108 = *var_40[8];
                                var_118 = var_178;
                            }
                            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hf5a604ebb31d81af(&var_178, arg2, "invalidzero-terminatedinvalid pa…", 7);
                            let rax_35: *mut c_void = clap_builder::parser::error::MatchesError::unwrap::h00661b2bfd48ffd9("invalidzero-terminatedinvalid pa…", 7, 
                                &var_178);
                            
                            if rax_35 == 0
                            {
                                core::option::unwrap_failed::h893f57cb7db71cb7();
                                /* no return */
                            }
                            
                            _$LT$uu_numfmt..options..InvalidModes$u20$as$u20$core..str..traits..FromStr$GT$::from_str::h28548c6647834f32(&var_178, *rax_35.byte_offset(8), *rax_35.byte_offset(0x10));
                            let rax_36: i8 =
                                core::result::Result$LT$T$C$E$GT$::unwrap::h8a277b51c91b5632(
                                &var_178);
                            let rax_37: i8 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg2, "zero-terminatedinvalid padding v…", 0xf);
                            arg1[8] = var_100;
                            arg1[7] = zmm0_4;
                            *arg1.byte_offset(0x88) = var_118;
                            *arg1.byte_offset(0x98) = var_108;
                            let zmm0_7: i128 = var_f0;
                            arg1[1] = *var_e7[7];
                            arg1[2] = var_d0;
                            arg1[3] = var_c0_1;
                            arg1[4] = var_b0;
                            arg1[5] = var_a0;
                            *arg1 = zmm0_7;
                            *arg1.byte_offset(0x58) = r13_2;
                            arg1[6] = r15_4;
                            *arg1.byte_offset(0x68) = var_f8_1;
                            arg1[0xa] = rax_6;
                            *arg1.byte_offset(0xa8) = rax_8;
                            arg1[0xb] = rbp;
                            *arg1.byte_offset(0xb1) = var_185_1;
                            *arg1.byte_offset(0xb8) = rcx_2;
                            arg1[0xc] = rcx_5;
                            *arg1.byte_offset(0xc8) = rax_37;
                            *arg1.byte_offset(0xc9) = rax_36;
                            *arg1.byte_offset(0xca) = var_184_1;
                        }
                        else
                        {
                            *arg1.byte_offset(0x18) = var_100;
                            'label_46d233:
                            *arg1.byte_offset(8) = zmm0_4;
                            *arg1 = 2;
                            core::ptr::drop_in_place$LT$uu_numfmt..options..FormatOptions$GT$::h8dc90de00e50d096(&var_f0);
                            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$clap_builder..util..id..Id$GT$$GT$::h9c4bd89731b2c9ca(r13_2, r15_4);
                        }
                    }
                    else
                    {
                        _$LT$uu_numfmt..options..FormatOptions$u20$as$u20$core..str..traits..FromStr$GT$::from_str::h667c9ec046668b63(&var_178, *rax_20.byte_offset(8), *rax_20.byte_offset(0x10));
                        let rax_21: *mut *mut c_void = var_178;
                        var_118 = var_170;
                        var_108 = var_160;
                        
                        if rax_21 != 2
                        {
                            let var_128: i64;
                            var_a0 = var_128;
                            var_b0 = var_138_1;
                            var_c0_1 = var_148_1;
                            let var_158: i128;
                            var_d0 = var_158;
                            var_e8 = var_118;
                            let var_d8_1: i64 = var_108;
                            var_f0 = rax_21;
                            
                            if (var_128 & 1) == 0 || r12_4 == 5
                            {
                                goto 'label_46ce83;
                            }
                            
                            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h4c3223c430555e40(&var_178, &data_41aedc, 0x25);
                            *arg1.byte_offset(0x18) = *var_170[8];
                            zmm0_4 = var_178;
                            goto 'label_46d233;
                        }
                        
                        *arg1.byte_offset(0x18) = var_108;
                        *arg1.byte_offset(8) = var_118;
                        *arg1 = 2;
                        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$clap_builder..util..id..Id$GT$$GT$::h9c4bd89731b2c9ca(r13_2, r15_4);
                    }
                }
                else
                {
                    *arg1.byte_offset(8) = r13_2;
                    arg1[1] = r15_4;
                    *arg1.byte_offset(0x18) = var_160;
                    *arg1 = 2;
                }
            }
        }
    }
    arg1
}
