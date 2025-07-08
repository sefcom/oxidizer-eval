
  fn uu_shuf::uumain::uumain::he0c9c6e9cffa8175(arg1: i64) -> *mut i64

{
    let mut var_318: i128;
    uu_shuf::uu_app::h710a705446bc3bb0(&var_318);
    let mut var_4b8: *mut *mut i64;
    clap_builder::builder::command::Command::try_get_matches_from::hb99de62d0bac49c5(&var_4b8, 
        &var_318, arg1);
    let rax: *mut *mut i64 = var_4b8;
    let mut result: *mut i64;
    let var_4b0: *mut i8;
    
    if rax != -0x8000000000000000
    {
        let var_488: *mut i8;
        let var_3b8_1: *mut i8 = var_488;
        let var_498: i128;
        let var_3c8_1: i128 = var_498;
        let mut var_4a8: u128;
        let var_3d8_1: u128 = var_4a8;
        let mut var_3e8: *mut *mut i64 = rax;
        let var_3e0_1: *mut i8 = var_4b0;
        let var_480: i64;
        let mut var_458_1: i64;
        let mut var_450: i128;
        let mut var_440_1: *mut *mut c_void;
        let mut var_308: *mut *mut c_void;
        
        if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
            &var_3e8, "echoERANGEEDEADLKENAMETOOLONGENO…", 4) != 0
        {
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h1c55b0f937b7ea2b(
                &var_318, &var_3e8, "file-or-argssrc/uu/shuf/src/shuf…", 0xc);
            let mut rsi_3: *const i8 = "file-or-argssrc/uu/shuf/src/shuf…";
            clap_builder::parser::error::MatchesError::unwrap::h15a6d75047b4cc93(&var_4b8, 
                "file-or-argssrc/uu/shuf/src/shuf…", 0xc, &var_318);
            let mut rax_3: *mut *mut i64 = var_4b8;
            let mut rcx_3: *const i8;
            let mut rdx_1: i64;
            let mut zmm0_2: i128;
            let mut zmm1_2: u128;
            
            if rax_3 == 0
            {
                zmm0_2 = {0};
                zmm1_2 = "a Display implementation returne…";
                rcx_3 = "a Display implementation returne…";
                rax_3 = core::ops::function::FnOnce::call_once::h1a1f904dbec84d2c;
                rdx_1 = 0;
            }
            else
            {
                rcx_3 = var_4b0;
                zmm1_2 = var_4a8;
                zmm0_2 = var_498;
                rsi_3 = var_488;
                rdx_1 = var_480;
            }
            
            let mut var_398: *mut *mut i64 = rax_3;
            let var_390_1: *const i8 = rcx_3;
            let var_388_1: u128 = zmm1_2;
            let var_378_1: i128 = zmm0_2;
            let var_368_1: *const i8 = rsi_3;
            let var_360_1: i64 = rdx_1;
            _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::hd3beca26ae3e93d6(&var_318, &var_398);
            var_440_1 = var_308;
            var_450 = var_318;
            var_458_1 = 1;
            goto 'label_47017a;
        }
        
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h5130577ecdee41f3(
            &var_318, &var_3e8, "input-rangehead-countoutputrando…", 0xb);
        let rax_4: *mut c_void =
            clap_builder::parser::error::MatchesError::unwrap::h700c3f9b5e5ff3dc(
            "input-rangehead-countoutputrando…", 0xb, &var_318);
        let mut result_1: *mut i64;
        let mut var_4c8: *mut *mut c_void;
        let mut var_478: i64;
        let mut var_468: *mut *mut c_void;
        let mut var_438: fn() -> !;
        let mut var_420: i64;
        let mut var_418: i128;
        let mut var_408: i128;
        let mut var_400: i16;
        
        if rax_4 == 0
        {
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h1c55b0f937b7ea2b(
                &var_318, &var_3e8, "file-or-argssrc/uu/shuf/src/shuf…", 0xc);
            clap_builder::parser::error::MatchesError::unwrap::h15a6d75047b4cc93(&var_4b8, 
                "file-or-argssrc/uu/shuf/src/shuf…", 0xc, &var_318);
            
            if var_4b8 == 0
            {
                var_438 = core::ops::function::FnOnce::call_once::h1a1f904dbec84d2c;
                let var_430_1: *const i8 = "a Display implementation returne…";
                let var_428_2: *const i8 = "a Display implementation returne…";
                var_420 = 0;
                let var_410_2: i64 = 0;
                var_400 = 0;
            }
            else
            {
                var_408 = var_488;
                var_418 = var_498;
                let mut var_428: i64;
                var_428 = var_4a8;
                var_438 = var_4b8;
            }
            
            let rax_24: *mut c_void = _$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h5474297f1719323f(&var_438);
            
            if rax_24 == 0
            {
                result_1 = -0x8000000000000000;
            }
            else
            {
                _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(&var_318, rax_24);
                var_4c8 = var_308;
                result_1 = var_318;
            }
            
            _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h118a158527e98cdc(
                &var_318, "-unexpected argument '' foundno …", 1);
            var_4a8 = var_308;
            var_4b8 = var_318;
            
            if result_1 != -0x8000000000000000
            {
                var_468 = var_4c8;
                var_478 = result_1;
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h82574bbf4bf299f6(&var_4b8);
            }
            else
            {
                var_468 = var_4a8;
                var_478 = var_4b8;
            }
            
            let result_6: *mut i64 = _$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h5474297f1719323f(&var_438);
            
            if result_6 == 0
            {
                var_440_1 = var_468;
                var_450 = var_478;
                var_458_1 = 0;
                goto 'label_47017a;
            }
            
            result_1 = result_6;
            var_4b8 = &result_1;
            let var_4b0_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb52ac8e4df106051;
            var_318 = &data_534da0;
            *var_318[8] = 2;
            let var_2f8_1: i64 = 0;
            let var_308_3: *mut *mut *mut i64 = &var_4b8;
            let mut var_300: i32;
            var_300 = 1;
            let mut var_3b0: i128;
            core::option::Option$LT$T$GT$::map_or_else::h56059d1a533ad2f3(&var_3b0, &var_318);
            let var_300_3: i32 = 1;
            var_318 = var_3b0;
            let var_3a0: i64;
            let var_308_4: i64 = var_3a0;
            result = alloc::boxed::Box$LT$T$GT$::new::h1b07cb96cdbb794f(&var_318);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h82574bbf4bf299f6(&var_478);
        }
        else
        {
            uu_shuf::parse_range::h895d1bf452e4062a(&var_4b8, *rax_4.byte_offset(8), 
                *rax_4.byte_offset(0x10));
            
            if var_4b8 == 0
            {
                var_440_1 = *var_4a8[8];
                var_450 = var_4b0;
                var_458_1 = 2;
                'label_47017a:
                let mut r13: i64;
                r13 = 1;
                clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h1c55b0f937b7ea2b(&var_318, &var_3e8, "head-countoutputrandom-sourcerep…", 0xa);
                r13 = 1;
                let mut rsi_8: *mut i8 = "head-countoutputrandom-sourcerep…";
                clap_builder::parser::error::MatchesError::unwrap::h15a6d75047b4cc93(&var_4b8, 
                    "head-countoutputrandom-sourcerep…", 0xa, &var_318);
                let mut rax_7: *mut *mut i64 = var_4b8;
                let mut rcx_6: *const i8;
                let mut rdx_4: i64;
                let mut zmm0_5: i128;
                let mut zmm1_3: u128;
                
                if rax_7 == 0
                {
                    zmm0_5 = {0};
                    zmm1_3 = "a Display implementation returne…";
                    rcx_6 = "a Display implementation returne…";
                    rax_7 = core::ops::function::FnOnce::call_once::h1a1f904dbec84d2c;
                    rdx_4 = 0;
                }
                else
                {
                    rcx_6 = var_4b0;
                    zmm1_3 = var_4a8;
                    zmm0_5 = var_498;
                    rsi_8 = var_488;
                    rdx_4 = var_480;
                }
                
                let mut var_358: *mut *mut i64 = rax_7;
                let var_350_1: *const i8 = rcx_6;
                let var_348_1: u128 = zmm1_3;
                let var_338_1: i128 = zmm0_5;
                let var_328_1: *mut i8 = rsi_8;
                let var_320_1: i64 = rdx_4;
                r13 = 1;
                let mut var_48: ();
                _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h8ae58320f9a9f8d8(&var_48, &var_358);
                r13 = 1;
                uu_shuf::parse_head_count::h8e9cdbfd7a5f28a8(&var_478, &var_48);
                let mut rax_20: i8;
                
                if var_478 != -0x8000000000000000
                {
                    let var_308_2: *mut *mut c_void = var_468;
                    var_318 = var_478;
                    let var_300_2: i32 = 1;
                    r13 = 1;
                    result = alloc::boxed::Box$LT$T$GT$::new::h1b07cb96cdbb794f(&var_318);
                    r13 = 1;
                    rax_20 = 0;
                }
                else
                {
                    r13 = 1;
                    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h5130577ecdee41f3(&var_318, &var_3e8, "outputrandom-sourcerepeatzero-te…", 6);
                    r13 = 1;
                    let rax_8: *mut c_void =
                        clap_builder::parser::error::MatchesError::unwrap::h700c3f9b5e5ff3dc(
                        "outputrandom-sourcerepeatzero-te…", 6, &var_318);
                    
                    if rax_8 == 0
                    {
                        result_1 = -0x8000000000000000;
                    }
                    else
                    {
                        r13 = 1;
                        core::ops::function::FnOnce::call_once::h7c91e57bb3d70dfc(&var_318, rax_8);
                        var_4c8 = var_308;
                        result_1 = var_318;
                    }
                    
                    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h5130577ecdee41f3(&var_318, &var_3e8, "random-sourcerepeatzero-terminat…", 0xd);
                    let rax_12: *mut c_void =
                        clap_builder::parser::error::MatchesError::unwrap::h700c3f9b5e5ff3dc(
                        "random-sourcerepeatzero-terminat…", 0xd, &var_318);
                    
                    if rax_12 == 0
                    {
                        var_4b8 = -0x8000000000000000;
                    }
                    else
                    {
                        core::ops::function::FnOnce::call_once::h7c91e57bb3d70dfc(&var_318, rax_12);
                        var_4a8 = var_308;
                        var_4b8 = var_318;
                    }
                    
                    let rax_14: i32 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&var_3e8, "repeatzero-terminatedfile-or-arg…", 6);
                    let mut rax_16: i8 = 0xa;
                    
                    if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&var_3e8, "zero-terminatedfile-or-argssrc/u…", 0xf) != 0
                    {
                        rax_16 = 0;
                    }
                    
                    let var_470: *mut *mut c_void;
                    var_408 = var_470;
                    var_438 = result_1;
                    var_420 = var_4b8;
                    let var_410_1: i64 = var_4a8;
                    var_400 = rax_14;
                    *var_400[1] = rax_16;
                    let mut var_4d0: i32;
                    let mut rax_21: bool;
                    let mut rbp_1: i32;
                    
                    if var_470 != 0
                    {
                        let mut var_2f8: i64;
                        
                        if var_458_1 == 0
                        {
                            let var_468_1: *mut *mut c_void = var_440_1;
                            var_478 = var_450;
                            rbp_1 = 1;
                            uu_shuf::read_input_file::h39a00d9d5113d201(&var_318, var_470, 
                                var_440_1);
                            let result_5: *mut i64 = var_318;
                            result = *var_318[8];
                            let rbx_1: bool = result_5 != -0x8000000000000000;
                            let mut var_3f0_1: bool;
                            
                            if result_5 == -0x8000000000000000
                            {
                                var_3f0_1 = rbx_1;
                                rbp_1 = 1;
                            }
                            else
                            {
                                result_1 = result_5;
                                var_4d0 = result;
                                let var_4c8_2: *mut *mut c_void = var_308;
                                let rax_22: *mut i128 =
                                    alloc::alloc::Global::alloc_impl::hf61749d460433fff(8, 0x10);
                                
                                if rax_22 == 0
                                {
                                    rbp_1 = 1;
                                    alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1();
                                    /* no return */
                                }
                                
                                *rax_22 = var_4d0;
                                rbp_1 = 1;
                                alloc::slice::hack::into_vec::hd1dfd8daa9e7ad57(&var_4b8, rax_22, 
                                    1);
                                rbp_1 = 1;
                                uu_shuf::find_seps::h99b31571ceae9626(&var_4b8, *var_400[1]);
                                let var_2e8_2: i128 = var_408;
                                var_2f8 = var_418;
                                var_308 = var_4c8;
                                var_318 = var_438;
                                let mut result_3: *mut i128;
                                let mut rdx_10: *mut *mut c_void;
                                result_3 =
                                    uu_shuf::shuf_exec::hac410ad30c9cf5e0(&var_4b8, &var_318);
                                result = result_3;
                                
                                if result_3 == 0
                                {
                                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$$u5b$u8$u5d$$GT$$GT$::h8c2db6f5bbd8aeff(&var_4b8);
                                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h6ef57aee3fe1037c(&result_1);
                                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h82574bbf4bf299f6(&var_478);
                                    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h9b9b56585c1556b7(&var_3e8);
                                    return nullptr;
                                }
                                
                                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$$u5b$u8$u5d$$GT$$GT$::h8c2db6f5bbd8aeff(&var_4b8);
                                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h6ef57aee3fe1037c(&result_1);
                                var_3f0_1 = rbx_1;
                            }
                            
                            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h82574bbf4bf299f6(&var_478);
                            r13 = 0;
                            rax_21 = var_3f0_1;
                            goto 'label_470a3a;
                        }
                        
                        if var_458_1 != 1
                        {
                            var_4a8 = var_440_1;
                            var_4b8 = var_450;
                            let var_2e8_3: i128 = var_408;
                            var_2f8 = var_418;
                            var_308 = var_4c8;
                            var_318 = var_438;
                            r13 = 1;
                            let mut result_4: *mut i128;
                            let mut rdx_11: *mut *mut c_void;
                            result_4 = uu_shuf::shuf_exec::h63b6b406387eb323(&var_4b8, &var_318);
                            result = result_4;
                            
                            if result_4 == 0
                            {
                                core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h9b9b56585c1556b7(&var_3e8);
                                return nullptr;
                            }
                            
                            r13 = 1;
                            rax_20 = 0;
                        }
                        else
                        {
                            let var_4c8_1: *mut *mut c_void = var_440_1;
                            result_1 = var_450;
                            let rsi_16: *mut c_void = var_4d0;
                            rbp_1 = 1;
                            _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h0c1703a302f6baf2(&var_4b8, rsi_16, rsi_16.byte_offset(var_440_1 * 0x18));
                            rbp_1 = 1;
                            uu_shuf::find_seps::h99b31571ceae9626(&var_4b8, *var_400[1]);
                            let var_2e8_1: i128 = var_408;
                            var_2f8 = var_418;
                            var_308 = var_4c8;
                            var_318 = var_438;
                            let mut result_2: *mut i128;
                            let mut rdx_8: *mut *mut c_void;
                            result_2 = uu_shuf::shuf_exec::hac410ad30c9cf5e0(&var_4b8, &var_318);
                            result = result_2;
                            
                            if result_2 == 0
                            {
                                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$$u5b$u8$u5d$$GT$$GT$::h8c2db6f5bbd8aeff(&var_4b8);
                                r13 = 1;
                                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::hecb8eb1545457149(&result_1);
                                core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h9b9b56585c1556b7(&var_3e8);
                                return nullptr;
                            }
                            
                            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$$u5b$u8$u5d$$GT$$GT$::h8c2db6f5bbd8aeff(&var_4b8);
                            r13 = 1;
                            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::hecb8eb1545457149(&result_1);
                            rax_20 = 1;
                            r13 = 1;
                        }
                    }
                    else if var_438 != -0x8000000000000000
                    {
                        let var_308_5: *mut *mut c_void = var_4c8;
                        var_318 = var_438;
                        std::fs::File::create::hb8ccd5b0dd142e83(&var_4b8, *var_318[8]);
                        _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h67140753012254c0(&result_1, &var_4b8, &var_318);
                        result = result_1;
                        
                        if result == 0
                        {
                            var_478 = var_4d0;
                            core::ptr::drop_in_place$LT$std..fs..File$GT$::h7b66de550f035524(
                                &var_478);
                            rbp_1 = 1;
                            r13 = 1;
                            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h82574bbf4bf299f6(&var_318);
                            r13 = 1;
                            result = nullptr;
                        }
                        else
                        {
                            rbp_1 = 1;
                            r13 = 1;
                            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h82574bbf4bf299f6(&var_318);
                            r13 = 1;
                        }
                        
                        core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..string..String$GT$$GT$::h03d131beae776ea8(&var_420);
                        rax_20 = 0;
                    }
                    else
                    {
                        r13 = 1;
                        result = nullptr;
                        rax_21 = false;
                        'label_470a3a:
                        
                        if rax_21 == 0 && var_438 != -0x8000000000000000
                        {
                            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h82574bbf4bf299f6(&var_438);
                            core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..string..String$GT$$GT$::h03d131beae776ea8(&var_420);
                            rax_20 = 0;
                        }
                        else if rax_21 == 0
                        {
                            core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..string..String$GT$$GT$::h03d131beae776ea8(&var_420);
                            rax_20 = 0;
                        }
                        else
                        {
                            rax_20 = 0;
                        }
                    }
                }
                
                if var_458_1 == 0
                {
                    if r13 != 0
                    {
                        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h82574bbf4bf299f6(
                            &var_450);
                    }
                }
                else if var_458_1 == 1 && rax_20 == 0
                {
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::hecb8eb1545457149(&var_450);
                }
            }
            else
            {
                let var_308_1: i64 = *var_4a8[8];
                var_318 = var_4b0;
                let var_300_1: i32 = 1;
                result = alloc::boxed::Box$LT$T$GT$::new::h1b07cb96cdbb794f(&var_318);
            }
        }
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h9b9b56585c1556b7(&var_3e8);
    }
    else
    {
        result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7fb9d0425989847a(var_4b0);
    }
    result
}
