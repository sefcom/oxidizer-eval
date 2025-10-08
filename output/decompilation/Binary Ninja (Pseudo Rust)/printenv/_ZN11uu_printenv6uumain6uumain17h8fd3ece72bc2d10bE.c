
  fn uu_printenv::uumain::uumain::h8fd3ece72bc2d10b(arg1: i64) -> u64

{
    let mut i_2: *mut c_void;
    uu_printenv::uu_app::h7bc4be2a87c56121(&i_2);
    let mut var_370: ();
    clap_builder::builder::command::Command::get_matches_from::ha278466ca55fe929(&var_370, &i_2, 
        arg1);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h1ee5d1d1c1217de9(&i_2, 
        &var_370, "variables(uutils coreutils) 0.0.…", 9);
    let mut var_338: i64;
    clap_builder::parser::error::MatchesError::unwrap::h5ba7c6976e7b2469(&var_338, 
        "variables(uutils coreutils) 0.0.…", 9, &i_2);
    let mut i_4: *mut c_void;
    let mut var_430: i64;
    let mut var_408: i128;
    let mut var_2f0: i128;
    
    if var_338 == 0
    {
        'label_44a124:
        i_4 = nullptr;
        let var_438_1: i64 = 8;
        var_430 = 0;
    }
    else
    {
        core::iter::traits::iterator::Iterator::collect::hc257ffbfa865b358(&i_2, &var_338);
        let i_3: *mut c_void = i_2;
        var_408 = var_2f0;
        
        if i_3 == -0x8000000000000000
        {
            goto 'label_44a124;
        }
        
        let mut var_438: i64;
        var_438 = var_408;
        i_4 = i_3;
    }
    
    let mut rdx_1: *const i8 = "\nTry ' --help' for more informa…";
    
    if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
        &var_370, "null\x1b[4mdumbSome\x1b[5m\x1b[9…", 4) != 0
    {
        rdx_1 = &data_4160b0[0x80];
    }
    
    let mut var_3d0: *const i8 = rdx_1;
    let var_3c8: i64 = 1;
    let mut result: u64;
    let mut var_478: i128;
    let mut i_1: *mut c_void;
    let var_450: *mut i8;
    let mut var_428: i128;
    let mut var_3c0: i64;
    let var_3a8: i128;
    
    if var_430 == 0
    {
        let mut var_390: i128;
        std::env::vars::h43d0a176db605fd6(&var_390);
        let var_380: i128;
        let var_418_1: i128 = var_380;
        var_428 = var_390;
        
        loop
        {
            _$LT$std..env..Vars$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h404dd3a585398847(&var_3c0, &var_428);
            
            if var_3c0 == -0x8000000000000000
            {
                break;
            }
            
            let var_3b0: i64;
            let var_448_1: i64 = var_3b0;
            i_1 = var_3c0;
            let var_398: i64;
            let var_468_1: i64 = var_398;
            var_478 = var_3a8;
            i_2 = &i_1;
            var_2f0 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
            *var_2f0[8] = &var_478;
            let var_2e0_1: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
            let var_2d8_1: *const *const i8 = &var_3d0;
            let var_2d0_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hdd05f0457f66b036;
            var_408 = &data_4d3ac0;
            *var_408[8] = 3;
            let var_3e8_1: i64 = 0;
            let var_3f8_1: *const *mut c_void = &i_2;
            let var_3f0_1: i64 = 3;
            std::io::stdio::_print::h5e446ff973c02de6(&var_408);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcc5c724ad2d0f8cd(var_478, 
                *var_478[8]);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcc5c724ad2d0f8cd(i_1, var_450);
        }
        
        core::ptr::drop_in_place$LT$std..env..Vars$GT$::h9afda0f4e6330cc3(&var_428);
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h8942d9781f61ec34(&i_4);
        result = 0;
    }
    else
    {
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h6ab0d41d54ad23b7(&var_428, &i_4);
        _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h375a3d63b869af12(&i_1, &var_428);
        let mut i: *mut c_void = i_1;
        let mut r12_1: i8;
        
        if i != -0x8000000000000000
        {
            r12_1 = 0;
            
            do
            {
                let var_448: *mut c_void;
                
                if _$LT$char$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h822e1c3c690e59b6(var_450, var_448) != 0
                {
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcc5c724ad2d0f8cd(i, 
                        var_450);
                    r12_1 = 1;
                }
                else
                {
                    i_2 = i;
                    var_2f0 = var_450;
                    *var_2f0[8] = var_448;
                    std::env::var::h6ab100885101925d(&var_3c0, &i_2);
                    
                    if var_3c0 != 1
                    {
                        let var_468_2: i64 = var_3a8;
                        let var_3b8: i128;
                        var_478 = var_3b8;
                        var_408 = &var_478;
                        *var_408[8] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                        let var_3f8_2: *const *const i8 = &var_3d0;
                        let var_3f0_2: fn(arg1: *mut i64, arg2: i64) -> i64 =
                            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hdd05f0457f66b036;
                        i_2 = &data_416010;
                        var_2f0 = 2;
                        let var_2d8_2: i64 = 0;
                        *var_2f0[8] = &var_408;
                        let var_2e0_2: i64 = 2;
                        std::io::stdio::_print::h5e446ff973c02de6(&i_2);
                        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcc5c724ad2d0f8cd(
                            var_478, *var_478[8]);
                    }
                    else
                    {
                        core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..env..VarError$GT$$GT$::hf97566c2d50e25be(&var_3c0);
                        r12_1 = 1;
                    }
                }
                
                _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h375a3d63b869af12(&i_1, &var_428);
                i = i_1;
            } while i != -0x8000000000000000;
        }
        else
        {
            r12_1 = 0;
        }
        
        core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$alloc..string..String$GT$$GT$::h523f585653073797(&var_428);
        
        if (r12_1 & 1) == 0
        {
            result = 0;
        }
        else
        {
            result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$i32$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h9e5cddc9f9643acf(1);
        }
    }
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h641dbfcaab556ab2(&var_370);
    result
}
