
  int64_t alacritty_terminal::vi_mode::word::h0b987598d52d32e0(void* arg1, int64_t arg2, int32_t arg3, char arg4, char arg5)

{
    int64_t rax;
    int64_t var_38 = rax;
    int64_t result_1;
    int32_t rdx;
    result_1 = alacritty_terminal::term::Term$LT$T$GT$::expand_wide::h832c6afc1f08b7ff(arg1, arg2, 
        arg3, arg4);
    int64_t result = result_1;
    int32_t rbp = rdx;
    
    if (arg4 == arg5)
    {
        uint32_t r15_2 = arg4;
        void* rdi_8 = arg1;
        int64_t result_6 = result;
        int32_t rdx_10 = rbp;
        
        while (true)
        {
            int64_t result_4;
            int32_t rdx_11;
            result_4 = alacritty_terminal::vi_mode::advance::hc21938dab0a7b062(rdi_8, result_6, 
                rdx_10, r15_2);
            
            if (alacritty_terminal::vi_mode::is_boundary::hba662b27551b81b2(arg1, result, rbp, 
                    r15_2))
                break;
            
            if (!alacritty_terminal::vi_mode::is_space::h2c1eb68d688e4f50(arg1, result_4, rdx_11))
                break;
            
            result = result_4;
            rbp = rdx_11;
            rdi_8 = arg1;
            result_6 = result_4;
            rdx_10 = rdx_11;
        }
        
        void* rdi_11 = arg1;
        int64_t result_7 = result;
        int32_t rdx_14 = rbp;
        
        while (true)
        {
            int64_t result_5;
            int32_t rdx_15;
            result_5 = alacritty_terminal::vi_mode::advance::hc21938dab0a7b062(rdi_11, result_7, 
                rdx_14, r15_2);
            
            if (alacritty_terminal::vi_mode::is_boundary::hba662b27551b81b2(arg1, result, rbp, 
                    r15_2))
                break;
            
            if (alacritty_terminal::vi_mode::is_space::h2c1eb68d688e4f50(arg1, result_5, rdx_15))
                break;
            
            result = result_5;
            rbp = rdx_15;
            rdi_11 = arg1;
            result_7 = result_5;
            rdx_14 = rdx_15;
        }
    }
    else
    {
        uint32_t r15_1 = arg4;
        
        if (!alacritty_terminal::vi_mode::is_boundary::hba662b27551b81b2(arg1, result, rbp, r15_1))
        {
            char i;
            
            do
            {
                if (alacritty_terminal::vi_mode::is_space::h2c1eb68d688e4f50(arg1, result, rbp))
                    break;
                
                int64_t result_2;
                int32_t rdx_4;
                result_2 = alacritty_terminal::vi_mode::advance::hc21938dab0a7b062(arg1, result, 
                    rbp, r15_1);
                result = result_2;
                rbp = rdx_4;
                i = alacritty_terminal::vi_mode::is_boundary::hba662b27551b81b2(arg1, result_2, 
                    rdx_4, r15_1);
            } while (!i);
        }
        
        if (!alacritty_terminal::vi_mode::is_boundary::hba662b27551b81b2(arg1, result, rbp, r15_1))
        {
            char i_1;
            
            do
            {
                if (!alacritty_terminal::vi_mode::is_space::h2c1eb68d688e4f50(arg1, result, rbp))
                    break;
                
                int64_t result_3;
                int32_t rdx_8;
                result_3 = alacritty_terminal::vi_mode::advance::hc21938dab0a7b062(arg1, result, 
                    rbp, r15_1);
                result = result_3;
                rbp = rdx_8;
                i_1 = alacritty_terminal::vi_mode::is_boundary::hba662b27551b81b2(arg1, result_3, 
                    rdx_8, r15_1);
            } while (!i_1);
        }
    }
    
    return result;
}
