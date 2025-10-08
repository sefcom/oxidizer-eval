
  uint64_t uu_dircolors::uumain::uumain::h64bd80dba95c0b42(void** arg1)

{
    void** const var_3b8;
    uu_dircolors::uu_app::h0ca3ae80d0f731e8(&var_3b8);
    void** var_490;
    clap_builder::builder::command::Command::try_get_matches_from::h7b1766bd96ab2d71(&var_490, 
        &var_3b8, arg1);
    void** rax = var_490;
    int64_t var_488;
    
    if (-(rax) == -0x8000000000000000)
        /* tailcall */
        return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he92a37de32738e67(var_488);
    
    int64_t var_460;
    int64_t var_3d0 = var_460;
    int128_t var_470;
    int128_t var_3e0 = var_470;
    int128_t var_480;
    int128_t var_3f0 = var_480;
    void** var_400 = rax;
    int64_t var_3f8 = var_488;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::hebd739a8be5302e3(
        &var_3b8, &var_400);
    clap_builder::parser::error::MatchesError::unwrap::h7d8a42b146f21d46(&var_490, &var_3b8);
    var_3b8 = nullptr;
    void** var_3b0 = 8;
    int64_t var_3a8 = 0;
    int64_t var_428;
    core::option::Option$LT$T$GT$::map_or::h22cc3115edbc3910(&var_428, &var_490, &var_3b8);
    char rax_2 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
        &var_400, "c-shellbourne-shellprint-databas…", 7);
    char rax_3;
    
    if (!rax_2)
        rax_3 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            &var_400, "bourne-shellprint-databaseprint-…", 0xc);
    
    char rax_4;
    char rax_5;
    
    if (rax_2 || rax_3)
    {
        rax_4 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            &var_400, "print-databaseprint-ls-colors/ho…", 0xe);
        
        if (!rax_4)
            rax_5 =
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
                &var_400, "print-ls-colors/home/34r7hm4n/.r…", 0xf);
    }
    
    uint64_t result;
    void** var_420;
    uint64_t result_1;
    
    if ((!rax_2 && !rax_3) || (!rax_4 && !rax_5))
    {
        char rax_8 =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            &var_400, "print-databaseprint-ls-colors/ho…", 0xe);
        char rax_9;
        
        if (rax_8)
            rax_9 =
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
                &var_400, "print-ls-colors/home/34r7hm4n/.r…", 0xf);
        
        if (rax_8 && rax_9)
        {
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hfa910bc67f7961e5(&var_490, "options --print-database and --p…", 0x45);
            int64_t var_3a8_2 = var_480;
            var_3b8 = var_490;
            int32_t var_3a0_2 = 1;
            result_1 = alloc::boxed::Box$LT$T$GT$::new::h37964118bcf75eed(&var_3b8);
            goto label_45fd18;
        }
        
        int64_t* var_450;
        int64_t var_418;
        int32_t var_3a0;
        
        if (!clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            &var_400, "print-databaseprint-ls-colors/ho…", 0xe))
        {
            char rax_16 = 1;
            
            if (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
                    &var_400, "c-shellbourne-shellprint-databas…", 7))
                goto label_460016;
            
            char var_491;
            uint64_t result_2;
            
            if (!
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
                &var_400, "bourne-shellprint-databaseprint-…", 0xc))
            {
                rax_16 = 2;
                
                if (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(&var_400, "print-ls-colors/home/34r7hm4n/.r…", 0xf))
                    goto label_460016;
                
                var_491 = 3;
                rax_16 = uu_dircolors::guess_syntax::h7a704cd20b6b2f5b();
                
                if (rax_16 != 3)
                    goto label_460016;
                
                _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hfa910bc67f7961e5(&var_490, "no SHELL environment variable, a…", 0x3d);
                int64_t var_3a8_6 = var_480;
                var_3b8 = var_490;
                int32_t var_3a0_4 = 1;
                result_2 = alloc::boxed::Box$LT$T$GT$::new::h37964118bcf75eed(&var_3b8);
                label_46032b:
                result = result_2;
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$usize$GT$$GT$::hadb3ca9fd0739737(
                    var_428, var_420);
                core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h8406cbe15c6891aa(&var_400);
            }
            else
            {
                rax_16 = 0;
                label_460016:
                var_491 = rax_16;
                
                if (var_418 != 1)
                {
                    if (!var_418)
                    {
                        uu_dircolors::generate_ls_colors::h913fd92084aef0eb(&var_490, &var_491, 
                            ":: invalid line;  missing second…", 1);
                        var_450 = &var_490;
                        int64_t (* var_448_3)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                        var_3b8 = &data_4f4f68;
                        int64_t var_3b0_3 = 2;
                        int64_t var_398_3 = 0;
                        int64_t** var_3a8_7 = &var_450;
                        var_3a0 = 1;
                        std::io::stdio::_print::h5e446ff973c02de6(&var_3b8);
                        goto label_4600bd;
                    }
                    
                    void* rax_25 = var_420[1];
                    int64_t rcx_8 = *(rax_25 + 8);
                    int64_t rax_26 = *(rax_25 + 0x10);
                    var_490 = nullptr;
                    int64_t var_488_2 = rcx_8;
                    var_480 = rax_26;
                    *var_480[8] = 1;
                    var_450 = &var_490;
                    int64_t (* var_448_4)(int32_t* arg1, int64_t* arg2) = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                    var_3b8 = &data_4f4fe0;
                    int64_t var_3b0_5 = 1;
                    int64_t var_398_4 = 0;
                    int64_t** var_3a8_9 = &var_450;
                    var_3a0 = 1;
                    int128_t var_d8;
                    core::option::Option$LT$T$GT$::map_or_else::h53cf05d23a4dbe8c(&var_d8, 
                        &var_3b8);
                    int32_t var_3a0_6 = 1;
                    var_3b8 = var_d8;
                    int64_t var_c8;
                    int64_t var_3a8_10 = var_c8;
                    result_1 = alloc::boxed::Box$LT$T$GT$::new::h37964118bcf75eed(&var_3b8);
                    goto label_45fd18;
                }
                
                void* rax_20 = *var_420;
                int64_t r12_1 = *(rax_20 + 8);
                uint64_t r15_1 = *(rax_20 + 0x10);
                void** r12_2;
                int64_t r13_1;
                int64_t r15_2;
                
                if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h4bb8f6e1f67b4157(r12_1, r15_1, "-expected file, got directory c-…", 1))
                {
                    if (std::path::Path::is_dir::h02edbc48c38d7d9e(r12_1, r15_1))
                    {
                        var_490 = 1;
                        int64_t var_488_3 = r12_1;
                        var_480 = r15_1;
                        *var_480[8] = 1;
                        var_450 = &var_490;
                        int64_t (* var_448_5)(int32_t* arg1, int64_t* arg2) = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                        var_3b8 = &data_4f4ff0;
                        int64_t var_3b0_6 = 1;
                        int64_t var_398_5 = 0;
                        int64_t** var_3a8_11 = &var_450;
                        var_3a0 = 1;
                        int128_t var_c0;
                        core::option::Option$LT$T$GT$::map_or_else::h53cf05d23a4dbe8c(&var_c0, 
                            &var_3b8);
                        int32_t var_3a0_7 = 2;
                        var_3b8 = var_c0;
                        int64_t var_b0;
                        int64_t var_3a8_12 = var_b0;
                        result_2 = alloc::boxed::Box$LT$T$GT$::new::h37964118bcf75eed(&var_3b8);
                        goto label_46032b;
                    }
                    
                    int32_t var_3c8;
                    std::fs::File::open::h997f5f2f8f213834(&var_3c8, r12_1);
                    
                    if (var_3c8 != 1)
                    {
                        int32_t var_3c4;
                        void var_90;
                        std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::hf4d2fb8681f88375(&var_90, var_3c4);
                        alloc::string::String::from_utf8_lossy::h880ad8b337de96e9(&var_490, r12_1, 
                            r15_1);
                        void** rax_33 = var_490;
                        uu_dircolors::parse::h163ac6b47826303e(&var_3b8, &var_90, &var_491);
                        char rbp_2 = var_3b8;
                        r12_2 = var_3b0;
                        r15_2 = var_3a8;
                        r13_1 = var_3a0;
                        core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::h27d753f1da108540(rax_33, var_488);
                        
                        if (rbp_2 & 1)
                            goto label_46015d;
                        
                        goto label_4604ea;
                    }
                    
                    int64_t var_3c0;
                    int64_t var_430 = var_3c0;
                    var_490 = 1;
                    int64_t var_488_4 = r12_1;
                    var_480 = r15_1;
                    *var_480[8] = 0;
                    var_450 = &var_490;
                    int64_t (* var_448_6)(int32_t* arg1, int64_t* arg2) = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                    int64_t* var_440_1 = &var_430;
                    int64_t (* var_438_1)(int64_t* arg1, int64_t* arg2) = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::ha4645305e3b6a355;
                    var_3b8 = &data_4f4f48;
                    int64_t var_3b0_7 = 2;
                    int64_t var_398_6 = 0;
                    int64_t** var_3a8_13 = &var_450;
                    var_3a0 = 2;
                    int128_t var_a8;
                    core::option::Option$LT$T$GT$::map_or_else::h53cf05d23a4dbe8c(&var_a8, 
                        &var_3b8);
                    int32_t var_3a0_8 = 1;
                    var_3b8 = var_a8;
                    int64_t var_98;
                    int64_t var_3a8_14 = var_98;
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
                    void var_60;
                    std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::hd118cba447eab8b7(&var_60, &std::io::stdio::stdin::INSTANCE::heccb3522b341563b);
                    void* rax_22 = *var_420;
                    *(rax_22 + 8);
                    *(rax_22 + 0x10);
                    uu_dircolors::parse::h4ab437343b8a2bba(&var_3b8, &var_60, &var_491);
                    r12_2 = var_3b0;
                    r15_2 = var_3a8;
                    r13_1 = var_3a0;
                    
                    if (!(var_3b8 & 1))
                    {
                        label_4604ea:
                        var_490 = r12_2;
                        var_480 = r13_1;
                        var_450 = &var_490;
                        int64_t (* var_448_7)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                        var_3b8 = &data_4f4f68;
                        int64_t var_3b0_8 = 2;
                        int64_t var_398_7 = 0;
                        int64_t** var_3a8_15 = &var_450;
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
                        label_46015d:
                        int32_t var_3a0_5 = 1;
                        var_3b8 = r12_2;
                        int64_t var_3b0_4 = r15_2;
                        int64_t var_3a8_8 = r13_1;
                        result = alloc::boxed::Box$LT$T$GT$::new::h37964118bcf75eed(&var_3b8);
                        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$usize$GT$$GT$::hadb3ca9fd0739737(var_428, var_420);
                        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h8406cbe15c6891aa(&var_400);
                    }
                }
            }
        }
        else
        {
            if (var_418)
            {
                void* rax_13 = *var_420;
                int64_t rcx_4 = *(rax_13 + 8);
                int64_t rax_14 = *(rax_13 + 0x10);
                var_490 = nullptr;
                int64_t var_488_1 = rcx_4;
                var_480 = rax_14;
                *var_480[8] = 1;
                var_450 = &var_490;
                int64_t (* var_448_1)(int32_t* arg1, int64_t* arg2) = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                var_3b8 = &data_4f4fc0;
                int64_t var_3b0_1 = 2;
                int64_t var_398_1 = 0;
                int64_t** var_3a8_3 = &var_450;
                var_3a0 = 1;
                int128_t var_f0;
                core::option::Option$LT$T$GT$::map_or_else::h53cf05d23a4dbe8c(&var_f0, &var_3b8);
                int32_t var_3a0_3 = 1;
                var_3b8 = var_f0;
                int64_t var_e0;
                int64_t var_3a8_4 = var_e0;
                result_1 = alloc::boxed::Box$LT$T$GT$::new::h37964118bcf75eed(&var_3b8);
                goto label_45fd18;
            }
            
            uu_dircolors::generate_dircolors_config::h11151b3620e36f5b(&var_490);
            var_450 = &var_490;
            int64_t (* var_448_2)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
            var_3b8 = &data_4f4f68;
            int64_t var_3b0_2 = 2;
            int64_t var_398_2 = 0;
            int64_t** var_3a8_5 = &var_450;
            var_3a0 = 1;
            std::io::stdio::_print::h5e446ff973c02de6(&var_3b8);
            label_4600bd:
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
        int64_t var_3a8_1 = var_480;
        var_3b8 = var_490;
        int32_t var_3a0_1 = 1;
        result_1 = alloc::boxed::Box$LT$T$GT$::new::h37964118bcf75eed(&var_3b8);
        label_45fd18:
        result = result_1;
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$usize$GT$$GT$::hadb3ca9fd0739737(var_428, 
            var_420);
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h8406cbe15c6891aa(&var_400);
    }
    return result;
}
