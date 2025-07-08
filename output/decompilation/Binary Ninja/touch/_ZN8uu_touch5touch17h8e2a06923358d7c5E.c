
  int64_t* uu_touch::touch::h8e2a06923358d7c5(int64_t* arg1, int128_t* arg2, int64_t arg3, int64_t* arg4)

{
    int64_t* r8 = arg4;
    int64_t rcx = arg4[3];
    int64_t rax = 0;
    
    if (rcx < -0x7ffffffffffffffe)
        rax = rcx - 0x7fffffffffffffff;
    
    int64_t* var_158 = r8;
    uint64_t var_168_1;
    int64_t var_150;
    int128_t* var_120_1;
    uint64_t r12;
    int128_t* r14;
    int128_t* r15;
    
    if (rax)
    {
        var_120_1 = arg2;
        uint64_t rax_1;
        
        if (rax != 1)
        {
            chrono::offset::local::Local::now::ha82adb6e05d16f38(&var_150);
            int128_t* rax_3;
            int32_t rdx_2;
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
        goto label_5c25ac;
    }
    
    int128_t* r13_1 = arg2;
    int32_t rcx_2;
    rcx_2 = !*(r8 + 0x31);
    int64_t var_118;
    arg2 = uu_touch::stat::haa73667d17037b3b(&var_118, r8[4], r8[5], rcx_2);
    int128_t* var_148;
    int64_t* var_140;
    int128_t* var_138;
    uint64_t var_130;
    int64_t var_128;
    int128_t* var_110;
    
    if (!var_118)
    {
        var_120_1 = r13_1;
        r15 = var_110;
        int32_t var_108;
        r12 = var_108;
        int32_t var_f8;
        var_168_1 = var_f8;
        int128_t* var_100;
        r14 = var_100;
        label_5c25ac:
        
        if (*r8 == -0x8000000000000000)
            goto label_5c25cf;
        
        uu_touch::filetime_to_datetime::h118b2d8253ee418f(&var_118);
        
        if (!var_118)
        {
            *arg1 = -0x7fffffffffffffff;
            arg1[1] = r15;
            arg1[2] = r12;
        }
        else
        {
            int128_t var_50 = var_118;
            char* rdx_11 = var_158[1];
            uint64_t rcx_9 = var_158[2];
            uu_touch::parse_date::h59fdcf28d83a7f45(&var_150, &var_50, rdx_11, rcx_9);
            int64_t rax_13 = var_150;
            r15 = var_148;
            r12 = var_140;
            
            if (rax_13 != -0x7ffffffffffffffc)
            {
                *(arg1 + 0x20) = var_130;
                *(arg1 + 0x14) = *var_140[4];
                *arg1 = rax_13;
                arg1[1] = r15;
                arg1[2] = r12;
            }
            else
            {
                uu_touch::filetime_to_datetime::h118b2d8253ee418f(&var_118);
                
                if (!var_118)
                {
                    *arg1 = -0x7fffffffffffffff;
                    arg1[1] = r14;
                    arg1[2] = var_168_1;
                }
                else
                {
                    int128_t var_40 = var_118;
                    arg2 =
                        uu_touch::parse_date::h59fdcf28d83a7f45(&var_150, &var_40, rdx_11, rcx_9);
                    int64_t rax_14 = var_150;
                    r14 = var_148;
                    uint64_t rcx_11 = var_140;
                    
                    if (rax_14 != -0x7ffffffffffffffc)
                    {
                        *(arg1 + 0x20) = var_130;
                        *(arg1 + 0x14) = *var_140[4];
                        *arg1 = rax_14;
                        arg1[1] = r14;
                        arg1[2] = rcx_11;
                    }
                    else
                    {
                        var_168_1 = rcx_11;
                        label_5c25cf:
                        int128_t* var_90 = var_120_1;
                        void* var_88_1 = var_120_1 + arg3 * 0x18;
                        int64_t var_80_1 = 0;
                        
                        while (true)
                        {
                            int64_t rax_7;
                            int64_t* rdx_3;
                            rax_7 = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h549ada4c33c82e7d(&var_90);
                            
                            if (!rdx_3)
                            {
                                *arg1 = -0x7ffffffffffffffc;
                                break;
                            }
                            
                            int128_t* rbp_1 = r14;
                            int128_t* r12_1 = r15;
                            int64_t var_c0 = rax_7;
                            int64_t r15_1 = *rdx_3;
                            int128_t* rcx_5 = -0x8000000000000000;
                            
                            if (r15_1 == -0x8000000000000000)
                            {
                                uu_touch::pathbuf_from_stdout::h2920ee1b816c3101(&var_150);
                                int64_t rax_8 = var_150;
                                rcx_5 = var_148;
                                rdx_3 = var_140;
                                arg2 = var_138;
                                
                                if (rax_8 != -0x7ffffffffffffffc)
                                {
                                    *(arg1 + 0x20) = var_130;
                                    *arg1 = rax_8;
                                    arg1[1] = rcx_5;
                                    arg1[2] = rdx_3;
                                    arg1[3] = arg2;
                                    break;
                                }
                            }
                            
                            int32_t rax_9;
                            rax_9 = r15_1 == -0x8000000000000000;
                            int128_t* var_e8 = rcx_5;
                            int64_t* var_e0_1 = rdx_3;
                            
                            if (rcx_5 != -0x8000000000000000)
                                rdx_3 = &var_e8;
                            
                            r15 = r12_1;
                            r14 = rbp_1;
                            int128_t* rax_10;
                            int64_t rdx_5;
                            rax_10 = uu_touch::touch_file::h877dc0441f137307(rdx_3[1], rdx_3[2], 
                                rax_9, var_158, r12_1, r12, rbp_1, var_168_1);
                            int128_t var_b8 = var_e8;
                            
                            if (!rax_10)
                                arg2 = core::ptr::drop_in_place$LT$uu_touch..touch..$u7b$$u7b$closure$u7d$$u7d$$GT$::hc5b9fab259fe0862(&var_b8);
                            else
                            {
                                int128_t* var_68_1 = arg2;
                                int64_t* var_60_1 = &var_c0;
                                int128_t var_78 = var_b8;
                                arg2 = uu_touch::touch::_$u7b$$u7b$closure$u7d$$u7d$::hf4c84b0974a1c31b(&var_150, &var_78, rax_10, rdx_5);
                                int64_t rax_11 = var_150;
                                var_118 = var_148;
                                var_108 = var_138;
                                var_f8 = var_128;
                                
                                if (rax_11 != -0x7ffffffffffffffc)
                                {
                                    arg1[5] = var_f8;
                                    int128_t zmm0_4 = var_118;
                                    *(arg1 + 0x18) = var_108;
                                    *(arg1 + 8) = zmm0_4;
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
        int64_t rax_2 = var_150;
        r15 = var_148;
        r12 = var_140;
        r14 = var_138;
        
        if (rax_2 == -0x7ffffffffffffffc)
        {
            var_120_1 = r13_1;
            var_168_1 = var_130;
            r8 = var_158;
            goto label_5c25ac;
        }
        
        *arg1 = rax_2;
        arg1[1] = r15;
        arg1[2] = r12;
        arg1[3] = r14;
        arg1[4] = var_130;
        arg1[5] = var_128;
    }
    return arg1;
}
