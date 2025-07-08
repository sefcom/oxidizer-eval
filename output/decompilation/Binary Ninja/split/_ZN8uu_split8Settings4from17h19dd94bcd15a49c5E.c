
  int64_t* uu_split::Settings::from::h19dd94bcd15a49c5(int64_t* arg1, void* arg2, int64_t* arg3, uint64_t arg4 @ r12)

{
    uint64_t var_28 = arg4;
    int32_t var_58;
    uu_split::strategy::Strategy::from::h55013c26ce2fc8ab(&var_58, arg2, arg3);
    int128_t var_248;
    int64_t var_238;
    int64_t var_1c8;
    int128_t var_1c0;
    int64_t var_1b0;
    int64_t var_1a8;
    int128_t var_f8;
    int128_t zmm0;
    
    if (var_58 != 4)
    {
        core::ops::function::FnOnce::call_once::haf814ba9ed64f54a(&var_1c8, &var_58);
        int64_t rax_1 = var_1c8;
        var_248 = var_1c0;
        var_238 = var_1b0;
        
        if (rax_1 == 9)
            goto label_4cb3fa;
        
        int64_t var_e8_1 = var_238;
        zmm0 = var_248;
        var_f8 = zmm0;
        arg1[4] = var_238;
        *(arg1 + 0x10) = zmm0;
        arg1[1] = rax_1;
        arg1[5] = var_1a8;
        *arg1 = 2;
    }
    else
    {
        int64_t var_40;
        var_238 = var_40;
        int128_t var_50;
        var_248 = var_50;
        label_4cb3fa:
        zmm0 = var_248;
        int64_t var_b8_1 = var_238;
        int128_t var_78 = zmm0;
        int64_t var_68_1 = var_238;
        uu_split::filenames::Suffix::from::h650e53160424c56f(&var_1c8, arg2, &var_78);
        int64_t rax_3 = var_1c8;
        int64_t var_228;
        int128_t var_1f8;
        
        if (rax_3 != -0x8000000000000000)
        {
            int128_t zmm1_1 = var_1b0;
            int64_t var_1e8_2 = zmm1_1;
            var_f8 = var_1c0;
            int64_t var_1a0;
            int64_t var_d0_1 = var_1a0;
            var_f8 = rax_3;
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::hf94087d00da7b45f(
                &var_1c8, arg2, "separatorelide-empty-files-io-bl…", 9);
            clap_builder::parser::error::MatchesError::unwrap::h33b6edd186448474(&var_248, 
                "separatorelide-empty-files-io-bl…", 9, &var_1c8);
            char var_24c_1;
            int128_t var_198;
            char rax_5;
            
            if (!var_248)
            {
                rax_5 = 0xa;
                label_4cb5f1:
                var_24c_1 = rax_5;
                label_4cb60c:
                clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h6b47e11c99165f29(&var_1c8, arg2, "-io-blksizeinputprefix---a-b-C-l…", 0xb);
                void* rax_11 = clap_builder::parser::error::MatchesError::unwrap::h5fb9f4927eec1aba(
                    "-io-blksizeinputprefix---a-b-C-l…", 0xb, &var_1c8);
                int64_t r15_3;
                
                if (!rax_11)
                {
                    r15_3 = 0;
                    label_4cb6ab:
                    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h6b47e11c99165f29(&var_248, arg2, "prefix---a-b-C-l-n-tsrc/uu/split…", 6);
                    void* rax_12 =
                        clap_builder::parser::error::MatchesError::unwrap::h5fb9f4927eec1aba(
                        "prefix---a-b-C-l-n-tsrc/uu/split…", 6, &var_248);
                    
                    if (!rax_12)
                    {
                        core::option::unwrap_failed::h0e11329e76906eaa();
                        /* no return */
                    }
                    
                    int128_t var_a8;
                    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(&var_a8, rax_12);
                    var_228 = zmm1_1;
                    int64_t var_e8;
                    var_238 = var_e8;
                    var_248 = var_f8;
                    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h6b47e11c99165f29(&var_1f8, arg2, "inputprefix---a-b-C-l-n-tsrc/uu/…", 5);
                    void* rax_13 =
                        clap_builder::parser::error::MatchesError::unwrap::h5fb9f4927eec1aba(
                        "inputprefix---a-b-C-l-n-tsrc/uu/…", 5, &var_1f8);
                    
                    if (!rax_13)
                    {
                        core::option::unwrap_failed::h0e11329e76906eaa();
                        /* no return */
                    }
                    
                    int128_t var_90;
                    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(&var_90, rax_13);
                    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h6b47e11c99165f29(&var_1f8, arg2, "filternumber-dhex-suffixes-xsuff…", 6);
                    void* rax_14 =
                        clap_builder::parser::error::MatchesError::unwrap::h5fb9f4927eec1aba(
                        "filternumber-dhex-suffixes-xsuff…", 6, &var_1f8);
                    int64_t var_118;
                    int64_t var_108;
                    
                    if (!rax_14)
                        var_118 = -0x8000000000000000;
                    else
                    {
                        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(&var_1f8, rax_14);
                        var_108 = var_1e8_2;
                        var_118 = var_1f8;
                    }
                    
                    char rax_16 = clap_builder::parser::matches::arg_matches::ArgMatches::value_source::h1b5412f9501eb404(arg2, "verboseseparatorelide-empty-file…", 7);
                    char rax_17 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(arg2, "elide-empty-files-io-blksizeinpu…", 0x11);
                    int64_t var_98;
                    *var_198[8] = var_98;
                    var_1a0 = var_a8;
                    int128_t var_188_1 = var_248;
                    int128_t var_178_1 = var_238;
                    int128_t var_168_1 = var_228;
                    int128_t var_158_1 = var_90;
                    int64_t var_80;
                    int64_t var_148_1 = var_80;
                    int64_t var_140_1 = var_118;
                    int64_t var_130_1 = var_108;
                    int64_t var_1a8_1 = var_b8_1;
                    var_1c0 = zmm0;
                    bool var_128_1 = rax_16 == 2;
                    char var_126_1 = var_24c_1;
                    char var_127_1 = rax_17;
                    var_1c8 = r15_3;
                    var_1c0 = arg4;
                    int64_t rax_18 = *var_1c0[8];
                    
                    if (rax_18 > 5 || rax_18 > 5 || !TEST_BITQ(0x2a, rax_18)
                            || var_140_1 == -0x8000000000000000)
                        memcpy(arg1, &var_1c8, 0xa8);
                    else
                    {
                        arg1[1] = 7;
                        *arg1 = 2;
                        core::ptr::drop_in_place$LT$uu_split..Settings$GT$::h052f7492a9b4d421(
                            &var_1c8);
                    }
                }
                else
                {
                    uucore::parser::parse_size::parse_size_u64::h6825c2c9656edafa(&var_1c8, 
                        *(rax_11 + 8), *(rax_11 + 0x10));
                    
                    if (var_1c8 != 3)
                        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(&var_248, rax_11);
                    else
                    {
                        arg4 = var_1c0;
                        
                        if (!arg4)
                            _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(&var_248, rax_11);
                        else
                        {
                            if (arg4 < 0x20000001)
                            {
                                core::ptr::drop_in_place$LT$core..result..Result$LT$u64$C$uucore..parser..parse_size..ParseSizeError$GT$$GT$::h015e0a63404a84f0(&var_1c8);
                                r15_3 = 1;
                                goto label_4cb6ab;
                            }
                            
                            _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(&var_248, rax_11);
                        }
                    }
                    
                    arg1[4] = var_238;
                    *(arg1 + 0x10) = var_248;
                    arg1[1] = 8;
                    *arg1 = 2;
                    core::ptr::drop_in_place$LT$core..result..Result$LT$u64$C$uucore..parser..parse_size..ParseSizeError$GT$$GT$::h015e0a63404a84f0(&var_1c8);
                    core::ptr::drop_in_place$LT$uu_split..filenames..Suffix$GT$::h108240889ad5c101(
                        &var_f8);
                }
            }
            else
            {
                int128_t zmm0_3 = var_248;
                int128_t var_218;
                var_198 = var_218;
                var_1a8 = var_228;
                var_1c0 = var_238;
                var_1c8 = zmm0_3;
                void* rax_6 = _$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h5d23ecd35bb48587(&var_1c8);
                
                if (!rax_6)
                {
                    core::option::unwrap_failed::h0e11329e76906eaa();
                    /* no return */
                }
                
                void* var_200 = rax_6;
                int64_t rcx_4 = 6;
                
                if (_$LT$core..ops..control_flow..ControlFlow$LT$B$C$C$GT$$u20$as$u20$core..cmp..PartialEq$GT$::eq::ha5fb3b5979973e2a(core::iter::traits::iterator::Iterator::try_fold::ha4b7b055f3a9f6fe(&var_1c8, 
                    &var_200)))
                {
                    void* rax_9 = var_200;
                    char* r15_1 = *(rax_9 + 8);
                    arg4 = *(rax_9 + 0x10);
                    
                    if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hfe60e619d7fc1608(r15_1, arg4, "\0'' would overwrite input; abor…", 2))
                    {
                        var_24c_1 = 0;
                        goto label_4cb60c;
                    }
                    
                    if (arg4 == 1)
                    {
                        rax_5 = *r15_1;
                        goto label_4cb5f1;
                    }
                    
                    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::ha461c13160c52a35(
                        &var_1f8, r15_1, arg4);
                    arg1[4] = var_1e8_2;
                    *(arg1 + 0x10) = var_1f8;
                    rcx_4 = 5;
                }
                
                arg1[1] = rcx_4;
                *arg1 = 2;
                core::ptr::drop_in_place$LT$uu_split..filenames..Suffix$GT$::h108240889ad5c101(
                    &var_f8);
            }
        }
        else
        {
            core::ops::function::FnOnce::call_once::hde63b1f7c3946962(&var_248, &var_1c0);
            int64_t var_1d8_1 = var_228;
            int128_t zmm0_2 = var_248;
            int128_t zmm1_2 = var_238;
            int128_t var_1e8_1 = zmm1_2;
            var_1f8 = zmm0_2;
            arg1[5] = var_228;
            *(arg1 + 0x18) = zmm1_2;
            *(arg1 + 8) = zmm0_2;
            *arg1 = 2;
        }
    }
    return arg1;
}
