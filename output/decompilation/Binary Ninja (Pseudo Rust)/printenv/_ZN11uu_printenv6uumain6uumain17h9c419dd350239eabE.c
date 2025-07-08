
  fn uu_printenv::uumain::uumain::h9c419dd350239eab(arg1: *mut c_void) -> *mut i32

{
    let mut var_2f8: i128;
    uu_printenv::uu_app::hf1331131741036ed(&var_2f8);
    let mut var_330: ();
    clap_builder::builder::command::Command::get_matches_from::h513927fcdb2d9a9a(&var_330, 
        &var_2f8, arg1);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h147f1cf25fd8ae8e(
        &var_2f8, &var_330, "variables0.0.28Display the value…", 9);
    let mut var_3b8: *mut i128;
    clap_builder::parser::error::MatchesError::unwrap::hbf01985c69d4c13e(&var_3b8, 
        "variables0.0.28Display the value…", 9, &var_2f8);
    let mut var_440: i64;
    let mut var_430: i64;
    let mut var_408: i64;
    let var_400: i128;
    let mut var_3a8: i128;
    let mut var_398: i128;
    let mut var_2e8: i128;
    let mut var_2d8: i128;
    
    if var_3b8 == 0
    {
        'label_457d5e:
        var_440 = 0;
        let var_438_1: i64 = 8;
        var_430 = 0;
    }
    else
    {
        let var_388: i128;
        let var_2c8_1: i128 = var_388;
        var_2d8 = var_398;
        var_2e8 = var_3a8;
        var_2f8 = var_3b8;
        _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h65e73dfc47f1c957(&var_408, &var_2f8);
        let rax_1: i64 = var_408;
        var_2f8 = var_400;
        
        if rax_1 == -0x8000000000000000
        {
            goto 'label_457d5e;
        }
        
        let mut var_438: i64;
        var_438 = var_2f8;
        var_440 = rax_1;
    }
    
    let mut rdx_1: *mut c_void = "\nTry ' --help' for more informa…";
    
    if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
        &var_330, "nullBOLD\x1b[4mSomedumb\x1b[5m <…", 4) != 0
    {
        rdx_1 = &data_4123b0;
    }
    
    let mut var_378: *mut c_void = rdx_1;
    let var_370: i64 = 1;
    let mut var_458: i128;
    let mut var_428: i128;
    let mut var_3f0: i128;
    let mut var_3d8: i128;
    
    if var_430 == 0
    {
        let mut var_350: i128;
        std::env::vars::h104f59bf3851ffdb(&var_350);
        let var_340: i128;
        let var_3c8_1: i128 = var_340;
        var_3d8 = var_350;
        
        loop
        {
            _$LT$std..env..Vars$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h0b476a668b5d347e(&var_408, &var_3d8);
            
            if var_408 == -0x8000000000000000
            {
                break;
            }
            
            let var_448_2: i64 = *var_400[8];
            var_458 = var_408;
            let var_3e0: i64;
            let var_418_2: i64 = var_3e0;
            var_428 = var_3f0;
            var_2f8 = &var_458;
            *var_2f8[8] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            var_2e8 = &var_428;
            *var_2e8[8] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            var_2d8 = &var_378;
            *var_2d8[8] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::ha20f7cd80dde8271;
            var_3b8 = &data_500dd0;
            let var_3b0_2: i64 = 3;
            var_398 = 0;
            var_3a8 = &var_2f8;
            *var_3a8[8] = 3;
            std::io::stdio::_print::he918bceb0c89db46(&var_3b8);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h9e7cd20c527a8eb1(&var_428);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h9e7cd20c527a8eb1(&var_458);
        }
        
        core::ptr::drop_in_place$LT$std..env..Vars$GT$::h43b81f51e3f95869(&var_3d8);
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h0871000d35d5b31a(&var_440);
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::ha29e73f210cabebc(&var_330);
        return nullptr;
    }
    
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::hde4ad9fc0cae4dbd(&var_3d8, &var_440);
    let mut i: i64;
    _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h2a888fb598bf45e4(&i, &var_3d8);
    let mut rbx_1: i32;
    rbx_1 = 1;
    
    if i != -0x8000000000000000
    {
        rbx_1 = 0;
        
        do
        {
            var_458 = i;
            let var_358: *mut c_void;
            
            if _$LT$char$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::hf6fa57beb1c3cfdf(*var_458[8], var_358) == 0
            {
                var_2e8 = var_358;
                var_2f8 = var_458;
                std::env::var::hd00663f2ee81a0d5(&var_408, &var_2f8);
                let mut r14: *mut c_void;
                r14 = 1;
                
                if var_408 != 0
                {
                    core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..env..VarError$GT$$GT$::h6178202d1b7b8af5(&var_408);
                    rbx_1 = r14;
                }
                else
                {
                    let var_418_1: i64 = var_3f0;
                    var_428 = var_400;
                    var_3b8 = &var_428;
                    let var_3b0_1: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                    var_3a8 = &var_378;
                    *var_3a8[8] =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::ha20f7cd80dde8271;
                    var_2f8 = &data_4122f0;
                    *var_2f8[8] = 2;
                    var_2d8 = 0;
                    var_2e8 = &var_3b8;
                    *var_2e8[8] = 2;
                    std::io::stdio::_print::he918bceb0c89db46(&var_2f8);
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h9e7cd20c527a8eb1(
                        &var_428);
                    
                    if var_408 != 0
                    {
                        core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..env..VarError$GT$$GT$::h6178202d1b7b8af5(&var_408);
                        rbx_1 = rbx_1;
                    }
                }
            }
            else
            {
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h9e7cd20c527a8eb1(&var_458);
                rbx_1 = 1;
            }
            
            _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h2a888fb598bf45e4(&i, &var_3d8);
        } while i != -0x8000000000000000;
        
        rbx_1 = (rbx_1 & 1) == 0;
    }
    
    core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$alloc..string..String$GT$$GT$::h7ca05d8393a14950(&var_3d8);
    let mut result: *mut i32;
    
    if rbx_1 == 0
    {
        result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$i32$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h0b17f6d5d891df77(1);
    }
    else
    {
        result = nullptr;
    }
    
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::ha29e73f210cabebc(&var_330);
    result
}
