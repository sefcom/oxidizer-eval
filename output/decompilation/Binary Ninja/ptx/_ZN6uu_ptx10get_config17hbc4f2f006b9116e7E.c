
  int128_t* uu_ptx::get_config::hbc4f2f006b9116e7(int128_t* arg1, void* arg2)

{
    int128_t var_78;
    _$LT$uu_ptx..Config$u20$as$u20$core..default..Default$GT$::default::h5dee5f130f025e64(&var_78);
    char var_b8;
    int128_t* rax_2;
    
    if (!clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(arg2, 
        "traditionalflag-truncationmacro-…", 0xb))
    {
        char const* const var_b0_2 = "GNU extensions";
        int64_t var_a8_2 = 0xe;
        var_b8 = 1;
        rax_2 = alloc::boxed::Box$LT$T$GT$::new::hfc4024115c711549(&var_b8);
        label_5b625c:
        *(arg1 + 8) = rax_2;
        arg1[1] = &data_6edc08;
        *arg1 = -0x8000000000000000;
        core::ptr::drop_in_place$LT$uu_ptx..Config$GT$::h61e3e7302a3c0217(&var_78);
        return arg1;
    }
    
    char var_20_1 = 0;
    char var_1b_1 = 1;
    int128_t var_48;
    alloc::str::_$LT$impl$u20$alloc..borrow..ToOwned$u20$for$u20$str$GT$::clone_into::hedde276911c71a78(&var_48);
    
    if (clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h8ab577f2647f3b72(
        arg2, "sentence-regexpformat=texword-re…", 0xf))
    {
        char const* const var_b0_1 = "-S-:assertion failed: beg <= end…";
        int64_t var_a8_1 = 2;
        var_b8 = 1;
        rax_2 = alloc::boxed::Box$LT$T$GT$::new::hfc4024115c711549(&var_b8);
        goto label_5b625c;
    }
    
    char var_1f_1 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(arg2, 
        "auto-referencetraditionalflag-tr…", 0xe);
    char var_1e_1 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(arg2, 
        "referenceswidth", 0xa);
    char var_1d;
    char var_1d_1 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(arg2, 
        "right-side-refssentence-regexpfo…", 0xf) & var_1d;
    char rax_7 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(arg2, 
        "ignore-caseignore-fileonly-filer…", 0xb);
    
    if (!clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h8ab577f2647f3b72(
            arg2, "macro-nameformat=roffright-side-…", 0xa))
        goto label_5b6394;
    
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h0320162aad36ecc4(&var_b8, 
        arg2, "macro-nameformat=roffright-side-…", 0xa);
    void* rax_9 = clap_builder::parser::error::MatchesError::unwrap::h3979b7ce1fd00743(
        "macro-nameformat=roffright-side-…", 0xa, &var_b8);
    
    if (rax_9)
    {
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(
            &var_b8, rax_9);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hbabe7cf62dac4e15(&var_78);
        int64_t var_a8;
        int64_t var_68 = var_a8;
        var_78 = var_b8;
        label_5b6394:
        
        if (!clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h8ab577f2647f3b72(
                arg2, "flag-truncationmacro-nameformat=…", 0xf))
            goto label_5b640b;
        
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h0320162aad36ecc4(
            &var_b8, arg2, "flag-truncationmacro-nameformat=…", 0xf);
        void* rax_12 = clap_builder::parser::error::MatchesError::unwrap::h3979b7ce1fd00743(
            "flag-truncationmacro-nameformat=…", 0xf, &var_b8);
        
        if (rax_12)
        {
            _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(
                &var_b8, rax_12);
            int128_t var_60;
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hbabe7cf62dac4e15(&var_60);
            int64_t var_50_1 = var_a8;
            var_60 = var_b8;
            label_5b640b:
            
            if (!clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h8ab577f2647f3b72(arg2, "width", 5))
                goto label_5b64b3;
            
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h0320162aad36ecc4(
                &var_b8, arg2, "width", 5);
            void* rax_15 = clap_builder::parser::error::MatchesError::unwrap::h3979b7ce1fd00743(
                "width", 5, &var_b8);
            
            if (rax_15)
            {
                char var_88;
                core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$usize$GT$::from_str::h35e67cae0c0452a5(&var_88, *(rax_15 + 8), *(rax_15 + 0x10));
                int32_t var_b7;
                int64_t var_b0;
                char var_87;
                int64_t var_80;
                int64_t rax_17;
                
                if (!var_88)
                    rax_17 = var_80;
                else
                {
                    core::ops::function::FnOnce::call_once::h21988aba69442914(&var_b8, var_87);
                    char rax_16 = var_b8;
                    int32_t var_90_1 = var_b7;
                    
                    if (rax_16 != 3)
                    {
                        int32_t var_b7_1 = var_b7;
                        var_b8 = rax_16;
                        var_b0 = var_b0;
                        rax_2 = alloc::boxed::Box$LT$T$GT$::new::hfc4024115c711549(&var_b8);
                        goto label_5b625c;
                    }
                    
                    rax_17 = var_b0;
                }
                
                int128_t var_38;
                *var_38[8] = rax_17;
                label_5b64b3:
                
                if (!clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h8ab577f2647f3b72(arg2, "gap-siz", 8))
                    goto label_5b655b;
                
                clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h0320162aad36ecc4(&var_b8, arg2, "gap-siz", 8);
                void* rax_19 = clap_builder::parser::error::MatchesError::unwrap::h3979b7ce1fd00743(
                    "gap-siz", 8, &var_b8);
                
                if (rax_19)
                {
                    core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$usize$GT$::from_str::h35e67cae0c0452a5(&var_88, *(rax_19 + 8), *(rax_19 + 0x10));
                    int64_t rax_21;
                    
                    if (!var_88)
                        rax_21 = var_80;
                    else
                    {
                        core::ops::function::FnOnce::call_once::h21988aba69442914(&var_b8, var_87);
                        char rax_20 = var_b8;
                        int32_t var_90_2 = var_b7;
                        
                        if (rax_20 != 3)
                        {
                            int32_t var_b7_2 = var_b7;
                            var_b8 = rax_20;
                            var_b0 = var_b0;
                            rax_2 = alloc::boxed::Box$LT$T$GT$::new::hfc4024115c711549(&var_b8);
                            goto label_5b625c;
                        }
                        
                        rax_21 = var_b0;
                    }
                    
                    int64_t var_28 = rax_21;
                    label_5b655b:
                    
                    if (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(arg2, "format=roffright-side-refssenten…", 0xb))
                        var_1b_1 = 1;
                    
                    if (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(arg2, "format=texword-regexpbreak-filei…", 0xa))
                        var_1b_1 = 2;
                    
                    arg1[5] = var_28;
                    *(arg1 + 0x58) = var_20_1;
                    *(arg1 + 0x5c) = rax_7;
                    *(arg1 + 0x5d) = var_1b_1;
                    int16_t var_1a;
                    *(arg1 + 0x5e) = var_1a;
                    arg1[4] = var_38;
                    int128_t zmm0_5 = var_78;
                    int128_t zmm2_1 = var_60;
                    arg1[3] = var_48;
                    arg1[2] = zmm2_1;
                    arg1[1] = var_68;
                    *arg1 = zmm0_5;
                    return arg1;
                }
            }
        }
    }
    
    core::option::expect_failed::h9e03a1f6ff88dbcf("parsing options failedGNU extens…");
    /* no return */
}
