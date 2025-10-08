
  fn uu_chown::parse_spec::h35c2058a4fb20997(arg1: u64, arg2: *mut i8, arg3: *mut c_void, arg4: i32) -> i64

{
    let mut rbp: u64 = arg1;
    let mut var_134: i32 = arg4;
    
    if _$LT$char$u20$as$u20$core..slice..cmp..SliceContains$GT$::slice_contains::h2af8667b79ce998c(
        &var_134) == 0
    {
        core::panicking::panic::h85d6dd562679980c("assertion failed: ['.', ':'].con…");
        /* no return */
    }
    
    let mut var_88: ();
    _$LT$char$u20$as$u20$core..str..pattern..Pattern$GT$::into_searcher::h19abee4db16fb58d(&var_88, 
        arg4, arg2, arg3);
    let mut var_98: i64 = 0;
    let var_90: *mut c_void = arg3;
    let var_58: i16 = 1;
    let var_a0: i64 = 1;
    let mut rax_1: u64;
    let mut rdx_1: u64;
    rax_1 = core::str::iter::SplitInternal$LT$P$GT$::next::hf71c92c096863657(&var_98);
    let mut r12: u64 = rdx_1;
    let mut r13: *mut i8 = 1;
    
    if rax_1 != 0
    {
        r13 = rax_1;
    }
    
    if rax_1 == 0
    {
        r12 = rax_1;
    }
    
    let var_130: u64 = rbp;
    let mut rbx_1: u64;
    
    if var_a0 == 0
    {
        rbx_1 = 0;
    }
    else
    {
        let mut rax_3: u64;
        let mut rdx_2: u64;
        
        if var_a0 != 1
        {
            let var_a0_2: i64 = var_a0 - 1;
            rax_3 = core::str::iter::SplitInternal$LT$P$GT$::next::hf71c92c096863657(&var_98);
        }
        else
        {
            let var_a0_1: i64 = 0;
            rax_3 = core::str::iter::SplitInternal$LT$P$GT$::get_end::h74cf200cf9f6e638(&var_98);
        }
        
        rbx_1 = rax_3;
        rbp = rdx_2;
    }
    
    if rbx_1 == 0
    {
        rbp = rbx_1;
    }
    
    let mut var_128: *mut i8;
    uu_chown::parse_uid::h01027c14780af233(&var_128, r13, r12, arg2, arg3, var_134);
    let mut rax_5: *mut i8 = var_128;
    let mut result: i32;
    let mut rdx_5: u64;
    let var_120: *mut *mut c_void;
    let mut rcx_3: *mut *mut c_void;
    
    if rax_5 != 0
    {
        'label_4618a3:
        rcx_3 = var_120;
        'label_4618a8:
        rdx_5 = var_130;
        *(rdx_5 + 8) = rax_5;
        *(rdx_5 + 0x10) = rcx_3;
        result = 1;
    }
    else
    {
        let mut rsi_2: *mut i8 = 1;
        
        if rbx_1 != 0
        {
            rsi_2 = rbx_1;
        }
        
        uu_chown::parse_gid::h180219f2ead778f4(&var_128, rsi_2, rbp);
        rax_5 = var_128;
        
        if rax_5 != 0
        {
            goto 'label_4618a3;
        }
        
        let var_c8_1: [i32; 0x4] = var_120;
        var_128 = r13;
        let var_120_1: *mut c_void = &r13[r12];
        let mut rax_7: i8;
        let mut rdx_6: i32;
        rax_7 = core::str::validations::next_code_point::h64a24206fe1d1fca(&var_128, rbx_1);
        
        if (rdx_6 != 0x110000 & rax_7) == 1
        {
            if rdx_6 - 0x30 >= 0xa
            {
                if rdx_6 >= 0x80
                    && core::unicode::unicode_data::n::lookup::h2205f79143053ee8(rdx_6) != 0
                    && rbp == 0
                {
                    'label_461926:
                    
                    if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h734d187c689c169f(arg2, arg3, r13, r12) == 0
                    {
                        let mut var_e8: i64 = 0;
                        let var_e0_1: *mut i8 = arg2;
                        let var_d8_1: *mut c_void = arg3;
                        let var_d0_1: i8 = 1;
                        let mut var_f8: *mut i64 = &var_e8;
                        let var_f0_1: fn(arg1: *mut i32, arg2: *mut i64) -> i64 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                        var_128 = &data_4f5fb0;
                        let var_120_2: i64 = 1;
                        let var_108_1: i64 = 0;
                        let var_118_1: *mut *mut i64 = &var_f8;
                        let var_110_1: i64 = 1;
                        let mut var_50: ();
                        core::option::Option$LT$T$GT$::map_or_else::h4bc4c2e4ba7ee2f5(&var_50, 
                            &var_128);
                        let var_38_1: i32 = 1;
                        rax_5 = alloc::boxed::Box$LT$T$GT$::new::hb4f3be129963c03f(&var_50);
                        rcx_3 = &data_4f5f38;
                        goto 'label_4618a8;
                    }
                }
            }
            else if rbp == 0
            {
                goto 'label_461926;
            }
        }
        
        rdx_5 = var_130;
        *(rdx_5 + 4) = __unpcklpd_xmmpd_memdq(var_120, var_c8_1);
        result = 0;
    }
    *rdx_5 = result;
    result
}
