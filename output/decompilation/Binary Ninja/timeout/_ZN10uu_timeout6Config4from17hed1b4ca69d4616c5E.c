
  int64_t* uu_timeout::Config::from::hed1b4ca69d4616c5(int64_t* arg1, void* arg2)

{
    void* const var_f8;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h750a4b638bcd2e41(&var_f8, 
        arg2, "signalpreserve-statusverbosecomm…", 6);
    void* rax = clap_builder::parser::error::MatchesError::unwrap::hf05e35bee3f0c992(
        "signalpreserve-statusverbosecomm…", 6, &var_f8);
    int64_t rdx_1;
    
    if (!rax)
    {
        char rax_4;
        rax_4 = uucore::features::signals::signal_by_name_or_value::h89b982f23c5744ec(
            "TERMtruemaincharSTOPTTIN -> \x1b…", 4);
        
        if (rax_4 & 1)
            goto label_46d0da;
        
        core::option::unwrap_failed::h893f57cb7db71cb7();
        /* no return */
    }
    
    char rax_1;
    rax_1 = uucore::features::signals::signal_by_name_or_value::h89b982f23c5744ec(*(rax + 8), 
        *(rax + 0x10));
    int64_t var_b0;
    
    if (rax_1 & 1)
    {
        label_46d0da:
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h750a4b638bcd2e41(
            &var_f8, arg2, "kill-aftersignalpreserve-statusv…", 0xa);
        void* rax_5 = clap_builder::parser::error::MatchesError::unwrap::hf05e35bee3f0c992(
            "kill-aftersignalpreserve-statusv…", 0xa, &var_f8);
        int32_t var_100_1;
        int64_t var_a8;
        int64_t var_a0;
        int64_t var_70;
        
        if (!rax_5)
        {
            var_100_1 = 0x3b9aca00;
            label_46d150:
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h750a4b638bcd2e41(
                &var_f8, arg2, "duration\n       ", 8);
            void* rax_8 = clap_builder::parser::error::MatchesError::unwrap::hf05e35bee3f0c992(
                "duration\n       ", 8, &var_f8);
            
            if (!rax_8)
            {
                core::option::unwrap_failed::h893f57cb7db71cb7();
                /* no return */
            }
            
            uucore::features::parser::parse_time::from_str::h30003dba666110f8(&var_b0, 
                *(rax_8 + 8), *(rax_8 + 0x10), 1);
            
            if (var_b0 != -0x8000000000000000)
                goto label_46d28f;
            
            char rax_11 =
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
                arg2, "preserve-statusverbosecommandsrc…", 0xf);
            char rax_12 =
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
                arg2, "foregroundkill-aftersignalpreser…", 0xa);
            char rax_13 =
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
                arg2, "verbosecommandsrc/uu/timeout/src…", 7);
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h9cd26fd33fbec693(
                &var_f8, arg2);
            clap_builder::parser::error::MatchesError::unwrap::h89a327b00226d280(&var_b0, &var_f8);
            
            if (!var_b0)
            {
                core::option::unwrap_failed::h893f57cb7db71cb7();
                /* no return */
            }
            
            int128_t var_80;
            int128_t var_c8_1 = var_80;
            int64_t var_d8;
            int128_t var_90;
            var_d8 = var_90;
            int64_t var_e8;
            var_e8 = var_a0;
            var_f8 = var_b0;
            core::iter::traits::iterator::Iterator::collect::ha5b465dfecffc17e(arg1, &var_f8);
            arg1[3] = var_a8;
            arg1[4] = var_a0;
            arg1[5] = var_70;
            arg1[6] = var_100_1;
            arg1[7] = rdx_1;
            arg1[8] = rax_12;
            *(arg1 + 0x41) = rax_11;
            *(arg1 + 0x42) = rax_13;
        }
        else
        {
            uucore::features::parser::parse_time::from_str::h30003dba666110f8(&var_b0, 
                *(rax_5 + 8), *(rax_5 + 0x10), 1);
            
            if (var_b0 == -0x8000000000000000)
            {
                var_70 = var_a8;
                var_100_1 = var_a0;
                goto label_46d150;
            }
            
            label_46d28f:
            int64_t var_e8_2 = var_a0;
            var_f8 = var_b0;
            int64_t var_e0;
            var_e0 = 0x7d;
            arg1[1] = alloc::boxed::Box$LT$T$GT$::new::h37b75c6be93c3797(&var_f8);
            arg1[2] = &data_512700;
            *arg1 = -0x8000000000000000;
        }
    }
    else
    {
        int64_t rax_2 = *(rax + 8);
        int64_t rcx_1 = *(rax + 0x10);
        int64_t var_50 = 0;
        int64_t var_48_1 = rax_2;
        int64_t var_40_1 = rcx_1;
        char var_38_1 = 1;
        int64_t* var_60 = &var_50;
        int64_t (* var_58_1)(int32_t* arg1, int64_t* arg2) =
            _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
        var_f8 = &data_5126c0;
        int64_t var_f0_1 = 2;
        int64_t var_d8_1 = 0;
        int64_t** var_e8_1 = &var_60;
        int64_t var_e0_1 = 1;
        core::option::Option$LT$T$GT$::map_or_else::h689cb97ed54ab1f6(&var_b0, &var_f8);
        int32_t var_98_1 = 0x7d;
        arg1[1] = alloc::boxed::Box$LT$T$GT$::new::h37b75c6be93c3797(&var_b0);
        arg1[2] = &data_512700;
        *arg1 = -0x8000000000000000;
    }
    return arg1;
}
