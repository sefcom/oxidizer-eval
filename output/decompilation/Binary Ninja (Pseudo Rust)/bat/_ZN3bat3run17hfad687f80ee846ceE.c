
  fn bat::run::hfad687f80ee846ce(arg1: *mut i128) -> i64

{
    let mut result_1: i8;
    bat::app::App::new::h327fd37a294c175c(&result_1);
    let result: i8 = result_1;
    let mut var_487: i128;
    let mut var_477: i128;
    let var_467: i128;
    let var_457: i128;
    let var_448: i64;
    let var_440: i64;
    let mut var_2e8: i128;
    
    if result != 0xd
    {
        let var_2c8_1: i128 = var_467;
        let var_2d8_1: i128 = var_477;
        var_2e8 = var_487;
        arg1[4] = var_448;
        *arg1.byte_offset(0x31) = var_457;
        *arg1.byte_offset(0x21) = var_467;
        *arg1.byte_offset(0x11) = var_477;
        *arg1.byte_offset(1) = var_487;
        *arg1 = result;
        *arg1.byte_offset(0x48) = var_440;
        return result;
    }
    
    let mut var_2b8: i128 = var_457;
    let mut var_328: i128 = var_487;
    let var_318_1: i128 = var_477;
    let var_308_1: i128 = var_467;
    let var_2f8_1: *mut c_void = var_457;
    let rax: *mut c_void = once_cell::sync::OnceCell$LT$T$GT$::get_or_try_init::h4a2043b54d938a06();
    let r13_1: i64 = *rax.byte_offset(0x20);
    let r12_1: u64 = *rax.byte_offset(0x28);
    let rax_1: *mut c_void =
        once_cell::sync::OnceCell$LT$T$GT$::get_or_try_init::h4a2043b54d938a06();
    let r15_1: i64 = *rax_1.byte_offset(8);
    let r14_1: u64 = *rax_1.byte_offset(0x10);
    
    if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0317c382272279ba(
        &var_328, "diagnosticdiagnosticsShow diagno…", 0xa) == 0
    {
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h5d802d13d527b428(
            &result_1, &var_328, "completionSHELLps1zshShow shell …", 0xa);
        let rax_3: *mut c_void =
            clap_builder::parser::error::MatchesError::unwrap::hf7d617d7cf213b9e(
            "completionSHELLps1zshShow shell …", 0xa, &result_1);
        
        if rax_3 != 0
        {
            let mut var_1a0: *mut c_void = rax_3;
            let r14_2: i64 = *rax_3.byte_offset(8);
            let r15_2: u64 = *rax_3.byte_offset(0x10);
            
            if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h023f2f6694194809(r14_2, r15_2, "bashHOME=", 4) == 0
            {
                if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h023f2f6694194809(r14_2, r15_2, "fish\x1b[2m to l", 4) == 0
                {
                    if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h023f2f6694194809(r14_2, r15_2, "ps1zshShow shell completion for …", 3) == 0
                    {
                        if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h023f2f6694194809(r14_2, r15_2, "zshShow shell completion for a c…", 3) == 0
                        {
                            var_2e8 = &var_1a0;
                            *var_2e8[8] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hd51f51133805f7eb;
                            result_1 = &data_ac8a30;
                            *var_487[7] = 2;
                            *var_477[0xf] = 0;
                            *var_487[0xf] = &var_2e8;
                            *var_477[7] = 1;
                            core::panicking::panic_fmt::h96f341d36638c225(&result_1);
                            /* no return */
                        }
                        
                        var_2e8 = &data_ac8a68;
                        *var_2e8[8] =
                            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf38b2ed4feebf29b;
                        result_1 = &data_ac8198;
                        *var_487[7] = 2;
                        *var_477[0xf] = 0;
                        *var_487[0xf] = &var_2e8;
                        *var_477[7] = 1;
                        std::io::stdio::_print::h5e446ff973c02de6(&result_1);
                    }
                    else
                    {
                        var_2e8 = &data_ac8a78;
                        *var_2e8[8] =
                            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf38b2ed4feebf29b;
                        result_1 = &data_ac8198;
                        *var_487[7] = 2;
                        *var_477[0xf] = 0;
                        *var_487[0xf] = &var_2e8;
                        *var_477[7] = 1;
                        std::io::stdio::_print::h5e446ff973c02de6(&result_1);
                    }
                }
                else
                {
                    var_2e8 = &data_ac8a88;
                    *var_2e8[8] =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf38b2ed4feebf29b;
                    result_1 = &data_ac8198;
                    *var_487[7] = 2;
                    *var_477[0xf] = 0;
                    *var_487[0xf] = &var_2e8;
                    *var_477[7] = 1;
                    std::io::stdio::_print::h5e446ff973c02de6(&result_1);
                }
            }
            else
            {
                var_2e8 = &data_ac8a98;
                *var_2e8[8] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf38b2ed4feebf29b;
                result_1 = &data_ac8198;
                *var_487[7] = 2;
                *var_477[0xf] = 0;
                *var_487[0xf] = &var_2e8;
                *var_477[7] = 1;
                std::io::stdio::_print::h5e446ff973c02de6(&result_1);
            }
            
            *arg1 = 0x10d;
        }
        else
        {
            let mut var_430: i64;
            let mut var_2d8: i128;
            let mut var_290: i64;
            let mut var_168: i64;
            let mut result_2: i8;
            
            if var_2f8_1 == 0
            {
                'label_7afd8e:
                bat::app::App::inputs::h986c81333c797273(&result_1, &var_328);
                result_2 = result_1;
                
                if result_2 != 0xd
                {
                    var_2e8 = var_487;
                    var_2e8 = var_487;
                    arg1[4] = var_448;
                    arg1[3] = var_467;
                    arg1[2] = var_477;
                    arg1[1] = var_2e8;
                    *arg1.byte_offset(1) = var_2e8;
                    *arg1 = result_2;
                }
                else
                {
                    let rcx_5: u64 = *var_477[7];
                    *var_2d8[7] = rcx_5;
                    let mut var_1b8: i128 = var_487;
                    let var_1a8_1: u64 = rcx_5;
                    let mut rbp_1: *mut c_void;
                    rbp_1 = 1;
                    bat::app::App::config::h9e58ffef9d69ebd5(&result_1, &var_328, *var_1b8[8], 
                        rcx_5);
                    let mut rbp_3: i64 = result_1;
                    var_2e8 = var_487;
                    let mut var_2a9: i64;
                    *var_2a9[1] = var_440;
                    
                    if rbp_3 != 2
                    {
                        let mut var_110: ();
                        memcpy(&var_110, &var_430, 0xd8);
                        let var_160_1: i128 = var_2e8;
                        let var_150_1: i128 = var_477;
                        let var_140_1: i128 = var_467;
                        let var_130_1: i128 = var_457;
                        let var_120_1: i128 = *var_2a9[1];
                        var_168 = rbp_3;
                        rbp_3 = 1;
                        let mut var_4a8: i128;
                        let mut var_358: i128;
                        let mut result_3: i8;
                        
                        if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0317c382272279ba(&var_328, "list-languagesDisplay a list of …", 0xe) == 0
                        {
                            if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0317c382272279ba(&var_328, "list-themesignored-suffixmap-syn…", 0xb) != 0
                            {
                                bat::list_themes::he3fdf7b32bedf917(&result_1, &var_168, r13_1, 
                                    r12_1, r15_1, r14_1);
                                'label_7b0452:
                                result_3 = result_1;
                                
                                if result_3 == 0xd
                                {
                                    goto 'label_7b0659;
                                }
                                
                                arg1[4] = var_448;
                                *arg1.byte_offset(0x31) = var_457;
                                *arg1.byte_offset(0x21) = var_467;
                                *arg1.byte_offset(0x11) = var_477;
                                *arg1.byte_offset(1) = var_487;
                                goto 'label_7b0581;
                            }
                            
                            if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0317c382272279ba(&var_328, "config-fileShow path to the conf…", 0xb) == 0
                            {
                                if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0317c382272279ba(&var_328, "generate-config-fileGenerates a …", 0x14) != 0
                                {
                                    bat::config::generate_config_file::hc481a22fd82623a6(&result_1);
                                    goto 'label_7b0452;
                                }
                                
                                let mut rax_28: *mut c_void;
                                
                                if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0317c382272279ba(&var_328, "config-dirShow bat's configurati…", 0xa) != 0
                                {
                                    std::io::stdio::stdout::hb6a8e10bcccf3287();
                                    var_4a8 = &std::io::stdio::STDOUT::h411b213c5c9add46;
                                    alloc::string::String::from_utf8_lossy::h880ad8b337de96e9(
                                        &var_2e8, r13_1, r12_1);
                                    var_358 = &var_2e8;
                                    *var_358[8] = _$LT$alloc..borrow..Cow$LT$B$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::ha152f904fae7110e;
                                    result_1 = &data_ac8198;
                                    *var_487[7] = 2;
                                    *var_477[0xf] = 0;
                                    *var_487[0xf] = &var_358;
                                    *var_477[7] = 1;
                                    rax_28 = _$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::write_fmt::h3907d576e608aa2a(&var_4a8, &result_1);
                                    'label_7b07ef:
                                    
                                    if rax_28 == 0
                                    {
                                        core::ptr::drop_in_place$LT$regex..error..Error$GT$::h466767d2e8f86b90(&var_2e8);
                                        goto 'label_7b0659;
                                    }
                                    
                                    *arg1 = 0;
                                    *arg1.byte_offset(8) = rax_28;
                                    core::ptr::drop_in_place$LT$regex..error..Error$GT$::h466767d2e8f86b90(&var_2e8);
                                    goto 'label_7b0583;
                                }
                                
                                if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0317c382272279ba(&var_328, "cache-dirShow bat's cache direct…", 9) != 0
                                {
                                    std::io::stdio::stdout::hb6a8e10bcccf3287();
                                    var_4a8 = &std::io::stdio::STDOUT::h411b213c5c9add46;
                                    alloc::string::String::from_utf8_lossy::h880ad8b337de96e9(
                                        &var_2e8, r15_1, r14_1);
                                    var_358 = &var_2e8;
                                    *var_358[8] = _$LT$alloc..borrow..Cow$LT$B$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::ha152f904fae7110e;
                                    result_1 = &data_ac8198;
                                    *var_487[7] = 2;
                                    *var_477[0xf] = 0;
                                    *var_487[0xf] = &var_358;
                                    *var_477[7] = 1;
                                    rax_28 = _$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::write_fmt::h3907d576e608aa2a(&var_4a8, &result_1);
                                    goto 'label_7b07ef;
                                }
                                
                                if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0317c382272279ba(&var_328, "acknowledgements", 0x10) == 0
                                {
                                    rbp_3 = 0;
                                    bat::run_controller::h65ffee36574b1229(arg1, &var_1b8, 
                                        &var_168, r15_1, r14_1);
                                    goto 'label_7b0669;
                                }
                                
                                std::io::stdio::stdout::hb6a8e10bcccf3287();
                                var_4a8 = &std::io::stdio::STDOUT::h411b213c5c9add46;
                                bat::assets::get_acknowledgements::hbf428ea9339ec1ee(&var_2e8);
                                var_358 = &var_2e8;
                                *var_358[8] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                                result_1 = &data_ac8198;
                                *var_487[7] = 2;
                                *var_477[0xf] = 0;
                                *var_487[0xf] = &var_358;
                                *var_477[7] = 1;
                                let rax_31: *mut c_void = _$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::write_fmt::h3907d576e608aa2a(&var_4a8, &result_1);
                                
                                if rax_31 == 0
                                {
                                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h9a1f4db89f5bf603(&var_2e8);
                                    goto 'label_7b0659;
                                }
                                
                                *arg1 = 0;
                                *arg1.byte_offset(8) = rax_31;
                                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h9a1f4db89f5bf603(&var_2e8);
                                goto 'label_7b0583;
                            }
                            
                            bat::config::config_file::h4b67a380f7fc9337(&var_2e8);
                            alloc::string::String::from_utf8_lossy::h880ad8b337de96e9(&var_358, 
                                *var_2e8[8], var_477);
                            var_4a8 = &var_358;
                            *var_4a8[8] = _$LT$alloc..borrow..Cow$LT$B$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::ha152f904fae7110e;
                            result_1 = &data_ac8198;
                            *var_487[7] = 2;
                            *var_477[0xf] = 0;
                            *var_487[0xf] = &var_4a8;
                            *var_477[7] = 1;
                            std::io::stdio::_print::h5e446ff973c02de6(&result_1);
                            core::ptr::drop_in_place$LT$regex..error..Error$GT$::h466767d2e8f86b90(
                                &var_358);
                            core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hd0005799f5f2e1be(
                                &var_2e8);
                            'label_7b0659:
                            *arg1 = 0x10d;
                            'label_7b065e:
                            rbp_3 = 1;
                            'label_7b0669:
                            core::ptr::drop_in_place$LT$bat..config..Config$GT$::h23bd1f0acbc51dc0(
                                &var_168);
                            
                            if rbp_3 != 0
                            {
                                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$bat..input..Input$GT$$GT$::ha5b8727e1c389dbc(&var_1b8);
                            }
                        }
                        else
                        {
                            bat::get_languages::h1e50ad077ebe9108(&result_1, &var_168);
                            result_3 = result_1;
                            
                            if result_3 == 0xd
                            {
                                var_4a8 = var_487;
                                let rax_12: u64 =
                                    alloc::alloc::Global::alloc_impl::h6fb1b6049873c120(8, 0xa0);
                                
                                if rax_12 == 0
                                {
                                    alloc::alloc::handle_alloc_error::h88aa4f4f9d19c4f9();
                                    /* no return */
                                }
                                
                                bat::input::Input::from_reader::h5c93c8a2e0344023(&result_1, 
                                    alloc::boxed::Box$LT$T$GT$::new::h3b468e1915e64a74(*var_4a8[8], 
                                        *var_477[7]), 
                                    &data_ac8aa8);
                                memcpy(rax_12, &result_1, 0xa0);
                                let mut var_180: i64 = 1;
                                let var_178_1: u64 = rax_12;
                                let var_170_1: i64 = 1;
                                let mut rax_14: i64;
                                let mut rdx_6: i64;
                                rax_14 = bat::style::StyleComponent::components::h6c8afe9a5a433675(
                                    0xb, 0);
                                bat::style::StyleComponents::new::hd7c50f42a61a1b67(&var_358, 
                                    rax_14, rdx_6);
                                _$LT$bat..config..Config$u20$as$u20$core..default..Default$GT$::default::hd49ca985e91849ed(&result_1);
                                let var_398: i64;
                                let var_1f8_1: i64 = var_398;
                                let var_390: i128;
                                let var_1f0_1: i128 = var_390;
                                let var_380: i64;
                                let var_1e0_1: i64 = var_380;
                                let var_228_1: i128 = var_358;
                                let var_348: i128;
                                let var_218_1: i128 = var_348;
                                let var_338: i128;
                                let var_208_1: i128 = var_338;
                                let var_35f: i8;
                                let var_1bf_1: i8 = var_35f;
                                let var_1be_1: i8 = 1;
                                let var_3f8: i128;
                                let var_258_1: i128 = var_3f8;
                                let var_3e8: i128;
                                let var_248_1: i128 = var_3e8;
                                let var_3d8: i128;
                                let var_238_1: i128 = var_3d8;
                                let mut var_2c8_2: i128;
                                var_2c8_2 = *var_477[0xf];
                                let var_2d8_3: i128 = var_487;
                                var_2c8_2 = var_467;
                                let var_2b8_2: i128 = var_457;
                                let var_2a0_1: i128 = var_440;
                                var_290 = var_430;
                                let var_378: i128;
                                let var_1d8_1: i128 = var_378;
                                let var_428: i128;
                                let var_288_1: i128 = var_428;
                                let var_418: i128;
                                let var_278_1: i128 = var_418;
                                let var_408: i128;
                                let var_268_1: i128 = var_408;
                                let var_368: i64;
                                let var_1c8_1: i64 = var_368;
                                let var_360: i8;
                                let var_1c0_1: i8 = var_360;
                                var_2e8 = result_1;
                                let var_35d: i8;
                                let var_1bd_1: i8 = var_35d;
                                let var_3c8: i64;
                                let var_3c0: i64;
                                core::ptr::drop_in_place$LT$bat..style..StyleComponents$GT$::h231077cf22413a4b(var_3c8, var_3c0);
                                bat::run_controller::h65ffee36574b1229(arg1, &var_180, &var_2e8, 
                                    r15_1, r14_1);
                                core::ptr::drop_in_place$LT$bat..config..Config$GT$::h23bd1f0acbc51dc0(&var_2e8);
                                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h9a1f4db89f5bf603(&var_4a8);
                                goto 'label_7b065e;
                            }
                            
                            var_2e8 = var_487;
                            var_2e8 = var_487;
                            arg1[4] = var_448;
                            arg1[3] = var_467;
                            arg1[2] = var_477;
                            arg1[1] = var_2e8;
                            *arg1.byte_offset(1) = var_2e8;
                            'label_7b0581:
                            *arg1 = result_3;
                            'label_7b0583:
                            rbp_3 = 1;
                            core::ptr::drop_in_place$LT$bat..config..Config$GT$::h23bd1f0acbc51dc0(
                                &var_168);
                            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$bat..input..Input$GT$$GT$::ha5b8727e1c389dbc(&var_1b8);
                        }
                    }
                    else
                    {
                        arg1[4] = *var_2a9[1];
                        let zmm0_3: i128 = var_2e8;
                        arg1[3] = var_457;
                        arg1[2] = var_467;
                        arg1[1] = var_477;
                        *arg1 = zmm0_3;
                        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$bat..input..Input$GT$$GT$::ha5b8727e1c389dbc(&var_1b8);
                    }
                }
            }
            else
            {
                if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h023f2f6694194809(*var_2f8_1.byte_offset(8), *var_2f8_1.byte_offset(0x10), 
                    "cachesrc/bin/bat/app.rsCould not…", 5) == 0
                {
                    goto 'label_7afd8e;
                }
                
                if clap_builder::parser::matches::arg_matches::ArgMatches::args_present::h8e412d44bc177efc(var_2f8_1.byte_offset(0x18)) == 0
                {
                    let rax_23: u64 = alloc::alloc::Global::alloc_impl::h6fb1b6049873c120(8, 0xa0);
                    
                    if rax_23 == 0
                    {
                        alloc::alloc::handle_alloc_error::h88aa4f4f9d19c4f9();
                        /* no return */
                    }
                    
                    bat::input::Input::ordinary_file::h6adabfa2ef310a5d(&result_1);
                    memcpy(rax_23, &result_1, 0xa0);
                    let mut var_198: i64 = 1;
                    let var_190_1: u64 = rax_23;
                    let var_188_1: i64 = 1;
                    bat::app::App::config::h9e58ffef9d69ebd5(&result_1, &var_328, rax_23, 1);
                    let r12_4: i64 = result_1;
                    var_168 = var_487;
                    let mut zmm0_7: i128 = var_440;
                    
                    if r12_4 != 2
                    {
                        memcpy(&var_290, &var_430, 0xd8);
                        var_2e8 = var_168;
                        var_2d8 = var_477;
                        let var_2c8: i128 = var_467;
                        var_2b8 = var_457;
                        let var_2a0_2: i128 = zmm0_7;
                        var_2e8 = r12_4;
                        bat::run_controller::h65ffee36574b1229(arg1, &var_198, &var_2e8, r15_1, 
                            r14_1);
                        core::ptr::drop_in_place$LT$bat..config..Config$GT$::h23bd1f0acbc51dc0(
                            &var_2e8);
                    }
                    else
                    {
                        arg1[4] = zmm0_7;
                        zmm0_7 = var_168;
                        arg1[3] = var_457;
                        arg1[2] = var_467;
                        arg1[1] = var_477;
                        *arg1 = zmm0_7;
                        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$bat..input..Input$GT$$GT$::ha5b8727e1c389dbc(&var_198);
                    }
                }
                else
                {
                    bat::run_cache_subcommand::hfde70ac826b76eb1(&result_1, 
                        var_2f8_1.byte_offset(0x18), r13_1, r12_1, r15_1, r14_1);
                    result_2 = result_1;
                    
                    if result_2 == 0xd
                    {
                        *arg1 = 0x10d;
                    }
                    else
                    {
                        arg1[4] = var_448;
                        *arg1.byte_offset(0x31) = var_457;
                        *arg1.byte_offset(0x21) = var_467;
                        *arg1.byte_offset(0x11) = var_477;
                        *arg1.byte_offset(1) = var_487;
                        *arg1 = result_2;
                    }
                }
            }
        }
    }
    else
    {
        bat::invoke_bugreport::hbb57d0e784864937(&var_328, r15_1, r14_1);
        *arg1 = 0x10d;
    }
    
    core::ptr::drop_in_place$LT$bat..app..App$GT$::h2117e8e13922e45b(&var_328)
}
