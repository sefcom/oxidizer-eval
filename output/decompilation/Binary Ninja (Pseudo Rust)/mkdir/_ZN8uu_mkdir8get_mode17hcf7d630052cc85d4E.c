
  fn uu_mkdir::get_mode::hcf7d630052cc85d4(arg1: *mut i64, arg2: *mut c_void, arg3: i8) -> *mut i64

{
    let mut var_78: i64;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::he67b74001b5dafb4(&var_78, 
        arg2, "modei128 as dyn ", 4);
    let rax: *mut c_void = clap_builder::parser::error::MatchesError::unwrap::h4544dc2b3abed5df(
        "modei128 as dyn ", 4, &var_78);
    let mut rbp_1: i32;
    
    if rax == 0
    {
        rbp_1 = !uucore::features::mode::get_umask::hd2aa58752ad993fa() & 0x1ff;
        'label_4b2637:
        arg1[1] = rbp_1;
        *arg1 = -0x8000000000000000;
    }
    else
    {
        let r14_1: *mut i32 = *rax.byte_offset(8);
        let r15_1: *mut c_void = *rax.byte_offset(0x10);
        let mut var_68: ();
        _$LT$char$u20$as$u20$core..str..pattern..Pattern$GT$::into_searcher::h77b0cfb9226a3587(
            &var_68, r14_1, r15_1);
        var_78 = 0;
        let var_70_1: *mut c_void = r15_1;
        let var_38_1: i16 = 1;
        let mut rax_1: *mut *mut c_void;
        let mut rdx_2: u64;
        rax_1 = core::str::iter::SplitInternal$LT$P$GT$::next::had797e95afa81bfb(&var_78);
        
        if rax_1 == 0
        {
            rbp_1 = 0x1ff;
            goto 'label_4b2637;
        }
        
        let mut rbx_1: *mut *mut c_void = rax_1;
        let mut r13_1: u64 = rdx_2;
        let mut var_f8_1: *mut c_void;
        let mut var_f0: *mut *mut i64;
        let mut rax_5: *mut *mut c_void;
        let mut var_100: *mut *mut c_void;
        let mut var_c8: i128;
        let mut var_b0: *mut *mut c_void;
        let mut rax_7: *mut *mut c_void;
        
        if arg3 == 0
        {
            rbp_1 = 0x1ff;
            
            loop
            {
                var_b0 = rbx_1;
                let var_a8_2: u64 = r13_1;
                var_100 = rbx_1;
                var_f8_1 = rbx_1.byte_offset(r13_1);
                let rdi_13: *mut i128 = &var_100;
                
                if _$LT$core..ops..control_flow..ControlFlow$LT$B$C$C$GT$$u20$as$u20$core..cmp..PartialEq$GT$::eq::h4b3a54094321950c(core::iter::traits::iterator::Iterator::try_fold::hec868b0f829523d7(&var_100))
                    == 0
                {
                    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::ha4208e868ecb88cc(
                        rdi_13, rbx_1, r13_1);
                    let rbx_3: *mut c_void = var_f0;
                    let var_b8_2: *mut c_void = rbx_3;
                    var_c8 = var_100;
                    uucore::features::mode::parse_symbolic::h8b8316294f52b67d(&var_100, rbp_1, 
                        *var_c8[8], rbx_3, uucore::features::mode::get_umask::hd2aa58752ad993fa(), 
                        1);
                    rax_7 = var_100;
                    
                    if rax_7 != -0x8000000000000000
                    {
                        goto 'label_4b2792;
                    }
                    
                    rbp_1 = var_f8_1;
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h03aa133fcf191ac0(
                        &var_c8);
                }
                else
                {
                    uucore::features::mode::parse_numeric::h27100faf377a9b0f(rdi_13, rbp_1, r14_1, 
                        r15_1, 1);
                    rax_5 = var_100;
                    
                    if rax_5 != -0x8000000000000000
                    {
                        break;
                    }
                    
                    rbp_1 = var_f8_1;
                }
                
                let mut rax_10: *mut *mut c_void;
                let mut rdx_6: u64;
                rax_10 = core::str::iter::SplitInternal$LT$P$GT$::next::had797e95afa81bfb(&var_78);
                rbx_1 = rax_10;
                r13_1 = rdx_6;
                
                if rax_10 == 0
                {
                    goto 'label_4b2637;
                }
            }
        }
        else
        {
            rbp_1 = 0x1ff;
            
            loop
            {
                var_b0 = rbx_1;
                let var_a8_1: u64 = r13_1;
                var_100 = rbx_1;
                var_f8_1 = r13_1 + rbx_1;
                
                if _$LT$core..ops..control_flow..ControlFlow$LT$B$C$C$GT$$u20$as$u20$core..cmp..PartialEq$GT$::eq::h4b3a54094321950c(core::iter::traits::iterator::Iterator::try_fold::hec868b0f829523d7(&var_100))
                    == 0
                {
                    let mut var_a0: *mut i64 = &var_b0;
                    let var_98_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hfd6a55cddc5280de;
                    var_100 = &data_520500;
                    var_f8_1 = 1;
                    let var_e0_1: i64 = 0;
                    var_f0 = &var_a0;
                    let var_e8_1: i64 = 1;
                    let mut var_90: i128;
                    core::option::Option$LT$T$GT$::map_or_else::h6db0321d2b87c404(&var_90, 
                        &var_100);
                    let var_80: *mut c_void;
                    let var_b8_1: *mut c_void = var_80;
                    var_c8 = var_90;
                    uucore::features::mode::parse_symbolic::h8b8316294f52b67d(&var_100, rbp_1, 
                        *var_c8[8], var_80, uucore::features::mode::get_umask::hd2aa58752ad993fa(), 
                        1);
                    rax_7 = var_100;
                    
                    if rax_7 != -0x8000000000000000
                    {
                        'label_4b2792:
                        *arg1.byte_offset(0x14) = *var_f0[4];
                        *arg1.byte_offset(0xc) = var_f8_1;
                        *arg1 = rax_7;
                        arg1[1] = var_f8_1;
                        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h03aa133fcf191ac0(
                            &var_c8);
                        return arg1;
                    }
                    
                    rbp_1 = var_f8_1;
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h03aa133fcf191ac0(
                        &var_c8);
                }
                else
                {
                    uucore::features::mode::parse_numeric::h27100faf377a9b0f(&var_100, rbp_1, 
                        r14_1, r15_1, 1);
                    rax_5 = var_100;
                    
                    if rax_5 != -0x8000000000000000
                    {
                        break;
                    }
                    
                    rbp_1 = var_f8_1;
                }
                
                let mut rax_2: *mut *mut c_void;
                let mut rdx_3: u64;
                rax_2 = core::str::iter::SplitInternal$LT$P$GT$::next::had797e95afa81bfb(&var_78);
                rbx_1 = rax_2;
                r13_1 = rdx_3;
                
                if rax_2 == 0
                {
                    goto 'label_4b2637;
                }
            }
        }
        *arg1.byte_offset(0x14) = *var_f0[4];
        *arg1.byte_offset(0xc) = var_f8_1;
        *arg1 = rax_5;
        arg1[1] = var_f8_1;
    }
    arg1
}
