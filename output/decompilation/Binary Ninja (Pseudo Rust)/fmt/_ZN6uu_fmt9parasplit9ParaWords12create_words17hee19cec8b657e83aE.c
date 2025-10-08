
  fn uu_fmt::parasplit::ParaWords::create_words::hee19cec8b657e83a(arg1: *mut i64) -> *mut c_void

{
    let rax: *mut c_void = arg1[4];
    
    if *rax.byte_offset(0x68) != 0
    {
        let rcx: i64 = *rax.byte_offset(8);
        let rax_1: i64 = *rax.byte_offset(0x10);
        let mut var_e8: i64 = rcx;
        let var_e0_1: i64 = rcx + rax_1 * 0x18;
        let var_9f_1: i8 = 2;
        let var_5f_1: i8 = 2;
        return alloc::vec::Vec$LT$T$C$A$GT$::extend_desugared::h1f213722aaceb79a(arg1, &var_e8);
    }
    
    let r14_1: *mut c_void = arg1[3];
    let mut rax_4: *mut c_void;
    let mut rdx_2: i64;
    let mut r12_1: i64;
    let mut r13_1: *mut i8;
    let mut r15_1: i64;
    
    if *r14_1.byte_offset(0x48) != 0 || *r14_1.byte_offset(0x49) == 1
    {
        if *rax.byte_offset(0x10) == 0
        {
            core::panicking::panic_bounds_check::h025cadc56a971af7(0, 0);
            /* no return */
        }
        
        let rcx_1: *mut c_void = *rax.byte_offset(8);
        r15_1 = *rax.byte_offset(0x50);
        r13_1 = *rcx_1.byte_offset(8);
        r12_1 = *rcx_1.byte_offset(0x10);
        rax_4 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::h28e9e81c5537bbed(r15_1, r13_1, r12_1);
        
        if rax_4 == 0
        {
            core::str::slice_error_fail::h1a2885084e28d077(r13_1, r12_1, r15_1, r12_1);
            /* no return */
        }
    }
    else
    {
        if *rax.byte_offset(0x10) == 0
        {
            core::panicking::panic_bounds_check::h025cadc56a971af7(0, 0);
            /* no return */
        }
        
        let rcx_2: *mut c_void = *rax.byte_offset(8);
        r15_1 = *rax.byte_offset(0x60);
        r13_1 = *rcx_2.byte_offset(8);
        r12_1 = *rcx_2.byte_offset(0x10);
        rax_4 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::h28e9e81c5537bbed(r15_1, r13_1, r12_1);
        
        if rax_4 == 0
        {
            core::str::slice_error_fail::h1a2885084e28d077(r13_1, r12_1, r15_1, r12_1);
            /* no return */
        }
    }
    let mut var_58: ();
    uu_fmt::parasplit::WordSplit::new::h0ffb4261eb0e58ed(&var_58, r14_1, rax_4, rdx_2);
    alloc::vec::Vec$LT$T$C$A$GT$::extend_desugared::h8f7a02158fb7bf61(arg1, &var_58);
    let result: *mut c_void = arg1[4];
    let rcx_4: i64 = *result.byte_offset(0x10);
    
    if rcx_4 <= 1
    {
        return result;
    }
    
    let mut var_178: i64 = *result.byte_offset(0x60);
    let rdx_6: i64 = arg1[3];
    let rax_5: i64 = *result.byte_offset(8);
    let mut var_170: i64 = rax_5;
    let var_168_1: i64 = rax_5 + rcx_4 * 0x18;
    let var_160_1: i64 = 1;
    let var_158_1: i64 = rdx_6;
    let var_150_1: *mut i64 = &var_178;
    let var_120_1: i8 = 2;
    let var_f0_1: i8 = 2;
    alloc::vec::Vec$LT$T$C$A$GT$::extend_desugared::h46897b5c40727b65(arg1, &var_170)
}
