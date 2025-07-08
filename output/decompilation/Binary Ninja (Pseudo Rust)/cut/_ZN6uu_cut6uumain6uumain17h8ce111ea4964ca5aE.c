
  fn uu_cut::uumain::uumain::h8ce111ea4964ca5a(arg1: i64) -> *mut i64

{
    let mut var_3c0: i128;
    core::iter::traits::iterator::Iterator::collect::h3592e60cc608e8cf(&var_3c0, arg1);
    let mut var_2f8: i128;
    std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(&var_2f8, 
        "-d=bytescharactersfieldsinvalid …", 3);
    let var_2e8: i64;
    let mut var_498: i64 = var_2e8;
    let mut var_4a8: i128 = var_2f8;
    let var_3b8: i64;
    let var_3b0: i64;
    let rax_1: i8 =
        _$LT$T$u20$as$u20$core..slice..cmp..SliceContains$GT$::slice_contains::heb992d0e50da3b83(
        &var_4a8, var_3b8, var_3b0);
    core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h0ce505c2541a0b8c(&var_4a8);
    uu_cut::uu_app::h2a5a44b0da1a04d9(&var_2f8);
    let mut var_4f8: i128 = var_3c0;
    clap_builder::builder::command::Command::try_get_matches_from::ha127b255a9c1dd02(&var_4a8, 
        &var_2f8, &var_4f8);
    let rax_3: i64 = var_4a8;
    let rdi_6: i64 = *var_4a8[8];
    
    if rax_3 == -0x8000000000000000
    {
        return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7fb9d0425989847a(rdi_6);
    }
    
    let mut var_478: i64;
    let var_410_1: i64 = var_478;
    let mut var_488: i128;
    let var_420_1: i128 = var_488;
    let var_430_1: i128 = var_498;
    let mut var_440: i64 = rax_3;
    let var_438_1: i64 = rdi_6;
    let rax_5: i8 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
        &var_440, "complementonly-delimitedzero-ter…", 0xa);
    let rax_6: i8 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
        &var_440, "only-delimitedzero-terminateddel…", 0xe);
    uu_cut::get_delimiters::h4e08f74774217561(&var_2f8, &var_440, rax_1);
    let mut rbp_1: *mut i64 = *var_2f8[8];
    
    if var_2f8 != 0
    {
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h7dca4eb4492c61a8(&var_440);
        return rbp_1;
    }
    
    let mut var_2e0: *mut i64;
    let var_450_1: *mut i64 = var_2e0;
    let mut r13_1: i8 = 0xa;
    
    if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
        &var_440, "zero-terminateddelimiterwhitespa…", 0xf) != 0
    {
        r13_1 = 0;
    }
    
    let mut var_408: i128;
    clap_builder::parser::matches::arg_matches::ArgMatches::indices_of::h365fe016942495a0(&var_408, 
        &var_440, "bytescharactersfieldsinvalid usa…", 5);
    clap_builder::parser::matches::arg_matches::ArgMatches::indices_of::h365fe016942495a0(&var_4f8, 
        &var_440, "charactersfieldsinvalid usage: e…", 0xa);
    clap_builder::parser::matches::arg_matches::ArgMatches::indices_of::h365fe016942495a0(&var_4a8, 
        &var_440, "fieldsinvalid usage: expects one…", 6);
    let zmm0_3: i128 = var_408;
    var_2f8 = zmm0_3;
    var_2e0 = var_4f8;
    let zmm1_2: i128 = var_4a8;
    let var_2c8_1: i128 = zmm1_2;
    let mut var_2b8_1: i64 = var_498;
    let var_380_1: i128 = zmm0_3;
    let var_350_1: i128 = zmm1_2;
    let var_340_1: i64 = var_498;
    let var_3f8: *mut i64;
    let var_370_1: *mut i64 = var_3f8;
    let var_368_1: *mut i64 = var_2e0;
    let mut var_2d8: i64;
    let var_360_1: i64 = var_2d8;
    let var_358_1: i64 = var_3b0;
    let mut var_390: i64 = 0;
    let var_388_1: i64 = 3;
    let rax_18: i64 = _$LT$core..array..iter..IntoIter$LT$T$C$_$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::fold::hbe7d04904877bd26(&var_390);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h08a81984e3b547a9(
        &var_2f8, &var_440, "bytescharactersfieldsinvalid usa…", 5);
    let rax_19: *mut c_void = clap_builder::parser::error::MatchesError::unwrap::h28b9693eeb3d6f42(
        "bytescharactersfieldsinvalid usa…", 5, &var_2f8);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h08a81984e3b547a9(
        &var_2f8, &var_440, "charactersfieldsinvalid usage: e…", 0xa);
    let rax_20: *mut c_void = clap_builder::parser::error::MatchesError::unwrap::h28b9693eeb3d6f42(
        "charactersfieldsinvalid usage: e…", 0xa, &var_2f8);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h08a81984e3b547a9(
        &var_2f8, &var_440, "fieldsinvalid usage: expects one…", 6);
    let rax_21: *mut c_void = clap_builder::parser::error::MatchesError::unwrap::h28b9693eeb3d6f42(
        "fieldsinvalid usage: expects one…", 6, &var_2f8);
    let mut var_490: *mut i64;
    let mut var_468: i128;
    let mut var_2e8_1: *mut i64;
    let mut r14_2: i64;
    let mut var_4e0: *mut i64;
    let mut var_4d8: i128;
    let mut var_4c8: i128;
    let mut var_4b8: i128;
    
    if rax_18 == 0
    {
        'label_46e185:
        _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::hb90ff259c5ef35db(&var_2f8, 
            "invalid usage: expects one of --…", 0x49);
        'label_46e192:
        var_4e0 = var_3f8;
        var_4f8 = var_2f8;
        var_4f8 = 3;
        'label_46e1b2:
        var_468 = var_4b8;
        var_478 = var_4c8;
        var_488 = var_4d8;
        var_498 = var_3b0;
        var_490 = var_4e0;
        var_4a8 = var_4f8;
        *var_4a8[8] = *var_4f8[8];
        r14_2 = 0;
    }
    else
    {
        if rax_18 != 1
        {
            _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::hb90ff259c5ef35db(
                &var_2f8, "invalid usage: expects no more t…", 0x56);
            goto 'label_46e192;
        }
        
        let mut var_4e8: i64;
        
        if rax_19 != 0
        {
            if (rax_20 | rax_21) != 0
            {
                goto 'label_46e185;
            }
            
            uu_cut::list_to_ranges::h582948f175afb12b(&var_2f8, *rax_19.byte_offset(8), 
                *rax_19.byte_offset(0x10), rax_5);
            
            if var_2f8 != 0
            {
                'label_46e093:
                var_4e0 = var_2e0;
                var_4f8 = var_2f8;
                var_4f8 = 3;
                goto 'label_46e1b2;
            }
            
            *var_4b8[8] = var_2e0;
            var_4c8 = var_2f8;
            *var_4f8[8] = var_450_1;
            var_4e8 = var_2d8;
            *var_4d8[8] = 2;
            var_4c8 = r13_1;
            var_4f8 = 0;
        }
        else if rax_20 == 0
        {
            if rax_21 == 0
            {
                goto 'label_46e185;
            }
            
            uu_cut::list_to_ranges::h582948f175afb12b(&var_2f8, *rax_21.byte_offset(8), 
                *rax_21.byte_offset(0x10), rax_5);
            
            if var_2f8 != 0
            {
                goto 'label_46e093;
            }
            
            *var_4b8[8] = var_2e0;
            var_4c8 = var_2f8;
            *var_4f8[8] = var_450_1;
            var_4e8 = var_2d8;
            var_4e0 = rbp_1;
            var_4d8 = var_2e8;
            *var_4d8[8] = rax_6;
            var_4c8 = r13_1;
            var_4f8 = 2;
        }
        else
        {
            if rax_21 != 0
            {
                goto 'label_46e185;
            }
            
            uu_cut::list_to_ranges::h582948f175afb12b(&var_2f8, *rax_20.byte_offset(8), 
                *rax_20.byte_offset(0x10), rax_5);
            
            if var_2f8 != 0
            {
                goto 'label_46e093;
            }
            
            *var_4b8[8] = var_2e0;
            var_4c8 = var_2f8;
            *var_4f8[8] = var_450_1;
            var_4e8 = var_2d8;
            *var_4d8[8] = 2;
            var_4c8 = r13_1;
            var_4f8 = 1;
        }
        
        var_2f8 = var_4f8;
        var_2b8_1 = var_4b8;
        var_2d8 = var_4d8;
        var_2e8_1 = var_4e8;
        let rax_26: i64 = var_2f8;
        let mut rax_29: i8;
        
        if rax_26 == 0
        {
            if clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h8ab577f2647f3b72(&var_440, "delimiterwhitespace-delimitedUSi…", 9) == 0
            {
                if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&var_440, "whitespace-delimitedUSimpleError…", 0x14) != 0
                {
                    'label_46e488:
                    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::hb90ff259c5ef35db(
                        &var_408, "invalid input: The '-w' option o…", 0x4b);
                    goto 'label_46e534;
                }
                
                rax_29 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&var_440, "only-delimitedzero-terminateddel…", 0xe);
                'label_46e50f:
                
                if rax_29 == 0
                {
                    goto 'label_46e566;
                }
                
                _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::hb90ff259c5ef35db(
                    &var_408, "invalid input: The '--only-delim…", 0x60);
                goto 'label_46e534;
            }
            
            'label_46e448:
            _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::hb90ff259c5ef35db(
                &var_408, "invalid input: The '--delimiter'…", 0x5b);
            'label_46e534:
            var_490 = var_3f8;
            var_4a8 = var_408;
            var_4a8 = 3;
            core::ptr::drop_in_place$LT$uu_cut..Mode$GT$::h012887aa3a2d3236(&var_2f8);
        }
        else
        {
            if rax_26 == 1
            {
                if clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h8ab577f2647f3b72(&var_440, "delimiterwhitespace-delimitedUSi…", 9) != 0
                {
                    goto 'label_46e448;
                }
                
                if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&var_440, "whitespace-delimitedUSimpleError…", 0x14) != 0
                {
                    goto 'label_46e488;
                }
                
                rax_29 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&var_440, "only-delimitedzero-terminateddel…", 0xe);
                goto 'label_46e50f;
            }
            
            'label_46e566:
            var_468 = var_2b8_1;
            var_478 = var_4c8;
            var_488 = var_2d8;
            var_498 = var_2e8_1;
            var_4a8 = var_2f8;
        }
        r14_2 = 1;
        rbp_1 = 1;
    }
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::hd27ad47b10d3116b(
        &var_2f8, &var_440, "filei128 as dyn Mismatch between…", 4);
    let mut rsi_16: *const i8 = "filei128 as dyn Mismatch between…";
    clap_builder::parser::error::MatchesError::unwrap::h157cac7a5e829d88(&var_408, 
        "filei128 as dyn Mismatch between…", 4, &var_2f8);
    let mut rax_32: fn() -> ! = var_408;
    let mut rcx_10: *const i8;
    let mut rdx_12: i64;
    let mut zmm0_5: i128;
    let mut zmm1_4: u128;
    
    if rax_32 == 0
    {
        zmm0_5 = {0};
        zmm1_4 = "a Display implementation returne…";
        rcx_10 = "a Display implementation returne…";
        rax_32 = core::ops::function::FnOnce::call_once::h8685605c798c8ada;
        rdx_12 = 0;
    }
    else
    {
        rcx_10 = *var_408[8];
        zmm1_4 = var_3f8;
        let var_3e8: i128;
        zmm0_5 = var_3e8;
        let var_3d8: *mut i8;
        rsi_16 = var_3d8;
        let var_3d0: i64;
        rdx_12 = var_3d0;
    }
    
    let mut var_338: fn() -> ! = rax_32;
    let var_330_1: *const i8 = rcx_10;
    let var_328_1: u128 = zmm1_4;
    let var_318_1: i128 = zmm0_5;
    let var_308_1: *const i8 = rsi_16;
    let var_300_1: i64 = rdx_12;
    let mut var_3a8: i128;
    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::hefa5de3fd746afc1(&var_3a8, &var_338);
    let mut rbx_3: *mut i64;
    
    if var_4a8 != 3
    {
        var_2b8_1 = var_468;
        let var_2c8_3: i128 = var_478;
        var_2d8 = var_488;
        var_2e8_1 = var_498;
        var_2f8 = var_4a8;
        let var_398: i64;
        let var_3f8_1: i64 = var_398;
        var_408 = var_3a8;
        uu_cut::cut_files::hab9ba34aeaa70600(&var_408, &var_2f8);
        core::ptr::drop_in_place$LT$uu_cut..Mode$GT$::h012887aa3a2d3236(&var_2f8);
        rbx_3 = nullptr;
        
        if (r14_2 & var_4f8 == 3) != 0
        {
            core::ptr::drop_in_place$LT$core..result..Result$LT$uu_cut..Mode$C$alloc..string..String$GT$$GT$::h05eb4e2af90d0fdc(&var_4f8);
        }
    }
    else
    {
        let var_2e8_2: *mut i64 = var_490;
        var_2f8 = var_4a8;
        var_2e0 = 1;
        rbx_3 = alloc::boxed::Box$LT$T$GT$::new::he00dbd81f49dede4(&var_2f8);
        let mut r15_4: i64;
        r15_4 = 1;
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::hb84bbc8583b20163(&var_3a8);
        
        if (r14_2 & var_4f8 == 3) != 0
        {
            core::ptr::drop_in_place$LT$core..result..Result$LT$uu_cut..Mode$C$alloc..string..String$GT$$GT$::h05eb4e2af90d0fdc(&var_4f8);
        }
    }
    
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h7dca4eb4492c61a8(&var_440);
    rbx_3
}
