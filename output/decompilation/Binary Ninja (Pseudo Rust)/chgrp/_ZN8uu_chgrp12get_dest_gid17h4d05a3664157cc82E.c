
  fn uu_chgrp::get_dest_gid::h4d05a3664157cc82(arg1: *mut i32, arg2: *mut c_void) -> i64

{
    let mut var_118: i64 = 0;
    let var_110: i64 = 1;
    let mut var_108: i64 = 0;
    let mut var_d8: i32;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h3e938edac5a056f4(&var_d8, 
        arg2, "referenceGROUPfailed to get attr…", 9);
    let rax: *mut c_void = clap_builder::parser::error::MatchesError::unwrap::h400a437e510a09d7(
        "referenceGROUPfailed to get attr…", 9, &var_d8);
    let mut result: i32;
    let mut r12_1: i32;
    let mut var_100: i32;
    let mut result_1: i32;
    
    if rax == 0
    {
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h3e938edac5a056f4(
            &var_d8, arg2, "GROUPfailed to get attributes of…", 5);
        let rax_3: *mut c_void =
            clap_builder::parser::error::MatchesError::unwrap::h400a437e510a09d7(
            "GROUPfailed to get attributes of…", 5, &var_d8);
        let mut r14_1: *mut i8;
        let mut r15_1: u64;
        
        if rax_3 == 0
        {
            r14_1 = 1;
            r15_1 = 0;
        }
        else
        {
            r14_1 = *rax_3.byte_offset(8);
            r15_1 = *rax_3.byte_offset(0x10);
        }
        
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h6ad19bc768aeb8f7(&var_d8, r14_1, r15_1);
        let var_c8: i64;
        var_108 = var_c8;
        var_118 = var_d8;
        r12_1 = 0;
        result = core::ptr::drop_in_place$LT$alloc..string..String$GT$::hde73add49f44b46d(0, 1);
        
        if r15_1 != 0
        {
            uu_chgrp::parse_gid_from_str::h3091fc49b902fbfc(&var_100, r14_1, r15_1);
            
            if !(0 + -(var_100))
            {
                let var_f0: i64;
                let var_c8_1: i64 = var_f0;
                var_d8 = var_100;
                let var_c0_1: i32 = 1;
                *arg1.byte_offset(0x10) =
                    alloc::boxed::Box$LT$T$GT$::new::h80792f8261bee4f9(&var_d8);
                *arg1.byte_offset(0x18) = &data_4f4898;
                *arg1.byte_offset(8) = -0x8000000000000000;
                /* tailcall */
                return core::ptr::drop_in_place$LT$alloc..string..String$GT$::hde73add49f44b46d(
                    var_118, var_110);
            }
            
            result = result_1;
            r12_1 = 1;
        }
    }
    else
    {
        std::fs::metadata::h7f84c2225e5a3fec(&var_d8, rax);
        let mut rax_2: i32;
        
        if var_d8 != 2
        {
            let var_fc_1: i32 = 1;
            let var_98: gid_t;
            let var_f8: i32 =
                uu_chgrp::get_dest_gid::_$u7b$$u7b$closure$u7d$$u7d$::h2a08498cce2049c6(&var_118, 
                var_98);
            rax_2 = 0;
        }
        else
        {
            let var_d0: i64;
            result_1 = var_d0;
            rax_2 = 1;
        }
        
        var_100 = rax_2;
        *rax.byte_offset(8);
        *rax.byte_offset(0x10);
        let mut var_e8: i64;
        _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::ha9d3aa68c90c43ca(&var_e8, &var_100);
        let rax_5: i64 = var_e8;
        let var_e0: i32;
        
        if rax_5 != 0
        {
            *arg1.byte_offset(0x10) = rax_5;
            *arg1.byte_offset(0x18) = var_e0;
            *arg1.byte_offset(8) = -0x8000000000000000;
            /* tailcall */
            return core::ptr::drop_in_place$LT$alloc..string..String$GT$::hde73add49f44b46d(
                var_118, var_110);
        }
        
        r12_1 = var_e0;
        let result_2: i32;
        result = result_2;
    }
    *arg1.byte_offset(0x18) = var_108;
    *arg1.byte_offset(8) = var_118;
    *arg1 = r12_1;
    arg1[1] = result;
    result
}
