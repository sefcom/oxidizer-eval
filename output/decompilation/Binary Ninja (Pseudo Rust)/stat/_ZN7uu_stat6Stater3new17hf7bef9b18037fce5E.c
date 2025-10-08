
  fn uu_stat::Stater::new::hf7bef9b18037fce5(arg1: *mut i128, arg2: *mut c_void) -> *mut i128

{
    let mut var_108: i64;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h97bb3de9165840fc(
        &var_108, arg2);
    let mut var_70: i64;
    clap_builder::parser::error::MatchesError::unwrap::h764dae6f0238603f(&var_70, &var_108);
    let mut var_148: i128;
    let var_138: i64;
    let mut var_100: i128;
    let mut var_c0: i64;
    
    if var_70 == 0
    {
        'label_475fb3:
        var_c0 = 0;
        let var_b8_1: i64 = 8;
        let var_b0_1: i64 = 0;
        'label_475fe8:
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h1259f2eee6e0998a(&var_148, "missing operand\nTry 'stat --hel…", 0x37);
        *var_100[8] = var_138;
        var_108 = var_148;
        let var_f0_1: i32 = 1;
        *arg1.byte_offset(8) = alloc::boxed::Box$LT$T$GT$::new::h173a34a4352a059d(&var_108);
        arg1[1] = &data_519a38;
        *arg1 = -0x8000000000000000;
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..ffi..os_str..OsString$GT$$GT$::he5ceda648946ad06(&var_c0);
    }
    else
    {
        core::iter::traits::iterator::Iterator::collect::h61a8f821538b3ebe(&var_108, &var_70);
        let rax_1: i64 = var_108;
        var_148 = var_100;
        
        if rax_1 == -0x8000000000000000
        {
            goto 'label_475fb3;
        }
        
        let mut var_b8: i64;
        var_b8 = var_148;
        var_c0 = rax_1;
        let var_b0: i64;
        
        if var_b0 == 0
        {
            goto 'label_475fe8;
        }
        
        let mut var_110_1: *mut i8;
        let mut rbp_1: *mut i8;
        
        if clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h5efeb7e2d2f22590(
            arg2, "printfformattersefile-systemdere…", 6) == 0
        {
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h240e0a37f9b20972(
                &var_108, arg2, "formattersefile-systemdereferenc…");
            let mut rax_8: *mut i8 =
                clap_builder::parser::error::MatchesError::unwrap::h0c141a8c310d1e76(
                "formattersefile-systemdereferenc…", &var_108);
            let mut rcx_1: *mut i8;
            
            if rax_8 == 0
            {
                rcx_1 = nullptr;
            }
            else
            {
                rcx_1 = *rax_8.byte_offset(8);
                rax_8 = *rax_8.byte_offset(0x10);
            }
            
            if rcx_1 == 0
            {
                rax_8 = rcx_1;
            }
            
            var_110_1 = rax_8;
            rbp_1 = 1;
            
            if rcx_1 != 0
            {
                rbp_1 = rcx_1;
            }
        }
        else
        {
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h240e0a37f9b20972(
                &var_108, arg2, "printfformattersefile-systemdere…");
            let rax_6: *mut c_void =
                clap_builder::parser::error::MatchesError::unwrap::h0c141a8c310d1e76(
                "printfformattersefile-systemdere…", &var_108);
            
            if rax_6 == 0
            {
                core::option::expect_failed::h3f620cfb8545dc61("Invalid format stringfilesprintf…");
                /* no return */
            }
            
            rbp_1 = *rax_6.byte_offset(8);
            var_110_1 = *rax_6.byte_offset(0x10);
        }
        
        let rax_9: i8 =
            clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h5efeb7e2d2f22590(
            arg2, "printfformattersefile-systemdere…", 6);
        let rax_10: i8 =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            arg2, "tersefile-systemdereferencecanno…", 5);
        let rax_11: i8 =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            arg2, "file-systemdereferencecannot rea…", 0xb);
        let rdx_1: u64 = var_110_1;
        let mut var_130_1: i64;
        let mut var_128_1: i64;
        let mut rbp_2: i64;
        
        if rdx_1 == 0
        {
            uu_stat::Stater::default_format::h2dd040e5543d36f9(&var_108, rax_11, rax_10, 0);
            uu_stat::Stater::generate_tokens::hafb5d93f144f9d1e(&var_148, var_100, *var_100[8], 
                rax_9);
            let rcx_5: i64 = var_148;
            let rax_13: i64 = *var_148[8];
            rbp_2 = var_138;
            var_128_1 = rcx_5;
            
            if rcx_5 != -0x8000000000000000
            {
                var_130_1 = rax_13;
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h44f04a5137e020d4(&var_108);
                'label_47621f:
                uu_stat::Stater::default_format::h2dd040e5543d36f9(&var_108, rax_11, rax_10, 1);
                uu_stat::Stater::generate_tokens::hafb5d93f144f9d1e(&var_148, var_100, *var_100[8], 
                    rax_9);
                let rcx_7: i64 = var_148;
                let rax_14: i64 = *var_148[8];
                
                if rcx_7 != -0x8000000000000000
                {
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h44f04a5137e020d4(
                        &var_108);
                    let mut var_a8: i64;
                    let mut var_98: i64;
                    
                    if rax_11 == 0
                    {
                        let mut var_88: i64;
                        uucore::features::fsext::read_fs_list::h6f122f433e9b10c6(&var_88);
                        let rcx_8: i64 = var_88;
                        let var_80: i64;
                        let var_78: *mut i64;
                        
                        if rcx_8 != -0x8000000000000000
                        {
                            var_108 = rcx_8;
                            var_100 = var_80;
                            *var_100[8] = var_78;
                            core::iter::traits::iterator::Iterator::collect::h584a9aedd2c4ca7a(
                                &var_148, var_80);
                            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uucore..features..fsext..MountInfo$GT$$GT$::h434567c17f904e59(&var_108);
                            let r12_1: *mut c_void = *var_148[8];
                            alloc::slice::stable_sort::h61594ff5ae92828d(r12_1, var_138);
                            core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::reverse::h9eae5c74aeddd1f8(
                                r12_1, var_138);
                            var_98 = var_138;
                            var_a8 = var_148;
                            goto 'label_476373;
                        }
                        
                        *arg1.byte_offset(8) =
                            uu_stat::Stater::new::_$u7b$$u7b$closure$u7d$$u7d$::h243deef8a3840657(
                            var_80, var_78);
                        arg1[1] = &data_519a38;
                        *arg1 = -0x8000000000000000;
                        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_stat..Token$GT$$GT$::h3cf71f1ca7f8d943(rcx_7, rax_14);
                        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_stat..Token$GT$$GT$::h3cf71f1ca7f8d943(var_128_1, var_130_1);
                        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..ffi..os_str..OsString$GT$$GT$::he5ceda648946ad06(&var_c0);
                    }
                    else
                    {
                        var_a8 = -0x8000000000000000;
                        'label_476373:
                        let rax_18: i8 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg2, "dereferencecannot read table of …", 0xb);
                        arg1[1] = var_b0;
                        *arg1 = var_c0;
                        *arg1.byte_offset(0x48) = var_a8;
                        *arg1.byte_offset(0x58) = var_98;
                        *arg1.byte_offset(0x18) = var_128_1;
                        arg1[2] = var_130_1;
                        *arg1.byte_offset(0x28) = rbp_2;
                        arg1[3] = rcx_7;
                        *arg1.byte_offset(0x38) = rax_14;
                        arg1[4] = var_138;
                        arg1[6] = rax_18;
                        *arg1.byte_offset(0x61) = rax_11;
                        *arg1.byte_offset(0x62) = var_110_1 != 0;
                    }
                }
                else
                {
                    *arg1.byte_offset(8) = rax_14;
                    arg1[1] = var_138;
                    *arg1 = -0x8000000000000000;
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h44f04a5137e020d4(
                        &var_108);
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_stat..Token$GT$$GT$::h3cf71f1ca7f8d943(var_128_1, var_130_1);
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..ffi..os_str..OsString$GT$$GT$::he5ceda648946ad06(&var_c0);
                }
            }
            else
            {
                *arg1.byte_offset(8) = rax_13;
                arg1[1] = rbp_2;
                *arg1 = -0x8000000000000000;
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h44f04a5137e020d4(&var_108);
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..ffi..os_str..OsString$GT$$GT$::he5ceda648946ad06(&var_c0);
            }
        }
        else
        {
            uu_stat::Stater::generate_tokens::hafb5d93f144f9d1e(&var_108, rbp_1, rdx_1, rax_9);
            let rcx_3: i64 = var_108;
            let rax_12: i64 = var_100;
            rbp_2 = *var_100[8];
            var_128_1 = rcx_3;
            
            if rcx_3 != -0x8000000000000000
            {
                var_130_1 = rax_12;
                goto 'label_47621f;
            }
            
            *arg1.byte_offset(8) = rax_12;
            arg1[1] = rbp_2;
            *arg1 = -0x8000000000000000;
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..ffi..os_str..OsString$GT$$GT$::he5ceda648946ad06(&var_c0);
        }
    }
    arg1
}
