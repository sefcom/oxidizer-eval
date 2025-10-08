
  uint64_t uu_printenv::uumain::uumain::h8fd3ece72bc2d10b(int64_t arg1)

{
    void* const i_2;
    uu_printenv::uu_app::h7bc4be2a87c56121(&i_2);
    void var_370;
    clap_builder::builder::command::Command::get_matches_from::ha278466ca55fe929(&var_370, &i_2, 
        arg1);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h1ee5d1d1c1217de9(&i_2, 
        &var_370, "variables(uutils coreutils) 0.0.…", 9);
    int64_t var_338;
    clap_builder::parser::error::MatchesError::unwrap::h5ba7c6976e7b2469(&var_338, 
        "variables(uutils coreutils) 0.0.…", 9, &i_2);
    void* const i_4;
    int64_t var_430;
    int128_t var_408;
    int128_t var_2f0;
    
    if (!var_338)
    {
        label_44a124:
        i_4 = nullptr;
        int64_t var_438_1 = 8;
        var_430 = 0;
    }
    else
    {
        core::iter::traits::iterator::Iterator::collect::hc257ffbfa865b358(&i_2, &var_338);
        void* const i_3 = i_2;
        var_408 = var_2f0;
        
        if (i_3 == -0x8000000000000000)
            goto label_44a124;
        
        int64_t var_438;
        var_438 = var_408;
        i_4 = i_3;
    }
    
    char const* const rdx_1 = "\nTry ' --help' for more informa…";
    
    if (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            &var_370, "null\x1b[4mdumbSome\x1b[5m\x1b[9…", 4))
        rdx_1 = &data_4160b0[0x80];
    
    char const* const var_3d0 = rdx_1;
    int64_t var_3c8 = 1;
    uint64_t result;
    int128_t var_478;
    void* i_1;
    char* var_450;
    int128_t var_428;
    int64_t var_3c0;
    int128_t var_3a8;
    
    if (!var_430)
    {
        int128_t var_390;
        std::env::vars::h43d0a176db605fd6(&var_390);
        int128_t var_380;
        int128_t var_418_1 = var_380;
        var_428 = var_390;
        
        while (true)
        {
            _$LT$std..env..Vars$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h404dd3a585398847(&var_3c0, &var_428);
            
            if (var_3c0 == -0x8000000000000000)
                break;
            
            int64_t var_3b0;
            int64_t var_448_1 = var_3b0;
            i_1 = var_3c0;
            int64_t var_398;
            int64_t var_468_1 = var_398;
            var_478 = var_3a8;
            i_2 = &i_1;
            var_2f0 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
            *var_2f0[8] = &var_478;
            int64_t (* var_2e0_1)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
            char const* const* var_2d8_1 = &var_3d0;
            int64_t (* var_2d0_1)(int64_t* arg1, int64_t arg2) =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hdd05f0457f66b036;
            var_408 = &data_4d3ac0;
            *var_408[8] = 3;
            int64_t var_3e8_1 = 0;
            void* const* var_3f8_1 = &i_2;
            int64_t var_3f0_1 = 3;
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
        void* i = i_1;
        char r12_1;
        
        if (i != -0x8000000000000000)
        {
            r12_1 = 0;
            
            do
            {
                void* var_448;
                
                if (_$LT$char$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h822e1c3c690e59b6(var_450, var_448))
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
                    
                    if (var_3c0 != 1)
                    {
                        int64_t var_468_2 = var_3a8;
                        int128_t var_3b8;
                        var_478 = var_3b8;
                        var_408 = &var_478;
                        *var_408[8] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                        char const* const* var_3f8_2 = &var_3d0;
                        int64_t (* var_3f0_2)(int64_t* arg1, int64_t arg2) =
                            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hdd05f0457f66b036;
                        i_2 = &data_416010;
                        var_2f0 = 2;
                        int64_t var_2d8_2 = 0;
                        *var_2f0[8] = &var_408;
                        int64_t var_2e0_2 = 2;
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
            } while (i != -0x8000000000000000);
        }
        else
            r12_1 = 0;
        
        core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$alloc..string..String$GT$$GT$::h523f585653073797(&var_428);
        
        if (!(r12_1 & 1))
            result = 0;
        else
            result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$i32$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h9e5cddc9f9643acf(1);
    }
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h641dbfcaab556ab2(&var_370);
    return result;
}
