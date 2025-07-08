
  int64_t* uu_basename::uumain::uumain::hafa1ff2c988de7cb(int64_t arg1)

{
    int128_t var_340;
    uucore::Args::collect_lossy::h23c2a3e3ca25697a(&var_340, arg1);
    void (* var_2f8)() __noreturn;
    uu_basename::uu_app::h0b657963404f564a(&var_2f8);
    int64_t var_330;
    int64_t var_388 = var_330;
    int128_t var_398 = var_340;
    void (* var_3f8)() __noreturn;
    clap_builder::builder::command::Command::try_get_matches_from::he6bf499b6a746767(&var_3f8, 
        &var_2f8, &var_398);
    void (* rax_1)() __noreturn = var_3f8;
    char* var_3f0;
    
    if (rax_1 == -0x8000000000000000)
        return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7fb9d0425989847a(var_3f0);
    
    char* var_3c8;
    char* var_348_1 = var_3c8;
    int128_t var_3d8;
    int128_t var_358_1 = var_3d8;
    uint128_t var_3e8;
    uint128_t var_368_1 = var_3e8;
    void (* var_378)() __noreturn = rax_1;
    char* var_370_1 = var_3f0;
    char rax_4 = 0xa;
    
    if (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
            &var_378, "zeroAnsi -- \x1b[8mhelpNoneshimn…", 4))
        rax_4 = 0;
    
    char var_411 = rax_4;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h78ff5d19ca8609fd(
        &var_2f8, &var_378, &data_412f24[0xc], 4);
    char const* const rsi_4 = &data_412f24[0xc];
    clap_builder::parser::error::MatchesError::unwrap::h9a0d3a6d2e9de983(&var_3f8, 
        &data_412f24[0xc], 4, &var_2f8);
    void (* rax_5)() __noreturn = var_3f8;
    char const* const rcx_3;
    int64_t rdx_2;
    int128_t zmm0_2;
    uint128_t zmm1_2;
    
    if (!rax_5)
    {
        zmm0_2 = {0};
        zmm1_2 = "a Display implementation returne…";
        rcx_3 = "a Display implementation returne…";
        rax_5 = core::ops::function::FnOnce::call_once::h1749e4eba30ca774;
        rdx_2 = 0;
    }
    else
    {
        rcx_3 = var_3f0;
        zmm1_2 = var_3e8;
        zmm0_2 = var_3d8;
        rsi_4 = var_3c8;
        int64_t var_3c0;
        rdx_2 = var_3c0;
    }
    
    var_2f8 = rax_5;
    uint128_t var_2e8_1 = zmm1_2;
    int128_t var_2d8_1 = zmm0_2;
    char const* const var_2c8_1 = rsi_4;
    int64_t var_2c0_1 = rdx_2;
    void var_3b0;
    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h2380b6632f2686cc(&var_3b0, &var_2f8);
    int64_t var_3a0;
    int64_t* result;
    
    if (!var_3a0)
    {
        _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h4f222ef6d9974619(&var_3f8);
        var_2e8_1 = var_3e8;
        var_2f8 = var_3f8;
        *var_2e8_1[8] = 1;
        result = alloc::boxed::Box$LT$T$GT$::new::h75d2f99a8ee9cadd(&var_2f8);
    }
    else
    {
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h6b765cbc81459d91(
            &var_2f8, &var_378, "suffix0.0.28{} [-z] NAME [SUFFIX…", 6);
        int64_t rax_6 = clap_builder::parser::error::MatchesError::unwrap::hb9e5bc066166ebb5(
            "suffix0.0.28{} [-z] NAME [SUFFIX…", 6, &var_2f8);
        char rax_7;
        
        if (!rax_6)
            rax_7 =
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
                &var_378, "multipleNO_COLOREL3HLTEL3RSTELNR…", 8);
        
        void (* var_410)() __noreturn;
        
        if (rax_6 || rax_7)
        {
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h6b765cbc81459d91(
                &var_2f8, &var_378, "suffix0.0.28{} [-z] NAME [SUFFIX…", 6);
            void* rax_8 = clap_builder::parser::error::MatchesError::unwrap::hb9e5bc066166ebb5(
                "suffix0.0.28{} [-z] NAME [SUFFIX…", 6, &var_2f8);
            int64_t var_408;
            
            if (rax_8)
            {
                _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(&var_2f8, rax_8);
                void (* rax_9)() __noreturn = var_2f8;
                var_3f8 = rcx_3;
                
                if (rax_9 != -0x8000000000000000)
                {
                    var_408 = var_3f8;
                    var_410 = rax_9;
                    goto label_463599;
                }
                
                goto label_4634fb;
            }
            
            label_4634fb:
            var_410 = nullptr;
            var_408 = 1;
            uint64_t var_400 = 0;
            label_463599:
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h89482ec4a8f60c59(&var_398, &var_3b0);
            
            for (void* i = _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h5b9010a19a1a5647(&var_398); i; i = _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h5b9010a19a1a5647(&var_398))
            {
                void var_310() __noreturn;
                uu_basename::basename::h5fea76ad93274f11(&var_310, *(i + 8), *(i + 0x10), var_408, 
                    var_400);
                var_3f8 = &var_310;
                int64_t (* var_3f0_1)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                var_3e8 = &var_411;
                *var_3e8[8] = _$LT$uucore..mods..line_ending..LineEnding$u20$as$u20$core..fmt..Display$GT$::fmt::h6643b2132dca5a5b;
                var_2f8 = &data_413768;
                int64_t var_2f0_2 = 2;
                var_2d8_1 = 0;
                var_2e8_1 = &var_3f8;
                *var_2e8_1[8] = 2;
                std::io::stdio::_print::he918bceb0c89db46(&var_2f8);
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::hec0dbaa5dc26e973(&var_310);
            }
            
            core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$$RF$alloc..string..String$GT$$GT$::h44d76e55d49ad863(&var_398);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hec0dbaa5dc26e973(&var_410);
            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hce81d941c7def3f2(&var_378);
            return nullptr;
        }
        
        if (var_3a0 == 1)
            goto label_4634fb;
        
        void* var_3a8;
        
        if (var_3a0 == 2)
        {
            int64_t var_3a0_1 = 1;
            _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(
                &var_410, *(var_3a8 + 8));
            goto label_463599;
        }
        
        if (!var_3a0)
        {
            var_2f8 = &data_50c2b0;
            int64_t var_2f0_4 = 1;
            var_2e8_1 = 8;
            var_2e8_1 = {0};
            core::panicking::panic_fmt::he12d0d7468628bb4(&var_2f8);
            /* no return */
        }
        
        int128_t zmm0_3 = *(*(var_3a8 + 0x10) + 8);
        var_3f8 = nullptr;
        var_3f0 = zmm0_3;
        *var_3e8[8] = 1;
        var_398 = &var_3f8;
        *var_398[8] =
            _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
        var_2f8 = &data_50c2c0;
        int64_t var_2f0_3 = 1;
        var_2d8_1 = 0;
        var_2e8_1 = &var_398;
        *var_2e8_1[8] = 1;
        int128_t var_328;
        core::option::Option$LT$T$GT$::map_or_else::hccb2c5237b9a5f11(&var_328, &var_2f8);
        *var_2e8_1[8] = 1;
        var_2f8 = var_328;
        int64_t var_318;
        var_2e8_1 = var_318;
        result = alloc::boxed::Box$LT$T$GT$::new::h75d2f99a8ee9cadd(&var_2f8);
    }
    
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$alloc..string..String$GT$$GT$::h800e991a5f8ef942(&var_3b0);
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hce81d941c7def3f2(&var_378);
    return result;
}
