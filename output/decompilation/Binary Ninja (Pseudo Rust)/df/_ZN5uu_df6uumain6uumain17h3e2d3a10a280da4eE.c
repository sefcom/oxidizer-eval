
  fn uu_df::uumain::uumain::h3e2d3a10a280da4e(arg1: i64) -> *mut i64

{
    let mut var_2e8: *mut c_void;
    uu_df::uu_app::h9c55c0d492ce5ccf(&var_2e8);
    let mut var_3b8: *mut c_void;
    clap_builder::builder::command::Command::try_get_matches_from::h7ec40c233007e04c(&var_3b8, 
        &var_2e8, arg1);
    let rax: *mut c_void = var_3b8;
    let mut result: *mut i64;
    let mut var_3b0: i64;
    
    if rax != -0x8000000000000000
    {
        let var_388: i64;
        let var_330_1: i64 = var_388;
        let mut var_398: i128;
        let var_340_1: i128 = var_398;
        let mut var_3a8: i128;
        let var_350_1: i128 = var_3a8;
        let mut var_360: *mut c_void = rax;
        let var_358_1: i64 = var_3b0;
        uu_df::Options::from::h9a68833b14202507(&var_2e8, &var_360);
        let rax_2: *mut c_void = var_2e8;
        let mut var_438: i128;
        let mut var_3f8: *mut c_void;
        let mut var_3e8: i128;
        let mut var_2e0: i128;
        
        if rax_2 != -0x8000000000000000
        {
            let zmm0_2: i128 = var_2e0;
            let var_2c0: i128;
            var_398 = var_2c0;
            let var_2b0: i128;
            let var_380_1: i128 = var_2b0;
            let var_2a0: i128;
            let var_370_1: i128 = var_2a0;
            var_438 = zmm0_2;
            var_3b0 = zmm0_2;
            let mut var_2d0: i128;
            var_3a8 = var_2d0;
            var_3b8 = rax_2;
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::hff4ab90c18903b33(
                &var_2e8, &var_360, "pathsportabilityprint-typeexclud…", 5);
            clap_builder::parser::error::MatchesError::unwrap::hc21f192ef43813f5(&var_3f8, 
                "pathsportabilityprint-typeexclud…", 5, &var_2e8);
            let mut var_450: *mut c_void;
            let mut var_418_1: *mut c_void;
            let mut var_410_1: i64;
            let mut var_408_1: *mut i64;
            let mut var_3d8: i128;
            
            if var_3f8 == 0
            {
                uu_df::get_all_filesystems::ha419c9a63b8c437a(&var_2e8, &var_3b8);
                let rax_6: *mut c_void = var_2e8;
                let rdi_12: i64 = var_2e0;
                let rsi_9: *mut i64 = *var_2e0[8];
                
                if rax_6 != -0x8000000000000000
                {
                    var_450 = rax_6;
                    
                    if rsi_9 != 0
                    {
                        var_408_1 = rsi_9;
                        var_418_1 = var_450;
                        var_410_1 = rdi_12;
                        'label_473d6a:
                        var_3e8 = var_408_1;
                        var_3f8 = var_418_1;
                        let var_3f0_1: i64 = var_410_1;
                        uu_df::table::Table::new::h150da2e8fce38b34(&var_2e8, &var_3b8, &var_3f8);
                        var_438 = &var_2e8;
                        *var_438[8] = _$LT$uu_df..table..Table$u20$as$u20$core..fmt..Display$GT$::fmt::h176e29e24006d431;
                        var_3f8 = &data_53eab0;
                        let var_3f0_2: i64 = 2;
                        var_3d8 = 0;
                        var_3e8 = &var_438;
                        *var_3e8[8] = 1;
                        std::io::stdio::_print::he918bceb0c89db46(&var_3f8);
                        core::ptr::drop_in_place$LT$uu_df..table..Table$GT$::h912b6fdb4689292d(
                            &var_2e8);
                        core::ptr::drop_in_place$LT$uu_df..Options$GT$::hac76dba687740dae(&var_3b8);
                        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hf2cbfd61c61225fd(&var_360);
                        return nullptr;
                    }
                    
                    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h7a10e08ff6fcd418(
                        &var_438);
                    let var_428: *mut i64;
                    *var_2e0[8] = var_428;
                    var_2e8 = var_438;
                    var_2d0 = 1;
                    result = alloc::boxed::Box$LT$T$GT$::new::h373238094c284474(&var_2e8);
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_df..filesystem..Filesystem$GT$$GT$::h10c83d45de38d664(&var_450);
                }
                else
                {
                    result = uu_df::uumain::uumain::_$u7b$$u7b$closure$u7d$$u7d$::h5335e9feeb0174e9(
                        rdi_12, rsi_9);
                }
            }
            else
            {
                let var_3c8: i128;
                let var_2f8_1: i128 = var_3c8;
                let var_308_1: i128 = var_3d8;
                let var_318_1: i128 = var_3e8;
                let mut var_328: i128 = var_3f8;
                _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h8a263af31a8d7fc8(&var_450, &var_328);
                let var_448: i64;
                let var_440: i64;
                uu_df::get_named_filesystems::hf6e388544e0196ff(&var_2e8, var_448, var_440, 
                    &var_3b8);
                let rax_4: *mut c_void = var_2e8;
                let rdi_10: i64 = var_2e0;
                let rsi_7: *mut i64 = *var_2e0[8];
                
                if rax_4 != -0x8000000000000000
                {
                    var_438 = rax_4;
                    *var_438[8] = rdi_10;
                    
                    if rsi_7 != 0
                    {
                        var_408_1 = rsi_7;
                        var_418_1 = var_438;
                        var_410_1 = *var_438[8];
                        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$alloc..string..String$GT$$GT$::h8f2c1f41fdac9f86(&var_450);
                        goto 'label_473d6a;
                    }
                    
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_df..filesystem..Filesystem$GT$$GT$::h10c83d45de38d664(&var_438);
                    result = nullptr;
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$alloc..string..String$GT$$GT$::h8f2c1f41fdac9f86(&var_450);
                }
                else
                {
                    result = uu_df::uumain::uumain::_$u7b$$u7b$closure$u7d$$u7d$::h5335e9feeb0174e9(
                        rdi_10, rsi_7);
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$alloc..string..String$GT$$GT$::h8f2c1f41fdac9f86(&var_450);
                }
            }
            core::ptr::drop_in_place$LT$uu_df..Options$GT$::hac76dba687740dae(&var_3b8);
        }
        else
        {
            core::ops::function::FnOnce::call_once::h863533e3c19f7681(&var_3f8, &var_2e0);
            let zmm0_3: i128 = var_3f8;
            var_438 = zmm0_3;
            let var_428_1: i128 = var_3e8;
            var_2e0 = var_3e8;
            var_2e8 = zmm0_3;
            result = alloc::boxed::Box$LT$T$GT$::new::hf8971d9a7f69a8c7(&var_2e8);
        }
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hf2cbfd61c61225fd(&var_360);
    }
    else
    {
        result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7fb9d0425989847a(var_3b0);
    }
    result
}
