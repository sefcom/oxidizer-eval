
  fn uu_unexpand::Options::new::hba98640d35916d8d(arg1: *mut i64, arg2: *mut c_void) -> *mut i64

{
    let mut var_198: i128;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::hbd246043b6daf010(
        &var_198, arg2, "tabsAutoBOLDBlue\x1b[4mSomedumb\x1b…", 4);
    let mut var_e8: i64;
    clap_builder::parser::error::MatchesError::unwrap::h9cfde3e4273ed929(&var_e8, 
        "tabsAutoBOLDBlue\x1b[4mSomedumb\x1b…", 4, &var_198);
    let mut var_148: i128;
    
    if var_e8 == 0
    {
        let rax_2: *mut i64 = alloc::alloc::Global::alloc_impl::hf61749d460433fff(8, 8);
        
        if rax_2 == 0
        {
            alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1();
            /* no return */
        }
        
        *rax_2 = 8;
        alloc::slice::hack::into_vec::h55aa47da59082a8f(&var_148, rax_2, 1);
        goto 'label_4b1b7a;
    }
    
    let var_b8: i128;
    let var_78_1: i128 = var_b8;
    let var_c8: i128;
    let var_88_1: i128 = var_c8;
    let var_d8: i128;
    let var_98_1: i128 = var_d8;
    let mut var_a8: i128 = var_e8;
    let mut var_1b8: i128;
    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h94a4c0b45001b4d0(&var_1b8, &var_a8);
    let var_1b0: *mut *mut c_void;
    let mut var_1a8: i64;
    alloc::str::join_generic_copy::h53cf3b33d1518b53(&var_198, var_1b0, var_1a8, 
        ",-allfirst-onlyno-utf8--first-on…", 1);
    let var_188: i64;
    let var_f8_1: i64 = var_188;
    let mut var_108: i128 = var_198;
    uu_unexpand::tabstops_parse::h79f903e022d9dc45(&var_198, *var_108[8], var_188);
    let zmm0_3: i128 = var_198;
    let mut var_180: i64;
    
    if var_198 == 0
    {
        let var_138: i64 = var_180;
        var_148 = zmm0_3;
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h3bdde1cb9e2913b2(&var_108);
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$str$GT$$GT$::h472c5ae7f3c85b84(&var_1b8);
        'label_4b1b7a:
        let rax_4: i8 =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
            arg2, "allfirst-onlyno-utf8--first-only…", 3);
        let mut rax_5: i8;
        
        if rax_4 == 0
        {
            rax_5 = clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h8ab577f2647f3b72(arg2, "tabsAutoBOLDBlue\x1b[4mSomedumb\x1b…", 4);
        }
        
        let mut rbp_1: i8;
        
        if rax_4 == 0 && rax_5 == 0
        {
            rbp_1 = 0;
        }
        else
        {
            rbp_1 =
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
                arg2, "first-onlyno-utf8--first-onlysrc…", 0xa) ^ 1;
        }
        
        let rax_7: i8 =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
            arg2, "no-utf8--first-onlysrc/uu/unexpa…", 7);
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::hbd246043b6daf010(
            &var_198, arg2, "filei128 as dyn ERANGEEDEADLKENA…", 4);
        clap_builder::parser::error::MatchesError::unwrap::h9cfde3e4273ed929(&var_e8, 
            "filei128 as dyn ERANGEEDEADLKENA…", 4, &var_198);
        let mut zmm0_5: i128;
        
        if var_e8 == 0
        {
            let rax_8: *mut i128 = alloc::alloc::Global::alloc_impl::hf61749d460433fff(8, 0x18);
            
            if rax_8 == 0
            {
                alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1();
                /* no return */
            }
            
            _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::hde6101a7564f34fb(
                &var_198, "-allfirst-onlyno-utf8--first-onl…", 1);
            var_1a8 = var_188;
            zmm0_5 = var_198;
            var_1b8 = zmm0_5;
            rax_8[1] = var_188;
            *rax_8 = zmm0_5;
            alloc::slice::hack::into_vec::h32000ed39324e2bf(&var_1b8, rax_8, 1);
        }
        else
        {
            let var_38_1: i128 = var_b8;
            let var_48_1: i128 = var_c8;
            let var_58_1: i128 = var_d8;
            let mut var_68: i128 = var_e8;
            _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h63fb22ca47c48f7e(&var_1b8, &var_68);
        }
        
        zmm0_5 = var_1b8;
        var_198 = zmm0_5;
        var_180 = var_148;
        *arg1 = zmm0_5;
        let var_178: i64;
        arg1[4] = var_178;
        arg1[5] = var_138;
        arg1[2] = var_1a8;
        arg1[3] = var_180;
        arg1[6] = rbp_1;
        *arg1.byte_offset(0x31) = rax_7 ^ 1;
    }
    else
    {
        arg1[3] = var_180;
        *arg1.byte_offset(8) = zmm0_3;
        *arg1 = -0x8000000000000000;
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h3bdde1cb9e2913b2(&var_108);
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$str$GT$$GT$::h472c5ae7f3c85b84(&var_1b8);
    }
    arg1
}
