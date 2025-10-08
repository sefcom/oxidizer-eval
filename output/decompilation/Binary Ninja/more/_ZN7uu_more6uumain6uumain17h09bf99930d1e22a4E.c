
  uint64_t uu_more::uumain::uumain::h09bf99930d1e22a4(int64_t arg1)

{
    std::panicking::set_hook::h907d45d363a27a50(
        alloc::boxed::Box$LT$T$GT$::new::h280b746f5ffff174(), &data_5243c8);
    uint64_t result_1;
    uu_more::uu_app::h91a4b949c44828f9(&result_1);
    int64_t var_420;
    clap_builder::builder::command::Command::try_get_matches_from::h6f280e93681d8b4e(&var_420, 
        &result_1, arg1);
    int64_t rax_1 = var_420;
    uint64_t result;
    void** var_418;
    
    if (-(rax_1) != -0x8000000000000000)
    {
        int64_t var_3f0;
        int64_t var_370_1 = var_3f0;
        int128_t var_400;
        int128_t var_380_1 = var_400;
        int128_t var_410;
        int128_t var_390_1 = var_410;
        int64_t var_3a0 = rax_1;
        void** var_398_1 = var_418;
        int64_t var_3c8;
        uu_more::Options::from::h891a40eb4d8100b7(&var_3c8, &var_3a0);
        uu_more::setup_term::h0836ea3f29ebee77(&result_1);
        result = result_1;
        
        if (result)
            goto label_4732f2;
        
        char* var_2f0;
        void** const var_480 = var_2f0;
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::hb1a200c6a1fe7de3(
            &result_1, &var_3a0);
        int64_t var_478;
        clap_builder::parser::error::MatchesError::unwrap::hb8dd9878ac53ee79(&var_478, &result_1);
        void** rdx_8;
        
        if (var_478)
        {
            int64_t var_440;
            int64_t rax_3 =
                core::iter::traits::exact_size::ExactSizeIterator::len::he3ff82773236146f(var_440);
            int64_t var_448;
            int64_t var_3d8_1 = var_448;
            int128_t var_458;
            int128_t var_3e8_1 = var_458;
            int64_t var_468;
            var_400 = var_468;
            var_410 = var_478;
            int64_t var_3d0_1 = var_440;
            char rax_5 = 0;
            
            while (true)
            {
                void** const r13 = var_418;
                uint64_t r14_1 = var_410;
                var_420 = 0;
                
                if (!(rax_5 & 1))
                {
                    void* rax_6 = _$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h6dc70c466a64e469(&*var_410[8]);
                    
                    if (!rax_6)
                        r13 = nullptr;
                    else
                    {
                        r13 = *(rax_6 + 8);
                        r14_1 = *(rax_6 + 0x10);
                    }
                }
                
                void* rax_7 = core::option::Option$LT$T$GT$::get_or_insert_with::h96ff1e210b7855ff(
                    &var_420, &*var_410[8]);
                
                if (!r13)
                    break;
                
                int64_t r15_1 = *rax_7;
                uint64_t result_4;
                uint64_t var_4d8;
                int64_t** var_4c8;
                int64_t* var_4a8;
                char* var_2e8;
                int32_t var_2e0;
                
                if (!std::path::Path::is_dir::h02edbc48c38d7d9e(r13, r14_1))
                {
                    std::fs::metadata::hc83829b9c1bdbf56(&result_1, r13);
                    uint32_t result_5 = result_1;
                    core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::hb95ebecb39e0d4bc(&result_1);
                    
                    if (result_5 != 2)
                    {
                        int32_t var_430;
                        std::fs::File::open::h9aa6ed797dd29ae7(&var_430, r13);
                        
                        if (var_430 != 1)
                        {
                            int64_t* rax_27 = core::str::converts::from_utf8::h8a6dc80f786921e0(
                                &result_1, r13, r14_1);
                            int64_t r9_1 = 0;
                            char* rcx_3 = nullptr;
                            
                            if (!result_1)
                                rcx_3 = var_2f0;
                            
                            if (r15_1)
                            {
                                r9_1 = *rax_7;
                                rax_27 = *(rax_7 + 8);
                            }
                            
                            int32_t rdx_7;
                            rdx_7 = rax_3 >= 2;
                            int32_t var_42c;
                            uint64_t result_2;
                            result_2 = uu_more::more::h6e099d2d6eef5fb4(var_42c, &var_480, rdx_7, 
                                rcx_3, var_2e8, r9_1, rax_27, &var_3c8);
                            result = result_2;
                            
                            if (result_2)
                                goto label_4732f2;
                        }
                        else
                        {
                            int64_t var_428;
                            int64_t var_488 = var_428;
                            
                            if (crossterm::terminal::disable_raw_mode::h465f563c46635ef8())
                            {
                                label_4732c1:
                                result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
                                core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hfeb26519dcae8a08(&var_488);
                                goto label_4732f2;
                            }
                            
                            var_4c8 = 1;
                            void** const var_4c0_5 = r13;
                            uint64_t var_4b8_5 = r14_1;
                            char var_4b0_3 = 1;
                            var_4d8 = std::io::error::Error::kind::h135fe00c4e7365f3(var_428);
                            var_4a8 = &var_4c8;
                            int64_t (* var_4a0_5)(int32_t* arg1, int64_t* arg2) = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                            uint64_t* var_498_1 = &var_4d8;
                            int64_t (* var_490_1)(char* arg1, int64_t* arg2) = _$LT$std..io..error..ErrorKind$u20$as$u20$core..fmt..Display$GT$::fmt::heda7d5343088b56f;
                            result_1 = &data_5243a8;
                            int64_t var_2f0_3 = 2;
                            int64_t var_2d8_5 = 0;
                            int64_t** var_2e8_5 = &var_4a8;
                            var_2e0 = 2;
                            int128_t var_310;
                            core::option::Option$LT$T$GT$::map_or_else::h725dcc8f79796e4c(&var_310, 
                                &result_1);
                            var_2e0 = 0;
                            result_1 = var_310;
                            int64_t var_300;
                            int64_t var_2e8_6 = var_300;
                            uint64_t rax_24 =
                                alloc::boxed::Box$LT$T$GT$::new::h5e437b04e14cce82(&result_1);
                            var_4d8 = rax_24;
                            int64_t* var_4d0_3 = &data_524418;
                            uucore::mods::error::set_exit_code::hbbe6ffc423a314f1(_$LT$uucore..mods..error..UUsageError$u20$as$u20$uucore..mods..error..UError$GT$::code::h8679b4fbf35c6f91(rax_24));
                            int64_t* rax_26;
                            int64_t rdx_5;
                            rax_26 = uucore::util_name::h074417a1e6395129();
                            var_4a8 = rax_26;
                            int64_t var_4a0_6 = rdx_5;
                            var_4c8 = &var_4a8;
                            int64_t (* var_4c0_6)(int64_t* arg1, int64_t arg2) = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h17d30c655730047a;
                            uint64_t* var_4b8_6 = &var_4d8;
                            var_4b0_3 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h4cb9a5d0848ee960;
                            result_1 = &data_524358;
                            var_2f0 = 3;
                            int64_t var_2d8_6 = 0;
                            var_2e8 = &var_4c8;
                            var_2e0 = 2;
                            std::io::stdio::_eprint::h57899770eacec2ad(&result_1);
                            core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$clap_builder..builder..value_parser..AnyValueParser$GT$$GT$::hc76cfff48b2d6fad(var_4d8, var_4d0_3);
                            
                            if (crossterm::terminal::enable_raw_mode::hd50a747b44e84432())
                                goto label_4732c1;
                            
                            core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hfeb26519dcae8a08(&var_488);
                        }
                        
                        rax_5 = var_420;
                        continue;
                    }
                    else if (crossterm::terminal::disable_raw_mode::h465f563c46635ef8())
                        result_4 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
                    else
                    {
                        var_4c8 = 1;
                        void** const var_4c0_3 = r13;
                        uint64_t var_4b8_3 = r14_1;
                        char var_4b0_2 = 1;
                        var_4a8 = &var_4c8;
                        int64_t (* var_4a0_3)(int32_t* arg1, int64_t* arg2) = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                        result_1 = &data_524388;
                        int64_t var_2f0_2 = 2;
                        int64_t var_2d8_3 = 0;
                        int64_t** var_2e8_3 = &var_4a8;
                        var_2e0 = 1;
                        int128_t var_328;
                        core::option::Option$LT$T$GT$::map_or_else::h725dcc8f79796e4c(&var_328, 
                            &result_1);
                        var_2e0 = 0;
                        result_1 = var_328;
                        int64_t var_318;
                        int64_t var_2e8_4 = var_318;
                        uint64_t rax_17 =
                            alloc::boxed::Box$LT$T$GT$::new::h5e437b04e14cce82(&result_1);
                        var_4d8 = rax_17;
                        int64_t* var_4d0_2 = &data_524418;
                        uucore::mods::error::set_exit_code::hbbe6ffc423a314f1(_$LT$uucore..mods..error..UUsageError$u20$as$u20$uucore..mods..error..UError$GT$::code::h8679b4fbf35c6f91(rax_17));
                        int64_t* rax_19;
                        int64_t rdx_3;
                        rax_19 = uucore::util_name::h074417a1e6395129();
                        var_4a8 = rax_19;
                        int64_t var_4a0_4 = rdx_3;
                        var_4c8 = &var_4a8;
                        int64_t (* var_4c0_4)(int64_t* arg1, int64_t arg2) =
                            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h17d30c655730047a;
                        uint64_t* var_4b8_4 = &var_4d8;
                        var_4b0_2 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h4cb9a5d0848ee960;
                        result_1 = &data_524358;
                        var_2f0 = 3;
                        int64_t var_2d8_4 = 0;
                        var_2e8 = &var_4c8;
                        var_2e0 = 2;
                        std::io::stdio::_eprint::h57899770eacec2ad(&result_1);
                        core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$clap_builder..builder..value_parser..AnyValueParser$GT$$GT$::hc76cfff48b2d6fad(var_4d8, var_4d0_2);
                        
                        if (!crossterm::terminal::enable_raw_mode::hd50a747b44e84432())
                        {
                            rax_5 = var_420;
                            continue;
                        }
                        else
                            result_4 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
                    }
                }
                else if (crossterm::terminal::disable_raw_mode::h465f563c46635ef8())
                    result_4 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
                else
                {
                    var_4c8 = 1;
                    void** const var_4c0_1 = r13;
                    uint64_t var_4b8_1 = r14_1;
                    char var_4b0_1 = 1;
                    var_4a8 = &var_4c8;
                    int64_t (* var_4a0_1)(int32_t* arg1, int64_t* arg2) = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                    result_1 = &data_524338;
                    int64_t var_2f0_1 = 2;
                    int64_t var_2d8_1 = 0;
                    int64_t** var_2e8_1 = &var_4a8;
                    var_2e0 = 1;
                    int128_t var_340;
                    core::option::Option$LT$T$GT$::map_or_else::h725dcc8f79796e4c(&var_340, 
                        &result_1);
                    var_2e0 = 0;
                    result_1 = var_340;
                    int64_t var_330;
                    int64_t var_2e8_2 = var_330;
                    uint64_t rax_11 = alloc::boxed::Box$LT$T$GT$::new::h5e437b04e14cce82(&result_1);
                    var_4d8 = rax_11;
                    void** const var_4d0_1 = &data_5244a0;
                    uucore::mods::error::set_exit_code::hbbe6ffc423a314f1(_$LT$uucore..mods..error..UUsageError$u20$as$u20$uucore..mods..error..UError$GT$::code::h8679b4fbf35c6f91(rax_11));
                    int64_t* rax_13;
                    int64_t rdx_1;
                    rax_13 = uucore::util_name::h074417a1e6395129();
                    var_4a8 = rax_13;
                    int64_t var_4a0_2 = rdx_1;
                    var_4c8 = &var_4a8;
                    int64_t (* var_4c0_2)(int64_t* arg1, int64_t arg2) =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h17d30c655730047a;
                    uint64_t* var_4b8_2 = &var_4d8;
                    var_4b0_1 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h4cb9a5d0848ee960;
                    result_1 = &data_524358;
                    var_2f0 = 3;
                    int64_t var_2d8_2 = 0;
                    var_2e8 = &var_4c8;
                    var_2e0 = 2;
                    std::io::stdio::_eprint::h57899770eacec2ad(&result_1);
                    core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$clap_builder..builder..value_parser..AnyValueParser$GT$$GT$::hc76cfff48b2d6fad(var_4d8, var_4d0_1);
                    
                    if (!crossterm::terminal::enable_raw_mode::hd50a747b44e84432())
                    {
                        rax_5 = var_420;
                        continue;
                    }
                    else
                        result_4 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
                }
                result = result_4;
                goto label_4732f2;
            }
            
            goto label_47320b;
        }
        
        var_478 = 0;
        int64_t var_470_1 = 1;
        int64_t var_468_1 = 0;
        std::io::stdio::stdin::h9a05a2c3e7544b2a();
        result_1 = &std::io::stdio::stdin::INSTANCE::heccb3522b341563b;
        int64_t var_3c0;
        
        if (!(_$LT$std..io..stdio..Stdin$u20$as$u20$std..io..Read$GT$::read_to_string::hfb372f0d8ac67275(&result_1, &var_478) & 1))
        {
            if (!var_468_1)
            {
                _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h18293cfa67260e0b(&var_420, "bad usagefiles\r/home/34r7hm4n/.…", 9);
                int64_t var_2e8_7 = var_410;
                result_1 = var_420;
                int32_t var_2e0_1 = 1;
                result = alloc::boxed::Box$LT$T$GT$::new::h5e437b04e14cce82(&result_1);
                goto label_4732a6;
            }
            
            int64_t var_358_1 = var_468_1;
            int128_t var_368 = var_478;
            int64_t var_350_1 = 0;
            uint64_t result_3;
            result_3 = uu_more::more::h7c8eea8d2920cc18(&var_368, &var_480, &var_3c8);
            result = result_3;
            
            if (result_3)
                goto label_4732f2;
            
            label_47320b:
            core::ptr::drop_in_place$LT$uu_more..Options$GT$::h3d5cdd05e4c7b237(var_3c8, var_3c0);
            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h2140f0859326984b(&var_3a0);
            result = 0;
        }
        else
        {
            result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
            label_4732a6:
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h252ce3d2b34612c7(var_478, 
                var_470_1);
            label_4732f2:
            core::ptr::drop_in_place$LT$uu_more..Options$GT$::h3d5cdd05e4c7b237(var_3c8, var_3c0);
            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h2140f0859326984b(&var_3a0);
        }
    }
    else
        result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he92a37de32738e67(var_418);
    core::ptr::drop_in_place$LT$uu_more..TerminalGuard$GT$::h095bf8633f89bcc9();
    return result;
}
