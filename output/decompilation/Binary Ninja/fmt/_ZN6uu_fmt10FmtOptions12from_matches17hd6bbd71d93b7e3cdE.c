
  int64_t* uu_fmt::FmtOptions::from_matches::hd6bbd71d93b7e3cd(int64_t* arg1, void* arg2)

{
    char rax = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
        arg2, "tagged-paragraph[short aliases: …", 0x10);
    char rax_1 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg2, 
        "crown-marginuniform-spacingquick…", 0xc);
    char rax_2 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg2, 
        "preserve-headersDOUBLE_UNDERLINE…", 0x10);
    char rax_3 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg2, 
        "uniform-spacingquicksplit-onlyex…", 0xf);
    char rax_4 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg2, 
        "quicksplit-onlyexact-prefixskip-…", 5);
    char rax_5 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg2, 
        "split-onlyexact-prefixskip-prefi…", 0xa);
    char rax_6 =
        clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h5efeb7e2d2f22590(
        arg2, "exact-prefixskip-prefixprefixtab…", 0xc);
    char rax_7 =
        clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h5efeb7e2d2f22590(
        arg2, "skip-prefixprefixtab-width-read …", 0xb);
    int32_t var_138[0x4];
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h44c4a3f5845ce8d4(
        &var_138, arg2, "prefixtab-width-read errorcannot…", 6);
    void* rax_8 = clap_builder::parser::error::MatchesError::unwrap::h80b30bf7e42be37c(
        "prefixtab-width-read errorcannot…", 6, &var_138);
    int64_t var_b0;
    
    if (!rax_8)
        var_b0 = -0x8000000000000000;
    else
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(
            &var_b0, rax_8);
    
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h44c4a3f5845ce8d4(
        &var_138, arg2, "skip-prefixprefixtab-width-read …", 0xb);
    void* rax_9 = clap_builder::parser::error::MatchesError::unwrap::h80b30bf7e42be37c(
        "skip-prefixprefixtab-width-read …", 0xb, &var_138);
    int64_t var_128;
    int64_t var_c8;
    int64_t var_b8;
    
    if (!rax_9)
        var_c8 = -0x8000000000000000;
    else
    {
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(
            &var_138, rax_9);
        var_b8 = var_128;
        var_c8 = var_138;
    }
    
    uu_fmt::extract_width::h7438790f5cc9b932(&var_138, arg2);
    int64_t r13 = var_138[2];
    int64_t r15 = var_128;
    
    if (var_138[0] != 1)
    {
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h44c4a3f5845ce8d4(
            &var_138, arg2, "goalBlue\x1b[4m", 4);
        void* rax_11 = clap_builder::parser::error::MatchesError::unwrap::h80b30bf7e42be37c(
            "goalBlue\x1b[4m", 4, &var_138);
        int64_t var_120;
        int64_t* var_100;
        char var_e0;
        int64_t var_d8;
        int64_t* var_98;
        uint64_t rax_19;
        int64_t r14_2;
        
        if (!rax_11)
        {
            int64_t var_d0;
            
            if (r13 & 1)
            {
                if (!r15)
                {
                    r15 = 0;
                    r14_2 = 0;
                    goto label_46424b;
                }
                
                r14_2 = core::cmp::Ord::max::hec69546a31dcf558(r15 * 0x5d / 0x64, 1);
                label_46416b:
                var_d0 = r15;
                
                if (r15 <= 0x9c4)
                    goto label_464264;
                
                var_100 = &var_d0;
                uint64_t (* var_f8_2)(int64_t* arg1, int64_t* arg2) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::h3bef13756113ac7b;
                var_138[0] = &data_4f06c0;
                var_138[2] = 2;
                int64_t var_118_2 = 0;
                int64_t** var_128_5 = &var_100;
                int64_t var_120_2 = 1;
                int32_t var_60[0x4];
                core::option::Option$LT$T$GT$::map_or_else::h974ccb46cc19ceac(&var_60, &var_138);
                var_120_2 = 1;
                var_138 = var_60;
                int64_t var_50;
                int64_t var_128_6 = var_50;
                rax_19 = alloc::boxed::Box$LT$T$GT$::new::h2c9a23957ea0966a(&var_138);
                goto label_464204;
            }
            
            r14_2 = 0x46;
            r15 = 0x4b;
            label_46424b:
            var_d0 = r15;
            label_464264:
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h44c4a3f5845ce8d4(
                &var_138, arg2, "tab-width-read errorcannot open …", 9);
            void* rax_26 = clap_builder::parser::error::MatchesError::unwrap::h80b30bf7e42be37c(
                "tab-width-read errorcannot open …", 9, &var_138);
            int64_t rax_30;
            
            if (!rax_26)
            {
                rax_30 = 8;
                label_4643d7:
                int32_t zmm0_6[0x4] = var_b0;
                var_138 = zmm0_6;
                var_120 = var_c8;
                *arg1 = zmm0_6;
                int64_t var_118;
                arg1[4] = var_118;
                arg1[5] = var_b8;
                int64_t var_a0;
                arg1[2] = var_a0;
                arg1[3] = var_120;
                arg1[6] = r15;
                arg1[7] = r14_2;
                int32_t temp0_1[0x4] = _mm_insert_epi16(
                    rax_5 << 0x18 | rax_2 << 0x10 | (rax & ((rax_1 | rax_5) ^ 1)) << 8
                        | ((rax_5 ^ 1) & rax_1), 
                    rax_7 << 8 | rax_6, 2);
                arg1[8] = rax_30 + 0;
                arg1[9] = _mm_insert_epi16(temp0_1, rax_4 << 8 | rax_3, 3)[0];
            }
            else
            {
                char* r12_1 = *(rax_26 + 8);
                int64_t rbp_2 = *(rax_26 + 0x10);
                core::num::_$LT$impl$u20$usize$GT$::from_ascii_radix::he77532141bbadde7(&var_e0, 
                    r12_1, rbp_2);
                
                if (var_e0 != 1)
                {
                    rax_30 = var_d8;
                    goto label_4643d7;
                }
                
                char var_df;
                char var_139 = var_df;
                var_100 = nullptr;
                char* var_f8_3 = r12_1;
                int64_t var_f0_2 = rbp_2;
                char var_e8_2 = 1;
                var_98 = &var_100;
                int64_t (* var_90_2)(int32_t* arg1, int64_t* arg2) = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                char* var_88_1 = &var_139;
                int64_t (* var_80_1)(char* arg1, int64_t* arg2) = _$LT$core..num..error..ParseIntError$u20$as$u20$core..fmt..Display$GT$::fmt::h3e61086f3d7b9af4;
                var_138[0] = &data_4f06e0;
                var_138[2] = 2;
                int64_t var_118_3 = 0;
                int64_t** var_128_7 = &var_98;
                int64_t var_120_3 = 2;
                int32_t var_48[0x4];
                core::option::Option$LT$T$GT$::map_or_else::h974ccb46cc19ceac(&var_48, &var_138);
                var_120_3 = 1;
                var_138 = var_48;
                int64_t var_38;
                int64_t var_128_8 = var_38;
                arg1[1] = alloc::boxed::Box$LT$T$GT$::new::h2c9a23957ea0966a(&var_138);
                arg1[2] = &data_4f0720;
                *arg1 = -0x7fffffffffffffff;
                core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..string..String$GT$$GT$::hed5affe035b3a656(&var_c8);
                core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..string..String$GT$$GT$::hed5affe035b3a656(&var_b0);
            }
        }
        else
        {
            char* r14_1 = *(rax_11 + 8);
            int64_t rbp_1 = *(rax_11 + 0x10);
            core::num::_$LT$impl$u20$usize$GT$::from_ascii_radix::he77532141bbadde7(&var_e0, r14_1, 
                rbp_1);
            
            if (var_e0 != 1)
            {
                r14_2 = var_d8;
                int64_t var_f0;
                
                if (r13 & 1)
                {
                    if (r14_2 <= r15)
                        goto label_46416b;
                    
                    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h7c69efe601866818(&var_100, "GOAL cannot be greater than WIDT…", 0x22);
                    int64_t var_128_3 = var_f0;
                    var_138 = var_100;
                    var_120 = 1;
                    rax_19 = alloc::boxed::Box$LT$T$GT$::new::h2c9a23957ea0966a(&var_138);
                    goto label_464204;
                }
                
                if (r14_2 <= 0x4b)
                {
                    int16_t rax_21 = r14_2 * 0x64;
                    uint32_t rcx_3 = (rax_21 * 0x6059) >> 0x10;
                    r15 = core::cmp::Ord::max::hec69546a31dcf558(
                        (((rax_21 - rcx_3) >> 1) + rcx_3) >> 6, r14_2 + 3);
                    goto label_46416b;
                }
                
                _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h7c69efe601866818(&var_100, "GOAL cannot be greater than WIDT…", 0x22);
                int64_t var_128_4 = var_f0;
                var_138 = var_100;
                var_120 = 1;
                rax_19 = alloc::boxed::Box$LT$T$GT$::new::h2c9a23957ea0966a(&var_138);
                label_464204:
                arg1[1] = rax_19;
                arg1[2] = &data_4f0720;
                goto label_464213;
            }
            
            var_100 = nullptr;
            char* var_f8_1 = r14_1;
            int64_t var_f0_1 = rbp_1;
            char var_e8_1 = 1;
            var_98 = &var_100;
            int64_t (* var_90_1)(int32_t* arg1, int64_t* arg2) =
                _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
            var_138[0] = &data_4f06b0;
            var_138[2] = 1;
            int64_t var_118_1 = 0;
            int64_t** var_128_1 = &var_98;
            int64_t var_120_1 = 1;
            int32_t var_78[0x4];
            core::option::Option$LT$T$GT$::map_or_else::h974ccb46cc19ceac(&var_78, &var_138);
            var_120_1 = 1;
            var_138 = var_78;
            int64_t var_68;
            int64_t var_128_2 = var_68;
            arg1[1] = alloc::boxed::Box$LT$T$GT$::new::h2c9a23957ea0966a(&var_138);
            arg1[2] = &data_4f0720;
            *arg1 = -0x7fffffffffffffff;
            core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..string..String$GT$$GT$::hed5affe035b3a656(&var_c8);
            core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..string..String$GT$$GT$::hed5affe035b3a656(&var_b0);
        }
    }
    else
    {
        arg1[1] = r13;
        arg1[2] = r15;
        label_464213:
        *arg1 = -0x7fffffffffffffff;
        core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..string..String$GT$$GT$::hed5affe035b3a656(&var_c8);
        core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..string..String$GT$$GT$::hed5affe035b3a656(&var_b0);
    }
    
    return arg1;
}
