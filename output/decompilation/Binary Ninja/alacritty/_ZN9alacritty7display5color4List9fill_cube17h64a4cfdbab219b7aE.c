
  int64_t alacritty::display::color::List::fill_cube::h64a4cfdbab219b7a(int64_t arg1, int64_t arg2, int64_t arg3)

{
    int64_t r14;
    int64_t var_18 = r14;
    int64_t result_1 = 0x10;
    int64_t rax = arg2 + (arg3 << 2);
    int64_t rbx = 0x10;
    int64_t rcx = 0;
    int64_t result;
    
    while (true)
    {
        uint64_t rax_1 = rcx;
        rcx += 1;
        uint8_t rcx_3 = (rax_1 << 3) * 5 + 0x37;
        
        if (!rax_1)
            rcx_3 = 0;
        
        void* r12_2 = rbx * 3 + arg1 + 0x11;
        r14 = 0x37;
        int64_t r13_1 = 0;
        
        while (true)
        {
            int64_t rbp_1 = rbx + r13_1;
            char r15_1 = r14;
            
            if (!r13_1)
                r15_1 = 0;
            
            int64_t var_60 = arg2;
            int64_t var_58_1 = rax;
            int16_t* rax_6 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::find::h8c35254da18dacbe(&var_60, &result_1);
            
            if (!rax_6)
            {
                if (rbp_1 >= 0x10d)
                {
                    core::panicking::panic_bounds_check::h025cadc56a971af7(rbx + r13_1, 0x10d);
                    /* no return */
                }
                
                *(r12_2 - 0x11) = rcx_3;
                *(r12_2 - 0x10) = r15_1;
                *(r12_2 - 0xf) = 0;
                goto label_845568;
            }
            
            if (rbp_1 < 0x10d)
            {
                *(r12_2 - 0xf) = rax_6[1];
                *(r12_2 - 0x11) = *rax_6;
                label_845568:
                result_1 = rbx + r13_1 + 1;
                var_60 = arg2;
                int64_t var_58_2 = rax;
                int16_t* rax_13 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::find::h8c35254da18dacbe(&var_60, &result_1);
                
                if (!rax_13)
                {
                    if (rbp_1 > 0x10b)
                    {
                        core::panicking::panic_bounds_check::h025cadc56a971af7(0x10d, 0x10d);
                        /* no return */
                    }
                    
                    *(r12_2 - 0xe) = rcx_3;
                    *(r12_2 - 0xd) = r15_1;
                    *(r12_2 - 0xc) = 0x5f;
                    label_8455e9:
                    result_1 = rbx + r13_1 + 2;
                    var_60 = arg2;
                    int64_t var_58_3 = rax;
                    int16_t* rax_20 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::find::h8c35254da18dacbe(&var_60, &result_1);
                    
                    if (!rax_20)
                    {
                        if (rbp_1 > 0x10a)
                        {
                            core::panicking::panic_bounds_check::h025cadc56a971af7(0x10d, 0x10d);
                            /* no return */
                        }
                        
                        *(r12_2 - 0xb) = rcx_3;
                        *(r12_2 - 0xa) = r15_1;
                        *(r12_2 - 9) = 0x87;
                        label_845669:
                        result_1 = rbx + r13_1 + 3;
                        var_60 = arg2;
                        int64_t var_58_4 = rax;
                        int16_t* rax_27 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::find::h8c35254da18dacbe(&var_60, &result_1);
                        
                        if (!rax_27)
                        {
                            if (rbp_1 > 0x109)
                            {
                                core::panicking::panic_bounds_check::h025cadc56a971af7(0x10d, 
                                    0x10d);
                                /* no return */
                            }
                            
                            *(r12_2 - 8) = rcx_3;
                            *(r12_2 - 7) = r15_1;
                            *(r12_2 - 6) = 0xaf;
                            label_8456e9:
                            result_1 = rbx + r13_1 + 4;
                            var_60 = arg2;
                            int64_t var_58_5 = rax;
                            int16_t* rax_34 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::find::h8c35254da18dacbe(&var_60, &result_1);
                            
                            if (!rax_34)
                            {
                                if (rbp_1 > 0x108)
                                {
                                    core::panicking::panic_bounds_check::h025cadc56a971af7(0x10d, 
                                        0x10d);
                                    /* no return */
                                }
                                
                                *(r12_2 - 5) = rcx_3;
                                *(r12_2 - 4) = r15_1;
                                *(r12_2 - 3) = 0xd7;
                                label_845769:
                                result_1 = rbx + r13_1 + 5;
                                var_60 = arg2;
                                int64_t var_58_6 = rax;
                                int16_t* rax_41 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::find::h8c35254da18dacbe(&var_60, &result_1);
                                
                                if (!rax_41)
                                {
                                    if (rbp_1 > 0x107)
                                    {
                                        core::panicking::panic_bounds_check::h025cadc56a971af7(
                                            0x10d, 0x10d);
                                        /* no return */
                                    }
                                    
                                    *(r12_2 - 2) = rcx_3;
                                    *(r12_2 - 1) = r15_1;
                                    *r12_2 = 0xff;
                                    label_8454c4:
                                    result = rbx + r13_1 + 6;
                                    result_1 = result;
                                    r13_1 += 6;
                                    r14 += 0x28;
                                    r12_2 += 0x12;
                                    
                                    if (r13_1 == 0x24)
                                        break;
                                    
                                    continue;
                                }
                                else
                                {
                                    if (rbp_1 <= 0x107)
                                    {
                                        *r12_2 = rax_41[1];
                                        *(r12_2 - 2) = *rax_41;
                                        goto label_8454c4;
                                    }
                                    
                                    rbp_1 = 0x10d;
                                }
                            }
                            else
                            {
                                if (rbp_1 <= 0x108)
                                {
                                    *(r12_2 - 3) = rax_34[1];
                                    *(r12_2 - 5) = *rax_34;
                                    goto label_845769;
                                }
                                
                                rbp_1 = 0x10d;
                            }
                        }
                        else
                        {
                            if (rbp_1 <= 0x109)
                            {
                                *(r12_2 - 6) = rax_27[1];
                                *(r12_2 - 8) = *rax_27;
                                goto label_8456e9;
                            }
                            
                            rbp_1 = 0x10d;
                        }
                    }
                    else
                    {
                        if (rbp_1 <= 0x10a)
                        {
                            *(r12_2 - 9) = rax_20[1];
                            *(r12_2 - 0xb) = *rax_20;
                            goto label_845669;
                        }
                        
                        rbp_1 = 0x10d;
                    }
                }
                else
                {
                    if (rbp_1 <= 0x10b)
                    {
                        *(r12_2 - 0xc) = rax_13[1];
                        *(r12_2 - 0xe) = *rax_13;
                        goto label_8455e9;
                    }
                    
                    rbp_1 = 0x10d;
                }
            }
            
            core::panicking::panic_bounds_check::h025cadc56a971af7(rbp_1, 0x10d);
            /* no return */
        }
        
        rbx += r13_1;
        
        if (rcx == 6)
            break;
    }
    
    return result;
}
