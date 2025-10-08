
  int64_t ruff_python_formatter::expression::expr_number_literal::normalize_integer::h77508505660cbd2c(int128_t* arg1, char* arg2, int64_t arg3)

{
    int64_t var_80 = 0;
    int64_t var_78 = 1;
    int64_t result = 0;
    int64_t var_58 = 0;
    char* var_68 = arg2;
    void* var_60 = &arg2[arg3];
    
    if (_$LT$core..str..iter..CharIndices$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h3a48939ae6ec65bf(&var_68) == 0x30)
    {
        int64_t rax_1;
        int32_t rdx_1;
        rax_1 = _$LT$core..str..iter..CharIndices$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h3a48939ae6ec65bf(&var_68);
        int32_t rax_2;
        int64_t rbp;
        
        if (rdx_1 == 0x58)
        {
            label_70bba1:
            rbp = 1;
            rax_2 = rdx_1 - 0x42;
            int64_t rbp_1;
            int64_t r12_2;
            
            if (rax_2 <= 0x16 && TEST_BITD(0x402001, rax_2))
            {
                label_70bbcc:
                alloc::string::String::push::h0ede46164189e411(&var_80, 0x30);
                alloc::string::String::push::h0ede46164189e411(&var_80, rdx_1 | 0x20);
                r12_2 = rax_1 + 1;
                
                if (rbp)
                    goto label_70bc01;
                
                if (r12_2)
                {
                    label_70bc35:
                    void* rax_5;
                    void* rdx_3;
                    rax_5 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::h28e9e81c5537bbed(r12_2, arg2, arg3);
                    
                    if (!rax_5)
                    {
                        rbp_1 = arg3;
                        label_70bd26:
                        core::str::slice_error_fail::h1a2885084e28d077(arg2, arg3, r12_2, rbp_1);
                        /* no return */
                    }
                    
                    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h8450ce9b220d216b(&var_80, rax_5, rdx_3 + rax_5);
                    arg1[1] = result;
                    *arg1 = var_80;
                    return result;
                }
            }
            else
            {
                label_70bbef:
                
                if (rbp)
                {
                    r12_2 = 0;
                    label_70bc01:
                    int64_t var_38_1 = var_58;
                    int128_t var_48 = var_68;
                    int64_t rax_4;
                    int32_t i_2;
                    rax_4 = _$LT$core..str..iter..CharIndices$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h3a48939ae6ec65bf(&var_48);
                    
                    if (i_2 != 0x110000)
                    {
                        rbp_1 = rax_4;
                        int32_t i_1 = i_2;
                        int32_t i;
                        
                        do
                        {
                            if (i_1 - 0x61 < 6)
                            {
                                void* rax_9;
                                void* rdx_6;
                                rax_9 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h6f62413506656e8f(r12_2, rbp_1, arg2, arg3);
                                
                                if (!rax_9)
                                    goto label_70bd26;
                                
                                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h8450ce9b220d216b(&var_80, rax_9, rdx_6 + rax_9);
                                alloc::string::String::push::h0ede46164189e411(&var_80, i_1 & 0x47);
                                r12_2 = rbp_1 + 1;
                            }
                            
                            int64_t rax_7;
                            rax_7 = _$LT$core..str..iter..CharIndices$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h3a48939ae6ec65bf(&var_48);
                            rbp_1 = rax_7;
                            i_1 = i;
                        } while (i != 0x110000);
                    }
                    
                    if (r12_2)
                        goto label_70bc35;
                }
            }
        }
        else if (rdx_1 != 0x110000)
        {
            if (rdx_1 == 0x78)
                goto label_70bba1;
            
            rbp = 0;
            rax_2 = rdx_1 - 0x42;
            
            if (rax_2 > 0x16 || !TEST_BITD(0x402001, rax_2))
                goto label_70bbef;
            
            goto label_70bbcc;
        }
    }
    
    *(arg1 + 8) = arg2;
    arg1[1] = arg3;
    *arg1 = -0x8000000000000000;
    return core::ptr::drop_in_place$LT$alloc..string..String$GT$::hdec1f9eb81adb7ad(&var_80);
}
