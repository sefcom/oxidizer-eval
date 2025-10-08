
  fn uu_base32::base_common::Config::from::he8007e948e715e4f(arg1: *mut i64, arg2: *mut c_void, arg3: i64 @ r13) -> *mut i64

{
    let var_20: i64 = arg3;
    let mut r15: *mut *mut c_void = -0x8000000000000000;
    let mut var_188: *mut *mut c_void;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h4d3b70c651aa8c6a(
        &var_188, arg2);
    let mut var_70: i64;
    clap_builder::parser::error::MatchesError::unwrap::hac17f97783eea1ce(&var_70, &var_188);
    
    if var_70 == 0
    {
        goto 'label_469357;
    }
    
    let var_40: i128;
    let var_88_1: i128 = var_40;
    let var_50: i128;
    let var_98_1: i128 = var_50;
    let var_60: i128;
    let var_a8_1: i128 = var_60;
    let mut var_b8: i128 = var_70;
    let rax_1: *mut c_void = _$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h82324a6f9092af02(&var_b8);
    
    if rax_1 == 0
    {
        core::option::unwrap_failed::h893f57cb7db71cb7();
        /* no return */
    }
    
    let rax_2: *mut c_void = _$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h82324a6f9092af02(&var_b8);
    let mut var_1c0: *mut i64;
    let mut var_1b0: i64;
    let mut var_d8: ();
    let mut rax_4: u64;
    let mut rcx_2: *mut *mut c_void;
    
    if rax_2 == 0
    {
        arg3 = *rax_1.byte_offset(8);
        let r12_2: u64 = *rax_1.byte_offset(0x10);
        
        if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h52d9b32bcebef6ce(arg3, r12_2, "-invalid wrap size: wrap encoded…", 1) != 0
        {
            goto 'label_469357;
        }
        
        std::fs::metadata::heefbd7b898f0dc89(&var_188, arg3);
        let r15_1: *mut *mut c_void = var_188;
        let var_180: i64;
        core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::hb5229bc0585f68fb(r15_1, var_180);
        
        if r15_1 == 2
        {
            var_1b0 = 1;
            let var_1a8_2: i64 = arg3;
            let var_1a0_2: u64 = r12_2;
            let var_198_2: i8 = 0;
            var_1c0 = &var_1b0;
            let var_1b8_2: fn(arg1: *mut i32, arg2: *mut i64) -> i64 =
                _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
            var_188 = &data_50dd28;
            let var_180_2: i64 = 2;
            let var_168_2: i64 = 0;
            let var_178_2: *mut *mut i64 = &var_1c0;
            let var_170_2: i64 = 1;
            core::option::Option$LT$T$GT$::map_or_else::hff3b22300eec286c(&var_d8, &var_188);
            let var_c0_2: i32 = 1;
            rax_4 = alloc::boxed::Box$LT$T$GT$::new::h338aae5a226963c6(&var_d8);
            rcx_2 = &data_50de08;
            goto 'label_469312;
        }
        
        std::sys::pal::unix::os::split_paths::bytes_to_path::h3f69b771c0ce4140(&var_188, arg3, 
            r12_2);
        r15 = var_188;
        let var_1c8: i64 = var_180;
        let var_178: i64;
        let var_190: i64 = var_178;
        'label_469357:
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hb2a3bc7313f94180(
            &var_188, arg2);
        let rax_6: *mut c_void =
            clap_builder::parser::error::MatchesError::unwrap::h24f08cad05a4d07c(&var_188);
        let mut r12_3: i64;
        
        if rax_6 == 0
        {
            r12_3 = 0;
            'label_4693c3:
            let rax_8: i8 =
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
                arg2, "decodeignore-garbageextra operan…", 6);
            let rax_9: i8 =
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
                arg2, "ignore-garbageextra operand : No…", 0xe);
            *arg1 = r12_3;
            arg1[1] = arg3;
            arg1[2] = r15;
            arg1[3] = var_1c8;
            arg1[4] = var_190;
            arg1[5] = rax_8;
            *arg1.byte_offset(0x29) = rax_9;
        }
        else
        {
            uu_base32::base_common::Config::from::_$u7b$$u7b$closure$u7d$$u7d$::haa7277871ad8176d(
                &var_188, *rax_6.byte_offset(8), *rax_6.byte_offset(0x10));
            let rax_7: *mut *mut c_void = var_188;
            arg3 = var_180;
            
            if rax_7 == 0
            {
                r12_3 = 1;
                goto 'label_4693c3;
            }
            
            arg1[1] = rax_7;
            arg1[2] = arg3;
            *arg1 = 2;
            core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::h0062591d8d9fcd54(r15, var_1c8);
        }
    }
    else
    {
        let rcx_1: i64 = *rax_2.byte_offset(8);
        let rax_3: i64 = *rax_2.byte_offset(0x10);
        var_1b0 = 0;
        let var_1a8_1: i64 = rcx_1;
        let var_1a0_1: i64 = rax_3;
        let var_198_1: i8 = 1;
        var_1c0 = &var_1b0;
        let var_1b8_1: fn(arg1: *mut i32, arg2: *mut i64) -> i64 =
            _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
        var_188 = &data_50dd18;
        let var_180_1: i64 = 1;
        let var_168_1: i64 = 0;
        let var_178_1: *mut *mut i64 = &var_1c0;
        let var_170_1: i64 = 1;
        core::option::Option$LT$T$GT$::map_or_else::hff3b22300eec286c(&var_d8, &var_188);
        let var_c0_1: i32 = 1;
        rax_4 = alloc::boxed::Box$LT$T$GT$::new::h338aae5a226963c6(&var_d8);
        rcx_2 = &data_50dd80;
        'label_469312:
        arg1[1] = rax_4;
        arg1[2] = rcx_2;
        *arg1 = 2;
    }
    arg1
}
