
  fn uu_od::parse_inputs::parse_offset_operand::h71d36fc2ef6ee229(arg1: *mut i64, arg2: *mut i8, arg3: *mut c_void) -> *mut c_void

{
    let mut var_50: i32 = 0;
    let mut r12: u64 = core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::h0450dff97e96928e(
        arg2, arg3, core::char::methods::encode_utf8_raw::h4a752b0d300141c4(0x2b, &var_50), 1);
    let mut rax_2: *mut c_void;
    let mut rdx_2: i64;
    rax_2 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h3d479bbd9c610d76(r12, arg3, arg2, arg3);
    
    if rax_2 == 0
    {
        core::str::slice_error_fail::h5dbb61534404fe7e(arg2, arg3, r12, arg3);
        /* no return */
    }
    
    let rax_3: i8 = core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::h0450dff97e96928e(
        rax_2, rdx_2, "0x0Xparse failed()/rustc/8bfcae7…", 2);
    let mut rax_4: i8;
    
    if rax_3 == 0
    {
        rax_4 = core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::h0450dff97e96928e(rax_2, 
            rdx_2, "0Xparse failed()/rustc/8bfcae730…", 2);
    }
    
    let mut r13_1: *mut c_void;
    let mut rbx_1: i64;
    let mut rbp_1: i32;
    
    if rax_3 == 0 && rax_4 == 0
    {
        var_50 = 0;
        let rax_6: i8 = core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::ends_with::h6fe0f80c1a24b85a(
            rax_2, rdx_2, core::char::methods::encode_utf8_raw::h4a752b0d300141c4(0x62, &var_50), 
            1);
        r13_1 = arg3.byte_offset(-rax_6);
        let mut rax_8: *mut c_void;
        let mut rdx_5: i64;
        rax_8 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h3d479bbd9c610d76(r12, r13_1, arg2, arg3);
        
        if rax_8 != 0
        {
            rbx_1 = 0x200;
            
            if rax_6 == 0
            {
                rbx_1 = 1;
            }
            
            var_50 = 0;
            let rax_11: u64 =
                core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::ends_with::h6fe0f80c1a24b85a(rax_8, 
                rdx_5, core::char::methods::encode_utf8_raw::h4a752b0d300141c4(0x2e, &var_50), 1);
            r13_1 -= rax_11;
            rbp_1 = (rax_11 << 1) + 8;
            goto 'label_4d3232;
        }
    }
    else
    {
        r12 |= 2;
        rbx_1 = 1;
        rbp_1 = 0x10;
        r13_1 = arg3;
        'label_4d3232:
        let mut rax_12: *mut c_void;
        let mut rdx_8: i64;
        rax_12 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h3d479bbd9c610d76(r12, r13_1, arg2, arg3);
        
        if rax_12 != 0
        {
            core::num::_$LT$impl$u20$u64$GT$::from_str_radix::h99ae39453f343bd7(&var_50, rax_12, 
                rdx_8, rbp_1);
            let mut result: *mut c_void = nullptr;
            let temp0: i8 = var_50;
            let mut rcx_4: i64 = 0xc;
            let var_48: i64;
            
            if temp0 == 0
            {
                rcx_4 = rbx_1 * var_48;
            }
            
            if temp0 != 0
            {
                result = "parse failed()/rustc/8bfcae730a5…";
            }
            
            arg1[1] = rcx_4;
            *arg1 = result;
            return result;
        }
    }
    core::str::slice_error_fail::h5dbb61534404fe7e(arg2, arg3, r12, r13_1);
    /* no return */
}
