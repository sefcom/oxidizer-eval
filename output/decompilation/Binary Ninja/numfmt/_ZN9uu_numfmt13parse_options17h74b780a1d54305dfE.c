
  int64_t* uu_numfmt::parse_options::h74b780a1d54305df(int64_t* arg1, void* arg2)

{
    char const (** const var_1d8)[0xfd];
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hb067340ef573e101(
        &var_1d8, arg2, "fromAutoBOLDBlue\x1b[4mUNITSomed…", 4);
    void* rax = clap_builder::parser::error::MatchesError::unwrap::h08e9593b0ad642d4(
        "fromAutoBOLDBlue\x1b[4mUNITSomed…", 4, &var_1d8);
    
    if (!rax)
    {
        core::option::unwrap_failed::h0e11329e76906eaa();
        /* no return */
    }
    
    char const (** const var_138)[0xfd];
    uu_numfmt::parse_unit::hdfe14114e84c44e9(&var_138, *(rax + 8), *(rax + 0x10));
    char const (** const rax_1)[0xfd] = var_138;
    char var_130;
    int64_t var_12f;
    
    if (rax_1 != -0x8000000000000000)
    {
        arg1[3] = var_12f;
        *(arg1 + 0x11) = var_12f;
        arg1[1] = rax_1;
        arg1[2] = var_130;
        *arg1 = 2;
    }
    else
    {
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hb067340ef573e101(
            &var_1d8, arg2, "tofrom-unitto-unitpaddingheaderf…", 2);
        void* rax_2 = clap_builder::parser::error::MatchesError::unwrap::h08e9593b0ad642d4(
            "tofrom-unitto-unitpaddingheaderf…", 2, &var_1d8);
        
        if (!rax_2)
        {
            core::option::unwrap_failed::h0e11329e76906eaa();
            /* no return */
        }
        
        uu_numfmt::parse_unit::hdfe14114e84c44e9(&var_138, *(rax_2 + 8), *(rax_2 + 0x10));
        char const (** const rax_3)[0xfd] = var_138;
        
        if (rax_3 != -0x8000000000000000)
        {
            arg1[3] = var_12f;
            *(arg1 + 0x11) = var_12f;
            arg1[1] = rax_3;
            arg1[2] = var_130;
            *arg1 = 2;
        }
        else
        {
            char var_202_1 = var_130;
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hb067340ef573e101(
                &var_1d8, arg2, "from-unitto-unitpaddingheaderfie…", 9);
            void* rax_4 = clap_builder::parser::error::MatchesError::unwrap::h08e9593b0ad642d4(
                "from-unitto-unitpaddingheaderfie…", 9, &var_1d8);
            
            if (!rax_4)
            {
                core::option::unwrap_failed::h0e11329e76906eaa();
                /* no return */
            }
            
            uu_numfmt::parse_unit_size::hba45e7319bcb81ae(&var_1d8, *(rax_4 + 8), *(rax_4 + 0x10));
            char const (** const rax_5)[0xfd] = var_1d8;
            int32_t var_1d0[0x4];
            int32_t zmm0_1[0x4] = var_1d0;
            
            if (rax_5 != -0x8000000000000000)
                goto label_4c08dc;
            
            int32_t var_58_1[0x4] = zmm0_1;
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hb067340ef573e101(
                &var_1d8, arg2, "to-unitpaddingheaderfieldformatg…", 7);
            void* rax_6 = clap_builder::parser::error::MatchesError::unwrap::h08e9593b0ad642d4(
                "to-unitpaddingheaderfieldformatg…", 7, &var_1d8);
            
            if (!rax_6)
            {
                core::option::unwrap_failed::h0e11329e76906eaa();
                /* no return */
            }
            
            uu_numfmt::parse_unit_size::hba45e7319bcb81ae(&var_1d8, *(rax_6 + 8), *(rax_6 + 0x10));
            rax_5 = var_1d8;
            zmm0_1 = var_1d0;
            
            if (rax_5 != -0x8000000000000000)
                goto label_4c08dc;
            
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hb067340ef573e101(
                &var_1d8, arg2, "paddingheaderfieldformatgrouping…", 7);
            void* rax_7 = clap_builder::parser::error::MatchesError::unwrap::h08e9593b0ad642d4(
                "paddingheaderfieldformatgrouping…", 7, &var_1d8);
            int64_t rax_8;
            
            if (!rax_7)
            {
                rax_8 = 0;
                label_4c0723:
                int64_t rax_11;
                
                if (clap_builder::parser::matches::arg_matches::ArgMatches::value_source::h1b5412f9501eb404(arg2, "headerfieldformatgrouping cannot…", 6) == 2)
                {
                    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hb067340ef573e101(&var_1d8, arg2, "headerfieldformatgrouping cannot…", 6);
                    void* rax_10 =
                        clap_builder::parser::error::MatchesError::unwrap::h08e9593b0ad642d4(
                        "headerfieldformatgrouping cannot…", 6, &var_1d8);
                    
                    if (!rax_10)
                    {
                        core::option::unwrap_failed::h0e11329e76906eaa();
                        /* no return */
                    }
                    
                    core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$usize$GT$::from_str::h35e67cae0c0452a5(&var_1d8, *(rax_10 + 8), *(rax_10 + 0x10));
                    
                    if (!var_1d8)
                        rax_11 = var_1d0[0];
                    
                    if (!var_1d8 && rax_11)
                        goto label_4c07c1;
                    
                    *(rax_10 + 8);
                    *(rax_10 + 0x10);
                    uu_numfmt::parse_options::_$u7b$$u7b$closure$u7d$$u7d$::h7cf9a379c7bec393(
                        &var_1d8);
                    rax_5 = var_1d8;
                    
                    if (rax_5 != -0x8000000000000000)
                        goto label_4c08d7;
                    
                    rax_11 = var_1d0[0];
                    goto label_4c07c1;
                }
                
                rax_11 = 0;
                label_4c07c1:
                char var_201_1 = var_130;
                clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hb067340ef573e101(&var_1d8, arg2, "fieldformatgrouping cannot be co…", 5);
                void* rax_12 = clap_builder::parser::error::MatchesError::unwrap::h08e9593b0ad642d4(
                    "fieldformatgrouping cannot be co…", 5, &var_1d8);
                
                if (!rax_12)
                {
                    core::option::unwrap_failed::h0e11329e76906eaa();
                    /* no return */
                }
                
                int64_t r15_3 = *(rax_12 + 8);
                int64_t r12_1 = *(rax_12 + 0x10);
                _$LT$core..str..pattern..MultiCharEqPattern$LT$C$GT$$u20$as$u20$core..str..pattern..Pattern$GT$::into_searcher::h3869e540bcd9fb10(&var_1d8, r15_3, r12_1);
                int64_t var_1a8_1 = 0;
                int64_t var_1a0_1 = r12_1;
                int16_t var_198_1 = 1;
                int32_t var_d8[0x4];
                char r15_4;
                
                if (_$LT$core..ops..control_flow..ControlFlow$LT$B$C$C$GT$$u20$as$u20$core..cmp..PartialEq$GT$::eq::h4dbd70c27d8de298(core::iter::traits::iterator::Iterator::try_fold::h3a7d74c346e468e3(&var_1d8)))
                {
                    int64_t* rax_15 = alloc::alloc::Global::alloc_impl::hf61749d460433fff(0x10);
                    r15_4 = var_202_1;
                    
                    if (!rax_15)
                    {
                        alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1();
                        /* no return */
                    }
                    
                    *rax_15 = 1;
                    rax_15[1] = -1;
                    alloc::slice::hack::into_vec::hb3f415a8a3a51118(&var_d8, rax_15, 1);
                    goto label_4c0934;
                }
                
                uucore::features::ranges::Range::from_list::hf67be8a5ce4e6c04(&var_1d8, r15_3, 
                    r12_1);
                var_138 = var_1d0;
                int64_t var_1c0;
                var_12f = var_1c0;
                r15_4 = var_202_1;
                
                if (!var_1d8)
                {
                    int64_t var_c8 = var_12f;
                    var_d8 = var_138;
                    label_4c0934:
                    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hb067340ef573e101(&var_1d8, arg2, "formatgrouping cannot be combine…", 6);
                    void* rax_20 =
                        clap_builder::parser::error::MatchesError::unwrap::h08e9593b0ad642d4(
                        "formatgrouping cannot be combine…", 6, &var_1d8);
                    int32_t var_1f8[0x4];
                    int64_t var_1e8;
                    int64_t var_118;
                    int128_t var_108_1;
                    int64_t var_f8;
                    int16_t var_e8;
                    int32_t zmm0_5[0x4];
                    
                    if (!rax_20)
                    {
                        var_e8 = 0;
                        var_138 = nullptr;
                        var_12f = 0;
                        var_118 = 0;
                        int64_t var_110_1 = 1;
                        var_108_1 = {0};
                        var_f8 = 1;
                        int64_t var_f0_1 = 0;
                        label_4c0a19:
                        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hb067340ef573e101(&var_1d8, arg2, "delimiterroundupfrom-zerotowards…", 9);
                        void* rax_23 =
                            clap_builder::parser::error::MatchesError::unwrap::h08e9593b0ad642d4(
                            "delimiterroundupfrom-zerotowards…", 9, &var_1d8);
                        var_1d0[0] = -0x8000000000000000;
                        int128_t var_40;
                        var_1d0 = var_40;
                        var_1d8 = nullptr;
                        core::option::Option$LT$T$GT$::map_or::h196257d03fbff2c6(&var_1f8, rax_23, 
                            &var_1d8);
                        zmm0_5 = var_1f8;
                        int64_t var_1e0;
                        
                        if (!var_1f8[0])
                        {
                            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hb067340ef573e101(&var_1d8, arg2, "roundupfrom-zerotowards-zeronear…", 5);
                            void* rax_28 = clap_builder::parser::error::MatchesError::unwrap::h08e9593b0ad642d4("roundupfrom-zerotowards-zeronear…", 5, &var_1d8);
                            
                            if (!rax_28)
                            {
                                core::option::unwrap_failed::h0e11329e76906eaa();
                                /* no return */
                            }
                            
                            int64_t r15_5 = *(rax_28 + 8);
                            uint64_t r12_2 = *(rax_28 + 0x10);
                            char r13_1;
                            
                            if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h476a084f905105c4(r15_5, r12_2, "upfrom-zerotowards-zeronearestin…", 2))
                            {
                                r13_1 = 1;
                                
                                if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h476a084f905105c4(r15_5, r12_2, "downhelpNoneshimname\x1b[0m    C…", 4))
                                {
                                    r13_1 = 2;
                                    
                                    if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h476a084f905105c4(r15_5, r12_2, "from-zerotowards-zeronearestinte…", 9))
                                    {
                                        r13_1 = 3;
                                        
                                        if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h476a084f905105c4(r15_5, r12_2, "towards-zeronearestinternal erro…", 
                                            0xc))
                                        {
                                            r13_1 = 4;
                                            
                                            if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h476a084f905105c4(r15_5, r12_2, "nearestinternal error: entered u…", 
                                                7))
                                            {
                                                var_1d8 = &data_5358f0;
                                                var_1d0[0] = 1;
                                                void var_200;
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
                                r13_1 = 0;
                            
                            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hb067340ef573e101(&var_1d8, arg2, "suffixinvalidinvalid padding val…", 6);
                            void* rax_34 = clap_builder::parser::error::MatchesError::unwrap::h08e9593b0ad642d4("suffixinvalidinvalid padding val…", 6, &var_1d8);
                            
                            if (!rax_34)
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
                            void* rax_36 = clap_builder::parser::error::MatchesError::unwrap::h08e9593b0ad642d4("invalidinvalid padding value inv…", 7, &var_1d8);
                            
                            if (!rax_36)
                            {
                                core::option::unwrap_failed::h0e11329e76906eaa();
                                /* no return */
                            }
                            
                            _$LT$uu_numfmt..options..InvalidModes$u20$as$u20$core..str..traits..FromStr$GT$::from_str::h8733635cdad8a454(&var_1d8, *(rax_36 + 8), *(rax_36 + 0x10));
                            char rax_37 =
                                core::result::Result$LT$T$C$E$GT$::unwrap::h5e69027b68aabff9(
                                &var_1d8);
                            int64_t var_170_1 = var_c8;
                            int32_t var_180_1[0x4] = var_d8;
                            int32_t var_168_1[0x4] = zmm0_5;
                            int64_t var_158_1 = var_1e0;
                            int32_t var_150_1[0x4] = var_1f8;
                            int64_t var_140_1 = var_1e8;
                            var_1d8 = var_138;
                            var_1d0 = *var_12f[7];
                            int128_t var_1b8_1 = var_118;
                            var_1a8_1 = var_108_1;
                            var_198_1 = var_f8;
                            int64_t var_188_1 = var_e8;
                            memcpy(arg1, &var_1d8, 0xa0);
                            *(arg1 + 0xa0) = __unpcklpd_xmmpd_memdq(var_58_1, zmm0_1);
                            arg1[0x16] = var_201_1;
                            *(arg1 + 0xb1) = var_202_1;
                            arg1[0x17] = rax_8;
                            arg1[0x18] = rax_11;
                            arg1[0x19] = rax_37;
                            *(arg1 + 0xc9) = r13_1;
                        }
                        else
                        {
                            arg1[3] = var_1e0;
                            label_4c0b2f:
                            *(arg1 + 8) = zmm0_5;
                            *arg1 = 2;
                            core::ptr::drop_in_place$LT$uu_numfmt..options..FormatOptions$GT$::h145f8e2eba079399(&var_138);
                            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uucore..features..ranges..Range$GT$$GT$::hc100239ae3031ff0(&var_d8);
                        }
                    }
                    else
                    {
                        _$LT$uu_numfmt..options..FormatOptions$u20$as$u20$core..str..traits..FromStr$GT$::from_str::hdd662aa66ead1457(&var_1d8, *(rax_20 + 8), *(rax_20 + 0x10));
                        char const (** const rax_21)[0xfd] = var_1d8;
                        var_1f8 = var_1d0;
                        var_1e8 = var_1c0;
                        
                        if (rax_21 != 2)
                        {
                            int64_t var_188;
                            var_e8 = var_188;
                            var_f8 = var_198_1;
                            var_108_1 = var_1a8_1;
                            int32_t var_1b8[0x4];
                            var_118 = var_1b8;
                            var_130 = var_1f8;
                            int64_t var_120_1 = var_1e8;
                            var_138 = rax_21;
                            
                            if (r15_4 == 5 || !var_188)
                                goto label_4c0a19;
                            
                            _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h523a2f825c855b37(&var_1d8, "grouping cannot be combined with…", 0x25);
                            arg1[3] = var_1d0[2];
                            zmm0_5 = var_1d8;
                            goto label_4c0b2f;
                        }
                        
                        arg1[3] = var_1e8;
                        *(arg1 + 8) = var_1f8;
                        *arg1 = 2;
                        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uucore..features..ranges..Range$GT$$GT$::hc100239ae3031ff0(&var_d8);
                    }
                }
                else
                {
                    arg1[3] = var_12f;
                    *(arg1 + 8) = var_138;
                    *arg1 = 2;
                }
            }
            else
            {
                core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$isize$GT$::from_str::h4967ea1478f9fe2a(&var_1d8, *(rax_7 + 8), *(rax_7 + 0x10));
                
                if (!var_1d8)
                    rax_8 = var_1d0[0];
                
                if (!var_1d8 && rax_8)
                    goto label_4c0723;
                
                *(rax_7 + 8);
                *(rax_7 + 0x10);
                uu_numfmt::parse_options::_$u7b$$u7b$closure$u7d$$u7d$::h552d86bdbb68f662(&var_1d8);
                rax_5 = var_1d8;
                
                if (rax_5 == -0x8000000000000000)
                {
                    rax_8 = var_1d0[0];
                    goto label_4c0723;
                }
                
                label_4c08d7:
                zmm0_1 = var_1d0;
                label_4c08dc:
                arg1[1] = rax_5;
                *(arg1 + 0x10) = zmm0_1;
                *arg1 = 2;
            }
        }
    }
    return arg1;
}
