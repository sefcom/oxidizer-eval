
  fn uu_dd::uumain::uumain::h74b70bfc5a4ff6dc(arg1: i64) -> *mut i64

{
    let mut var_2e8: i64;
    uu_dd::uu_app::h3802aa9aab1c575c(&var_2e8);
    let mut result_2: *mut i64;
    clap_builder::builder::command::Command::try_get_matches_from::h5a01ae36fb20ce9d(&result_2, 
        &var_2e8, arg1);
    let result_3: *mut i64 = result_2;
    let mut result: *mut i64;
    let var_408: i64;
    
    if result_3 != -0x8000000000000000
    {
        let var_3e0: i64;
        let var_418_1: i64 = var_3e0;
        let var_3f0: i128;
        let var_428_1: i128 = var_3f0;
        let var_400: i128;
        let var_438_1: i128 = var_400;
        let mut result_6: *mut i64 = result_3;
        let var_440_1: i64 = var_408;
        let var_278_1: i64 = -0x8000000000000000;
        let var_260_1: i64 = -0x8000000000000000;
        var_2e8 = 0;
        let mut var_2d8_1: *mut *mut c_void = nullptr;
        let var_2c8_1: i64 = 0;
        let var_2b8_1: i64 = 0;
        let mut s: i128;
        __builtin_memset(&s, 0, 0x20);
        let var_288_1: i64 = 2;
        let mut s_1: i128;
        __builtin_memset(&s_1, 0, 0x30);
        let var_218_1: i8 = 3;
        let mut var_490: i32;
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h4faa36fc29fbd10c(
            &var_490, &result_6, "operandsESTRPIPENotFoundTimedOut", 8);
        let mut rsi_3: *const i8 = "operandsESTRPIPENotFoundTimedOut";
        let mut var_328: fn() -> !;
        clap_builder::parser::error::MatchesError::unwrap::hfc48cb779f9cdf25(&var_328, 
            "operandsESTRPIPENotFoundTimedOut", 8, &var_490);
        let mut rax_1: fn() -> ! = var_328;
        let mut rcx_3: *const i8;
        let mut rdx_1: i64;
        let mut zmm0_2: i128;
        let mut zmm1_2: u128;
        
        if rax_1 == 0
        {
            zmm0_2 = {0};
            zmm1_2 = "a Display implementation returne…";
            rcx_3 = "a Display implementation returne…";
            rax_1 = core::ops::function::FnOnce::call_once::he859e2145eddfc5d;
            rdx_1 = 0;
        }
        else
        {
            let var_320: *mut i8;
            rcx_3 = var_320;
            let var_318: u128;
            zmm1_2 = var_318;
            let var_308: i128;
            zmm0_2 = var_308;
            let var_2f8: *mut i8;
            rsi_3 = var_2f8;
            let var_2f0: i64;
            rdx_1 = var_2f0;
        }
        
        let mut var_368: fn() -> ! = rax_1;
        let var_360_1: *const i8 = rcx_3;
        let var_358_1: u128 = zmm1_2;
        let var_348_1: i128 = zmm0_2;
        let var_338_1: *const i8 = rsi_3;
        let var_330_1: i64 = rdx_1;
        let mut var_578: ();
        _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h46db0d96769f7017(&var_578, &var_368);
        uu_dd::parseargs::Parser::parse::hd077653d220e666d(&result_2);
        let result_4: *mut i64 = result_2;
        let var_4b8_1: i128 = var_408;
        
        if result_4 != 3
        {
            let var_378: i128;
            let var_4c8_1: i128 = var_378;
            let var_388: i128;
            let var_4d8_1: i128 = var_388;
            let var_398: i128;
            let var_4e8_1: i128 = var_398;
            let var_3a8: i128;
            let var_4f8_1: i128 = var_3a8;
            let var_3b8: i128;
            let var_508_1: i128 = var_3b8;
            let var_3c8: i128;
            let var_518_1: i128 = var_3c8;
            let var_3d8: i128;
            let var_528_1: i64 = var_3d8;
            let mut result_5: *mut i64 = result_4;
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$str$GT$$GT$::h4a217c2992954adb(
                &var_578);
            
            if *var_4b8_1[8] != -0x8000000000000000
            {
                if uu_dd::is_fifo::h9d574f34ee5f3724(var_400) == 0
                {
                    uu_dd::Input::new_file::h22226df40ef2e7a0(&var_2e8, var_400, *var_400[8], 
                        &result_5);
                }
                else
                {
                    uu_dd::Input::new_fifo::h35e5c2fb1b3ef304(&var_2e8, var_400, *var_400[8], 
                        &result_5);
                }
            }
            else
            {
                uu_dd::Input::new_stdin::h814376ebbe5b03ea(&var_2e8, &result_5);
            }
            
            let mut result_1: *mut i64;
            result = result_1;
            
            if var_2e8 != 0
            {
                core::ptr::drop_in_place$LT$uu_dd..Settings$GT$::he59f0dfde8a940ec(&result_5);
            }
            else
            {
                if var_3f0 != -0x8000000000000000
                {
                    if uu_dd::is_fifo::h9d574f34ee5f3724(*var_3f0[8]) == 0
                    {
                        uu_dd::Output::new_file::h911369a13f3ee1ab(&var_2e8, *var_3f0[8], 
                            var_528_1, &result_5);
                    }
                    else
                    {
                        uu_dd::Output::new_fifo::h5805a896b59d1442(&var_2e8, *var_3f0[8], 
                            var_528_1, &result_5);
                    }
                }
                else if uu_dd::is_stdout_redirected_to_seekable_file::he86a24b914264a0a() == 0
                {
                    uu_dd::Output::new_stdout::h76c99dbdf4ef76d1(&var_2e8, &result_5);
                }
                else
                {
                    uu_dd::Output::new_file_from_stdout::hc334670ba1ee52ec(&var_2e8, &result_5);
                }
                
                let rax_6: i8 = var_2e8;
                
                if rax_6 != 4
                {
                    let rdx_7: i32 = *var_2e8[4];
                    var_490 = *var_2e8[1];
                    result_2 = result_1;
                    let var_408_1: *mut *mut c_void = var_2d8_1;
                    var_2e8 = rax_6;
                    *var_2e8[1] = var_490;
                    *var_2e8[4] = rdx_7;
                    result_1 = result_1;
                    result = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h80210fa1ce24478c(uu_dd::dd_copy::h1703f8a2fff7c692(&result_2, &var_2e8));
                    core::ptr::drop_in_place$LT$uu_dd..Settings$GT$::he59f0dfde8a940ec(&result_5);
                }
                else
                {
                    result = result_1;
                    core::ptr::drop_in_place$LT$uu_dd..Input$GT$::hef16b694c3cf3941(result_1
                        >> 0x20);
                    core::ptr::drop_in_place$LT$uu_dd..Settings$GT$::he59f0dfde8a940ec(&result_5);
                }
            }
        }
        else
        {
            var_2d8_1 = var_400;
            var_2e8 = var_4b8_1;
            result = alloc::boxed::Box$LT$T$GT$::new::h5e6beab2beaebe6e(&var_2e8);
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$str$GT$$GT$::h4a217c2992954adb(
                &var_578);
        }
        
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::ha7bceb9b08e174b3(&result_6);
    }
    else
    {
        result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7fb9d0425989847a(var_408);
    }
    result
}
