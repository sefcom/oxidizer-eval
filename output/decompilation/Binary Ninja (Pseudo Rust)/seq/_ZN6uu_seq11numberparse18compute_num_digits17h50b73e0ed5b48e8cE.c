
  fn uu_seq::numberparse::compute_num_digits::h50b73e0ed5b48e8c(arg1: *mut i64, arg2: *mut i8, arg3: u64, arg4: *mut i64) -> i64

{
    let mut var_138: ();
    alloc::str::_$LT$impl$u20$str$GT$::to_lowercase::hb778be1bb3f3f772(&var_138, arg2, arg3);
    let var_130: i64;
    let var_128: i64;
    let mut rax: *mut i8;
    let mut rdx: *mut c_void;
    rax = core::str::_$LT$impl$u20$str$GT$::trim_start_matches::h8a6ec40866845ea1(var_130, var_128);
    let mut r12: *mut i8 = rax;
    let mut var_b8: i32 = 0;
    let mut rax_1: *mut i8;
    let mut rdx_1: u64;
    rax_1 = core::char::methods::encode_utf8_raw::h5e8f6d90a161f6f4(0x2b, &var_b8);
    let mut rax_2: *mut i8;
    let mut rdx_3: *mut c_void;
    rax_2 =
        _$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::strip_prefix_of::hd66f2c78bdb8496c(
        rax_1, rdx_1, r12, rdx);
    let mut r15: *mut c_void = rdx_3;
    
    if rax_2 == 0
    {
        r15 = rdx;
    }
    
    if rax_2 != 0
    {
        r12 = rax_2;
    }
    
    let rax_3: i8 = core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::h10ba65abb895d1af(r12, 
        r15, "0x-0x.pe-src/uu/seq/src/numberpa…", 2);
    let mut rax_4: i8;
    
    if rax_3 == 0
    {
        rax_4 = core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::h10ba65abb895d1af(r12, 
            r15, "-0x.pe-src/uu/seq/src/numberpars…", 3);
    }
    
    if rax_3 == 0 && rax_4 == 0
    {
        let mut var_120: i128;
        core::str::pattern::StrSearcher::new::h3b91c04870bd602f(&var_120, r12, r15, 
            "e-src/uu/seq/src/numberparse.rs(…", 1);
        let var_c0: i64;
        let var_58_1: i64 = var_c0;
        let var_d0: i128;
        let var_68_1: i128 = var_d0;
        let var_e0: i128;
        let var_78_1: i128 = var_e0;
        let var_f0: i128;
        let var_88_1: i128 = var_f0;
        let var_100: i128;
        let var_98_1: i128 = var_100;
        let var_110: i128;
        let var_a8_1: i128 = var_110;
        var_b8 = var_120;
        let var_50_1: i64 = 0;
        let var_48_1: *mut c_void = r15;
        let var_40_1: i16 = 1;
        core::iter::traits::iterator::Iterator::collect::h4624adafb9c421ee(&var_120, &var_b8);
        let r13_2: i64 = var_110;
        
        if r13_2 == 0
        {
            core::panicking::panic_bounds_check::h025cadc56a971af7(0, 0);
            /* no return */
        }
        
        let r15_1: *mut i64 = *var_120[8];
        let mut rax_9: i8;
        let mut rdx_7: i64;
        rax_9 = core::str::_$LT$impl$u20$str$GT$::find::h3640c54bee04bee2(*r15_1, r15_1[1]);
        let mut rax_12: i64;
        let mut r12_2: i64;
        let mut rbp_1: i64;
        
        if (rax_9 & 1) == 0
        {
            rbp_1 = r15_1[1];
            r12_2 = 0;
            
            if r13_2 != 2
            {
                rax_12 = rbp_1;
            }
            else
            {
                'label_4715c7:
                core::num::_$LT$impl$u20$i64$GT$::from_ascii_radix::h7589f30fc8392b2a(&var_b8, 
                    r15_1[2], r15_1[3]);
                let mut rax_11: i64 = 0;
                let mut rcx_2: i64 = 0;
                let var_b0: i64;
                
                if var_b8 == 0
                {
                    rcx_2 = var_b0;
                }
                
                if rcx_2 > 0
                {
                    rax_11 = rcx_2;
                }
                
                rax_12 = rax_11 + rbp_1;
                
                if rcx_2 >= r12_2
                {
                    r12_2 = 0;
                }
                else
                {
                    let temp1_1: i64 = r12_2;
                    r12_2 -= rcx_2;
                    
                    if 0 - (rcx_2 >> 0x3f) != 0
                    {
                        r12_2 = 0;
                    }
                }
            }
        }
        else
        {
            if rdx_7 == 0
            {
                rbp_1 = 1;
            }
            else
            {
                rbp_1 = rdx_7;
                
                if rdx_7 == 1
                {
                    rbp_1 =
                        core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::h10ba65abb895d1af(
                        *r15_1, r15_1[1], "-src/uu/seq/src/numberparse.rs(u…", 1) + 1;
                }
            }
            
            r12_2 = !rdx_7 + r15_1[1];
            
            if r13_2 == 2
            {
                goto 'label_4715c7;
            }
            
            rax_12 = rbp_1;
        }
        arg1[6] = arg4[4];
        let zmm0_2: i128 = *arg4;
        *arg1.byte_offset(0x20) = *arg4.byte_offset(0x10);
        *arg1.byte_offset(0x10) = zmm0_2;
        arg1[7] = rax_12;
        *arg1 = 1;
        arg1[1] = r12_2;
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$str$GT$$GT$::h0f7f791ab19cf63d(var_120, 
            r15_1);
    }
    else
    {
        let rbp: i64 = *arg4;
        let r13_1: i64 = arg4[1];
        let rax_5: i8 = _$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::hff4183d19d767429(".pe-src/uu/seq/src/numberparse.r…", r12, r15);
        let mut rax_6: i8;
        let mut rcx_1: i64;
        
        if rax_5 == 0
        {
            rax_6 = _$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::hff4183d19d767429("pe-src/uu/seq/src/numberparse.rs…", r12, r15);
            rcx_1 = 1;
        }
        
        if rax_5 != 0 || rax_6 != 0
        {
            rcx_1 = 0;
        }
        
        arg1[2] = rbp;
        arg1[3] = r13_1;
        *arg1.byte_offset(0x20) = *arg4.byte_offset(0x10);
        arg1[6] = arg4[4];
        arg1[7] = 0;
        *arg1 = rcx_1;
        arg1[1] = 0;
    }
    
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb5d0045c8189f1b2(&var_138)
}
