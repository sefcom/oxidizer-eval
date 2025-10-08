
  fn alacritty::display::color::List::fill_cube::h64a4cfdbab219b7a(arg1: i64, arg2: i64, arg3: i64) -> i64

{
    let mut r14: i64;
    let var_18: i64 = r14;
    let mut result_1: i64 = 0x10;
    let rax: i64 = arg2 + (arg3 << 2);
    let mut rbx: i64 = 0x10;
    let mut rcx: i64 = 0;
    let mut result: i64;
    
    loop
    {
        let rax_1: u64 = rcx;
        rcx += 1;
        let mut rcx_3: u8 = (rax_1 << 3) * 5 + 0x37;
        
        if rax_1 == 0
        {
            rcx_3 = 0;
        }
        
        let mut r12_2: *mut c_void = (rbx * 3).byte_offset(arg1 + 0x11);
        r14 = 0x37;
        let mut r13_1: i64 = 0;
        
        loop
        {
            let mut rbp_1: i64 = rbx + r13_1;
            let mut r15_1: i8 = r14;
            
            if r13_1 == 0
            {
                r15_1 = 0;
            }
            
            let mut var_60: i64 = arg2;
            let var_58_1: i64 = rax;
            let rax_6: *mut i16 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::find::h8c35254da18dacbe(&var_60, &result_1);
            
            if rax_6 == 0
            {
                if rbp_1 >= 0x10d
                {
                    core::panicking::panic_bounds_check::h025cadc56a971af7(rbx + r13_1, 0x10d);
                    /* no return */
                }
                
                *r12_2.byte_offset(-0x11) = rcx_3;
                *r12_2.byte_offset(-0x10) = r15_1;
                *r12_2.byte_offset(-0xf) = 0;
                goto 'label_845568;
            }
            
            if rbp_1 < 0x10d
            {
                *r12_2.byte_offset(-0xf) = rax_6[1];
                *r12_2.byte_offset(-0x11) = *rax_6;
                'label_845568:
                result_1 = rbx + r13_1 + 1;
                var_60 = arg2;
                let var_58_2: i64 = rax;
                let rax_13: *mut i16 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::find::h8c35254da18dacbe(&var_60, &result_1);
                
                if rax_13 == 0
                {
                    if rbp_1 > 0x10b
                    {
                        core::panicking::panic_bounds_check::h025cadc56a971af7(0x10d, 0x10d);
                        /* no return */
                    }
                    
                    *r12_2.byte_offset(-0xe) = rcx_3;
                    *r12_2.byte_offset(-0xd) = r15_1;
                    *r12_2.byte_offset(-0xc) = 0x5f;
                    'label_8455e9:
                    result_1 = rbx + r13_1 + 2;
                    var_60 = arg2;
                    let var_58_3: i64 = rax;
                    let rax_20: *mut i16 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::find::h8c35254da18dacbe(&var_60, &result_1);
                    
                    if rax_20 == 0
                    {
                        if rbp_1 > 0x10a
                        {
                            core::panicking::panic_bounds_check::h025cadc56a971af7(0x10d, 0x10d);
                            /* no return */
                        }
                        
                        *r12_2.byte_offset(-0xb) = rcx_3;
                        *r12_2.byte_offset(-0xa) = r15_1;
                        *r12_2.byte_offset(-9) = 0x87;
                        'label_845669:
                        result_1 = rbx + r13_1 + 3;
                        var_60 = arg2;
                        let var_58_4: i64 = rax;
                        let rax_27: *mut i16 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::find::h8c35254da18dacbe(&var_60, &result_1);
                        
                        if rax_27 == 0
                        {
                            if rbp_1 > 0x109
                            {
                                core::panicking::panic_bounds_check::h025cadc56a971af7(0x10d, 
                                    0x10d);
                                /* no return */
                            }
                            
                            *r12_2.byte_offset(-8) = rcx_3;
                            *r12_2.byte_offset(-7) = r15_1;
                            *r12_2.byte_offset(-6) = 0xaf;
                            'label_8456e9:
                            result_1 = rbx + r13_1 + 4;
                            var_60 = arg2;
                            let var_58_5: i64 = rax;
                            let rax_34: *mut i16 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::find::h8c35254da18dacbe(&var_60, &result_1);
                            
                            if rax_34 == 0
                            {
                                if rbp_1 > 0x108
                                {
                                    core::panicking::panic_bounds_check::h025cadc56a971af7(0x10d, 
                                        0x10d);
                                    /* no return */
                                }
                                
                                *r12_2.byte_offset(-5) = rcx_3;
                                *r12_2.byte_offset(-4) = r15_1;
                                *r12_2.byte_offset(-3) = 0xd7;
                                'label_845769:
                                result_1 = rbx + r13_1 + 5;
                                var_60 = arg2;
                                let var_58_6: i64 = rax;
                                let rax_41: *mut i16 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::find::h8c35254da18dacbe(&var_60, &result_1);
                                
                                if rax_41 == 0
                                {
                                    if rbp_1 > 0x107
                                    {
                                        core::panicking::panic_bounds_check::h025cadc56a971af7(
                                            0x10d, 0x10d);
                                        /* no return */
                                    }
                                    
                                    *r12_2.byte_offset(-2) = rcx_3;
                                    *r12_2.byte_offset(-1) = r15_1;
                                    *r12_2 = 0xff;
                                    'label_8454c4:
                                    result = rbx + r13_1 + 6;
                                    result_1 = result;
                                    r13_1 += 6;
                                    r14 += 0x28;
                                    r12_2 += 0x12;
                                    
                                    if r13_1 == 0x24
                                    {
                                        break;
                                    }
                                    
                                    continue;
                                }
                                else
                                {
                                    if rbp_1 <= 0x107
                                    {
                                        *r12_2 = rax_41[1];
                                        *r12_2.byte_offset(-2) = *rax_41;
                                        goto 'label_8454c4;
                                    }
                                    
                                    rbp_1 = 0x10d;
                                }
                            }
                            else
                            {
                                if rbp_1 <= 0x108
                                {
                                    *r12_2.byte_offset(-3) = rax_34[1];
                                    *r12_2.byte_offset(-5) = *rax_34;
                                    goto 'label_845769;
                                }
                                
                                rbp_1 = 0x10d;
                            }
                        }
                        else
                        {
                            if rbp_1 <= 0x109
                            {
                                *r12_2.byte_offset(-6) = rax_27[1];
                                *r12_2.byte_offset(-8) = *rax_27;
                                goto 'label_8456e9;
                            }
                            
                            rbp_1 = 0x10d;
                        }
                    }
                    else
                    {
                        if rbp_1 <= 0x10a
                        {
                            *r12_2.byte_offset(-9) = rax_20[1];
                            *r12_2.byte_offset(-0xb) = *rax_20;
                            goto 'label_845669;
                        }
                        
                        rbp_1 = 0x10d;
                    }
                }
                else
                {
                    if rbp_1 <= 0x10b
                    {
                        *r12_2.byte_offset(-0xc) = rax_13[1];
                        *r12_2.byte_offset(-0xe) = *rax_13;
                        goto 'label_8455e9;
                    }
                    
                    rbp_1 = 0x10d;
                }
            }
            
            core::panicking::panic_bounds_check::h025cadc56a971af7(rbp_1, 0x10d);
            /* no return */
        }
        
        rbx += r13_1;
        
        if rcx == 6
        {
            break;
        }
    }
    
    result
}
