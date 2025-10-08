
  fn alacritty::display::Preedit::new::hbdf2538428561226(arg1: *mut i128, arg2: *mut i128, arg3: *mut i32, arg4: i64 @ rax, arg5: i64 @ r12) -> i512

{
    let var_28: i64 = arg5;
    let var_38: i64 = arg4;
    let r15: *mut i128 = arg3;
    let mut rcx: i64;
    
    if *arg3 != 1
    {
        rcx = 0;
    }
    else
    {
        let r12: i64 = *r15.byte_offset(8);
        let rbp_1: i64 = r15[1];
        let r13_1: *mut i8 = *arg2.byte_offset(8);
        let rdx: i64 = arg2[1];
        let mut rax: *mut c_void;
        let mut rdx_1: *mut c_void;
        rax = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::h28e9e81c5537bbed(r12, r13_1, rdx);
        
        if rax == 0
        {
            core::str::slice_error_fail::h1a2885084e28d077(r13_1, rdx, r12, rdx);
            /* no return */
        }
        
        arg5 = core::iter::traits::iterator::Iterator::fold::h3d1978069ee83a65(rax);
        let mut rax_2: *mut c_void;
        let mut rdx_4: *mut c_void;
        rax_2 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::h28e9e81c5537bbed(rbp_1, r13_1, rdx);
        
        if rax_2 == 0
        {
            core::str::slice_error_fail::h1a2885084e28d077(r13_1, rdx, rbp_1, rdx);
            /* no return */
        }
        
        arg4 = core::iter::traits::iterator::Iterator::fold::h3d1978069ee83a65(rax_2);
        rcx = 1;
    }
    
    arg1[4] = arg2[1];
    arg1[3] = *arg2;
    let result: i128 = *r15;
    *arg1 = result;
    arg1[1] = r15[1];
    *arg1.byte_offset(0x18) = rcx;
    arg1[2] = arg5;
    *arg1.byte_offset(0x28) = arg4;
    result
}
