
  fn bat::app::App::config::h9e58ffef9d69ebd5(arg1: *mut i64, arg2: *mut c_void, arg3: i64, arg4: u64) -> i64

{
    let mut result_1: i8;
    bat::app::App::style_components::hac13e48bafa5aa1c(&result_1, arg2);
    let result: i8 = result_1;
    let mut var_417: i128;
    let mut var_407: i128;
    let var_3f7: i128;
    let mut var_3e8: i64;
    let mut var_3e0: i128;
    let mut var_358: i128;
    
    if result != 0xd
    {
        var_358 = var_417;
        let var_3d0: i64;
        arg1[0xa] = var_3d0;
        *arg1.byte_offset(0x40) = var_3e0;
        arg1[7] = var_3e8;
        let zmm0: i128 = var_358;
        *arg1.byte_offset(0x29) = var_3f7;
        *arg1.byte_offset(0x19) = var_407;
        *arg1.byte_offset(9) = zmm0;
        arg1[1] = result;
        *arg1 = 2;
        return result;
    }
    
    let mut var_428_1: u64 = arg4;
    let mut var_2c8: i128 = var_417;
    let var_2b8_1: i128 = var_407;
    let rax: i8 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_count::hfce66d8de8c62335(arg2, 
        "plainpagingno-paginglist-themesi…", 5);
    clap_builder::parser::matches::arg_matches::ArgMatches::indices_of::h792c43f447102eff(
        &result_1, arg2, "plainpagingno-paginglist-themesi…", 5);
    let mut r13_1: i64;
    
    if result_1 == 0
    {
        r13_1 = 0;
    }
    else
    {
        let var_108_1: i64 = *var_417[0xf];
        let mut var_118: i128 = result_1;
        let mut rax_2: i8;
        let mut rdx: i64;
        rax_2 = core::iter::traits::iterator::Iterator::reduce::h898e4ae74c712f58(&var_118);
        r13_1 = 0;
        
        if (rax_2 & 1) != 0
        {
            r13_1 = rdx;
        }
    }
    
    clap_builder::parser::matches::arg_matches::ArgMatches::indices_of::h792c43f447102eff(
        &result_1, arg2, "pagingno-paginglist-themesignore…", 6);
    let mut r12_1: i64;
    
    if result_1 == 0
    {
        r12_1 = 0;
    }
    else
    {
        let var_e8_1: i64 = *var_417[0xf];
        let mut var_f8: i128 = result_1;
        let mut rax_4: i8;
        let mut rdx_1: i64;
        rax_4 = core::iter::traits::iterator::Iterator::reduce::h898e4ae74c712f58(&var_f8);
        r12_1 = 0;
        
        if (rax_4 & 1) != 0
        {
            r12_1 = rdx_1;
        }
    }
    
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h5d802d13d527b428(
        &result_1, arg2, "pagingno-paginglist-themesignore…", 6);
    let mut rax_5: *mut c_void =
        clap_builder::parser::error::MatchesError::unwrap::hf7d617d7cf213b9e(
        "pagingno-paginglist-themesignore…", 6, &result_1);
    let mut var_438: ();
    let mut var_42c_1: bool;
    let mut var_420_1: bool;
    
    if rax_5 == 0
    {
        'label_7a668b:
        rax_5 = 2;
        var_42c_1 = rax_5;
        rax_5 = 1;
        var_420_1 = rax_5;
        
        if rax <= 1 &&
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0317c382272279ba(
            arg2, "no-paginglist-themesignored-suff…", 9) == 0
        {
            result_1 = arg3;
            *var_417[7] = var_428_1 * 0xa0 + arg3;
            let cond:0_1: bool = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::any::h666cd64e98733682(&result_1) == 0;
            let mut rdi_12: *mut c_void = arg2;
            let mut cond:1_1: bool;
            
            if !cond:0_1
            {
                cond:1_1 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0317c382272279ba(rdi_12, "list-themesignored-suffixmap-syn…", 0xb) == 0;
                rdi_12 = arg2;
            }
            
            if cond:0_1 || !cond:1_1
            {
                let rcx_4: bool = *rdi_12.byte_offset(0x38);
                var_42c_1 = 2 - rcx_4;
                var_420_1 = rcx_4 ^ 1;
            }
            else if *rdi_12.byte_offset(0x38) == 1
            {
                std::io::stdio::stdin::h9a05a2c3e7544b2a();
                let rax_68: bool =
                    std::sys::io::is_terminal::isatty::is_terminal::h2a42c52b11aec6ca();
                var_420_1 = rax_68;
                var_42c_1 = rax_68 + 1;
            }
        }
    }
    else
    {
        let rbx_1: i64 = *rax_5.byte_offset(8);
        let r14_1: u64 = *rax_5.byte_offset(0x10);
        
        if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h023f2f6694194809(rbx_1, r14_1, "alwaysneverinternal error: enter…", 6) == 0
        {
            if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h023f2f6694194809(rbx_1, r14_1, "neverinternal error: entered unr…", 5) == 0
            {
                if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h023f2f6694194809(rbx_1, r14_1, &data_480130[0x28], 4) != 0
                {
                    goto 'label_7a668b;
                }
                
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
            let rcx_3: bool = r13_1 > r12_1 & rax >= 2;
            var_420_1 = rcx_3;
            var_42c_1 = rcx_3 * 2;
        }
    }
    
    let mut var_1b0: i128;
    bat::syntax_mapping::SyntaxMapping::new::h3e101160bfb88d29(&var_1b0);
    let mut rax_15: i8;
    let mut rdx_3: i64;
    rax_15 = std::thread::available_parallelism::h897bc36791d72018();
    let mut rbx_2: *mut c_void = arg2;
    
    if (rax_15 & 1) == 0
    {
        if rdx_3 >= 2
        {
            bat::syntax_mapping::SyntaxMapping::start_offload_build_all::hd06ba260de1f2570(
                &var_1b0);
        }
        
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h5cb28e4b0036c6f1(
            &result_1, rbx_2, "ignored-suffixmap-syntaxterminal…", 0xe);
        clap_builder::parser::error::MatchesError::unwrap::haed18dec1f11e146(&var_358, 
            "ignored-suffixmap-syntaxterminal…", 0xe, &result_1);
        let mut var_329: i64;
        
        if var_358 != 0
        {
            let zmm0_3: i128 = var_358;
            var_3e8 = *var_329[1];
            let var_338: i128;
            var_407 = var_338;
            let var_348: i128;
            var_417 = var_348;
            result_1 = zmm0_3;
            
            loop
            {
                let rax_17: *mut c_void = _$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h2e8d6fb28b26ddef(&result_1);
                
                if rax_17 == 0
                {
                    break;
                }
                
                bat::syntax_mapping::SyntaxMapping::insert_ignored_suffix::ha81044b5379aff07(
                    &var_1b0, *rax_17.byte_offset(8), *rax_17.byte_offset(0x10));
            }
            
            rbx_2 = arg2;
        }
        
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h5cb28e4b0036c6f1(
            &result_1, rbx_2, "map-syntaxterminal-widthnonprint…", 0xa);
        let mut var_248: i64;
        clap_builder::parser::error::MatchesError::unwrap::haed18dec1f11e146(&var_248, 
            "map-syntaxterminal-widthnonprint…", 0xa, &result_1);
        let mut var_2f8: i64;
        let mut var_2e8: i64;
        let mut var_298: i64;
        let mut var_290: i128;
        let mut var_238: i128;
        let mut var_228: i128;
        
        if var_248 == 0
        {
            'label_7a698e:
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h5d802d13d527b428(
                &result_1, rbx_2, "terminal-widthnonprintable-notat…", 0xe);
            let rax_19: *mut c_void =
                clap_builder::parser::error::MatchesError::unwrap::hf7d617d7cf213b9e(
                "terminal-widthnonprintable-notat…", 0xe, &result_1);
            let mut rbp_2: i64;
            
            if rax_19 == 0
            {
                rbp_2 = 0;
            }
            else
            {
                let mut rax_20: i64;
                let mut rdx_8: u64;
                rax_20 = bat::app::App::config::_$u7b$$u7b$closure$u7d$$u7d$::hcae71a0fd7738f8f(
                    *rax_19.byte_offset(8), *rax_19.byte_offset(0x10));
                var_428_1 = rdx_8;
                rbp_2 = rax_20;
            }
            
            let rax_21: i8 = bat::app::is_truecolor_terminal::h389f7525a52eb4d6();
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h5d802d13d527b428(
                &result_1, rbx_2, "languageshow-allnotation", 8);
            let mut rsi_15: i64 = 8;
            let rax_22: *mut c_void =
                clap_builder::parser::error::MatchesError::unwrap::hf7d617d7cf213b9e(
                "languageshow-allnotation", 8, &result_1);
            let mut rdi_29: i64;
            
            if rax_22 == 0
            {
                rdi_29 = 0;
            }
            else
            {
                rdi_29 = *rax_22.byte_offset(8);
                rsi_15 = *rax_22.byte_offset(0x10);
            }
            
            let mut rax_23: *mut c_void;
            let mut rdx_11: i64;
            rax_23 =
                core::option::Option$LT$T$GT$::or_else::h1b70362503efbf58(rdi_29, rsi_15, rbx_2);
            let rax_24: i8 =
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0317c382272279ba(
                rbx_2, "show-allnotation", 8);
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h5d802d13d527b428(
                &result_1, rbx_2, "nonprintable-notationbinarychop-…", 0x15);
            let rax_25: *mut c_void =
                clap_builder::parser::error::MatchesError::unwrap::hf7d617d7cf213b9e(
                "nonprintable-notationbinarychop-…", 0x15, &result_1);
            let mut rax_26: i8;
            let mut rax_27: i8;
            
            if rax_25 != 0
            {
                let rbx_3: i64 = *rax_25.byte_offset(8);
                let r14_2: u64 = *rax_25.byte_offset(0x10);
                rax_26 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h023f2f6694194809(rbx_3, r14_2, "unicodecaretinternal error: ente…", 7);
                
                if rax_26 == 0
                {
                    rax_27 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h023f2f6694194809(rbx_3, r14_2, "caretinternal error: entered unr…", 5);
                }
            }
            
            if rax_25 == 0 || (rax_26 == 0 && rax_27 == 0)
            {
                result_1 = &data_ac8310;
            }
            else
            {
                clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h5d802d13d527b428(&result_1, arg2, "binarychop-long-linesforce-color…", 6);
                let rax_28: *mut c_void =
                    clap_builder::parser::error::MatchesError::unwrap::hf7d617d7cf213b9e(
                    "binarychop-long-linesforce-color…", 6, &result_1);
                let mut rax_29: i8;
                let mut rax_30: i8;
                let mut r14_3: u64;
                
                if rax_28 != 0
                {
                    let rbx_4: i64 = *rax_28.byte_offset(8);
                    r14_3 = *rax_28.byte_offset(0x10);
                    rax_29 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h023f2f6694194809(rbx_4, r14_3, "as-textno-printinginternal error…", 7);
                    
                    if rax_29 == 0
                    {
                        rax_30 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h023f2f6694194809(rbx_4, r14_3, "no-printinginternal error: enter…", 0xb);
                    }
                }
                
                if rax_28 == 0 || (rax_29 == 0 && rax_30 == 0)
                {
                    result_1 = &data_ac8320;
                }
                else
                {
                    let r13_2: i8 = *arg2.byte_offset(0x38);
                    let mut var_430_1: i8;
                    
                    if r13_2 != 0 || rbp_2 == 1
                    {
                        var_430_1 = 1;
                        
                        if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0317c382272279ba(arg2, "chop-long-linesforce-colorizatio…", 0xf) != 0
                        {
                            goto 'label_7a6c54;
                        }
                        
                        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h5d802d13d527b428(&result_1, arg2, &data_480e94, 4);
                        let rax_32: *mut c_void =
                            clap_builder::parser::error::MatchesError::unwrap::hf7d617d7cf213b9e(
                            &data_480e94, 4, &result_1);
                        
                        if rax_32 == 0
                        {
                            'label_7a6c38:
                            var_430_1 = (
                                bat::style::StyleComponents::plain::hd9a4c06fd795483c(&var_2c8) ^ 1)
                                * 2;
                            goto 'label_7a6c54;
                        }
                        
                        let rbx_6: i64 = *rax_32.byte_offset(8);
                        r14_3 = *rax_32.byte_offset(0x10);
                        var_430_1 = 2;
                        
                        if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h023f2f6694194809(rbx_6, r14_3, "characterinternal error: entered…", 9) != 0
                        {
                            goto 'label_7a6c54;
                        }
                        
                        var_430_1 = 1;
                        
                        if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h023f2f6694194809(rbx_6, r14_3, "neverinternal error: entered unr…", 5) != 0
                        {
                            goto 'label_7a6c54;
                        }
                        
                        if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h023f2f6694194809(rbx_6, r14_3, &data_480130[0x28], 4) != 0
                        {
                            goto 'label_7a6c38;
                        }
                        
                        result_1 = &data_ac8330;
                    }
                    else
                    {
                        var_430_1 = 0;
                        'label_7a6c54:
                        let mut var_384_1: i8 = 1;
                        
                        if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0317c382272279ba(arg2, "force-colorizationcolordecoratio…", 0x12) != 0
                        {
                            goto 'label_7a6e05;
                        }
                        
                        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h5d802d13d527b428(&result_1, arg2, "colordecorationsstrip-ansiline-r…", 5);
                        let rax_38: *mut c_void =
                            clap_builder::parser::error::MatchesError::unwrap::hf7d617d7cf213b9e(
                            "colordecorationsstrip-ansiline-r…", 5, &result_1);
                        
                        if rax_38 == 0
                        {
                            result_1 = &data_ac8340;
                        }
                        else
                        {
                            let rbx_8: i64 = *rax_38.byte_offset(8);
                            r14_3 = *rax_38.byte_offset(0x10);
                            
                            if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h023f2f6694194809(rbx_8, r14_3, "alwaysneverinternal error: enter…", 6) != 0
                            {
                                goto 'label_7a6e05;
                            }
                            
                            if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h023f2f6694194809(rbx_8, r14_3, "neverinternal error: entered unr…", 5) != 0
                            {
                                var_384_1 = 0;
                                'label_7a6e05:
                                let var_3c7_1: i8 = 2;
                                result_1 = 0;
                                let var_3c0_1: i64 = 0;
                                let var_3b8_1: i8 = 0;
                                let var_3b0_1: i64 = 0;
                                let var_3a8_1: i64 = 1;
                                let var_3a0_1: i128 = {0};
                                let mut var_208: ();
                                console::term::Term::with_inner::h08ce7f4fcbf99d9f(&var_208, 
                                    &result_1);
                                let rax_44: u64 =
                                    console::unix_term::terminal_size::h248197736deb1abb(&var_208);
                                let mut r15_3: u64 = 0x50;
                                
                                if (rax_44 & 1) != 0
                                {
                                    r15_3 = rax_44 >> 0x20;
                                }
                                
                                if (rbp_2 & 1) != 0
                                {
                                    r15_3 = var_428_1;
                                }
                                
                                if r13_2 != 0
                                {
                                    var_428_1 = 0;
                                }
                                else
                                {
                                    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h5d802d13d527b428(&result_1, arg2, "colordecorationsstrip-ansiline-r…", 5);
                                    let rax_45: *mut c_void = clap_builder::parser::error::MatchesError::unwrap::hf7d617d7cf213b9e("colordecorationsstrip-ansiline-r…", 
                                        5, &result_1);
                                    let mut rax_46: i8;
                                    
                                    if rax_45 != 0
                                    {
                                        rax_46 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h023f2f6694194809(*rax_45.byte_offset(8), *rax_45.byte_offset(0x10), 
                                            "alwaysneverinternal error: enter…", 6);
                                    }
                                    
                                    if rax_45 != 0 && rax_46 != 0
                                    {
                                        var_428_1 = 0;
                                    }
                                    else
                                    {
                                        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h5d802d13d527b428(&result_1, arg2, "decorationsstrip-ansiline-ranged…", 0xb);
                                        let rax_47: *mut c_void = clap_builder::parser::error::MatchesError::unwrap::hf7d617d7cf213b9e(
                                            "decorationsstrip-ansiline-ranged…", 0xb, &result_1);
                                        let mut rax_48: i8;
                                        
                                        if rax_47 != 0
                                        {
                                            rax_48 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h023f2f6694194809(*rax_47.byte_offset(8), 
                                                *rax_47.byte_offset(0x10), 
                                                "alwaysneverinternal error: enter…", 6);
                                        }
                                        
                                        if rax_47 == 0 || rax_48 == 0
                                        {
                                            var_428_1 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0317c382272279ba(arg2, "force-colorizationcolordecoratio…", 
                                                0x12);
                                            let mut rax_50: i32;
                                            rax_50 = var_428_1 ^ 1;
                                            var_428_1 = rax_50;
                                        }
                                        else
                                        {
                                            var_428_1 = 0;
                                        }
                                    }
                                }
                                
                                clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h5d802d13d527b428(&result_1, arg2, "tabsgridQuitbyten", 4);
                                let rax_51: *mut c_void = clap_builder::parser::error::MatchesError::unwrap::hf7d617d7cf213b9e("tabsgridQuitbyten", 4, &result_1);
                                let mut rax_52: i64;
                                
                                if rax_51 != 0
                                {
                                    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(&result_1, rax_51);
                                    rax_52 = result_1;
                                    var_358 = var_417;
                                }
                                
                                let mut rbx_9: i8;
                                
                                if rax_51 != 0 && rax_52 != -0x8000000000000000
                                {
                                    var_417 = var_358;
                                    result_1 = rax_52;
                                    let mut rax_53: i8;
                                    let mut rdx_20: u64;
                                    rax_53 = bat::app::App::config::_$u7b$$u7b$closure$u7d$$u7d$::h6bf5bf8fe8f2fdd9(&result_1);
                                    rbx_9 = rax_53;
                                    r14_3 = rdx_20;
                                }
                                else
                                {
                                    rbx_9 = 0;
                                }
                                
                                let mut r13_4: u64 = ((
                                    bat::style::StyleComponents::plain::hd9a4c06fd795483c(&var_2c8)
                                    & var_420_1) ^ 1) << 2;
                                
                                if (rbx_9 & 1) != 0
                                {
                                    r13_4 = r14_3;
                                }
                                
                                clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h5d802d13d527b428(&result_1, arg2, "strip-ansiline-rangediff-context…", 0xa);
                                let rax_55: *mut c_void = clap_builder::parser::error::MatchesError::unwrap::hf7d617d7cf213b9e("strip-ansiline-rangediff-context…", 0xa, 
                                    &result_1);
                                
                                if rax_55 != 0
                                {
                                    let rbx_10: i64 = *rax_55.byte_offset(8);
                                    let r14_4: u64 = *rax_55.byte_offset(0x10);
                                    
                                    if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h023f2f6694194809(rbx_10, r14_4, "neverinternal error: entered unr…", 5) != 0
                                    {
                                        var_420_1 = false;
                                        'label_7a70d1:
                                        bat::app::App::theme_options::hebe2eab601f3d5a6(&result_1, 
                                            arg2);
                                        let mut var_138: ();
                                        bat::theme::theme::hd6a0a2911a872a37(&var_138, &result_1);
                                        let mut var_260: i128;
                                        _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h16c702d31d6ee83e(&var_260, &var_138);
                                        clap_builder::parser::matches::arg_matches::ArgMatches::try_contains_id::hb25688629026f228(&result_1, arg2, &data_480bb0, 4);
                                        let rax_59: bool = core::result::Result$LT$T$C$E$GT$::unwrap_or_default::h97a13622fc6075f0(result_1, *var_417[7]);
                                        let mut rax_60: i8;
                                        
                                        if rax_59 != 0
                                        {
                                            rax_60 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0317c382272279ba(arg2, &data_480bb0, 4);
                                        }
                                        
                                        let mut var_380_1: i64;
                                        let mut var_378_1: i64;
                                        
                                        if rax_59 != 0 && rax_60 != 0
                                        {
                                            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h5d802d13d527b428(&result_1, arg2, "diff-contextpageritalic-texthigh…", 
                                                0xc);
                                            let rax_61: *mut c_void = clap_builder::parser::error::MatchesError::unwrap::hf7d617d7cf213b9e(
                                                "diff-contextpageritalic-texthigh…", 0xc, 
                                                &result_1);
                                            let mut rax_62: i64;
                                            
                                            if rax_61 == 0
                                            {
                                                rax_62 = 2;
                                            }
                                            else
                                            {
                                                core::num::_$LT$impl$u20$usize$GT$::from_ascii_radix::he77532141bbadde7(&result_1, *rax_61.byte_offset(8), 
                                                    *rax_61.byte_offset(0x10));
                                                rax_62 = 2;
                                                
                                                if result_1 == 0
                                                {
                                                    rax_62 = *var_417[7];
                                                }
                                            }
                                            
                                            var_380_1 = rax_62;
                                            var_378_1 = -0x8000000000000000;
                                            goto 'label_7a7469;
                                        }
                                        
                                        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h5cb28e4b0036c6f1(&result_1, arg2, "line-rangediff-contextpageritali…", 0xa);
                                        let mut var_b0: i64;
                                        clap_builder::parser::error::MatchesError::unwrap::haed18dec1f11e146(&var_b0, "line-rangediff-contextpageritali…", 0xa, 
                                            &result_1);
                                        let mut rdx_24: i64 = -0x8000000000000000;
                                        
                                        if var_b0 == 0
                                        {
                                            goto 'label_7a7292;
                                        }
                                        
                                        core::iter::traits::iterator::Iterator::collect::h5e4b61fb5fe9cb97(&result_1, &var_b0);
                                        let result_3: u32 = result_1;
                                        let rdx_25: i32 = *var_417[3];
                                        let mut var_308: i32 = var_417;
                                        let rcx_22: i64 = *var_417[7];
                                        var_2f8 = var_417;
                                        var_358 = var_407;
                                        let var_348_3: i128 = var_3e8;
                                        rdx_24 = -0x8000000000000000;
                                        
                                        if result_3 == 0xe
                                        {
                                            goto 'label_7a7292;
                                        }
                                        
                                        if result_3 != 0xd
                                        {
                                            *arg1.byte_offset(0xc) = rdx_25;
                                            *arg1.byte_offset(9) = rdx_25;
                                            let var_1f8_1: i128 = var_2f8;
                                            let zmm0_13: i128 = var_358;
                                            *arg1.byte_offset(0x48) = var_3e0;
                                            *arg1.byte_offset(0x38) = var_348_3;
                                            *arg1.byte_offset(0x28) = zmm0_13;
                                            let var_178_2: i128 = var_1f8_1;
                                            *arg1.byte_offset(0x18) = var_1f8_1;
                                            arg1[1] = result_3;
                                            arg1[2] = rcx_22;
                                            *arg1 = 2;
                                            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h9a1f4db89f5bf603(&var_260);
                                            core::ptr::drop_in_place$LT$bat..syntax_mapping..SyntaxMapping$GT$::he4ebca74b2c0e804(&var_1b0);
                                            core::ptr::drop_in_place$LT$bat..style..StyleComponents$GT$::h231077cf22413a4b(var_2c8, *var_2c8[8]);
                                        }
                                        else
                                        {
                                            let var_1f8: i128 = var_2f8;
                                            rdx_24 = rcx_22;
                                            'label_7a7292:
                                            let mut var_278: i64;
                                            let mut rcx_23: i64;
                                            
                                            if rdx_24 != -0x8000000000000000
                                            {
                                                let mut var_e0: i64 = rdx_24;
                                                let var_d8_1: i128 = var_1f8;
                                                bat::line_range::LineRanges::from::h4ce85643fa8989ac(&result_1, &var_e0);
                                                rcx_23 = result_1;
                                                var_298 = var_417;
                                                var_290 = var_407;
                                                var_278 = *var_3f7[7];
                                            }
                                            
                                            let mut var_240: i64;
                                            
                                            if rdx_24 != -0x8000000000000000
                                                && rcx_23 != -0x8000000000000000
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
                                            let var_158: i128 = var_238;
                                            let var_148: i64 = var_228;
                                            let var_140_1: i64 = *var_228[8];
                                            'label_7a7469:
                                            let rax_69: i64 = var_2c8;
                                            let rax_70: i64 = *var_2c8[8];
                                            var_358 = var_1b0;
                                            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h5d802d13d527b428(&result_1, arg2, "pageritalic-texthighlight-linese…", 
                                                5);
                                            let rax_72: *mut c_void = clap_builder::parser::error::MatchesError::unwrap::hf7d617d7cf213b9e(
                                                "pageritalic-texthighlight-linese…", 5, &result_1);
                                            let mut var_268_1: i64;
                                            let mut var_1c8: i64;
                                            
                                            if rax_72 == 0
                                            {
                                                var_268_1 = 0;
                                            }
                                            else
                                            {
                                                var_268_1 = *rax_72.byte_offset(8);
                                                var_1c8 = *rax_72.byte_offset(0x10);
                                            }
                                            
                                            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h5d802d13d527b428(&result_1, arg2, "italic-texthighlight-lineset-ter…", 
                                                0xb);
                                            let rax_74: *mut c_void = clap_builder::parser::error::MatchesError::unwrap::hf7d617d7cf213b9e(
                                                "italic-texthighlight-lineset-ter…", 0xb, 
                                                &result_1);
                                            let mut rbx_12: i8;
                                            
                                            if rax_74 == 0
                                            {
                                                rbx_12 = 0;
                                            }
                                            else
                                            {
                                                rbx_12 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h023f2f6694194809(*rax_74.byte_offset(8), 
                                                    *rax_74.byte_offset(0x10), 
                                                    "alwaysneverinternal error: enter…", 6);
                                            }
                                            
                                            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h5cb28e4b0036c6f1(&result_1, arg2, "highlight-lineset-terminal-title…", 
                                                0xe);
                                            let mut var_70: i64;
                                            clap_builder::parser::error::MatchesError::unwrap::haed18dec1f11e146(&var_70, "highlight-lineset-terminal-title…", 0xe, 
                                                &result_1);
                                            let mut rdx_29: i64 = -0x8000000000000000;
                                            
                                            if var_70 == 0
                                            {
                                                goto 'label_7a7680;
                                            }
                                            
                                            core::iter::traits::iterator::Iterator::collect::h5e4b61fb5fe9cb97(&result_1, &var_70);
                                            let result_4: u32 = result_1;
                                            let rdx_30: i32 = *var_417[3];
                                            let var_310_1: i32 = var_417;
                                            let rcx_27: i64 = *var_417[7];
                                            var_308 = var_417;
                                            var_248 = var_407;
                                            let var_238_1: i128 = var_3e8;
                                            rdx_29 = -0x8000000000000000;
                                            
                                            if result_4 == 0xe
                                            {
                                                goto 'label_7a7680;
                                            }
                                            
                                            if result_4 != 0xd
                                            {
                                                *arg1.byte_offset(0xc) = rdx_30;
                                                *arg1.byte_offset(9) = rdx_30;
                                                let var_1d8_1: i128 = var_308;
                                                let zmm0_14: i128 = var_248;
                                                *arg1.byte_offset(0x48) = var_3e0;
                                                *arg1.byte_offset(0x38) = var_238_1;
                                                *arg1.byte_offset(0x28) = zmm0_14;
                                                let var_168_2: i128 = var_1d8_1;
                                                *arg1.byte_offset(0x18) = var_1d8_1;
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
                                                let var_1d8: i128 = var_308;
                                                rdx_29 = rcx_27;
                                                'label_7a7680:
                                                let mut rax_76: i64;
                                                
                                                if rdx_29 != -0x8000000000000000
                                                {
                                                    let mut var_c8: i64 = rdx_29;
                                                    let var_c0_1: i128 = var_1d8;
                                                    bat::line_range::LineRanges::from::h4ce85643fa8989ac(&result_1, &var_c8);
                                                    rax_76 = result_1;
                                                    var_2f8 = var_417;
                                                    var_2e8 = var_407;
                                                }
                                                
                                                if rdx_29 != -0x8000000000000000
                                                    && rax_76 != -0x8000000000000000
                                                {
                                                    let var_270_1: i64 = *var_3f7[7];
                                                    let var_280_1: i128 = var_2e8;
                                                    var_290 = var_2f8;
                                                    var_298 = rax_76;
                                                }
                                                else
                                                {
                                                    _$LT$bat..line_range..HighlightedLineRanges$u20$as$u20$core..default..Default$GT$::default::h7c4db8484c3fd9e6(&var_298);
                                                }
                                                
                                                let rax_77: i8 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0317c382272279ba(arg2, "no-custom-assets", 0x10);
                                                let rax_78: i8 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0317c382272279ba(arg2, 
                                                    "set-terminal-titlesqueeze-blanks…", 0x12);
                                                let mut rax_79: u64 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0317c382272279ba(arg2, 
                                                    "squeeze-blanksqueeze-limitshow-n…", 0xd);
                                                let mut rcx_30: i64;
                                                
                                                if rax_79 == 0
                                                {
                                                    rcx_30 = 0;
                                                }
                                                else
                                                {
                                                    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::ha431f453fb58dda6(&result_1, arg2);
                                                    let rax_80: *mut u64 = clap_builder::parser::error::MatchesError::unwrap::ha7b9f23eec8b2665(&result_1);
                                                    rcx_30 = 1;
                                                    
                                                    if rax_80 == 0
                                                    {
                                                        rax_79 = 1;
                                                    }
                                                    else
                                                    {
                                                        rax_79 = *rax_80;
                                                    }
                                                }
                                                
                                                *arg1.byte_offset(0xe0) = var_3f7;
                                                *arg1.byte_offset(0xd0) = var_2b8_1;
                                                *arg1.byte_offset(0xb0) = var_148;
                                                *arg1.byte_offset(0xa0) = var_158;
                                                let var_250: i64;
                                                arg1[4] = var_250;
                                                *arg1.byte_offset(0x10) = var_260;
                                                let var_180: i64;
                                                arg1[0xb] = var_180;
                                                *arg1.byte_offset(0x28) = var_358;
                                                let var_1a0: i128;
                                                *arg1.byte_offset(0x38) = var_1a0;
                                                let var_190: i128;
                                                *arg1.byte_offset(0x48) = var_190;
                                                *arg1.byte_offset(0x60) = var_298;
                                                *arg1.byte_offset(0x70) = var_290;
                                                *arg1.byte_offset(0x80) = var_278;
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
                                                *arg1.byte_offset(0x121) = rax_26;
                                                *arg1.byte_offset(0x122) = rax_29;
                                                *arg1.byte_offset(0x123) = var_428_1;
                                                *arg1.byte_offset(0x124) = var_384_1;
                                                *arg1.byte_offset(0x125) = rax_21;
                                                *arg1.byte_offset(0x126) = rbx_12;
                                                *arg1.byte_offset(0x127) = rax_77 ^ 1;
                                                arg1[0x25] = rax_78;
                                                *arg1.byte_offset(0x129) = var_430_1;
                                                *arg1.byte_offset(0x12a) = var_42c_1;
                                                *arg1.byte_offset(0x12b) = var_420_1;
                                            }
                                        }
                                        
                                        core::ptr::drop_in_place$LT$bat..theme..ThemeResult$GT$::hee0120026735ea18(&var_138);
                                        return core::ptr::drop_in_place$LT$console..term..Term$GT$::h54745c4d207f6101(&var_208);
                                    }
                                    
                                    var_420_1 = true;
                                    
                                    if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h023f2f6694194809(rbx_10, r14_4, "alwaysneverinternal error: enter…", 6) != 0
                                    {
                                        goto 'label_7a70d1;
                                    }
                                    
                                    var_420_1 = true;
                                    
                                    if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h023f2f6694194809(rbx_10, r14_4, &data_480130[0x28], 4) != 0
                                    {
                                        goto 'label_7a70d1;
                                    }
                                }
                                
                                result_1 = &data_ac8350;
                                *var_417[7] = 1;
                                *var_417[0xf] = &var_438;
                                var_407 = {0};
                                core::panicking::panic_fmt::h96f341d36638c225(&result_1);
                                /* no return */
                            }
                            
                            if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h023f2f6694194809(rbx_8, r14_3, &data_480130[0x28], 4) != 0
                            {
                                let mut rdx_16: i8 = 0;
                                
                                if bat::app::env_no_color::hf40fc7450e3b701f() == 0
                                {
                                    rdx_16 = r13_2;
                                }
                                
                                var_384_1 = rdx_16;
                                goto 'label_7a6e05;
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
        
        let var_218: i128;
        *var_329[1] = var_218;
        let var_338_2: i128 = var_228;
        let var_348_2: i128 = var_238;
        var_358 = var_248;
        
        loop
        {
            let rax_18: *mut c_void = _$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..iter..traits..double_ended..DoubleEndedIterator$GT$::next_back::h099ff02bef59ebfe(&var_358);
            
            if rax_18 == 0
            {
                rbx_2 = arg2;
                goto 'label_7a698e;
            }
            
            let r15_1: i64 = *rax_18.byte_offset(0x10);
            _$LT$char$u20$as$u20$core..str..pattern..Pattern$GT$::into_searcher::h19abee4db16fb58d(
                &*var_417[0xf], 0x3a, *rax_18.byte_offset(8), r15_1);
            result_1 = 0;
            *var_417[7] = r15_1;
            *var_3e0[8] = 1;
            core::iter::traits::iterator::Iterator::collect::h10fcc277f47be893(&var_2f8, &result_1);
            let mut r15_2: *mut i64;
            let var_2f0: *mut i64;
            
            if var_2e8 != 2
            {
                _$LT$bat..error..Error$u20$as$u20$core..convert..From$LT$$RF$str$GT$$GT$::from::h8ad35b8946c9894b(&result_1, "Invalid syntax mapping. The form…", 0x7d);
                *arg1.byte_offset(0x48) = var_3e0;
                let zmm0_9: i128 = result_1;
                let zmm1_4: i128 = var_417;
                *arg1.byte_offset(0x38) = var_3e8;
                *arg1.byte_offset(0x28) = var_407;
                *arg1.byte_offset(0x18) = zmm1_4;
                *arg1.byte_offset(8) = zmm0_9;
                *arg1 = 2;
                r15_2 = var_2f0;
            }
            else
            {
                r15_2 = var_2f0;
                let rdx_6: i64 = *r15_2;
                let rcx_8: i64 = r15_2[1];
                var_290 = *r15_2.byte_offset(0x10);
                var_298 = 0;
                bat::syntax_mapping::SyntaxMapping::insert::hdeec58fa484a3ff4(&result_1, &var_1b0, 
                    rdx_6, rcx_8, &var_298);
                let result_2: i8 = result_1;
                
                if result_2 != 0xd
                {
                    *arg1.byte_offset(0x48) = var_3e0;
                    let zmm0_6: i128 = var_417;
                    *arg1.byte_offset(0x39) = *var_3e8[1];
                    *arg1.byte_offset(0x29) = var_3f7;
                    *arg1.byte_offset(0x19) = var_407;
                    *arg1.byte_offset(9) = zmm0_6;
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
    core::ptr::drop_in_place$LT$bat..style..StyleComponents$GT$::h231077cf22413a4b(var_2c8, 
        *var_2c8[8])
}
