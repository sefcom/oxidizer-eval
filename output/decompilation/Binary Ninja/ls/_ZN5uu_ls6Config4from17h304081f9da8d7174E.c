
  int64_t* uu_ls::Config::from::h304081f9da8d7174(int64_t* arg1, char* arg2)

{
    char* r15 = arg2;
    char rax = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
        r15, "contextgroup-directories-firstdi…", 7);
    char var_3c8;
    uu_ls::extract_format::h7d78a4a0dcc4169d(&var_3c8, r15);
    uint32_t rbp = var_3c8;
    char rax_1 = uu_ls::extract_files::h965d1eb85535344f(r15);
    char var_454 = 1;
    void* var_3c0;
    char const* const var_3b8;
    char const* const var_3b0;
    int64_t var_398;
    char const* const var_2b8;
    int64_t var_2b0;
    char const* const var_2a8;
    int64_t var_2a0;
    char const* const var_298;
    char const* const var_288;
    size_t var_168;
    
    if (rbp != 1)
    {
        size_t rdx_2;
        
        if (!var_3c0)
            rdx_2 = 0;
        else
        {
            int64_t rax_2;
            rax_2 = uu_ls::Config::from::_$u7b$$u7b$closure$u7d$$u7d$::h5810eab8b002c308(r15, 
                var_3c0, var_3b8);
            
            if (!rax_2)
                rdx_2 = 0;
        }
        
        var_168 = rdx_2;
        var_2b8 = "gonumeric-uid-giducFatal interna…";
        var_2b0 = 1;
        var_2a8 = "onumeric-uid-giducFatal internal…";
        var_2a0 = 1;
        var_298 = "numeric-uid-giducFatal internal …";
        int64_t var_290_1 = 0xf;
        var_288 = "full-timeignorecontextgroup-dire…";
        int64_t var_280_1 = 9;
        var_3c8 = &var_2b8;
        void var_278;
        var_3c0 = &var_278;
        var_3b8 = r15;
        var_3b0 = nullptr;
        var_398 = 0;
        var_454 = 1;
        
        if (!_$LT$core..ops..control_flow..ControlFlow$LT$B$C$C$GT$$u20$as$u20$core..cmp..PartialEq$GT$::eq::h27a53ce821d589d4(core::iter::adapters::flatten::FlattenCompat$LT$I$C$U$GT$::iter_try_fold::h3ac941cd7fb11bff(&var_3c8, &var_168)))
        {
            clap_builder::parser::matches::arg_matches::ArgMatches::indices_of::h365fe016942495a0(
                &var_2b8, r15, "1Cxtabsizemgonumeric-uid-giducFa…", 1);
            
            if (var_2b8)
            {
                var_3b8 = var_2a8;
                var_3c8 = var_2b8;
                
                if (clap_builder::parser::matches::arg_matches::ArgMatches::value_source::h1b5412f9501eb404(r15, "1Cxtabsizemgonumeric-uid-giducFa…", 1) == 2)
                {
                    uint32_t rcx_1 = rbp;
                    rbp = 2;
                    
                    if (!_$LT$core..ops..control_flow..ControlFlow$LT$B$C$C$GT$$u20$as$u20$core..cmp..PartialEq$GT$::eq::h27a53ce821d589d4(core::iter::traits::iterator::Iterator::try_fold::h84e916981caae95a(
                            &var_3c8, &var_168)))
                        rbp = rcx_1;
                }
            }
            
            var_454 = rbp;
        }
    }
    
    char rax_10 = uu_ls::extract_sort::hff53e8825dcc58c2(r15);
    char rax_11 = uu_ls::extract_time::h4f1c34fa33e953ac(r15);
    char rax_12 = uu_ls::extract_color::h0f500b6ec1664277(r15);
    char rax_13 = uu_ls::extract_hyperlink::h45e754338713ef3e(r15);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h7f0bb7fe0c729ea9(
        &var_3c8, r15, "block-sizehuman-readablesikibiby…", 0xa);
    void* rax_14 = clap_builder::parser::error::MatchesError::unwrap::hac05afd0923194a9(
        "block-sizehuman-readablesikibiby…", 0xa, &var_3c8);
    char rbx_1;
    char rbp_3;
    char r12;
    char r13;
    
    if (!rax_14)
    {
        r12 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
            r15, "sikibibytes", 2);
        label_520590:
        r13 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
            r15, "human-readablesikibibytes", 0xe);
        rbp_3 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
            r15, "kibibytes", 9);
        rbx_1 = 2;
        
        if (!r12)
            rbx_1 = r13;
    }
    else
    {
        char* rbp_2 = r15;
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h7f0bb7fe0c729ea9(
            &var_3c8, r15, "block-sizehuman-readablesikibiby…", 0xa);
        void* rax_15 = clap_builder::parser::error::MatchesError::unwrap::hac05afd0923194a9(
            "block-sizehuman-readablesikibiby…", 0xa, &var_3c8);
        
        if (!rax_15)
        {
            core::option::unwrap_failed::h0e11329e76906eaa();
            /* no return */
        }
        
        r12 = 1;
        
        if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h615ea01bc1975db3(*(rax_15 + 8), *(rax_15 + 0x10), "sihuman-readable: warning: Inval…", 2))
            r12 =
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
                rbp_2, "sikibibytes", 2);
        
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h7f0bb7fe0c729ea9(
            &var_3c8, rbp_2, "block-sizehuman-readablesikibiby…", 0xa);
        void* rax_18 = clap_builder::parser::error::MatchesError::unwrap::hac05afd0923194a9(
            "block-sizehuman-readablesikibiby…", 0xa, &var_3c8);
        
        if (!rax_18)
        {
            core::option::unwrap_failed::h0e11329e76906eaa();
            /* no return */
        }
        
        if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h615ea01bc1975db3(*(rax_18 + 8), *(rax_18 + 0x10), "human-readable: warning: Invalid…", 0xe))
        {
            r15 = rbp_2;
            goto label_520590;
        }
        
        r15 = rbp_2;
        rbp_3 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
            rbp_2, "kibibytes", 9);
        rbx_1 = r12 + 1;
        r13 = 1;
    }
    
    int64_t var_218;
    std::env::var_os::h00ce706604dc1520(&var_218, "BLOCKSIZEBLOCK_SIZELS_BLOCK_SIZE…");
    int32_t rax_25;
    rax_25 = 1;
    int32_t var_450 = rax_25;
    int64_t var_200;
    std::env::var_os::h00ce706604dc1520(&var_200, "BLOCK_SIZELS_BLOCK_SIZEPOSIXLY_C…");
    int32_t rax_26;
    rax_26 = 1;
    int32_t var_44c = rax_26;
    rax_26 = 1;
    int32_t var_450_1 = rax_26;
    int64_t var_1e8;
    std::env::var_os::h00ce706604dc1520(&var_1e8, "LS_BLOCK_SIZEPOSIXLY_CORRECT*~.*…");
    int32_t rax_27;
    rax_27 = 1;
    int32_t var_438 = rax_27;
    rax_27 = 1;
    int32_t var_44c_1 = rax_27;
    rax_27 = 1;
    int32_t var_450_2 = rax_27;
    int64_t var_c0;
    std::env::var_os::h00ce706604dc1520(&var_c0, "POSIXLY_CORRECT*~.*~0.0.28{} [OP…");
    char var_43c;
    char var_428;
    int128_t var_2f8;
    char const* const var_2e8;
    char const* const rax_29;
    
    if (rax_14)
    {
        int32_t rax_28;
        rax_28 = 1;
        int32_t var_438_1 = rax_28;
        rax_28 = 1;
        int32_t var_44c_2 = rax_28;
        rax_28 = 1;
        int32_t var_450_3 = rax_28;
        std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(&var_3c8, *(rax_14 + 8), 
            *(rax_14 + 0x10));
        label_520672:
        var_2e8 = var_3b8;
        var_2f8 = var_3c8;
        rax_29 = 1;
        int32_t var_438_2 = rax_29;
        var_43c = 0;
        var_428 = 0;
        goto label_520737;
    }
    
    char var_42c;
    int32_t var_450_5;
    
    if (var_1e8 != -0x8000000000000000)
    {
        char* var_1d8;
        var_2e8 = var_1d8;
        var_2f8 = var_1e8;
        rax_29 = 1;
        var_428 = rax_29;
        var_43c = 0;
        int32_t var_438_4 = 0;
        label_520737:
        var_42c = 0;
        rax_29 = 1;
        int32_t var_44c_4 = rax_29;
        rax_29 = 1;
        var_450_5 = rax_29;
    }
    else if (var_200 != -0x8000000000000000)
    {
        char* var_1f0;
        var_2e8 = var_1f0;
        var_2f8 = var_200;
        rax_29 = 1;
        int32_t var_438_5 = rax_29;
        var_43c = 0;
        var_428 = 0;
        rax_29 = 1;
        var_42c = rax_29;
        int32_t var_44c_5 = 0;
        rax_29 = 1;
        var_450_5 = rax_29;
    }
    else
    {
        if (var_218 == -0x8000000000000000)
        {
            int32_t var_438_3 = 1;
            int32_t var_44c_3 = 1;
            int32_t var_450_4 = 1;
            std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(&var_3c8, 1, 0);
            goto label_520672;
        }
        
        char* var_208;
        var_2e8 = var_208;
        var_2f8 = var_218;
        char* rax_124;
        rax_124 = 1;
        var_43c = rax_124;
        var_428 = 0;
        rax_124 = 1;
        int32_t var_438_6 = rax_124;
        var_42c = 0;
        rax_124 = 1;
        int32_t var_44c_6 = rax_124;
        int32_t var_450_6 = 0;
    }
    int64_t var_408;
    int64_t r12_1;
    int64_t r14_2;
    
    if (r13 | r12 || !var_2e8)
    {
        if (var_c0 != -0x8000000000000000)
            r14_2 = (rbp_3 << 9) + 0x200;
        else
        {
            r14_2 = 0x400;
            
            if (r12)
                r14_2 = 0x3e8;
        }
        
        r12_1 = 1;
        label_520930:
        char rax_33 =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
            r15, "authorformatignore-backupsdirect…", 6);
        char rbp_4;
        
        if (!clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
                r15, "no-groupParseIntPatternscreation…", 8))
            rbp_4 =
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
                r15, "onumeric-uid-giducFatal internal…", 1) ^ 1;
        else
            rbp_4 = 0;
        
        char rax_36 =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
            r15, "gonumeric-uid-giducFatal interna…", 1);
        char rax_37 =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
            r15, "numeric-uid-giducFatal internal …", 0xf);
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h7f0bb7fe0c729ea9(
            &var_3c8, r15, "widthauthorformatignore-backupsd…", 5);
        uu_ls::parse_width::h6c0d34d7a456f903(&var_2b8, 
            clap_builder::parser::error::MatchesError::unwrap::hac05afd0923194a9(
                "widthauthorformatignore-backupsd…", 5, &var_3c8));
        char rax_39 = var_2b8;
        int128_t* rax_43;
        
        if (rax_39 != 7)
        {
            char rcx_3 = *var_2b8[1];
            int16_t rdx_14 = *var_2b8[2];
            *var_398[4] = *var_288[4];
            int128_t var_3a4_1 = *var_298[4];
            *var_3b8[4] = *var_2a8[4];
            int128_t var_3c4_1 = *var_2b8[4];
            var_3c8 = rax_39;
            char var_3c7_1 = rcx_3;
            int16_t var_3c6_1 = rdx_14;
            rax_43 = alloc::boxed::Box$LT$T$GT$::new::h078849aa224a94d8(&var_3c8);
            label_520a9b:
            arg1[1] = rax_43;
            arg1[2] = &data_612480;
            *arg1 = -0x8000000000000000;
            goto label_520ab5;
        }
        
        int16_t rax_40 = *var_2b8[2];
        char rax_42;
        
        if (!clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
            r15, "hide-control-charsshow-control-c…", 0x12))
        {
            rax_42 = 1;
            
            if (!
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
                r15, "show-control-charswidthauthorfor…", 0x12))
            {
                std::io::stdio::stdout::h077da66234850927();
                var_3c8 = &std::io::stdio::STDOUT::hdbe36c11cd3014ce;
                rax_42 = std::sys::pal::unix::io::is_terminal::hd2a7310729156a1e() ^ 1;
            }
        }
        else
            rax_42 = 0;
        
        uint32_t rsi_17 = rax_42;
        int32_t rax_46 = uu_ls::extract_quoting_style::hfd0cceb62d68e819(r15, rsi_17);
        char rax_47 = uu_ls::extract_indicator_style::hebc3d0a8c71301cb(r15);
        bool var_453_1 =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
            r15, "diredhyperlink ", 5);
        int64_t var_1d0_1;
        int64_t var_1c8;
        int64_t var_1b8;
        
        if (var_454 != 1 & (var_453_1 ^ 1))
        {
            var_1d0_1 = r14_2;
            var_1c8 = -0x7ffffffffffffffe;
        }
        else
        {
            uu_ls::parse_time_style::h637c81bfc8530b0a(&var_2b8, r15);
            char rax_49 = var_2b8;
            
            if (rax_49 != 7)
            {
                var_168 = *var_2b8[1];
                char const* const var_398_4 = var_288;
                int128_t var_3a8_1 = var_298;
                char var_3c7;
                var_3c7 = var_168;
                var_3b8 = var_2a8;
                var_3c8 = rax_49;
                rax_43 = alloc::boxed::Box$LT$T$GT$::new::h078849aa224a94d8(&var_3c8);
                goto label_520a9b;
            }
            
            var_1d0_1 = r14_2;
            var_1c8 = var_2b0;
            var_1b8 = var_2a0;
        }
        
        int64_t var_2d0 = 0;
        int64_t var_2c8_1 = 8;
        int64_t var_2c0_1 = 0;
        
        if (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
            r15, "ignore-backupsdirectoryinodereve…", 0xe))
        {
            glob::Pattern::new::h18c1fc68458b28e8(&var_3c8, "*~.*~0.0.28{} [OPTION]... [FILE]…", 2);
            core::result::Result$LT$T$C$E$GT$::unwrap::h3f235c87a44b8e68(&var_2b8, &var_3c8);
            alloc::vec::Vec$LT$T$C$A$GT$::push::h71b0a9de18dea07e(&var_2d0, &var_2b8);
            glob::Pattern::new::h18c1fc68458b28e8(&var_3c8, ".*~0.0.28{} [OPTION]... [FILE]..…", 3);
            core::result::Result$LT$T$C$E$GT$::unwrap::h3f235c87a44b8e68(&var_2b8, &var_3c8);
            alloc::vec::Vec$LT$T$C$A$GT$::push::h71b0a9de18dea07e(&var_2d0, &var_2b8);
        }
        
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h0f6b261df055c81c(
            &var_3c8, r15, "ignorecontextgroup-directories-f…", 6);
        clap_builder::parser::error::MatchesError::unwrap::h1a0ed93990f468cb(&var_2b8, 
            "ignorecontextgroup-directories-f…", 6, &var_3c8);
        int128_t var_390_1 = var_288;
        int128_t var_3a4 = var_298;
        var_3b0 = var_2a8;
        var_3c0 = var_2b8;
        int128_t var_1a8;
        int128_t var_378_1 = var_1a8;
        int128_t var_198;
        int128_t var_368_1 = var_198;
        int128_t var_188;
        int128_t var_358_1 = var_188;
        int64_t var_178;
        int64_t var_348_1 = var_178;
        int128_t var_338_1 = var_1a8;
        int128_t var_328_1 = var_198;
        int128_t var_318_1 = var_188;
        int64_t var_308_1 = var_178;
        var_3c8 = 1;
        int64_t var_380_1 = 0;
        int64_t var_340_1 = 0;
        int64_t* var_3e8;
        
        while (true)
        {
            void* rax_57 = _$LT$core..iter..adapters..flatten..FlattenCompat$LT$I$C$U$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hc51d95c2f4d61719(&var_3c8);
            
            if (!rax_57)
                break;
            
            int64_t r15_1 = *(rax_57 + 8);
            int64_t r12_2 = *(rax_57 + 0x10);
            uucore::parser::parse_glob::from_str::h2653254823aa606f(&var_2b8, r15_1, r12_2);
            
            if (var_2b8 != -0x8000000000000000)
            {
                char const* const var_78_1 = var_288;
                int128_t var_88_1 = var_298;
                int128_t var_98_1 = var_2a8;
                int128_t var_a8 = var_2b8;
                alloc::vec::Vec$LT$T$C$A$GT$::push::h71b0a9de18dea07e(&var_2d0, &var_a8);
            }
            else
            {
                int64_t rax_58;
                int64_t rdx_18;
                rax_58 = uucore::util_name::h60d842bf27b05e82();
                var_408 = rax_58;
                int64_t var_400_1 = rdx_18;
                var_3e8 = &var_408;
                int64_t (* var_3e0_1)(int64_t* arg1, int64_t arg2) =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h2a9d35fa3fd2b5f3;
                var_168 = &data_6123b8;
                int64_t var_160_1 = 2;
                int64_t var_148_1 = 0;
                int64_t** var_158_1 = &var_3e8;
                int64_t var_150_1 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&var_168);
                var_408 = 0;
                int64_t var_400_2 = r15_1;
                int64_t var_3f8_1 = r12_2;
                char var_3f0_1 = 1;
                var_3e8 = &var_408;
                int64_t (* var_3e0_2)(void* arg1, void* arg2) = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                var_168 = &data_6123d8;
                int64_t var_160_2 = 2;
                int64_t var_148_2 = 0;
                int64_t** var_158_2 = &var_3e8;
                int64_t var_150_2 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&var_168);
            }
        }
        
        if (rax_1 == 2)
        {
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h0f6b261df055c81c(
                &var_3c8, r15, "hidehurdcharJuly -> '\'' to \x1b…", 4);
            clap_builder::parser::error::MatchesError::unwrap::h1a0ed93990f468cb(&var_2b8, 
                "hidehurdcharJuly -> '\'' to \x1b…", 4, &var_3c8);
            var_390_1 = var_288;
            var_3a4 = var_298;
            var_3b0 = var_2a8;
            var_3c0 = var_2b8;
            var_378_1 = var_1a8;
            var_368_1 = var_198;
            var_358_1 = var_188;
            int64_t var_348_2 = var_178;
            var_338_1 = var_1a8;
            var_328_1 = var_198;
            var_318_1 = var_188;
            int64_t var_308_2 = var_178;
            var_3c8 = 1;
            int64_t var_380_2 = 0;
            int64_t var_340_2 = 0;
            
            while (true)
            {
                void* rax_62 = _$LT$core..iter..adapters..flatten..FlattenCompat$LT$I$C$U$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hc51d95c2f4d61719(&var_3c8);
                
                if (!rax_62)
                    break;
                
                int64_t r15_2 = *(rax_62 + 8);
                int64_t r12_3 = *(rax_62 + 0x10);
                uucore::parser::parse_glob::from_str::h2653254823aa606f(&var_2b8, r15_2, r12_3);
                
                if (var_2b8 != -0x8000000000000000)
                {
                    char const* const var_38_1 = var_288;
                    int128_t var_48_1 = var_298;
                    int128_t var_58_1 = var_2a8;
                    int128_t var_68 = var_2b8;
                    alloc::vec::Vec$LT$T$C$A$GT$::push::h71b0a9de18dea07e(&var_2d0, &var_68);
                }
                else
                {
                    int64_t rax_63;
                    int64_t rdx_20;
                    rax_63 = uucore::util_name::h60d842bf27b05e82();
                    var_408 = rax_63;
                    int64_t var_400_3 = rdx_20;
                    var_3e8 = &var_408;
                    int64_t (* var_3e0_3)(int64_t* arg1, int64_t arg2) =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h2a9d35fa3fd2b5f3;
                    var_168 = &data_6123b8;
                    int64_t var_160_3 = 2;
                    int64_t var_148_3 = 0;
                    int64_t** var_158_3 = &var_3e8;
                    int64_t var_150_3 = 1;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&var_168);
                    var_408 = 0;
                    int64_t var_400_4 = r15_2;
                    int64_t var_3f8_2 = r12_3;
                    char var_3f0_2 = 1;
                    var_3e8 = &var_408;
                    int64_t (* var_3e0_4)(void* arg1, void* arg2) = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                    var_168 = &data_6123f8;
                    int64_t var_160_4 = 2;
                    int64_t var_148_4 = 0;
                    int64_t** var_158_4 = &var_3e8;
                    int64_t var_150_4 = 1;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&var_168);
                }
            }
        }
        
        int64_t rax_64 = uu_ls::Config::from::_$u7b$$u7b$closure$u7d$$u7d$::h53c2871a6b8c442c(r15, 
            "zeroAnsi -- \x1b[8mnonehelpNones…", 4);
        char const* const var_3c0_1 = "xtabsizemgonumeric-uid-giducFata…";
        int64_t var_3b8_1 = 1;
        var_3b0 = "Cxtabsizemgonumeric-uid-giducFat…";
        int128_t var_3a8;
        var_3a8 = 1;
        *var_3a4[4] = "mgonumeric-uid-giducFatal intern…";
        int64_t var_398_1 = 1;
        var_390_1 = "long\x1b[7m";
        *var_390_1[8] = 4;
        char const* const var_380_3 = "onumeric-uid-giducFatal internal…";
        var_378_1 = 1;
        *var_378_1[8] = "gonumeric-uid-giducFatal interna…";
        var_368_1 = 1;
        *var_368_1[8] = "numeric-uid-giducFatal internal …";
        var_358_1 = 0xf;
        *var_358_1[8] = "1Cxtabsizemgonumeric-uid-giducFa…";
        int64_t var_348_3 = 1;
        char const* const var_340_3 = "formatignore-backupsdirectoryino…";
        var_338_1 = 6;
        *var_338_1[8] = 0;
        var_328_1 = 9;
        var_3c8 = r15;
        int64_t rax_66;
        int64_t rdx_21;
        rax_66 = core::iter::traits::iterator::Iterator::reduce::hb78d76f9f3920a6b(&var_3c8);
        
        if (!rax_66)
            rdx_21 = rax_66;
        
        rax_66 = 2;
        rax_66 = 2 - (var_454 == 1);
        char rbp_5 = var_454;
        
        if (rax_64 > rdx_21)
            rbp_5 = rax_66;
        
        int64_t rax_68 = uu_ls::Config::from::_$u7b$$u7b$closure$u7d$$u7d$::h53c2871a6b8c442c(r15, 
            "zeroAnsi -- \x1b[8mnonehelpNones…", 4);
        char const* const var_3c0_2 = "colorpathsindicator-styletime-st…";
        int64_t var_3b8_2 = 5;
        var_3b0 = nullptr;
        var_3a8 = 1;
        var_3c8 = r15;
        int64_t rax_70;
        int64_t rdx_22;
        rax_70 = core::iter::traits::iterator::Iterator::reduce::h2fe74a18867f2ee7(&var_3c8);
        
        if (!rax_70)
            rdx_22 = rax_70;
        
        int64_t rax_71 = uu_ls::Config::from::_$u7b$$u7b$closure$u7d$$u7d$::h53c2871a6b8c442c(r15, 
            "zeroAnsi -- \x1b[8mnonehelpNones…", 4);
        char const* const var_3c0_3 = "hide-control-charsshow-control-c…";
        int64_t var_3b8_3 = 0x12;
        var_3b0 = "show-control-charswidthauthorfor…";
        var_3a8 = 0x12;
        *var_3a4[4] = 0;
        int64_t var_398_2 = 2;
        var_3c8 = r15;
        int64_t rax_73;
        int64_t rdx_23;
        rax_73 = core::iter::traits::iterator::Iterator::reduce::h05941583929ef778(&var_3c8);
        
        if (!rax_73)
            rdx_23 = rax_73;
        
        char rcx_14 = rsi_17;
        
        if (rax_71 > rdx_23)
            rcx_14 = 1;
        
        int64_t rax_74 = uu_ls::Config::from::_$u7b$$u7b$closure$u7d$$u7d$::h53c2871a6b8c442c(r15, 
            "zeroAnsi -- \x1b[8mnonehelpNones…", 4);
        char const* const var_3c0_4 = "quoting-stylehide-control-charss…";
        int64_t var_3b8_4 = 0xd;
        var_3b0 = "quote-name";
        var_3a8 = 0xa;
        *var_3a4[4] = "escapeliteralquote-name";
        int64_t var_398_3 = 6;
        var_390_1 = "literalquote-name";
        *var_390_1[8] = 7;
        int64_t var_380_4 = 0;
        var_378_1 = 4;
        var_3c8 = r15;
        int64_t rax_76;
        int64_t rdx_24;
        rax_76 = core::iter::traits::iterator::Iterator::reduce::h1e2e980935a81b85(&var_3c8);
        
        if (!rax_76)
            rdx_24 = rax_76;
        
        uint32_t rbx_6 = rax_46;
        
        if (rax_74 > rdx_24)
            rbx_6 = rcx_14;
        
        uint8_t r12_4 = 3;
        
        if (rax_74 <= rdx_24)
            r12_4 = rax_46 >> 0x10;
        
        if (rax_12 & rax_68 <= rdx_22)
        {
            lscolors::LsColors::from_env::h712f24242080035d(&var_3c8);
            
            if (var_3c8 != -0x8000000000000000)
                memcpy(&var_2b8, &var_3c8, 0xa0);
            else
                _$LT$lscolors..LsColors$u20$as$u20$core..default..Default$GT$::default::h8ceff8bfbc51e9c2(&var_2b8);
            
            memcpy(&var_168, &var_2b8, 0xa0);
            
            if (var_453_1)
                goto label_52164f;
            
            goto label_521777;
        }
        
        var_168 = -0x8000000000000000;
        
        if (!var_453_1)
        {
            label_521777:
            char rcx_18 = rbp_5;
            rbp_5 = 1;
            
            if (!uu_ls::dired::is_dired_arg_present::h5db040a2efd6cd73())
                rbp_5 = rcx_18;
        }
        else
        {
            label_52164f:
            rbp_5 = 1;
            
            if (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
                r15, "zeroAnsi -- \x1b[8mnonehelpNones…", 4))
            {
                var_3c8 = 4;
                arg1[1] = alloc::boxed::Box$LT$T$GT$::new::h078849aa224a94d8(&var_3c8);
                arg1[2] = &data_612480;
                *arg1 = -0x8000000000000000;
                core::ptr::drop_in_place$LT$core..option..Option$LT$lscolors..LsColors$GT$$GT$::h9b32a4ee5490070c(&var_168);
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$glob..Pattern$GT$$GT$::hbff2ebb2fa9250d4(&var_2d0);
                core::ptr::drop_in_place$LT$uu_ls..TimeStyle$GT$::h138734211180f60f(&var_1c8);
                goto label_520ab5;
            }
        }
        
        char r15_3 = 3;
        
        if (!clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
            r15, "dereferencedereference-command-l…", 0xb))
        {
            r15_3 = 2;
            
            if (!
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
                r15, "dereference-command-linederefere…", 0x18))
            {
                r15_3 = 1;
                
                if (!clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(r15, "dereference-command-line-symlink…", 0x27))
                    r15_3 = ~clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(r15, "directoryinodereverserecursiveco…", 9) & rax_47 != 3
                        & rbp_5 != 1;
            }
        }
        
        uint8_t rax_86 =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
            r15, "recursivecolorpathsindicator-sty…", 9);
        char rax_87 =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
            r15, "reverserecursivecolorpathsindica…", 7);
        var_3e8 = var_2d0;
        char rax_89 =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
            r15, "directoryinodereverserecursiveco…", 9);
        char var_418;
        var_418 = rbx_6;
        memcpy(&var_2b8, &var_168, 0xa0);
        char rax_90 =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
            r15, "inodereverserecursivecolorpathsi…", 5);
        char rax_91 =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
            r15, "sizei128 as dyn Mask\nBacktrace:…", 4);
        var_408 = var_1c8;
        char rax_93 =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
            r15, "group-directories-firstdiredhype…", 0x17);
        char r15_4 = 0xa;
        
        if (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
                r15, "zeroAnsi -- \x1b[8mnonehelpNones…", 4))
            r15_4 = 0;
        
        int64_t var_3b8_5 = var_2c0_1;
        var_3c8 = var_3e8;
        memcpy(&var_3b0, &var_2b8, 0xa0);
        var_318_1 = var_408;
        int64_t var_300_1 = var_1b8;
        memcpy(arg1, &var_3c8, 0xd0);
        arg1[0x1a] = r12_1;
        arg1[0x1b] = var_1d0_1;
        arg1[0x1c] = rax_33;
        *(arg1 + 0xe1) = rbp_4;
        *(arg1 + 0xe2) = rax_36 ^ 1;
        *(arg1 + 0xe3) = rax_37;
        *(arg1 + 0xe4) = rax_40;
        *(arg1 + 0xe6) = rax_86;
        *(arg1 + 0xe7) = rax_87;
        arg1[0x1d] = rax_89;
        *(arg1 + 0xe9) = rax_90;
        *(arg1 + 0xea) = rax_91;
        *(arg1 + 0xeb) = rax;
        *(arg1 + 0xec) = 0;
        *(arg1 + 0xed) = rax_93;
        *(arg1 + 0xee) = var_453_1;
        *(arg1 + 0xef) = rax_13;
        arg1[0x1e] = rax_1;
        *(arg1 + 0xf1) = rbx_1;
        *(arg1 + 0xf2) = r15_3;
        *(arg1 + 0xf3) = rax_11;
        *(arg1 + 0xf4) = rax_47;
        *(arg1 + 0xf5) = var_418;
        *(arg1 + 0xf6) = rax_46 >> 8;
        *(arg1 + 0xf7) = r12_4;
        arg1[0x1f] = rbp_5;
        *(arg1 + 0xf9) = rax_10;
        *(arg1 + 0xfa) = r15_4;
        core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h51f173604a280fb6(&var_2f8);
        core::ptr::drop_in_place$LT$core..option..Option$LT$std..ffi..os_str..OsString$GT$$GT$::hfdc0666b8b5a3215(&var_c0);
        
        if (~var_428 & var_1e8 != -0x8000000000000000)
            core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h51f173604a280fb6(&var_1e8);
        
        if (!(var_42c | var_200 == -0x8000000000000000))
            core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h51f173604a280fb6(&var_200);
    }
    else
    {
        std::sys::os_str::bytes::Slice::to_string_lossy::h816275565265bd85(&var_408, *var_2f8[8], 
            var_2e8);
        void* var_400;
        uint64_t var_3f8;
        uucore::parser::parse_size::parse_size_u64::h6825c2c9656edafa(&var_2b8, var_400, var_3f8);
        
        if (var_2b8 == 3)
        {
            r12_1 = var_2b0;
            
            if (!var_43c)
            {
                int64_t rax_32 = 0x400;
                
                if (!rbp_3)
                    rax_32 = r12_1;
                
                r14_2 = rax_32;
                
                if (rax_14)
                    r14_2 = r12_1;
            }
            else
            {
                r14_2 = r12_1;
                
                if (rbp_3)
                    r14_2 = 0x400;
                
                r12_1 = 1;
            }
            
            label_520912:
            core::ptr::drop_in_place$LT$core..result..Result$LT$u64$C$uucore..parser..parse_size..ParseSizeError$GT$$GT$::h694d72ca3d1ec501(&var_2b8);
            core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::h950c753f5d689b41(
                &var_408);
            goto label_520930;
        }
        
        if (!rax_14)
        {
            r12_1 = 1;
            r14_2 = 0x400;
            
            if (!var_43c)
                r12_1 = 0x400;
            
            goto label_520912;
        }
        
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(
            &var_168, rax_14);
        char* var_158;
        var_3b0 = var_158;
        var_3c0 = var_168;
        var_3c8 = 3;
        arg1[1] = alloc::boxed::Box$LT$T$GT$::new::h078849aa224a94d8(&var_3c8);
        arg1[2] = &data_612480;
        *arg1 = -0x8000000000000000;
        core::ptr::drop_in_place$LT$core..result..Result$LT$u64$C$uucore..parser..parse_size..ParseSizeError$GT$$GT$::h694d72ca3d1ec501(&var_2b8);
        core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::h950c753f5d689b41(&var_408);
        label_520ab5:
        core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h51f173604a280fb6(&var_2f8);
        core::ptr::drop_in_place$LT$core..option..Option$LT$std..ffi..os_str..OsString$GT$$GT$::hfdc0666b8b5a3215(&var_c0);
        
        if (~var_428 & var_1e8 != -0x8000000000000000)
            core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h51f173604a280fb6(&var_1e8);
        
        if (!(var_42c | var_200 == -0x8000000000000000))
            core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h51f173604a280fb6(&var_200);
    }
    
    if (!(var_43c | var_218 == -0x8000000000000000))
        core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h51f173604a280fb6(&var_218);
    
    return arg1;
}
