
  uint64_t ruff_python_formatter::string::normalize::QuoteMetadataKind::raw::hb0a4e8c14ab76ee2(uint64_t arg1, int64_t arg2, int64_t arg3, char arg4, int32_t arg5)

{
    int64_t r12;
    int64_t var_20 = r12;
    int64_t var_40 = arg2;
    int64_t var_38 = arg3 + arg2;
    uint64_t result = arg4 ^ 1;
    int32_t rbp_1 = result * 5 + 0x22;
    int32_t result_1;
    
    if (!arg5)
    {
        int32_t result_3 = 0x110001;
        
        while (true)
        {
            result_1 = 0x110001;
            
            if (result_3 == 0x110001)
            {
                result = core::str::validations::next_code_point::hfc8b8c1898281fd8(&var_40, arg1);
                
                if (!(result & 1))
                    break;
            }
            
            if (result_3 == 0x5c)
            {
                result = result_1;
                result_1 = 0x110001;
                
                if (result == 0x110001)
                    result =
                        core::str::validations::next_code_point::hfc8b8c1898281fd8(&var_40, arg1);
            }
            else
            {
                if (result_3 == 0x110000)
                    break;
                
                if (result_3 == rbp_1)
                {
                    core::option::Option$LT$T$GT$::get_or_insert_with::h8e8d1ab978d36fd6(&result_1, 
                        &var_40);
                    result = result_1;
                    r12 = 1;
                    
                    if (result == 0x110000)
                        goto label_728747;
                    
                    if (result == rbp_1)
                    {
                        result_1 = 0x110001;
                        result =
                            core::option::Option$LT$T$GT$::get_or_insert_with::h8e8d1ab978d36fd6(
                            &result_1, &var_40);
                        
                        if (result_1 == 0x110000)
                            goto label_728747;
                        
                        result =
                            core::option::Option$LT$T$GT$::get_or_insert_with::h8e8d1ab978d36fd6(
                            &result_1, &var_40);
                        
                        if (result_1 == rbp_1)
                            goto label_728747;
                    }
                }
            }
            
            result_3 = result_1;
        }
        
        label_728744:
        r12 = 0;
    }
    else
    {
        int32_t result_2 = 0x110001;
        
        while (true)
        {
            result_1 = 0x110001;
            
            if (result_2 == 0x110001)
            {
                result = core::str::validations::next_code_point::hfc8b8c1898281fd8(&var_40, arg1);
                
                if (!(result & 1))
                    goto label_728744;
            }
            
            if (result_2 == 0x5c)
            {
                result = result_1;
                result_1 = 0x110001;
                
                if (result == 0x110001)
                    result =
                        core::str::validations::next_code_point::hfc8b8c1898281fd8(&var_40, arg1);
            }
            else
            {
                if (result_2 == 0x110000)
                    goto label_728744;
                
                if (result_2 == rbp_1)
                {
                    r12 = 1;
                    break;
                }
            }
            
            result_2 = result_1;
        }
    }
    label_728747:
    *(arg1 + 1) = r12;
    *arg1 = 0;
    return result;
}
