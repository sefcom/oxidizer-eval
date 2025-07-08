
  fn uu_head::HeadOptions::get_from::h1adb6e5857002fb6(arg1: *mut i128, arg2: *mut c_void) -> *mut i128

{
    let mut var_108: i32 = 0xa000000;
    let mut var_130: i64 = 0;
    let var_128: i64 = 0xa;
    let mut var_120: i64 = 0;
    let var_118: i64 = 8;
    let var_110: i64 = 0;
    var_108 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
        arg2, "QUIETquietsilentnever print head…", 5);
    *var_108[1] =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(arg2, 
        "VERBOSEverbosealways print heade…", 7);
    let mut rax_3: i8 = 0xa;
    
    if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(arg2, 
        "ZEROu128for<keysKindboolmut \x1b…", 4) != 0
    {
        rax_3 = 0;
    }
    
    *var_108[3] = rax_3;
    *var_108[2] =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(arg2, 
        "-PRESUME-INPUT-PIPEpresume-input…", 0x13);
    let mut var_100: i64;
    uu_head::Mode::from::h53e4fee035ad00ee(&var_100, arg2);
    let rdx: i64 = var_100;
    let var_f8: i64;
    let var_f0: i64;
    
    if rdx != -0x8000000000000000
    {
        *arg1.byte_offset(8) = rdx;
        arg1[1] = var_f8;
        *arg1.byte_offset(0x18) = var_f0;
        *arg1 = 4;
        core::ptr::drop_in_place$LT$uu_head..HeadOptions$GT$::he2adba56d7eff629(&var_130);
    }
    else
    {
        var_130 = var_f8;
        let var_128_1: i64 = var_f0;
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::ha4c1e75b78057a64(
            &var_100, arg2, "FILE -> \x1b[2mAnsi -- \x1b[8mhe…", 4);
        let mut var_b8: i64;
        clap_builder::parser::error::MatchesError::unwrap::h8f4dae56b5df2536(&var_b8, 
            "FILE -> \x1b[2mAnsi -- \x1b[8mhe…", 4, &var_100);
        
        if var_b8 == 0
        {
            let rax_6: *mut i128 = alloc::alloc::Global::alloc_impl::hf61749d460433fff(0x18);
            
            if rax_6 == 0
            {
                alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1();
                /* no return */
            }
            
            _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h06f047f66f37fa7f(
                &var_100);
            let var_68_1: i64 = var_f0;
            let zmm0_2: i128 = var_100;
            let var_78_1: i128 = zmm0_2;
            rax_6[1] = var_f0;
            *rax_6 = zmm0_2;
            alloc::slice::hack::into_vec::h74676bea9ecbbd9e(&var_100, rax_6, 1);
        }
        else
        {
            let var_88: i128;
            let var_28_1: i128 = var_88;
            let var_98: i128;
            let var_38_1: i128 = var_98;
            let var_a8: i128;
            let var_48_1: i128 = var_a8;
            let mut var_58: i128 = var_b8;
            _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h37bc116ad277ef43(&var_100, &var_58);
        }
        
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h206ae2e6ae342018(&var_120);
        var_120 = var_100;
        let zmm0_3: i128 = var_130;
        let zmm1_2: i128 = var_120;
        arg1[2] = var_f0;
        arg1[1] = zmm1_2;
        *arg1 = zmm0_3;
    }
    arg1
}
