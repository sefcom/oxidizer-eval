
  fn uu_nl::helper::parse_options::h86152a37c7326ed9(arg1: *mut i128, arg2: *mut i64, arg3: *mut c_void) -> *mut i128

{
    let mut var_c0: i64 = 0;
    let var_b8: i64 = 8;
    let var_b0: i64 = 0;
    arg2[0x10] =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg3, 
        "no-renumbersection-delimiternumb…", 0xb);
    let mut var_f8: *mut c_void;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hca7a20bc0e604664(&var_f8, 
        arg3, "section-delimiternumber-formatsr…", 0x11);
    let rax_1: *mut c_void = clap_builder::parser::error::MatchesError::unwrap::hb382f568f88ddf47(
        "section-delimiternumber-formatsr…", 0x11, &var_f8);
    let mut var_f0: i64;
    let mut var_e8: i64;
    let mut var_a8: i128;
    
    if rax_1 != 0
    {
        let mut var_88: *mut c_void = rax_1;
        
        if *rax_1.byte_offset(0x10) != 1
        {
            _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(
                &var_f8, rax_1);
        }
        else
        {
            let mut var_80: *mut i64 = &var_88;
            let var_78_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h5cdd61892d989db2;
            var_f8 = &data_63a158;
            var_f0 = 2;
            let var_d8_1: i64 = 0;
            let var_e8_1: *mut *mut i64 = &var_80;
            let var_e0_1: i64 = 1;
            core::option::Option$LT$T$GT$::map_or_else::h612ba33885ce226b(&var_a8, &var_f8);
            var_f8 = var_a8;
            let var_98: i64;
            var_e8 = var_98;
        }
        
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hc2399c3ebe619759(&arg2[6]);
        arg2[8] = var_e8;
        *arg2.byte_offset(0x30) = var_f8;
    }
    
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hca7a20bc0e604664(&var_f8, 
        arg3, "number-separator0123456789abcdef…", 0x10);
    let rax_4: *mut c_void = clap_builder::parser::error::MatchesError::unwrap::hb382f568f88ddf47(
        "number-separator0123456789abcdef…", 0x10, &var_f8);
    
    if rax_4 != 0
    {
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone_from::hbc3bf956d8b34339(
            &arg2[9], rax_4);
    }
    
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hca7a20bc0e604664(&var_f8, 
        arg3, "number-formatsrc/uu/nl/src/helpe…", 0xd);
    let mut rax_5: *mut c_void =
        clap_builder::parser::error::MatchesError::unwrap::hb382f568f88ddf47(
        "number-formatsrc/uu/nl/src/helpe…", 0xd, &var_f8);
    
    if rax_5 == 0
    {
        rax_5 = 1;
    }
    else
    {
        rax_5 = _$LT$uu_nl..NumberFormat$u20$as$u20$core..convert..From$LT$T$GT$$GT$::from::h2422a998c153ce5c(rax_5);
    }
    
    *arg2.byte_offset(0x81) = rax_5;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hca7a20bc0e604664(&var_f8, 
        arg3, "header-numberi", 0x10);
    let rax_6: *mut c_void = clap_builder::parser::error::MatchesError::unwrap::hb382f568f88ddf47(
        "header-numberi", 0x10, &var_f8);
    
    if rax_6 != 0
    {
        _$LT$uu_nl..NumberingStyle$u20$as$u20$core..convert..TryFrom$LT$$RF$str$GT$$GT$::try_from::hfb8a9472cf333bed(&var_f8, *rax_6.byte_offset(8), *rax_6.byte_offset(0x10));
        let rax_7: *mut c_void = var_f8;
        
        if -(rax_7) == -0x8000000000000000
        {
            core::ptr::drop_in_place$LT$uu_nl..NumberingStyle$GT$::h1889835d87a19289(*arg2, 
                arg2[1]);
            *arg2 = var_f0;
            arg2[1] = var_e8;
        }
        else if rax_7 != -0x7fffffffffffffff
        {
            let mut var_70: *mut c_void = rax_7;
            let var_68_1: i64 = var_f0;
            let var_60_1: i64 = var_e8;
            alloc::vec::Vec$LT$T$C$A$GT$::push::h671dedff9df8c788(&var_c0, &var_70);
        }
    }
    
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hca7a20bc0e604664(&var_f8, 
        arg3, "body-numberingnumber-widthline-i…", 0xe);
    let rax_8: *mut c_void = clap_builder::parser::error::MatchesError::unwrap::hb382f568f88ddf47(
        "body-numberingnumber-widthline-i…", 0xe, &var_f8);
    
    if rax_8 != 0
    {
        _$LT$uu_nl..NumberingStyle$u20$as$u20$core..convert..TryFrom$LT$$RF$str$GT$$GT$::try_from::hfb8a9472cf333bed(&var_f8, *rax_8.byte_offset(8), *rax_8.byte_offset(0x10));
        let rax_9: *mut c_void = var_f8;
        
        if -(rax_9) == -0x8000000000000000
        {
            core::ptr::drop_in_place$LT$uu_nl..NumberingStyle$GT$::h1889835d87a19289(arg2[2], 
                arg2[3]);
            arg2[2] = var_f0;
            arg2[3] = var_e8;
        }
        else if rax_9 != -0x7fffffffffffffff
        {
            let mut var_58: *mut c_void = rax_9;
            let var_50_1: i64 = var_f0;
            let var_48_1: i64 = var_e8;
            alloc::vec::Vec$LT$T$C$A$GT$::push::h671dedff9df8c788(&var_c0, &var_58);
        }
    }
    
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hca7a20bc0e604664(&var_f8, 
        arg3, &data_44e410, 0x10);
    let rax_10: *mut c_void = clap_builder::parser::error::MatchesError::unwrap::hb382f568f88ddf47(
        &data_44e410, 0x10, &var_f8);
    
    if rax_10 != 0
    {
        _$LT$uu_nl..NumberingStyle$u20$as$u20$core..convert..TryFrom$LT$$RF$str$GT$$GT$::try_from::hfb8a9472cf333bed(&var_f8, *rax_10.byte_offset(8), *rax_10.byte_offset(0x10));
        let rax_11: *mut c_void = var_f8;
        
        if -(rax_11) == -0x8000000000000000
        {
            core::ptr::drop_in_place$LT$uu_nl..NumberingStyle$GT$::h1889835d87a19289(arg2[4], 
                arg2[5]);
            arg2[4] = var_f0;
            arg2[5] = var_e8;
        }
        else if rax_11 != -0x7fffffffffffffff
        {
            let mut var_40: *mut c_void = rax_11;
            let var_38_1: i64 = var_f0;
            let var_30_1: i64 = var_e8;
            alloc::vec::Vec$LT$T$C$A$GT$::push::h671dedff9df8c788(&var_c0, &var_40);
        }
    }
    
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h93b5258bce4c83be(&var_f8, 
        arg3);
    let rax_12: *mut i64 =
        clap_builder::parser::error::MatchesError::unwrap::hc0caf75370265cb3(&var_f8);
    
    if rax_12 != 0
    {
        let rax_13: i64 = *rax_12;
        
        if rax_13 == 0
        {
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hc25036316a37fb06(&var_f8, "Invalid line number field width:…", 0x47);
            let var_98_1: i64 = var_e8;
            var_a8 = var_f8;
            alloc::vec::Vec$LT$T$C$A$GT$::push::h671dedff9df8c788(&var_c0, &var_a8);
        }
        else
        {
            arg2[0xf] = rax_13;
        }
    }
    
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h197f6d7539a0803d(&var_f8, 
        arg3);
    let rax_15: *mut i64 =
        clap_builder::parser::error::MatchesError::unwrap::h23588c2e3aac3f32(&var_f8);
    
    if rax_15 != 0
    {
        let rax_16: i64 = *rax_15;
        
        if rax_16 == 0
        {
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hc25036316a37fb06(&var_f8, "Invalid line number of blank lin…", 0x4a);
            let var_98_2: i64 = var_e8;
            var_a8 = var_f8;
            alloc::vec::Vec$LT$T$C$A$GT$::push::h671dedff9df8c788(&var_c0, &var_a8);
        }
        else
        {
            arg2[0xe] = rax_16;
        }
    }
    
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::he43b25beb4093688(&var_f8, 
        arg3, "line-incrementstarting-line-numb…", 0xe);
    let rax_18: *mut i64 = clap_builder::parser::error::MatchesError::unwrap::h842548ae3ebe6bbb(
        "line-incrementstarting-line-numb…", 0xe, &var_f8);
    
    if rax_18 != 0
    {
        arg2[0xd] = *rax_18;
    }
    
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::he43b25beb4093688(&var_f8, 
        arg3, "starting-line-number\:\tatninval…", 0x14);
    let rax_20: *mut i64 = clap_builder::parser::error::MatchesError::unwrap::h842548ae3ebe6bbb(
        "starting-line-number\:\tatninval…", 0x14, &var_f8);
    
    if rax_20 != 0
    {
        arg2[0xc] = *rax_20;
    }
    
    arg1[1] = var_b0;
    *arg1 = var_c0;
    arg1
}
