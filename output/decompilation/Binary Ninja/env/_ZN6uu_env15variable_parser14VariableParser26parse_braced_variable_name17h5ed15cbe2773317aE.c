
  uint64_t uu_env::variable_parser::VariableParser::parse_braced_variable_name::h5ed15cbe2773317a(int32_t* arg1, int64_t* arg2, int64_t arg3 @ r12)

{
    int64_t var_28 = arg3;
    int64_t r13 = arg2[4];
    int32_t result_1;
    uu_env::variable_parser::VariableParser::check_variable_name_start::hd163d333f3df61dd(
        &result_1, arg2);
    uint64_t result;
    int128_t var_60;
    uint64_t result_2;
    
    if (result_1 != 0xc)
    {
        label_471c62:
        result = result_2;
        *(arg1 + 0x20) = result;
        int128_t zmm0_1 = result_1;
        *(arg1 + 0x10) = var_60;
        *arg1 = zmm0_1;
    }
    else
    {
        for (int32_t i =
            uu_env::variable_parser::VariableParser::get_current_char::h2461897ac15abcf2(arg2); 
            i != 0x110000; 
            i = uu_env::variable_parser::VariableParser::get_current_char::h2461897ac15abcf2(arg2))
        {
            if (i < 0x80 && i - 0x30 >= 0xa && (i & 0x5f) - 0x41 > 0x19 && i != 0x5f)
            {
                int128_t var_6c;
                int64_t rbp_1;
                int64_t r15_1;
                
                if (i == 0x3a)
                {
                    rbp_1 = arg2[4];
                    
                    do
                    {
                        int32_t rax_1 = uu_env::variable_parser::VariableParser::get_current_char::h2461897ac15abcf2(arg2);
                        
                        if (rax_1 == 0x7d)
                        {
                            int64_t r15_2 = arg2[4];
                            uu_env::variable_parser::VariableParser::skip_one::hc689cd00633feaf8(
                                &result_1, arg2);
                            result = result_1;
                            
                            if (result != 0xc)
                                goto label_471dc9;
                            
                            result_1 = rbp_1 + 1;
                            *var_6c[4] = r15_2;
                            int64_t rax_4;
                            int64_t rdx_2;
                            rax_4 =
                                uu_env::string_parser::StringParser::substring::h41e33e0b14cc6cb7(
                                arg2, &result_1);
                            r15_1 = rax_4;
                            arg3 = rdx_2;
                            goto label_471d92;
                        }
                        
                        if (rax_1 == 0x110000)
                        {
                            result = arg2[4];
                            *arg1 = 6;
                            *(arg1 + 8) = result;
                            return result;
                        }
                        
                        uu_env::variable_parser::VariableParser::skip_one::hc689cd00633feaf8(
                            &result_1, arg2);
                        result = result_1;
                    } while (result == 0xc);
                    
                    goto label_471dc9;
                }
                
                if (i != 0x7d)
                {
                    int64_t r14_1 = arg2[4];
                    result_1 = 0;
                    char* rax_2;
                    uint64_t rdx_1;
                    rax_2 = core::char::methods::encode_utf8_raw::h5e8f6d90a161f6f4(i, &result_1);
                    int128_t var_48;
                    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hf510679057ea9fe7(&var_48, rax_2, rdx_1);
                    *arg1 = 8;
                    *(arg1 + 8) = r14_1;
                    *(arg1 + 0x10) = var_48;
                    uint64_t result_3;
                    result = result_3;
                    *(arg1 + 0x20) = result;
                }
                else
                {
                    rbp_1 = arg2[4];
                    uu_env::variable_parser::VariableParser::skip_one::hc689cd00633feaf8(&result_1, 
                        arg2);
                    result = result_1;
                    
                    if (result != 0xc)
                    {
                        label_471dc9:
                        arg1[9] = *result_2[4];
                        *(arg1 + 0x14) = var_60;
                        *(arg1 + 4) = var_6c;
                        *arg1 = result;
                    }
                    else
                    {
                        r15_1 = 0;
                        label_471d92:
                        result_1 = r13;
                        *var_6c[4] = rbp_1;
                        int64_t rdx_3;
                        result = uu_env::string_parser::StringParser::substring::h41e33e0b14cc6cb7(
                            arg2, &result_1);
                        *(arg1 + 8) = result;
                        *(arg1 + 0x10) = rdx_3;
                        *(arg1 + 0x18) = r15_1;
                        *(arg1 + 0x20) = arg3;
                        *arg1 = 0xc;
                    }
                }
                
                return result;
            }
            
            uu_env::variable_parser::VariableParser::skip_one::hc689cd00633feaf8(&result_1, arg2);
            
            if (result_1 != 0xc)
                goto label_471c62;
        }
        
        result = arg2[4];
        *arg1 = 4;
        *(arg1 + 8) = result;
    }
    return result;
}
