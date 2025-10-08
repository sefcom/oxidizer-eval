
  uint64_t uu_sort::compare_by::h7242c39af3d6a804(void** arg1, char** arg2, void* arg3, void* arg4, void* arg5)

{
    int64_t r11 = arg1[2];
    int64_t rbx = arg2[2];
    void* r9 = arg3;
    int32_t* rax = nullptr;
    int64_t temp0 = *(arg5 + 0x58);
    arg3 = rbx >= temp0;
    
    if (rbx < temp0)
        rax = (rbx << 4) + *(arg5 + 0x50);
    
    arg3 |= r11 >= *(arg4 + 0x58);
    uint64_t result;
    uint32_t rcx_7;
    bool cond:7;
    
    if (arg3)
    {
        label_4d5c1d:
        void* r14_2 = *(r9 + 8);
        int64_t rax_5 = *(r9 + 0x48);
        void* rdx_4 = *(r9 + 0x10) * 0x38 + r14_2;
        int64_t rdx_5 = *(r9 + 0x58);
        int64_t rsi_5 = *(arg4 + 8);
        int64_t rdx_7 = *(arg5 + 8);
        int64_t rdx_8 = *(arg5 + 0x10);
        int64_t rdx_9 = *(r9 + 0x50);
        int64_t rdx_11 = *(arg5 + 0x40);
        int64_t* rdx_12 = *(arg5 + 0x38);
        int64_t r11_1 = r11 * rax_5;
        int64_t rax_6 = rax_5 * rbx;
        int64_t rax_7 = *(arg5 + 0x28);
        int64_t rax_8 = *(arg5 + 0x20);
        int64_t rax_9 = *(arg4 + 0x10);
        int64_t rax_10 = *(arg4 + 0x40);
        int64_t* rax_11 = *(arg4 + 0x38);
        int64_t rax_12 = *(arg4 + 0x28);
        int64_t rax_13 = *(arg4 + 0x20);
        char rax_14 = *(r9 + 0x87);
        int64_t r13_2 = 0;
        int64_t rsi_8 = 0;
        int64_t rbx_1 = 0;
        
        while (true)
        {
            void* r15_2 = r14_2;
            r14_2 += 0x38;
            
            if (r15_2 == rdx_4)
                r14_2 = r15_2;
            
            if (r15_2 == rdx_4)
            {
                int64_t rax_48;
                
                if (*(r9 + 0x98) == 5 || *(r9 + 0x83) || *(r9 + 0x84))
                    rax_48 = 0;
                else
                {
                    uint64_t rax_50 = arg1[1];
                    uint64_t rdx_17 = arg2[1];
                    int64_t rbx_3 = rax_50 - rdx_17;
                    
                    if (rax_50 < rdx_17)
                        rdx_17 = rax_50;
                    
                    rax_48 = memcmp(*arg1, *arg2, rdx_17);
                    
                    if (rax_48)
                        rbx_3 = rax_48;
                    
                    rax_48 = rbx_3 > 0;
                    rax_48 -= rbx_3 < 0;
                }
                
                rcx_7 = rax_48;
                rax_48 = -(rax_48);
                result = rax_48;
                cond:7 = !*(r9 + 0x82);
                break;
            }
            
            char rax_16;
            char* rdx_13;
            void* rbp_1;
            uint64_t r10_1;
            uint64_t r12_2;
            
            if (!*(r15_2 + 0x37))
            {
                rdx_13 = *arg2;
                r10_1 = arg2[1];
                rbp_1 = *arg1;
                r12_2 = arg1[1];
                char* var_108;
                void* var_b0;
                
                switch (*(r15_2 + 0x35))
                {
                    case 0:
                    {
                        label_4d5e35:
                        int64_t rdi_8 = r11_1 + rsi_8;
                        
                        if (rdi_8 >= rax_12)
                        {
                            core::panicking::panic_bounds_check::h025cadc56a971af7(rdi_8, rax_12);
                            /* no return */
                        }
                        
                        int64_t rax_32 = rax_6 + rsi_8;
                        
                        if (rax_32 >= rax_7)
                        {
                            core::panicking::panic_bounds_check::h025cadc56a971af7(rax_32, rax_7);
                            /* no return */
                        }
                        
                        var_b0 = rbp_1;
                        uint64_t var_a8_1 = r12_2;
                        int64_t var_a0_1 = (rdi_8 << 4) + rax_13;
                        var_108 = rdx_13;
                        uint64_t var_100_1 = r10_1;
                        int64_t var_f8_1 = (rax_32 << 4) + rax_8;
                        rax_16 = uu_sort::numeric_str_cmp::numeric_str_cmp::h793f6b597e9f6768(
                            &var_b0, &var_108);
                        rsi_8 += 1;
                        
                        if (!rax_16)
                            continue;
                        break;
                    }
                    case 1:
                    {
                        label_4d5f64:
                        int64_t rdi_16 = r11_1 + rsi_8;
                        
                        if (rdi_16 >= rax_12)
                        {
                            core::panicking::panic_bounds_check::h025cadc56a971af7(rdi_16, rax_12);
                            /* no return */
                        }
                        
                        int64_t rax_41 = rax_6 + rsi_8;
                        
                        if (rax_41 >= rax_7)
                        {
                            core::panicking::panic_bounds_check::h025cadc56a971af7(rax_41, rax_7);
                            /* no return */
                        }
                        
                        var_b0 = rbp_1;
                        uint64_t var_a8_2 = r12_2;
                        int64_t var_a0_2 = (rdi_16 << 4) + rax_13;
                        var_108 = rdx_13;
                        uint64_t var_100_2 = r10_1;
                        int64_t var_f8_2 = (rax_41 << 4) + rax_8;
                        rax_16 = uu_sort::numeric_str_cmp::human_numeric_str_cmp::h31e63d2dd2fe0266(
                            &var_b0, &var_108);
                        rsi_8 += 1;
                        
                        if (!rax_16)
                            continue;
                        break;
                    }
                    case 2:
                    {
                        label_4d5ec4:
                        int64_t rdi_12 = rdx_9 * r11 + r13_2;
                        
                        if (rdi_12 >= rax_10)
                        {
                            core::panicking::panic_bounds_check::h025cadc56a971af7(rdi_12, rax_10);
                            /* no return */
                        }
                        
                        int64_t rax_37 = rdx_9 * rbx + r13_2;
                        
                        if (rax_37 >= rdx_11)
                        {
                            core::panicking::panic_bounds_check::h025cadc56a971af7(rax_37, rdx_11);
                            /* no return */
                        }
                        
                        int64_t rdi_13 = rdi_12 << 4;
                        int64_t rax_38 = rax_37 << 4;
                        r13_2 += 1;
                        rax_16 = uu_sort::general_numeric_compare::hc44acf983cdd147b(
                            *(rax_11 + rdi_13), *(rdx_12 + rax_38), *(rax_11 + rdi_13 + 8), 
                            *(rdx_12 + rax_38 + 8));
                        
                        if (!rax_16)
                            continue;
                        break;
                    }
                    case 3:
                    {
                        label_4d5f45:
                        rax_16 = uu_sort::month_compare::hf05b083267e3ccf7();
                        
                        if (!rax_16)
                            continue;
                        break;
                    }
                    case 4:
                    {
                        label_4d5d40:
                        rax_16 = uucore::features::version_cmp::version_cmp::h3f4d5bf5dba36ae1(
                            rbp_1, r12_2, rdx_13, r10_1);
                        
                        if (!rax_16)
                            continue;
                        break;
                    }
                    case 5:
                    {
                        label_4d601b:
                        
                        if (!uu_sort::custom_str_cmp::custom_str_cmp::hb6ac3eaeb381e23b(rbp_1, 
                            r12_2, rdx_13, r10_1, *(r15_2 + 0x33), *(r15_2 + 0x32), 
                            *(r15_2 + 0x31)))
                        {
                            rax_16 = 0;
                            continue;
                        }
                        else
                        {
                            if (!(rax_14 & 1))
                            {
                                core::option::unwrap_failed::h893f57cb7db71cb7();
                                /* no return */
                            }
                            
                            var_108 = *(r9 + 0x88);
                            rax_16 = uu_sort::random_shuffle::h8f5479ff6f6d004b(rbp_1, r12_2, 
                                rdx_13, r10_1, &var_108);
                            
                            if (!rax_16)
                                continue;
                        }
                        break;
                    }
                    case 6:
                    {
                        label_4d6094:
                        rax_16 = uu_sort::custom_str_cmp::custom_str_cmp::hb6ac3eaeb381e23b(rbp_1, 
                            r12_2, rdx_13, r10_1, *(r15_2 + 0x33), *(r15_2 + 0x32), 
                            *(r15_2 + 0x31));
                        
                        if (!rax_16)
                            continue;
                        break;
                    }
                }
            }
            else
            {
                int64_t rdi_5 = rdx_5 * r11 + rbx_1;
                
                if (rdi_5 >= rax_9)
                {
                    core::panicking::panic_bounds_check::h025cadc56a971af7(rdi_5, rax_9);
                    /* no return */
                }
                
                int64_t rax_19 = rdx_5 * rbx + rbx_1;
                
                if (rax_19 >= rdx_8)
                {
                    core::panicking::panic_bounds_check::h025cadc56a971af7(rax_19, rdx_8);
                    /* no return */
                }
                
                void** rdi_7 = (rdi_5 << 4) + rsi_5;
                char** rax_21 = (rax_19 << 4) + rdx_7;
                rbx_1 += 1;
                rdx_13 = *rax_21;
                r10_1 = rax_21[1];
                rbp_1 = *rdi_7;
                r12_2 = rdi_7[1];
                
                switch (*(r15_2 + 0x35))
                {
                    case 0:
                    {
                        goto label_4d5e35;
                    }
                    case 1:
                    {
                        goto label_4d5f64;
                    }
                    case 2:
                    {
                        goto label_4d5ec4;
                    }
                    case 3:
                    {
                        goto label_4d5f45;
                    }
                    case 4:
                    {
                        goto label_4d5d40;
                    }
                    case 5:
                    {
                        goto label_4d601b;
                    }
                    case 6:
                    {
                        goto label_4d6094;
                    }
                }
            }
            rcx_7 = rax_16;
            result = -(rax_16);
            cond:7 = !*(r15_2 + 0x34);
            break;
        }
    }
    else
    {
        int32_t* rdx = *(arg4 + 0x50);
        int64_t rsi_1 = r11 << 4;
        
        if (*(rdx + rsi_1) != 1 || *rax != 1)
            goto label_4d5c1d;
        
        uint128_t zmm0 = *(rdx + rsi_1 + 8);
        double zmm1 = *(rax + 8);
        
        if (!(zmm1 >= zmm0))
        {
            rax = 1;
            
            if (zmm0 >= zmm1)
                goto label_4d5c08;
            
            goto label_4d5c1d;
        }
        
        rax = 0xff;
        
        if (zmm0 < zmm1)
            goto label_4d5c08;
        
        if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hf24dc1420a1402d1(*arg1, arg1[1], *arg2, arg2[1]))
            goto label_4d5c1d;
        
        rax = nullptr;
        label_4d5c08:
        rcx_7 = rax;
        rax = -(rax);
        result = rax;
        cond:7 = !*(r9 + 0x82);
    }
    
    if (cond:7)
        return rcx_7;
    
    return result;
}
