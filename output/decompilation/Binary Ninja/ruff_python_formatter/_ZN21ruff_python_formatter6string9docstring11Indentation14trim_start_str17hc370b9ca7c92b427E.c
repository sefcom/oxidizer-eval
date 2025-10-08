
  char* ruff_python_formatter::string::docstring::Indentation::trim_start_str::hc370b9ca7c92b427(int32_t* arg1, char* arg2, uint64_t arg3)

{
    uint64_t rbx = arg3;
    char* result = arg2;
    int64_t rax =
        ruff_python_formatter::string::docstring::Indentation::columns::h9e266497152669ca(arg1);
    char* result_1 = result;
    void* var_38 = &result[rbx];
    char rax_2;
    int32_t rdx;
    rax_2 = core::str::validations::next_code_point::hfc8b8c1898281fd8(&result_1, rbx);
    
    if (rax_2 & 1)
    {
        int32_t r13_1 = rdx;
        int64_t rbp_1 = 0;
        
        while (rbp_1 < rax)
        {
            void* result_2;
            uint64_t rdx_2;
            int64_t r13_2;
            
            if (r13_1 == 0x20)
            {
                label_726920:
                rbp_1 += 1;
                r13_2 = 1;
                label_726932:
                result_2 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::h28e9e81c5537bbed(r13_2, result, rbx);
                
                if (!result_2)
                {
                    core::str::slice_error_fail::h1a2885084e28d077(result, rbx, r13_2, rbx);
                    /* no return */
                }
            }
            else
            {
                if (r13_1 != 9)
                {
                    if (r13_1 - 9 < 5)
                        goto label_726920;
                    
                    if (r13_1 < 0x80)
                        break;
                    
                    if (!core::unicode::unicode_data::white_space::lookup::hae563f9e204d99ae(r13_1))
                        break;
                    
                    if (r13_1 >= 0x800)
                    {
                        r13_2 = 4 - 0;
                        rbp_1 += r13_2;
                    }
                    else
                    {
                        rbp_1 += 2;
                        r13_2 = 2;
                    }
                    
                    goto label_726932;
                }
                
                result_2 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::h28e9e81c5537bbed(1, result, rbx);
                
                if (!result_2)
                {
                    core::str::slice_error_fail::h1a2885084e28d077(result, rbx, 1, rbx);
                    /* no return */
                }
                
                rbp_1 = (rbp_1 & 0xfffffffffffffff8) + 8;
            }
            rbx = rdx_2;
            result = result_2;
            char rax_3;
            int32_t rdx_3;
            rax_3 = core::str::validations::next_code_point::hfc8b8c1898281fd8(&result_1, rbx);
            r13_1 = rdx_3;
            
            if (!(rax_3 & 1))
                break;
        }
    }
    
    return result;
}
