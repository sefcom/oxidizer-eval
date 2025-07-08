
  fn uu_factor::uumain::uumain::h8a5b39c1daa0c762(arg1: i64) -> *mut i64

{
    let mut var_2f8: i128;
    uu_factor::uu_app::h680fb957320d0cf8(&var_2f8);
    let mut var_3c0: *mut *mut *mut c_void;
    clap_builder::builder::command::Command::try_get_matches_from::h356928954ce19a97(&var_3c0, 
        &var_2f8, arg1);
    let rax: *mut *mut *mut c_void = var_3c0;
    let mut result: *mut i64;
    let var_3b8: i64;
    
    if rax != -0x8000000000000000
    {
        let var_390: i64;
        let var_328_1: i64 = var_390;
        let var_3a0: i128;
        let var_338_1: i128 = var_3a0;
        let var_3b0: i128;
        let var_348_1: i128 = var_3b0;
        let mut var_358: *mut *mut *mut c_void = rax;
        let var_350_1: i64 = var_3b8;
        let rax_2: i8 =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
            &var_358, "exponentsNUMBER0.0.28Print the p…", 9);
        std::io::stdio::stdout::h077da66234850927();
        let mut var_378: *mut i64 = &std::io::stdio::STDOUT::hdbe36c11cd3014ce;
        let mut var_320: ();
        std::io::buffered::bufwriter::BufWriter$LT$W$GT$::with_capacity::h65001697dc742481(
            &var_320, 0x1000, std::io::stdio::Stderr::lock::h890f7962a170fc90(&var_378));
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::ha0ed1229838b49f0(
            &var_2f8, &var_358, "NUMBER0.0.28Print the prime fact…", 6);
        clap_builder::parser::error::MatchesError::unwrap::h077ff7a07b830d8b(&var_3c0, 
            "NUMBER0.0.28Print the prime fact…", 6, &var_2f8);
        let mut var_2e8: i128;
        let mut var_2d8: i128;
        
        if var_3c0 == 0
        {
            std::io::stdio::stdin::h7215cc131abb55d8();
            let mut var_370: *mut c_void = &std::io::stdio::stdin::INSTANCE::hd3a98c261e3f14b5;
            let mut rax_5: *mut i32;
            let mut rdx_4: i8;
            rax_5 = std::io::stdio::Stdin::lock::h161a36d857331d7f(&var_370);
            let mut var_408: *mut i32 = rax_5;
            rdx_4 &= 1;
            let mut var_3d8: *mut *mut c_void;
            let mut rdi_11: *mut *mut *mut c_void = &var_3d8;
            let mut rsi_4: *mut i64 = &var_408;
            let var_380_1: i64 = -0x7fffffffffffffff;
            'label_4a47c3:
            _$LT$std..io..Lines$LT$B$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hcbb0d6e1edcb0826(rdi_11, rsi_4);
            let rax_6: *mut i64 = var_3d8;
            let mut var_3f8: *mut i64;
            
            if rax_6 == var_380_1
            {
                core::ptr::drop_in_place$LT$std..io..Lines$LT$std..io..stdio..StdinLock$GT$$GT$::h55ca6e1999776e14(var_408, rdx_4);
                'label_4a48d4:
                let rax_8: *mut *mut c_void = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::flush::hea36ead84b054e88(&var_320);
                
                if rax_8 != 0
                {
                    var_3d8 = rax_8;
                    let mut rax_9: *mut *mut *mut c_void;
                    let mut rdx_9: i64;
                    rax_9 = uucore::util_name::h60d842bf27b05e82();
                    var_3c0 = rax_9;
                    let var_3b8_1: i64 = rdx_9;
                    var_3f8 = &var_3c0;
                    let var_3f0_2: fn(arg1: *mut i64, arg2: i64) -> i64 =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h60e20a2526965720;
                    var_2f8 = &data_58af30;
                    *var_2f8[8] = 2;
                    var_2d8 = 0;
                    var_2e8 = &var_3f8;
                    *var_2e8[8] = 1;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&var_2f8);
                    var_3c0 = &var_3d8;
                    let var_3b8_2: fn(arg1: *mut i64, arg2: *mut i64) -> i64 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h59fe8285afbb4739;
                    var_2f8 = &data_58af50;
                    *var_2f8[8] = 2;
                    var_2d8 = 0;
                    var_2e8 = &var_3c0;
                    *var_2e8[8] = 1;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&var_2f8);
                    core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hfc16f546d6f9e628(
                        var_3d8);
                }
                
                core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$std..io..stdio..StdoutLock$GT$$GT$::h7af400aa75a34036(&var_320);
                core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h6f0186b4e8ff4b47(&var_358);
                return nullptr;
            }
            
            let var_3d0: i64;
            
            if rax_6 == -0x8000000000000000
            {
                let mut var_3e0: i64 = var_3d0;
                uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0(1);
                let mut rax_11: *mut i64;
                let mut rdx_11: i64;
                rax_11 = uucore::util_name::h60d842bf27b05e82();
                var_3f8 = rax_11;
                let var_3f0_3: i64 = rdx_11;
                let mut var_368: *mut *mut i64 = &var_3f8;
                let var_360_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h60e20a2526965720;
                var_2f8 = &data_58af30;
                *var_2f8[8] = 2;
                var_2d8 = 0;
                var_2e8 = &var_368;
                *var_2e8[8] = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&var_2f8);
                var_3f8 = &var_3e0;
                let var_3f0_4: fn(arg1: *mut i64, arg2: *mut i64) -> i64 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h59fe8285afbb4739;
                var_2f8 = &data_58afa8;
                *var_2f8[8] = 2;
                var_2d8 = 0;
                var_2e8 = &var_3f8;
                *var_2e8[8] = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&var_2f8);
                core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hfc16f546d6f9e628(var_3e0);
                result = nullptr;
            }
            else
            {
                var_3f8 = rax_6;
                let var_3f0_1: i64 = var_3d0;
                let var_3c8: i64;
                let var_3e8_1: i64 = var_3c8;
                _$LT$core..str..pattern..MultiCharEqPattern$LT$C$GT$$u20$as$u20$core..str..pattern..Pattern$GT$::into_searcher::hf2619fac8d2a8106(&var_2e8, var_3d0, var_3c8);
                var_2f8 = 0;
                *var_2f8[8] = var_3c8;
                let mut var_2c8: i128;
                *var_2c8[8] = 1;
                let mut i: *mut i128;
                
                do
                {
                    let mut var_2b8: ();
                    let mut rax_7: i64;
                    let mut rdx_6: *mut *mut c_void;
                    rax_7 = core::iter::traits::iterator::Iterator::try_fold::h40e02e54eaed34f1(
                        &var_2f8, &var_2b8);
                    
                    if rax_7 == 0
                    {
                        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h0c60f8fdd24455a3(
                            &var_3f8);
                        rdi_11 = &var_3d8;
                        rsi_4 = &var_408;
                        goto 'label_4a47c3;
                    }
                    
                    let mut rdx_8: *mut *mut c_void;
                    i = uu_factor::print_factors_str::he132e712a0bda753(rax_7, rdx_6, &var_320, 
                        rax_2);
                    result = i;
                } while i == 0;
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h0c60f8fdd24455a3(&var_3f8);
            }
            core::ptr::drop_in_place$LT$std..io..Lines$LT$std..io..stdio..StdinLock$GT$$GT$::h55ca6e1999776e14(var_408, rdx_4);
            core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$std..io..stdio..StdoutLock$GT$$GT$::h7af400aa75a34036(&var_320);
            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h6f0186b4e8ff4b47(&var_358);
        }
        else
        {
            let zmm0_2: i128 = var_3c0;
            let var_2c8_1: i128 = var_390;
            var_2d8 = var_3a0;
            var_2e8 = var_3b0;
            var_2f8 = zmm0_2;
            let mut i_1: *mut i128;
            
            do
            {
                let rax_4: *mut c_void = _$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h9e00d23760fea2f1(&var_2f8);
                
                if rax_4 == 0
                {
                    goto 'label_4a48d4;
                }
                
                let mut rdx_3: *mut *mut c_void;
                i_1 = uu_factor::print_factors_str::he132e712a0bda753(*rax_4.byte_offset(8), 
                    *rax_4.byte_offset(0x10), &var_320, rax_2);
                result = i_1;
            } while i_1 == 0;
            core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$std..io..stdio..StdoutLock$GT$$GT$::h7af400aa75a34036(&var_320);
            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h6f0186b4e8ff4b47(&var_358);
        }
    }
    else
    {
        result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7fb9d0425989847a(var_3b8);
    }
    result
}
