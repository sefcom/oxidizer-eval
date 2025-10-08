
  int128_t* uu_numfmt::parse_options::hdd4028f9a896523f(int128_t* arg1, void* arg2)

{
    void** const var_178;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hf5a604ebb31d81af(
        &var_178, arg2, "fromkindAuto/", 4);
    void* rax = clap_builder::parser::error::MatchesError::unwrap::h00661b2bfd48ffd9(
        "fromkindAuto/", 4, &var_178);
    
    if (!rax)
    {
        core::option::unwrap_failed::h893f57cb7db71cb7();
        /* no return */
    }
    
    void** const var_f0;
    uu_numfmt::parse_unit::h5b8dda5b61233202(&var_f0, *(rax + 8), *(rax + 0x10));
    void** const rax_1 = var_f0;
    char var_e8;
    char rbp = var_e8;
    int64_t var_e7;
    
    if (-(rax_1) != -0x8000000000000000)
    {
        *(arg1 + 0x18) = var_e7;
        *(arg1 + 0x11) = var_e7;
        *(arg1 + 8) = rax_1;
        arg1[1] = rbp;
        *arg1 = 2;
    }
    else
    {
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hf5a604ebb31d81af(
            &var_178, arg2, "tofrom-unitto-unitpaddingheaderf…", 2);
        void* rax_2 = clap_builder::parser::error::MatchesError::unwrap::h00661b2bfd48ffd9(
            "tofrom-unitto-unitpaddingheaderf…", 2, &var_178);
        
        if (!rax_2)
        {
            core::option::unwrap_failed::h893f57cb7db71cb7();
            /* no return */
        }
        
        uu_numfmt::parse_unit::h5b8dda5b61233202(&var_f0, *(rax_2 + 8), *(rax_2 + 0x10));
        void** const rax_3 = var_f0;
        
        if (rax_3 != -0x8000000000000000)
        {
            *(arg1 + 0x18) = var_e7;
            *(arg1 + 0x11) = var_e7;
            *(arg1 + 8) = rax_3;
            arg1[1] = var_e8;
            *arg1 = 2;
        }
        else
        {
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hf5a604ebb31d81af(
                &var_178, arg2, "from-unitto-unitpaddingheaderfie…", 9);
            void* rax_4 = clap_builder::parser::error::MatchesError::unwrap::h00661b2bfd48ffd9(
                "from-unitto-unitpaddingheaderfie…", 9, &var_178);
            
            if (!rax_4)
            {
                core::option::unwrap_failed::h893f57cb7db71cb7();
                /* no return */
            }
            
            uu_numfmt::parse_unit_size::h03bace1e31195027(&var_178, *(rax_4 + 8), *(rax_4 + 0x10));
            void** const rax_5 = var_178;
            int128_t var_170;
            
            if (rax_5 != -0x8000000000000000)
            {
                label_46cbe0:
                *(arg1 + 8) = rax_5;
                arg1[1] = var_170;
                *arg1 = 2;
            }
            else
            {
                int64_t rax_6 = var_170;
                clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hf5a604ebb31d81af(&var_178, arg2, "to-unitpaddingheaderfieldformatd…", 7);
                void* rax_7 = clap_builder::parser::error::MatchesError::unwrap::h00661b2bfd48ffd9(
                    "to-unitpaddingheaderfieldformatd…", 7, &var_178);
                
                if (!rax_7)
                {
                    core::option::unwrap_failed::h893f57cb7db71cb7();
                    /* no return */
                }
                
                uu_numfmt::parse_unit_size::h03bace1e31195027(&var_178, *(rax_7 + 8), 
                    *(rax_7 + 0x10));
                rax_5 = var_178;
                
                if (rax_5 != -0x8000000000000000)
                    goto label_46cbe0;
                
                int64_t rax_8 = var_170;
                clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hf5a604ebb31d81af(&var_178, arg2, "paddingheaderfieldformatdelimite…", 7);
                void* rax_9 = clap_builder::parser::error::MatchesError::unwrap::h00661b2bfd48ffd9(
                    "paddingheaderfieldformatdelimite…", 7, &var_178);
                int64_t rcx_2;
                
                if (rax_9)
                {
                    core::num::_$LT$impl$u20$isize$GT$::from_ascii_radix::h0e9490fe82f40334(
                        &var_178, *(rax_9 + 8), *(rax_9 + 0x10));
                    rcx_2 = var_170;
                    
                    if ((!rcx_2 | var_178) != 1)
                        goto label_46cb41;
                    
                    uu_numfmt::parse_options::_$u7b$$u7b$closure$u7d$$u7d$::h6e66c07552a1ddec(
                        &var_178);
                    rax_5 = var_178;
                    
                    if (rax_5 != -0x8000000000000000)
                        goto label_46cbe0;
                    
                    rcx_2 = var_170;
                    goto label_46cb41;
                }
                
                rcx_2 = 0;
                label_46cb41:
                int64_t rcx_5;
                
                if (clap_builder::parser::matches::arg_matches::ArgMatches::value_source::h45c0c3cb9ce2c562(arg2, "headerfieldformatdelimiterrounds…", 6) == 2)
                {
                    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hf5a604ebb31d81af(&var_178, arg2, "headerfieldformatdelimiterrounds…", 6);
                    void* rax_12 =
                        clap_builder::parser::error::MatchesError::unwrap::h00661b2bfd48ffd9(
                        "headerfieldformatdelimiterrounds…", 6, &var_178);
                    
                    if (!rax_12)
                    {
                        core::option::unwrap_failed::h893f57cb7db71cb7();
                        /* no return */
                    }
                    
                    core::num::_$LT$impl$u20$usize$GT$::from_ascii_radix::he77532141bbadde7(
                        &var_178, *(rax_12 + 8), *(rax_12 + 0x10));
                    rcx_5 = var_170;
                    
                    if (!(!rcx_5 | var_178))
                        goto label_46cc0e;
                    
                    uu_numfmt::parse_options::_$u7b$$u7b$closure$u7d$$u7d$::h569d4ca4d2a71d66(
                        &var_178);
                    rax_5 = var_178;
                    
                    if (rax_5 != -0x8000000000000000)
                        goto label_46cbe0;
                    
                    rcx_5 = var_170;
                    goto label_46cc0e;
                }
                
                rcx_5 = 0;
                label_46cc0e:
                char var_185_1 = var_e8;
                clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hf5a604ebb31d81af(&var_178, arg2, "fieldformatdelimiterroundsuffixi…", 5);
                void* rax_15 = clap_builder::parser::error::MatchesError::unwrap::h00661b2bfd48ffd9(
                    "fieldformatdelimiterroundsuffixi…", 5, &var_178);
                
                if (!rax_15)
                {
                    core::option::unwrap_failed::h893f57cb7db71cb7();
                    /* no return */
                }
                
                int64_t r15_3 = *(rax_15 + 8);
                int64_t r12_3 = *(rax_15 + 0x10);
                _$LT$core..str..pattern..MultiCharEqPattern$LT$C$GT$$u20$as$u20$core..str..pattern..Pattern$GT$::into_searcher::h1608f67deb20dfc5(&var_178, r15_3, r12_3);
                int64_t var_148_1 = 0;
                int64_t var_140_1 = r12_3;
                int16_t var_138_1 = 1;
                int64_t var_f8_1;
                char r12_4;
                int64_t r13_2;
                uint64_t r15_4;
                
                if (_$LT$core..ops..control_flow..ControlFlow$LT$B$C$C$GT$$u20$as$u20$core..cmp..PartialEq$GT$::eq::h78f8b3ebfd2d8e96(core::iter::traits::iterator::Iterator::try_fold::hddf39aa1e55312ac(&var_178)))
                {
                    uint64_t rax_18 = alloc::alloc::Global::alloc_impl::h6fb1b6049873c120(8, 0x10);
                    r12_4 = var_185_1;
                    
                    if (!rax_18)
                    {
                        alloc::alloc::handle_alloc_error::h88aa4f4f9d19c4f9();
                        /* no return */
                    }
                    
                    r15_4 = rax_18;
                    *rax_18 = 1;
                    *(rax_18 + 8) = -1;
                    var_f8_1 = 1;
                    r13_2 = 1;
                    goto label_46cd2e;
                }
                
                uucore::features::ranges::Range::from_list::h55160c8343b59905(&var_178, r15_3, 
                    r12_3);
                r13_2 = var_170;
                r15_4 = *var_170[8];
                r12_4 = var_185_1;
                int64_t var_160;
                
                if (!(var_178 & 1))
                {
                    var_f8_1 = var_160;
                    label_46cd2e:
                    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hf5a604ebb31d81af(&var_178, arg2, "formatdelimiterroundsuffixinvali…", 6);
                    void* rax_20 =
                        clap_builder::parser::error::MatchesError::unwrap::h00661b2bfd48ffd9(
                        "formatdelimiterroundsuffixinvali…", 6, &var_178);
                    int128_t var_118;
                    int64_t var_108;
                    int64_t var_d0;
                    int128_t var_c0_1;
                    int64_t var_b0;
                    int16_t var_a0;
                    int128_t zmm0_4;
                    
                    if (!rax_20)
                    {
                        var_a0 = 0;
                        var_f0 = nullptr;
                        var_e7 = 0;
                        var_d0 = 0;
                        int64_t var_c8_1 = 1;
                        var_c0_1 = {0};
                        var_b0 = 1;
                        int64_t var_a8_1 = 0;
                        label_46ce83:
                        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hf5a604ebb31d81af(&var_178, arg2, "delimiterroundsuffixinvalidzero-…", 9);
                        void* rax_23 =
                            clap_builder::parser::error::MatchesError::unwrap::h00661b2bfd48ffd9(
                            "delimiterroundsuffixinvalidzero-…", 9, &var_178);
                        var_170 = -0x8000000000000000;
                        var_178 = nullptr;
                        core::option::Option$LT$T$GT$::map_or::hb6e0e39bf98ad812(&var_118, rax_23, 
                            &var_178);
                        zmm0_4 = var_118;
                        int64_t var_100;
                        
                        if (var_118 != 1)
                        {
                            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hf5a604ebb31d81af(&var_178, arg2, "roundsuffixinvalidzero-terminate…", 5);
                            void* rax_27 = clap_builder::parser::error::MatchesError::unwrap::h00661b2bfd48ffd9("roundsuffixinvalidzero-terminate…", 5, &var_178);
                            
                            if (!rax_27)
                            {
                                core::option::unwrap_failed::h893f57cb7db71cb7();
                                /* no return */
                            }
                            
                            int64_t r13_3 = *(rax_27 + 8);
                            uint64_t r12_5 = *(rax_27 + 0x10);
                            char var_184_1;
                            
                            if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h47d6932d4cc292c3(r13_3, r12_5, "upfrom-zerotowards-zeronearestin…", 2))
                            {
                                var_184_1 = 1;
                                
                                if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h47d6932d4cc292c3(r13_3, r12_5, "downhelpNoneshim\x1b[0mnameCyan …", 4))
                                {
                                    var_184_1 = 2;
                                    
                                    if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h47d6932d4cc292c3(r13_3, r12_5, "from-zerotowards-zeronearestinte…", 9))
                                    {
                                        var_184_1 = 3;
                                        
                                        if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h47d6932d4cc292c3(r13_3, r12_5, "towards-zeronearestinternal erro…", 
                                            0xc))
                                        {
                                            var_184_1 = 4;
                                            
                                            if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h47d6932d4cc292c3(r13_3, r12_5, "nearestinternal error: entered u…", 
                                                7))
                                            {
                                                var_178 = &data_502870;
                                                var_170 = 1;
                                                void var_180;
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
                                var_184_1 = 0;
                            
                            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hf5a604ebb31d81af(&var_178, arg2, "suffixinvalidzero-terminatedinva…", 6);
                            void* rax_33 = clap_builder::parser::error::MatchesError::unwrap::h00661b2bfd48ffd9("suffixinvalidzero-terminatedinva…", 6, &var_178);
                            int128_t var_40;
                            
                            if (!rax_33)
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
                            void* rax_35 = clap_builder::parser::error::MatchesError::unwrap::h00661b2bfd48ffd9("invalidzero-terminatedinvalid pa…", 7, &var_178);
                            
                            if (!rax_35)
                            {
                                core::option::unwrap_failed::h893f57cb7db71cb7();
                                /* no return */
                            }
                            
                            _$LT$uu_numfmt..options..InvalidModes$u20$as$u20$core..str..traits..FromStr$GT$::from_str::h28548c6647834f32(&var_178, *(rax_35 + 8), *(rax_35 + 0x10));
                            char rax_36 =
                                core::result::Result$LT$T$C$E$GT$::unwrap::h8a277b51c91b5632(
                                &var_178);
                            char rax_37 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg2, "zero-terminatedinvalid padding v…", 0xf);
                            arg1[8] = var_100;
                            arg1[7] = zmm0_4;
                            *(arg1 + 0x88) = var_118;
                            *(arg1 + 0x98) = var_108;
                            int128_t zmm0_7 = var_f0;
                            arg1[1] = *var_e7[7];
                            arg1[2] = var_d0;
                            arg1[3] = var_c0_1;
                            arg1[4] = var_b0;
                            arg1[5] = var_a0;
                            *arg1 = zmm0_7;
                            *(arg1 + 0x58) = r13_2;
                            arg1[6] = r15_4;
                            *(arg1 + 0x68) = var_f8_1;
                            arg1[0xa] = rax_6;
                            *(arg1 + 0xa8) = rax_8;
                            arg1[0xb] = rbp;
                            *(arg1 + 0xb1) = var_185_1;
                            *(arg1 + 0xb8) = rcx_2;
                            arg1[0xc] = rcx_5;
                            *(arg1 + 0xc8) = rax_37;
                            *(arg1 + 0xc9) = rax_36;
                            *(arg1 + 0xca) = var_184_1;
                        }
                        else
                        {
                            *(arg1 + 0x18) = var_100;
                            label_46d233:
                            *(arg1 + 8) = zmm0_4;
                            *arg1 = 2;
                            core::ptr::drop_in_place$LT$uu_numfmt..options..FormatOptions$GT$::h8dc90de00e50d096(&var_f0);
                            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$clap_builder..util..id..Id$GT$$GT$::h9c4bd89731b2c9ca(r13_2, r15_4);
                        }
                    }
                    else
                    {
                        _$LT$uu_numfmt..options..FormatOptions$u20$as$u20$core..str..traits..FromStr$GT$::from_str::h667c9ec046668b63(&var_178, *(rax_20 + 8), *(rax_20 + 0x10));
                        void** const rax_21 = var_178;
                        var_118 = var_170;
                        var_108 = var_160;
                        
                        if (rax_21 != 2)
                        {
                            int64_t var_128;
                            var_a0 = var_128;
                            var_b0 = var_138_1;
                            var_c0_1 = var_148_1;
                            int128_t var_158;
                            var_d0 = var_158;
                            var_e8 = var_118;
                            int64_t var_d8_1 = var_108;
                            var_f0 = rax_21;
                            
                            if (!(var_128 & 1) || r12_4 == 5)
                                goto label_46ce83;
                            
                            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h4c3223c430555e40(&var_178, &data_41aedc, 0x25);
                            *(arg1 + 0x18) = *var_170[8];
                            zmm0_4 = var_178;
                            goto label_46d233;
                        }
                        
                        *(arg1 + 0x18) = var_108;
                        *(arg1 + 8) = var_118;
                        *arg1 = 2;
                        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$clap_builder..util..id..Id$GT$$GT$::h9c4bd89731b2c9ca(r13_2, r15_4);
                    }
                }
                else
                {
                    *(arg1 + 8) = r13_2;
                    arg1[1] = r15_4;
                    *(arg1 + 0x18) = var_160;
                    *arg1 = 2;
                }
            }
        }
    }
    return arg1;
}
