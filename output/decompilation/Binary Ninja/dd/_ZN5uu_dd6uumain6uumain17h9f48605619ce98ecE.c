
  uint64_t uu_dd::uumain::uumain::h9f48605619ce98ec(int64_t arg1)

{
    int64_t var_2e8;
    uu_dd::uu_app::hb8ffca1f61c6f095(&var_2e8);
    uint64_t result_2;
    clap_builder::builder::command::Command::try_get_matches_from::h45546ddd9f814d66(&result_2, 
        &var_2e8, arg1);
    uint64_t result_3 = result_2;
    int64_t var_3c8;
    
    if (-(result_3) == -0x8000000000000000)
        /* tailcall */
        return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he92a37de32738e67(var_3c8);
    
    int64_t var_3a0;
    int64_t var_400 = var_3a0;
    int128_t var_3b0;
    int128_t var_410 = var_3b0;
    int128_t var_3c0;
    int128_t var_420 = var_3c0;
    uint64_t result_6 = result_3;
    int64_t var_428 = var_3c8;
    int64_t var_278 = -0x8000000000000000;
    int64_t var_260 = -0x8000000000000000;
    var_2e8 = 0;
    void** var_2d8 = nullptr;
    int64_t var_2c8 = 0;
    int64_t var_2b8 = 0;
    int128_t s;
    __builtin_memset(&s, 0, 0x20);
    int64_t var_288 = 2;
    int128_t s_1;
    __builtin_memset(&s_1, 0, 0x30);
    char var_218 = 3;
    void (* var_528)() __noreturn;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h474b6e809f4022ff(
        &var_528, &result_6);
    int64_t var_328;
    clap_builder::parser::error::MatchesError::unwrap::had8a575344470447(&var_328, &var_528);
    
    if (!var_328)
    {
        var_528 = core::ops::function::FnOnce::call_once::h022198c789277787;
        char const* const var_520_1 = "/home/34r7hm4n/.cargo/registry/s…";
        char const* const var_518_1 = "/home/34r7hm4n/.cargo/registry/s…";
        int64_t var_510_1 = 0;
        int64_t var_500_1 = 0;
        int64_t var_4f0_1 = 0;
    }
    else
    {
        int128_t var_2f8;
        int128_t var_4f8_1 = var_2f8;
        int128_t var_308;
        int128_t var_508_1 = var_308;
        int64_t var_518;
        int128_t var_318;
        var_518 = var_318;
        var_528 = var_328;
    }
    
    uu_dd::parseargs::Parser::parse::h09331839c7490d34(&result_2, &var_2e8, &var_528);
    uint64_t result_4 = result_2;
    int128_t var_3f8 = var_3c8;
    uint64_t result;
    
    if (result_4 != 3)
    {
        int128_t var_338;
        int128_t var_440_1 = var_338;
        int128_t var_348;
        int128_t var_450_1 = var_348;
        int128_t var_358;
        int128_t var_460_1 = var_358;
        int128_t var_368;
        int128_t var_470_1 = var_368;
        int128_t var_378;
        int128_t var_480_1 = var_378;
        int128_t var_388;
        int128_t var_490_1 = var_388;
        int128_t var_398;
        int64_t var_4a0_1 = var_398;
        int128_t zmm0_3 = var_3f8;
        uint64_t result_5 = result_4;
        
        if (*zmm0_3[8] != -0x8000000000000000)
        {
            if (!uu_dd::is_fifo::h03c77fb6372aebe6(var_3c0))
                uu_dd::Input::new_file::h0418c0b828b900f3(&var_2e8, var_3c0, *var_3c0[8], 
                    &result_5);
            else
                uu_dd::Input::new_fifo::hf14f96568a514b5d(&var_2e8, var_3c0, *var_3c0[8], 
                    &result_5);
        }
        else
            uu_dd::Input::new_stdin::hf67655fa74f10066(&var_2e8, &result_5);
        
        uint64_t result_1;
        result = result_1;
        
        if (var_2e8 & 1)
        {
            core::ptr::drop_in_place$LT$uu_dd..Settings$GT$::hf00f9c3bc4c7c515(&result_5);
            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hd7cefa40ee08a351(&result_6);
        }
        else
        {
            if (var_3b0 != -0x8000000000000000)
            {
                if (!uu_dd::is_fifo::h03c77fb6372aebe6(*var_3b0[8]))
                    uu_dd::Output::new_file::h195be350c3efc298(&var_2e8, *var_3b0[8], var_4a0_1, 
                        &result_5);
                else
                    uu_dd::Output::new_fifo::h0387b804082ecc3b(&var_2e8, *var_3b0[8], var_4a0_1, 
                        &result_5);
            }
            else if (!uu_dd::is_stdout_redirected_to_seekable_file::h70edc5f11da78b84())
                uu_dd::Output::new_stdout::hc67289d375d2c7da(&var_2e8, &result_5);
            else
                uu_dd::Output::new_file_from_stdout::h81f8b151240497b6(&var_2e8, &result_5);
            
            char rax_5 = var_2e8;
            
            if (rax_5 != 4)
            {
                *var_528[3] = *var_2e8[4];
                var_528 = *var_2e8[1];
                result_2 = result_1;
                void** const var_3c8_1 = var_2d8;
                var_2e8 = rax_5;
                *var_2e8[1] = var_528;
                *var_2e8[4] = *var_528[3];
                result_1 = result_1;
                result = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h94675ce505279c5d(uu_dd::dd_copy::h97a31b652816ce40(&result_2, &var_2e8));
                core::ptr::drop_in_place$LT$uu_dd..Settings$GT$::hf00f9c3bc4c7c515(&result_5);
                core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hd7cefa40ee08a351(&result_6);
            }
            else
            {
                result = result_1;
                core::ptr::drop_in_place$LT$uu_dd..Input$GT$::hf19ad679ad52468d(result_1 >> 0x20);
                core::ptr::drop_in_place$LT$uu_dd..Settings$GT$::hf00f9c3bc4c7c515(&result_5);
                core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hd7cefa40ee08a351(&result_6);
            }
        }
    }
    else
    {
        result = alloc::boxed::Box$LT$T$GT$::new::hf78da46c870419c2(&var_3f8);
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hd7cefa40ee08a351(&result_6);
    }
    
    return result;
}
