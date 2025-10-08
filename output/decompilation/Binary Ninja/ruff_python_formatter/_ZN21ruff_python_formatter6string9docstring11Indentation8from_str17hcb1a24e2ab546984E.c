
  uint64_t ruff_python_formatter::string::docstring::Indentation::from_str::hcb1a24e2ab546984(uint64_t arg1, int64_t arg2, int64_t arg3)

{
    int64_t var_60 = arg2;
    int64_t var_58 = arg3 + arg2;
    int32_t var_50 = 0x110001;
    uint64_t result_2 = core::iter::traits::iterator::Iterator::fold::h0e5f0451a9ac8f30(&var_60);
    uint64_t result = core::iter::traits::iterator::Iterator::fold::h8c7602d7545806de(&var_60);
    int32_t rcx_1;
    
    if (!result)
    {
        rcx_1 = 0;
        *(arg1 + 8) = result_2;
    }
    else
    {
        uint64_t result_1 = result;
        result = core::iter::traits::iterator::Iterator::fold::h0e5f0451a9ac8f30(&var_60);
        
        if (!result_2)
        {
            if (result)
            {
                core::option::Option$LT$T$GT$::get_or_insert_with::h8e8d1ab978d36fd6(&var_50, 
                    &var_60);
                
                if (var_50 == 9)
                    goto label_726592;
                
                rcx_1 = 2;
                result_2 = result_1;
                result_1 = result;
                goto label_7266b3;
            }
            
            rcx_1 = 1;
            *(arg1 + 8) = result_1;
        }
        else if (result)
        {
            label_726592:
            uint64_t r13_2 = result_2 + (result_1 << 3) + result;
            uint64_t r14_2 = result_1 + result_2 + result;
            core::result::Result$LT$T$C$E$GT$::unwrap::h1e98140e442e0df8(r14_2 >> 0x20);
            result = var_50;
            int32_t var_38_1 = result;
            int128_t var_48 = var_60;
            
            while (true)
            {
                int32_t r12_2 = var_38_1;
                var_38_1 = 0x110001;
                
                if (r12_2 == 0x110001)
                {
                    int32_t rdx_1;
                    result =
                        core::str::validations::next_code_point::hfc8b8c1898281fd8(&var_48, arg1);
                    
                    if (!(result & 1))
                        break;
                    
                    r12_2 = rdx_1;
                }
                
                if (r12_2 == 9)
                {
                    r13_2 = (r13_2 & 0xfffffffffffffff8) + 8;
                    r14_2 = r14_2 + 1;
                }
                else
                {
                    if (r12_2 != 0x20)
                    {
                        if (r12_2 == 0x110000)
                            break;
                        
                        result = r12_2 - 9;
                        
                        if (result >= 5)
                        {
                            if (r12_2 < 0x80)
                                break;
                            
                            result =
                                core::unicode::unicode_data::white_space::lookup::hae563f9e204d99ae(
                                r12_2);
                            
                            if (!result)
                                break;
                            
                            if (r12_2 >= 0x800)
                            {
                                result = r12_2 < 0x10000;
                                r13_2 = r13_2 - result + 4;
                                r14_2 = r14_2 + 4 - result;
                                continue;
                            }
                            else
                            {
                                r13_2 += 2;
                                r14_2 = r14_2 + 2;
                                continue;
                            }
                        }
                    }
                    
                    r13_2 += 1;
                    r14_2 = r14_2 + 1;
                }
            }
            
            *(arg1 + 8) = r13_2;
            *(arg1 + 4) = r14_2;
            rcx_1 = 4;
        }
        else
        {
            rcx_1 = 3;
            label_7266b3:
            *(arg1 + 8) = result_2;
            *(arg1 + 0x10) = result_1;
        }
    }
    
    *arg1 = rcx_1;
    return result;
}
