
  fn ruff_python_formatter::string::normalize::QuoteMetadataKind::triple_quoted::h5840b0a68ba9b6ca(arg1: u64, arg2: i64, arg3: i64, arg4: i8) -> u64

{
    let mut r12: i64;
    let var_20: i64 = r12;
    let mut var_40: i64 = arg2;
    let var_38: i64 = arg3 + arg2;
    let mut result: u64 = arg4 ^ 1;
    let rbp_1: i32 = result * 5 + 0x22;
    let mut result_2: i32 = 0x110001;
    
    loop
    {
        let mut result_1: i32 = 0x110001;
        
        if result_2 == 0x110001
        {
            result = core::str::validations::next_code_point::hfc8b8c1898281fd8(&var_40, arg1);
            
            if (result & 1) != 0
            {
                goto 'label_7284db;
            }
            
            r12 = 0;
            break;
        }
        
        'label_7284db:
        
        if result_2 == 0x5c
        {
            core::option::Option$LT$T$GT$::get_or_insert_with::h8e8d1ab978d36fd6(&result_1, 
                &var_40);
            result = result_1;
            
            if result == 0x22 || result == 0x5c
            {
                result_1 = 0x110001;
            }
        }
        else
        {
            if result_2 == 0x110000
            {
                r12 = 0;
                break;
                break;
            }
            
            if result_2 == rbp_1
            {
                core::option::Option$LT$T$GT$::get_or_insert_with::h8e8d1ab978d36fd6(&result_1, 
                    &var_40);
                result = result_1;
                r12 = 1;
                
                if result == 0x110000
                {
                    break;
                }
                
                if result == rbp_1
                {
                    result_1 = 0x110001;
                    core::option::Option$LT$T$GT$::get_or_insert_with::h8e8d1ab978d36fd6(&result_1, 
                        &var_40);
                    result = result_1;
                    
                    if result == 0x110000
                    {
                        break;
                    }
                    
                    if result == rbp_1
                    {
                        break;
                    }
                }
            }
        }
        
        result_2 = result_1;
    }
    
    *(arg1 + 1) = r12;
    *arg1 = 1;
    result
}
