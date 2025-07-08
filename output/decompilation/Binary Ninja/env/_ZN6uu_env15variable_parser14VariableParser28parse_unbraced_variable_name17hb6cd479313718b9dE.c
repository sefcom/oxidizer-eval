
  int64_t uu_env::variable_parser::VariableParser::parse_unbraced_variable_name::hb6cd479313718b9d(int32_t* arg1, int64_t* arg2)

{
    int64_t r12 = arg2[4];
    int32_t var_48;
    uu_env::variable_parser::VariableParser::check_variable_name_start::hb2ef1afab325da6e(&var_48, 
        arg2);
    int64_t result;
    
    if (var_48 != 8)
    {
        label_4d5554:
        int64_t result_1;
        result = result_1;
        *(arg1 + 0x20) = result;
        int128_t zmm0_1 = var_48;
        int128_t var_38;
        *(arg1 + 0x10) = var_38;
        *arg1 = zmm0_1;
    }
    else
    {
        int32_t i =
            uu_env::variable_parser::VariableParser::get_current_char::h68b63febfc4461a0(arg2);
        
        if (i != 0x110000)
        {
            while (i == 0x5f || i - 0x30 < 0xa || (i & 0x1fffdf) - 0x41 <= 0x19)
            {
                uu_env::variable_parser::VariableParser::skip_one::h6221cbf058689bac(&var_48, arg2);
                
                if (var_48 != 8)
                    goto label_4d5554;
                
                i = uu_env::variable_parser::VariableParser::get_current_char::h68b63febfc4461a0(
                    arg2);
                
                if (i == 0x110000)
                    break;
            }
        }
        
        int64_t rax_3 = arg2[4];
        
        if (rax_3 != r12)
        {
            var_48 = r12;
            int64_t var_40_1 = rax_3;
            int64_t rdx_1;
            result =
                uu_env::string_parser::StringParser::substring::h93033379edd1d12f(arg2, &var_48);
            *(arg1 + 8) = result;
            *(arg1 + 0x10) = rdx_1;
            *arg1 = 8;
        }
        else
        {
            result =
                _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::he132dab3b8589a55(
                &arg1[4], "Missing variable namemissing var…", 0x15);
            *arg1 = 4;
            *(arg1 + 8) = r12;
        }
    }
    
    return result;
}
