
  fn uu_nl::helper::parse_options::h06a5fa1f1b26e68c(arg1: *mut i128, arg2: *mut i64, arg3: *mut c_void) -> *mut i128

{
    let mut var_d0: i64 = 0;
    let var_c8: i64 = 8;
    let var_c0: i64 = 0;
    arg2[0x10] =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(arg3, 
        "no-renumberdescription() is depr…", 0xb);
    let mut var_108: *mut c_void;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h9fd557f246527b84(
        &var_108, arg3, "section-delimiter:number-formatI…", 0x11);
    let rax_1: *mut c_void = clap_builder::parser::error::MatchesError::unwrap::hbd6da3a7af6b6ad0(
        "section-delimiter:number-formatI…", 0x11, &var_108);
    let mut var_100: i64;
    let mut var_f8: i64;
    let mut var_b8: *mut i64;
    
    if rax_1 != 0
    {
        let mut var_98: *mut c_void = rax_1;
        
        if *rax_1.byte_offset(0x10) != 1
        {
            _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(
                &var_108, rax_1);
        }
        else
        {
            var_b8 = &var_98;
            let var_b0_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc35cb14290081d65;
            var_108 = &data_6d9f88;
            var_100 = 2;
            let var_e8_1: i64 = 0;
            let var_f8_1: *mut *mut i64 = &var_b8;
            let var_f0_1: i64 = 1;
            let mut var_48: i128;
            core::option::Option$LT$T$GT$::map_or_else::h0a2f0cb8f97eeebd(&var_48, &var_108);
            var_108 = var_48;
            let var_38: i64;
            var_f8 = var_38;
        }
        
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h4abdf3701c16e9bb(&arg2[6]);
        arg2[8] = var_f8;
        *arg2.byte_offset(0x30) = var_108;
    }
    
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h9fd557f246527b84(
        &var_108, arg3, &data_461770, 0x10);
    let rax_4: *mut c_void = clap_builder::parser::error::MatchesError::unwrap::hbd6da3a7af6b6ad0(
        &data_461770, 0x10, &var_108);
    
    if rax_4 != 0
    {
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone_from::h4a05e4567e966646(
            &arg2[9], rax_4);
    }
    
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h9fd557f246527b84(
        &var_108, arg3, "number-formatInvalid line number…", 0xd);
    let mut rax_5: *mut c_void =
        clap_builder::parser::error::MatchesError::unwrap::hbd6da3a7af6b6ad0(
        "number-formatInvalid line number…", 0xd, &var_108);
    
    if rax_5 == 0
    {
        rax_5 = 1;
    }
    else
    {
        rax_5 = core::ops::function::FnOnce::call_once::h937765a0df65f30a(rax_5);
    }
    
    *arg2.byte_offset(0x81) = rax_5;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h9fd557f246527b84(
        &var_108, arg3, "header-numberi", 0x10);
    let rax_6: *mut c_void = clap_builder::parser::error::MatchesError::unwrap::hbd6da3a7af6b6ad0(
        "header-numberi", 0x10, &var_108);
    
    if rax_6 != 0
    {
        *rax_6.byte_offset(0x10);
        let mut rax_7: *mut i8;
        let mut rdx_4: u64;
        rax_7 = core::ops::function::FnOnce::call_once::h15abc7b7abe22b04(*rax_6.byte_offset(8));
        core::ops::function::FnOnce::call_once::hb333d555e2f01f4d(&var_108, rax_7, rdx_4);
        let rax_8: *mut c_void = var_108;
        
        if rax_8 != -0x7fffffffffffffff
        {
            if rax_8 != -0x8000000000000000
            {
                let mut var_90: *mut c_void = rax_8;
                let var_88_1: i64 = var_100;
                let var_80_1: i64 = var_f8;
                alloc::vec::Vec$LT$T$C$A$GT$::push::h32d38cb1e0ac2383(&var_d0, &var_90);
            }
            else
            {
                core::ptr::drop_in_place$LT$uu_nl..NumberingStyle$GT$::hba651119877d43fd(*arg2, 
                    arg2[1]);
                *arg2 = var_100;
                arg2[1] = var_f8;
            }
        }
    }
    
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h9fd557f246527b84(
        &var_108, arg3, "body-numberingnumber-widthno-ren…", 0xe);
    let rax_9: *mut c_void = clap_builder::parser::error::MatchesError::unwrap::hbd6da3a7af6b6ad0(
        "body-numberingnumber-widthno-ren…", 0xe, &var_108);
    
    if rax_9 != 0
    {
        *rax_9.byte_offset(0x10);
        let mut rax_10: *mut i8;
        let mut rdx_6: u64;
        rax_10 = core::ops::function::FnOnce::call_once::h15abc7b7abe22b04(*rax_9.byte_offset(8));
        core::ops::function::FnOnce::call_once::hb333d555e2f01f4d(&var_108, rax_10, rdx_6);
        let rax_11: *mut c_void = var_108;
        
        if rax_11 != -0x7fffffffffffffff
        {
            if rax_11 != -0x8000000000000000
            {
                let mut var_78: *mut c_void = rax_11;
                let var_70_1: i64 = var_100;
                let var_68_1: i64 = var_f8;
                alloc::vec::Vec$LT$T$C$A$GT$::push::h32d38cb1e0ac2383(&var_d0, &var_78);
            }
            else
            {
                core::ptr::drop_in_place$LT$uu_nl..NumberingStyle$GT$::hba651119877d43fd(arg2[2], 
                    arg2[3]);
                arg2[2] = var_100;
                arg2[3] = var_f8;
            }
        }
    }
    
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h9fd557f246527b84(
        &var_108, arg3, &data_460e70, 0x10);
    let rax_12: *mut c_void = clap_builder::parser::error::MatchesError::unwrap::hbd6da3a7af6b6ad0(
        &data_460e70, 0x10, &var_108);
    
    if rax_12 != 0
    {
        *rax_12.byte_offset(0x10);
        let mut rax_13: *mut i8;
        let mut rdx_8: u64;
        rax_13 = core::ops::function::FnOnce::call_once::h15abc7b7abe22b04(*rax_12.byte_offset(8));
        core::ops::function::FnOnce::call_once::hb333d555e2f01f4d(&var_108, rax_13, rdx_8);
        let rax_14: *mut c_void = var_108;
        
        if rax_14 != -0x7fffffffffffffff
        {
            if rax_14 != -0x8000000000000000
            {
                let mut var_60: *mut c_void = rax_14;
                let var_58_1: i64 = var_100;
                let var_50_1: i64 = var_f8;
                alloc::vec::Vec$LT$T$C$A$GT$::push::h32d38cb1e0ac2383(&var_d0, &var_60);
            }
            else
            {
                core::ptr::drop_in_place$LT$uu_nl..NumberingStyle$GT$::hba651119877d43fd(arg2[4], 
                    arg2[5]);
                arg2[4] = var_100;
                arg2[5] = var_f8;
            }
        }
    }
    
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h317836ece4e1d627(
        &var_108, arg3, "number-widthno-renumberdescripti…", 0xc);
    let rax_15: *mut i64 = clap_builder::parser::error::MatchesError::unwrap::h6a78314316764992(
        "number-widthno-renumberdescripti…", 0xc, &var_108);
    
    if rax_15 != 0
    {
        let rax_16: i64 = *rax_15;
        
        if rax_16 == 0
        {
            _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h44c9454a11a431b7(
                &var_108, "Invalid line number field width:…", 0x47);
            let var_a8_1: i64 = var_f8;
            var_b8 = var_108;
            alloc::vec::Vec$LT$T$C$A$GT$::push::h32d38cb1e0ac2383(&var_d0, &var_b8);
        }
        else
        {
            arg2[0xf] = rax_16;
        }
    }
    
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h5fc9f16b33f0a403(
        &var_108, arg3, "join-blank-lines", 0x10);
    let rax_18: *mut i64 = clap_builder::parser::error::MatchesError::unwrap::h5ce44c2cd6f84e85(
        "join-blank-lines", 0x10, &var_108);
    
    if rax_18 != 0
    {
        let rax_19: i64 = *rax_18;
        
        if rax_19 == 0
        {
            _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h44c9454a11a431b7(
                &var_108, "Invalid line number of blank lin…", 0x4a);
            let var_a8_2: i64 = var_f8;
            var_b8 = var_108;
            alloc::vec::Vec$LT$T$C$A$GT$::push::h32d38cb1e0ac2383(&var_d0, &var_b8);
        }
        else
        {
            arg2[0xe] = rax_19;
        }
    }
    
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h559ca5751dacbf50(
        &var_108, arg3, "line-incrementstarting-line-numb…", 0xe);
    let rax_21: *mut i64 = clap_builder::parser::error::MatchesError::unwrap::h07d1e4ab11518c4d(
        "line-incrementstarting-line-numb…", 0xe, &var_108);
    
    if rax_21 != 0
    {
        arg2[0xd] = *rax_21;
    }
    
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h559ca5751dacbf50(
        &var_108, arg3, "starting-line-numberbody-numberi…", 0x14);
    let rax_23: *mut i64 = clap_builder::parser::error::MatchesError::unwrap::h07d1e4ab11518c4d(
        "starting-line-numberbody-numberi…", 0x14, &var_108);
    
    if rax_23 != 0
    {
        arg2[0xc] = *rax_23;
    }
    
    arg1[1] = var_c0;
    *arg1 = var_d0;
    arg1
}
