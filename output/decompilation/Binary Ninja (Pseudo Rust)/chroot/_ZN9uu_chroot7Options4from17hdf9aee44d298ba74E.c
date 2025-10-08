
  fn uu_chroot::Options::from::hdf9aee44d298ba74(arg1: *mut i128, arg2: *mut c_void) -> *mut i128

{
    let mut var_d8: i32;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h7c59fc37725ebb47(&var_d8, 
        arg2, "newrootgroupsskip-chdir(uutils c…", 7);
    let rax: *mut c_void = clap_builder::parser::error::MatchesError::unwrap::h7a39a729acf89774(
        "newrootgroupsskip-chdir(uutils c…", 7, &var_d8);
    
    if rax == 0
    {
        var_d8 = 6;
        *arg1.byte_offset(8) = alloc::boxed::Box$LT$T$GT$::new::h6d25de4dbe6fde20(&var_d8);
        arg1[1] = &data_4fabb0;
        *arg1 = -0x8000000000000000;
    }
    else
    {
        let mut var_90: i64;
        std::sys::pal::unix::os::split_paths::bytes_to_path::h3f69b771c0ce4140(&var_90, 
            *rax.byte_offset(8), *rax.byte_offset(0x10));
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h7c59fc37725ebb47(
            &var_d8, arg2, "groupsskip-chdir(uutils coreutil…", 6);
        let rax_1: *mut c_void =
            clap_builder::parser::error::MatchesError::unwrap::h7a39a729acf89774(
            "groupsskip-chdir(uutils coreutil…", 6, &var_d8);
        let mut var_d0: i128;
        let mut var_c0: i128;
        let mut var_a8: i64;
        let mut var_98: i64;
        
        if rax_1 == 0
        {
            var_a8 = -0x8000000000000000;
            'label_466edd:
            let rax_5: i8 =
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
                arg2, "skip-chdir(uutils coreutils) 0.0…", 0xa);
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h7c59fc37725ebb47(
                &var_d8, arg2, "userspec\n       extern "ENOTUNI…", 8);
            let rax_6: *mut c_void =
                clap_builder::parser::error::MatchesError::unwrap::h7a39a729acf89774(
                "userspec\n       extern "ENOTUNI…", 8, &var_d8);
            let mut var_78: i128;
            let mut var_68: i128;
            let mut var_58: i64;
            let mut r15_1: i64;
            
            if rax_6 == 0
            {
                r15_1 = -0x7ffffffffffffffd;
            }
            else
            {
                uu_chroot::parse_userspec::h253265bc6f25e3bc(&var_d8, *rax_6.byte_offset(8), 
                    *rax_6.byte_offset(0x10));
                r15_1 = var_d8;
                var_78 = var_d0;
                var_68 = var_c0;
                let var_b0: i64;
                var_58 = var_b0;
            }
            
            let var_80: i64;
            *var_d0[8] = var_80;
            let zmm0_2: i128 = var_90;
            var_d8 = zmm0_2;
            let zmm1_2: i128 = var_a8;
            *arg1 = zmm0_2;
            arg1[2] = *zmm1_2[8];
            *arg1.byte_offset(0x28) = var_98;
            arg1[1] = *var_d0[8];
            *arg1.byte_offset(0x18) = zmm1_2;
            arg1[3] = r15_1;
            *arg1.byte_offset(0x58) = var_58;
            *arg1.byte_offset(0x48) = var_68;
            *arg1.byte_offset(0x38) = var_78;
            arg1[6] = rax_5;
        }
        else
        {
            let rdx_3: u64 = *rax_1.byte_offset(0x10);
            
            if rdx_3 == 0
            {
                var_a8 = 0;
                let var_a0_1: i64 = 8;
                var_98 = 0;
                goto 'label_466edd;
            }
            
            uu_chroot::parse_group_list::h961e5c146370f9a1(&var_d8, *rax_1.byte_offset(8), rdx_3);
            let rax_2: i32 = var_d8;
            
            if rax_2 == 0xe
            {
                var_a8 = var_d0;
                var_98 = var_c0;
                goto 'label_466edd;
            }
            
            let var_d4: i128;
            let var_d4_1: i128 = var_d4;
            var_d8 = rax_2;
            *var_c0[8] = *var_c0[8];
            *arg1.byte_offset(8) = alloc::boxed::Box$LT$T$GT$::new::h6d25de4dbe6fde20(&var_d8);
            arg1[1] = &data_4fabb0;
            *arg1 = -0x8000000000000000;
            let var_88: i64;
            core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h5fa71b8a5a225c58(var_90, var_88);
        }
    }
    
    arg1
}
