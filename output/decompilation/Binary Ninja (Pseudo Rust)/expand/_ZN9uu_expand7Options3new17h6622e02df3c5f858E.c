
  fn uu_expand::Options::new::h6622e02df3c5f858(arg1: *mut i64, arg2: *mut c_void) -> *mut i64

{
    let mut var_168: i64;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::hb1d755c6d452e1a4(
        &var_168, arg2, "tabsAutoBOLDBlue\x1b[4mSomedumb\x1b…", 4);
    let mut var_e8: i64;
    clap_builder::parser::error::MatchesError::unwrap::h87985dbbd5a93980(&var_e8, 
        "tabsAutoBOLDBlue\x1b[4mSomedumb\x1b…", 4, &var_168);
    let mut var_188: i128;
    let mut r12: i8;
    
    if var_e8 == 0
    {
        let rax_1: *mut i64 = alloc::alloc::Global::alloc_impl::hf61749d460433fff(8, 8);
        
        if rax_1 == 0
        {
            alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1();
            /* no return */
        }
        
        *rax_1 = 8;
        alloc::slice::hack::into_vec::hc80358b1381473c5(&var_188, rax_1, 1);
        r12 = 0;
        goto 'label_4b1ef4;
    }
    
    let var_b8: i128;
    let var_78_1: i128 = var_b8;
    let var_c8: i128;
    let var_88_1: i128 = var_c8;
    let var_d8: i128;
    let var_98_1: i128 = var_d8;
    let mut var_a8: i128 = var_e8;
    let mut var_100: ();
    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::ha117f13ef90b4767(&var_100, &var_a8);
    let mut var_1c8: i128;
    let var_f8: *mut *mut c_void;
    let var_f0: i64;
    alloc::str::join_generic_copy::h7514b7f1927be4b5(&var_1c8, var_f8, var_f0, 
        ",- --tabs=0.0.28Convert tabs in …", 1);
    let var_1b8: i64;
    let var_108_1: i64 = var_1b8;
    let mut var_118: i128 = var_1c8;
    uu_expand::tabstops_parse::h8e62973a242abc7f(&var_168, *var_118[8], var_1b8);
    let cond:0_1: bool = var_168 == 0;
    let mut var_160: i8;
    r12 = var_160;
    let mut var_15f: i128;
    let mut var_1a8: i128 = var_15f;
    var_1a8 = var_15f;
    let mut var_140: i128;
    
    if cond:0_1
    {
        var_188 = var_1a8;
        let var_191: i64;
        let var_178: i64 = var_191;
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::ha7a8555218b598c1(&var_118);
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$str$GT$$GT$::h739ff71e9f88f60a(&var_100);
        'label_4b1ef4:
        var_1c8 = var_188;
        let rax_4: i8 =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
            arg2, "initialno-utf8FILESfailed to wri…", 7);
        let rax_5: i8 =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
            arg2, "no-utf8FILESfailed to write outp…", 7);
        let rax_6: i64 = *var_1c8[8];
        var_168 = rax_6;
        var_160 = rax_6 + (var_178 << 3);
        *var_15f[7] = 0;
        let mut rax_7: i64;
        let mut rdx_3: u64;
        rax_7 = core::iter::traits::iterator::Iterator::reduce::hbc40c7c3e90a5c5b(&var_168);
        
        if rax_7 == 0
        {
            core::option::unwrap_failed::h0e11329e76906eaa();
            /* no return */
        }
        
        alloc::str::_$LT$impl$u20$str$GT$::repeat::h44a69ba09e43960a(&var_188, 
            " --tabs=0.0.28Convert tabs in ea…", 1, rdx_3);
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::hb1d755c6d452e1a4(
            &var_168, arg2, "FILESfailed to write outputcapac…", 5);
        clap_builder::parser::error::MatchesError::unwrap::h87985dbbd5a93980(&var_e8, 
            "FILESfailed to write outputcapac…", 5, &var_168);
        let mut var_198: i64;
        let mut zmm0_6: i128;
        
        if var_e8 == 0
        {
            let rax_8: *mut i128 = alloc::alloc::Global::alloc_impl::hf61749d460433fff(8, 0x18);
            
            if rax_8 == 0
            {
                alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1();
                /* no return */
            }
            
            _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h8a3539b285686873(
                &var_168, "- --tabs=0.0.28Convert tabs in e…", 1);
            let rax_9: i64 = *var_15f[7];
            var_198 = rax_9;
            zmm0_6 = var_168;
            var_1a8 = zmm0_6;
            rax_8[1] = rax_9;
            *rax_8 = zmm0_6;
            alloc::slice::hack::into_vec::h5cf9c57446dfe35f(&var_1a8, rax_8, 1);
        }
        else
        {
            let var_38_1: i128 = var_b8;
            let var_48_1: i128 = var_c8;
            let var_58_1: i128 = var_d8;
            let mut var_68: i128 = var_e8;
            _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h37edc664cc2afb29(&var_1a8, &var_68);
        }
        
        *var_15f[7] = var_198;
        zmm0_6 = var_1a8;
        var_168 = zmm0_6;
        var_140 = var_178;
        var_15f = var_1c8;
        let var_128_1: i64 = var_178;
        let zmm1_3: i128 = var_188;
        arg1[8] = var_178;
        *arg1.byte_offset(0x30) = zmm1_3;
        *arg1 = zmm0_6;
        let var_148: i64;
        arg1[4] = var_148;
        arg1[5] = zmm1_3;
        *arg1.byte_offset(0x10) = var_15f;
        arg1[9] = rax_4;
        *arg1.byte_offset(0x49) = rax_5 ^ 1;
        *arg1.byte_offset(0x4a) = r12;
    }
    else
    {
        *arg1.byte_offset(0x28) = var_140;
        *arg1.byte_offset(0x18) = var_1a8;
        *arg1.byte_offset(9) = var_1a8;
        arg1[1] = r12;
        *arg1 = -0x8000000000000000;
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::ha7a8555218b598c1(&var_118);
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$str$GT$$GT$::h739ff71e9f88f60a(&var_100);
    }
    arg1
}
