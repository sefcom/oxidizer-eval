
  int64_t uu_env::variable_parser::VariableParser::parse_unbraced_variable_name::hac50d30206de8963(int32_t* arg1, int64_t* arg2)

{
    int64_t r12 = arg2[4];
    int32_t var_48;
    uu_env::variable_parser::VariableParser::check_variable_name_start::hd163d333f3df61dd(&var_48, 
        arg2);
    int64_t result;
    
    if (var_48 != 0xc)
    {
        label_471e7f:
        int64_t result_2;
        result = result_2;
        *(arg1 + 0x20) = result;
        int128_t zmm0_1 = var_48;
        int128_t var_38;
        *(arg1 + 0x10) = var_38;
        *arg1 = zmm0_1;
    }
    else
    {
        int32_t i =
            uu_env::variable_parser::VariableParser::get_current_char::h2461897ac15abcf2(arg2);
        
        if (i != 0x110000)
        {
            while (i == 0x5f || i - 0x30 < 0xa || (i & 0x1fffdf) - 0x41 < 0x1a)
            {
                uu_env::variable_parser::VariableParser::skip_one::hc689cd00633feaf8(&var_48, arg2);
                
                if (var_48 != 0xc)
                    goto label_471e7f;
                
                i = uu_env::variable_parser::VariableParser::get_current_char::h2461897ac15abcf2(
                    arg2);
                
                if (i == 0x110000)
                    break;
            }
        }
        
        result = arg2[4];
        
        if (result != r12)
        {
            var_48 = r12;
            int64_t result_1 = result;
            int64_t rdx_1;
            result =
                uu_env::string_parser::StringParser::substring::h41e33e0b14cc6cb7(arg2, &var_48);
            *(arg1 + 8) = result;
            *(arg1 + 0x10) = rdx_1;
            *arg1 = 0xc;
        }
        else
        {
            *arg1 = 5;
            *(arg1 + 8) = r12;
        }
    }
    
    return result;
}
