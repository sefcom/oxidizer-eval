
  fn uu_unexpand::Options::new::hf1bf0cc696905b94(arg1: *mut i64, arg2: *mut c_void) -> *mut i64

{
    let mut var_f8: i64;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::he0961343de247fbc(
        &var_f8, arg2, "tabskindAuto/");
    let mut var_b0: i64;
    clap_builder::parser::error::MatchesError::unwrap::h976a16b1bbc48cd2(&var_b0, "tabskindAuto/", 
        &var_f8);
    let mut var_120_1: u64;
    let mut r14: u64;
    let mut r15: i64;
    
    if var_b0 == 0
    {
        let rax_1: u64 = alloc::alloc::Global::alloc_impl::h6fb1b6049873c120(8, 8);
        
        if rax_1 == 0
        {
            alloc::alloc::handle_alloc_error::h88aa4f4f9d19c4f9();
            /* no return */
        }
        
        r14 = rax_1;
        *rax_1 = 8;
        r15 = 1;
        var_120_1 = 1;
        goto 'label_45c06b;
    }
    
    let mut var_118: i64;
    core::iter::traits::iterator::Iterator::collect::h12c5088a8e54daad(&var_118, &var_b0);
    let var_110: i64;
    let var_108: i64;
    alloc::str::join_generic_copy::h4bdcd1fe093f8537(&var_f8, var_110, var_108);
    let r13_1: i64 = var_f8;
    let mut var_f0: u64;
    let mut var_e8: u64;
    uu_unexpand::tabstops_parse::hd6618068ebda3834(&var_f8, var_f0, var_e8);
    r14 = var_e8;
    let var_e0: i64;
    r15 = var_e0;
    
    if var_f8 != 1
    {
        var_120_1 = var_f0;
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h625eac06eaa5da8a(r13_1, var_f0);
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$str$GT$$GT$::h6f04e0b44dc68fa1(var_118, 
            var_110);
        'label_45c06b:
        let rax_2: i8 =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            arg2, "allfirst-onlyno-utf8--first-only…", 3);
        let mut rax_3: i8;
        
        if rax_2 == 0
        {
            rax_3 = clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h5efeb7e2d2f22590(arg2, "tabskindAuto/", 4);
        }
        
        let mut rbp_2: i8;
        
        if rax_2 == 0 && rax_3 == 0
        {
            rbp_2 = 0;
        }
        else
        {
            rbp_2 =
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
                arg2, "first-onlyno-utf8--first-only--a…", 0xa) ^ 1;
        }
        
        let rax_5: i8 =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            arg2, "no-utf8--first-only--all-a--tabs…", 7);
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::he0961343de247fbc(
            &var_f8, arg2, "filei128 as dyn ERANGEEDEADLKENA…");
        let mut var_70: i64;
        clap_builder::parser::error::MatchesError::unwrap::h976a16b1bbc48cd2(&var_70, 
            "filei128 as dyn ERANGEEDEADLKENA…", &var_f8);
        
        if var_70 == 0
        {
            let rax_6: u64 = alloc::alloc::Global::alloc_impl::h6fb1b6049873c120(8, 0x18);
            
            if rax_6 == 0
            {
                alloc::alloc::handle_alloc_error::h88aa4f4f9d19c4f9();
                /* no return */
            }
            
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hc756f0904f45cd83(&var_f8, "-allfirst-onlyno-utf8--first-onl…", 1);
            let var_108_1: u64 = var_e8;
            let zmm0_1: i128 = var_f8;
            var_118 = zmm0_1;
            *(rax_6 + 0x10) = var_e8;
            *rax_6 = zmm0_1;
            var_f8 = 1;
            var_f0 = rax_6;
            var_e8 = 1;
        }
        else
        {
            core::iter::traits::iterator::Iterator::collect::h0bbe8ac7f0e34b78(&var_f8, &var_70);
        }
        
        arg1[2] = var_e8;
        *arg1 = var_f8;
        arg1[1] = var_f0;
        arg1[3] = var_120_1;
        arg1[4] = r14;
        arg1[5] = r15;
        arg1[6] = rbp_2;
        *arg1.byte_offset(0x31) = rax_5 ^ 1;
    }
    else
    {
        arg1[1] = var_f0;
        arg1[2] = r14;
        arg1[3] = r15;
        *arg1 = -0x8000000000000000;
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h625eac06eaa5da8a(r13_1, var_f0);
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$str$GT$$GT$::h6f04e0b44dc68fa1(var_118, 
            var_110);
    }
    
    arg1
}
