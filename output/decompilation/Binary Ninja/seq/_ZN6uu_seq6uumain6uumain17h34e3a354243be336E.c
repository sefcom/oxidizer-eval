
  int64_t* uu_seq::uumain::uumain::h34e3a354243be336(int64_t arg1)

{
    int64_t var_348;
    uu_seq::uu_app::h5bc20a713053c9e7(&var_348);
    int64_t var_538;
    clap_builder::builder::command::Command::try_get_matches_from::h904220b4fd394a43(&var_538, 
        &var_348, arg1);
    int64_t rax = var_538;
    int64_t* result;
    int64_t var_530;
    
    if (rax != -0x8000000000000000)
    {
        int64_t var_508;
        int64_t var_3d0_1 = var_508;
        int128_t var_518;
        int128_t var_3e0_1 = var_518;
        int128_t var_528;
        int128_t var_3f0_1 = var_528;
        int64_t var_400 = rax;
        int64_t var_3f8_1 = var_530;
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::hd3fd7c3ac8a6ae96(
            &var_348, &var_400, "numbersseparatorterminatorformat…", 7);
        int64_t var_388;
        clap_builder::parser::error::MatchesError::unwrap::hfd2b39f1bd657312(&var_388, 
            "numbersseparatorterminatorformat…", 7, &var_348);
        
        if (!var_388)
        {
            var_348 = -0x7fffffffffffffff;
            result = alloc::boxed::Box$LT$T$GT$::new::hf0c0ed198838dcbc(&var_348);
            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hd1f72c0053daf82a(&var_400);
        }
        else
        {
            int128_t var_78 = var_388;
            int128_t var_378;
            int128_t var_68_1 = var_378;
            int128_t var_368;
            int128_t var_58_1 = var_368;
            int128_t var_358;
            int128_t var_48_1 = var_358;
            void var_550;
            _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h60535e30314ff3d3(&var_550, &var_78);
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h2a14ff66723af1c4(
                &var_348, &var_400, "separatorterminatorformatequal-w…", 9);
            uint64_t rax_2 = clap_builder::parser::error::MatchesError::unwrap::h1b79b33999e434b5(
                "separatorterminatorformatequal-w…", 9, &var_348);
            char const* const rsi_5;
            
            if (!rax_2)
                rsi_5 = nullptr;
            else
            {
                rsi_5 = *(rax_2 + 8);
                rax_2 = *(rax_2 + 0x10);
            }
            
            bool cond:1_1 = rsi_5;
            char const* const r14_2 = "\nTry ' --help' for more informa…";
            
            if (!rsi_5)
                rsi_5 = "\nTry ' --help' for more informa…";
            
            uint64_t rdx_2 = 1;
            
            if (cond:1_1)
                rdx_2 = rax_2;
            
            _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::hcd8fa96ced7a6fc6(
                &var_348, rsi_5, rdx_2);
            int128_t var_4e8 = var_348;
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h2a14ff66723af1c4(
                &var_348, &var_400, "terminatorformatequal-widthSpecE…", 0xa);
            uint64_t rax_5 = clap_builder::parser::error::MatchesError::unwrap::h1b79b33999e434b5(
                "terminatorformatequal-widthSpecE…", 0xa, &var_348);
            char* rcx_3;
            
            if (!rax_5)
                rcx_3 = nullptr;
            else
            {
                rcx_3 = *(rax_5 + 8);
                rax_5 = *(rax_5 + 0x10);
            }
            
            if (rcx_3)
                r14_2 = rcx_3;
            
            uint64_t rdx_4 = 1;
            
            if (rcx_3)
                rdx_4 = rax_5;
            
            _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::hcd8fa96ced7a6fc6(
                &var_348, r14_2, rdx_4);
            int64_t var_338;
            var_528 = var_338;
            var_538 = var_348;
            char rax_7 =
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
                &var_400, "equal-widthSpecErrorIoErrorNoMor…", 0xb);
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h2a14ff66723af1c4(
                &var_348, &var_400, "formatequal-widthSpecErrorIoErro…", 6);
            void* rax_8 = clap_builder::parser::error::MatchesError::unwrap::h1b79b33999e434b5(
                "formatequal-widthSpecErrorIoErro…", 6, &var_348);
            int64_t rcx_4;
            
            if (!rax_8)
                rcx_4 = 0;
            else
            {
                rcx_4 = *(rax_8 + 8);
                rax_8 = *(rax_8 + 0x10);
            }
            
            int64_t var_438_1 = var_338;
            int128_t var_448 = var_4e8;
            int128_t zmm0_5 = var_538;
            char rdx_7 = var_528;
            void* var_410_1 = rax_8;
            int64_t* var_548;
            int64_t var_540;
            int128_t var_3c8;
            int128_t var_3b8;
            int128_t var_3a8;
            int64_t var_398;
            char var_340;
            int128_t var_328;
            int64_t var_318;
            
            if (var_540 > 1)
            {
                void* rax_10 = *var_548;
                uu_seq::numberparse::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$uu_seq..number..PreciseNumber$GT$::from_str::h57ed696611a385bd(&var_348, *(rax_10 + 8), *(rax_10 + 0x10));
                
                if (var_348 != -0x7ffffffffffffffc)
                {
                    var_398 = var_318;
                    var_3a8 = var_328;
                    var_3b8 = var_338;
                    var_3c8 = var_348;
                    
                    if (var_540 > 2)
                        goto label_479996;
                    
                    goto label_479a75;
                }
                
                if (!var_540)
                {
                    core::panicking::panic_bounds_check::h25a5330941572dd1(0, 0);
                    /* no return */
                }
                
                _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(&var_4e8, *var_548);
                var_528 = var_338;
                var_538 = var_4e8;
                *var_528[8] = var_340;
                result = alloc::boxed::Box$LT$T$GT$::new::hf0c0ed198838dcbc(&var_538);
                goto label_479c00;
            }
            
            uu_seq::number::PreciseNumber::one::hfa3db95e12ecba95(&var_3c8);
            int64_t var_488;
            int128_t var_478;
            int128_t var_468;
            int64_t var_458;
            
            if (var_540 <= 2)
            {
                label_479a75:
                uu_seq::number::PreciseNumber::one::hfa3db95e12ecba95(&var_488);
            }
            else
            {
                label_479996:
                void* rax_15 = var_548[1];
                uu_seq::numberparse::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$uu_seq..number..PreciseNumber$GT$::from_str::h57ed696611a385bd(&var_348, *(rax_15 + 8), *(rax_15 + 0x10));
                
                if (var_348 == -0x7ffffffffffffffc)
                {
                    if (var_540 <= 1)
                    {
                        core::panicking::panic_bounds_check::h25a5330941572dd1(1, var_540);
                        /* no return */
                    }
                    
                    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(&var_4e8, var_548[1]);
                    var_528 = var_338;
                    var_538 = var_4e8;
                    *var_528[8] = var_340;
                    result = alloc::boxed::Box$LT$T$GT$::new::hf0c0ed198838dcbc(&var_538);
                    goto label_479bf3;
                }
                
                var_458 = var_318;
                var_468 = var_328;
                var_478 = var_338;
                var_488 = var_348;
            }
            
            int64_t rcx_5 = var_488;
            int64_t rax_21 = 0;
            
            if (rcx_5 < -0x7ffffffffffffffc)
                rax_21 = rcx_5 - 0x7fffffffffffffff;
            
            if (rax_21)
            {
                if (rax_21 != 3)
                    goto label_479b48;
                
                goto label_479ae2;
            }
            
            int64_t* result_1;
            
            if (*var_478[8] == 1)
            {
                label_479ae2:
                
                if (var_540 < 2)
                {
                    core::panicking::panic_bounds_check::h25a5330941572dd1(1, var_540);
                    /* no return */
                }
                
                _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(&var_538, var_548[1]);
                int64_t var_330_1 = var_528;
                var_340 = var_538;
                var_348 = -0x8000000000000000;
                result_1 = alloc::boxed::Box$LT$T$GT$::new::hf0c0ed198838dcbc(&var_348);
                label_479bd4:
                result = result_1;
                label_479be6:
                core::ptr::drop_in_place$LT$uu_seq..number..PreciseNumber$GT$::h34462456b37209d5(
                    &var_488);
                label_479bf3:
                core::ptr::drop_in_place$LT$uu_seq..number..PreciseNumber$GT$::h34462456b37209d5(
                    &var_3c8);
                label_479c00:
                core::ptr::drop_in_place$LT$uu_seq..SeqOptions$GT$::h5bdf3a8a9e5f2cb2(&var_448);
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$alloc..string..String$GT$$GT$::h5fadf40cd73923a0(&var_550);
                core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hd1f72c0053daf82a(&var_400);
            }
            else
            {
                label_479b48:
                int64_t r14_4 = var_540 - 1;
                
                if (var_540 < 1)
                {
                    core::panicking::panic_bounds_check::h25a5330941572dd1(r14_4, 0);
                    /* no return */
                }
                
                void* rax_25 = var_548[r14_4];
                uu_seq::numberparse::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$uu_seq..number..PreciseNumber$GT$::from_str::h57ed696611a385bd(&var_348, *(rax_25 + 8), *(rax_25 + 0x10));
                int128_t var_4a8;
                
                if (var_348 == -0x7ffffffffffffffc)
                {
                    if (r14_4 >= var_540)
                    {
                        core::panicking::panic_bounds_check::h25a5330941572dd1(r14_4, var_540);
                        /* no return */
                    }
                    
                    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(&var_4a8, var_548[r14_4]);
                    int64_t var_498;
                    var_528 = var_498;
                    var_538 = var_4a8;
                    *var_528[8] = var_340;
                    result_1 = alloc::boxed::Box$LT$T$GT$::new::hf0c0ed198838dcbc(&var_538);
                    goto label_479bd4;
                }
                
                int64_t var_4b8_1 = var_318;
                int128_t var_4c8_1 = var_328;
                int64_t var_4d8_1;
                var_4d8_1 = var_338;
                var_4e8 = var_348;
                int64_t* rax_31 = core::cmp::max_by::hebeedc2e52056a05(
                    core::cmp::max_by::hebeedc2e52056a05(*var_3a8[8], *var_468[8]), *var_4c8_1[8]);
                int64_t rax_32 = core::cmp::max_by::hebeedc2e52056a05(var_398, var_458);
                int64_t rax_33;
                
                if (!rcx_4)
                    rax_33 = -0x8000000000000000;
                else
                {
                    uucore::features::format::Format$LT$F$GT$::parse::h467dad2654ce72de(&var_348, 
                        rcx_4);
                    rax_33 = var_348;
                    var_4a8 = var_340;
                    int64_t var_330;
                    int128_t var_498_1 = var_330;
                    
                    if (rax_33 == -0x8000000000000000)
                    {
                        var_338 = var_498_1;
                        var_348 = var_4a8;
                        result = alloc::boxed::Box$LT$T$GT$::new::hdd8688a13c8ca3a3(&var_348);
                        core::ptr::drop_in_place$LT$uu_seq..number..PreciseNumber$GT$::h34462456b37209d5(&var_4e8);
                        goto label_479be6;
                    }
                    
                    int128_t var_310;
                    int128_t var_500_1 = var_310;
                    var_518 = var_328;
                    var_530 = var_4a8;
                    var_528 = var_498_1;
                }
                
                var_538 = rax_33;
                var_328 = var_3a8;
                var_338 = var_3b8;
                var_348 = var_3c8;
                var_328 = var_488;
                int128_t var_310_1 = var_478;
                int64_t var_300_1 = var_468;
                int128_t var_2f8_1 = var_4e8;
                int128_t var_2e8_1 = var_4d8_1;
                int64_t var_2d8_1 = var_4c8_1;
                int64_t* var_568_1 = &var_538;
                char const (** rax_39)[0xe3] = uu_seq::print_seq::h76b7cc0ba327356f(&var_348, 
                    rax_32, *var_448[8], var_438_1, *zmm0_5[8], rdx_7, rax_7, rax_31);
                
                if (!rax_39)
                    result = nullptr;
                else if (std::io::error::Error::kind::hb2ff5fa058639b3d(rax_39) != 0xb)
                    result = _$LT$std..io..error..Error$u20$as$u20$uucore..mods..error..FromIo$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$$GT$::map_err_context::hbd0a62708def6320();
                else
                {
                    core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h6ee4f1458aa60c82(
                        rax_39);
                    result = nullptr;
                }
                
                core::ptr::drop_in_place$LT$core..option..Option$LT$uucore..features..format..Format$LT$uucore..features..format..num_format..Float$GT$$GT$$GT$::h6b9419cbded52197(&var_538);
                core::ptr::drop_in_place$LT$uu_seq..SeqOptions$GT$::h5bdf3a8a9e5f2cb2(&var_448);
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$alloc..string..String$GT$$GT$::h5fadf40cd73923a0(&var_550);
                core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hd1f72c0053daf82a(&var_400);
            }
        }
    }
    else
        result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7fb9d0425989847a(var_530);
    return result;
}
