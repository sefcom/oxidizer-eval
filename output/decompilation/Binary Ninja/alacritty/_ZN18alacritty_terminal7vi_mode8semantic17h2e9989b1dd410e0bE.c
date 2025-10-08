
  int64_t alacritty_terminal::vi_mode::semantic::h2e9989b1dd410e0b(void* arg1, int64_t arg2, int32_t arg3, int32_t arg4, int32_t arg5)

{
    char r12 = arg4;
    char var_4d = r12;
    int32_t r15_1 = arg5 ^ arg4;
    char var_48 = r15_1;
    char var_4c = arg4;
    char rax_1;
    
    if (r15_1 != 1)
        rax_1 = r12;
    else if (!alacritty_terminal::vi_mode::is_boundary::hba662b27551b81b2(arg1, arg2, arg3, r12))
    {
        int64_t rax_2;
        rax_2 =
            alacritty_terminal::vi_mode::semantic::_$u7b$$u7b$closure$u7d$$u7d$::h6ed5e1985e6fd4fb(
            arg1, &var_4d, arg2, arg3);
        arg2 = rax_2;
        rax_1 = var_4d;
    }
    else
        rax_1 = r12;
    
    int64_t result_2;
    int32_t rdx_1;
    result_2 = alacritty_terminal::term::Term$LT$T$GT$::expand_wide::h832c6afc1f08b7ff(arg1, arg2, 
        arg3, rax_1 & 1);
    int64_t result_4;
    int32_t rdx_2;
    result_4 =
        alacritty_terminal::vi_mode::advance::hc21938dab0a7b062(arg1, result_2, rdx_1, var_4d);
    int64_t result_3 = result_4;
    int32_t r15_2 = rdx_2;
    char rbx_2 = var_4d;
    int32_t rcx_6;
    int64_t result_1;
    char r15_3;
    
    if (!alacritty_terminal::vi_mode::is_boundary::hba662b27551b81b2(arg1, result_2, rdx_1, rbx_2))
    {
        char rax_4 =
            alacritty_terminal::vi_mode::is_space::h2c1eb68d688e4f50(arg1, result_3, r15_2);
        rbx_2 = var_4d;
        
        if (!rax_4)
        {
            rcx_6 = rdx_1;
            result_1 = result_2;
        }
        else
        {
            char i;
            
            do
            {
                int64_t result_5;
                int32_t rdx_6;
                result_5 = alacritty_terminal::vi_mode::advance::hc21938dab0a7b062(arg1, result_3, 
                    r15_2, rbx_2);
                rbx_2 = var_4d;
                
                if (alacritty_terminal::vi_mode::is_boundary::hba662b27551b81b2(arg1, result_3, 
                    r15_2, rbx_2))
                {
                    rcx_6 = r15_2;
                    result_1 = result_3;
                    break;
                }
                
                i = alacritty_terminal::vi_mode::is_space::h2c1eb68d688e4f50(arg1, result_5, rdx_6);
                rbx_2 = var_4d;
                result_1 = result_3;
                rcx_6 = r15_2;
                r15_2 = rdx_6;
                result_3 = result_5;
            } while (i);
        }
        
        r15_3 = var_48;
    }
    else
    {
        rcx_6 = rdx_1;
        r15_3 = var_48;
        result_1 = result_2;
    }
    
    int32_t rbp_3 = rbx_2 & 1;
    int64_t result;
    int32_t rdx_10;
    
    if (!alacritty_terminal::vi_mode::is_boundary::hba662b27551b81b2(arg1, result_1, rcx_6, rbp_3))
    {
        result =
            alacritty_terminal::vi_mode::advance::hc21938dab0a7b062(arg1, result_1, rcx_6, rbp_3);
        
        if (!var_4c)
            result = alacritty_terminal::term::Term$LT$T$GT$::expand_wide::h832c6afc1f08b7ff(arg1, 
                result, rdx_10, var_4d);
    }
    else
    {
        rdx_10 = rcx_6;
        result = result_1;
    }
    
    if (r15_3)
        return result;
    
    if (!alacritty_terminal::vi_mode::is_boundary::hba662b27551b81b2(arg1, result, rdx_10, var_4d))
        return 
            alacritty_terminal::vi_mode::semantic::_$u7b$$u7b$closure$u7d$$u7d$::h6ed5e1985e6fd4fb(
            arg1, &var_4d, result, rdx_10);
    
    return result;
}
