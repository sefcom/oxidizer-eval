
  int64_t* uu_base32::base_common::Config::from::he8007e948e715e4f(int64_t* arg1, void* arg2, int64_t arg3 @ r13)

{
    int64_t var_20 = arg3;
    void** const r15 = -0x8000000000000000;
    void** const var_188;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h4d3b70c651aa8c6a(
        &var_188, arg2);
    int64_t var_70;
    clap_builder::parser::error::MatchesError::unwrap::hac17f97783eea1ce(&var_70, &var_188);
    
    if (!var_70)
        goto label_469357;
    
    int128_t var_40;
    int128_t var_88_1 = var_40;
    int128_t var_50;
    int128_t var_98_1 = var_50;
    int128_t var_60;
    int128_t var_a8_1 = var_60;
    int128_t var_b8 = var_70;
    void* rax_1 = _$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h82324a6f9092af02(&var_b8);
    
    if (!rax_1)
    {
        core::option::unwrap_failed::h893f57cb7db71cb7();
        /* no return */
    }
    
    void* rax_2 = _$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h82324a6f9092af02(&var_b8);
    int64_t* var_1c0;
    int64_t var_1b0;
    void var_d8;
    uint64_t rax_4;
    void** const rcx_2;
    
    if (!rax_2)
    {
        arg3 = *(rax_1 + 8);
        uint64_t r12_2 = *(rax_1 + 0x10);
        
        if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h52d9b32bcebef6ce(arg3, r12_2, "-invalid wrap size: wrap encoded…", 1))
            goto label_469357;
        
        std::fs::metadata::heefbd7b898f0dc89(&var_188, arg3);
        void** const r15_1 = var_188;
        int64_t var_180;
        core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::hb5229bc0585f68fb(r15_1, var_180);
        
        if (r15_1 == 2)
        {
            var_1b0 = 1;
            int64_t var_1a8_2 = arg3;
            uint64_t var_1a0_2 = r12_2;
            char var_198_2 = 0;
            var_1c0 = &var_1b0;
            int64_t (* var_1b8_2)(int32_t* arg1, int64_t* arg2) =
                _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
            var_188 = &data_50dd28;
            int64_t var_180_2 = 2;
            int64_t var_168_2 = 0;
            int64_t** var_178_2 = &var_1c0;
            int64_t var_170_2 = 1;
            core::option::Option$LT$T$GT$::map_or_else::hff3b22300eec286c(&var_d8, &var_188);
            int32_t var_c0_2 = 1;
            rax_4 = alloc::boxed::Box$LT$T$GT$::new::h338aae5a226963c6(&var_d8);
            rcx_2 = &data_50de08;
            goto label_469312;
        }
        
        std::sys::pal::unix::os::split_paths::bytes_to_path::h3f69b771c0ce4140(&var_188, arg3, 
            r12_2);
        r15 = var_188;
        int64_t var_1c8 = var_180;
        int64_t var_178;
        int64_t var_190 = var_178;
        label_469357:
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hb2a3bc7313f94180(
            &var_188, arg2);
        void* rax_6 =
            clap_builder::parser::error::MatchesError::unwrap::h24f08cad05a4d07c(&var_188);
        int64_t r12_3;
        
        if (!rax_6)
        {
            r12_3 = 0;
            label_4693c3:
            char rax_8 =
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
                arg2, "decodeignore-garbageextra operan…", 6);
            char rax_9 =
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
                arg2, "ignore-garbageextra operand : No…", 0xe);
            *arg1 = r12_3;
            arg1[1] = arg3;
            arg1[2] = r15;
            arg1[3] = var_1c8;
            arg1[4] = var_190;
            arg1[5] = rax_8;
            *(arg1 + 0x29) = rax_9;
        }
        else
        {
            uu_base32::base_common::Config::from::_$u7b$$u7b$closure$u7d$$u7d$::haa7277871ad8176d(
                &var_188, *(rax_6 + 8), *(rax_6 + 0x10));
            void** const rax_7 = var_188;
            arg3 = var_180;
            
            if (!rax_7)
            {
                r12_3 = 1;
                goto label_4693c3;
            }
            
            arg1[1] = rax_7;
            arg1[2] = arg3;
            *arg1 = 2;
            core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::h0062591d8d9fcd54(r15, var_1c8);
        }
    }
    else
    {
        int64_t rcx_1 = *(rax_2 + 8);
        int64_t rax_3 = *(rax_2 + 0x10);
        var_1b0 = 0;
        int64_t var_1a8_1 = rcx_1;
        int64_t var_1a0_1 = rax_3;
        char var_198_1 = 1;
        var_1c0 = &var_1b0;
        int64_t (* var_1b8_1)(int32_t* arg1, int64_t* arg2) =
            _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
        var_188 = &data_50dd18;
        int64_t var_180_1 = 1;
        int64_t var_168_1 = 0;
        int64_t** var_178_1 = &var_1c0;
        int64_t var_170_1 = 1;
        core::option::Option$LT$T$GT$::map_or_else::hff3b22300eec286c(&var_d8, &var_188);
        int32_t var_c0_1 = 1;
        rax_4 = alloc::boxed::Box$LT$T$GT$::new::h338aae5a226963c6(&var_d8);
        rcx_2 = &data_50dd80;
        label_469312:
        arg1[1] = rax_4;
        arg1[2] = rcx_2;
        *arg1 = 2;
    }
    return arg1;
}
