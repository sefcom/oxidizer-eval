
  fn uu_dircolors::uumain::uumain::h64bd80dba95c0b42(arg1: *mut *mut c_void) -> u64

{
    let mut var_3b8: *mut *mut c_void;
    uu_dircolors::uu_app::h0ca3ae80d0f731e8(&var_3b8);
    let mut var_490: *mut *mut c_void;
    clap_builder::builder::command::Command::try_get_matches_from::h7b1766bd96ab2d71(&var_490, 
        &var_3b8, arg1);
    let rax: *mut *mut c_void = var_490;
    let var_488: i64;
    
    if -(rax) == -0x8000000000000000
    {
        /* tailcall */
        return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he92a37de32738e67(var_488);
    }
    
    let var_460: i64;
    let var_3d0: i64 = var_460;
    let var_470: i128;
    let var_3e0: i128 = var_470;
    let mut var_480: i128;
    let var_3f0: i128 = var_480;
    let mut var_400: *mut *mut c_void = rax;
    let var_3f8: i64 = var_488;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::hebd739a8be5302e3(
        &var_3b8, &var_400);
    clap_builder::parser::error::MatchesError::unwrap::h7d8a42b146f21d46(&var_490, &var_3b8);
    var_3b8 = nullptr;
    let var_3b0: *mut *mut c_void = 8;
    let var_3a8: i64 = 0;
    let mut var_428: i64;
    core::option::Option$LT$T$GT$::map_or::h22cc3115edbc3910(&var_428, &var_490, &var_3b8);
    let rax_2: i8 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
        &var_400, "c-shellbourne-shellprint-databas…", 7);
    let mut rax_3: i8;
    
    if rax_2 == 0
    {
        rax_3 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            &var_400, "bourne-shellprint-databaseprint-…", 0xc);
    }
    
    let mut rax_4: i8;
    let mut rax_5: i8;
    
    if rax_2 != 0 || rax_3 != 0
    {
        rax_4 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            &var_400, "print-databaseprint-ls-colors/ho…", 0xe);
        
        if rax_4 == 0
        {
            rax_5 =
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
                &var_400, "print-ls-colors/home/34r7hm4n/.r…", 0xf);
        }
    }
    
    let mut result: u64;
    let var_420: *mut *mut c_void;
    let mut result_1: u64;
    
    if (rax_2 == 0 && rax_3 == 0) || (rax_4 == 0 && rax_5 == 0)
    {
        let rax_8: i8 =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            &var_400, "print-databaseprint-ls-colors/ho…", 0xe);
        let mut rax_9: i8;
        
        if rax_8 != 0
        {
            rax_9 =
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
                &var_400, "print-ls-colors/home/34r7hm4n/.r…", 0xf);
        }
        
        if rax_8 != 0 && rax_9 != 0
        {
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hfa910bc67f7961e5(&var_490, "options --print-database and --p…", 0x45);
            let var_3a8_2: i64 = var_480;
            var_3b8 = var_490;
            let var_3a0_2: i32 = 1;
            result_1 = alloc::boxed::Box$LT$T$GT$::new::h37964118bcf75eed(&var_3b8);
            goto 'label_45fd18;
        }
        
        let mut var_450: *mut i64;
        let var_418: i64;
        let mut var_3a0: i32;
        
        if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            &var_400, "print-databaseprint-ls-colors/ho…", 0xe) == 0
        {
            let mut rax_16: i8 = 1;
            
            if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
                &var_400, "c-shellbourne-shellprint-databas…", 7) != 0
            {
                goto 'label_460016;
            }
            
            let mut var_491: i8;
            let mut result_2: u64;
            
            if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
                &var_400, "bourne-shellprint-databaseprint-…", 0xc) == 0
            {
                rax_16 = 2;
                
                if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(&var_400, "print-ls-colors/home/34r7hm4n/.r…", 0xf) != 0
                {
                    goto 'label_460016;
                }
                
                var_491 = 3;
                rax_16 = uu_dircolors::guess_syntax::h7a704cd20b6b2f5b();
                
                if rax_16 != 3
                {
                    goto 'label_460016;
                }
                
                _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hfa910bc67f7961e5(&var_490, "no SHELL environment variable, a…", 0x3d);
                let var_3a8_6: i64 = var_480;
                var_3b8 = var_490;
                let var_3a0_4: i32 = 1;
                result_2 = alloc::boxed::Box$LT$T$GT$::new::h37964118bcf75eed(&var_3b8);
                'label_46032b:
                result = result_2;
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$usize$GT$$GT$::hadb3ca9fd0739737(
                    var_428, var_420);
                core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h8406cbe15c6891aa(&var_400);
            }
            else
            {
                rax_16 = 0;
                'label_460016:
                var_491 = rax_16;
                
                if var_418 != 1
                {
                    if var_418 == 0
                    {
                        uu_dircolors::generate_ls_colors::h913fd92084aef0eb(&var_490, &var_491, 
                            ":: invalid line;  missing second…", 1);
                        var_450 = &var_490;
                        let var_448_3: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                        var_3b8 = &data_4f4f68;
                        let var_3b0_3: i64 = 2;
                        let var_398_3: i64 = 0;
                        let var_3a8_7: *mut *mut i64 = &var_450;
                        var_3a0 = 1;
                        std::io::stdio::_print::h5e446ff973c02de6(&var_3b8);
                        goto 'label_4600bd;
                    }
                    
                    let rax_25: *mut c_void = var_420[1];
                    let rcx_8: i64 = *rax_25.byte_offset(8);
                    let rax_26: i64 = *rax_25.byte_offset(0x10);
                    var_490 = nullptr;
                    let var_488_2: i64 = rcx_8;
                    var_480 = rax_26;
                    *var_480[8] = 1;
                    var_450 = &var_490;
                    let var_448_4: fn(arg1: *mut i32, arg2: *mut i64) -> i64 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                    var_3b8 = &data_4f4fe0;
                    let var_3b0_5: i64 = 1;
                    let var_398_4: i64 = 0;
                    let var_3a8_9: *mut *mut i64 = &var_450;
                    var_3a0 = 1;
                    let mut var_d8: i128;
                    core::option::Option$LT$T$GT$::map_or_else::h53cf05d23a4dbe8c(&var_d8, 
                        &var_3b8);
                    let var_3a0_6: i32 = 1;
                    var_3b8 = var_d8;
                    let var_c8: i64;
                    let var_3a8_10: i64 = var_c8;
                    result_1 = alloc::boxed::Box$LT$T$GT$::new::h37964118bcf75eed(&var_3b8);
                    goto 'label_45fd18;
                }
                
                let rax_20: *mut c_void = *var_420;
                let r12_1: i64 = *rax_20.byte_offset(8);
                let r15_1: u64 = *rax_20.byte_offset(0x10);
                let mut r12_2: *mut *mut c_void;
                let mut r13_1: i64;
                let mut r15_2: i64;
                
                if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h4bb8f6e1f67b4157(r12_1, r15_1, "-expected file, got directory c-…", 1) == 0
                {
                    if std::path::Path::is_dir::h02edbc48c38d7d9e(r12_1, r15_1) != 0
                    {
                        var_490 = 1;
                        let var_488_3: i64 = r12_1;
                        var_480 = r15_1;
                        *var_480[8] = 1;
                        var_450 = &var_490;
                        let var_448_5: fn(arg1: *mut i32, arg2: *mut i64) -> i64 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                        var_3b8 = &data_4f4ff0;
                        let var_3b0_6: i64 = 1;
                        let var_398_5: i64 = 0;
                        let var_3a8_11: *mut *mut i64 = &var_450;
                        var_3a0 = 1;
                        let mut var_c0: i128;
                        core::option::Option$LT$T$GT$::map_or_else::h53cf05d23a4dbe8c(&var_c0, 
                            &var_3b8);
                        let var_3a0_7: i32 = 2;
                        var_3b8 = var_c0;
                        let var_b0: i64;
                        let var_3a8_12: i64 = var_b0;
                        result_2 = alloc::boxed::Box$LT$T$GT$::new::h37964118bcf75eed(&var_3b8);
                        goto 'label_46032b;
                    }
                    
                    let mut var_3c8: i32;
                    std::fs::File::open::h997f5f2f8f213834(&var_3c8, r12_1);
                    
                    if var_3c8 != 1
                    {
                        let var_3c4: i32;
                        let mut var_90: ();
                        std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::hf4d2fb8681f88375(&var_90, var_3c4);
                        alloc::string::String::from_utf8_lossy::h880ad8b337de96e9(&var_490, r12_1, 
                            r15_1);
                        let rax_33: *mut *mut c_void = var_490;
                        uu_dircolors::parse::h163ac6b47826303e(&var_3b8, &var_90, &var_491);
                        let rbp_2: i8 = var_3b8;
                        r12_2 = var_3b0;
                        r15_2 = var_3a8;
                        r13_1 = var_3a0;
                        core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::h27d753f1da108540(rax_33, var_488);
                        
                        if (rbp_2 & 1) != 0
                        {
                            goto 'label_46015d;
                        }
                        
                        goto 'label_4604ea;
                    }
                    
                    let var_3c0: i64;
                    let mut var_430: i64 = var_3c0;
                    var_490 = 1;
                    let var_488_4: i64 = r12_1;
                    var_480 = r15_1;
                    *var_480[8] = 0;
                    var_450 = &var_490;
                    let var_448_6: fn(arg1: *mut i32, arg2: *mut i64) -> i64 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                    let var_440_1: *mut i64 = &var_430;
                    let var_438_1: fn(arg1: *mut i64, arg2: *mut i64) -> i64 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::ha4645305e3b6a355;
                    var_3b8 = &data_4f4f48;
                    let var_3b0_7: i64 = 2;
                    let var_398_6: i64 = 0;
                    let var_3a8_13: *mut *mut i64 = &var_450;
                    var_3a0 = 2;
                    let mut var_a8: i128;
                    core::option::Option$LT$T$GT$::map_or_else::h53cf05d23a4dbe8c(&var_a8, 
                        &var_3b8);
                    let var_3a0_8: i32 = 1;
                    var_3b8 = var_a8;
                    let var_98: i64;
                    let var_3a8_14: i64 = var_98;
                    result = alloc::boxed::Box$LT$T$GT$::new::h37964118bcf75eed(&var_3b8);
                    core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h9605c47f6bab8b35(
                        var_430);
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$usize$GT$$GT$::hadb3ca9fd0739737(
                        var_428, var_420);
                    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h8406cbe15c6891aa(&var_400);
                }
                else
                {
                    std::io::stdio::stdin::h9a05a2c3e7544b2a();
                    let mut var_60: ();
                    std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::hd118cba447eab8b7(&var_60, &std::io::stdio::stdin::INSTANCE::heccb3522b341563b);
                    let rax_22: *mut c_void = *var_420;
                    *rax_22.byte_offset(8);
                    *rax_22.byte_offset(0x10);
                    uu_dircolors::parse::h4ab437343b8a2bba(&var_3b8, &var_60, &var_491);
                    r12_2 = var_3b0;
                    r15_2 = var_3a8;
                    r13_1 = var_3a0;
                    
                    if (var_3b8 & 1) == 0
                    {
                        'label_4604ea:
                        var_490 = r12_2;
                        var_480 = r13_1;
                        var_450 = &var_490;
                        let var_448_7: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                        var_3b8 = &data_4f4f68;
                        let var_3b0_8: i64 = 2;
                        let var_398_7: i64 = 0;
                        let var_3a8_15: *mut *mut i64 = &var_450;
                        var_3a0 = 1;
                        std::io::stdio::_print::h5e446ff973c02de6(&var_3b8);
                        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h939af750951fcfd0(
                            var_490, r15_2);
                        result = 0;
                        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$usize$GT$$GT$::hadb3ca9fd0739737(var_428, var_420);
                        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h8406cbe15c6891aa(&var_400);
                    }
                    else
                    {
                        'label_46015d:
                        let var_3a0_5: i32 = 1;
                        var_3b8 = r12_2;
                        let var_3b0_4: i64 = r15_2;
                        let var_3a8_8: i64 = r13_1;
                        result = alloc::boxed::Box$LT$T$GT$::new::h37964118bcf75eed(&var_3b8);
                        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$usize$GT$$GT$::hadb3ca9fd0739737(var_428, var_420);
                        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h8406cbe15c6891aa(&var_400);
                    }
                }
            }
        }
        else
        {
            if var_418 != 0
            {
                let rax_13: *mut c_void = *var_420;
                let rcx_4: i64 = *rax_13.byte_offset(8);
                let rax_14: i64 = *rax_13.byte_offset(0x10);
                var_490 = nullptr;
                let var_488_1: i64 = rcx_4;
                var_480 = rax_14;
                *var_480[8] = 1;
                var_450 = &var_490;
                let var_448_1: fn(arg1: *mut i32, arg2: *mut i64) -> i64 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                var_3b8 = &data_4f4fc0;
                let var_3b0_1: i64 = 2;
                let var_398_1: i64 = 0;
                let var_3a8_3: *mut *mut i64 = &var_450;
                var_3a0 = 1;
                let mut var_f0: i128;
                core::option::Option$LT$T$GT$::map_or_else::h53cf05d23a4dbe8c(&var_f0, &var_3b8);
                let var_3a0_3: i32 = 1;
                var_3b8 = var_f0;
                let var_e0: i64;
                let var_3a8_4: i64 = var_e0;
                result_1 = alloc::boxed::Box$LT$T$GT$::new::h37964118bcf75eed(&var_3b8);
                goto 'label_45fd18;
            }
            
            uu_dircolors::generate_dircolors_config::h11151b3620e36f5b(&var_490);
            var_450 = &var_490;
            let var_448_2: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
            var_3b8 = &data_4f4f68;
            let var_3b0_2: i64 = 2;
            let var_398_2: i64 = 0;
            let var_3a8_5: *mut *mut i64 = &var_450;
            var_3a0 = 1;
            std::io::stdio::_print::h5e446ff973c02de6(&var_3b8);
            'label_4600bd:
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h939af750951fcfd0(var_490, 
                var_488);
            result = 0;
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$usize$GT$$GT$::hadb3ca9fd0739737(
                var_428, var_420);
            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h8406cbe15c6891aa(&var_400);
        }
    }
    else
    {
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hfa910bc67f7961e5(&var_490, "the options to output non shell …", 0x5b);
        let var_3a8_1: i64 = var_480;
        var_3b8 = var_490;
        let var_3a0_1: i32 = 1;
        result_1 = alloc::boxed::Box$LT$T$GT$::new::h37964118bcf75eed(&var_3b8);
        'label_45fd18:
        result = result_1;
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$usize$GT$$GT$::hadb3ca9fd0739737(var_428, 
            var_420);
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h8406cbe15c6891aa(&var_400);
    }
    result
}
