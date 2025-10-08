
  int32_t* uu_env::variable_parser::VariableParser::parse_variable::h7989a880208e7e71(int32_t* arg1, int64_t* arg2)

{
    int64_t* r14 = *arg2;
    int32_t var_38;
    uu_env::variable_parser::VariableParser::skip_one::hc689cd00633feaf8(&var_38, r14);
    int128_t var_28;
    int64_t var_18;
    
    if (var_38 != 0xc)
    {
        label_471f55:
        *(arg1 + 0x20) = var_18;
        int128_t zmm0_1 = var_38;
        *(arg1 + 0x10) = var_28;
        *arg1 = zmm0_1;
    }
    else
    {
        int32_t rax_1 =
            uu_env::variable_parser::VariableParser::get_current_char::h2461897ac15abcf2(r14);
        int32_t var_34;
        int128_t var_30;
        int64_t rax_4;
        int64_t rcx_1;
        int64_t rdx_1;
        int64_t rsi_3;
        
        if (rax_1 == 0x7b)
        {
            uu_env::variable_parser::VariableParser::skip_one::hc689cd00633feaf8(&var_38, r14);
            
            if (var_38 != 0xc)
                goto label_471f55;
            
            int64_t r12;
            uu_env::variable_parser::VariableParser::parse_braced_variable_name::h5ed15cbe2773317a(
                &var_38, r14, r12);
            int32_t rax_3 = var_38;
            
            if (rax_3 != 0xc)
            {
                *arg1 = rax_3;
                arg1[1] = var_34;
                *(arg1 + 8) = var_30;
                *(arg1 + 0x18) = var_28;
            }
            else
            {
                rax_4 = var_30;
                rcx_1 = var_28;
                rdx_1 = *var_28[8];
                rsi_3 = var_18;
                label_471f93:
                *(arg1 + 8) = rax_4;
                *(arg1 + 0x10) = rcx_1;
                *(arg1 + 0x18) = rdx_1;
                *(arg1 + 0x20) = rsi_3;
                *arg1 = 0xc;
            }
        }
        else if (rax_1 != 0x110000)
        {
            rsi_3 = uu_env::variable_parser::VariableParser::parse_unbraced_variable_name::hac50d30206de8963(&var_38, r14);
            int32_t rax_7 = var_38;
            
            if (rax_7 == 0xc)
            {
                rax_4 = var_30;
                rcx_1 = var_28;
                rdx_1 = 0;
                goto label_471f93;
            }
            
            *(arg1 + 0x18) = var_28;
            *arg1 = rax_7;
            arg1[1] = var_34;
            *(arg1 + 8) = var_30;
        }
        else
        {
            int64_t rax_2 = r14[4];
            *arg1 = 5;
            *(arg1 + 8) = rax_2;
        }
    }
    return arg1;
}
