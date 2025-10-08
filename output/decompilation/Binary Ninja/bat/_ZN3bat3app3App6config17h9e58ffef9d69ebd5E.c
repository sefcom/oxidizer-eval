
  int64_t bat::app::App::config::h9e58ffef9d69ebd5(int64_t* arg1, void* arg2, int64_t arg3, uint64_t arg4)

{
    char result_1;
    bat::app::App::style_components::hac13e48bafa5aa1c(&result_1, arg2);
    char result = result_1;
    int128_t var_417;
    int128_t var_407;
    int128_t var_3f7;
    int64_t var_3e8;
    int128_t var_3e0;
    int128_t var_358;
    
    if (result != 0xd)
    {
        var_358 = var_417;
        int64_t var_3d0;
        arg1[0xa] = var_3d0;
        *(arg1 + 0x40) = var_3e0;
        arg1[7] = var_3e8;
        int128_t zmm0 = var_358;
        *(arg1 + 0x29) = var_3f7;
        *(arg1 + 0x19) = var_407;
        *(arg1 + 9) = zmm0;
        arg1[1] = result;
        *arg1 = 2;
        return result;
    }
    
    uint64_t var_428_1 = arg4;
    int128_t var_2c8 = var_417;
    int128_t var_2b8_1 = var_407;
    char rax = clap_builder::parser::matches::arg_matches::ArgMatches::get_count::hfce66d8de8c62335(
        arg2, "plainpagingno-paginglist-themesi…", 5);
    clap_builder::parser::matches::arg_matches::ArgMatches::indices_of::h792c43f447102eff(
        &result_1, arg2, "plainpagingno-paginglist-themesi…", 5);
    int64_t r13_1;
    
    if (!result_1)
        r13_1 = 0;
    else
    {
        int64_t var_108_1 = *var_417[0xf];
        int128_t var_118 = result_1;
        char rax_2;
        int64_t rdx;
        rax_2 = core::iter::traits::iterator::Iterator::reduce::h898e4ae74c712f58(&var_118);
        r13_1 = 0;
        
        if (rax_2 & 1)
            r13_1 = rdx;
    }
    
    clap_builder::parser::matches::arg_matches::ArgMatches::indices_of::h792c43f447102eff(
        &result_1, arg2, "pagingno-paginglist-themesignore…", 6);
    int64_t r12_1;
    
    if (!result_1)
        r12_1 = 0;
    else
    {
        int64_t var_e8_1 = *var_417[0xf];
        int128_t var_f8 = result_1;
        char rax_4;
        int64_t rdx_1;
        rax_4 = core::iter::traits::iterator::Iterator::reduce::h898e4ae74c712f58(&var_f8);
        r12_1 = 0;
        
        if (rax_4 & 1)
            r12_1 = rdx_1;
    }
    
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h5d802d13d527b428(
        &result_1, arg2, "pagingno-paginglist-themesignore…", 6);
    void* rax_5 = clap_builder::parser::error::MatchesError::unwrap::hf7d617d7cf213b9e(
        "pagingno-paginglist-themesignore…", 6, &result_1);
    void var_438;
    bool var_42c_1;
    bool var_420_1;
    
    if (!rax_5)
    {
        label_7a668b:
        rax_5 = 2;
        var_42c_1 = rax_5;
        rax_5 = 1;
        var_420_1 = rax_5;
        
        if (rax <= 1 && !
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0317c382272279ba(
            arg2, "no-paginglist-themesignored-suff…", 9))
        {
            result_1 = arg3;
            *var_417[7] = var_428_1 * 0xa0 + arg3;
            bool cond:0_1 = !_$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::any::h666cd64e98733682(&result_1);
            void* rdi_12 = arg2;
            bool cond:1_1;
            
            if (!cond:0_1)
            {
                cond:1_1 = !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0317c382272279ba(rdi_12, "list-themesignored-suffixmap-syn…", 0xb);
                rdi_12 = arg2;
            }
            
            if (cond:0_1 || !cond:1_1)
            {
                bool rcx_4 = *(rdi_12 + 0x38);
                var_42c_1 = 2 - rcx_4;
                var_420_1 = rcx_4 ^ 1;
            }
            else if (*(rdi_12 + 0x38) == 1)
            {
                std::io::stdio::stdin::h9a05a2c3e7544b2a();
                bool rax_68 = std::sys::io::is_terminal::isatty::is_terminal::h2a42c52b11aec6ca();
                var_420_1 = rax_68;
                var_42c_1 = rax_68 + 1;
            }
        }
    }
    else
    {
        int64_t rbx_1 = *(rax_5 + 8);
        uint64_t r14_1 = *(rax_5 + 0x10);
        
        if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h023f2f6694194809(rbx_1, r14_1, "alwaysneverinternal error: enter…", 6))
        {
            if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h023f2f6694194809(rbx_1, r14_1, "neverinternal error: entered unr…", 5))
            {
                if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h023f2f6694194809(rbx_1, r14_1, &data_480130[0x28], 4))
                    goto label_7a668b;
                
                result_1 = &data_ac8300;
                *var_417[7] = 1;
                *var_417[0xf] = &var_438;
                var_407 = {0};
                core::panicking::panic_fmt::h96f341d36638c225(&result_1);
                /* no return */
            }
            
            var_42c_1 = true;
            var_420_1 = true;
        }
        else
        {
            bool rcx_3 = r13_1 > r12_1 & rax >= 2;
            var_420_1 = rcx_3;
            var_42c_1 = rcx_3 * 2;
        }
    }
    
    int128_t var_1b0;
    bat::syntax_mapping::SyntaxMapping::new::h3e101160bfb88d29(&var_1b0);
    char rax_15;
    int64_t rdx_3;
    rax_15 = std::thread::available_parallelism::h897bc36791d72018();
    void* rbx_2 = arg2;
    
    if (!(rax_15 & 1))
    {
        if (rdx_3 >= 2)
            bat::syntax_mapping::SyntaxMapping::start_offload_build_all::hd06ba260de1f2570(
                &var_1b0);
        
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h5cb28e4b0036c6f1(
            &result_1, rbx_2, "ignored-suffixmap-syntaxterminal…", 0xe);
        clap_builder::parser::error::MatchesError::unwrap::haed18dec1f11e146(&var_358, 
            "ignored-suffixmap-syntaxterminal…", 0xe, &result_1);
        int64_t var_329;
        
        if (var_358)
        {
            int128_t zmm0_3 = var_358;
            var_3e8 = *var_329[1];
            int128_t var_338;
            var_407 = var_338;
            int128_t var_348;
            var_417 = var_348;
            result_1 = zmm0_3;
            
            while (true)
            {
                void* rax_17 = _$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h2e8d6fb28b26ddef(&result_1);
                
                if (!rax_17)
                    break;
                
                bat::syntax_mapping::SyntaxMapping::insert_ignored_suffix::ha81044b5379aff07(
                    &var_1b0, *(rax_17 + 8), *(rax_17 + 0x10));
            }
            
            rbx_2 = arg2;
        }
        
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h5cb28e4b0036c6f1(
            &result_1, rbx_2, "map-syntaxterminal-widthnonprint…", 0xa);
        int64_t var_248;
        clap_builder::parser::error::MatchesError::unwrap::haed18dec1f11e146(&var_248, 
            "map-syntaxterminal-widthnonprint…", 0xa, &result_1);
        int64_t var_2f8;
        int64_t var_2e8;
        int64_t var_298;
        int128_t var_290;
        int128_t var_238;
        int128_t var_228;
        
        if (!var_248)
        {
            label_7a698e:
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h5d802d13d527b428(
                &result_1, rbx_2, "terminal-widthnonprintable-notat…", 0xe);
            void* rax_19 = clap_builder::parser::error::MatchesError::unwrap::hf7d617d7cf213b9e(
                "terminal-widthnonprintable-notat…", 0xe, &result_1);
            int64_t rbp_2;
            
            if (!rax_19)
                rbp_2 = 0;
            else
            {
                int64_t rax_20;
                uint64_t rdx_8;
                rax_20 = bat::app::App::config::_$u7b$$u7b$closure$u7d$$u7d$::hcae71a0fd7738f8f(
                    *(rax_19 + 8), *(rax_19 + 0x10));
                var_428_1 = rdx_8;
                rbp_2 = rax_20;
            }
            
            char rax_21 = bat::app::is_truecolor_terminal::h389f7525a52eb4d6();
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h5d802d13d527b428(
                &result_1, rbx_2, "languageshow-allnotation", 8);
            int64_t rsi_15 = 8;
            void* rax_22 = clap_builder::parser::error::MatchesError::unwrap::hf7d617d7cf213b9e(
                "languageshow-allnotation", 8, &result_1);
            int64_t rdi_29;
            
            if (!rax_22)
                rdi_29 = 0;
            else
            {
                rdi_29 = *(rax_22 + 8);
                rsi_15 = *(rax_22 + 0x10);
            }
            
            void* rax_23;
            int64_t rdx_11;
            rax_23 =
                core::option::Option$LT$T$GT$::or_else::h1b70362503efbf58(rdi_29, rsi_15, rbx_2);
            char rax_24 =
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0317c382272279ba(
                rbx_2, "show-allnotation", 8);
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h5d802d13d527b428(
                &result_1, rbx_2, "nonprintable-notationbinarychop-…", 0x15);
            void* rax_25 = clap_builder::parser::error::MatchesError::unwrap::hf7d617d7cf213b9e(
                "nonprintable-notationbinarychop-…", 0x15, &result_1);
            char rax_26;
            char rax_27;
            
            if (rax_25)
            {
                int64_t rbx_3 = *(rax_25 + 8);
                uint64_t r14_2 = *(rax_25 + 0x10);
                rax_26 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h023f2f6694194809(rbx_3, r14_2, "unicodecaretinternal error: ente…", 7);
                
                if (!rax_26)
                    rax_27 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h023f2f6694194809(rbx_3, r14_2, "caretinternal error: entered unr…", 5);
            }
            
            if (!rax_25 || (!rax_26 && !rax_27))
                result_1 = &data_ac8310;
            else
            {
                clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h5d802d13d527b428(&result_1, arg2, "binarychop-long-linesforce-color…", 6);
                void* rax_28 = clap_builder::parser::error::MatchesError::unwrap::hf7d617d7cf213b9e(
                    "binarychop-long-linesforce-color…", 6, &result_1);
                char rax_29;
                char rax_30;
                uint64_t r14_3;
                
                if (rax_28)
                {
                    int64_t rbx_4 = *(rax_28 + 8);
                    r14_3 = *(rax_28 + 0x10);
                    rax_29 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h023f2f6694194809(rbx_4, r14_3, "as-textno-printinginternal error…", 7);
                    
                    if (!rax_29)
                        rax_30 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h023f2f6694194809(rbx_4, r14_3, "no-printinginternal error: enter…", 0xb);
                }
                
                if (!rax_28 || (!rax_29 && !rax_30))
                    result_1 = &data_ac8320;
                else
                {
                    char r13_2 = *(arg2 + 0x38);
                    char var_430_1;
                    
                    if (r13_2 || rbp_2 == 1)
                    {
                        var_430_1 = 1;
                        
                        if (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0317c382272279ba(arg2, "chop-long-linesforce-colorizatio…", 0xf))
                            goto label_7a6c54;
                        
                        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h5d802d13d527b428(&result_1, arg2, &data_480e94, 4);
                        void* rax_32 =
                            clap_builder::parser::error::MatchesError::unwrap::hf7d617d7cf213b9e(
                            &data_480e94, 4, &result_1);
                        
                        if (!rax_32)
                        {
                            label_7a6c38:
                            var_430_1 = (
                                bat::style::StyleComponents::plain::hd9a4c06fd795483c(&var_2c8) ^ 1)
                                * 2;
                            goto label_7a6c54;
                        }
                        
                        int64_t rbx_6 = *(rax_32 + 8);
                        r14_3 = *(rax_32 + 0x10);
                        var_430_1 = 2;
                        
                        if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h023f2f6694194809(rbx_6, r14_3, "characterinternal error: entered…", 9))
                            goto label_7a6c54;
                        
                        var_430_1 = 1;
                        
                        if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h023f2f6694194809(rbx_6, r14_3, "neverinternal error: entered unr…", 5))
                            goto label_7a6c54;
                        
                        if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h023f2f6694194809(rbx_6, r14_3, &data_480130[0x28], 4))
                            goto label_7a6c38;
                        
                        result_1 = &data_ac8330;
                    }
                    else
                    {
                        var_430_1 = 0;
                        label_7a6c54:
                        char var_384_1 = 1;
                        
                        if (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0317c382272279ba(arg2, "force-colorizationcolordecoratio…", 0x12))
                            goto label_7a6e05;
                        
                        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h5d802d13d527b428(&result_1, arg2, "colordecorationsstrip-ansiline-r…", 5);
                        void* rax_38 =
                            clap_builder::parser::error::MatchesError::unwrap::hf7d617d7cf213b9e(
                            "colordecorationsstrip-ansiline-r…", 5, &result_1);
                        
                        if (!rax_38)
                            result_1 = &data_ac8340;
                        else
                        {
                            int64_t rbx_8 = *(rax_38 + 8);
                            r14_3 = *(rax_38 + 0x10);
                            
                            if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h023f2f6694194809(rbx_8, r14_3, "alwaysneverinternal error: enter…", 6))
                                goto label_7a6e05;
                            
                            if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h023f2f6694194809(rbx_8, r14_3, "neverinternal error: entered unr…", 5))
                            {
                                var_384_1 = 0;
                                label_7a6e05:
                                char var_3c7_1 = 2;
                                result_1 = 0;
                                int64_t var_3c0_1 = 0;
                                char var_3b8_1 = 0;
                                int64_t var_3b0_1 = 0;
                                int64_t var_3a8_1 = 1;
                                int128_t var_3a0_1 = {0};
                                void var_208;
                                console::term::Term::with_inner::h08ce7f4fcbf99d9f(&var_208, 
                                    &result_1);
                                uint64_t rax_44 =
                                    console::unix_term::terminal_size::h248197736deb1abb(&var_208);
                                uint64_t r15_3 = 0x50;
                                
                                if (rax_44 & 1)
                                    r15_3 = rax_44 >> 0x20;
                                
                                if (rbp_2 & 1)
                                    r15_3 = var_428_1;
                                
                                if (r13_2)
                                    var_428_1 = 0;
                                else
                                {
                                    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h5d802d13d527b428(&result_1, arg2, "colordecorationsstrip-ansiline-r…", 5);
                                    void* rax_45 = clap_builder::parser::error::MatchesError::unwrap::hf7d617d7cf213b9e("colordecorationsstrip-ansiline-r…", 5, 
                                        &result_1);
                                    char rax_46;
                                    
                                    if (rax_45)
                                        rax_46 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h023f2f6694194809(*(rax_45 + 8), *(rax_45 + 0x10), 
                                            "alwaysneverinternal error: enter…", 6);
                                    
                                    if (rax_45 && rax_46)
                                        var_428_1 = 0;
                                    else
                                    {
                                        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h5d802d13d527b428(&result_1, arg2, "decorationsstrip-ansiline-ranged…", 0xb);
                                        void* rax_47 = clap_builder::parser::error::MatchesError::unwrap::hf7d617d7cf213b9e("decorationsstrip-ansiline-ranged…", 0xb, 
                                            &result_1);
                                        char rax_48;
                                        
                                        if (rax_47)
                                            rax_48 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h023f2f6694194809(*(rax_47 + 8), *(rax_47 + 0x10), 
                                                "alwaysneverinternal error: enter…", 6);
                                        
                                        if (!rax_47 || !rax_48)
                                        {
                                            var_428_1 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0317c382272279ba(arg2, "force-colorizationcolordecoratio…", 
                                                0x12);
                                            int32_t rax_50;
                                            rax_50 = var_428_1 ^ 1;
                                            var_428_1 = rax_50;
                                        }
                                        else
                                            var_428_1 = 0;
                                    }
                                }
                                
                                clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h5d802d13d527b428(&result_1, arg2, "tabsgridQuitbyten", 4);
                                void* rax_51 = clap_builder::parser::error::MatchesError::unwrap::hf7d617d7cf213b9e("tabsgridQuitbyten", 4, &result_1);
                                int64_t rax_52;
                                
                                if (rax_51)
                                {
                                    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(&result_1, rax_51);
                                    rax_52 = result_1;
                                    var_358 = var_417;
                                }
                                
                                char rbx_9;
                                
                                if (rax_51 && rax_52 != -0x8000000000000000)
                                {
                                    var_417 = var_358;
                                    result_1 = rax_52;
                                    char rax_53;
                                    uint64_t rdx_20;
                                    rax_53 = bat::app::App::config::_$u7b$$u7b$closure$u7d$$u7d$::h6bf5bf8fe8f2fdd9(&result_1);
                                    rbx_9 = rax_53;
                                    r14_3 = rdx_20;
                                }
                                else
                                    rbx_9 = 0;
                                
                                uint64_t r13_4 = ((
                                    bat::style::StyleComponents::plain::hd9a4c06fd795483c(&var_2c8)
                                    & var_420_1) ^ 1) << 2;
                                
                                if (rbx_9 & 1)
                                    r13_4 = r14_3;
                                
                                clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h5d802d13d527b428(&result_1, arg2, "strip-ansiline-rangediff-context…", 0xa);
                                void* rax_55 = clap_builder::parser::error::MatchesError::unwrap::hf7d617d7cf213b9e("strip-ansiline-rangediff-context…", 0xa, &result_1);
                                
                                if (rax_55)
                                {
                                    int64_t rbx_10 = *(rax_55 + 8);
                                    uint64_t r14_4 = *(rax_55 + 0x10);
                                    
                                    if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h023f2f6694194809(rbx_10, r14_4, "neverinternal error: entered unr…", 5))
                                    {
                                        var_420_1 = false;
                                        label_7a70d1:
                                        bat::app::App::theme_options::hebe2eab601f3d5a6(&result_1, 
                                            arg2);
                                        void var_138;
                                        bat::theme::theme::hd6a0a2911a872a37(&var_138, &result_1);
                                        int128_t var_260;
                                        _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h16c702d31d6ee83e(&var_260, &var_138);
                                        clap_builder::parser::matches::arg_matches::ArgMatches::try_contains_id::hb25688629026f228(&result_1, arg2, &data_480bb0, 4);
                                        bool rax_59 = core::result::Result$LT$T$C$E$GT$::unwrap_or_default::h97a13622fc6075f0(result_1, *var_417[7]);
                                        char rax_60;
                                        
                                        if (rax_59)
                                            rax_60 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0317c382272279ba(arg2, &data_480bb0, 4);
                                        
                                        int64_t var_380_1;
                                        int64_t var_378_1;
                                        
                                        if (rax_59 && rax_60)
                                        {
                                            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h5d802d13d527b428(&result_1, arg2, "diff-contextpageritalic-texthigh…", 
                                                0xc);
                                            void* rax_61 = clap_builder::parser::error::MatchesError::unwrap::hf7d617d7cf213b9e("diff-contextpageritalic-texthigh…", 
                                                0xc, &result_1);
                                            int64_t rax_62;
                                            
                                            if (!rax_61)
                                                rax_62 = 2;
                                            else
                                            {
                                                core::num::_$LT$impl$u20$usize$GT$::from_ascii_radix::he77532141bbadde7(&result_1, *(rax_61 + 8), *(rax_61 + 0x10));
                                                rax_62 = 2;
                                                
                                                if (!result_1)
                                                    rax_62 = *var_417[7];
                                            }
                                            
                                            var_380_1 = rax_62;
                                            var_378_1 = -0x8000000000000000;
                                            goto label_7a7469;
                                        }
                                        
                                        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h5cb28e4b0036c6f1(&result_1, arg2, "line-rangediff-contextpageritali…", 0xa);
                                        int64_t var_b0;
                                        clap_builder::parser::error::MatchesError::unwrap::haed18dec1f11e146(&var_b0, "line-rangediff-contextpageritali…", 0xa, 
                                            &result_1);
                                        int64_t rdx_24 = -0x8000000000000000;
                                        
                                        if (!var_b0)
                                            goto label_7a7292;
                                        
                                        core::iter::traits::iterator::Iterator::collect::h5e4b61fb5fe9cb97(&result_1, &var_b0);
                                        uint32_t result_3 = result_1;
                                        int32_t rdx_25 = *var_417[3];
                                        int32_t var_308 = var_417;
                                        int64_t rcx_22 = *var_417[7];
                                        var_2f8 = var_417;
                                        var_358 = var_407;
                                        int128_t var_348_3 = var_3e8;
                                        rdx_24 = -0x8000000000000000;
                                        
                                        if (result_3 == 0xe)
                                            goto label_7a7292;
                                        
                                        if (result_3 != 0xd)
                                        {
                                            *(arg1 + 0xc) = rdx_25;
                                            *(arg1 + 9) = rdx_25;
                                            int128_t var_1f8_1 = var_2f8;
                                            int128_t zmm0_13 = var_358;
                                            *(arg1 + 0x48) = var_3e0;
                                            *(arg1 + 0x38) = var_348_3;
                                            *(arg1 + 0x28) = zmm0_13;
                                            int128_t var_178_2 = var_1f8_1;
                                            *(arg1 + 0x18) = var_1f8_1;
                                            arg1[1] = result_3;
                                            arg1[2] = rcx_22;
                                            *arg1 = 2;
                                            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h9a1f4db89f5bf603(&var_260);
                                            core::ptr::drop_in_place$LT$bat..syntax_mapping..SyntaxMapping$GT$::he4ebca74b2c0e804(&var_1b0);
                                            core::ptr::drop_in_place$LT$bat..style..StyleComponents$GT$::h231077cf22413a4b(var_2c8, *var_2c8[8]);
                                        }
                                        else
                                        {
                                            int128_t var_1f8 = var_2f8;
                                            rdx_24 = rcx_22;
                                            label_7a7292:
                                            int64_t var_278;
                                            int64_t rcx_23;
                                            
                                            if (rdx_24 != -0x8000000000000000)
                                            {
                                                int64_t var_e0 = rdx_24;
                                                int128_t var_d8_1 = var_1f8;
                                                bat::line_range::LineRanges::from::h4ce85643fa8989ac(&result_1, &var_e0);
                                                rcx_23 = result_1;
                                                var_298 = var_417;
                                                var_290 = var_407;
                                                var_278 = *var_3f7[7];
                                            }
                                            
                                            int64_t var_240;
                                            
                                            if (rdx_24 != -0x8000000000000000
                                                && rcx_23 != -0x8000000000000000)
                                            {
                                                *var_228[8] = var_278;
                                                var_238 = var_290;
                                                var_240 = var_298;
                                            }
                                            else
                                            {
                                                _$LT$bat..line_range..LineRanges$u20$as$u20$core..default..Default$GT$::default::h1b1d9fd6820022e8(&var_248);
                                                rcx_23 = var_248;
                                            }
                                            
                                            var_378_1 = rcx_23;
                                            var_380_1 = var_240;
                                            int128_t var_158 = var_238;
                                            int64_t var_148 = var_228;
                                            int64_t var_140_1 = *var_228[8];
                                            label_7a7469:
                                            int64_t rax_69 = var_2c8;
                                            int64_t rax_70 = *var_2c8[8];
                                            var_358 = var_1b0;
                                            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h5d802d13d527b428(&result_1, arg2, "pageritalic-texthighlight-linese…", 
                                                5);
                                            void* rax_72 = clap_builder::parser::error::MatchesError::unwrap::hf7d617d7cf213b9e("pageritalic-texthighlight-linese…", 5, 
                                                &result_1);
                                            int64_t var_268_1;
                                            int64_t var_1c8;
                                            
                                            if (!rax_72)
                                                var_268_1 = 0;
                                            else
                                            {
                                                var_268_1 = *(rax_72 + 8);
                                                var_1c8 = *(rax_72 + 0x10);
                                            }
                                            
                                            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h5d802d13d527b428(&result_1, arg2, "italic-texthighlight-lineset-ter…", 
                                                0xb);
                                            void* rax_74 = clap_builder::parser::error::MatchesError::unwrap::hf7d617d7cf213b9e("italic-texthighlight-lineset-ter…", 
                                                0xb, &result_1);
                                            char rbx_12;
                                            
                                            if (!rax_74)
                                                rbx_12 = 0;
                                            else
                                                rbx_12 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h023f2f6694194809(*(rax_74 + 8), *(rax_74 + 0x10), 
                                                    "alwaysneverinternal error: enter…", 6);
                                            
                                            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h5cb28e4b0036c6f1(&result_1, arg2, "highlight-lineset-terminal-title…", 
                                                0xe);
                                            int64_t var_70;
                                            clap_builder::parser::error::MatchesError::unwrap::haed18dec1f11e146(&var_70, "highlight-lineset-terminal-title…", 0xe, 
                                                &result_1);
                                            int64_t rdx_29 = -0x8000000000000000;
                                            
                                            if (!var_70)
                                                goto label_7a7680;
                                            
                                            core::iter::traits::iterator::Iterator::collect::h5e4b61fb5fe9cb97(&result_1, &var_70);
                                            uint32_t result_4 = result_1;
                                            int32_t rdx_30 = *var_417[3];
                                            int32_t var_310_1 = var_417;
                                            int64_t rcx_27 = *var_417[7];
                                            var_308 = var_417;
                                            var_248 = var_407;
                                            int128_t var_238_1 = var_3e8;
                                            rdx_29 = -0x8000000000000000;
                                            
                                            if (result_4 == 0xe)
                                                goto label_7a7680;
                                            
                                            if (result_4 != 0xd)
                                            {
                                                *(arg1 + 0xc) = rdx_30;
                                                *(arg1 + 9) = rdx_30;
                                                int128_t var_1d8_1 = var_308;
                                                int128_t zmm0_14 = var_248;
                                                *(arg1 + 0x48) = var_3e0;
                                                *(arg1 + 0x38) = var_238_1;
                                                *(arg1 + 0x28) = zmm0_14;
                                                int128_t var_168_2 = var_1d8_1;
                                                *(arg1 + 0x18) = var_1d8_1;
                                                arg1[1] = result_4;
                                                arg1[2] = rcx_27;
                                                *arg1 = 2;
                                                core::ptr::drop_in_place$LT$bat..syntax_mapping..SyntaxMapping$GT$::he4ebca74b2c0e804(&var_358);
                                                core::ptr::drop_in_place$LT$bat..style..StyleComponents$GT$::h231077cf22413a4b(rax_69, rax_70);
                                                core::ptr::drop_in_place$LT$bat..config..VisibleLines$GT$::h97df3091887c1943(var_378_1, var_380_1);
                                                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h9a1f4db89f5bf603(&var_260);
                                            }
                                            else
                                            {
                                                int128_t var_1d8 = var_308;
                                                rdx_29 = rcx_27;
                                                label_7a7680:
                                                int64_t rax_76;
                                                
                                                if (rdx_29 != -0x8000000000000000)
                                                {
                                                    int64_t var_c8 = rdx_29;
                                                    int128_t var_c0_1 = var_1d8;
                                                    bat::line_range::LineRanges::from::h4ce85643fa8989ac(&result_1, &var_c8);
                                                    rax_76 = result_1;
                                                    var_2f8 = var_417;
                                                    var_2e8 = var_407;
                                                }
                                                
                                                if (rdx_29 != -0x8000000000000000
                                                    && rax_76 != -0x8000000000000000)
                                                {
                                                    int64_t var_270_1 = *var_3f7[7];
                                                    int128_t var_280_1 = var_2e8;
                                                    var_290 = var_2f8;
                                                    var_298 = rax_76;
                                                }
                                                else
                                                    _$LT$bat..line_range..HighlightedLineRanges$u20$as$u20$core..default..Default$GT$::default::h7c4db8484c3fd9e6(&var_298);
                                                
                                                char rax_77 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0317c382272279ba(arg2, "no-custom-assets", 0x10);
                                                char rax_78 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0317c382272279ba(arg2, 
                                                    "set-terminal-titlesqueeze-blanks…", 0x12);
                                                uint64_t rax_79 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0317c382272279ba(arg2, 
                                                    "squeeze-blanksqueeze-limitshow-n…", 0xd);
                                                int64_t rcx_30;
                                                
                                                if (!rax_79)
                                                    rcx_30 = 0;
                                                else
                                                {
                                                    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::ha431f453fb58dda6(&result_1, arg2);
                                                    uint64_t* rax_80 = clap_builder::parser::error::MatchesError::unwrap::ha7b9f23eec8b2665(&result_1);
                                                    rcx_30 = 1;
                                                    
                                                    if (!rax_80)
                                                        rax_79 = 1;
                                                    else
                                                        rax_79 = *rax_80;
                                                }
                                                
                                                *(arg1 + 0xe0) = var_3f7;
                                                *(arg1 + 0xd0) = var_2b8_1;
                                                *(arg1 + 0xb0) = var_148;
                                                *(arg1 + 0xa0) = var_158;
                                                int64_t var_250;
                                                arg1[4] = var_250;
                                                *(arg1 + 0x10) = var_260;
                                                int64_t var_180;
                                                arg1[0xb] = var_180;
                                                *(arg1 + 0x28) = var_358;
                                                int128_t var_1a0;
                                                *(arg1 + 0x38) = var_1a0;
                                                int128_t var_190;
                                                *(arg1 + 0x48) = var_190;
                                                *(arg1 + 0x60) = var_298;
                                                *(arg1 + 0x70) = var_290;
                                                *(arg1 + 0x80) = var_278;
                                                *arg1 = rcx_30;
                                                arg1[1] = rax_79;
                                                arg1[0x12] = var_378_1;
                                                arg1[0x13] = var_380_1;
                                                arg1[0x18] = rax_69;
                                                arg1[0x19] = rax_70;
                                                arg1[0x1e] = rax_23;
                                                arg1[0x1f] = rdx_11;
                                                arg1[0x20] = r15_3;
                                                arg1[0x21] = r13_4;
                                                arg1[0x22] = var_268_1;
                                                arg1[0x23] = var_1c8;
                                                arg1[0x24] = rax_24;
                                                *(arg1 + 0x121) = rax_26;
                                                *(arg1 + 0x122) = rax_29;
                                                *(arg1 + 0x123) = var_428_1;
                                                *(arg1 + 0x124) = var_384_1;
                                                *(arg1 + 0x125) = rax_21;
                                                *(arg1 + 0x126) = rbx_12;
                                                *(arg1 + 0x127) = rax_77 ^ 1;
                                                arg1[0x25] = rax_78;
                                                *(arg1 + 0x129) = var_430_1;
                                                *(arg1 + 0x12a) = var_42c_1;
                                                *(arg1 + 0x12b) = var_420_1;
                                            }
                                        }
                                        
                                        core::ptr::drop_in_place$LT$bat..theme..ThemeResult$GT$::hee0120026735ea18(&var_138);
                                        return core::ptr::drop_in_place$LT$console..term..Term$GT$::h54745c4d207f6101(&var_208);
                                    }
                                    
                                    var_420_1 = true;
                                    
                                    if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h023f2f6694194809(rbx_10, r14_4, "alwaysneverinternal error: enter…", 6))
                                        goto label_7a70d1;
                                    
                                    var_420_1 = true;
                                    
                                    if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h023f2f6694194809(rbx_10, r14_4, &data_480130[0x28], 4))
                                        goto label_7a70d1;
                                }
                                
                                result_1 = &data_ac8350;
                                *var_417[7] = 1;
                                *var_417[0xf] = &var_438;
                                var_407 = {0};
                                core::panicking::panic_fmt::h96f341d36638c225(&result_1);
                                /* no return */
                            }
                            
                            if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h023f2f6694194809(rbx_8, r14_3, &data_480130[0x28], 4))
                            {
                                char rdx_16 = 0;
                                
                                if (!bat::app::env_no_color::hf40fc7450e3b701f())
                                    rdx_16 = r13_2;
                                
                                var_384_1 = rdx_16;
                                goto label_7a6e05;
                            }
                            
                            result_1 = &data_ac8340;
                        }
                    }
                }
            }
            
            *var_417[7] = 1;
            *var_417[0xf] = &var_438;
            var_407 = {0};
            core::panicking::panic_fmt::h96f341d36638c225(&result_1);
            /* no return */
        }
        
        int128_t var_218;
        *var_329[1] = var_218;
        int128_t var_338_2 = var_228;
        int128_t var_348_2 = var_238;
        var_358 = var_248;
        
        while (true)
        {
            void* rax_18 = _$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..iter..traits..double_ended..DoubleEndedIterator$GT$::next_back::h099ff02bef59ebfe(&var_358);
            
            if (!rax_18)
            {
                rbx_2 = arg2;
                goto label_7a698e;
            }
            
            int64_t r15_1 = *(rax_18 + 0x10);
            _$LT$char$u20$as$u20$core..str..pattern..Pattern$GT$::into_searcher::h19abee4db16fb58d(
                &*var_417[0xf], 0x3a, *(rax_18 + 8), r15_1);
            result_1 = 0;
            *var_417[7] = r15_1;
            *var_3e0[8] = 1;
            core::iter::traits::iterator::Iterator::collect::h10fcc277f47be893(&var_2f8, &result_1);
            int64_t* r15_2;
            int64_t* var_2f0;
            
            if (var_2e8 != 2)
            {
                _$LT$bat..error..Error$u20$as$u20$core..convert..From$LT$$RF$str$GT$$GT$::from::h8ad35b8946c9894b(&result_1, "Invalid syntax mapping. The form…", 0x7d);
                *(arg1 + 0x48) = var_3e0;
                int128_t zmm0_9 = result_1;
                int128_t zmm1_4 = var_417;
                *(arg1 + 0x38) = var_3e8;
                *(arg1 + 0x28) = var_407;
                *(arg1 + 0x18) = zmm1_4;
                *(arg1 + 8) = zmm0_9;
                *arg1 = 2;
                r15_2 = var_2f0;
            }
            else
            {
                r15_2 = var_2f0;
                int64_t rdx_6 = *r15_2;
                int64_t rcx_8 = r15_2[1];
                var_290 = *(r15_2 + 0x10);
                var_298 = 0;
                bat::syntax_mapping::SyntaxMapping::insert::hdeec58fa484a3ff4(&result_1, &var_1b0, 
                    rdx_6, rcx_8, &var_298);
                char result_2 = result_1;
                
                if (result_2 != 0xd)
                {
                    *(arg1 + 0x48) = var_3e0;
                    int128_t zmm0_6 = var_417;
                    *(arg1 + 0x39) = *var_3e8[1];
                    *(arg1 + 0x29) = var_3f7;
                    *(arg1 + 0x19) = var_407;
                    *(arg1 + 9) = zmm0_6;
                    arg1[1] = result_2;
                    *arg1 = 2;
                }
                else
                {
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$str$GT$$GT$::he862375b69ea6ca7(var_2f8, r15_2);
                    continue;
                }
            }
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$str$GT$$GT$::he862375b69ea6ca7(
                var_2f8, r15_2);
            break;
        }
    }
    else
    {
        arg1[1] = 0;
        arg1[2] = rdx_3;
        *arg1 = 2;
    }
    
    core::ptr::drop_in_place$LT$bat..syntax_mapping..SyntaxMapping$GT$::he4ebca74b2c0e804(&var_1b0);
    return core::ptr::drop_in_place$LT$bat..style..StyleComponents$GT$::h231077cf22413a4b(var_2c8, 
        *var_2c8[8]);
}
