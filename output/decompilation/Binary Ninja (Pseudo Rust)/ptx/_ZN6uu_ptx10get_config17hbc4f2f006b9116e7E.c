
  fn uu_ptx::get_config::hbc4f2f006b9116e7(arg1: *mut i128, arg2: *mut c_void) -> *mut i128

{
    let mut var_78: i128;
    _$LT$uu_ptx..Config$u20$as$u20$core..default..Default$GT$::default::h5dee5f130f025e64(&var_78);
    let mut var_b8: i8;
    let mut rax_2: *mut i128;
    
    if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(arg2, 
        "traditionalflag-truncationmacro-…", 0xb) == 0
    {
        let var_b0_2: *const i8 = "GNU extensions";
        let var_a8_2: i64 = 0xe;
        var_b8 = 1;
        rax_2 = alloc::boxed::Box$LT$T$GT$::new::hfc4024115c711549(&var_b8);
        'label_5b625c:
        *arg1.byte_offset(8) = rax_2;
        arg1[1] = &data_6edc08;
        *arg1 = -0x8000000000000000;
        core::ptr::drop_in_place$LT$uu_ptx..Config$GT$::h61e3e7302a3c0217(&var_78);
        return arg1;
    }
    
    let var_20_1: i8 = 0;
    let mut var_1b_1: i8 = 1;
    let mut var_48: i128;
    alloc::str::_$LT$impl$u20$alloc..borrow..ToOwned$u20$for$u20$str$GT$::clone_into::hedde276911c71a78(&var_48);
    
    if clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h8ab577f2647f3b72(arg2, 
        "sentence-regexpformat=texword-re…", 0xf) != 0
    {
        let var_b0_1: *mut c_void = "-S-:assertion failed: beg <= end…";
        let var_a8_1: i64 = 2;
        var_b8 = 1;
        rax_2 = alloc::boxed::Box$LT$T$GT$::new::hfc4024115c711549(&var_b8);
        goto 'label_5b625c;
    }
    
    let var_1f_1: i8 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(arg2, 
        "auto-referencetraditionalflag-tr…", 0xe);
    let var_1e_1: i8 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(arg2, 
        "referenceswidth", 0xa);
    let var_1d: i8;
    let var_1d_1: i8 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(arg2, 
        "right-side-refssentence-regexpfo…", 0xf) & var_1d != 0;
    let rax_7: i8 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(arg2, 
        "ignore-caseignore-fileonly-filer…", 0xb);
    
    if clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h8ab577f2647f3b72(arg2, 
        "macro-nameformat=roffright-side-…", 0xa) == 0
    {
        goto 'label_5b6394;
    }
    
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h0320162aad36ecc4(&var_b8, 
        arg2, "macro-nameformat=roffright-side-…", 0xa);
    let rax_9: *mut c_void = clap_builder::parser::error::MatchesError::unwrap::h3979b7ce1fd00743(
        "macro-nameformat=roffright-side-…", 0xa, &var_b8);
    
    if rax_9 != 0
    {
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(
            &var_b8, rax_9);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hbabe7cf62dac4e15(&var_78);
        let var_a8: i64;
        let var_68: i64 = var_a8;
        var_78 = var_b8;
        'label_5b6394:
        
        if clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h8ab577f2647f3b72(
            arg2, "flag-truncationmacro-nameformat=…", 0xf) == 0
        {
            goto 'label_5b640b;
        }
        
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h0320162aad36ecc4(
            &var_b8, arg2, "flag-truncationmacro-nameformat=…", 0xf);
        let rax_12: *mut c_void =
            clap_builder::parser::error::MatchesError::unwrap::h3979b7ce1fd00743(
            "flag-truncationmacro-nameformat=…", 0xf, &var_b8);
        
        if rax_12 != 0
        {
            _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(
                &var_b8, rax_12);
            let mut var_60: i128;
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hbabe7cf62dac4e15(&var_60);
            let var_50_1: i64 = var_a8;
            var_60 = var_b8;
            'label_5b640b:
            
            if clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h8ab577f2647f3b72(arg2, "width", 5) == 0
            {
                goto 'label_5b64b3;
            }
            
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h0320162aad36ecc4(
                &var_b8, arg2, "width", 5);
            let rax_15: *mut c_void =
                clap_builder::parser::error::MatchesError::unwrap::h3979b7ce1fd00743("width", 5, 
                &var_b8);
            
            if rax_15 != 0
            {
                let mut var_88: i8;
                core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$usize$GT$::from_str::h35e67cae0c0452a5(&var_88, *rax_15.byte_offset(8), *rax_15.byte_offset(0x10));
                let var_b7: i32;
                let mut var_b0: i64;
                let var_87: i8;
                let var_80: i64;
                let mut rax_17: i64;
                
                if var_88 == 0
                {
                    rax_17 = var_80;
                }
                else
                {
                    core::ops::function::FnOnce::call_once::h21988aba69442914(&var_b8, var_87);
                    let rax_16: i8 = var_b8;
                    let var_90_1: i32 = var_b7;
                    
                    if rax_16 != 3
                    {
                        let var_b7_1: i32 = var_b7;
                        var_b8 = rax_16;
                        var_b0 = var_b0;
                        rax_2 = alloc::boxed::Box$LT$T$GT$::new::hfc4024115c711549(&var_b8);
                        goto 'label_5b625c;
                    }
                    
                    rax_17 = var_b0;
                }
                
                let mut var_38: i128;
                *var_38[8] = rax_17;
                'label_5b64b3:
                
                if clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h8ab577f2647f3b72(arg2, "gap-siz", 8) == 0
                {
                    goto 'label_5b655b;
                }
                
                clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h0320162aad36ecc4(&var_b8, arg2, "gap-siz", 8);
                let rax_19: *mut c_void =
                    clap_builder::parser::error::MatchesError::unwrap::h3979b7ce1fd00743("gap-siz", 
                    8, &var_b8);
                
                if rax_19 != 0
                {
                    core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$usize$GT$::from_str::h35e67cae0c0452a5(&var_88, *rax_19.byte_offset(8), *rax_19.byte_offset(0x10));
                    let mut rax_21: i64;
                    
                    if var_88 == 0
                    {
                        rax_21 = var_80;
                    }
                    else
                    {
                        core::ops::function::FnOnce::call_once::h21988aba69442914(&var_b8, var_87);
                        let rax_20: i8 = var_b8;
                        let var_90_2: i32 = var_b7;
                        
                        if rax_20 != 3
                        {
                            let var_b7_2: i32 = var_b7;
                            var_b8 = rax_20;
                            var_b0 = var_b0;
                            rax_2 = alloc::boxed::Box$LT$T$GT$::new::hfc4024115c711549(&var_b8);
                            goto 'label_5b625c;
                        }
                        
                        rax_21 = var_b0;
                    }
                    
                    let var_28: i64 = rax_21;
                    'label_5b655b:
                    
                    if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(arg2, "format=roffright-side-refssenten…", 0xb) != 0
                    {
                        var_1b_1 = 1;
                    }
                    
                    if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(arg2, "format=texword-regexpbreak-filei…", 0xa) != 0
                    {
                        var_1b_1 = 2;
                    }
                    
                    arg1[5] = var_28;
                    *arg1.byte_offset(0x58) = var_20_1;
                    *arg1.byte_offset(0x5c) = rax_7;
                    *arg1.byte_offset(0x5d) = var_1b_1;
                    let var_1a: i16;
                    *arg1.byte_offset(0x5e) = var_1a;
                    arg1[4] = var_38;
                    let zmm0_5: i128 = var_78;
                    let zmm2_1: i128 = var_60;
                    arg1[3] = var_48;
                    arg1[2] = zmm2_1;
                    arg1[1] = var_68;
                    *arg1 = zmm0_5;
                    return arg1;
                }
            }
        }
    }
    
    core::option::expect_failed::h9e03a1f6ff88dbcf("parsing options failedGNU extens…");
    /* no return */
}
