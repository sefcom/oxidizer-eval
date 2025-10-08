
  fn uu_head::HeadOptions::get_from::h77af4328ac91ca1f(arg1: *mut i128, arg2: *mut c_void) -> *mut i128

{
    let mut var_b8: i32 = 0xa000000;
    let mut var_e0: i64 = 0;
    let var_d8: i64 = 0xa;
    let mut var_d0: i64 = 0;
    let var_c8: i64 = 8;
    let var_c0: i64 = 0;
    var_b8 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
        arg2, "QUIETquietsilentnever print head…", 5);
    *var_b8[1] =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg2, 
        "VERBOSEverbosealways print heade…", 7);
    let mut rax_3: i8 = 0xa;
    
    if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg2, 
        "ZEROkeysu128for<\x1b[1mKindboolm…", 4) != 0
    {
        rax_3 = 0;
    }
    
    *var_b8[3] = rax_3;
    *var_b8[2] =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg2, 
        "-PRESUME-INPUT-PIPEpresume-input…", 0x13);
    let mut var_b0: i64;
    uu_head::Mode::from::h83e29ab46b97bf14(&var_b0, arg2);
    let rdx: i64 = var_b0;
    let var_a8: i64;
    let mut var_a0: i64;
    
    if -(rdx) != -0x8000000000000000
    {
        *arg1.byte_offset(8) = rdx;
        arg1[1] = var_a8;
        *arg1.byte_offset(0x18) = var_a0;
        *arg1 = 4;
        core::ptr::drop_in_place$LT$uu_head..HeadOptions$GT$::h4c6cc8b30da4bb08(&var_e0);
    }
    else
    {
        var_e0 = var_a8;
        let var_d8_1: i64 = var_a0;
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::heb8d6bd93732b012(
            &var_b0, arg2);
        let mut var_50: i64;
        clap_builder::parser::error::MatchesError::unwrap::hdc331f93397f1123(&var_50, &var_b0);
        
        if var_50 == 0
        {
            let rax_6: u64 = alloc::alloc::Global::alloc_impl::h6fb1b6049873c120(8, 0x18);
            
            if rax_6 == 0
            {
                alloc::alloc::handle_alloc_error::h88aa4f4f9d19c4f9();
                /* no return */
            }
            
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hc3a09e7815fd3a4c(&var_b0, "-error writing 'standard output'…", 1);
            let var_58_1: i64 = var_a0;
            let zmm0_1: i128 = var_b0;
            let var_68_1: i128 = zmm0_1;
            *(rax_6 + 0x10) = var_a0;
            *rax_6 = zmm0_1;
            var_b0 = 1;
            let var_a8_1: u64 = rax_6;
            var_a0 = 1;
        }
        else
        {
            core::iter::traits::iterator::Iterator::collect::h948cf2423d394b99(&var_b0, &var_50);
        }
        
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::ha77e73e2245f257a(&var_d0);
        var_d0 = var_b0;
        let zmm0_2: i128 = var_e0;
        let zmm1_1: i128 = var_d0;
        arg1[2] = var_a0;
        arg1[1] = zmm1_1;
        *arg1 = zmm0_2;
    }
    arg1
}
