
  int64_t* uu_sort::numeric_str_cmp::NumInfo::parse::h2d1625adef450396(int64_t* arg1, int64_t arg2, int64_t arg3, int32_t* arg4)

{
    int64_t r14 = arg3;
    int64_t* result = arg1;
    char var_85 = 0;
    int64_t var_50 = arg2;
    int64_t var_48 = arg2 + arg3;
    int64_t var_40 = 0;
    int64_t rax;
    int32_t i_2;
    rax = _$LT$core..str..iter..CharIndices$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he645eee637d411ae(&var_50);
    int64_t rax_9;
    uint64_t rcx;
    int64_t rdx;
    
    if (i_2 != 0x110000)
    {
        int64_t r15_1 = rax;
        int32_t i_1 = i_2;
        int64_t* result_1 = result;
        int32_t r14_1 = *arg4;
        int32_t rbp_1 = arg4[1];
        rax = 1;
        int32_t var_84_1 = rax;
        int64_t var_80_1 = -1;
        rcx = 0;
        result = 1;
        uint64_t r13_1 = 0;
        int64_t var_78;
        int32_t i;
        
        do
        {
            uint64_t rax_2;
            int64_t rdx_4;
            int64_t rsi_3;
            uint64_t rdi_7;
            int64_t rax_12;
            int64_t rdx_6;
            
            if (r13_1 != 1)
            {
                uint64_t var_60_1 = rcx;
                
                while (true)
                {
                    if (!(result & 1))
                    {
                        label_570a2f:
                        
                        if (r14_1 == 0x110000 || r14_1 != i_1)
                        {
                            if (uu_sort::numeric_str_cmp::NumInfo::is_invalid_char::hbc2ad2d78102039c(i_1, &var_85, rbp_1))
                            {
                                if (r13_1)
                                    goto label_570ba2;
                                
                                rax_12 = 0;
                                
                                if (!(var_60_1 & 1))
                                    r15_1 = 0;
                                
                                rcx = 1;
                                rdx_6 = r15_1;
                                result = result_1;
                                goto label_570bd7;
                            }
                            
                            if (rbp_1 == 0x110000 || i_1 != rbp_1)
                            {
                                if (i_1 != 0x30)
                                {
                                    rax_2 = 0;
                                    goto label_570abb;
                                }
                                
                                if (var_85)
                                {
                                    rdx_4 = var_80_1 - 1;
                                    rcx = 1;
                                    rax_2 = 1;
                                    rsi_3 = var_78;
                                    rdi_7 = r13_1;
                                    break;
                                }
                                
                                rax_2 = 1;
                                var_60_1 = rax_2;
                            }
                        }
                        
                        result = nullptr;
                    }
                    else if (i_1 - 9 >= 5 && i_1 != 0x20)
                    {
                        if (i_1 < 0x80)
                        {
                            if (i_1 != 0x2d)
                                goto label_570a2f;
                            
                            result = nullptr;
                            var_84_1 = 0;
                        }
                        else
                        {
                            bool rax_7;
                            rax_7 =
                                core::unicode::unicode_data::white_space::lookup::hc2937f3d40e148ab(
                                i_1);
                            
                            if (!rax_7)
                                goto label_570a2f;
                        }
                    }
                    
                    int64_t rax_5;
                    int32_t i_4;
                    rax_5 = _$LT$core..str..iter..CharIndices$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he645eee637d411ae(&var_50);
                    r15_1 = rax_5;
                    i_1 = i_4;
                    
                    if (i_4 == 0x110000)
                    {
                        rcx = var_60_1;
                        goto label_570b45;
                    }
                }
            }
            else
            {
                while (true)
                {
                    if (!(result & 1))
                    {
                        label_57097f:
                        
                        if (r14_1 == 0x110000 || r14_1 != i_1)
                        {
                            if (uu_sort::numeric_str_cmp::NumInfo::is_invalid_char::hbc2ad2d78102039c(i_1, &var_85, rbp_1))
                            {
                                label_570ba2:
                                result = result_1;
                                
                                if (arg4[2])
                                {
                                    uint64_t r12_1 = i_1 - 0x45;
                                    
                                    if (r12_1 <= 0x26 && TEST_BITQ(0x4000308945, r12_1))
                                        r15_1 += 1;
                                }
                                
                                rax_12 = var_80_1;
                                rdx_6 = var_78;
                                rcx = var_84_1 & 1;
                                label_570bd7:
                                *result = rax_12;
                                result[1] = rcx;
                                result[2] = rdx_6;
                                result[3] = r15_1;
                                return result;
                            }
                            
                            if (rbp_1 == 0x110000 || i_1 != rbp_1)
                            {
                                rax_2 = i_1 == 0x30;
                                label_570abb:
                                rdx_4 = var_80_1;
                                rsi_3 = var_78;
                                rdi_7 = r13_1;
                                rcx = var_85;
                                break;
                            }
                        }
                        
                        result = nullptr;
                    }
                    else if (i_1 - 9 >= 5 && i_1 != 0x20)
                    {
                        if (i_1 <= 0x7f)
                        {
                            if (i_1 != 0x2d)
                                goto label_57097f;
                            
                            result = nullptr;
                            var_84_1 = 0;
                        }
                        else if (!
                                core::unicode::unicode_data::white_space::lookup::hc2937f3d40e148ab(
                                i_1))
                            goto label_57097f;
                    }
                    
                    int64_t rax_1;
                    int32_t i_3;
                    rax_1 = _$LT$core..str..iter..CharIndices$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he645eee637d411ae(&var_50);
                    r15_1 = rax_1;
                    i_1 = i_3;
                    
                    if (i_3 == 0x110000)
                    {
                        result = result_1;
                        goto label_570b64;
                    }
                }
            }
            rcx ^= 1;
            var_80_1 = rdx_4 + rcx;
            char rcx_2 = rax_2 ^ 1;
            
            if (rax_2)
                r15_1 = rsi_3;
            
            rax_2 = rdi_7 == 1;
            
            if (rdi_7 != 1)
                rsi_3 = r15_1;
            
            var_78 = rsi_3;
            rax_2 |= rcx_2;
            r13_1 = rax_2;
            int64_t rax_8;
            rax_8 = _$LT$core..str..iter..CharIndices$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he645eee637d411ae(&var_50);
            r15_1 = rax_8;
            i_1 = i;
            rcx = 1;
            result = nullptr;
        } while (i != 0x110000);
        label_570b45:
        result = result_1;
        
        if (!r13_1)
            goto label_5708e6;
        
        label_570b64:
        rcx = var_84_1 & 1;
        rax_9 = var_80_1;
        rdx = var_78;
    }
    else
    {
        rcx = 0;
        label_5708e6:
        rax_9 = 0;
        
        if (!(rcx & 1))
            r14 = 0;
        
        rcx = 1;
        rdx = r14;
    }
    
    *result = rax_9;
    result[1] = rcx;
    result[2] = rdx;
    result[3] = r14;
    return result;
}
