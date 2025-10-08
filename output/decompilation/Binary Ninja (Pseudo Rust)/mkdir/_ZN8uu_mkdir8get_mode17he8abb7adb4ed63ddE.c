
  fn uu_mkdir::get_mode::he8abb7adb4ed63dd(arg1: *mut i64, arg2: *mut c_void, arg3: i8) -> *mut i64

{
    let mut var_78: i64;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h63ff3fd1ffeadd56(&var_78, 
        arg2);
    let rax: *mut c_void =
        clap_builder::parser::error::MatchesError::unwrap::h7bf4328e00f21745(&var_78);
    let mut rbp: i32;
    
    if rax == 0
    {
        rbp = !uucore::features::mode::get_umask::h22fe72fd4e3f2e99() & 0x1ff;
        'label_45fb70:
        arg1[1] = rbp;
        *arg1 = -0x8000000000000000;
    }
    else
    {
        let mut r14_1: *mut c_void = rax;
        let r15_1: i64 = *rax.byte_offset(0x10);
        let mut var_68: ();
        _$LT$char$u20$as$u20$core..str..pattern..Pattern$GT$::into_searcher::h19abee4db16fb58d(
            &var_68, *rax.byte_offset(8), r15_1);
        var_78 = 0;
        let var_70_1: i64 = r15_1;
        let var_38_1: i16 = 1;
        let mut rax_1: *mut *mut c_void;
        let mut rdx_1: u64;
        rax_1 = core::str::iter::SplitInternal$LT$P$GT$::next::ha2ea2eaf4333c4a2(&var_78);
        
        if rax_1 == 0
        {
            rbp = 0x1ff;
            goto 'label_45fb70;
        }
        
        let var_b8_1: *mut c_void = r14_1;
        rbp = 0x1ff;
        let mut var_e8_1: *mut c_void;
        let mut var_e0: *mut *mut i64;
        let mut rax_4: *mut *mut c_void;
        let mut var_f0: *mut *mut c_void;
        let mut var_b0: *mut *mut c_void;
        let mut rax_6: *mut *mut c_void;
        let mut rbx_1: *mut *mut c_void;
        let mut r13_1: *mut c_void;
        
        if arg3 == 0
        {
            loop
            {
                var_b0 = rax_1;
                let var_a8_2: u64 = rdx_1;
                var_f0 = rax_1;
                var_e8_1 = rax_1.byte_offset(rdx_1);
                
                if _$LT$core..ops..control_flow..ControlFlow$LT$B$C$C$GT$$u20$as$u20$core..cmp..PartialEq$GT$::eq::h8332dc6d30fe7e81(core::iter::traits::iterator::Iterator::try_fold::ha903c4bb553092f2(&var_f0))
                    == 0
                {
                    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h09085b3eedcee021(&var_f0, rax_1, rdx_1);
                    rbx_1 = var_f0;
                    r13_1 = var_e8_1;
                    uucore::features::mode::parse_symbolic::h506995bac3fe2fa2(&var_f0, rbp, r13_1, 
                        var_e0, uucore::features::mode::get_umask::h22fe72fd4e3f2e99(), 1);
                    rax_6 = var_f0;
                    
                    if rax_6 != -0x8000000000000000
                    {
                        goto 'label_45fcd3;
                    }
                    
                    rbp = var_e8_1;
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h77802bd3fde9fb69(rbx_1, 
                        r13_1);
                    r14_1 = var_b8_1;
                }
                else
                {
                    uucore::features::mode::parse_numeric::hf54e809090b43181(&var_f0, rbp, 
                        *r14_1.byte_offset(8), *r14_1.byte_offset(0x10), 1);
                    rax_4 = var_f0;
                    
                    if rax_4 != -0x8000000000000000
                    {
                        break;
                    }
                    
                    rbp = var_e8_1;
                }
                
                rax_1 = core::str::iter::SplitInternal$LT$P$GT$::next::ha2ea2eaf4333c4a2(&var_78);
                
                if rax_1 == 0
                {
                    goto 'label_45fb70;
                }
            }
        }
        else
        {
            loop
            {
                var_b0 = rax_1;
                let var_a8_1: u64 = rdx_1;
                var_f0 = rax_1;
                var_e8_1 = rdx_1 + rax_1;
                
                if _$LT$core..ops..control_flow..ControlFlow$LT$B$C$C$GT$$u20$as$u20$core..cmp..PartialEq$GT$::eq::h8332dc6d30fe7e81(core::iter::traits::iterator::Iterator::try_fold::ha903c4bb553092f2(&var_f0))
                    == 0
                {
                    let mut var_a0: *mut i64 = &var_b0;
                    let var_98_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h5f8342cc4ae57580;
                    var_f0 = &data_4ede00;
                    var_e8_1 = 1;
                    let var_d0_1: i64 = 0;
                    var_e0 = &var_a0;
                    let var_d8_1: i64 = 1;
                    let mut var_90: *mut *mut c_void;
                    core::option::Option$LT$T$GT$::map_or_else::h568d5256e3b46eca(&var_90, &var_f0);
                    rbx_1 = var_90;
                    let var_88: *mut c_void;
                    r13_1 = var_88;
                    let var_80: i64;
                    uucore::features::mode::parse_symbolic::h506995bac3fe2fa2(&var_f0, rbp, r13_1, 
                        var_80, uucore::features::mode::get_umask::h22fe72fd4e3f2e99(), 1);
                    rax_6 = var_f0;
                    
                    if rax_6 != -0x8000000000000000
                    {
                        'label_45fcd3:
                        *arg1.byte_offset(0x14) = *var_e0[4];
                        *arg1.byte_offset(0xc) = var_e8_1;
                        *arg1 = rax_6;
                        arg1[1] = var_e8_1;
                        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h77802bd3fde9fb69(
                            rbx_1, r13_1);
                        return arg1;
                    }
                    
                    rbp = var_e8_1;
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h77802bd3fde9fb69(rbx_1, 
                        r13_1);
                    r14_1 = var_b8_1;
                }
                else
                {
                    uucore::features::mode::parse_numeric::hf54e809090b43181(&var_f0, rbp, 
                        *r14_1.byte_offset(8), *r14_1.byte_offset(0x10), 1);
                    rax_4 = var_f0;
                    
                    if rax_4 != -0x8000000000000000
                    {
                        break;
                    }
                    
                    rbp = var_e8_1;
                }
                
                rax_1 = core::str::iter::SplitInternal$LT$P$GT$::next::ha2ea2eaf4333c4a2(&var_78);
                
                if rax_1 == 0
                {
                    goto 'label_45fb70;
                }
            }
        }
        *arg1.byte_offset(0x14) = *var_e0[4];
        *arg1.byte_offset(0xc) = var_e8_1;
        *arg1 = rax_4;
        arg1[1] = var_e8_1;
    }
    arg1
}
