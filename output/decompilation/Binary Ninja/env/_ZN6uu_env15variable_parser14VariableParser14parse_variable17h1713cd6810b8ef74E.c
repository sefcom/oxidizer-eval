
  int32_t* uu_env::variable_parser::VariableParser::parse_variable::h1713cd6810b8ef74(int32_t* arg1, int64_t* arg2)

{
    int64_t* r14 = *arg2;
    int32_t var_38;
    uu_env::variable_parser::VariableParser::skip_one::h6221cbf058689bac(&var_38, r14);
    int128_t var_28;
    int64_t var_18;
    
    if (var_38 != 8)
    {
        label_4d563e:
        *(arg1 + 0x20) = var_18;
        int128_t zmm0_1 = var_38;
        *(arg1 + 0x10) = var_28;
        *arg1 = zmm0_1;
    }
    else
    {
        int32_t rax_1 =
            uu_env::variable_parser::VariableParser::get_current_char::h68b63febfc4461a0(r14);
        int32_t var_34;
        int128_t var_30;
        int64_t rax_3;
        int64_t rcx_1;
        int64_t rdx_1;
        int64_t rsi_3;
        
        if (rax_1 == 0x7b)
        {
            uu_env::variable_parser::VariableParser::skip_one::h6221cbf058689bac(&var_38, r14);
            
            if (var_38 != 8)
                goto label_4d563e;
            
            int64_t r12;
            uu_env::variable_parser::VariableParser::parse_braced_variable_name::h06c067d5ba361416(
                &var_38, r14, r12);
            int32_t rax_2 = var_38;
            
            if (rax_2 != 8)
            {
                *arg1 = rax_2;
                arg1[1] = var_34;
                *(arg1 + 8) = var_30;
                *(arg1 + 0x18) = var_28;
            }
            else
            {
                rax_3 = var_30;
                rcx_1 = var_28;
                rdx_1 = *var_28[8];
                rsi_3 = var_18;
                label_4d567c:
                *(arg1 + 8) = rax_3;
                *(arg1 + 0x10) = rcx_1;
                *(arg1 + 0x18) = rdx_1;
                *(arg1 + 0x20) = rsi_3;
                *arg1 = 8;
            }
        }
        else if (rax_1 != 0x110000)
        {
            rsi_3 = uu_env::variable_parser::VariableParser::parse_unbraced_variable_name::hb6cd479313718b9d(&var_38, r14);
            int32_t rax_6 = var_38;
            
            if (rax_6 == 8)
            {
                rax_3 = var_30;
                rcx_1 = var_28;
                rdx_1 = 0;
                goto label_4d567c;
            }
            
            *(arg1 + 0x18) = var_28;
            *arg1 = rax_6;
            arg1[1] = var_34;
            *(arg1 + 8) = var_30;
        }
        else
        {
            int64_t r14_1 = r14[4];
            _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::he132dab3b8589a55(
                &arg1[4], "missing variable name", 0x15);
            *arg1 = 4;
            *(arg1 + 8) = r14_1;
        }
    }
    return arg1;
}
