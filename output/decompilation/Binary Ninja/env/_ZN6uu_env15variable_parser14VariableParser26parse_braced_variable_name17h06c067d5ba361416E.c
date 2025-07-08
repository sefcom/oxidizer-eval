
  int128_t* uu_env::variable_parser::VariableParser::parse_braced_variable_name::h06c067d5ba361416(int32_t* arg1, int64_t* arg2, int64_t arg3 @ r12)

{
    int64_t var_28 = arg3;
    int64_t r13 = arg2[4];
    int32_t result_1;
    uu_env::variable_parser::VariableParser::check_variable_name_start::hb2ef1afab325da6e(
        &result_1, arg2);
    int128_t* result;
    int128_t var_68;
    int128_t* result_2;
    
    if (result_1 != 8)
    {
        label_4d5324:
        result = result_2;
        *(arg1 + 0x20) = result;
        int128_t zmm0_1 = result_1;
        *(arg1 + 0x10) = var_68;
        *arg1 = zmm0_1;
    }
    else
    {
        int32_t rax_1 =
            uu_env::variable_parser::VariableParser::get_current_char::h68b63febfc4461a0(arg2);
        int64_t r14_1;
        uint64_t rdx_1;
        void* const rsi_1;
        int64_t* rdi_4;
        
        if (rax_1 == 0x110000)
        {
            label_4d52ff:
            r14_1 = arg2[4];
            rdi_4 = &arg1[4];
            rsi_1 = "Missing closing braceMissing clo…";
            rdx_1 = 0x15;
            label_4d5313:
            result =
                _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::he132dab3b8589a55(
                rdi_4, rsi_1, rdx_1);
        }
        else
        {
            while (true)
            {
                if (rax_1 <= 0x7f && rax_1 - 0x30 >= 0xa && (rax_1 & 0x5f) - 0x41 > 0x19
                    && rax_1 != 0x5f)
                {
                    int64_t rbp_1;
                    int64_t r15_1;
                    
                    if (rax_1 == 0x3a)
                    {
                        rbp_1 = arg2[4];
                        
                        do
                        {
                            int32_t rax_2 = uu_env::variable_parser::VariableParser::get_current_char::h68b63febfc4461a0(arg2);
                            
                            if (rax_2 == 0x7d)
                            {
                                int64_t r15_2 = arg2[4];
                                uu_env::variable_parser::VariableParser::skip_one::h6221cbf058689bac(&result_1, arg2);
                                result = result_1;
                                
                                if (result != 8)
                                    goto label_4d5492;
                                
                                result_1 = rbp_1 + 1;
                                int64_t var_70_2 = r15_2;
                                int64_t rax_4;
                                int64_t rdx_2;
                                rax_4 = uu_env::string_parser::StringParser::substring::h93033379edd1d12f(arg2, &result_1);
                                r15_1 = rax_4;
                                arg3 = rdx_2;
                                goto label_4d545e;
                            }
                            
                            if (rax_2 == 0x110000)
                            {
                                r14_1 = arg2[4];
                                rdi_4 = &arg1[4];
                                rsi_1 = "Missing closing brace after defa…";
                                rdx_1 = 0x29;
                                goto label_4d5313;
                            }
                            
                            uu_env::variable_parser::VariableParser::skip_one::h6221cbf058689bac(
                                &result_1, arg2);
                            result = result_1;
                        } while (result == 8);
                    }
                    else
                    {
                        if (rax_1 != 0x7d)
                        {
                            int32_t var_44 = rax_1;
                            r14_1 = arg2[4];
                            int32_t* var_40 = &var_44;
                            int64_t (* var_38_1)(int32_t* arg1, int64_t* arg2) =
                                _$LT$char$u20$as$u20$core..fmt..Display$GT$::fmt::hfe75cd72bcd9c522;
                            result_1 = &data_548e48;
                            int64_t var_70_1 = 2;
                            int64_t var_58 = 0;
                            var_68 = &var_40;
                            *var_68[8] = 1;
                            result = core::option::Option$LT$T$GT$::map_or_else::ha7b9eb55e1cbc84d(
                                &arg1[4], &result_1);
                            break;
                        }
                        
                        rbp_1 = arg2[4];
                        uu_env::variable_parser::VariableParser::skip_one::h6221cbf058689bac(
                            &result_1, arg2);
                        result = result_1;
                        
                        if (result == 8)
                        {
                            r15_1 = 0;
                            label_4d545e:
                            result_1 = r13;
                            int64_t var_70_3 = rbp_1;
                            int64_t rdx_3;
                            result =
                                uu_env::string_parser::StringParser::substring::h93033379edd1d12f(
                                arg2, &result_1);
                            *(arg1 + 8) = result;
                            *(arg1 + 0x10) = rdx_3;
                            *(arg1 + 0x18) = r15_1;
                            *(arg1 + 0x20) = arg3;
                            *arg1 = 8;
                            return result;
                        }
                    }
                    label_4d5492:
                    arg1[9] = *result_2[4];
                    *(arg1 + 0x14) = var_68;
                    int128_t var_74;
                    *(arg1 + 4) = var_74;
                    *arg1 = result;
                    return result;
                }
                
                uu_env::variable_parser::VariableParser::skip_one::h6221cbf058689bac(&result_1, 
                    arg2);
                
                if (result_1 != 8)
                    goto label_4d5324;
                
                rax_1 =
                    uu_env::variable_parser::VariableParser::get_current_char::h68b63febfc4461a0(
                    arg2);
                
                if (rax_1 == 0x110000)
                    goto label_4d52ff;
            }
        }
        *arg1 = 4;
        *(arg1 + 8) = r14_1;
    }
    return result;
}
