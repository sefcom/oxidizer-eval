
  int128_t* uu_ptx::get_config::h0871b6c26e5986f1(int128_t* arg1, void* arg2)

{
    int128_t var_88;
    _$LT$uu_ptx..Config$u20$as$u20$core..default..Default$GT$::default::hd765301625a6e0fd(&var_88);
    char var_c8;
    uint64_t rax_2;
    
    if (!clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg2, 
        "traditionalflag-truncationmacro-…", 0xb))
    {
        char const* const var_c0_2 = "GNU extensions-S:assertion faile…";
        int64_t var_b8_2 = 0xe;
        var_c8 = 1;
        rax_2 = alloc::boxed::Box$LT$T$GT$::new::h2875cf048a4ad78b(&var_c8);
        label_52b48c:
        *(arg1 + 8) = rax_2;
        arg1[1] = &data_651798;
        *arg1 = -0x8000000000000000;
        core::ptr::drop_in_place$LT$uu_ptx..Config$GT$::h513a670c84b922c8(&var_88);
        return arg1;
    }
    
    char var_30_1 = 0;
    char var_2b_1 = 1;
    int128_t var_58;
    alloc::str::_$LT$impl$u20$alloc..borrow..ToOwned$u20$for$u20$str$GT$::clone_into::h29d41bfe54f0b37f(&var_58);
    
    if (clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h5efeb7e2d2f22590(
        arg2, "sentence-regexpword-regexpbreak-…", 0xf))
    {
        char const* const var_c0_1 = "-S:assertion failed: beg <= enda…";
        int64_t var_b8_1 = 2;
        var_c8 = 1;
        rax_2 = alloc::boxed::Box$LT$T$GT$::new::h2875cf048a4ad78b(&var_c8);
        goto label_52b48c;
    }
    
    char var_2f_1 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg2, 
        "auto-referencetraditionalflag-tr…", 0xe);
    char var_2e_1 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg2, 
        "referenceswidthProduce a permute…", 0xa);
    char var_2d;
    char var_2d_1 = var_2d &
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg2, 
        "right-side-refssentence-regexpwo…", 0xf);
    char rax_7 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg2, 
        "ignore-caseignore-fileonly-filer…", 0xb);
    
    if (!clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h5efeb7e2d2f22590(
            arg2, "macro-nameformatright-side-refss…", 0xa))
        goto label_52b5c0;
    
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h88d1a3ba1868cd68(&var_c8, 
        arg2, "macro-nameformatright-side-refss…", 0xa);
    void* rax_9 = clap_builder::parser::error::MatchesError::unwrap::h04f490a5ade46ed0(
        "macro-nameformatright-side-refss…", 0xa, &var_c8);
    
    if (rax_9)
    {
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(
            &var_c8, rax_9);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hdf1f386795eaa8a5(&var_88);
        int64_t var_b8;
        int64_t var_78 = var_b8;
        var_88 = var_c8;
        label_52b5c0:
        
        if (!clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h5efeb7e2d2f22590(
                arg2, "flag-truncationmacro-nameformatr…", 0xf))
            goto label_52b63d;
        
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h88d1a3ba1868cd68(
            &var_c8, arg2, "flag-truncationmacro-nameformatr…", 0xf);
        void* rax_12 = clap_builder::parser::error::MatchesError::unwrap::h04f490a5ade46ed0(
            "flag-truncationmacro-nameformatr…", 0xf, &var_c8);
        
        if (rax_12)
        {
            _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(
                &var_c8, rax_12);
            int128_t var_70;
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hdf1f386795eaa8a5(&var_70);
            int64_t var_60_1 = var_b8;
            var_70 = var_c8;
            label_52b63d:
            
            if (!clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h5efeb7e2d2f22590(arg2, "widthProduce a permuted index of…", 5))
                goto label_52b6d1;
            
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h88d1a3ba1868cd68(
                &var_c8, arg2, "widthProduce a permuted index of…", 5);
            void* rax_15 = clap_builder::parser::error::MatchesError::unwrap::h04f490a5ade46ed0(
                "widthProduce a permuted index of…", 5, &var_c8);
            
            if (rax_15)
            {
                char var_98;
                core::num::_$LT$impl$u20$usize$GT$::from_ascii_radix::he77532141bbadde7(&var_98, 
                    *(rax_15 + 8), *(rax_15 + 0x10));
                char var_97;
                
                if (var_98 == 1)
                {
                    var_c8 = 2;
                    char var_c7_1 = var_97;
                    rax_2 = alloc::boxed::Box$LT$T$GT$::new::h2875cf048a4ad78b(&var_c8);
                    goto label_52b48c;
                }
                
                int64_t var_90;
                int64_t var_40_1 = var_90;
                label_52b6d1:
                
                if (!clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h5efeb7e2d2f22590(arg2, "gap-siz", 8))
                    goto label_52b76a;
                
                clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h88d1a3ba1868cd68(&var_c8, arg2, "gap-siz", 8);
                void* rax_19 = clap_builder::parser::error::MatchesError::unwrap::h04f490a5ade46ed0(
                    "gap-siz", 8, &var_c8);
                
                if (rax_19)
                {
                    core::num::_$LT$impl$u20$usize$GT$::from_ascii_radix::he77532141bbadde7(
                        &var_98, *(rax_19 + 8), *(rax_19 + 0x10));
                    
                    if (var_98)
                    {
                        var_c8 = 2;
                        char var_c7_2 = var_97;
                        rax_2 = alloc::boxed::Box$LT$T$GT$::new::h2875cf048a4ad78b(&var_c8);
                        goto label_52b48c;
                    }
                    
                    int64_t var_38 = var_90;
                    label_52b76a:
                    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h88d1a3ba1868cd68(&var_c8, arg2, "formatright-side-refssentence-re…", 6);
                    void* rax_22 =
                        clap_builder::parser::error::MatchesError::unwrap::h04f490a5ade46ed0(
                        "formatright-side-refssentence-re…", 6, &var_c8);
                    
                    if (rax_22)
                    {
                        int64_t r15_1 = *(rax_22 + 8);
                        uint64_t r12_1 = *(rax_22 + 0x10);
                        char rcx_1 = 1;
                        
                        if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hc639eb17d6278023(r15_1, r12_1, "roffHashj", 4))
                        {
                            rcx_1 = 2;
                            
                            if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hc639eb17d6278023(r15_1, r12_1, "texinternal error: entered unrea…", 3))
                            {
                                var_c8 = &data_651768;
                                int64_t var_c0_3 = 1;
                                void var_d0;
                                void* var_b8_3 = &var_d0;
                                int128_t var_b0 = {0};
                                core::panicking::panic_fmt::h96f341d36638c225(&var_c8);
                                /* no return */
                            }
                        }
                        
                        var_2b_1 = rcx_1;
                    }
                    
                    if (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg2, "roffHashj", 4))
                        var_2b_1 = 1;
                    
                    if (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg2, "texinternal error: entered unrea…", 3))
                        var_2b_1 = 2;
                    
                    arg1[5] = var_38;
                    *(arg1 + 0x58) = var_30_1;
                    *(arg1 + 0x5c) = rax_7;
                    *(arg1 + 0x5d) = var_2b_1;
                    int16_t var_2a;
                    *(arg1 + 0x5e) = var_2a;
                    int128_t var_48;
                    arg1[4] = var_48;
                    int128_t zmm0_3 = var_88;
                    int128_t zmm2_1 = var_70;
                    arg1[3] = var_58;
                    arg1[2] = zmm2_1;
                    arg1[1] = var_78;
                    *arg1 = zmm0_3;
                    return arg1;
                }
            }
        }
    }
    
    core::option::expect_failed::h3f620cfb8545dc61("parsing options failedGNU extens…");
    /* no return */
}
