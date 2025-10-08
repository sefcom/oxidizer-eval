
  int64_t ruff_python_formatter::statement::clause::ClauseHeader::range::hab8e09d0514f8895(int32_t* arg1, int64_t arg2, void* arg3, char* arg4, int64_t arg5)

{
    int32_t result_1;
    ruff_python_formatter::statement::clause::ClauseHeader::first_keyword_range::h4514c6d97d3066b6(
        &result_1, arg2, arg3, arg4, arg5);
    int32_t result = result_1;
    int32_t result_2;
    int32_t result_3 = result_2;
    int32_t var_4c;
    int64_t var_44;
    int32_t var_3c;
    
    if (result != 4)
    {
        arg1[5] = var_3c;
        *(arg1 + 0xc) = var_44;
        *arg1 = result;
        arg1[1] = var_4c;
        arg1[2] = result_3;
    }
    else
    {
        int32_t var_58 = 0;
        ruff_python_formatter::statement::clause::ClauseHeader::visit::ha21c76b62b7c1677(arg2, 
            arg3, &var_58);
        int64_t rax = 0xc;
        
        if (arg2 - 3 < 0xc)
            rax = arg2 - 3;
        
        uint64_t result_5 = jump_table_487978[rax] + &jump_table_487978;
        int32_t result_4;
        char rcx;
        
        switch (result_5)
        {
            case 0x717f76:
            {
                rcx = var_58;
                result_5 = result_4;
                label_717f7d:
                
                if (rcx & 1)
                    result_3 = result_5;
                break;
            }
            case 0x718000:
            {
                if (!(var_58 & 1))
                    result_3 = *(arg3 + 0x34);
                else
                    result_3 = result_4;
                break;
            }
            case 0x718019:
            {
                char rcx_8 = *(arg3 + 0x37);
                
                if (rcx_8 != 0xda)
                    result_5 = *(arg3 + 0x1c);
                
                if (rcx_8 == 0xda)
                    result_5 = result_4;
                
                rcx = 1;
                
                if (rcx_8 == 0xda)
                    rcx = var_58;
                
                goto label_717f7d;
            }
        }
        
        ruff_python_formatter::statement::clause::colon_range::ha3df4110d5faf4ca(&result_1, 
            result_3, arg4, arg5);
        result = result_1;
        
        if (result != 4)
        {
            arg1[5] = var_3c;
            *(arg1 + 0xc) = var_44;
            *arg1 = result;
            *(arg1 + 4) = var_4c;
        }
        else
        {
            result = result_2;
            
            if (var_4c > result)
            {
                core::panicking::panic::h85d6dd562679980c("assertion failed: start.raw <= e…");
                /* no return */
            }
            
            arg1[1] = var_4c;
            arg1[2] = result;
            *arg1 = 4;
        }
    }
    return result;
}
