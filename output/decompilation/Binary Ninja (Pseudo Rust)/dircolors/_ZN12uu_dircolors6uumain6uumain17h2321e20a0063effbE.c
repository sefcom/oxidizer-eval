
  fn uu_dircolors::uumain::uumain::h2321e20a0063effb(arg1: *mut *mut c_void) -> *mut i64

{
    let mut rbp: i64;
    let var_8: i64 = rbp;
    let mut var_348: *mut c_void;
    uu_dircolors::uu_app::hbe7b80473b118cf8(&var_348);
    let mut var_498: i64;
    clap_builder::builder::command::Command::try_get_matches_from::h0d8cf975bb365716(&var_498, 
        &var_348, arg1);
    let rax: i64 = var_498;
    let mut result: *mut i64;
    let mut var_490: i64;
    
    if rax != -0x8000000000000000
    {
        let var_468: i64;
        let var_3c0_1: i64 = var_468;
        let var_478: i128;
        let var_3d0_1: i128 = var_478;
        let mut var_488: i128;
        let var_3e0_1: i128 = var_488;
        let mut var_3f0: i64 = rax;
        let var_3e8_1: i64 = var_490;
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::hbb220c64f890b78e(
            &var_348, &var_3f0, "FILEchar.alz.mpg -> '\''.svg.flc…", 4);
        clap_builder::parser::error::MatchesError::unwrap::h0d4e2c418f8795f8(&var_498, 
            "FILEchar.alz.mpg -> '\''.svg.flc…", 4, &var_348);
        var_348 = nullptr;
        let var_340_1: i64 = 8;
        let var_338_1: i64 = 0;
        let mut var_438: ();
        core::option::Option$LT$T$GT$::map_or::h41c5a4c15e8c912e(&var_438, &var_498, &var_348);
        let rax_2: i8 =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
            &var_3f0, "c-shellbourne-shellprint-databas…", 7);
        let mut rax_3: i8;
        
        if rax_2 == 0
        {
            rax_3 =
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
                &var_3f0, "bourne-shellprint-databaseprint-…", 0xc);
        }
        
        let mut rax_4: i8;
        let mut rax_5: i8;
        
        if rax_2 != 0 || rax_3 != 0
        {
            rax_4 =
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
                &var_3f0, "print-databaseprint-ls-colors/ru…", 0xe);
            
            if rax_4 == 0
            {
                rax_5 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&var_3f0, "print-ls-colors/rustc/8bfcae730a…", 0xf);
            }
        }
        
        let mut result_1: *mut i128;
        
        if (rax_2 == 0 && rax_3 == 0) || (rax_4 == 0 && rax_5 == 0)
        {
            let rax_8: i8 =
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
                &var_3f0, "print-databaseprint-ls-colors/ru…", 0xe);
            let mut rax_9: i8;
            
            if rax_8 != 0
            {
                rax_9 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&var_3f0, "print-ls-colors/rustc/8bfcae730a…", 0xf);
            }
            
            if rax_8 != 0 && rax_9 != 0
            {
                _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h738ce379b89b2014(
                    &var_498, "options --print-database and --p…", 0x45);
                let var_338_3: i64 = var_488;
                var_348 = var_498;
                let var_330_2: i32 = 1;
                result_1 = alloc::boxed::Box$LT$T$GT$::new::h654ece1522594687(&var_348);
                goto 'label_46d019;
            }
            
            let mut var_458: *mut i64;
            let var_430: *mut *mut c_void;
            let var_428: i64;
            let mut var_330: i32;
            
            if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
                &var_3f0, "print-databaseprint-ls-colors/ru…", 0xe) == 0
            {
                let mut var_499: i8;
                let mut result_2: *mut i128;
                
                if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&var_3f0, "c-shellbourne-shellprint-databas…", 7) == 0
                {
                    if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&var_3f0, "bourne-shellprint-databaseprint-…", 0xc) != 0
                    {
                        var_499 = 0;
                        goto 'label_46d327;
                    }
                    
                    if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&var_3f0, "print-ls-colors/rustc/8bfcae730a…", 0xf) != 0
                    {
                        var_499 = 2;
                        goto 'label_46d327;
                    }
                    
                    var_499 = 3;
                    let rax_18: i8 = uu_dircolors::guess_syntax::h0035ab354e037d8b();
                    
                    if rax_18 != 3
                    {
                        var_499 = rax_18;
                        goto 'label_46d327;
                    }
                    
                    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h738ce379b89b2014(
                        &var_498, "no SHELL environment variable, a…", 0x3d);
                    let var_338_7: i64 = var_488;
                    var_348 = var_498;
                    let var_330_4: i32 = 1;
                    result_2 = alloc::boxed::Box$LT$T$GT$::new::h654ece1522594687(&var_348);
                    'label_46d667:
                    result = result_2;
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$alloc..string..String$GT$$GT$::h8b5b985f78a7e760(&var_438);
                    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h8dab8eeff1531528(&var_3f0);
                }
                else
                {
                    var_499 = 1;
                    'label_46d327:
                    
                    if var_428 != 1
                    {
                        if var_428 == 0
                        {
                            uu_dircolors::generate_ls_colors::h07b798e699c26892(&var_498, &var_499, 
                                ":: invalid line;  missing second…", 1);
                            var_458 = &var_498;
                            let var_450_3: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                            var_348 = &data_524578;
                            let var_340_4: i64 = 2;
                            let var_328_3: i64 = 0;
                            let var_338_8: *mut *mut i64 = &var_458;
                            var_330 = 1;
                            std::io::stdio::_print::he918bceb0c89db46(&var_348);
                            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h48c80b6faae0a7bb(&var_498);
                            goto 'label_46d3c2;
                        }
                        
                        let zmm0_6: i128 = *var_430[1].byte_offset(8);
                        var_498 = 0;
                        var_490 = zmm0_6;
                        *var_488[8] = 1;
                        var_458 = &var_498;
                        let var_450_4: fn(arg1: *mut c_void, arg2: *mut c_void) -> i64 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                        var_348 = &data_5245f0;
                        let var_340_5: i64 = 1;
                        let var_328_4: i64 = 0;
                        let var_338_10: *mut *mut i64 = &var_458;
                        var_330 = 1;
                        let mut var_390: i128;
                        core::option::Option$LT$T$GT$::map_or_else::h6ae5f3d5493eed50(&var_390, 
                            &var_348);
                        let var_330_6: i32 = 1;
                        var_348 = var_390;
                        let var_380: i64;
                        let var_338_11: i64 = var_380;
                        result_1 = alloc::boxed::Box$LT$T$GT$::new::h654ece1522594687(&var_348);
                        goto 'label_46d019;
                    }
                    
                    let rax_22: *mut c_void = *var_430;
                    let mut var_418_1: i128;
                    let mut var_408_1: i128;
                    
                    if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::ha729273d498af9d1(*rax_22.byte_offset(8), *rax_22.byte_offset(0x10), 
                        "-expected file, got directory c-…", 1) != 0
                    {
                        std::io::stdio::stdin::h7215cc131abb55d8();
                        let mut var_80: i64;
                        std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::hf5745e56a44e873f(&var_80, 0x2000, &std::io::stdio::stdin::INSTANCE::hd3a98c261e3f14b5);
                        
                        if var_428 == 0
                        {
                            core::panicking::panic_bounds_check::h25a5330941572dd1(0, 0);
                            /* no return */
                        }
                        
                        let rax_25: *mut c_void = *var_430;
                        *rax_25.byte_offset(8);
                        *rax_25.byte_offset(0x10);
                        uu_dircolors::parse::h624210590e7596d4(&var_348, &var_80, &var_499);
                        var_408_1 = var_338_1;
                        var_418_1 = var_348;
                        goto 'label_46d46f;
                    }
                    
                    if var_428 == 0
                    {
                        core::panicking::panic_bounds_check::h25a5330941572dd1(0, 0);
                        /* no return */
                    }
                    
                    let rax_32: *mut c_void = *var_430;
                    let r15_1: *mut i8 = *rax_32.byte_offset(8);
                    let mut r14: *mut *mut c_void = *rax_32.byte_offset(0x10);
                    
                    if std::path::Path::is_dir::h9ac0db933706da51(r15_1, r14) != 0
                    {
                        var_498 = 1;
                        let var_490_1: *mut i8 = r15_1;
                        var_488 = r14;
                        *var_488[8] = 1;
                        var_458 = &var_498;
                        let var_450_5: fn(arg1: *mut c_void, arg2: *mut c_void) -> i64 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                        var_348 = &data_524600;
                        let var_340_6: i64 = 1;
                        let var_328_5: i64 = 0;
                        let var_338_12: *mut *mut i64 = &var_458;
                        var_330 = 1;
                        let mut var_378: i128;
                        core::option::Option$LT$T$GT$::map_or_else::h6ae5f3d5493eed50(&var_378, 
                            &var_348);
                        let var_330_7: i32 = 2;
                        var_348 = var_378;
                        let var_368: i64;
                        let var_338_13: i64 = var_368;
                        result_2 = alloc::boxed::Box$LT$T$GT$::new::h654ece1522594687(&var_348);
                        goto 'label_46d667;
                    }
                    
                    let mut var_3b8: i32;
                    std::fs::File::open::h4d15bcf36777fbfd(&var_3b8, r15_1);
                    
                    if var_3b8 == 0
                    {
                        let var_3b4: i32;
                        let mut var_50: ();
                        std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::hb6293618d46545ae(&var_50, 0x2000, var_3b4);
                        std::sys::os_str::bytes::Slice::to_string_lossy::h816275565265bd85(
                            &var_498, r15_1, r14);
                        uu_dircolors::parse::h71fa074bce44395f(&var_348, &var_50, &var_499);
                        var_408_1 = var_338_1;
                        var_418_1 = var_348;
                        rbp = 1;
                        r14 = 1;
                        core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::hae6b6ef474db0aaf(&var_498);
                        'label_46d46f:
                        
                        if var_418_1 == 0
                        {
                            var_488 = *var_408_1[8];
                            var_498 = var_418_1;
                            var_458 = &var_498;
                            let var_450_7: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                            var_348 = &data_524578;
                            let var_340_8: i64 = 2;
                            let var_328_7: i64 = 0;
                            let var_338_16: *mut *mut i64 = &var_458;
                            var_330 = 1;
                            std::io::stdio::_print::he918bceb0c89db46(&var_348);
                            r14 = 1;
                            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h48c80b6faae0a7bb(&var_498);
                            result = nullptr;
                        }
                        else
                        {
                            let var_338_9: i64 = *var_408_1[8];
                            var_348 = var_418_1;
                            let var_330_5: i32 = 1;
                            rbp = 1;
                            result = alloc::boxed::Box$LT$T$GT$::new::h654ece1522594687(&var_348);
                        }
                        
                        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$alloc..string..String$GT$$GT$::h8b5b985f78a7e760(&var_438);
                        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h8dab8eeff1531528(&var_3f0);
                    }
                    else
                    {
                        let var_3b0: i64;
                        let mut var_420: i64 = var_3b0;
                        var_498 = 1;
                        let var_490_2: *mut i8 = r15_1;
                        var_488 = r14;
                        *var_488[8] = 0;
                        var_458 = &var_498;
                        let var_450_6: fn(arg1: *mut c_void, arg2: *mut c_void) -> i64 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                        let var_448_1: *mut i64 = &var_420;
                        let var_440_1: fn(arg1: *mut i64, arg2: *mut i64) -> i64 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h59fe8285afbb4739;
                        var_348 = &data_524558;
                        let var_340_7: i64 = 2;
                        let var_328_6: i64 = 0;
                        let var_338_14: *mut *mut i64 = &var_458;
                        var_330 = 2;
                        let mut var_360: i128;
                        core::option::Option$LT$T$GT$::map_or_else::h6ae5f3d5493eed50(&var_360, 
                            &var_348);
                        let var_330_8: i32 = 1;
                        var_348 = var_360;
                        let var_350: i64;
                        let var_338_15: i64 = var_350;
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
                if var_428 != 0
                {
                    let zmm0_4: i128 = *(*var_430).byte_offset(8);
                    var_498 = 0;
                    var_490 = zmm0_4;
                    *var_488[8] = 1;
                    var_458 = &var_498;
                    let var_450_1: fn(arg1: *mut c_void, arg2: *mut c_void) -> i64 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                    var_348 = &data_5245d0;
                    let var_340_2: i64 = 2;
                    let var_328_1: i64 = 0;
                    let var_338_4: *mut *mut i64 = &var_458;
                    var_330 = 1;
                    let mut var_3a8: i128;
                    core::option::Option$LT$T$GT$::map_or_else::h6ae5f3d5493eed50(&var_3a8, 
                        &var_348);
                    let var_330_3: i32 = 1;
                    var_348 = var_3a8;
                    let var_398: i64;
                    let var_338_5: i64 = var_398;
                    result_1 = alloc::boxed::Box$LT$T$GT$::new::h654ece1522594687(&var_348);
                    goto 'label_46d019;
                }
                
                uu_dircolors::generate_dircolors_config::hf75f23ebe3da3611(&var_498);
                var_458 = &var_498;
                let var_450_2: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                var_348 = &data_524578;
                let var_340_3: i64 = 2;
                let var_328_2: i64 = 0;
                let var_338_6: *mut *mut i64 = &var_458;
                var_330 = 1;
                std::io::stdio::_print::he918bceb0c89db46(&var_348);
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h48c80b6faae0a7bb(&var_498);
                'label_46d3c2:
                result = nullptr;
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$alloc..string..String$GT$$GT$::h8b5b985f78a7e760(&var_438);
                core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h8dab8eeff1531528(&var_3f0);
            }
        }
        else
        {
            _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h738ce379b89b2014(
                &var_498, "the options to output non shell …", 0x5b);
            let var_338_2: i64 = var_488;
            var_348 = var_498;
            let var_330_1: i32 = 1;
            result_1 = alloc::boxed::Box$LT$T$GT$::new::h654ece1522594687(&var_348);
            'label_46d019:
            result = result_1;
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$alloc..string..String$GT$$GT$::h8b5b985f78a7e760(&var_438);
            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h8dab8eeff1531528(&var_3f0);
        }
    }
    else
    {
        result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7fb9d0425989847a(var_490);
    }
    result
}
