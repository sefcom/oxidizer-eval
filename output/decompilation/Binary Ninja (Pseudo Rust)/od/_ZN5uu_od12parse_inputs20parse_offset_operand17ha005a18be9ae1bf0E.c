
  fn uu_od::parse_inputs::parse_offset_operand::ha005a18be9ae1bf0(arg1: *mut i64, arg2: *mut i8, arg3: i64) -> *const i8

{
    let mut var_50: i32 = 0;
    let mut r12: u64 = core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::ha3dd105fff9094a1(
        arg2, arg3, core::char::methods::encode_utf8_raw::h5e8f6d90a161f6f4(0x2b, &var_50), 1);
    let mut rax_2: *mut c_void;
    let mut rdx_2: i64;
    rax_2 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h6f62413506656e8f(r12, arg3, arg2, arg3);
    
    if rax_2 != 0
    {
        let mut rbx_1: i64;
        let mut rbp_2: i32;
        let mut r13_2: i64;
        
        if core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::ha3dd105fff9094a1(rax_2, rdx_2, 
            "0x0Xparse failednulsohstxetxeote…", 2) != 0
        {
            'label_46ab7d:
            r12 |= 2;
            rbp_2 = 0x10;
            rbx_1 = 1;
            r13_2 = arg3;
            'label_46ac35:
            let mut rax_13: *mut c_void;
            let mut rdx_10: i64;
            rax_13 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h6f62413506656e8f(r12, r13_2, arg2, arg3);
            
            if rax_13 == 0
            {
                core::str::slice_error_fail::h1a2885084e28d077(arg2, arg3, r12, r13_2);
                /* no return */
            }
            
            core::num::_$LT$impl$u20$u64$GT$::from_ascii_radix::h3a465e09cf2726d1(&var_50, rax_13, 
                rdx_10, rbp_2);
            let mut result: *const i8 = nullptr;
            let temp0: i8 = var_50;
            
            if temp0 != 0
            {
                result = "parse failednulsohstxetxeotenqac…";
            }
            
            let mut rcx_5: i64 = 0xc;
            let var_48: i64;
            
            if temp0 == 0
            {
                rcx_5 = rbx_1 * var_48;
            }
            *arg1 = result;
            arg1[1] = rcx_5;
            return result;
        }
        
        let mut rax_4: *mut c_void;
        let mut rdx_4: i64;
        rax_4 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h6f62413506656e8f(r12, arg3, arg2, arg3);
        
        if rax_4 != 0
        {
            if core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::ha3dd105fff9094a1(rax_4, 
                rdx_4, "0Xparse failednulsohstxetxeotenq…", 2) != 0
            {
                goto 'label_46ab7d;
            }
            
            var_50 = 0;
            let rax_7: i8 =
                core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::ends_with::h0e81aafc98d6f07c(rax_4, 
                rdx_4, core::char::methods::encode_utf8_raw::h5e8f6d90a161f6f4(0x62, &var_50));
            r13_2 = arg3 - rax_7;
            let mut rax_9: *mut c_void;
            let mut rdx_7: i64;
            rax_9 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h6f62413506656e8f(r12, r13_2, arg2, arg3);
            
            if rax_9 == 0
            {
                core::str::slice_error_fail::h1a2885084e28d077(arg2, arg3, r12, r13_2);
                /* no return */
            }
            
            rbx_1 = 1;
            
            if rax_7 != 0
            {
                rbx_1 = 0x200;
            }
            
            var_50 = 0;
            let rax_12: u64 =
                core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::ends_with::h0e81aafc98d6f07c(rax_9, 
                rdx_7, core::char::methods::encode_utf8_raw::h5e8f6d90a161f6f4(0x2e, &var_50));
            rbp_2 = (rax_12 << 1) + 8;
            r13_2 -= rax_12;
            goto 'label_46ac35;
        }
    }
    
    core::str::slice_error_fail::h1a2885084e28d077(arg2, arg3, r12, arg3);
    /* no return */
}
