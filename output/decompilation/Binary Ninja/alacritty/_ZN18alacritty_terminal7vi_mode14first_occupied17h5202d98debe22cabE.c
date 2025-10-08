
  int64_t alacritty_terminal::vi_mode::first_occupied::h5202d98debe22cab(void* arg1, int64_t arg2, int32_t arg3)

{
    int64_t result_3 = *(arg1 + 0xb8) - 1;
    int64_t result_4 = result_3;
    int64_t rax;
    int32_t rdx;
    rax = alacritty_terminal::term::Term$LT$T$GT$::expand_wide::h832c6afc1f08b7ff(arg1, arg2, arg3, 
        0);
    char var_80;
    alacritty_terminal::vi_mode::first_occupied_in_line::h19350108178722bc(&var_80, arg1, rdx);
    int32_t r13 = rdx;
    int64_t result = result_3;
    
    if (var_80)
    {
        int32_t var_70;
        r13 = var_70;
        int64_t result_1;
        result = result_1;
    }
    
    if ((rax == result & rdx == r13) == 1)
    {
        int64_t rax_1 = *(arg1 + 0x50);
        int32_t r12_1 = 0;
        
        if (rax_1 >= *(arg1 + 0xc0))
            r12_1 = rax_1 - *(arg1 + 0xc0);
        
        int32_t r12_2 = -(r12_1);
        void* var_68;
        int32_t rdx_4;
        
        if (rdx <= r12_2)
        {
            var_80 = rdx;
            var_68 = arg1;
            char* var_60_1 = &var_80;
            int64_t* var_58_1 = &result_4;
            result = alacritty_terminal::vi_mode::first_occupied::_$u7b$$u7b$closure$u7d$$u7d$::h799fa8e0d74eb071(&var_68);
        }
        else
        {
            char r15_1 = 0;
            int32_t rbp_1 = rdx;
            int64_t result_2;
            
            do
            {
                rbp_1 -= 1;
                
                if (!alacritty_terminal::vi_mode::is_wrap::h0d49787c150cddfa(arg1, result_3, rbp_1))
                    break;
                
                char var_48;
                alacritty_terminal::vi_mode::first_occupied_in_line::h19350108178722bc(&var_48, 
                    arg1, rbp_1);
                char rax_4 = var_48;
                int64_t result_5;
                
                if (rax_4)
                    result_2 = result_5;
                r15_1 |= rax_4;
            } while (rbp_1 > r12_2);
            
            var_80 = rdx;
            var_68 = arg1;
            char* var_60_2 = &var_80;
            int64_t* var_58_2 = &result_4;
            result = result_2;
            
            if (!(r15_1 & 1))
                result = alacritty_terminal::vi_mode::first_occupied::_$u7b$$u7b$closure$u7d$$u7d$::h799fa8e0d74eb071(&var_68);
        }
    }
    
    return result;
}
