
  fn uu_sort::compare_by::h54103d56e12edacd(arg1: *mut i64, arg2: *mut i64, arg3: *mut c_void, arg4: *mut c_void, arg5: *mut c_void) -> u64

{
    let rax: i64 = *arg3.byte_offset(8);
    let mut var_40: i64 = rax;
    let var_38: i64 = *arg3.byte_offset(0x10) * 0x38 + rax;
    let rdi: i64 = arg1[2];
    let r9_2: i64 = *arg3.byte_offset(0x58);
    let rax_1: i64 = arg2[2];
    let rsi_2: i64 = *arg5.byte_offset(8);
    let rsi_3: i64 = *arg5.byte_offset(0x10);
    let rsi_4: i64 = *arg3.byte_offset(0x48);
    let r9_4: i64 = *arg3.byte_offset(0x50);
    let r9_6: i64 = *arg5.byte_offset(0x40);
    let rdi_1: i64 = rdi * rsi_4;
    let rsi_5: i64 = rsi_4 * rax_1;
    let rax_2: *mut i64 = *arg5.byte_offset(0x38);
    let rax_3: i64 = *arg5.byte_offset(0x28);
    let rax_4: i64 = *arg5.byte_offset(0x20);
    let rax_5: i64 = *arg4.byte_offset(8);
    let rax_6: i64 = *arg4.byte_offset(0x10);
    let rax_7: i64 = *arg4.byte_offset(0x40);
    let rax_8: *mut i64 = *arg4.byte_offset(0x38);
    let rax_9: i64 = *arg4.byte_offset(0x28);
    let rax_10: i64 = *arg4.byte_offset(0x20);
    let rax_11: i8 = *arg3.byte_offset(0x87);
    let mut r15: i64 = 0;
    let mut var_120: i64 = 0;
    let mut var_e0: i64 = 0;
    let mut result: u64;
    
    loop
    {
        let rax_13: *mut c_void = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h1dc45998b69df0a3(&var_40);
        
        if rax_13 == 0
        {
            let mut rax_45: i8 = 0;
            
            if *arg3.byte_offset(0x98) != 5 && *arg3.byte_offset(0x83) == 0
                && *arg3.byte_offset(0x84) == 0
            {
                let rax_47: u64 = arg1[1];
                let mut rdx_8: u64 = arg2[1];
                let mut rbx_3: i64 = rax_47 - rdx_8;
                
                if rax_47 < rdx_8
                {
                    rdx_8 = rax_47;
                }
                
                let rax_49: i64 = memcmp(*arg1, *arg2, rdx_8);
                
                if rax_49 != 0
                {
                    rbx_3 = rax_49;
                }
                
                rax_45 = -1;
                
                if rbx_3 >= 0
                {
                    rax_45 = rbx_3 != 0;
                }
            }
            
            result = -(rax_45);
            
            if *arg3.byte_offset(0x82) == 0
            {
                return rax_45;
            }
            
            break;
        }
        
        let mut rax_32: i8;
        let mut rbp_1: u64;
        let mut r12_1: *mut i8;
        let mut r13_1: u64;
        let mut r14_1: *mut c_void;
        
        if *rax_13.byte_offset(0x37) == 0
        {
            r12_1 = *arg2;
            r13_1 = arg2[1];
            r14_1 = *arg1;
            rbp_1 = arg1[1];
            let mut var_118: *mut i8;
            let mut var_a8: *mut c_void;
            let mut rax_29: i64;
            
            match *rax_13.byte_offset(0x35)
            {
                0 =>
                {
                    'label_523e0c:
                    let rdi_6: i64 = var_120 + rdi_1;
                    
                    if rdi_6 >= rax_9
                    {
                        core::panicking::panic_bounds_check::h25a5330941572dd1(rdi_6, rax_9);
                        /* no return */
                    }
                    
                    rax_29 = rsi_5 + var_120;
                    
                    if rax_29 >= rax_3
                    {
                        core::panicking::panic_bounds_check::h25a5330941572dd1(rax_29, rax_3);
                        /* no return */
                    }
                    
                    var_120 += 1;
                    var_a8 = r14_1;
                    let var_a0_1: u64 = rbp_1;
                    let var_98_1: i64 = (rdi_6 << 4) + rax_10;
                    var_118 = r12_1;
                    let var_110_1: u64 = r13_1;
                    let var_108_1: i64 = (rax_29 << 4) + rax_4;
                    rax_32 = uu_sort::numeric_str_cmp::numeric_str_cmp::h462d5662bf6f9278(&var_a8, 
                        &var_118);
                }
                1 =>
                {
                    'label_523f30:
                    let rdi_15: i64 = var_120 + rdi_1;
                    
                    if rdi_15 >= rax_9
                    {
                        core::panicking::panic_bounds_check::h25a5330941572dd1(rdi_15, rax_9);
                        /* no return */
                    }
                    
                    rax_29 = rsi_5 + var_120;
                    
                    if rax_29 >= rax_3
                    {
                        core::panicking::panic_bounds_check::h25a5330941572dd1(rax_29, rax_3);
                        /* no return */
                    }
                    
                    var_120 += 1;
                    var_a8 = r14_1;
                    let var_a0_2: u64 = rbp_1;
                    let var_98_2: i64 = (rdi_15 << 4) + rax_10;
                    var_118 = r12_1;
                    let var_110_2: u64 = r13_1;
                    let var_108_2: i64 = (rax_29 << 4) + rax_4;
                    rax_32 = uu_sort::numeric_str_cmp::human_numeric_str_cmp::h66afeed8410636b1(
                        &var_a8, &var_118);
                }
                2 =>
                {
                    'label_523eaa:
                    let rdi_11: i64 = var_e0 + r9_4 * rdi;
                    
                    if rdi_11 >= rax_7
                    {
                        core::panicking::panic_bounds_check::h25a5330941572dd1(rdi_11, rax_7);
                        /* no return */
                    }
                    
                    let rax_35: i64 = r9_4 * rax_1 + var_e0;
                    
                    if rax_35 >= r9_6
                    {
                        core::panicking::panic_bounds_check::h25a5330941572dd1(rax_35, r9_6);
                        /* no return */
                    }
                    
                    let rdi_12: i64 = rdi_11 << 4;
                    let rax_36: i64 = rax_35 << 4;
                    var_e0 += 1;
                    rax_32 = uu_sort::general_numeric_compare::h7d236c8039d2ef1a(
                        *rax_8.byte_offset(rdi_12), *rax_2.byte_offset(rax_36), 
                        *rax_8.byte_offset(rdi_12).byte_offset(8), 
                        *rax_2.byte_offset(rax_36).byte_offset(8));
                }
                3 =>
                {
                    rax_32 = uu_sort::month_compare::h2ae5044cf495110c(r14_1, rbp_1, r12_1);
                }
                4 =>
                {
                    rax_32 = uucore::features::version_cmp::version_cmp::ha6b4e24b6f04c4b3(r14_1, 
                        rbp_1, r12_1, r13_1);
                }
                5 =>
                {
                    'label_523fc7:
                    
                    if uu_sort::custom_str_cmp::custom_str_cmp::h4737421826ca2422(r14_1, rbp_1, 
                        r12_1, r13_1, *rax_13.byte_offset(0x33), *rax_13.byte_offset(0x32), 
                        *rax_13.byte_offset(0x31)) == 0
                    {
                        rax_32 = 0;
                        continue;
                    }
                    else
                    {
                        if (rax_11 & 1) == 0
                        {
                            core::option::unwrap_failed::h0e11329e76906eaa();
                            /* no return */
                        }
                        
                        var_118 = *arg3.byte_offset(0x88);
                        rax_32 = uu_sort::random_shuffle::h0c00964e3c9491f0(r14_1, rbp_1, r12_1, 
                            r13_1, &var_118);
                    }
                }
                6 =>
                {
                    rax_32 = uu_sort::custom_str_cmp::custom_str_cmp::h4737421826ca2422(r14_1, 
                        rbp_1, r12_1, r13_1, *rax_13.byte_offset(0x33), *rax_13.byte_offset(0x32), 
                        *rax_13.byte_offset(0x31));
                }
            }
        }
        else
        {
            let rdi_3: i64 = r15 + r9_2 * rdi;
            
            if rdi_3 >= rax_6
            {
                core::panicking::panic_bounds_check::h25a5330941572dd1(rdi_3, rax_6);
                /* no return */
            }
            
            let rax_16: i64 = rax_1 * r9_2 + r15;
            
            if rax_16 >= rsi_3
            {
                core::panicking::panic_bounds_check::h25a5330941572dd1(rax_16, rsi_3);
                /* no return */
            }
            
            let rdi_5: *mut i64 = (rdi_3 << 4) + rax_5;
            let rax_18: *mut i64 = (rax_16 << 4) + rsi_2;
            r15 += 1;
            r12_1 = *rax_18;
            r13_1 = rax_18[1];
            r14_1 = *rdi_5;
            rbp_1 = rdi_5[1];
            
            match *rax_13.byte_offset(0x35)
            {
                0 =>
                {
                    goto 'label_523e0c;
                }
                1 =>
                {
                    goto 'label_523f30;
                }
                2 =>
                {
                    goto 'label_523eaa;
                }
                3 =>
                {
                    rax_32 = uu_sort::month_compare::h2ae5044cf495110c(r14_1, rbp_1, r12_1);
                }
                4 =>
                {
                    rax_32 = uucore::features::version_cmp::version_cmp::ha6b4e24b6f04c4b3(r14_1, 
                        rbp_1, r12_1, r13_1);
                }
                5 =>
                {
                    goto 'label_523fc7;
                }
                6 =>
                {
                    rax_32 = uu_sort::custom_str_cmp::custom_str_cmp::h4737421826ca2422(r14_1, 
                        rbp_1, r12_1, r13_1, *rax_13.byte_offset(0x33), *rax_13.byte_offset(0x32), 
                        *rax_13.byte_offset(0x31));
                }
            }
        }
        
        if rax_32 != 0
        {
            result = -((rax_32 != 0xff)) | 1;
            
            if *rax_13.byte_offset(0x34) == 0
            {
                return rax_32;
            }
            
            break;
        }
    }
    
    result
}
