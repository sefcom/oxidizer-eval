
  int64_t* uu_dd::uumain::uumain::h74b70bfc5a4ff6dc(int64_t arg1)

{
    int64_t var_2e8;
    uu_dd::uu_app::h3802aa9aab1c575c(&var_2e8);
    int64_t* result_2;
    clap_builder::builder::command::Command::try_get_matches_from::h5a01ae36fb20ce9d(&result_2, 
        &var_2e8, arg1);
    int64_t* result_3 = result_2;
    int64_t* result;
    int64_t var_408;
    
    if (result_3 != -0x8000000000000000)
    {
        int64_t var_3e0;
        int64_t var_418_1 = var_3e0;
        int128_t var_3f0;
        int128_t var_428_1 = var_3f0;
        int128_t var_400;
        int128_t var_438_1 = var_400;
        int64_t* result_6 = result_3;
        int64_t var_440_1 = var_408;
        int64_t var_278_1 = -0x8000000000000000;
        int64_t var_260_1 = -0x8000000000000000;
        var_2e8 = 0;
        void** var_2d8_1 = nullptr;
        int64_t var_2c8_1 = 0;
        int64_t var_2b8_1 = 0;
        int128_t s;
        __builtin_memset(&s, 0, 0x20);
        int64_t var_288_1 = 2;
        int128_t s_1;
        __builtin_memset(&s_1, 0, 0x30);
        char var_218_1 = 3;
        int32_t var_490;
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h4faa36fc29fbd10c(
            &var_490, &result_6, "operandsESTRPIPENotFoundTimedOut", 8);
        char const* const rsi_3 = "operandsESTRPIPENotFoundTimedOut";
        void (* var_328)() __noreturn;
        clap_builder::parser::error::MatchesError::unwrap::hfc48cb779f9cdf25(&var_328, 
            "operandsESTRPIPENotFoundTimedOut", 8, &var_490);
        void (* rax_1)() __noreturn = var_328;
        char const* const rcx_3;
        int64_t rdx_1;
        int128_t zmm0_2;
        uint128_t zmm1_2;
        
        if (!rax_1)
        {
            zmm0_2 = {0};
            zmm1_2 = "a Display implementation returne…";
            rcx_3 = "a Display implementation returne…";
            rax_1 = core::ops::function::FnOnce::call_once::he859e2145eddfc5d;
            rdx_1 = 0;
        }
        else
        {
            char* var_320;
            rcx_3 = var_320;
            uint128_t var_318;
            zmm1_2 = var_318;
            int128_t var_308;
            zmm0_2 = var_308;
            char* var_2f8;
            rsi_3 = var_2f8;
            int64_t var_2f0;
            rdx_1 = var_2f0;
        }
        
        void (* var_368)() __noreturn = rax_1;
        char const* const var_360_1 = rcx_3;
        uint128_t var_358_1 = zmm1_2;
        int128_t var_348_1 = zmm0_2;
        char const* const var_338_1 = rsi_3;
        int64_t var_330_1 = rdx_1;
        void var_578;
        _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h46db0d96769f7017(&var_578, &var_368);
        uu_dd::parseargs::Parser::parse::hd077653d220e666d(&result_2);
        int64_t* result_4 = result_2;
        int128_t var_4b8_1 = var_408;
        
        if (result_4 != 3)
        {
            int128_t var_378;
            int128_t var_4c8_1 = var_378;
            int128_t var_388;
            int128_t var_4d8_1 = var_388;
            int128_t var_398;
            int128_t var_4e8_1 = var_398;
            int128_t var_3a8;
            int128_t var_4f8_1 = var_3a8;
            int128_t var_3b8;
            int128_t var_508_1 = var_3b8;
            int128_t var_3c8;
            int128_t var_518_1 = var_3c8;
            int128_t var_3d8;
            int64_t var_528_1 = var_3d8;
            int64_t* result_5 = result_4;
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$str$GT$$GT$::h4a217c2992954adb(
                &var_578);
            
            if (*var_4b8_1[8] != -0x8000000000000000)
            {
                if (!uu_dd::is_fifo::h9d574f34ee5f3724(var_400))
                    uu_dd::Input::new_file::h22226df40ef2e7a0(&var_2e8, var_400, *var_400[8], 
                        &result_5);
                else
                    uu_dd::Input::new_fifo::h35e5c2fb1b3ef304(&var_2e8, var_400, *var_400[8], 
                        &result_5);
            }
            else
                uu_dd::Input::new_stdin::h814376ebbe5b03ea(&var_2e8, &result_5);
            
            int64_t* result_1;
            result = result_1;
            
            if (var_2e8)
                core::ptr::drop_in_place$LT$uu_dd..Settings$GT$::he59f0dfde8a940ec(&result_5);
            else
            {
                if (var_3f0 != -0x8000000000000000)
                {
                    if (!uu_dd::is_fifo::h9d574f34ee5f3724(*var_3f0[8]))
                        uu_dd::Output::new_file::h911369a13f3ee1ab(&var_2e8, *var_3f0[8], 
                            var_528_1, &result_5);
                    else
                        uu_dd::Output::new_fifo::h5805a896b59d1442(&var_2e8, *var_3f0[8], 
                            var_528_1, &result_5);
                }
                else if (!uu_dd::is_stdout_redirected_to_seekable_file::he86a24b914264a0a())
                    uu_dd::Output::new_stdout::h76c99dbdf4ef76d1(&var_2e8, &result_5);
                else
                    uu_dd::Output::new_file_from_stdout::hc334670ba1ee52ec(&var_2e8, &result_5);
                
                char rax_6 = var_2e8;
                
                if (rax_6 != 4)
                {
                    int32_t rdx_7 = *var_2e8[4];
                    var_490 = *var_2e8[1];
                    result_2 = result_1;
                    void** const var_408_1 = var_2d8_1;
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
        result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7fb9d0425989847a(var_408);
    return result;
}
