
  uint64_t uu_basename::uumain::uumain::ha49e03d0e3962009(int64_t arg1)

{
    void var_328;
    uucore::Args::collect_lossy::hecb26f64d9683062(&var_328, arg1);
    char const* const var_2f8;
    uu_basename::uu_app::h0214ef177401846b(&var_2f8);
    int64_t* var_3f8;
    clap_builder::builder::command::Command::try_get_matches_from::h24e84877b0c8982d(&var_3f8, 
        &var_2f8, &var_328);
    int64_t* rax = var_3f8;
    int64_t var_3f0;
    
    if (-(rax) == -0x8000000000000000)
        return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he92a37de32738e67(var_3f0);
    
    int64_t var_3c8;
    int64_t var_368_1 = var_3c8;
    int128_t var_3d8;
    int128_t var_378_1 = var_3d8;
    int128_t var_3e8;
    int128_t var_388_1 = var_3e8;
    int64_t* var_398 = rax;
    int64_t var_390_1 = var_3f0;
    char rax_3 = 0xa;
    
    if (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            &var_398, "zeroAnsi -- \x1b[8mhelpNoneshimn…", 4))
        rax_3 = 0;
    
    char var_411 = rax_3;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h9e6e9fdd60da60be(
        &var_2f8, &var_398, &data_417744[0xc], 4);
    clap_builder::parser::error::MatchesError::unwrap::hf682f947ff84a592(&var_3f8, 
        &data_417744[0xc], 4, &var_2f8);
    char const* const var_2f0;
    int64_t var_2e0;
    int128_t var_2d8;
    
    if (!var_3f8)
    {
        var_2f8 = core::ops::function::FnOnce::call_once::h289c9218362e944d;
        var_2f0 = "/home/34r7hm4n/.cargo/registry/s…";
        char const* const var_2e8_1 = "/home/34r7hm4n/.cargo/registry/s…";
        var_2e0 = 0;
        int64_t var_2d0_1 = 0;
        int64_t var_2c0_1 = 0;
    }
    else
    {
        int128_t var_2c8_1 = var_3c8;
        var_2d8 = var_3d8;
        int64_t var_2e8;
        var_2e8 = var_3e8;
        var_2f8 = var_3f8;
    }
    
    int64_t var_3b0;
    core::iter::traits::iterator::Iterator::collect::he47b67ece3ba9f11(&var_3b0, &var_2f8);
    int64_t var_3a0;
    void* rsi_8;
    uint64_t result;
    void* var_3a8;
    
    if (!var_3a0)
    {
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h34d7a5622c37d5a9(&var_3f8, "missing operandextra operan", 0xf);
        int64_t var_2e8_2 = var_3e8;
        var_2f8 = var_3f8;
        var_2e0 = 1;
        result = alloc::boxed::Box$LT$T$GT$::new::hcaae5bcc0d1feb54(&var_2f8);
        rsi_8 = var_3a8;
    }
    else
    {
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h069d3126daac21ee(
            &var_2f8, &var_398, "suffix(uutils coreutils) 0.0.30{…", 6);
        int64_t rax_4 = clap_builder::parser::error::MatchesError::unwrap::h546beac58f6283be(
            "suffix(uutils coreutils) 0.0.30{…", 6, &var_2f8);
        char rax_5;
        
        if (!rax_4)
            rax_5 =
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
                &var_398, "multipleNO_COLOREL3HLTEL3RSTELNR…", 8);
        
        char const* const var_410;
        int64_t var_408;
        uint64_t var_400;
        
        if (rax_4 || rax_5)
        {
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h069d3126daac21ee(
                &var_2f8, &var_398, "suffix(uutils coreutils) 0.0.30{…", 6);
            void* rax_6 = clap_builder::parser::error::MatchesError::unwrap::h546beac58f6283be(
                "suffix(uutils coreutils) 0.0.30{…", 6, &var_2f8);
            
            if (!rax_6)
            {
                label_450a8d:
                var_410 = nullptr;
                var_408 = 1;
                var_400 = 0;
                goto label_450b42;
            }
            
            _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(
                &var_2f8, rax_6);
            char const* const rax_7 = var_2f8;
            var_3f8 = var_2f0;
            
            if (rax_7 == -0x8000000000000000)
                goto label_450a8d;
            
            var_408 = var_3f8;
            var_410 = rax_7;
            goto label_450b42;
        }
        
        int64_t** var_360;
        
        if (var_3a0 == 2)
        {
            int64_t var_3a0_1 = 1;
            _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(
                &var_410, *(var_3a8 + 8));
            label_450b42:
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::hb13411dab2ba2685(&var_360, &var_3b0);
            
            for (void* i = _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hbf35aab382179bb7(&var_360); i; i = _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hbf35aab382179bb7(&var_360))
            {
                int64_t var_340;
                uu_basename::basename::hbc3fde56feb9aca0(&var_340, *(i + 8), *(i + 0x10), var_408, 
                    var_400);
                var_3f8 = &var_340;
                int64_t (* var_3f0_1)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                var_3e8 = &var_411;
                *var_3e8[8] = _$LT$uucore..mods..line_ending..LineEnding$u20$as$u20$core..fmt..Display$GT$::fmt::hd41883bc456718a9;
                var_2f8 = &data_417088;
                int64_t var_2f0_1 = 2;
                var_2d8 = 0;
                int64_t** var_2e8_3 = &var_3f8;
                int64_t var_2e0_1 = 2;
                std::io::stdio::_print::h5e446ff973c02de6(&var_2f8);
                int64_t var_338;
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::ha79e2e354e6e1bb0(var_340, 
                    var_338);
            }
            
            core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$$RF$alloc..string..String$GT$$GT$::h8f750361ef70de88(&var_360);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::ha79e2e354e6e1bb0(var_410, 
                var_408);
            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h9bb9cbae83786dbb(&var_398);
            return 0;
        }
        
        if (var_3a0 == 1)
            goto label_450a8d;
        
        void* rax_11 = *(var_3a8 + 0x10);
        int64_t rcx_4 = *(rax_11 + 8);
        int64_t rax_12 = *(rax_11 + 0x10);
        var_3f8 = nullptr;
        int64_t var_3f0_2 = rcx_4;
        var_3e8 = rax_12;
        *var_3e8[8] = 1;
        var_360 = &var_3f8;
        int64_t (* var_358_1)(int32_t* arg1, int64_t* arg2) =
            _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
        var_2f8 = &data_4de9a8;
        int64_t var_2f0_2 = 1;
        var_2d8 = 0;
        int64_t*** var_2e8_4 = &var_360;
        int64_t var_2e0_2 = 1;
        int128_t var_310;
        core::option::Option$LT$T$GT$::map_or_else::hb5149067130044dd(&var_310, &var_2f8);
        var_2e0_2 = 1;
        var_2f8 = var_310;
        int64_t var_300;
        int64_t var_2e8_5 = var_300;
        result = alloc::boxed::Box$LT$T$GT$::new::hcaae5bcc0d1feb54(&var_2f8);
        rsi_8 = var_3a8;
    }
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$usize$GT$$GT$::he5ab56466e96a171(var_3b0, rsi_8);
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h9bb9cbae83786dbb(&var_398);
    return result;
}
