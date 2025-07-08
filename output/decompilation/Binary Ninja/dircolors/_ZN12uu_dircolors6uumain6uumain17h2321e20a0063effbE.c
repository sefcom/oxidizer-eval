
  int64_t* uu_dircolors::uumain::uumain::h2321e20a0063effb(void** arg1)

{
    int64_t rbp;
    int64_t var_8 = rbp;
    void* const var_348;
    uu_dircolors::uu_app::hbe7b80473b118cf8(&var_348);
    int64_t var_498;
    clap_builder::builder::command::Command::try_get_matches_from::h0d8cf975bb365716(&var_498, 
        &var_348, arg1);
    int64_t rax = var_498;
    int64_t* result;
    int64_t var_490;
    
    if (rax != -0x8000000000000000)
    {
        int64_t var_468;
        int64_t var_3c0_1 = var_468;
        int128_t var_478;
        int128_t var_3d0_1 = var_478;
        int128_t var_488;
        int128_t var_3e0_1 = var_488;
        int64_t var_3f0 = rax;
        int64_t var_3e8_1 = var_490;
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::hbb220c64f890b78e(
            &var_348, &var_3f0, "FILEchar.alz.mpg -> '\''.svg.flc…", 4);
        clap_builder::parser::error::MatchesError::unwrap::h0d4e2c418f8795f8(&var_498, 
            "FILEchar.alz.mpg -> '\''.svg.flc…", 4, &var_348);
        var_348 = nullptr;
        int64_t var_340_1 = 8;
        int64_t var_338_1 = 0;
        void var_438;
        core::option::Option$LT$T$GT$::map_or::h41c5a4c15e8c912e(&var_438, &var_498, &var_348);
        char rax_2 =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
            &var_3f0, "c-shellbourne-shellprint-databas…", 7);
        char rax_3;
        
        if (!rax_2)
            rax_3 =
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
                &var_3f0, "bourne-shellprint-databaseprint-…", 0xc);
        
        char rax_4;
        char rax_5;
        
        if (rax_2 || rax_3)
        {
            rax_4 =
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
                &var_3f0, "print-databaseprint-ls-colors/ru…", 0xe);
            
            if (!rax_4)
                rax_5 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&var_3f0, "print-ls-colors/rustc/8bfcae730a…", 0xf);
        }
        
        int128_t* result_1;
        
        if ((!rax_2 && !rax_3) || (!rax_4 && !rax_5))
        {
            char rax_8 =
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
                &var_3f0, "print-databaseprint-ls-colors/ru…", 0xe);
            char rax_9;
            
            if (rax_8)
                rax_9 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&var_3f0, "print-ls-colors/rustc/8bfcae730a…", 0xf);
            
            if (rax_8 && rax_9)
            {
                _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h738ce379b89b2014(
                    &var_498, "options --print-database and --p…", 0x45);
                int64_t var_338_3 = var_488;
                var_348 = var_498;
                int32_t var_330_2 = 1;
                result_1 = alloc::boxed::Box$LT$T$GT$::new::h654ece1522594687(&var_348);
                goto label_46d019;
            }
            
            int64_t* var_458;
            void** var_430;
            int64_t var_428;
            int32_t var_330;
            
            if (!
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
                &var_3f0, "print-databaseprint-ls-colors/ru…", 0xe))
            {
                char var_499;
                int128_t* result_2;
                
                if (!clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&var_3f0, "c-shellbourne-shellprint-databas…", 7))
                {
                    if (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&var_3f0, "bourne-shellprint-databaseprint-…", 0xc))
                    {
                        var_499 = 0;
                        goto label_46d327;
                    }
                    
                    if (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&var_3f0, "print-ls-colors/rustc/8bfcae730a…", 0xf))
                    {
                        var_499 = 2;
                        goto label_46d327;
                    }
                    
                    var_499 = 3;
                    char rax_18 = uu_dircolors::guess_syntax::h0035ab354e037d8b();
                    
                    if (rax_18 != 3)
                    {
                        var_499 = rax_18;
                        goto label_46d327;
                    }
                    
                    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h738ce379b89b2014(
                        &var_498, "no SHELL environment variable, a…", 0x3d);
                    int64_t var_338_7 = var_488;
                    var_348 = var_498;
                    int32_t var_330_4 = 1;
                    result_2 = alloc::boxed::Box$LT$T$GT$::new::h654ece1522594687(&var_348);
                    label_46d667:
                    result = result_2;
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$alloc..string..String$GT$$GT$::h8b5b985f78a7e760(&var_438);
                    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h8dab8eeff1531528(&var_3f0);
                }
                else
                {
                    var_499 = 1;
                    label_46d327:
                    
                    if (var_428 != 1)
                    {
                        if (!var_428)
                        {
                            uu_dircolors::generate_ls_colors::h07b798e699c26892(&var_498, &var_499, 
                                ":: invalid line;  missing second…", 1);
                            var_458 = &var_498;
                            int64_t (* var_450_3)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                            var_348 = &data_524578;
                            int64_t var_340_4 = 2;
                            int64_t var_328_3 = 0;
                            int64_t** var_338_8 = &var_458;
                            var_330 = 1;
                            std::io::stdio::_print::he918bceb0c89db46(&var_348);
                            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h48c80b6faae0a7bb(&var_498);
                            goto label_46d3c2;
                        }
                        
                        int128_t zmm0_6 = *(var_430[1] + 8);
                        var_498 = 0;
                        var_490 = zmm0_6;
                        *var_488[8] = 1;
                        var_458 = &var_498;
                        int64_t (* var_450_4)(void* arg1, void* arg2) = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                        var_348 = &data_5245f0;
                        int64_t var_340_5 = 1;
                        int64_t var_328_4 = 0;
                        int64_t** var_338_10 = &var_458;
                        var_330 = 1;
                        int128_t var_390;
                        core::option::Option$LT$T$GT$::map_or_else::h6ae5f3d5493eed50(&var_390, 
                            &var_348);
                        int32_t var_330_6 = 1;
                        var_348 = var_390;
                        int64_t var_380;
                        int64_t var_338_11 = var_380;
                        result_1 = alloc::boxed::Box$LT$T$GT$::new::h654ece1522594687(&var_348);
                        goto label_46d019;
                    }
                    
                    void* rax_22 = *var_430;
                    int128_t var_418_1;
                    int128_t var_408_1;
                    
                    if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::ha729273d498af9d1(*(rax_22 + 8), *(rax_22 + 0x10), "-expected file, got directory c-…", 1))
                    {
                        std::io::stdio::stdin::h7215cc131abb55d8();
                        int64_t var_80;
                        std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::hf5745e56a44e873f(&var_80, 0x2000, &std::io::stdio::stdin::INSTANCE::hd3a98c261e3f14b5);
                        
                        if (!var_428)
                        {
                            core::panicking::panic_bounds_check::h25a5330941572dd1(0, 0);
                            /* no return */
                        }
                        
                        void* rax_25 = *var_430;
                        *(rax_25 + 8);
                        *(rax_25 + 0x10);
                        uu_dircolors::parse::h624210590e7596d4(&var_348, &var_80, &var_499);
                        var_408_1 = var_338_1;
                        var_418_1 = var_348;
                        goto label_46d46f;
                    }
                    
                    if (!var_428)
                    {
                        core::panicking::panic_bounds_check::h25a5330941572dd1(0, 0);
                        /* no return */
                    }
                    
                    void* rax_32 = *var_430;
                    char* r15_1 = *(rax_32 + 8);
                    void** const r14 = *(rax_32 + 0x10);
                    
                    if (std::path::Path::is_dir::h9ac0db933706da51(r15_1, r14))
                    {
                        var_498 = 1;
                        char* var_490_1 = r15_1;
                        var_488 = r14;
                        *var_488[8] = 1;
                        var_458 = &var_498;
                        int64_t (* var_450_5)(void* arg1, void* arg2) = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                        var_348 = &data_524600;
                        int64_t var_340_6 = 1;
                        int64_t var_328_5 = 0;
                        int64_t** var_338_12 = &var_458;
                        var_330 = 1;
                        int128_t var_378;
                        core::option::Option$LT$T$GT$::map_or_else::h6ae5f3d5493eed50(&var_378, 
                            &var_348);
                        int32_t var_330_7 = 2;
                        var_348 = var_378;
                        int64_t var_368;
                        int64_t var_338_13 = var_368;
                        result_2 = alloc::boxed::Box$LT$T$GT$::new::h654ece1522594687(&var_348);
                        goto label_46d667;
                    }
                    
                    int32_t var_3b8;
                    std::fs::File::open::h4d15bcf36777fbfd(&var_3b8, r15_1);
                    
                    if (!var_3b8)
                    {
                        int32_t var_3b4;
                        void var_50;
                        std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::hb6293618d46545ae(&var_50, 0x2000, var_3b4);
                        std::sys::os_str::bytes::Slice::to_string_lossy::h816275565265bd85(
                            &var_498, r15_1, r14);
                        uu_dircolors::parse::h71fa074bce44395f(&var_348, &var_50, &var_499);
                        var_408_1 = var_338_1;
                        var_418_1 = var_348;
                        rbp = 1;
                        r14 = 1;
                        core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::hae6b6ef474db0aaf(&var_498);
                        label_46d46f:
                        
                        if (!var_418_1)
                        {
                            var_488 = *var_408_1[8];
                            var_498 = var_418_1;
                            var_458 = &var_498;
                            int64_t (* var_450_7)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                            var_348 = &data_524578;
                            int64_t var_340_8 = 2;
                            int64_t var_328_7 = 0;
                            int64_t** var_338_16 = &var_458;
                            var_330 = 1;
                            std::io::stdio::_print::he918bceb0c89db46(&var_348);
                            r14 = 1;
                            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h48c80b6faae0a7bb(&var_498);
                            result = nullptr;
                        }
                        else
                        {
                            int64_t var_338_9 = *var_408_1[8];
                            var_348 = var_418_1;
                            int32_t var_330_5 = 1;
                            rbp = 1;
                            result = alloc::boxed::Box$LT$T$GT$::new::h654ece1522594687(&var_348);
                        }
                        
                        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$alloc..string..String$GT$$GT$::h8b5b985f78a7e760(&var_438);
                        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h8dab8eeff1531528(&var_3f0);
                    }
                    else
                    {
                        int64_t var_3b0;
                        int64_t var_420 = var_3b0;
                        var_498 = 1;
                        char* var_490_2 = r15_1;
                        var_488 = r14;
                        *var_488[8] = 0;
                        var_458 = &var_498;
                        int64_t (* var_450_6)(void* arg1, void* arg2) = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                        int64_t* var_448_1 = &var_420;
                        int64_t (* var_440_1)(int64_t* arg1, int64_t* arg2) = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h59fe8285afbb4739;
                        var_348 = &data_524558;
                        int64_t var_340_7 = 2;
                        int64_t var_328_6 = 0;
                        int64_t** var_338_14 = &var_458;
                        var_330 = 2;
                        int128_t var_360;
                        core::option::Option$LT$T$GT$::map_or_else::h6ae5f3d5493eed50(&var_360, 
                            &var_348);
                        int32_t var_330_8 = 1;
                        var_348 = var_360;
                        int64_t var_350;
                        int64_t var_338_15 = var_350;
                        result = alloc::boxed::Box$LT$T$GT$::new::h654ece1522594687(&var_348);
                        core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hc1ac7fa82c6c85d2(
                            var_420);
                        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$alloc..string..String$GT$$GT$::h8b5b985f78a7e760(&var_438);
                        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h8dab8eeff1531528(&var_3f0);
                    }
                }
            }
            else
            {
                if (var_428)
                {
                    int128_t zmm0_4 = *(*var_430 + 8);
                    var_498 = 0;
                    var_490 = zmm0_4;
                    *var_488[8] = 1;
                    var_458 = &var_498;
                    int64_t (* var_450_1)(void* arg1, void* arg2) = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                    var_348 = &data_5245d0;
                    int64_t var_340_2 = 2;
                    int64_t var_328_1 = 0;
                    int64_t** var_338_4 = &var_458;
                    var_330 = 1;
                    int128_t var_3a8;
                    core::option::Option$LT$T$GT$::map_or_else::h6ae5f3d5493eed50(&var_3a8, 
                        &var_348);
                    int32_t var_330_3 = 1;
                    var_348 = var_3a8;
                    int64_t var_398;
                    int64_t var_338_5 = var_398;
                    result_1 = alloc::boxed::Box$LT$T$GT$::new::h654ece1522594687(&var_348);
                    goto label_46d019;
                }
                
                uu_dircolors::generate_dircolors_config::hf75f23ebe3da3611(&var_498);
                var_458 = &var_498;
                int64_t (* var_450_2)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                var_348 = &data_524578;
                int64_t var_340_3 = 2;
                int64_t var_328_2 = 0;
                int64_t** var_338_6 = &var_458;
                var_330 = 1;
                std::io::stdio::_print::he918bceb0c89db46(&var_348);
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h48c80b6faae0a7bb(&var_498);
                label_46d3c2:
                result = nullptr;
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$alloc..string..String$GT$$GT$::h8b5b985f78a7e760(&var_438);
                core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h8dab8eeff1531528(&var_3f0);
            }
        }
        else
        {
            _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h738ce379b89b2014(
                &var_498, "the options to output non shell …", 0x5b);
            int64_t var_338_2 = var_488;
            var_348 = var_498;
            int32_t var_330_1 = 1;
            result_1 = alloc::boxed::Box$LT$T$GT$::new::h654ece1522594687(&var_348);
            label_46d019:
            result = result_1;
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$alloc..string..String$GT$$GT$::h8b5b985f78a7e760(&var_438);
            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h8dab8eeff1531528(&var_3f0);
        }
    }
    else
        result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7fb9d0425989847a(var_490);
    return result;
}
