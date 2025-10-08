
  fn just::config::Config::search_config::hc89ef7530a42dfa5(arg1: *mut i64, arg2: *mut c_void, arg3: *mut c_void) -> *mut c_void

{
    let mut result: *mut c_void;
    
    if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5581ced2fe72531c(arg2, 
        "GLOBAL-JUSTFILEglobal-justfileWO…", 0xf) == 0
    {
        let mut var_b8: i128;
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h223ef8b59aed830d(
            &var_b8, arg2, "JUSTFILEVARIABL", 8);
        let rax_1: *mut c_void =
            clap_builder::parser::error::MatchesError::unwrap::h25b7f9d64b5b1d51("JUSTFILEVARIABL", 
            8, &var_b8);
        let mut var_f0: i64;
        
        if rax_1 == 0
        {
            var_f0 = -0x8000000000000000;
        }
        else
        {
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::he141d0e2f3955eab(&var_f0, *rax_1.byte_offset(8), *rax_1.byte_offset(0x10));
        }
        
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h223ef8b59aed830d(
            &var_b8, arg2, "WORKING-DIRECTORYUse global just…", 0x11);
        let rax_2: *mut c_void =
            clap_builder::parser::error::MatchesError::unwrap::h25b7f9d64b5b1d51(
            "WORKING-DIRECTORYUse global just…", 0x11, &var_b8);
        let mut var_d8: i64;
        let mut var_c8: i64;
        let var_a8: i64;
        
        if rax_2 == 0
        {
            var_d8 = -0x8000000000000000;
            
            if *arg3.byte_offset(0x30) != -0x8000000000000000
            {
                'label_65f8c5:
                _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::he141d0e2f3955eab(&var_b8, *arg3.byte_offset(0x38), *arg3.byte_offset(0x40));
                let mut var_88: i128 = var_b8;
                
                if var_88 != -0x8000000000000000
                {
                    if var_f0 != -0x8000000000000000 || var_d8 != -0x8000000000000000
                    {
                        *arg1 = -0x7ffffffffffffffc;
                        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h775cb89257c230e4(
                            &var_88);
                    }
                    else
                    {
                        arg1[4] = var_a8;
                        *arg1.byte_offset(0x10) = var_88;
                        arg1[1] = -0x7fffffffffffffff;
                        *arg1 = -0x7ffffffffffffff9;
                    }
                    
                    core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::h35203c2827c71cb0(&var_d8);
                    return core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::h35203c2827c71cb0(&var_f0);
                }
            }
        }
        else
        {
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::he141d0e2f3955eab(&var_b8, *rax_2.byte_offset(8), *rax_2.byte_offset(0x10));
            var_c8 = var_a8;
            var_d8 = var_b8;
            
            if *arg3.byte_offset(0x30) != -0x8000000000000000
            {
                goto 'label_65f8c5;
            }
        }
        
        let var_68_1: i64 = var_f0;
        let var_e0: i64;
        let var_58_1: i64 = var_e0;
        let mut var_50: i128 = var_d8;
        let var_40_1: i64 = var_c8;
        result = var_50;
        
        if var_68_1 == -0x8000000000000000
        {
            if result != -0x8000000000000000
            {
                _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::he141d0e2f3955eab(&var_b8, "--working-directory set without …", 0x2a);
                arg1[3] = var_a8;
                *arg1.byte_offset(8) = var_b8;
                *arg1 = -0x7fffffffffffffff;
                return core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h775cb89257c230e4(
                    &var_50);
            }
            
            arg1[1] = -0x8000000000000000;
        }
        else if result != -0x8000000000000000
        {
            result = &arg1[1];
            let zmm0_1: i128 = var_f0;
            var_b8 = zmm0_1;
            let zmm1_1: i128 = var_d8;
            *result = zmm0_1;
            *result.byte_offset(0x20) = *zmm1_1[8];
            *result.byte_offset(0x28) = var_c8;
            *result.byte_offset(0x10) = var_e0;
            *result.byte_offset(0x18) = zmm1_1;
        }
        else
        {
            arg1[4] = var_e0;
            *arg1.byte_offset(0x10) = var_f0;
            result = -0x8000000000000003;
            arg1[1] = result;
        }
    }
    else
    {
        result = -0x8000000000000002;
        arg1[1] = result;
    }
    
    *arg1 = -0x7ffffffffffffff9;
    result
}
