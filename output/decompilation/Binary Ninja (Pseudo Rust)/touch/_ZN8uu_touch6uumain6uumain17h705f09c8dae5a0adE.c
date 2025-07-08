
  fn uu_touch::uumain::uumain::h705f09c8dae5a0ad(arg1: i64) -> *mut i64

{
    let mut var_2f8: i128;
    uu_touch::uu_app::h6cafa39b57a66b7b(&var_2f8);
    let mut var_418: i64;
    clap_builder::builder::command::Command::try_get_matches_from::h839733911ffe4e3d(&var_418, 
        &var_2f8, arg1);
    let rax: i64 = var_418;
    let mut result: *mut i64;
    let mut var_410: i64;
    
    if rax != -0x8000000000000000
    {
        let var_3e8: i64;
        let var_3a0_1: i64 = var_3e8;
        let mut var_3f8: i128;
        let var_3b0_1: i128 = var_3f8;
        let mut var_408: i128;
        let var_3c0_1: i128 = var_408;
        let mut var_3d0: i64 = rax;
        let var_3c8_1: i64 = var_410;
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h219e52a321966872(
            &var_2f8, &var_3d0, "filesatimemtime0.0.28Update the …", 5);
        clap_builder::parser::error::MatchesError::unwrap::h253c999d17ec96d2(&var_418, 
            "filesatimemtime0.0.28Update the …", 5, &var_2f8);
        let rax_2: i64 = var_418;
        
        if rax_2 == 0
        {
            result = uu_touch::uumain::uumain::_$u7b$$u7b$closure$u7d$$u7d$::h649caa4cf9839cd8();
        }
        else
        {
            let var_3e0: i64;
            let var_300_1: i64 = var_3e0;
            let var_310_1: i128 = var_3f8;
            let var_320_1: i128 = var_408;
            let mut var_338: i64 = rax_2;
            let var_330_1: i128 = var_410;
            let mut var_380: ();
            _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::he495c32affd9a0b5(&var_380, &var_338);
            let rax_3: i8 =
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
                &var_3d0, "no-dereferencereferencetimestamp", 0xe);
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::haaca2baeff626b88(
                &var_2f8, &var_3d0, "referencetimestamp", 9);
            let rax_4: *mut c_void =
                clap_builder::parser::error::MatchesError::unwrap::h85a915a6ea0f12c0(
                "referencetimestamp", 9, &var_2f8);
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h153b4a940d494604(
                &var_2f8, &var_3d0, "timestamp", 9);
            let rax_5: *mut c_void =
                clap_builder::parser::error::MatchesError::unwrap::h85a915a6ea0f12c0("timestamp", 
                9, &var_2f8);
            let mut var_438: i128;
            let mut var_428: *mut *mut c_void;
            let var_2e8: *mut *mut c_void;
            
            if rax_4 == 0
            {
                if rax_5 == 0
                {
                    var_438 = -0x7fffffffffffffff;
                    goto 'label_573cc9;
                }
                
                uu_touch::parse_timestamp::h96cd6cd8bd424ce5(&var_2f8, *rax_5.byte_offset(8), 
                    *rax_5.byte_offset(0x10));
                
                if var_2f8 == 0
                {
                    *var_438[8] = *var_2f8[8];
                    var_428 = var_2e8;
                    var_438 = -0x8000000000000000;
                    goto 'label_573cc9;
                }
                
                result = *var_2f8[8];
            }
            else
            {
                std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(&var_2f8, 
                    *rax_4.byte_offset(8), *rax_4.byte_offset(0x10));
                var_428 = var_2e8;
                var_438 = var_2f8;
                'label_573cc9:
                clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h153b4a940d494604(&var_2f8, &var_3d0, "datethur]", 4);
                let rax_7: *mut c_void =
                    clap_builder::parser::error::MatchesError::unwrap::h85a915a6ea0f12c0(
                    "datethur]", 4, &var_2f8);
                let mut var_398: i64;
                let mut var_388: *mut *mut c_void;
                
                if rax_7 == 0
                {
                    var_398 = -0x8000000000000000;
                }
                else
                {
                    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(&var_2f8, rax_7);
                    var_388 = var_2e8;
                    var_398 = var_2f8;
                }
                
                let rax_10: i8 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&var_3d0, "no-createno-dereferencereference…", 9);
                let mut var_368: i128 = var_438;
                var_408 = var_388;
                var_418 = var_398;
                let rax_13: bool =
                    uu_touch::determine_atime_mtime_change::hda9df64dc3778c17(&var_3d0);
                let var_2c8_1: i8 = rax_10;
                let var_2c7_1: i8 = rax_3;
                let var_2e0_1: i128 = var_368;
                let var_2d0_1: *mut *mut c_void = var_428;
                var_2f8 = var_418;
                let var_2e8_1: i64 = var_408;
                let var_2c5_1: bool = rax_13;
                let var_2c6_1: i8 = 0;
                let var_378: *mut i128;
                let var_370: i64;
                uu_touch::touch::h8e2a06923358d7c5(&var_368, var_378, var_370, &var_2f8);
                let rax_14: i64 = var_368;
                
                if rax_14 == -0x7ffffffffffffffc
                {
                    core::ptr::drop_in_place$LT$uu_touch..Options$GT$::hb83ab5f2538670c9(&var_2f8);
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_touch..InputFile$GT$$GT$::hca9fb99717cd0aa2(&var_380);
                    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h082071c536512932(&var_3d0);
                    return nullptr;
                }
                
                let var_340: i64;
                *var_3f8[8] = var_340;
                let var_350: i128;
                var_408 = var_350;
                var_410 = var_368;
                var_418 = rax_14;
                result = alloc::boxed::Box$LT$T$GT$::new::h5aa8999775824872(&var_418);
                core::ptr::drop_in_place$LT$uu_touch..Options$GT$::hb83ab5f2538670c9(&var_2f8);
            }
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_touch..InputFile$GT$$GT$::hca9fb99717cd0aa2(&var_380);
        }
        
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h082071c536512932(&var_3d0);
    }
    else
    {
        result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7fb9d0425989847a(var_410);
    }
    result
}
