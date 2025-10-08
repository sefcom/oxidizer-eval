
  int64_t* uu_tail::args::Settings::from::hd259b094c0210bc3(int64_t* arg1, void* arg2)

{
    char r13 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
        arg2, "Fretryfollowuse-pollingverbose-p…", 1);
    char rax = 1;
    
    if (!r13)
        rax = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            arg2, "retryfollowuse-pollingverbose-pr…", 5);
    
    char const (** const var_1c8)[0x89];
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h7b3d077d0028ebf2(
        &var_1c8, arg2, "followuse-pollingverbose-presume…", 6);
    void* rax_1 = clap_builder::parser::error::MatchesError::unwrap::hf1a769ab7d4b2739(
        "followuse-pollingverbose-presume…", 6, &var_1c8);
    int64_t* rdx;
    
    if (!rax_1)
    {
        rdx = 2;
        
        if (r13)
            rdx = 1;
    }
    else
    {
        int64_t r15_1 = *(rax_1 + 8);
        uint64_t r12_1 = *(rax_1 + 0x10);
        
        if (!r13)
        {
            label_49f126:
            char rax_4;
            rax_4 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h700a79b2753b21bb(r15_1, r12_1, &data_421a48[0x10], 4);
            
            if (rax_4)
                rdx = 1;
            else
                rdx = nullptr;
        }
        else
        {
            char rax_2;
            int64_t rdx_1;
            rax_2 =
                clap_builder::parser::matches::arg_matches::ArgMatches::index_of::h533e2cba337d4042(
                arg2, "Fretryfollowuse-pollingverbose-p…", 1);
            char rax_3;
            rax_3 =
                clap_builder::parser::matches::arg_matches::ArgMatches::index_of::h533e2cba337d4042(
                arg2, "followuse-pollingverbose-presume…", 6);
            bool rcx_1 = rdx_1 <= rdx;
            
            if (!(rax_2 & 1))
                goto label_49f126;
            
            rdx = 1;
            
            if (rax_3 & rcx_1)
                goto label_49f126;
        }
    }
    
    char var_154 = rdx;
    char rax_5 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg2, 
        "use-pollingverbose-presume-input…", 0xb);
    uu_tail::args::FilterMode::from::hb59232841d18f0f6(&var_1c8, arg2);
    char const (** const rbp_1)[0x89] = var_1c8;
    int64_t* result;
    int64_t var_1c0;
    int64_t var_1b8;
    
    if (rbp_1 != 5)
    {
        char rax_6 =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            arg2, "verbose-presume-input-pipesleep-…", 7);
        char rax_7 =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            arg2, "-presume-input-pipesleep-interva…", 0x13);
        _$LT$uu_tail..args..Settings$u20$as$u20$core..default..Default$GT$::default::hab317295196880fb(&var_1c8);
        char var_fc_1 = var_154;
        char const (** const var_148)[0x89] = rbp_1;
        int64_t var_140_1 = var_1c0;
        int64_t var_188;
        int64_t var_108_1 = var_188;
        int32_t var_190;
        int32_t var_110_1 = var_190;
        char var_ff_1 = rax_5;
        char var_fe_1 = rax_6;
        result = arg1;
        int128_t var_1b0;
        int128_t var_130 = var_1b0;
        int128_t var_1a0;
        int128_t var_120_1 = var_1a0;
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h7b3d077d0028ebf2(
            &var_1c8, arg2, "sleep-intervalmax-unchanged-stat…", 0xe);
        void* rax_14 = clap_builder::parser::error::MatchesError::unwrap::hf1a769ab7d4b2739(
            "sleep-intervalmax-unchanged-stat…", 0xe, &var_1c8);
        
        if (!rax_14)
            goto label_49f309;
        
        void* var_d8 = rax_14;
        int64_t var_d0;
        uucore::features::parser::parse_time::from_str::h30003dba666110f8(&var_d0, *(rax_14 + 8), 
            *(rax_14 + 0x10), 0);
        uint64_t rax_19;
        void** const rax_20;
        
        if (!(0 + -(var_d0)))
        {
            rax_19 = uu_tail::args::Settings::from::_$u7b$$u7b$closure$u7d$$u7d$::hfdc7478eec48226d(
                &var_d8, &var_d0);
            label_49f405:
            result[1] = rax_19;
            rax_20 = &data_573010;
            label_49f74c:
            result[2] = rax_20;
            *result = 5;
            core::ptr::drop_in_place$LT$uu_tail..args..Settings$GT$::h19701cb79d8addd9(&var_148);
        }
        else
        {
            int64_t var_c8;
            *var_120_1[8] = var_c8;
            int32_t var_c0;
            int32_t var_110_2 = var_c0;
            label_49f309:
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h7b3d077d0028ebf2(
                &var_1c8, arg2, "max-unchanged-statspidfilesquiet…", 0x13);
            void* rax_16 = clap_builder::parser::error::MatchesError::unwrap::hf1a769ab7d4b2739(
                "max-unchanged-statspidfilesquiet…", 0x13, &var_1c8);
            int64_t var_178;
            int64_t* var_f8;
            
            if (rax_16)
            {
                char* r15_3 = *(rax_16 + 8);
                int64_t r12_4 = *(rax_16 + 0x10);
                int64_t rax_17 =
                    core::num::_$LT$impl$u20$u32$GT$::from_ascii_radix::h825576ac29f90020(r15_3, 
                    r12_4);
                
                if (rax_17 & 1)
                {
                    var_178 = 0;
                    char* var_170_1 = r15_3;
                    int64_t var_168_1 = r12_4;
                    char var_160_1 = 1;
                    var_f8 = &var_178;
                    int64_t (* var_f0_1)(int32_t* arg1, int64_t* arg2) = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                    var_1c8 = &data_572fb0;
                    int64_t var_1c0_1 = 1;
                    *var_1b0[8] = 0;
                    int64_t** var_1b8_1 = &var_f8;
                    var_1b0 = 1;
                    int128_t var_b8;
                    core::option::Option$LT$T$GT$::map_or_else::h0ad4dbebb1db8692(&var_b8, 
                        &var_1c8);
                    var_1b0 = 1;
                    var_1c8 = var_b8;
                    int64_t var_a8;
                    int64_t var_1b8_2 = var_a8;
                    rax_19 = alloc::boxed::Box$LT$T$GT$::new::hb525c77ba03b79d9(&var_1c8);
                    goto label_49f405;
                }
                
                var_108_1 = rax_17 >> 0x20;
            }
            
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h7b3d077d0028ebf2(
                &var_1c8, arg2, "pidfilesquietinvalid number of s…", 3);
            void* rax_22 = clap_builder::parser::error::MatchesError::unwrap::hf1a769ab7d4b2739(
                "pidfilesquietinvalid number of s…", 3, &var_1c8);
            
            if (rax_22)
            {
                char* r12_5 = *(rax_22 + 8);
                int64_t r15_4 = *(rax_22 + 0x10);
                int64_t rax_23 =
                    core::num::_$LT$impl$u20$i32$GT$::from_ascii_radix::h8c416a74051ba1e6(r12_5, 
                    r15_4);
                uint64_t rax_25;
                
                if (rax_23 & 1)
                {
                    char var_1c9 = *rax_23[1];
                    var_178 = 0;
                    char* var_170_2 = r12_5;
                    int64_t var_168_2 = r15_4;
                    char var_160_2 = 1;
                    var_f8 = &var_178;
                    int64_t (* var_f0_2)(int32_t* arg1, int64_t* arg2) = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                    char* var_e8_1 = &var_1c9;
                    int64_t (* var_e0_1)(char* arg1, int64_t* arg2) = _$LT$core..num..error..ParseIntError$u20$as$u20$core..fmt..Display$GT$::fmt::h3e61086f3d7b9af4;
                    var_1c8 = &data_572fd0;
                    int64_t var_1c0_2 = 2;
                    *var_1b0[8] = 0;
                    int64_t** var_1b8_3 = &var_f8;
                    var_1b0 = 2;
                    int128_t var_88;
                    core::option::Option$LT$T$GT$::map_or_else::h0ad4dbebb1db8692(&var_88, 
                        &var_1c8);
                    var_1b0 = 1;
                    var_1c8 = var_88;
                    int64_t var_78;
                    int64_t var_1b8_4 = var_78;
                    rax_25 = alloc::boxed::Box$LT$T$GT$::new::hb525c77ba03b79d9(&var_1c8);
                    label_49f741:
                    result[1] = rax_25;
                    rax_20 = &data_572f18;
                    goto label_49f74c;
                }
                
                if (rax_23 < 0)
                {
                    var_178 = 0;
                    char* var_170_3 = r12_5;
                    int64_t var_168_3 = r15_4;
                    char var_160_3 = 1;
                    var_f8 = &var_178;
                    int64_t (* var_f0_3)(int32_t* arg1, int64_t* arg2) = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                    var_1c8 = &data_572fc0;
                    int64_t var_1c0_3 = 1;
                    *var_1b0[8] = 0;
                    int64_t** var_1b8_5 = &var_f8;
                    var_1b0 = 1;
                    int128_t var_a0;
                    core::option::Option$LT$T$GT$::map_or_else::h0ad4dbebb1db8692(&var_a0, 
                        &var_1c8);
                    var_1b0 = 1;
                    var_1c8 = var_a0;
                    int64_t var_90;
                    int64_t var_1b8_6 = var_90;
                    rax_25 = alloc::boxed::Box$LT$T$GT$::new::hb525c77ba03b79d9(&var_1c8);
                    goto label_49f741;
                }
                
                *var_108_1[4] = rax_23 >> 0x20;
            }
            
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::hfeeaae4cf3e9fe7d(
                &var_1c8, arg2);
            int64_t var_70;
            clap_builder::parser::error::MatchesError::unwrap::h06967c07660eda5f(&var_70, &var_1c8);
            
            if (!var_70)
                uu_tail::args::Settings::from::_$u7b$$u7b$closure$u7d$$u7d$::h7af28a89fa321ee6(
                    &var_1c8);
            else
            {
                core::iter::traits::iterator::Iterator::collect::hac11550ad94c7bc1(&var_1c8, 
                    &var_70);
                char const (** const rax_27)[0x89] = var_1c8;
                var_178 = var_1c0;
                
                if (-(rax_27) != -0x8000000000000000)
                {
                    var_1c0 = var_178;
                    var_1c8 = rax_27;
                }
                else
                    uu_tail::args::Settings::from::_$u7b$$u7b$closure$u7d$$u7d$::h7af28a89fa321ee6(
                        &var_1c8);
            }
            
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_tail..paths..Input$GT$$GT$::hc1e8b2989ad93a4f(&var_130);
            var_120_1 = var_1b8;
            var_130 = var_1c8;
            result = arg1;
            char rax_30;
            
            if (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
                    arg2, "verbose-presume-input-pipesleep-…", 7) || var_120_1 >= 2)
                rax_30 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg2, "quietinvalid number of seconds: …", 5) ^ 1;
            else
                rax_30 = 0;
            
            int128_t zmm0_6 = var_148;
            int128_t zmm2_1 = var_130;
            *(result + 0x30) = var_120_1;
            *(result + 0x20) = zmm2_1;
            *(result + 0x10) = var_1b8;
            *result = zmm0_6;
            result[8] = var_108_1;
            result[9] = rax;
            *(result + 0x4a) = rax_30;
            *(result + 0x4b) = rax_7;
            char var_f9;
            *(result + 0x4f) = var_f9;
        }
    }
    else
    {
        arg1[1] = var_1c0;
        arg1[2] = var_1b8;
        result = arg1;
        *arg1 = 5;
    }
    return result;
}
