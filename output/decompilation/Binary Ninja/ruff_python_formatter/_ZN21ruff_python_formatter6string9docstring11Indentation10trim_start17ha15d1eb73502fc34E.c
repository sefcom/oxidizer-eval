
  void* ruff_python_formatter::string::docstring::Indentation::trim_start::ha15d1eb73502fc34(int32_t* arg1, int32_t* arg2, int32_t* arg3)

{
    void* result = jump_table_487b64[*arg2] + &jump_table_487b64;
    int64_t result_6;
    
    switch (result)
    {
        case 0x7267a2:
        {
            result = *(arg2 + 8);
            result_6 = 0;
            int64_t rdx_1;
            int64_t rsi_11;
            void* result_3;
            
            switch (*arg3)
            {
                case 0:
                {
                    label_726841:
                    rdx_1 = *(arg3 + 8);
                    rsi_11 = 0;
                    result_3 = result_6;
                    
                    if (result_6 >= 0)
                    {
                        label_726871:
                        void* result_4 = result;
                        result -= rdx_1;
                        
                        if (result_4 >= rdx_1)
                        {
                            rdx_1 = result_4 != rdx_1;
                            int32_t r9 = 0;
                            
                            if (result_6 == rsi_11)
                                result_3 = result;
                            
                            if (result_6 != rsi_11)
                                r9 = rdx_1 + 1;
                            
                            *arg1 = r9;
                            *(arg1 + 8) = result_3;
                            *(arg1 + 0x10) = result;
                            return result;
                        }
                    }
                    break;
                }
                case 1:
                {
                    label_726863:
                    rsi_11 = *(arg3 + 8);
                    rdx_1 = 0;
                    result_3 = result_6 - rsi_11;
                    
                    if (result_6 >= rsi_11)
                        goto label_726871;
                    break;
                }
                case 2:
                {
                    label_726851:
                    rsi_11 = *(arg3 + 8);
                    rdx_1 = *(arg3 + 0x10);
                    result_3 = result_6 - rsi_11;
                    
                    if (result_6 >= rsi_11)
                        goto label_726871;
                    break;
                }
            }
            break;
        }
        case 0x7267ba:
        {
            int64_t rcx_1 = *(arg2 + 8);
            result = *(arg2 + 0x10);
            int32_t rsi_3 = *arg3;
            
            if (!rsi_3)
            {
                int64_t temp4_1 = *(arg3 + 8);
                void* result_1 = rcx_1 - *(arg3 + 8);
                
                if (rcx_1 >= temp4_1)
                {
                    arg3 = rcx_1 != temp4_1;
                    
                    if (rcx_1 == temp4_1)
                        result_1 = result;
                    
                    *arg1 = (arg3 << 1) + 1;
                    *(arg1 + 8) = result_1;
                    *(arg1 + 0x10) = result;
                    return result;
                }
            }
            else if (rsi_3 == 3)
            {
                int64_t r8_1 = *(arg3 + 8);
                void* result_2 = rcx_1 - r8_1;
                
                if (rcx_1 >= r8_1)
                {
                    void* result_5 = result;
                    int64_t temp8_1 = *(arg3 + 0x10);
                    result -= *(arg3 + 0x10);
                    
                    if (result_5 >= temp8_1)
                    {
                        arg3 = result_5 != temp8_1;
                        uint32_t rdx = 3;
                        
                        if (rcx_1 == r8_1)
                            rdx = arg3;
                        
                        if (rcx_1 == r8_1)
                            result_2 = result;
                        
                        *arg1 = rdx;
                        *(arg1 + 8) = result_2;
                        *(arg1 + 0x10) = result;
                        return result;
                    }
                }
            }
            break;
        }
        case 0x72680f:
        {
            result_6 = *(arg2 + 8);
            result = nullptr;
            
            switch (*arg3)
            {
                case 0:
                {
                    goto label_726841;
                }
                case 1:
                {
                    goto label_726863;
                }
                case 2:
                {
                    goto label_726851;
                }
            }
            break;
        }
        case 0x726827:
        {
            result_6 = *(arg2 + 8);
            result = *(arg2 + 0x10);
            
            switch (*arg3)
            {
                case 0:
                {
                    goto label_726841;
                }
                case 1:
                {
                    goto label_726863;
                }
                case 2:
                {
                    goto label_726851;
                }
            }
            break;
        }
    }
    
    *arg1 = 5;
    return result;
}
