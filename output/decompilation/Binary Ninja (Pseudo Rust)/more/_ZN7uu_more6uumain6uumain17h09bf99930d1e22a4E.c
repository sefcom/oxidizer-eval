
  fn uu_more::uumain::uumain::h09bf99930d1e22a4(arg1: i64) -> u64

{
    std::panicking::set_hook::h907d45d363a27a50(
        alloc::boxed::Box$LT$T$GT$::new::h280b746f5ffff174(), &data_5243c8);
    let mut result_1: u64;
    uu_more::uu_app::h91a4b949c44828f9(&result_1);
    let mut var_420: i64;
    clap_builder::builder::command::Command::try_get_matches_from::h6f280e93681d8b4e(&var_420, 
        &result_1, arg1);
    let rax_1: i64 = var_420;
    let mut result: u64;
    let var_418: *mut *mut c_void;
    
    if -(rax_1) != -0x8000000000000000
    {
        let var_3f0: i64;
        let var_370_1: i64 = var_3f0;
        let mut var_400: i128;
        let var_380_1: i128 = var_400;
        let mut var_410: i128;
        let var_390_1: i128 = var_410;
        let mut var_3a0: i64 = rax_1;
        let var_398_1: *mut *mut c_void = var_418;
        let mut var_3c8: i64;
        uu_more::Options::from::h891a40eb4d8100b7(&var_3c8, &var_3a0);
        uu_more::setup_term::h0836ea3f29ebee77(&result_1);
        result = result_1;
        
        if result != 0
        {
            goto 'label_4732f2;
        }
        
        let mut var_2f0: *mut i8;
        let mut var_480: *mut *mut c_void = var_2f0;
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::hb1a200c6a1fe7de3(
            &result_1, &var_3a0);
        let mut var_478: i64;
        clap_builder::parser::error::MatchesError::unwrap::hb8dd9878ac53ee79(&var_478, &result_1);
        let mut rdx_8: *mut *mut c_void;
        
        if var_478 != 0
        {
            let var_440: i64;
            let rax_3: i64 =
                core::iter::traits::exact_size::ExactSizeIterator::len::he3ff82773236146f(var_440);
            let var_448: i64;
            let var_3d8_1: i64 = var_448;
            let var_458: i128;
            let var_3e8_1: i128 = var_458;
            let var_468: i64;
            var_400 = var_468;
            var_410 = var_478;
            let var_3d0_1: i64 = var_440;
            let mut rax_5: i8 = 0;
            
            loop
            {
                let mut r13: *mut *mut c_void = var_418;
                let mut r14_1: u64 = var_410;
                var_420 = 0;
                
                if (rax_5 & 1) == 0
                {
                    let rax_6: *mut c_void = _$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h6dc70c466a64e469(&*var_410[8]);
                    
                    if rax_6 == 0
                    {
                        r13 = nullptr;
                    }
                    else
                    {
                        r13 = *rax_6.byte_offset(8);
                        r14_1 = *rax_6.byte_offset(0x10);
                    }
                }
                
                let rax_7: *mut c_void =
                    core::option::Option$LT$T$GT$::get_or_insert_with::h96ff1e210b7855ff(&var_420, 
                    &*var_410[8]);
                
                if r13 == 0
                {
                    break;
                }
                
                let r15_1: i64 = *rax_7;
                let mut result_4: u64;
                let mut var_4d8: u64;
                let mut var_4c8: *mut *mut i64;
                let mut var_4a8: *mut i64;
                let mut var_2e8: *mut i8;
                let mut var_2e0: i32;
                
                if std::path::Path::is_dir::h02edbc48c38d7d9e(r13, r14_1) == 0
                {
                    std::fs::metadata::hc83829b9c1bdbf56(&result_1, r13);
                    let result_5: u32 = result_1;
                    core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::hb95ebecb39e0d4bc(&result_1);
                    
                    if result_5 != 2
                    {
                        let mut var_430: i32;
                        std::fs::File::open::h9aa6ed797dd29ae7(&var_430, r13);
                        
                        if var_430 != 1
                        {
                            let mut rax_27: *mut i64 =
                                core::str::converts::from_utf8::h8a6dc80f786921e0(&result_1, r13, 
                                r14_1);
                            let mut r9_1: i64 = 0;
                            let mut rcx_3: *mut i8 = nullptr;
                            
                            if result_1 == 0
                            {
                                rcx_3 = var_2f0;
                            }
                            
                            if r15_1 != 0
                            {
                                r9_1 = *rax_7;
                                rax_27 = *rax_7.byte_offset(8);
                            }
                            
                            let mut rdx_7: i32;
                            rdx_7 = rax_3 >= 2;
                            let var_42c: i32;
                            let mut result_2: u64;
                            result_2 = uu_more::more::h6e099d2d6eef5fb4(var_42c, &var_480, rdx_7, 
                                rcx_3, var_2e8, r9_1, rax_27, &var_3c8);
                            result = result_2;
                            
                            if result_2 != 0
                            {
                                goto 'label_4732f2;
                            }
                        }
                        else
                        {
                            let var_428: i64;
                            let mut var_488: i64 = var_428;
                            
                            if crossterm::terminal::disable_raw_mode::h465f563c46635ef8() != 0
                            {
                                'label_4732c1:
                                result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
                                core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hfeb26519dcae8a08(&var_488);
                                goto 'label_4732f2;
                            }
                            
                            var_4c8 = 1;
                            let var_4c0_5: *mut *mut c_void = r13;
                            let var_4b8_5: u64 = r14_1;
                            let mut var_4b0_3: i8 = 1;
                            var_4d8 = std::io::error::Error::kind::h135fe00c4e7365f3(var_428);
                            var_4a8 = &var_4c8;
                            let var_4a0_5: fn(arg1: *mut i32, arg2: *mut i64) -> i64 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                            let var_498_1: *mut u64 = &var_4d8;
                            let var_490_1: fn(arg1: *mut i8, arg2: *mut i64) -> i64 = _$LT$std..io..error..ErrorKind$u20$as$u20$core..fmt..Display$GT$::fmt::heda7d5343088b56f;
                            result_1 = &data_5243a8;
                            let var_2f0_3: i64 = 2;
                            let var_2d8_5: i64 = 0;
                            let var_2e8_5: *mut *mut i64 = &var_4a8;
                            var_2e0 = 2;
                            let mut var_310: i128;
                            core::option::Option$LT$T$GT$::map_or_else::h725dcc8f79796e4c(&var_310, 
                                &result_1);
                            var_2e0 = 0;
                            result_1 = var_310;
                            let var_300: i64;
                            let var_2e8_6: i64 = var_300;
                            let rax_24: u64 =
                                alloc::boxed::Box$LT$T$GT$::new::h5e437b04e14cce82(&result_1);
                            var_4d8 = rax_24;
                            let var_4d0_3: *mut i64 = &data_524418;
                            uucore::mods::error::set_exit_code::hbbe6ffc423a314f1(_$LT$uucore..mods..error..UUsageError$u20$as$u20$uucore..mods..error..UError$GT$::code::h8679b4fbf35c6f91(rax_24));
                            let mut rax_26: *mut i64;
                            let mut rdx_5: i64;
                            rax_26 = uucore::util_name::h074417a1e6395129();
                            var_4a8 = rax_26;
                            let var_4a0_6: i64 = rdx_5;
                            var_4c8 = &var_4a8;
                            let var_4c0_6: fn(arg1: *mut i64, arg2: i64) -> i64 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h17d30c655730047a;
                            let var_4b8_6: *mut u64 = &var_4d8;
                            var_4b0_3 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h4cb9a5d0848ee960;
                            result_1 = &data_524358;
                            var_2f0 = 3;
                            let var_2d8_6: i64 = 0;
                            var_2e8 = &var_4c8;
                            var_2e0 = 2;
                            std::io::stdio::_eprint::h57899770eacec2ad(&result_1);
                            core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$clap_builder..builder..value_parser..AnyValueParser$GT$$GT$::hc76cfff48b2d6fad(var_4d8, var_4d0_3);
                            
                            if crossterm::terminal::enable_raw_mode::hd50a747b44e84432() != 0
                            {
                                goto 'label_4732c1;
                            }
                            
                            core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hfeb26519dcae8a08(&var_488);
                        }
                        
                        rax_5 = var_420;
                        continue;
                    }
                    else if crossterm::terminal::disable_raw_mode::h465f563c46635ef8() != 0
                    {
                        result_4 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
                    }
                    else
                    {
                        var_4c8 = 1;
                        let var_4c0_3: *mut *mut c_void = r13;
                        let var_4b8_3: u64 = r14_1;
                        let mut var_4b0_2: i8 = 1;
                        var_4a8 = &var_4c8;
                        let var_4a0_3: fn(arg1: *mut i32, arg2: *mut i64) -> i64 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                        result_1 = &data_524388;
                        let var_2f0_2: i64 = 2;
                        let var_2d8_3: i64 = 0;
                        let var_2e8_3: *mut *mut i64 = &var_4a8;
                        var_2e0 = 1;
                        let mut var_328: i128;
                        core::option::Option$LT$T$GT$::map_or_else::h725dcc8f79796e4c(&var_328, 
                            &result_1);
                        var_2e0 = 0;
                        result_1 = var_328;
                        let var_318: i64;
                        let var_2e8_4: i64 = var_318;
                        let rax_17: u64 =
                            alloc::boxed::Box$LT$T$GT$::new::h5e437b04e14cce82(&result_1);
                        var_4d8 = rax_17;
                        let var_4d0_2: *mut i64 = &data_524418;
                        uucore::mods::error::set_exit_code::hbbe6ffc423a314f1(_$LT$uucore..mods..error..UUsageError$u20$as$u20$uucore..mods..error..UError$GT$::code::h8679b4fbf35c6f91(rax_17));
                        let mut rax_19: *mut i64;
                        let mut rdx_3: i64;
                        rax_19 = uucore::util_name::h074417a1e6395129();
                        var_4a8 = rax_19;
                        let var_4a0_4: i64 = rdx_3;
                        var_4c8 = &var_4a8;
                        let var_4c0_4: fn(arg1: *mut i64, arg2: i64) -> i64 =
                            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h17d30c655730047a;
                        let var_4b8_4: *mut u64 = &var_4d8;
                        var_4b0_2 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h4cb9a5d0848ee960;
                        result_1 = &data_524358;
                        var_2f0 = 3;
                        let var_2d8_4: i64 = 0;
                        var_2e8 = &var_4c8;
                        var_2e0 = 2;
                        std::io::stdio::_eprint::h57899770eacec2ad(&result_1);
                        core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$clap_builder..builder..value_parser..AnyValueParser$GT$$GT$::hc76cfff48b2d6fad(var_4d8, var_4d0_2);
                        
                        if crossterm::terminal::enable_raw_mode::hd50a747b44e84432() == 0
                        {
                            rax_5 = var_420;
                            continue;
                        }
                        else
                        {
                            result_4 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
                        }
                    }
                }
                else if crossterm::terminal::disable_raw_mode::h465f563c46635ef8() != 0
                {
                    result_4 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
                }
                else
                {
                    var_4c8 = 1;
                    let var_4c0_1: *mut *mut c_void = r13;
                    let var_4b8_1: u64 = r14_1;
                    let mut var_4b0_1: i8 = 1;
                    var_4a8 = &var_4c8;
                    let var_4a0_1: fn(arg1: *mut i32, arg2: *mut i64) -> i64 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                    result_1 = &data_524338;
                    let var_2f0_1: i64 = 2;
                    let var_2d8_1: i64 = 0;
                    let var_2e8_1: *mut *mut i64 = &var_4a8;
                    var_2e0 = 1;
                    let mut var_340: i128;
                    core::option::Option$LT$T$GT$::map_or_else::h725dcc8f79796e4c(&var_340, 
                        &result_1);
                    var_2e0 = 0;
                    result_1 = var_340;
                    let var_330: i64;
                    let var_2e8_2: i64 = var_330;
                    let rax_11: u64 = alloc::boxed::Box$LT$T$GT$::new::h5e437b04e14cce82(&result_1);
                    var_4d8 = rax_11;
                    let var_4d0_1: *mut *mut c_void = &data_5244a0;
                    uucore::mods::error::set_exit_code::hbbe6ffc423a314f1(_$LT$uucore..mods..error..UUsageError$u20$as$u20$uucore..mods..error..UError$GT$::code::h8679b4fbf35c6f91(rax_11));
                    let mut rax_13: *mut i64;
                    let mut rdx_1: i64;
                    rax_13 = uucore::util_name::h074417a1e6395129();
                    var_4a8 = rax_13;
                    let var_4a0_2: i64 = rdx_1;
                    var_4c8 = &var_4a8;
                    let var_4c0_2: fn(arg1: *mut i64, arg2: i64) -> i64 =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h17d30c655730047a;
                    let var_4b8_2: *mut u64 = &var_4d8;
                    var_4b0_1 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h4cb9a5d0848ee960;
                    result_1 = &data_524358;
                    var_2f0 = 3;
                    let var_2d8_2: i64 = 0;
                    var_2e8 = &var_4c8;
                    var_2e0 = 2;
                    std::io::stdio::_eprint::h57899770eacec2ad(&result_1);
                    core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$clap_builder..builder..value_parser..AnyValueParser$GT$$GT$::hc76cfff48b2d6fad(var_4d8, var_4d0_1);
                    
                    if crossterm::terminal::enable_raw_mode::hd50a747b44e84432() == 0
                    {
                        rax_5 = var_420;
                        continue;
                    }
                    else
                    {
                        result_4 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
                    }
                }
                result = result_4;
                goto 'label_4732f2;
            }
            
            goto 'label_47320b;
        }
        
        var_478 = 0;
        let var_470_1: i64 = 1;
        let var_468_1: i64 = 0;
        std::io::stdio::stdin::h9a05a2c3e7544b2a();
        result_1 = &std::io::stdio::stdin::INSTANCE::heccb3522b341563b;
        let var_3c0: i64;
        
        if (_$LT$std..io..stdio..Stdin$u20$as$u20$std..io..Read$GT$::read_to_string::hfb372f0d8ac67275(&result_1, &var_478) & 1) == 0
        {
            if var_468_1 == 0
            {
                _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h18293cfa67260e0b(&var_420, "bad usagefiles\r/home/34r7hm4n/.…", 9);
                let var_2e8_7: i64 = var_410;
                result_1 = var_420;
                let var_2e0_1: i32 = 1;
                result = alloc::boxed::Box$LT$T$GT$::new::h5e437b04e14cce82(&result_1);
                goto 'label_4732a6;
            }
            
            let var_358_1: i64 = var_468_1;
            let mut var_368: i128 = var_478;
            let var_350_1: i64 = 0;
            let mut result_3: u64;
            result_3 = uu_more::more::h7c8eea8d2920cc18(&var_368, &var_480, &var_3c8);
            result = result_3;
            
            if result_3 != 0
            {
                goto 'label_4732f2;
            }
            
            'label_47320b:
            core::ptr::drop_in_place$LT$uu_more..Options$GT$::h3d5cdd05e4c7b237(var_3c8, var_3c0);
            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h2140f0859326984b(&var_3a0);
            result = 0;
        }
        else
        {
            result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
            'label_4732a6:
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h252ce3d2b34612c7(var_478, 
                var_470_1);
            'label_4732f2:
            core::ptr::drop_in_place$LT$uu_more..Options$GT$::h3d5cdd05e4c7b237(var_3c8, var_3c0);
            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h2140f0859326984b(&var_3a0);
        }
    }
    else
    {
        result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he92a37de32738e67(var_418);
    }
    core::ptr::drop_in_place$LT$uu_more..TerminalGuard$GT$::h095bf8633f89bcc9();
    result
}
