
  int64_t* uu_touch::touch::h0be58da63b86e7de(int64_t* arg1, int64_t arg2, int64_t arg3, int64_t* arg4)

{
    uint64_t r14;
    uint64_t var_18 = r14;
    int64_t* rbp = arg4;
    int64_t rcx = arg4[3];
    int64_t rax = 0;
    
    if (rcx < -0x7ffffffffffffffe)
        rax = rcx - 0x7fffffffffffffff;
    
    int64_t var_110;
    int32_t rax_1;
    int32_t rdx;
    uint64_t rbx;
    uint64_t r15;
    
    if (rax)
    {
        if (rax != 1)
        {
            chrono::offset::local::Local::now::hd3cc0dab6e1d709b(&var_110);
            uint64_t rax_2;
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
        
        goto label_539a43;
    }
    
    int64_t rbx_1 = rbp[4];
    uint64_t r15_1 = rbp[5];
    char var_d8;
    uu_touch::stat::hbfae00cfffe9133b(&var_d8, rbx_1, r15_1, *(rbp + 0x31) ^ 1);
    int64_t* rax_9;
    uint64_t var_108;
    int64_t* i_1;
    uint64_t var_f8;
    int64_t var_f0;
    int64_t var_e8;
    uint64_t var_d0;
    
    if (!(var_d8 & 1))
    {
        r15 = var_d0;
        int32_t var_c8;
        rdx = var_c8;
        uint64_t var_c0;
        rbx = var_c0;
        int32_t var_b8;
        rax_1 = var_b8;
        label_539a43:
        int32_t var_120_1 = rax_1;
        uint64_t var_a0_1 = -0x8000000000000000;
        int32_t var_114_1;
        int32_t var_a8_1;
        
        if (*rbp != -0x8000000000000000)
        {
            uu_touch::filetime_to_datetime::h915ff47696d18514(&var_d8, r15, rdx);
            
            if (!var_d8)
            {
                rax_9 = arg1;
                *rax_9 = -0x7fffffffffffffff;
                rax_9[1] = r15;
                rax_9[2] = rdx;
            }
            else
            {
                r14 = rbx;
                int128_t var_50 = var_d8;
                char* rbx_3 = rbp[1];
                uint64_t r12_1 = rbp[2];
                uu_touch::parse_date::hc2f6ff83abb54cd3(&var_110, &var_50, rbx_3, r12_1);
                int64_t rcx_12 = var_110;
                r15 = var_108;
                int32_t rdx_9 = i_1;
                
                if (rcx_12 != -0x7ffffffffffffffc)
                {
                    rax_9 = arg1;
                    *(rax_9 + 0x20) = var_f0;
                    *(rax_9 + 0x14) = *i_1[4];
                    *rax_9 = rcx_12;
                    rax_9[1] = r15;
                    rax_9[2] = rdx_9;
                }
                else
                {
                    var_114_1 = rdx_9;
                    uu_touch::filetime_to_datetime::h915ff47696d18514(&var_d8, r14, var_120_1);
                    
                    if (!var_d8)
                    {
                        rax_9 = arg1;
                        *rax_9 = -0x7fffffffffffffff;
                        rax_9[1] = r14;
                        rax_9[2] = var_120_1;
                    }
                    else
                    {
                        int128_t var_40 = var_d8;
                        uu_touch::parse_date::hc2f6ff83abb54cd3(&var_110, &var_40, rbx_3, r12_1);
                        int64_t rcx_14 = var_110;
                        int32_t rsi_9 = i_1;
                        
                        if (rcx_14 == -0x7ffffffffffffffc)
                        {
                            var_120_1 = rsi_9;
                            var_a8_1 = var_108;
                            goto label_539a83;
                        }
                        
                        rax_9 = arg1;
                        *(rax_9 + 0x20) = var_f0;
                        *(rax_9 + 0x14) = *i_1[4];
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
            label_539a83:
            int64_t var_88 = arg2;
            int64_t var_80_1 = arg3 * 0x18 + arg2;
            int64_t var_78_1 = 0;
            int64_t rax_6;
            int64_t* i;
            rax_6 = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h37160c8aca5e383f(&var_88);
            
            if (i)
            {
                int32_t var_e0_1 = r15;
                
                do
                {
                    int64_t* r15_2 = rbp;
                    int64_t var_90 = rax_6;
                    int64_t rbp_1 = *i;
                    uint64_t rcx_5 = var_a0_1;
                    uint64_t rbx_2;
                    uint64_t rsi_3;
                    int64_t* i_2;
                    int64_t* i_3;
                    
                    if (rbp_1 != rcx_5)
                    {
                        label_539b50:
                        i_2 = i;
                        i_3 = i;
                        i = i[1];
                        rsi_3 = i_2[2];
                        rbx_2 = rcx_5;
                    }
                    else
                    {
                        uu_touch::pathbuf_from_stdout::h2fc16d9e8e8ab5c3(&var_110);
                        int64_t rcx_6 = var_110;
                        rbx_2 = var_108;
                        i = i_1;
                        r14 = var_f8;
                        
                        if (rcx_6 != -0x7ffffffffffffffc)
                        {
                            *(arg1 + 0x20) = var_f0;
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
                        
                        if (rbx_2 == rcx_5)
                            goto label_539b50;
                    }
                    
                    int32_t rax_7;
                    rax_7 = rbp_1 == rcx_5;
                    rbp = r15_2;
                    uint64_t rax_8;
                    int64_t rdx_5;
                    rax_8 = uu_touch::touch_file::h545e8affe65c7ac6(i, rsi_3, rax_7, r15_2, 
                        var_e0_1, var_114_1, var_a8_1, var_120_1);
                    
                    if (!rax_8)
                        core::ptr::drop_in_place$LT$uu_touch..touch..$u7b$$u7b$closure$u7d$$u7d$$GT$::h6199e6bd15be6263(rbx_2, i_2);
                    else
                    {
                        uint64_t var_70 = rbx_2;
                        int64_t* i_4 = i_3;
                        uint64_t var_60_1 = r14;
                        int64_t* var_58_1 = &var_90;
                        uu_touch::touch::_$u7b$$u7b$closure$u7d$$u7d$::hf7522ea3725909fa(&var_110, 
                            &var_70, rax_8, rdx_5);
                        int64_t rdx_7 = var_110;
                        var_d8 = var_108;
                        var_c8 = var_f8;
                        var_b8 = var_e8;
                        
                        if (rdx_7 != -0x7ffffffffffffffc)
                        {
                            arg1[5] = var_b8;
                            int128_t zmm0_3 = var_d8;
                            *(arg1 + 0x18) = var_c8;
                            *(arg1 + 8) = zmm0_3;
                            *arg1 = rdx_7;
                            return arg1;
                        }
                    }
                    
                    rax_6 = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h37160c8aca5e383f(&var_88);
                } while (i);
            }
            
            rax_9 = arg1;
            *rax_9 = -0x7ffffffffffffffc;
        }
    }
    else
    {
        uu_touch::touch::_$u7b$$u7b$closure$u7d$$u7d$::ha077cb7010bb6923(&var_110, rbx_1, r15_1, 
            var_d0);
        int64_t rdx_3 = var_110;
        r15 = var_108;
        rbx = var_f8;
        
        if (rdx_3 == -0x7ffffffffffffffc)
        {
            rdx = i_1;
            rax_1 = var_f0;
            goto label_539a43;
        }
        
        rax_9 = arg1;
        *rax_9 = rdx_3;
        rax_9[1] = r15;
        rax_9[2] = i_1;
        rax_9[3] = rbx;
        rax_9[4] = var_f0;
        rax_9[5] = var_e8;
    }
    return rax_9;
}
