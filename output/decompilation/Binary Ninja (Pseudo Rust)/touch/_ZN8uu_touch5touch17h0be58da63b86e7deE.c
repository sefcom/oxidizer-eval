
  fn uu_touch::touch::h0be58da63b86e7de(arg1: *mut i64, arg2: i64, arg3: i64, arg4: *mut i64) -> *mut i64

{
    let mut r14: u64;
    let var_18: u64 = r14;
    let mut rbp: *mut i64 = arg4;
    let rcx: i64 = arg4[3];
    let mut rax: i64 = 0;
    
    if rcx < -0x7ffffffffffffffe
    {
        rax = rcx - 0x7fffffffffffffff;
    }
    
    let mut var_110: i64;
    let mut rax_1: i32;
    let mut rdx: i32;
    let mut rbx: u64;
    let mut r15: u64;
    
    if rax != 0
    {
        if rax != 1
        {
            chrono::offset::local::Local::now::hd3cc0dab6e1d709b(&var_110);
            let mut rax_2: u64;
            rax_2 = uu_touch::datetime_to_filetime::h5b8a0eb5c393ab6a(&var_110);
            r15 = rax_2;
            rbx = rax_2;
            rax_1 = rdx;
        }
        else
        {
            r15 = rbp[4];
            rdx = rbp[5];
            rbx = r15;
            rax_1 = rdx;
        }
        
        goto 'label_539a43;
    }
    
    let rbx_1: i64 = rbp[4];
    let r15_1: u64 = rbp[5];
    let mut var_d8: i8;
    uu_touch::stat::hbfae00cfffe9133b(&var_d8, rbx_1, r15_1, *rbp.byte_offset(0x31) ^ 1);
    let mut rax_9: *mut i64;
    let var_108: u64;
    let i_1: *mut i64;
    let var_f8: u64;
    let var_f0: i64;
    let var_e8: i64;
    let var_d0: u64;
    
    if (var_d8 & 1) == 0
    {
        r15 = var_d0;
        let mut var_c8: i32;
        rdx = var_c8;
        let var_c0: u64;
        rbx = var_c0;
        let mut var_b8: i32;
        rax_1 = var_b8;
        'label_539a43:
        let mut var_120_1: i32 = rax_1;
        let var_a0_1: u64 = -0x8000000000000000;
        let mut var_114_1: i32;
        let mut var_a8_1: i32;
        
        if *rbp != -0x8000000000000000
        {
            uu_touch::filetime_to_datetime::h915ff47696d18514(&var_d8, r15, rdx);
            
            if var_d8 == 0
            {
                rax_9 = arg1;
                *rax_9 = -0x7fffffffffffffff;
                rax_9[1] = r15;
                rax_9[2] = rdx;
            }
            else
            {
                r14 = rbx;
                let mut var_50: i128 = var_d8;
                let rbx_3: *mut i8 = rbp[1];
                let r12_1: *mut c_void = rbp[2];
                uu_touch::parse_date::hc2f6ff83abb54cd3(&var_110, &var_50, rbx_3, r12_1);
                let rcx_12: i64 = var_110;
                r15 = var_108;
                let rdx_9: i32 = i_1;
                
                if rcx_12 != -0x7ffffffffffffffc
                {
                    rax_9 = arg1;
                    *rax_9.byte_offset(0x20) = var_f0;
                    *rax_9.byte_offset(0x14) = *i_1[4];
                    *rax_9 = rcx_12;
                    rax_9[1] = r15;
                    rax_9[2] = rdx_9;
                }
                else
                {
                    var_114_1 = rdx_9;
                    uu_touch::filetime_to_datetime::h915ff47696d18514(&var_d8, r14, var_120_1);
                    
                    if var_d8 == 0
                    {
                        rax_9 = arg1;
                        *rax_9 = -0x7fffffffffffffff;
                        rax_9[1] = r14;
                        rax_9[2] = var_120_1;
                    }
                    else
                    {
                        let mut var_40: i128 = var_d8;
                        uu_touch::parse_date::hc2f6ff83abb54cd3(&var_110, &var_40, rbx_3, r12_1);
                        let rcx_14: i64 = var_110;
                        let rsi_9: i32 = i_1;
                        
                        if rcx_14 == -0x7ffffffffffffffc
                        {
                            var_120_1 = rsi_9;
                            var_a8_1 = var_108;
                            goto 'label_539a83;
                        }
                        
                        rax_9 = arg1;
                        *rax_9.byte_offset(0x20) = var_f0;
                        *rax_9.byte_offset(0x14) = *i_1[4];
                        *rax_9 = rcx_14;
                        rax_9[1] = var_108;
                        rax_9[2] = rsi_9;
                    }
                }
            }
        }
        else
        {
            var_114_1 = rdx;
            var_a8_1 = rbx;
            'label_539a83:
            let mut var_88: i64 = arg2;
            let var_80_1: i64 = arg3 * 0x18 + arg2;
            let var_78_1: i64 = 0;
            let mut rax_6: i64;
            let mut i: *mut i64;
            rax_6 = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h37160c8aca5e383f(&var_88);
            
            if i != 0
            {
                let var_e0_1: i32 = r15;
                
                do
                {
                    let r15_2: *mut i64 = rbp;
                    let mut var_90: i64 = rax_6;
                    let rbp_1: i64 = *i;
                    let mut rcx_5: u64 = var_a0_1;
                    let mut rbx_2: u64;
                    let mut rsi_3: u64;
                    let mut i_2: *mut i64;
                    let mut i_3: *mut i64;
                    
                    if rbp_1 != rcx_5
                    {
                        'label_539b50:
                        i_2 = i;
                        i_3 = i;
                        i = i[1];
                        rsi_3 = i_2[2];
                        rbx_2 = rcx_5;
                    }
                    else
                    {
                        uu_touch::pathbuf_from_stdout::h2fc16d9e8e8ab5c3(&var_110);
                        let rcx_6: i64 = var_110;
                        rbx_2 = var_108;
                        i = i_1;
                        r14 = var_f8;
                        
                        if rcx_6 != -0x7ffffffffffffffc
                        {
                            *arg1.byte_offset(0x20) = var_f0;
                            *arg1 = rcx_6;
                            arg1[1] = rbx_2;
                            arg1[2] = i;
                            arg1[3] = r14;
                            return arg1;
                        }
                        
                        i_2 = i;
                        i_3 = i;
                        rsi_3 = r14;
                        rcx_5 = var_a0_1;
                        
                        if rbx_2 == rcx_5
                        {
                            goto 'label_539b50;
                        }
                    }
                    
                    let mut rax_7: i32;
                    rax_7 = rbp_1 == rcx_5;
                    rbp = r15_2;
                    let mut rax_8: u64;
                    let mut rdx_5: i64;
                    rax_8 = uu_touch::touch_file::h545e8affe65c7ac6(i, rsi_3, rax_7, r15_2, 
                        var_e0_1, var_114_1, var_a8_1, var_120_1);
                    
                    if rax_8 == 0
                    {
                        core::ptr::drop_in_place$LT$uu_touch..touch..$u7b$$u7b$closure$u7d$$u7d$$GT$::h6199e6bd15be6263(rbx_2, i_2);
                    }
                    else
                    {
                        let mut var_70: u64 = rbx_2;
                        let i_4: *mut i64 = i_3;
                        let var_60_1: u64 = r14;
                        let var_58_1: *mut i64 = &var_90;
                        uu_touch::touch::_$u7b$$u7b$closure$u7d$$u7d$::hf7522ea3725909fa(&var_110, 
                            &var_70, rax_8, rdx_5);
                        let rdx_7: i64 = var_110;
                        var_d8 = var_108;
                        var_c8 = var_f8;
                        var_b8 = var_e8;
                        
                        if rdx_7 != -0x7ffffffffffffffc
                        {
                            arg1[5] = var_b8;
                            let zmm0_3: i128 = var_d8;
                            *arg1.byte_offset(0x18) = var_c8;
                            *arg1.byte_offset(8) = zmm0_3;
                            *arg1 = rdx_7;
                            return arg1;
                        }
                    }
                    
                    rax_6 = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h37160c8aca5e383f(&var_88);
                } while i != 0;
            }
            
            rax_9 = arg1;
            *rax_9 = -0x7ffffffffffffffc;
        }
    }
    else
    {
        uu_touch::touch::_$u7b$$u7b$closure$u7d$$u7d$::ha077cb7010bb6923(&var_110, rbx_1, r15_1, 
            var_d0);
        let rdx_3: i64 = var_110;
        r15 = var_108;
        rbx = var_f8;
        
        if rdx_3 == -0x7ffffffffffffffc
        {
            rdx = i_1;
            rax_1 = var_f0;
            goto 'label_539a43;
        }
        
        rax_9 = arg1;
        *rax_9 = rdx_3;
        rax_9[1] = r15;
        rax_9[2] = i_1;
        rax_9[3] = rbx;
        rax_9[4] = var_f0;
        rax_9[5] = var_e8;
    }
    rax_9
}
