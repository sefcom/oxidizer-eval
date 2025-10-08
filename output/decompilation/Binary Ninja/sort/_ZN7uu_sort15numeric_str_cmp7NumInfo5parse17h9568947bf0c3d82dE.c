
  int64_t* uu_sort::numeric_str_cmp::NumInfo::parse::h9568947bf0c3d82d(int64_t* arg1, int64_t arg2, int64_t arg3, int32_t* arg4)

{
    int64_t* result_2 = arg1;
    char var_85 = 0;
    int64_t var_50 = arg2;
    int64_t var_48 = arg2 + arg3;
    int64_t var_40 = 0;
    int64_t rax;
    int32_t i_3;
    rax = _$LT$core..str..iter..CharIndices$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h3a48939ae6ec65bf(&var_50);
    int64_t* result;
    int64_t rcx;
    int64_t rdx;
    int32_t* r14;
    char var_70;
    
    if (i_3 != 0x110000)
    {
        int64_t r15_1 = rax;
        int32_t i_2 = i_3;
        int32_t rax_1 = *arg4;
        int32_t rbp_1 = arg4[1];
        r14 = 1;
        int64_t* result_1 = -ffffffffffffffff;
        var_70 = 0;
        int64_t r12;
        r12 = 1;
        int64_t rcx_1 = 0;
        label_4cf2e8:
        int64_t var_68;
        int64_t rdx_2;
        
        if (!rcx_1)
        {
            while (true)
            {
                if (!(r12 & 1))
                {
                    label_4cf4be:
                    
                    if (rax_1 == 0x110000 || rax_1 != i_2)
                    {
                        result =
                            uu_sort::numeric_str_cmp::NumInfo::is_invalid_char::he29b1e8f7debbd61(
                            i_2, &var_85, rbp_1);
                        
                        if (result)
                        {
                            rdx_2 = 0;
                            
                            if (var_70 & 1)
                                rdx_2 = r15_1;
                            
                            *result_2 = 0;
                            result_2[1] = 1;
                            r15_1 = rdx_2;
                            label_4cf620:
                            result_2[2] = rdx_2;
                            result_2[3] = r15_1;
                            return result;
                        }
                        
                        if (rbp_1 == 0x110000 || i_2 != rbp_1)
                        {
                            char rcx_2;
                            void* result_3;
                            int64_t r12_1;
                            
                            if (i_2 != 0x30)
                            {
                                result = nullptr;
                                label_4cf51b:
                                result_3 = result_1;
                                r12_1 = rcx_1;
                                rcx_2 = var_85;
                                goto label_4cf52d;
                            }
                            
                            rcx_2 = var_85;
                            
                            if (rcx_2 == 1)
                            {
                                result_3 = result_1 - 1;
                                result = 1;
                                r12_1 = rcx_1;
                                label_4cf52d:
                                int32_t rdx_1;
                                rdx_1 = r12_1;
                                result_1 = result_3 + (rcx_2 ^ 1);
                                rdx_1 |= result;
                                int64_t rax_12 = var_68;
                                
                                if (!rdx_1)
                                    rax_12 = r15_1;
                                
                                var_68 = rax_12;
                                
                                if (!rdx_1)
                                    r12_1 = 1;
                                
                                int64_t rax_13;
                                int32_t i_5;
                                rax_13 = _$LT$core..str..iter..CharIndices$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h3a48939ae6ec65bf(&var_50);
                                r15_1 = rax_13;
                                i_2 = i_5;
                                rax_13 = 1;
                                var_70 = rax_13;
                                rcx_1 = r12_1;
                                r12 = 0;
                                
                                if (i_5 != 0x110000)
                                    goto label_4cf2e8;
                                
                                break;
                            }
                            
                            result = 1;
                            var_70 = result;
                        }
                    }
                    
                    r12 = 0;
                }
                else
                {
                    r12 = 1;
                    
                    if (i_2 - 9 >= 5 && i_2 != 0x20)
                    {
                        if (i_2 < 0x80)
                        {
                            r12 = 0;
                            
                            if (i_2 != 0x2d)
                                goto label_4cf4be;
                            
                            r14 = nullptr;
                        }
                        else if (!
                                core::unicode::unicode_data::white_space::lookup::hae563f9e204d99ae(
                                i_2))
                            goto label_4cf4be;
                    }
                }
                
                int64_t rax_8;
                int32_t i_4;
                rax_8 = _$LT$core..str..iter..CharIndices$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h3a48939ae6ec65bf(&var_50);
                r15_1 = rax_8;
                i_2 = i_4;
                
                if (i_4 == 0x110000)
                    goto label_4cf27f;
            }
        }
        else
        {
            int32_t rbx;
            
            if (rax_1 == 0x110000)
            {
                int32_t i;
                
                do
                {
                    rbx = r14;
                    
                    if (!(r12 & 1))
                    {
                        label_4cf3fa:
                        
                        if (uu_sort::numeric_str_cmp::NumInfo::is_invalid_char::he29b1e8f7debbd61(
                                i_2, &var_85, rbp_1))
                            goto label_4cf5c2;
                        
                        if (rbp_1 == 0x110000)
                            goto label_4cf510;
                        
                        if (i_2 != rbp_1)
                            goto label_4cf510;
                        
                        r12 = 0;
                        r14 = rbx;
                    }
                    else
                    {
                        r12 = 1;
                        
                        if (i_2 - 9 < 5 || i_2 == 0x20)
                            r14 = rbx;
                        else if (i_2 <= 0x7f)
                        {
                            r12 = 0;
                            r14 = nullptr;
                            
                            if (i_2 != 0x2d)
                                goto label_4cf3fa;
                        }
                        else
                        {
                            if (!core::unicode::unicode_data::white_space::lookup::hae563f9e204d99ae(i_2))
                                goto label_4cf3fa;
                            
                            r14 = rbx;
                        }
                    }
                    
                    int64_t rax_7;
                    rax_7 = _$LT$core..str..iter..CharIndices$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h3a48939ae6ec65bf(&var_50);
                    r15_1 = rax_7;
                    i_2 = i;
                } while (i != 0x110000);
            }
            else
            {
                int32_t i_1;
                
                do
                {
                    rbx = r14;
                    
                    if (!(r12 & 1))
                    {
                        label_4cf355:
                        
                        if (rax_1 != i_2)
                        {
                            if (uu_sort::numeric_str_cmp::NumInfo::is_invalid_char::he29b1e8f7debbd61(i_2, &var_85, rbp_1))
                            {
                                label_4cf5c2:
                                rdx_2 = var_68;
                                
                                if (arg4[2])
                                {
                                    uint64_t r13_1 = i_2 - 0x45;
                                    
                                    if (r13_1 <= 0x26 && TEST_BITQ(0x400030b945, r13_1))
                                        r15_1 += 1;
                                }
                                
                                result = result_2;
                                *result = result_1;
                                rbx &= 1;
                                result[1] = rbx;
                                result_2 = result;
                                goto label_4cf620;
                            }
                            
                            if (rbp_1 == 0x110000 || i_2 != rbp_1)
                            {
                                label_4cf510:
                                result = i_2 == 0x30;
                                r14 = rbx;
                                goto label_4cf51b;
                            }
                        }
                        
                        r12 = 0;
                        r14 = rbx;
                    }
                    else
                    {
                        r12 = 1;
                        
                        if (i_2 - 9 < 5 || i_2 == 0x20)
                            r14 = rbx;
                        else if (i_2 <= 0x7f)
                        {
                            r12 = 0;
                            r14 = nullptr;
                            
                            if (i_2 != 0x2d)
                                goto label_4cf355;
                        }
                        else
                        {
                            if (!core::unicode::unicode_data::white_space::lookup::hae563f9e204d99ae(i_2))
                                goto label_4cf355;
                            
                            r14 = rbx;
                        }
                    }
                    
                    int64_t rax_4;
                    rax_4 = _$LT$core..str..iter..CharIndices$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h3a48939ae6ec65bf(&var_50);
                    r15_1 = rax_4;
                    i_2 = i_1;
                } while (i_1 != 0x110000);
            }
        }
        
        if (!(rcx_1 & 1))
            goto label_4cf27f;
        
        r14 &= 1;
        result = result_1;
        rcx = var_68;
        rdx = arg3;
    }
    else
    {
        var_70 = 0;
        label_4cf27f:
        result = nullptr;
        rdx = arg3;
        
        if (!(var_70 & 1))
            rdx = 0;
        
        r14 = 1;
        rcx = rdx;
    }
    *result_2 = result;
    result_2[1] = r14;
    result_2[2] = rcx;
    result_2[3] = rdx;
    return result;
}
