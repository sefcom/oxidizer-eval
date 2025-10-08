
  fn uu_chroot::uumain::uumain::h0aacf4ff54def1d7(arg1: i64) -> u64

{
    let mut var_338: *mut c_void;
    uu_chroot::uu_app::haf893327f4e12c40(&var_338);
    let mut var_410: *mut c_void;
    clap_builder::builder::command::Command::try_get_matches_from::h7b09a53eea8f1d9c(&var_410, 
        &var_338, arg1);
    let rax: *mut c_void = var_410;
    let mut result: u64;
    let var_408: i64;
    
    if -(rax) != -0x8000000000000000
    {
        let mut var_3fc: i128;
        let var_374_1: i128 = var_3fc;
        let mut var_3ec: i128;
        let var_364_1: i128 = var_3ec;
        let var_3dc: i32;
        let var_354_1: i32 = var_3dc;
        let mut var_388: *mut c_void = rax;
        let var_380_1: i64 = var_408;
        let mut var_400: i32;
        let var_378_1: i32 = var_400;
        let mut var_3a8: i64;
        std::env::var::h41c864fdddd31a28(&var_3a8);
        uu_chroot::Options::from::hdf9aee44d298ba74(&var_338, &var_388);
        let rax_2: *mut c_void = var_338;
        let result_2: u64;
        result = result_2;
        let var_328: *mut *mut c_void;
        let mut r12: *mut *mut c_void = var_328;
        
        if rax_2 != -0x8000000000000000
        {
            let var_2e0: i128;
            let var_3b8_1: i72 = var_2e0;
            let var_2f0: i128;
            let var_3c8_1: i128 = var_2f0;
            let var_300: i128;
            let var_3d8_1: i128 = var_300;
            let var_310: i128;
            var_3ec = var_310;
            let mut var_320: i128;
            var_3fc = var_320;
            var_410 = rax_2;
            let result_1: u64 = result;
            var_400 = r12;
            
            if *var_3b8_1[8] == 0
            {
                goto 'label_4621cb;
            }
            
            uucore::features::fs::canonicalize::hd1e02c1cbeb0770f(&var_338, &var_410);
            let mut var_468: i128;
            core::result::Result$LT$T$C$E$GT$::unwrap::h8e19656dab11eb84(&var_468, &var_338);
            let var_460: *mut i8;
            let mut var_458: i64;
            core::str::converts::from_utf8::h8a6dc80f786921e0(&var_338, var_460, var_458);
            
            if (var_338 & 1) != 0
            {
                'label_462260:
                core::mem::drop::hd7797c8ae89fe810(var_468, var_460);
                _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hc2694177795286e6(&var_468, "option --skip-chdir only permitt…", 0x38);
                let var_328_1: i64 = var_458;
                var_338 = var_468;
                var_320 = 0x7d;
                result = alloc::boxed::Box$LT$T$GT$::new::h37ad0db9ff8eec9c(&var_338);
            }
            else
            {
                if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hcb8977ebfc05cc90(result_2, var_328, "/commandError flushing stdout: ", 1) == 0
                {
                    goto 'label_462260;
                }
                
                core::mem::drop::hd7797c8ae89fe810(var_468, var_460);
                result = result_1;
                r12 = var_400;
                'label_4621cb:
                let mut var_440: *mut i128;
                
                if std::path::Path::is_dir::h02edbc48c38d7d9e(result, r12) == 0
                {
                    var_468 = result_1;
                    var_440 = &var_468;
                    let var_438_1: fn(arg1: *mut i64, arg2: i64) -> u64 = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::hdc1404ac42f64ec9;
                    var_338 = &data_4195b0;
                    let mut var_330: i64 = 1;
                    *var_320[8] = 0;
                    let var_328_2: *mut *mut i128 = &var_440;
                    var_320 = 1;
                    let mut var_350: i128;
                    core::option::Option$LT$T$GT$::map_or_else::h3cb555ed11a172a6(&var_350, 
                        &var_338);
                    var_330 = var_350;
                    let var_340: i64;
                    var_320 = var_340;
                    var_338 = 0xa;
                    result = alloc::boxed::Box$LT$T$GT$::new::h809e1f80a24b1dbf(&var_338);
                }
                else
                {
                    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h4ae8d85311f4ede3(&var_338, &var_388);
                    let mut var_70: i64;
                    clap_builder::parser::error::MatchesError::unwrap::h07bb346b5edcec3e(&var_70, 
                        &var_338);
                    let mut var_48c_1: i8;
                    let mut var_488_1: i64;
                    let mut var_480: i64;
                    let mut var_478: *mut i64;
                    let mut rbx_2: *mut i64;
                    let mut r13_1: *const i8;
                    let mut r14_2: i64;
                    
                    if var_70 == 0
                    {
                        var_480 = 0;
                        var_478 = 8;
                        let var_470_1: i64 = 0;
                        'label_462396:
                        let r14_3: i64 = var_3a8;
                        let var_398: *mut i8;
                        r13_1 = var_398;
                        let var_390: i64;
                        let mut rbp_1: i64 = var_390;
                        let rax_10: *mut i64 =
                            alloc::alloc::Global::alloc_impl::h6fb1b6049873c120(8, 0x20);
                        
                        if rax_10 == 0
                        {
                            alloc::alloc::handle_alloc_error::h88aa4f4f9d19c4f9();
                            /* no return */
                        }
                        
                        rbx_2 = rax_10;
                        
                        if r14_3 != 0
                        {
                            r13_1 = "/bin/sh-ioption --skip-chdir onl…";
                        }
                        
                        if r14_3 != 0
                        {
                            rbp_1 = 7;
                        }
                        
                        *rbx_2 = r13_1;
                        rbx_2[1] = rbp_1;
                        rbx_2[2] = "-ioption --skip-chdir only permi…";
                        rbx_2[3] = 2;
                        var_488_1 = 2;
                        r14_2 = 1;
                        var_48c_1 = 1;
                    }
                    else
                    {
                        core::iter::traits::iterator::Iterator::collect::ha950634a5ae1a641(
                            &var_480, &var_70);
                        let var_470: i64;
                        
                        if var_470 == 0
                        {
                            goto 'label_462396;
                        }
                        
                        var_488_1 = var_480;
                        rbx_2 = var_478;
                        r14_2 = var_470 - 1;
                        r13_1 = *rbx_2;
                        rbx_2[1];
                        var_48c_1 = 0;
                    }
                    
                    let result_3: u64 = uu_chroot::set_context::h8c46b364c6a89d00(&var_410);
                    result = result_3;
                    
                    if result_3 == 0
                    {
                        std::process::Command::new::h55e42c3aed214011(&var_338, r13_1);
                        std::process::Command::args::hc2e5c5130a361ad9(&var_338, &rbx_2[2], r14_2);
                        let mut var_428: i32;
                        std::process::Command::status::h6e1e3c5811681da5(&var_428);
                        
                        if var_428 != 1
                        {
                            core::ptr::drop_in_place$LT$std..process..Command$GT$::h22d060a4ddfe511d(&var_338);
                            let var_424: i32;
                            let mut rdi_27: i32;
                            
                            if var_424 == 0
                            {
                                rdi_27 = 0;
                            }
                            else
                            {
                                rdi_27 = (0 - 0) | *var_424[1];
                            }
                            
                            uucore::mods::error::set_exit_code::hbbe6ffc423a314f1(rdi_27);
                            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$str$GT$$GT$::had99761f1957d131(var_488_1, rbx_2);
                            
                            if var_48c_1 != 0
                            {
                                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$str$GT$$GT$::had99761f1957d131(var_480, var_478);
                            }
                            
                            core::ptr::drop_in_place$LT$uu_chroot..Options$GT$::hd6ad415c82bbebcc(
                                &var_410);
                            core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..env..VarError$GT$$GT$::h6c87ce4b6abe1f1a(&var_3a8);
                            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h8b65a92f21add762(&var_388);
                            return 0;
                        }
                        
                        let var_420: i64;
                        let var_418_1: i64 = var_420;
                        let rax_11: i8 = std::io::error::Error::kind::h135fe00c4e7365f3(var_420);
                        let rsi_16: i64 = *rbx_2;
                        let rdx_5: u64 = rbx_2[1];
                        let mut rax_13: i32;
                        let var_430: i64;
                        
                        if rax_11 == 0
                        {
                            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hc2694177795286e6(&var_440, rsi_16, rdx_5);
                            let var_448_2: i64 = var_430;
                            var_458 = var_440;
                            rax_13 = 2;
                        }
                        else
                        {
                            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hc2694177795286e6(&var_440, rsi_16, rdx_5);
                            let var_448_1: i64 = var_430;
                            var_458 = var_440;
                            rax_13 = 1;
                        }
                        let var_460_1: i64 = var_420;
                        var_468 = rax_13;
                        result = alloc::boxed::Box$LT$T$GT$::new::h809e1f80a24b1dbf(&var_468);
                        core::ptr::drop_in_place$LT$std..process..Command$GT$::h22d060a4ddfe511d(
                            &var_338);
                    }
                    
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$str$GT$$GT$::had99761f1957d131(var_488_1, rbx_2);
                    
                    if var_48c_1 != 0
                    {
                        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$str$GT$$GT$::had99761f1957d131(var_480, var_478);
                    }
                }
            }
            
            core::ptr::drop_in_place$LT$uu_chroot..Options$GT$::hd6ad415c82bbebcc(&var_410);
        }
        
        core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..env..VarError$GT$$GT$::h6c87ce4b6abe1f1a(&var_3a8);
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h8b65a92f21add762(&var_388);
    }
    else
    {
        result = alloc::boxed::Box$LT$T$GT$::new::hba71fb7b5b9dab6c(var_408, 0x7d);
    }
    result
}
