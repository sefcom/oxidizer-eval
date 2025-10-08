
  int64_t* uu_split::Settings::from::hea7ff87a16a6485d(int64_t* arg1, void* arg2, void* arg3, uint64_t arg4)

{
    int64_t var_178;
    uu_split::strategy::Strategy::from::h9ee849f2906356ca(&var_178, arg2, arg3, arg4);
    int64_t rax = var_178;
    int128_t var_170;
    int128_t var_1e8 = var_170;
    int128_t var_1a8;
    int64_t var_160;
    int64_t var_158;
    int128_t zmm0;
    
    if (rax != 4)
    {
        zmm0 = var_1e8;
        var_1a8 = zmm0;
        int64_t var_198_1 = var_160;
        arg1[4] = var_160;
        *(arg1 + 0x10) = zmm0;
        arg1[1] = rax;
        arg1[5] = var_158;
        *arg1 = 2;
    }
    else
    {
        zmm0 = var_1e8;
        int128_t var_78 = zmm0;
        int64_t var_68_1 = var_160;
        uu_split::filenames::Suffix::from::h3e22d3f4c49fbbaa(&var_178, arg2, &var_78);
        int64_t r14_1 = var_178;
        int64_t var_198;
        
        if (-(r14_1) != -0x8000000000000000)
        {
            int64_t r15_1 = var_170;
            int128_t zmm0_1 = var_158;
            int128_t var_58_1 = var_170;
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h613419db3ed32f13(
                &var_178, arg2);
            clap_builder::parser::error::MatchesError::unwrap::h667d7f3b57b3663f(&var_1e8, 
                &var_178);
            char var_1ec_1;
            int128_t var_148;
            char rax_4;
            
            if (!var_1e8)
            {
                rax_4 = 0xa;
                label_46eaa5:
                var_1ec_1 = rax_4;
                label_46eac0:
                clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hf389485a9e6f35ab(&var_178, arg2, "-io-blksizeinputprefix---a-b-C-l…", 0xb);
                void* rax_10 = clap_builder::parser::error::MatchesError::unwrap::h00d609c63283993e(
                    "-io-blksizeinputprefix---a-b-C-l…", 0xb, &var_178);
                int64_t var_188_1;
                int64_t var_d0;
                
                if (!rax_10)
                {
                    var_188_1 = 0;
                    label_46eb70:
                    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hf389485a9e6f35ab(&var_1e8, arg2, "prefix---a-b-C-l-n-tsrc/uu/split…", 6);
                    void* rax_12 =
                        clap_builder::parser::error::MatchesError::unwrap::h00d609c63283993e(
                        "prefix---a-b-C-l-n-tsrc/uu/split…", 6, &var_1e8);
                    
                    if (!rax_12)
                    {
                        core::option::unwrap_failed::h893f57cb7db71cb7();
                        /* no return */
                    }
                    
                    int128_t var_c8;
                    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(&var_c8, rax_12);
                    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hf389485a9e6f35ab(&var_1e8, arg2, "inputprefix---a-b-C-l-n-tsrc/uu/…", 5);
                    void* rax_13 =
                        clap_builder::parser::error::MatchesError::unwrap::h00d609c63283993e(
                        "inputprefix---a-b-C-l-n-tsrc/uu/…", 5, &var_1e8);
                    
                    if (!rax_13)
                    {
                        core::option::unwrap_failed::h893f57cb7db71cb7();
                        /* no return */
                    }
                    
                    int128_t var_b0;
                    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(&var_b0, rax_13);
                    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hf389485a9e6f35ab(&var_1e8, arg2, "filternumber-dhex-suffixes-xsuff…", 6);
                    void* rax_14 =
                        clap_builder::parser::error::MatchesError::unwrap::h00d609c63283993e(
                        "filternumber-dhex-suffixes-xsuff…", 6, &var_1e8);
                    
                    if (!rax_14)
                        var_1a8 = -0x8000000000000000;
                    else
                    {
                        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(&var_1e8, rax_14);
                        var_198 = var_160;
                        var_1a8 = var_1e8;
                    }
                    
                    char rax_16 = clap_builder::parser::matches::arg_matches::ArgMatches::value_source::h45c0c3cb9ce2c562(arg2, "verboseseparatorelide-empty-file…", 7);
                    char rax_17 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg2, "elide-empty-files-io-blksizeinpu…", 0x11);
                    int64_t var_b8;
                    *var_148[8] = var_b8;
                    int128_t var_150_1 = var_c8;
                    int64_t var_138_1 = r14_1;
                    int64_t var_130_1 = r15_1;
                    int128_t var_128_1 = var_58_1;
                    int128_t var_118_1 = zmm0_1;
                    int128_t var_108_1 = var_b0;
                    int64_t var_a0;
                    int64_t var_f8_1 = var_a0;
                    int64_t var_f0_1 = var_1a8;
                    int64_t var_e0_1 = var_198;
                    int64_t var_158_1 = var_160;
                    var_170 = zmm0;
                    bool var_d8_1 = rax_16 == 2;
                    char var_d6_1 = var_1ec_1;
                    char var_d7_1 = rax_17;
                    var_178 = var_188_1;
                    var_170 = var_d0;
                    int64_t rax_20 = *var_170[8];
                    
                    if (rax_20 > 5 || rax_20 > 5 || !TEST_BITQ(0x2a, rax_20)
                            || var_f0_1 == -0x8000000000000000)
                        memcpy(arg1, &var_178, 0xa8);
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
                        &var_178, *(rax_10 + 8), *(rax_10 + 0x10));
                    
                    if (var_178 != 4)
                        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(&var_1e8, rax_10);
                    else
                    {
                        int64_t rax_11 = var_170;
                        
                        if (!rax_11)
                            _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(&var_1e8, rax_10);
                        else
                        {
                            if (rax_11 < 0x20000001)
                            {
                                var_d0 = rax_11;
                                core::ptr::drop_in_place$LT$core..result..Result$LT$u64$C$uucore..features..parser..parse_size..ParseSizeError$GT$$GT$::h2d19b3a54b2f2f6e(&var_178);
                                var_188_1 = 1;
                                goto label_46eb70;
                            }
                            
                            _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(&var_1e8, rax_10);
                        }
                    }
                    
                    arg1[4] = var_160;
                    *(arg1 + 0x10) = var_1e8;
                    arg1[1] = 8;
                    *arg1 = 2;
                    core::ptr::drop_in_place$LT$core..result..Result$LT$u64$C$uucore..features..parser..parse_size..ParseSizeError$GT$$GT$::h2d19b3a54b2f2f6e(&var_178);
                    core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h81504cba959ecfd9(
                        r14_1, r15_1);
                }
            }
            else
            {
                int128_t var_1b8;
                var_148 = var_1b8;
                int128_t var_1c8;
                var_158 = var_1c8;
                var_170 = var_160;
                var_178 = var_1e8;
                void* rax_5 = _$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h30b8028acda9a64f(&var_178);
                
                if (!rax_5)
                {
                    core::option::unwrap_failed::h893f57cb7db71cb7();
                    /* no return */
                }
                
                void* var_180 = rax_5;
                int64_t rcx_2 = 6;
                
                if (_$LT$core..ops..control_flow..ControlFlow$LT$B$C$C$GT$$u20$as$u20$core..cmp..PartialEq$GT$::eq::h428b104382774de8(
                    core::iter::traits::iterator::Iterator::try_fold::h3a3421a286b792a8(&var_178, 
                        &var_180), 
                    0))
                {
                    void* rax_8 = var_180;
                    char* r13_1 = *(rax_8 + 8);
                    uint64_t rbp_1 = *(rax_8 + 0x10);
                    
                    if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hb641e38be83010ce(r13_1, rbp_1, "\0'' would overwrite input; abor…", 2))
                    {
                        var_1ec_1 = 0;
                        goto label_46eac0;
                    }
                    
                    if (rbp_1 == 1)
                    {
                        rax_4 = *r13_1;
                        goto label_46eaa5;
                    }
                    
                    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hfadfb68a35ae07bf(&var_1a8, r13_1, rbp_1);
                    arg1[4] = var_198;
                    *(arg1 + 0x10) = var_1a8;
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
            int128_t zmm1_1 = var_160;
            var_1a8 = var_170;
            var_198 = zmm1_1;
            *(arg1 + 0x20) = zmm1_1;
            *(arg1 + 0x10) = var_170;
            arg1[1] = 4;
            *arg1 = 2;
        }
    }
    return arg1;
}
