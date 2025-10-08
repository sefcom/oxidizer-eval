
  fn ruff_python_formatter::string::normalize::QuoteMetadataKind::raw::hb0a4e8c14ab76ee2(arg1: u64, arg2: i64, arg3: i64, arg4: i8, arg5: i32) -> u64

{
    let mut r12: i64;
    let var_20: i64 = r12;
    let mut var_40: i64 = arg2;
    let var_38: i64 = arg3 + arg2;
    let mut result: u64 = arg4 ^ 1;
    let rbp_1: i32 = result * 5 + 0x22;
    let mut result_1: i32;
    
    if arg5 == 0
    {
        let mut result_3: i32 = 0x110001;
        
        loop
        {
            result_1 = 0x110001;
            
            if result_3 == 0x110001
            {
                result = core::str::validations::next_code_point::hfc8b8c1898281fd8(&var_40, arg1);
                
                if (result & 1) == 0
                {
                    break;
                }
            }
            
            if result_3 == 0x5c
            {
                result = result_1;
                result_1 = 0x110001;
                
                if result == 0x110001
                {
                    result =
                        core::str::validations::next_code_point::hfc8b8c1898281fd8(&var_40, arg1);
                }
            }
            else
            {
                if result_3 == 0x110000
                {
                    break;
                }
                
                if result_3 == rbp_1
                {
                    core::option::Option$LT$T$GT$::get_or_insert_with::h8e8d1ab978d36fd6(&result_1, 
                        &var_40);
                    result = result_1;
                    r12 = 1;
                    
                    if result == 0x110000
                    {
                        goto 'label_728747;
                    }
                    
                    if result == rbp_1
                    {
                        result_1 = 0x110001;
                        result =
                            core::option::Option$LT$T$GT$::get_or_insert_with::h8e8d1ab978d36fd6(
                            &result_1, &var_40);
                        
                        if result_1 == 0x110000
                        {
                            goto 'label_728747;
                        }
                        
                        result =
                            core::option::Option$LT$T$GT$::get_or_insert_with::h8e8d1ab978d36fd6(
                            &result_1, &var_40);
                        
                        if result_1 == rbp_1
                        {
                            goto 'label_728747;
                        }
                    }
                }
            }
            
            result_3 = result_1;
        }
        
        'label_728744:
        r12 = 0;
    }
    else
    {
        let mut result_2: i32 = 0x110001;
        
        loop
        {
            result_1 = 0x110001;
            
            if result_2 == 0x110001
            {
                result = core::str::validations::next_code_point::hfc8b8c1898281fd8(&var_40, arg1);
                
                if (result & 1) == 0
                {
                    goto 'label_728744;
                }
            }
            
            if result_2 == 0x5c
            {
                result = result_1;
                result_1 = 0x110001;
                
                if result == 0x110001
                {
                    result =
                        core::str::validations::next_code_point::hfc8b8c1898281fd8(&var_40, arg1);
                }
            }
            else
            {
                if result_2 == 0x110000
                {
                    goto 'label_728744;
                }
                
                if result_2 == rbp_1
                {
                    r12 = 1;
                    break;
                }
            }
            
            result_2 = result_1;
        }
    }
    'label_728747:
    *(arg1 + 1) = r12;
    *arg1 = 0;
    result
}
