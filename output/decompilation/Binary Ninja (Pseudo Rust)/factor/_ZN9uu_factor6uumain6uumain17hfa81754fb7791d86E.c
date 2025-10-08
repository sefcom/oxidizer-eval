
  fn uu_factor::uumain::uumain::hfa81754fb7791d86(arg1: i64) -> u64

{
    let mut var_2f8: i128;
    uu_factor::uu_app::habe15ffc97b29e55(&var_2f8);
    let mut var_3b0: *mut *mut *mut c_void;
    clap_builder::builder::command::Command::try_get_matches_from::h9ae4a6fed9ca7f05(&var_3b0, 
        &var_2f8, arg1);
    let rax: *mut *mut *mut c_void = var_3b0;
    let mut result: u64;
    let var_3a8: *mut *mut *mut c_void;
    
    if -(rax) != -0x8000000000000000
    {
        let var_380: i64;
        let var_328_1: i64 = var_380;
        let var_390: i128;
        let var_338_1: i128 = var_390;
        let var_3a0: i128;
        let var_348_1: i128 = var_3a0;
        let mut var_358: *mut *mut *mut c_void = rax;
        let var_350_1: *mut *mut *mut c_void = var_3a8;
        let rax_2: i8 =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            &var_358, "exponentsNUMBER(uutils coreutils…", 9);
        std::io::stdio::stdout::hb6a8e10bcccf3287();
        let mut var_368: *mut i64 = &std::io::stdio::STDOUT::h411b213c5c9add46;
        let mut var_320: ();
        std::io::buffered::bufwriter::BufWriter$LT$W$GT$::with_capacity::h96046ded03714191(
            &var_320, std::io::stdio::Stderr::lock::h0a4e4370fd1671bb(&var_368));
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h04d0d319357c8bcd(
            &var_2f8, &var_358, "NUMBER(uutils coreutils) 0.0.30P…", 6);
        clap_builder::parser::error::MatchesError::unwrap::ha872be5b6fe72ea4(&var_3b0, 
            "NUMBER(uutils coreutils) 0.0.30P…", 6, &var_2f8);
        let mut var_2e8: i128;
        let mut var_2d8: i128;
        
        if var_3b0 == 0
        {
            std::io::stdio::stdin::h9a05a2c3e7544b2a();
            let mut var_360: *mut c_void = &std::io::stdio::stdin::INSTANCE::heccb3522b341563b;
            let mut rax_5: *mut i32;
            let mut rdx_3: i8;
            rax_5 = std::io::stdio::Stdin::lock::h8b2bf765bae79e2f(&var_360);
            let mut var_3f0: *mut i32 = rax_5;
            rdx_3 &= 1;
            let mut rdi_11: *mut *mut *mut *mut c_void = &var_3b0;
            let mut rsi_5: *mut *mut i32 = &var_3f0;
            let var_370_1: i64 = -0x7fffffffffffffff;
            'label_49359f:
            _$LT$std..io..Lines$LT$B$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h462867bd822800e6(rdi_11, rsi_5);
            let rbx_1: *mut *mut *mut c_void = var_3b0;
            let mut var_3d0: *mut *mut *mut *mut c_void;
            let mut var_3c0: *mut *mut c_void;
            
            if rbx_1 == var_370_1
            {
                core::ptr::drop_in_place$LT$std..io..Lines$LT$std..io..stdio..StdinLock$GT$$GT$::ha0918034fbbd1511(var_3f0, rdx_3);
                'label_4936ab:
                let rax_7: *mut *mut c_void = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::flush::h8312d51ea439d633(&var_320);
                
                if rax_7 == 0
                {
                    core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::h1a76c4325b0cc1e6(0);
                }
                else
                {
                    var_3c0 = rax_7;
                    let mut rax_8: *mut *mut *mut c_void;
                    let mut rdx_8: i64;
                    rax_8 = uucore::util_name::h074417a1e6395129();
                    var_3b0 = rax_8;
                    let var_3a8_1: i64 = rdx_8;
                    var_3d0 = &var_3b0;
                    let var_3c8_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc900c5a3cc04ff1b;
                    var_2f8 = &data_544290;
                    *var_2f8[8] = 2;
                    var_2d8 = 0;
                    var_2e8 = &var_3d0;
                    *var_2e8[8] = 1;
                    std::io::stdio::_eprint::h57899770eacec2ad(&var_2f8);
                    var_3b0 = &var_3c0;
                    let var_3a8_2: fn(arg1: *mut i64, arg2: *mut i64) -> i64 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::ha4645305e3b6a355;
                    var_2f8 = &data_5442b0;
                    *var_2f8[8] = 2;
                    var_2d8 = 0;
                    var_2e8 = &var_3b0;
                    *var_2e8[8] = 1;
                    std::io::stdio::_eprint::h57899770eacec2ad(&var_2f8);
                    core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h841ca31e3edd53b8(
                        var_3c0);
                }
                
                core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$std..io..stdio..StdoutLock$GT$$GT$::hf35f94f31999e0ce(&var_320);
                core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h2845e6efb7fbf4e2(&var_358);
                return 0;
            }
            
            if rbx_1 == -0x8000000000000000
            {
                let mut var_3d8: *mut *mut *mut c_void = var_3a8;
                uucore::mods::error::set_exit_code::hbbe6ffc423a314f1(1);
                let mut rax_10: *mut *mut *mut *mut c_void;
                let mut rdx_10: i64;
                rax_10 = uucore::util_name::h074417a1e6395129();
                var_3d0 = rax_10;
                let var_3c8_2: i64 = rdx_10;
                var_3c0 = &var_3d0;
                let var_3b8_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc900c5a3cc04ff1b;
                var_2f8 = &data_544290;
                *var_2f8[8] = 2;
                var_2d8 = 0;
                var_2e8 = &var_3c0;
                *var_2e8[8] = 1;
                std::io::stdio::_eprint::h57899770eacec2ad(&var_2f8);
                var_3d0 = &var_3d8;
                let var_3c8_3: fn(arg1: *mut i64, arg2: *mut i64) -> i64 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::ha4645305e3b6a355;
                var_2f8 = &data_544308;
                *var_2f8[8] = 2;
                var_2d8 = 0;
                var_2e8 = &var_3d0;
                *var_2e8[8] = 1;
                std::io::stdio::_eprint::h57899770eacec2ad(&var_2f8);
                core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h841ca31e3edd53b8(var_3d8);
                result = 0;
            }
            else
            {
                let r14_1: i64 = var_3a0;
                _$LT$core..str..pattern..MultiCharEqPattern$LT$C$GT$$u20$as$u20$core..str..pattern..Pattern$GT$::into_searcher::h4cdc88adb24f0186(&var_2e8, var_3a8, r14_1);
                var_2f8 = 0;
                *var_2f8[8] = r14_1;
                let mut var_2c8: i128;
                *var_2c8[8] = 1;
                let mut i: u64;
                
                do
                {
                    let mut rax_6: i64;
                    let mut rdx_5: *mut *mut c_void;
                    rax_6 = core::iter::traits::iterator::Iterator::try_fold::hb6030f760f76d8dc(
                        &var_2f8);
                    
                    if rax_6 == 0
                    {
                        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h9cf4137fd0897025(
                            rbx_1, var_3a8);
                        rdi_11 = &var_3b0;
                        rsi_5 = &var_3f0;
                        goto 'label_49359f;
                    }
                    
                    let mut rdx_7: *mut i128;
                    i = uu_factor::print_factors_str::h9017d6fa399a3f46(rax_6, rdx_5, &var_320, 
                        rax_2);
                    result = i;
                } while i == 0;
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h9cf4137fd0897025(rbx_1, 
                    var_3a8);
            }
            
            core::ptr::drop_in_place$LT$std..io..Lines$LT$std..io..stdio..StdinLock$GT$$GT$::ha0918034fbbd1511(var_3f0, rdx_3);
            core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$std..io..stdio..StdoutLock$GT$$GT$::hf35f94f31999e0ce(&var_320);
            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h2845e6efb7fbf4e2(&var_358);
        }
        else
        {
            let zmm0_2: i128 = var_3b0;
            let var_2c8_1: i128 = var_380;
            var_2d8 = var_390;
            var_2e8 = var_3a0;
            var_2f8 = zmm0_2;
            let mut i_1: u64;
            
            do
            {
                let rax_4: *mut c_void = _$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h5fb02f6ad9487ada(&var_2f8);
                
                if rax_4 == 0
                {
                    goto 'label_4936ab;
                }
                
                let mut rdx_2: *mut i128;
                i_1 = uu_factor::print_factors_str::h9017d6fa399a3f46(*rax_4.byte_offset(8), 
                    *rax_4.byte_offset(0x10), &var_320, rax_2);
                result = i_1;
            } while i_1 == 0;
            core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$std..io..stdio..StdoutLock$GT$$GT$::hf35f94f31999e0ce(&var_320);
            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h2845e6efb7fbf4e2(&var_358);
        }
    }
    else
    {
        result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he92a37de32738e67(var_3a8);
    }
    result
}
