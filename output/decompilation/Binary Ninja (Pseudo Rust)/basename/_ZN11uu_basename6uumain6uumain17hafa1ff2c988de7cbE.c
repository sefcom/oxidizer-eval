
  fn uu_basename::uumain::uumain::hafa1ff2c988de7cb(arg1: i64) -> *mut i64

{
    let mut var_340: i128;
    uucore::Args::collect_lossy::h23c2a3e3ca25697a(&var_340, arg1);
    let mut var_2f8: fn() -> !;
    uu_basename::uu_app::h0b657963404f564a(&var_2f8);
    let var_330: i64;
    let var_388: i64 = var_330;
    let mut var_398: i128 = var_340;
    let mut var_3f8: fn() -> !;
    clap_builder::builder::command::Command::try_get_matches_from::he6bf499b6a746767(&var_3f8, 
        &var_2f8, &var_398);
    let rax_1: fn() -> ! = var_3f8;
    let mut var_3f0: *mut i8;
    
    if rax_1 == -0x8000000000000000
    {
        return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7fb9d0425989847a(var_3f0);
    }
    
    let var_3c8: *mut i8;
    let var_348_1: *mut i8 = var_3c8;
    let var_3d8: i128;
    let var_358_1: i128 = var_3d8;
    let mut var_3e8: u128;
    let var_368_1: u128 = var_3e8;
    let mut var_378: fn() -> ! = rax_1;
    let var_370_1: *mut i8 = var_3f0;
    let mut rax_4: i8 = 0xa;
    
    if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
        &var_378, "zeroAnsi -- \x1b[8mhelpNoneshimn…", 4) != 0
    {
        rax_4 = 0;
    }
    
    let mut var_411: i8 = rax_4;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h78ff5d19ca8609fd(
        &var_2f8, &var_378, &data_412f24[0xc], 4);
    let mut rsi_4: *const i8 = &data_412f24[0xc];
    clap_builder::parser::error::MatchesError::unwrap::h9a0d3a6d2e9de983(&var_3f8, 
        &data_412f24[0xc], 4, &var_2f8);
    let mut rax_5: fn() -> ! = var_3f8;
    let mut rcx_3: *const i8;
    let mut rdx_2: i64;
    let mut zmm0_2: i128;
    let mut zmm1_2: u128;
    
    if rax_5 == 0
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
        let var_3c0: i64;
        rdx_2 = var_3c0;
    }
    
    var_2f8 = rax_5;
    let mut var_2e8_1: u128 = zmm1_2;
    let mut var_2d8_1: i128 = zmm0_2;
    let var_2c8_1: *const i8 = rsi_4;
    let var_2c0_1: i64 = rdx_2;
    let mut var_3b0: ();
    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h2380b6632f2686cc(&var_3b0, &var_2f8);
    let var_3a0: i64;
    let mut result: *mut i64;
    
    if var_3a0 == 0
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
        let rax_6: i64 = clap_builder::parser::error::MatchesError::unwrap::hb9e5bc066166ebb5(
            "suffix0.0.28{} [-z] NAME [SUFFIX…", 6, &var_2f8);
        let mut rax_7: i8;
        
        if rax_6 == 0
        {
            rax_7 =
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
                &var_378, "multipleNO_COLOREL3HLTEL3RSTELNR…", 8);
        }
        
        let mut var_410: fn() -> !;
        
        if rax_6 != 0 || rax_7 != 0
        {
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h6b765cbc81459d91(
                &var_2f8, &var_378, "suffix0.0.28{} [-z] NAME [SUFFIX…", 6);
            let rax_8: *mut c_void =
                clap_builder::parser::error::MatchesError::unwrap::hb9e5bc066166ebb5(
                "suffix0.0.28{} [-z] NAME [SUFFIX…", 6, &var_2f8);
            let mut var_408: i64;
            
            if rax_8 != 0
            {
                _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(&var_2f8, rax_8);
                let rax_9: fn() -> ! = var_2f8;
                var_3f8 = rcx_3;
                
                if rax_9 != -0x8000000000000000
                {
                    var_408 = var_3f8;
                    var_410 = rax_9;
                    goto 'label_463599;
                }
                
                goto 'label_4634fb;
            }
            
            'label_4634fb:
            var_410 = nullptr;
            var_408 = 1;
            let var_400: u64 = 0;
            'label_463599:
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h89482ec4a8f60c59(&var_398, &var_3b0);
            
            for let mut i: *mut c_void = _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h5b9010a19a1a5647(&var_398); i != 0; i = _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h5b9010a19a1a5647(&var_398)
            {
                let mut fnvar_310() -> !;
                uu_basename::basename::h5fea76ad93274f11(&var_310, *i.byte_offset(8), 
                    *i.byte_offset(0x10), var_408, var_400);
                var_3f8 = &var_310;
                let var_3f0_1: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                var_3e8 = &var_411;
                *var_3e8[8] = _$LT$uucore..mods..line_ending..LineEnding$u20$as$u20$core..fmt..Display$GT$::fmt::h6643b2132dca5a5b;
                var_2f8 = &data_413768;
                let var_2f0_2: i64 = 2;
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
        
        if var_3a0 == 1
        {
            goto 'label_4634fb;
        }
        
        let var_3a8: *mut c_void;
        
        if var_3a0 == 2
        {
            let var_3a0_1: i64 = 1;
            _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(
                &var_410, *var_3a8.byte_offset(8));
            goto 'label_463599;
        }
        
        if var_3a0 == 0
        {
            var_2f8 = &data_50c2b0;
            let var_2f0_4: i64 = 1;
            var_2e8_1 = 8;
            var_2e8_1 = {0};
            core::panicking::panic_fmt::he12d0d7468628bb4(&var_2f8);
            /* no return */
        }
        
        let zmm0_3: i128 = *(*var_3a8.byte_offset(0x10)).byte_offset(8);
        var_3f8 = nullptr;
        var_3f0 = zmm0_3;
        *var_3e8[8] = 1;
        var_398 = &var_3f8;
        *var_398[8] =
            _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
        var_2f8 = &data_50c2c0;
        let var_2f0_3: i64 = 1;
        var_2d8_1 = 0;
        var_2e8_1 = &var_398;
        *var_2e8_1[8] = 1;
        let mut var_328: i128;
        core::option::Option$LT$T$GT$::map_or_else::hccb2c5237b9a5f11(&var_328, &var_2f8);
        *var_2e8_1[8] = 1;
        var_2f8 = var_328;
        let var_318: i64;
        var_2e8_1 = var_318;
        result = alloc::boxed::Box$LT$T$GT$::new::h75d2f99a8ee9cadd(&var_2f8);
    }
    
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$alloc..string..String$GT$$GT$::h800e991a5f8ef942(&var_3b0);
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hce81d941c7def3f2(&var_378);
    result
}
