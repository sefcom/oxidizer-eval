
  fn uu_stdbuf::uumain::uumain::h0359c5a0823afe83(arg1: i64) -> u64

{
    let mut var_2f0: i64;
    uu_stdbuf::uu_app::h91a2ac6dea78ecdd(&var_2f0);
    let mut var_518: *mut c_void;
    clap_builder::builder::command::Command::try_get_matches_from::h253888a795880b9f(&var_518, 
        &var_2f0, arg1);
    let rax: *mut c_void = var_518;
    let mut result: u64;
    let result_1: u64;
    
    if -(rax) != -0x8000000000000000
    {
        let mut var_504: i128;
        let var_444_1: i128 = var_504;
        let var_4f4: i128;
        let var_434_1: i128 = var_4f4;
        let var_4e4: i32;
        let var_424_1: i32 = var_4e4;
        let mut var_458: *mut c_void = rax;
        let result_5: u64 = result_1;
        let mut var_508: i32;
        let var_448_1: i32 = var_508;
        _$LT$uu_stdbuf..ProgramOptions$u20$as$u20$core..convert..TryFrom$LT$$RF$clap_builder..parser..matches..arg_matches..ArgMatches$GT$$GT$::try_from::h30f83992a0a8cdc3(&var_2f0, &var_458);
        let rax_2: i64 = var_2f0;
        let var_2e8: i128;
        let var_2d8: i128;
        
        if rax_2 != 3
        {
            let var_2c8: i64;
            let var_3c0_1: i64 = var_2c8;
            let mut var_3d0: i128 = var_2d8;
            let mut var_3e8: i64 = rax_2;
            let mut var_3e0: i128 = var_2e8;
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h8111833d03ff3e0a(
                &var_2f0, &var_458);
            clap_builder::parser::error::MatchesError::unwrap::hab650df46b48d2fa(&var_518, 
                &var_2f0);
            
            if var_518 == 0
            {
                core::option::unwrap_failed::h893f57cb7db71cb7();
                /* no return */
            }
            
            let var_308_1: i128 = var_4f4;
            let var_318_1: i128 = var_504;
            let var_328_1: i128 = var_508;
            let mut var_338: i128 = var_518;
            let rax_4: *mut c_void = _$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h046aa52ed6537150(&var_338);
            
            if rax_4 == 0
            {
                core::option::unwrap_failed::h893f57cb7db71cb7();
                /* no return */
            }
            
            std::process::Command::new::h79f376ab446570ea(&var_2f0, rax_4);
            let mut var_4b0: i64;
            core::iter::traits::iterator::Iterator::collect::he20f70bdaea35cbe(&var_4b0, &var_338);
            let mut rbp: i64;
            rbp = 1;
            tempfile::dir::tempdir::h235e47031192db71(&var_518);
            let mut var_470: ();
            core::result::Result$LT$T$C$E$GT$::unwrap::h70311dc22a5d6c3b(&var_470, &var_518);
            rbp = 1;
            uu_stdbuf::get_preload_env::hcdd0d7c41618a612(&var_518, &var_470);
            let rax_5: *mut c_void = var_518;
            result = result_1;
            
            if rax_5 != -0x8000000000000000
            {
                let var_3a8_1: i64 = *var_4f4[4];
                let mut var_3b8: i128 = var_504;
                let mut var_400: *mut c_void = rax_5;
                let result_3: u64 = result;
                let var_3f0_1: *mut *mut c_void = var_508;
                std::process::Command::env::h08a5fcc0d85aaaa0(&var_2f0, &var_400, &var_3b8);
                uu_stdbuf::set_command_env::had9ec2fedfe42dc9(&var_2f0, 
                    "_STDBUF_I_STDBUF_O_STDBUF_Efaile…", 9, &var_3e8);
                uu_stdbuf::set_command_env::had9ec2fedfe42dc9(&var_2f0, 
                    "_STDBUF_O_STDBUF_Efailed to exec…", 9, &*var_3e0[8]);
                uu_stdbuf::set_command_env::had9ec2fedfe42dc9(&var_2f0, 
                    "_STDBUF_Efailed to execute proce…", 9, &*var_3d0[8]);
                std::process::Command::args::hfb4dd7c4a86d8cd0(&var_2f0);
                let mut var_420: i32;
                std::process::Command::spawn::haea730ea7b05a977(&var_420, &var_2f0);
                let mut result_2: u64;
                let var_41c: i128;
                
                if var_420 == 1
                {
                    let rdi_19: i64 = *var_41c[4];
                    let mut var_4d8: i64 = rdi_19;
                    let rax_6: i8 = std::io::error::Error::kind::h135fe00c4e7365f3(rdi_19);
                    let mut result_4: u64;
                    
                    if rax_6 == 0
                    {
                        result_2 = &data_8a8250;
                        let var_4c8_3: fn(arg1: *mut i64, arg2: i64) -> i64 =
                            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h50d0d1818a88e184;
                        var_518 = &data_8a8090;
                        let var_510_2: i64 = 2;
                        *var_504[0xc] = 0;
                        var_508 = &result_2;
                        *var_504[4] = 1;
                        let mut var_380: i128;
                        core::option::Option$LT$T$GT$::map_or_else::h2599ec582b6abf7c(&var_380, 
                            &var_518);
                        *var_504[4] = 0x7f;
                        var_518 = var_380;
                        let var_370: i64;
                        var_508 = var_370;
                        result_4 = alloc::boxed::Box$LT$T$GT$::new::h11d663688656667b(&var_518);
                    }
                    else if rax_6 != 1
                    {
                        result_2 = &data_8a8250;
                        let var_4c8_4: fn(arg1: *mut i64, arg2: i64) -> i64 =
                            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h50d0d1818a88e184;
                        let var_4c0_1: *mut i64 = &var_4d8;
                        let var_4b8_1: fn(arg1: *mut i64, arg2: *mut i64) -> i64 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::ha4645305e3b6a355;
                        var_518 = &data_8a80b0;
                        let var_510_3: i64 = 2;
                        *var_504[0xc] = 0;
                        var_508 = &result_2;
                        *var_504[4] = 2;
                        let mut var_368: i128;
                        core::option::Option$LT$T$GT$::map_or_else::h2599ec582b6abf7c(&var_368, 
                            &var_518);
                        *var_504[4] = 1;
                        var_518 = var_368;
                        let var_358: i64;
                        var_508 = var_358;
                        result_4 = alloc::boxed::Box$LT$T$GT$::new::h11d663688656667b(&var_518);
                    }
                    else
                    {
                        result_2 = &data_8a8250;
                        let var_4c8_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
                            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h50d0d1818a88e184;
                        var_518 = &data_8a8070;
                        let var_510: i64 = 2;
                        *var_504[0xc] = 0;
                        var_508 = &result_2;
                        *var_504[4] = 1;
                        let mut var_398: i128;
                        core::option::Option$LT$T$GT$::map_or_else::h2599ec582b6abf7c(&var_398, 
                            &var_518);
                        *var_504[4] = 0x7e;
                        var_518 = var_398;
                        let var_388: i64;
                        var_508 = var_388;
                        result_4 = alloc::boxed::Box$LT$T$GT$::new::h11d663688656667b(&var_518);
                    }
                    
                    result = result_4;
                    core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h9fb4a77c96f3968b(
                        &var_4d8);
                    goto 'label_80d1f9;
                }
                
                let var_48c_1: i128 = var_41c;
                let mut var_498: i128 = var_41c;
                std::process::Child::wait::h7e33de4911114104(&var_518, &var_498);
                _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h6a4e892a5b9c3931(&result_2, &var_518);
                result = result_2;
                
                if result != 0
                {
                    core::ptr::drop_in_place$LT$std..process..Child$GT$::h90d4d7e9da0ad355(
                        &var_498);
                    'label_80d1f9:
                    rbp = 0;
                    goto 'label_80d203;
                }
                
                let var_4c8: *mut *mut c_void;
                let rax_10: i32 = var_4c8 & 0x7f;
                
                if rax_10 == 0
                {
                    let rdi_36: u32 = *var_4c8[1];
                    
                    if rdi_36 == 0
                    {
                        result = 0;
                    }
                    else
                    {
                        result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$i32$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h9e5cddc9f9643acf(rdi_36);
                    }
                }
                else
                {
                    if rax_10 + 1 < 2
                    {
                        core::option::unwrap_failed::h893f57cb7db71cb7();
                        /* no return */
                    }
                    
                    var_420 = rax_10;
                    result_2 = &var_420;
                    let var_4c8_2: fn(arg1: *mut i32) -> u64 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$i32$GT$::fmt::h6f30f0a695ff7937;
                    var_518 = &data_8a80d0;
                    let var_510_1: i64 = 1;
                    *var_504[0xc] = 0;
                    var_508 = &result_2;
                    *var_504[4] = 1;
                    let mut var_350: i128;
                    core::option::Option$LT$T$GT$::map_or_else::h2599ec582b6abf7c(&var_350, 
                        &var_518);
                    *var_504[4] = 1;
                    var_518 = var_350;
                    let var_340: i64;
                    var_508 = var_340;
                    result = alloc::boxed::Box$LT$T$GT$::new::h11d663688656667b(&var_518);
                }
                
                core::ptr::drop_in_place$LT$std..process..Child$GT$::h90d4d7e9da0ad355(&var_498);
                core::ptr::drop_in_place$LT$tempfile..dir..TempDir$GT$::h420e1785c12ee24f(&var_470);
                core::ptr::drop_in_place$LT$std..process..Command$GT$::hfc493a2502df45a2(&var_2f0);
            }
            else
            {
                rbp = 1;
                'label_80d203:
                core::ptr::drop_in_place$LT$tempfile..dir..TempDir$GT$::h420e1785c12ee24f(&var_470);
                let var_4a8: i64;
                
                if rbp != 0
                {
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$str$GT$$GT$::h9adbc57ae70a60d7(var_4b0, var_4a8);
                }
                core::ptr::drop_in_place$LT$std..process..Command$GT$::hfc493a2502df45a2(&var_2f0);
            }
        }
        else
        {
            var_508 = var_2d8;
            var_518 = var_2e8;
            *var_504[4] = 0x7d;
            result = alloc::boxed::Box$LT$T$GT$::new::h11d663688656667b(&var_518);
        }
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h442170a1da1ec14e(&var_458);
    }
    else
    {
        result = alloc::boxed::Box$LT$T$GT$::new::hee0c7b782c66830a(result_1, 0x7d);
    }
    result
}
