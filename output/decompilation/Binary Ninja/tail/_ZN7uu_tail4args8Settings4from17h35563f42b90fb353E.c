
  int64_t* uu_tail::args::Settings::from::h35563f42b90fb353(int64_t* arg1, void* arg2)

{
    char r13 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
        arg2, "Fretryuse-pollingverbose-presume…", 1);
    char rax = 1;
    
    if (!r13)
        rax = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
            arg2, "retryuse-pollingverbose-presume-…", 5);
    
    void** const var_1d8;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h0a7145d185c82391(
        &var_1d8, arg2, "followsleep-intervalinvalid numb…", 6);
    void* rax_1 = clap_builder::parser::error::MatchesError::unwrap::hd5b58983d4d3848b(
        "followsleep-intervalinvalid numb…", 6, &var_1d8);
    char rcx_1;
    
    if (!rax_1)
    {
        rcx_1 = 2;
        
        if (r13)
            rcx_1 = 1;
    }
    else
    {
        int64_t r15_1 = *(rax_1 + 8);
        uint64_t r12_1 = *(rax_1 + 0x10);
        
        if (!r13)
        {
            label_4f8f76:
            
            if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h1e3c65a51412c010(r15_1, r12_1, &data_41ef2c[4], 4))
                rcx_1 = 1;
            else
                rcx_1 = 0;
        }
        else
        {
            int64_t rax_2;
            int64_t rdx_1;
            rax_2 =
                clap_builder::parser::matches::arg_matches::ArgMatches::index_of::hc3c8b487726d2353(
                arg2, "Fretryuse-pollingverbose-presume…", 1);
            int64_t rax_3;
            int64_t rdx_2;
            rax_3 =
                clap_builder::parser::matches::arg_matches::ArgMatches::index_of::hc3c8b487726d2353(
                arg2, "followsleep-intervalinvalid numb…", 6);
            
            if (!rax_2)
                goto label_4f8f76;
            
            rcx_1 = 1;
            
            if (rax_3 && rdx_1 <= rdx_2)
                goto label_4f8f76;
        }
    }
    
    char rax_5 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(arg2, 
        "use-pollingverbose-presume-input…", 0xb);
    uu_tail::args::FilterMode::from::h013a88fb4d6b4428(&var_1d8, arg2);
    void** const rbp_1 = var_1d8;
    int64_t var_1d0;
    int64_t var_1c8;
    
    if (rbp_1 != 5)
    {
        char rax_7 =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
            arg2, "verbose-presume-input-pipequiet:…", 7);
        char rax_8 =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
            arg2, "-presume-input-pipequiet: warnin…", 0x13);
        _$LT$uu_tail..args..Settings$u20$as$u20$core..default..Default$GT$::default::hfebeb1c4deedc4af(&var_1d8);
        char var_b4_1 = rcx_1;
        void** const var_100 = rbp_1;
        int64_t var_f8_1 = var_1d0;
        int64_t var_f0_1 = var_1c8;
        int64_t var_198;
        int64_t var_c0_1 = var_198;
        int32_t var_1a0;
        int32_t var_c8_1 = var_1a0;
        char var_b7_1 = rax_5;
        char var_b6_1 = rax_7;
        int128_t var_1c0;
        int128_t var_e8 = var_1c0;
        int128_t var_1b0;
        int128_t var_d8_1 = var_1b0;
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h0a7145d185c82391(
            &var_1d8, arg2, "sleep-intervalinvalid number of …", 0xe);
        void* rax_14 = clap_builder::parser::error::MatchesError::unwrap::hd5b58983d4d3848b(
            "sleep-intervalinvalid number of …", 0xe, &var_1d8);
        
        if (!rax_14)
            goto label_4f91a7;
        
        void* var_b0 = rax_14;
        __builtin_strncpy(&var_198, "\n\n\n\n\n\n\n\n\n\n", 0xa);
        var_1d8 = data_5bb4b0;
        var_1c8 = data_5bb4c0;
        __builtin_memcpy(&*var_1c0[8], 
            "\x20\x70\x4f\x00\x00\x00\x00\x00\x40\x70\x4f\x00\x00\x00\x00\x00\x03\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00", 0x20);
        int32_t var_188;
        fundu_core::parse::Parser::parse_single::hf9b1910532b4386d(&var_188, &var_1d8, 
            *(rax_14 + 8), *(rax_14 + 0x10), &var_198);
        char const (** const var_158)[0xb9];
        void** var_118;
        
        if (var_188 != 8)
        {
            var_118 = &var_b0;
            int64_t (* var_110_1)(int64_t* arg1, int64_t arg2) =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h06c7cece6fef7c8f;
            var_158 = &data_5bb450;
            int64_t var_150_1 = 2;
            int64_t var_138_1 = 0;
            void*** var_148_1 = &var_118;
            int64_t var_140_1 = 1;
            int128_t var_90;
            core::option::Option$LT$T$GT$::map_or_else::hb4ba59fb1ad49b60(&var_90, &var_158);
            var_140_1 = 1;
            var_158 = var_90;
            int64_t var_80;
            int64_t var_148_2 = var_80;
            arg1[1] = alloc::boxed::Box$LT$T$GT$::new::h42dcf3336ec00766(&var_158);
            arg1[2] = &data_5bb550;
            *arg1 = 5;
            core::ptr::drop_in_place$LT$core..result..Result$LT$fundu_core..time..Duration$C$fundu_core..error..ParseError$GT$$GT$::h2be0415dad2f401a(&var_188);
            core::ptr::drop_in_place$LT$uu_tail..args..Settings$GT$::h37c5ae6af18c4c5a(&var_100);
        }
        else
        {
            int64_t var_170;
            int64_t var_98_1 = var_170;
            int128_t var_180;
            int128_t var_a8 = var_180;
            int64_t rax_16;
            int32_t rdx_5;
            rax_16 = _$LT$fundu_core..time..Duration$u20$as$u20$fundu_core..time..SaturatingInto$LT$core..time..Duration$GT$$GT$::saturating_into::h30e35891ecf0eb52(&var_a8);
            *var_d8_1[8] = rax_16;
            int32_t var_c8_2 = rdx_5;
            core::ptr::drop_in_place$LT$core..result..Result$LT$fundu_core..time..Duration$C$fundu_core..error..ParseError$GT$$GT$::h2be0415dad2f401a(&var_188);
            label_4f91a7:
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h0a7145d185c82391(
                &var_1d8, arg2, "max-unchanged-statsinvalid maxim…", 0x13);
            void* rax_17 = clap_builder::parser::error::MatchesError::unwrap::hd5b58983d4d3848b(
                "max-unchanged-statsinvalid maxim…", 0x13, &var_1d8);
            
            if (!rax_17)
                goto label_4f9202;
            
            char* r15_3 = *(rax_17 + 8);
            int64_t r12_3 = *(rax_17 + 0x10);
            int64_t rax_18 = core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$u32$GT$::from_str::hecf13f2b24d2aba7(r15_3, r12_3);
            int64_t var_140;
            void** const rax_28;
            int64_t* rcx_5;
            
            if (rax_18 & 1)
            {
                var_158 = nullptr;
                char* var_150_2 = r15_3;
                int64_t var_148_3 = r12_3;
                var_140 = 1;
                var_188 = &var_158;
                var_180 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                var_1d8 = &data_5bb470;
                int64_t var_1d0_1 = 1;
                *var_1c0[8] = 0;
                int32_t* var_1c8_1 = &var_188;
                var_1c0 = 1;
                int128_t var_78;
                core::option::Option$LT$T$GT$::map_or_else::hb4ba59fb1ad49b60(&var_78, &var_1d8);
                var_1c0 = 1;
                var_1d8 = var_78;
                int64_t var_68;
                int64_t var_1c8_2 = var_68;
                rcx_5 = arg1;
                rcx_5[1] = alloc::boxed::Box$LT$T$GT$::new::h42dcf3336ec00766(&var_1d8);
                rax_28 = &data_5bb550;
                label_4f9704:
                rcx_5[2] = rax_28;
                *rcx_5 = 5;
                core::ptr::drop_in_place$LT$uu_tail..args..Settings$GT$::h37c5ae6af18c4c5a(
                    &var_100);
            }
            else
            {
                var_c0_1 = rax_18 >> 0x20;
                label_4f9202:
                clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h0a7145d185c82391(&var_1d8, arg2, "pidinvalid PID: : filesFretryuse…", 3);
                void* rax_20 = clap_builder::parser::error::MatchesError::unwrap::hd5b58983d4d3848b(
                    "pidinvalid PID: : filesFretryuse…", 3, &var_1d8);
                
                if (!rax_20)
                    goto label_4f9266;
                
                char* r12_4 = *(rax_20 + 8);
                int64_t r15_4 = *(rax_20 + 0x10);
                int64_t rax_21 = core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$i32$GT$::from_str::h5b8351ce1d7a5cac(r12_4, r15_4);
                int128_t* rax_30;
                
                if (rax_21 & 1)
                {
                    var_118 = *rax_21[1];
                    var_158 = nullptr;
                    char* var_150_3 = r12_4;
                    int64_t var_148_4 = r15_4;
                    var_140 = 1;
                    var_188 = &var_158;
                    var_180 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                    *var_180[8] = &var_118;
                    int64_t (* var_170_1)(char* arg1, int64_t* arg2) = _$LT$core..num..error..ParseIntError$u20$as$u20$core..fmt..Display$GT$::fmt::h98d79d8d19892e5a;
                    var_1d8 = &data_5bb490;
                    int64_t var_1d0_2 = 2;
                    *var_1c0[8] = 0;
                    int32_t* var_1c8_3 = &var_188;
                    var_1c0 = 2;
                    int128_t var_48;
                    core::option::Option$LT$T$GT$::map_or_else::hb4ba59fb1ad49b60(&var_48, 
                        &var_1d8);
                    var_1c0 = 1;
                    var_1d8 = var_48;
                    int64_t var_38;
                    int64_t var_1c8_4 = var_38;
                    rax_30 = alloc::boxed::Box$LT$T$GT$::new::h7645b42f7bfbf581(&var_1d8);
                    label_4f96f4:
                    rcx_5 = arg1;
                    rcx_5[1] = rax_30;
                    rax_28 = &data_5bb3c8;
                    goto label_4f9704;
                }
                
                if (rax_21 < 0)
                {
                    var_158 = nullptr;
                    char* var_150_4 = r12_4;
                    int64_t var_148_5 = r15_4;
                    var_140 = 1;
                    var_188 = &var_158;
                    var_180 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                    var_1d8 = &data_5bb480;
                    int64_t var_1d0_3 = 1;
                    *var_1c0[8] = 0;
                    int32_t* var_1c8_5 = &var_188;
                    var_1c0 = 1;
                    int128_t var_60;
                    core::option::Option$LT$T$GT$::map_or_else::hb4ba59fb1ad49b60(&var_60, 
                        &var_1d8);
                    var_1c0 = 1;
                    var_1d8 = var_60;
                    int64_t var_50;
                    int64_t var_1c8_6 = var_50;
                    rax_30 = alloc::boxed::Box$LT$T$GT$::new::h7645b42f7bfbf581(&var_1d8);
                    goto label_4f96f4;
                }
                
                *var_c0_1[4] = rax_21 >> 0x20;
                label_4f9266:
                clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::hcc8251d6567d3870(&var_1d8, arg2, "filesFretryuse-pollingverbose-pr…", 5);
                clap_builder::parser::error::MatchesError::unwrap::h3a2fb0b054d1f196(&var_158, 
                    "filesFretryuse-pollingverbose-pr…", 5, &var_1d8);
                
                if (!var_158)
                    uu_tail::args::Settings::from::_$u7b$$u7b$closure$u7d$$u7d$::h3c638c53028a58e9(
                        &var_1d8);
                else
                {
                    int128_t zmm0_4 = var_158;
                    int128_t var_128;
                    var_1b0 = var_128;
                    int64_t var_138;
                    var_1c0 = var_138;
                    int64_t var_148;
                    var_1c8 = var_148;
                    var_1d8 = zmm0_4;
                    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h66624b19774c7a57(&var_188, &var_1d8);
                    void** rax_23 = var_188;
                    var_118 = var_180;
                    
                    if (rax_23 != -0x8000000000000000)
                    {
                        var_1d0 = var_118;
                        var_1d8 = rax_23;
                    }
                    else
                        uu_tail::args::Settings::from::_$u7b$$u7b$closure$u7d$$u7d$::h3c638c53028a58e9(&var_1d8);
                }
                
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_tail..paths..Input$GT$$GT$::h2f358108f234e3da(&var_e8);
                var_d8_1 = var_1c8;
                var_e8 = var_1d8;
                char rax_32;
                
                if (var_d8_1 < 2)
                    rax_32 = 0;
                else
                    rax_32 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(arg2, "quiet: warning: --retry ignored;…", 5) ^ 1;
                
                int128_t zmm0_9 = var_100;
                int128_t zmm2_2 = var_e8;
                *(arg1 + 0x30) = var_d8_1;
                *(arg1 + 0x20) = zmm2_2;
                *(arg1 + 0x10) = var_f0_1;
                *arg1 = zmm0_9;
                arg1[8] = var_c0_1;
                arg1[9] = rax;
                *(arg1 + 0x4a) = rax_32;
                *(arg1 + 0x4b) = rax_8;
                char var_b1;
                *(arg1 + 0x4f) = var_b1;
            }
        }
    }
    else
    {
        arg1[1] = var_1d0;
        arg1[2] = var_1c8;
        *arg1 = 5;
    }
    return arg1;
}
