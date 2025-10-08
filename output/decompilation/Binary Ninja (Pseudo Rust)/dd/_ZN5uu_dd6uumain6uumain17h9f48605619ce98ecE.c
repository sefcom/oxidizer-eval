
  fn uu_dd::uumain::uumain::h9f48605619ce98ec(arg1: i64) -> u64

{
    let mut var_2e8: i64;
    uu_dd::uu_app::hb8ffca1f61c6f095(&var_2e8);
    let mut result_2: u64;
    clap_builder::builder::command::Command::try_get_matches_from::h45546ddd9f814d66(&result_2, 
        &var_2e8, arg1);
    let result_3: u64 = result_2;
    let var_3c8: i64;
    
    if -(result_3) == -0x8000000000000000
    {
        /* tailcall */
        return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he92a37de32738e67(var_3c8);
    }
    
    let var_3a0: i64;
    let var_400: i64 = var_3a0;
    let var_3b0: i128;
    let var_410: i128 = var_3b0;
    let var_3c0: i128;
    let var_420: i128 = var_3c0;
    let mut result_6: u64 = result_3;
    let var_428: i64 = var_3c8;
    let var_278: i64 = -0x8000000000000000;
    let var_260: i64 = -0x8000000000000000;
    var_2e8 = 0;
    let var_2d8: *mut *mut c_void = nullptr;
    let var_2c8: i64 = 0;
    let var_2b8: i64 = 0;
    let mut s: i128;
    __builtin_memset(&s, 0, 0x20);
    let var_288: i64 = 2;
    let mut s_1: i128;
    __builtin_memset(&s_1, 0, 0x30);
    let var_218: i8 = 3;
    let mut var_528: fn() -> !;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h474b6e809f4022ff(
        &var_528, &result_6);
    let mut var_328: i64;
    clap_builder::parser::error::MatchesError::unwrap::had8a575344470447(&var_328, &var_528);
    
    if var_328 == 0
    {
        var_528 = core::ops::function::FnOnce::call_once::h022198c789277787;
        let var_520_1: *const i8 = "/home/34r7hm4n/.cargo/registry/s…";
        let var_518_1: *const i8 = "/home/34r7hm4n/.cargo/registry/s…";
        let var_510_1: i64 = 0;
        let var_500_1: i64 = 0;
        let var_4f0_1: i64 = 0;
    }
    else
    {
        let var_2f8: i128;
        let var_4f8_1: i128 = var_2f8;
        let var_308: i128;
        let var_508_1: i128 = var_308;
        let mut var_518: i64;
        let var_318: i128;
        var_518 = var_318;
        var_528 = var_328;
    }
    
    uu_dd::parseargs::Parser::parse::h09331839c7490d34(&result_2, &var_2e8, &var_528);
    let result_4: u64 = result_2;
    let mut var_3f8: i128 = var_3c8;
    let mut result: u64;
    
    if result_4 != 3
    {
        let var_338: i128;
        let var_440_1: i128 = var_338;
        let var_348: i128;
        let var_450_1: i128 = var_348;
        let var_358: i128;
        let var_460_1: i128 = var_358;
        let var_368: i128;
        let var_470_1: i128 = var_368;
        let var_378: i128;
        let var_480_1: i128 = var_378;
        let var_388: i128;
        let var_490_1: i128 = var_388;
        let var_398: i128;
        let var_4a0_1: i64 = var_398;
        let zmm0_3: i128 = var_3f8;
        let mut result_5: u64 = result_4;
        
        if *zmm0_3[8] != -0x8000000000000000
        {
            if uu_dd::is_fifo::h03c77fb6372aebe6(var_3c0) == 0
            {
                uu_dd::Input::new_file::h0418c0b828b900f3(&var_2e8, var_3c0, *var_3c0[8], 
                    &result_5);
            }
            else
            {
                uu_dd::Input::new_fifo::hf14f96568a514b5d(&var_2e8, var_3c0, *var_3c0[8], 
                    &result_5);
            }
        }
        else
        {
            uu_dd::Input::new_stdin::hf67655fa74f10066(&var_2e8, &result_5);
        }
        
        let mut result_1: u64;
        result = result_1;
        
        if (var_2e8 & 1) != 0
        {
            core::ptr::drop_in_place$LT$uu_dd..Settings$GT$::hf00f9c3bc4c7c515(&result_5);
            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hd7cefa40ee08a351(&result_6);
        }
        else
        {
            if var_3b0 != -0x8000000000000000
            {
                if uu_dd::is_fifo::h03c77fb6372aebe6(*var_3b0[8]) == 0
                {
                    uu_dd::Output::new_file::h195be350c3efc298(&var_2e8, *var_3b0[8], var_4a0_1, 
                        &result_5);
                }
                else
                {
                    uu_dd::Output::new_fifo::h0387b804082ecc3b(&var_2e8, *var_3b0[8], var_4a0_1, 
                        &result_5);
                }
            }
            else if uu_dd::is_stdout_redirected_to_seekable_file::h70edc5f11da78b84() == 0
            {
                uu_dd::Output::new_stdout::hc67289d375d2c7da(&var_2e8, &result_5);
            }
            else
            {
                uu_dd::Output::new_file_from_stdout::h81f8b151240497b6(&var_2e8, &result_5);
            }
            
            let rax_5: i8 = var_2e8;
            
            if rax_5 != 4
            {
                *var_528[3] = *var_2e8[4];
                var_528 = *var_2e8[1];
                result_2 = result_1;
                let var_3c8_1: *mut *mut c_void = var_2d8;
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
    
    result
}
