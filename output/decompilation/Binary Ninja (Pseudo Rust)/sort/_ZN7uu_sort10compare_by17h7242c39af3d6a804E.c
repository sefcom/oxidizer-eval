
  fn uu_sort::compare_by::h7242c39af3d6a804(arg1: *mut *mut c_void, arg2: *mut *mut i8, arg3: *mut c_void, arg4: *mut c_void, arg5: *mut c_void) -> u64

{
    let r11: i64 = arg1[2];
    let rbx: i64 = arg2[2];
    let r9: *mut c_void = arg3;
    let mut rax: *mut i32 = nullptr;
    let temp0: i64 = *arg5.byte_offset(0x58);
    arg3 = rbx >= temp0;
    
    if rbx < temp0
    {
        rax = (rbx << 4) + *arg5.byte_offset(0x50);
    }
    
    arg3 |= r11 >= *arg4.byte_offset(0x58);
    let mut result: u64;
    let mut rcx_7: u32;
    let mut cond:7: bool;
    
    if arg3 != 0
    {
        'label_4d5c1d:
        let mut r14_2: *mut c_void = *r9.byte_offset(8);
        let rax_5: i64 = *r9.byte_offset(0x48);
        let rdx_4: *mut c_void = (*r9.byte_offset(0x10) * 0x38).byte_offset(r14_2);
        let rdx_5: i64 = *r9.byte_offset(0x58);
        let rsi_5: i64 = *arg4.byte_offset(8);
        let rdx_7: i64 = *arg5.byte_offset(8);
        let rdx_8: i64 = *arg5.byte_offset(0x10);
        let rdx_9: i64 = *r9.byte_offset(0x50);
        let rdx_11: i64 = *arg5.byte_offset(0x40);
        let rdx_12: *mut i64 = *arg5.byte_offset(0x38);
        let r11_1: i64 = r11 * rax_5;
        let rax_6: i64 = rax_5 * rbx;
        let rax_7: i64 = *arg5.byte_offset(0x28);
        let rax_8: i64 = *arg5.byte_offset(0x20);
        let rax_9: i64 = *arg4.byte_offset(0x10);
        let rax_10: i64 = *arg4.byte_offset(0x40);
        let rax_11: *mut i64 = *arg4.byte_offset(0x38);
        let rax_12: i64 = *arg4.byte_offset(0x28);
        let rax_13: i64 = *arg4.byte_offset(0x20);
        let rax_14: i8 = *r9.byte_offset(0x87);
        let mut r13_2: i64 = 0;
        let mut rsi_8: i64 = 0;
        let mut rbx_1: i64 = 0;
        
        loop
        {
            let r15_2: *mut c_void = r14_2;
            r14_2 += 0x38;
            
            if r15_2 == rdx_4
            {
                r14_2 = r15_2;
            }
            
            if r15_2 == rdx_4
            {
                let mut rax_48: i64;
                
                if *r9.byte_offset(0x98) == 5 || *r9.byte_offset(0x83) != 0
                    || *r9.byte_offset(0x84) != 0
                {
                    rax_48 = 0;
                }
                else
                {
                    let rax_50: u64 = arg1[1];
                    let mut rdx_17: u64 = arg2[1];
                    let mut rbx_3: i64 = rax_50 - rdx_17;
                    
                    if rax_50 < rdx_17
                    {
                        rdx_17 = rax_50;
                    }
                    
                    rax_48 = memcmp(*arg1, *arg2, rdx_17);
                    
                    if rax_48 != 0
                    {
                        rbx_3 = rax_48;
                    }
                    
                    rax_48 = rbx_3 > 0;
                    rax_48 -= rbx_3 < 0;
                }
                
                rcx_7 = rax_48;
                rax_48 = -(rax_48);
                result = rax_48;
                cond:7 = *r9.byte_offset(0x82) == 0;
                break;
            }
            
            let mut rax_16: i8;
            let mut rdx_13: *mut i8;
            let mut rbp_1: *mut c_void;
            let mut r10_1: u64;
            let mut r12_2: u64;
            
            if *r15_2.byte_offset(0x37) == 0
            {
                rdx_13 = *arg2;
                r10_1 = arg2[1];
                rbp_1 = *arg1;
                r12_2 = arg1[1];
                let mut var_108: *mut i8;
                let mut var_b0: *mut c_void;
                
                match *r15_2.byte_offset(0x35)
                {
                    0 =>
                    {
                        'label_4d5e35:
                        let rdi_8: i64 = r11_1 + rsi_8;
                        
                        if rdi_8 >= rax_12
                        {
                            core::panicking::panic_bounds_check::h025cadc56a971af7(rdi_8, rax_12);
                            /* no return */
                        }
                        
                        let rax_32: i64 = rax_6 + rsi_8;
                        
                        if rax_32 >= rax_7
                        {
                            core::panicking::panic_bounds_check::h025cadc56a971af7(rax_32, rax_7);
                            /* no return */
                        }
                        
                        var_b0 = rbp_1;
                        let var_a8_1: u64 = r12_2;
                        let var_a0_1: i64 = (rdi_8 << 4) + rax_13;
                        var_108 = rdx_13;
                        let var_100_1: u64 = r10_1;
                        let var_f8_1: i64 = (rax_32 << 4) + rax_8;
                        rax_16 = uu_sort::numeric_str_cmp::numeric_str_cmp::h793f6b597e9f6768(
                            &var_b0, &var_108);
                        rsi_8 += 1;
                        
                        if rax_16 == 0
                        {
                            continue;
                        }
                    }
                    1 =>
                    {
                        'label_4d5f64:
                        let rdi_16: i64 = r11_1 + rsi_8;
                        
                        if rdi_16 >= rax_12
                        {
                            core::panicking::panic_bounds_check::h025cadc56a971af7(rdi_16, rax_12);
                            /* no return */
                        }
                        
                        let rax_41: i64 = rax_6 + rsi_8;
                        
                        if rax_41 >= rax_7
                        {
                            core::panicking::panic_bounds_check::h025cadc56a971af7(rax_41, rax_7);
                            /* no return */
                        }
                        
                        var_b0 = rbp_1;
                        let var_a8_2: u64 = r12_2;
                        let var_a0_2: i64 = (rdi_16 << 4) + rax_13;
                        var_108 = rdx_13;
                        let var_100_2: u64 = r10_1;
                        let var_f8_2: i64 = (rax_41 << 4) + rax_8;
                        rax_16 = uu_sort::numeric_str_cmp::human_numeric_str_cmp::h31e63d2dd2fe0266(
                            &var_b0, &var_108);
                        rsi_8 += 1;
                        
                        if rax_16 == 0
                        {
                            continue;
                        }
                    }
                    2 =>
                    {
                        'label_4d5ec4:
                        let rdi_12: i64 = rdx_9 * r11 + r13_2;
                        
                        if rdi_12 >= rax_10
                        {
                            core::panicking::panic_bounds_check::h025cadc56a971af7(rdi_12, rax_10);
                            /* no return */
                        }
                        
                        let rax_37: i64 = rdx_9 * rbx + r13_2;
                        
                        if rax_37 >= rdx_11
                        {
                            core::panicking::panic_bounds_check::h025cadc56a971af7(rax_37, rdx_11);
                            /* no return */
                        }
                        
                        let rdi_13: i64 = rdi_12 << 4;
                        let rax_38: i64 = rax_37 << 4;
                        r13_2 += 1;
                        rax_16 = uu_sort::general_numeric_compare::hc44acf983cdd147b(
                            *rax_11.byte_offset(rdi_13), *rdx_12.byte_offset(rax_38), 
                            *rax_11.byte_offset(rdi_13).byte_offset(8), 
                            *rdx_12.byte_offset(rax_38).byte_offset(8));
                        
                        if rax_16 == 0
                        {
                            continue;
                        }
                    }
                    3 =>
                    {
                        'label_4d5f45:
                        rax_16 = uu_sort::month_compare::hf05b083267e3ccf7();
                        
                        if rax_16 == 0
                        {
                            continue;
                        }
                    }
                    4 =>
                    {
                        'label_4d5d40:
                        rax_16 = uucore::features::version_cmp::version_cmp::h3f4d5bf5dba36ae1(
                            rbp_1, r12_2, rdx_13, r10_1);
                        
                        if rax_16 == 0
                        {
                            continue;
                        }
                    }
                    5 =>
                    {
                        'label_4d601b:
                        
                        if uu_sort::custom_str_cmp::custom_str_cmp::hb6ac3eaeb381e23b(rbp_1, r12_2, 
                            rdx_13, r10_1, *r15_2.byte_offset(0x33), *r15_2.byte_offset(0x32), 
                            *r15_2.byte_offset(0x31)) == 0
                        {
                            rax_16 = 0;
                            continue;
                        }
                        else
                        {
                            if (rax_14 & 1) == 0
                            {
                                core::option::unwrap_failed::h893f57cb7db71cb7();
                                /* no return */
                            }
                            
                            var_108 = *r9.byte_offset(0x88);
                            rax_16 = uu_sort::random_shuffle::h8f5479ff6f6d004b(rbp_1, r12_2, 
                                rdx_13, r10_1, &var_108);
                            
                            if rax_16 == 0
                            {
                                continue;
                            }
                        }
                    }
                    6 =>
                    {
                        'label_4d6094:
                        rax_16 = uu_sort::custom_str_cmp::custom_str_cmp::hb6ac3eaeb381e23b(rbp_1, 
                            r12_2, rdx_13, r10_1, *r15_2.byte_offset(0x33), 
                            *r15_2.byte_offset(0x32), *r15_2.byte_offset(0x31));
                        
                        if rax_16 == 0
                        {
                            continue;
                        }
                    }
                }
            }
            else
            {
                let rdi_5: i64 = rdx_5 * r11 + rbx_1;
                
                if rdi_5 >= rax_9
                {
                    core::panicking::panic_bounds_check::h025cadc56a971af7(rdi_5, rax_9);
                    /* no return */
                }
                
                let rax_19: i64 = rdx_5 * rbx + rbx_1;
                
                if rax_19 >= rdx_8
                {
                    core::panicking::panic_bounds_check::h025cadc56a971af7(rax_19, rdx_8);
                    /* no return */
                }
                
                let rdi_7: *mut *mut c_void = (rdi_5 << 4) + rsi_5;
                let rax_21: *mut *mut i8 = (rax_19 << 4) + rdx_7;
                rbx_1 += 1;
                rdx_13 = *rax_21;
                r10_1 = rax_21[1];
                rbp_1 = *rdi_7;
                r12_2 = rdi_7[1];
                
                match *r15_2.byte_offset(0x35)
                {
                    0 =>
                    {
                        goto 'label_4d5e35;
                    }
                    1 =>
                    {
                        goto 'label_4d5f64;
                    }
                    2 =>
                    {
                        goto 'label_4d5ec4;
                    }
                    3 =>
                    {
                        goto 'label_4d5f45;
                    }
                    4 =>
                    {
                        goto 'label_4d5d40;
                    }
                    5 =>
                    {
                        goto 'label_4d601b;
                    }
                    6 =>
                    {
                        goto 'label_4d6094;
                    }
                }
            }
            rcx_7 = rax_16;
            result = -(rax_16);
            cond:7 = *r15_2.byte_offset(0x34) == 0;
            break;
        }
    }
    else
    {
        let rdx: *mut i32 = *arg4.byte_offset(0x50);
        let rsi_1: i64 = r11 << 4;
        
        if *rdx.byte_offset(rsi_1) != 1 || *rax != 1
        {
            goto 'label_4d5c1d;
        }
        
        let zmm0: u128 = *rdx.byte_offset(rsi_1).byte_offset(8);
        let zmm1: f64 = *rax.byte_offset(8);
        
        if !(zmm1 >= zmm0)
        {
            rax = 1;
            
            if zmm0 >= zmm1
            {
                goto 'label_4d5c08;
            }
            
            goto 'label_4d5c1d;
        }
        
        rax = 0xff;
        
        if zmm0 < zmm1
        {
            goto 'label_4d5c08;
        }
        
        if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hf24dc1420a1402d1(*arg1, arg1[1], *arg2, arg2[1]) == 0
        {
            goto 'label_4d5c1d;
        }
        
        rax = nullptr;
        'label_4d5c08:
        rcx_7 = rax;
        rax = -(rax);
        result = rax;
        cond:7 = *r9.byte_offset(0x82) == 0;
    }
    
    if cond:7
    {
        return rcx_7;
    }
    
    result
}
