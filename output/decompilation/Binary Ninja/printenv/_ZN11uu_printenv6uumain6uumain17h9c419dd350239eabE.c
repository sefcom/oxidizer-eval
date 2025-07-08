
  int32_t* uu_printenv::uumain::uumain::h9c419dd350239eab(void* arg1)

{
    int128_t var_2f8;
    uu_printenv::uu_app::hf1331131741036ed(&var_2f8);
    void var_330;
    clap_builder::builder::command::Command::get_matches_from::h513927fcdb2d9a9a(&var_330, 
        &var_2f8, arg1);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h147f1cf25fd8ae8e(
        &var_2f8, &var_330, "variables0.0.28Display the value…", 9);
    int128_t* var_3b8;
    clap_builder::parser::error::MatchesError::unwrap::hbf01985c69d4c13e(&var_3b8, 
        "variables0.0.28Display the value…", 9, &var_2f8);
    int64_t var_440;
    int64_t var_430;
    int64_t var_408;
    int128_t var_400;
    int128_t var_3a8;
    int128_t var_398;
    int128_t var_2e8;
    int128_t var_2d8;
    
    if (!var_3b8)
    {
        label_457d5e:
        var_440 = 0;
        int64_t var_438_1 = 8;
        var_430 = 0;
    }
    else
    {
        int128_t var_388;
        int128_t var_2c8_1 = var_388;
        var_2d8 = var_398;
        var_2e8 = var_3a8;
        var_2f8 = var_3b8;
        _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h65e73dfc47f1c957(&var_408, &var_2f8);
        int64_t rax_1 = var_408;
        var_2f8 = var_400;
        
        if (rax_1 == -0x8000000000000000)
            goto label_457d5e;
        
        int64_t var_438;
        var_438 = var_2f8;
        var_440 = rax_1;
    }
    
    void* const rdx_1 = "\nTry ' --help' for more informa…";
    
    if (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
            &var_330, "nullBOLD\x1b[4mSomedumb\x1b[5m <…", 4))
        rdx_1 = &data_4123b0;
    
    void* const var_378 = rdx_1;
    int64_t var_370 = 1;
    int128_t var_458;
    int128_t var_428;
    int128_t var_3f0;
    int128_t var_3d8;
    
    if (!var_430)
    {
        int128_t var_350;
        std::env::vars::h104f59bf3851ffdb(&var_350);
        int128_t var_340;
        int128_t var_3c8_1 = var_340;
        var_3d8 = var_350;
        
        while (true)
        {
            _$LT$std..env..Vars$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h0b476a668b5d347e(&var_408, &var_3d8);
            
            if (var_408 == -0x8000000000000000)
                break;
            
            int64_t var_448_2 = *var_400[8];
            var_458 = var_408;
            int64_t var_3e0;
            int64_t var_418_2 = var_3e0;
            var_428 = var_3f0;
            var_2f8 = &var_458;
            *var_2f8[8] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            var_2e8 = &var_428;
            *var_2e8[8] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            var_2d8 = &var_378;
            *var_2d8[8] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::ha20f7cd80dde8271;
            var_3b8 = &data_500dd0;
            int64_t var_3b0_2 = 3;
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
    int64_t i;
    _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h2a888fb598bf45e4(&i, &var_3d8);
    int32_t rbx_1;
    rbx_1 = 1;
    
    if (i != -0x8000000000000000)
    {
        rbx_1 = 0;
        
        do
        {
            var_458 = i;
            void* var_358;
            
            if (!_$LT$char$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::hf6fa57beb1c3cfdf(*var_458[8], var_358))
            {
                var_2e8 = var_358;
                var_2f8 = var_458;
                std::env::var::hd00663f2ee81a0d5(&var_408, &var_2f8);
                void* const r14;
                r14 = 1;
                
                if (var_408)
                {
                    core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..env..VarError$GT$$GT$::h6178202d1b7b8af5(&var_408);
                    rbx_1 = r14;
                }
                else
                {
                    int64_t var_418_1 = var_3f0;
                    var_428 = var_400;
                    var_3b8 = &var_428;
                    int64_t (* var_3b0_1)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
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
                    
                    if (var_408)
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
        } while (i != -0x8000000000000000);
        
        rbx_1 = !(rbx_1 & 1);
    }
    
    core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$alloc..string..String$GT$$GT$::h7ca05d8393a14950(&var_3d8);
    int32_t* result;
    
    if (!rbx_1)
        result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$i32$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h0b17f6d5d891df77(1);
    else
        result = nullptr;
    
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::ha29e73f210cabebc(&var_330);
    return result;
}
