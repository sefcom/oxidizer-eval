
  fn uu_touch::touch::h8e2a06923358d7c5(arg1: *mut i64, arg2: *mut i128, arg3: i64, arg4: *mut i64) -> *mut i64

{
    let mut r8: *mut i64 = arg4;
    let rcx: i64 = arg4[3];
    let mut rax: i64 = 0;
    
    if rcx < -0x7ffffffffffffffe
    {
        rax = rcx - 0x7fffffffffffffff;
    }
    
    let var_158: *mut i64 = r8;
    let mut var_168_1: u64;
    let mut var_150: i64;
    let mut var_120_1: *mut i128;
    let mut r12: u64;
    let mut r14: *mut i128;
    let mut r15: *mut i128;
    
    if rax != 0
    {
        var_120_1 = arg2;
        let mut rax_1: u64;
        
        if rax != 1
        {
            chrono::offset::local::Local::now::ha82adb6e05d16f38(&var_150);
            let mut rax_3: *mut i128;
            let mut rdx_2: i32;
            rax_3 = uu_touch::datetime_to_filetime::hee2fe932dd2f3a25(&var_150);
            r8 = var_158;
            r15 = rax_3;
            r12 = rdx_2;
            r14 = rax_3;
            rax_1 = rdx_2;
        }
        else
        {
            r15 = r8[4];
            r12 = r8[5];
            r14 = r15;
            rax_1 = r12;
        }
        
        var_168_1 = rax_1;
        goto 'label_5c25ac;
    }
    
    let r13_1: *mut i128 = arg2;
    let mut rcx_2: i32;
    rcx_2 = *r8.byte_offset(0x31) == 0;
    let mut var_118: i64;
    arg2 = uu_touch::stat::haa73667d17037b3b(&var_118, r8[4], r8[5], rcx_2);
    let var_148: *mut i128;
    let var_140: *mut i64;
    let var_138: *mut i128;
    let var_130: u64;
    let var_128: i64;
    let var_110: *mut i128;
    
    if var_118 == 0
    {
        var_120_1 = r13_1;
        r15 = var_110;
        let mut var_108: i32;
        r12 = var_108;
        let mut var_f8: i32;
        var_168_1 = var_f8;
        let var_100: *mut i128;
        r14 = var_100;
        'label_5c25ac:
        
        if *r8 == -0x8000000000000000
        {
            goto 'label_5c25cf;
        }
        
        uu_touch::filetime_to_datetime::h118b2d8253ee418f(&var_118);
        
        if var_118 == 0
        {
            *arg1 = -0x7fffffffffffffff;
            arg1[1] = r15;
            arg1[2] = r12;
        }
        else
        {
            let mut var_50: i128 = var_118;
            let rdx_11: *mut i8 = var_158[1];
            let rcx_9: u64 = var_158[2];
            uu_touch::parse_date::h59fdcf28d83a7f45(&var_150, &var_50, rdx_11, rcx_9);
            let rax_13: i64 = var_150;
            r15 = var_148;
            r12 = var_140;
            
            if rax_13 != -0x7ffffffffffffffc
            {
                *arg1.byte_offset(0x20) = var_130;
                *arg1.byte_offset(0x14) = *var_140[4];
                *arg1 = rax_13;
                arg1[1] = r15;
                arg1[2] = r12;
            }
            else
            {
                uu_touch::filetime_to_datetime::h118b2d8253ee418f(&var_118);
                
                if var_118 == 0
                {
                    *arg1 = -0x7fffffffffffffff;
                    arg1[1] = r14;
                    arg1[2] = var_168_1;
                }
                else
                {
                    let mut var_40: i128 = var_118;
                    arg2 =
                        uu_touch::parse_date::h59fdcf28d83a7f45(&var_150, &var_40, rdx_11, rcx_9);
                    let rax_14: i64 = var_150;
                    r14 = var_148;
                    let rcx_11: u64 = var_140;
                    
                    if rax_14 != -0x7ffffffffffffffc
                    {
                        *arg1.byte_offset(0x20) = var_130;
                        *arg1.byte_offset(0x14) = *var_140[4];
                        *arg1 = rax_14;
                        arg1[1] = r14;
                        arg1[2] = rcx_11;
                    }
                    else
                    {
                        var_168_1 = rcx_11;
                        'label_5c25cf:
                        let mut var_90: *mut i128 = var_120_1;
                        let var_88_1: *mut c_void = var_120_1.byte_offset(arg3 * 0x18);
                        let var_80_1: i64 = 0;
                        
                        loop
                        {
                            let mut rax_7: i64;
                            let mut rdx_3: *mut i64;
                            rax_7 = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h549ada4c33c82e7d(&var_90);
                            
                            if rdx_3 == 0
                            {
                                *arg1 = -0x7ffffffffffffffc;
                                break;
                            }
                            
                            let rbp_1: *mut i128 = r14;
                            let r12_1: *mut i128 = r15;
                            let mut var_c0: i64 = rax_7;
                            let r15_1: i64 = *rdx_3;
                            let mut rcx_5: *mut i128 = -0x8000000000000000;
                            
                            if r15_1 == -0x8000000000000000
                            {
                                uu_touch::pathbuf_from_stdout::h2920ee1b816c3101(&var_150);
                                let rax_8: i64 = var_150;
                                rcx_5 = var_148;
                                rdx_3 = var_140;
                                arg2 = var_138;
                                
                                if rax_8 != -0x7ffffffffffffffc
                                {
                                    *arg1.byte_offset(0x20) = var_130;
                                    *arg1 = rax_8;
                                    arg1[1] = rcx_5;
                                    arg1[2] = rdx_3;
                                    arg1[3] = arg2;
                                    break;
                                }
                            }
                            
                            let mut rax_9: i32;
                            rax_9 = r15_1 == -0x8000000000000000;
                            let mut var_e8: *mut i128 = rcx_5;
                            let var_e0_1: *mut i64 = rdx_3;
                            
                            if rcx_5 != -0x8000000000000000
                            {
                                rdx_3 = &var_e8;
                            }
                            
                            r15 = r12_1;
                            r14 = rbp_1;
                            let mut rax_10: *mut i128;
                            let mut rdx_5: i64;
                            rax_10 = uu_touch::touch_file::h877dc0441f137307(rdx_3[1], rdx_3[2], 
                                rax_9, var_158, r12_1, r12, rbp_1, var_168_1);
                            let mut var_b8: i128 = var_e8;
                            
                            if rax_10 == 0
                            {
                                arg2 = core::ptr::drop_in_place$LT$uu_touch..touch..$u7b$$u7b$closure$u7d$$u7d$$GT$::hc5b9fab259fe0862(&var_b8);
                            }
                            else
                            {
                                let var_68_1: *mut i128 = arg2;
                                let var_60_1: *mut i64 = &var_c0;
                                let mut var_78: i128 = var_b8;
                                arg2 = uu_touch::touch::_$u7b$$u7b$closure$u7d$$u7d$::hf4c84b0974a1c31b(&var_150, &var_78, rax_10, rdx_5);
                                let rax_11: i64 = var_150;
                                var_118 = var_148;
                                var_108 = var_138;
                                var_f8 = var_128;
                                
                                if rax_11 != -0x7ffffffffffffffc
                                {
                                    arg1[5] = var_f8;
                                    let zmm0_4: i128 = var_118;
                                    *arg1.byte_offset(0x18) = var_108;
                                    *arg1.byte_offset(8) = zmm0_4;
                                    *arg1 = rax_11;
                                    break;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    else
    {
        arg2 = uu_touch::touch::_$u7b$$u7b$closure$u7d$$u7d$::hdd400a1e630fbbb5(&var_150, &r8[3], 
            var_110);
        let rax_2: i64 = var_150;
        r15 = var_148;
        r12 = var_140;
        r14 = var_138;
        
        if rax_2 == -0x7ffffffffffffffc
        {
            var_120_1 = r13_1;
            var_168_1 = var_130;
            r8 = var_158;
            goto 'label_5c25ac;
        }
        
        *arg1 = rax_2;
        arg1[1] = r15;
        arg1[2] = r12;
        arg1[3] = r14;
        arg1[4] = var_130;
        arg1[5] = var_128;
    }
    arg1
}
