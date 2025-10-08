
  int64_t alacritty_terminal::grid::Grid$LT$T$GT$::scroll_up::hf31756b0f8886f88(int64_t* arg1, int32_t arg2, int32_t arg3, int64_t arg4)

{
    int64_t rax;
    int64_t var_38 = rax;
    int64_t r15 = arg4;
    int32_t r12 = arg2;
    int32_t result;
    result = arg3 - arg2 > r15;
    arg4 = !arg2;
    arg4 |= result;
    
    if (arg4)
    {
        int64_t rdi = arg1[0x14];
        
        if (rdi)
            arg1[0x14] = core::cmp::Ord::min::h7c13e9bfb8ea3862(rdi + r15, arg1[0x15]);
        
        if (!r12)
        {
            alacritty_terminal::grid::Grid$LT$T$GT$::increase_scroll_limit::hd801cadf33b8cd65(arg1, 
                r15);
            int64_t rcx = arg1[2];
            
            if (!rcx)
            {
                core::panicking::panic_const::panic_const_rem_by_zero::hedb898bfe2cd5907();
                /* no return */
            }
            
            int64_t rax_6 = rcx - r15 + arg1[3];
            int32_t r12_1;
            
            if (!((rax_6 | rcx) >> 0x20))
            {
                arg1[3] = COMBINE(0, rax_6) % rcx;
                r12_1 = arg1[0x13];
                
                if (arg3 < r12_1)
                {
                    label_76d155:
                    
                    do
                    {
                        int32_t rdx_8 = r12_1 + ~r15;
                        r12_1 -= 1;
                        alacritty_terminal::grid::storage::Storage$LT$T$GT$::swap::hbe868b4d06836c04(arg1, r12_1, rdx_8);
                    } while (arg3 < r12_1);
                }
            }
            else
            {
                arg1[3] = COMBINE(0, rax_6) % rcx;
                r12_1 = arg1[0x13];
                
                if (arg3 < r12_1)
                    goto label_76d155;
            }
        }
        else
        {
            int32_t rbp_2 = arg3 - r15;
            
            if (r12 < rbp_2)
            {
                int32_t r13_1;
                
                do
                {
                    r13_1 = r12 + 1;
                    alacritty_terminal::grid::storage::Storage$LT$T$GT$::swap::hbe868b4d06836c04(
                        arg1, r12, r15 + r12);
                    r12 = r13_1;
                } while (r13_1 < rbp_2);
            }
        }
        
        result = arg3 - r15;
        
        if (result < arg3)
        {
            int32_t i_1 = -(r15);
            int32_t i;
            
            do
            {
                result = alacritty_terminal::grid::row::Row$LT$T$GT$::reset::h7a49f1c8f619314f(
                    _$LT$alacritty_terminal..grid..storage..Storage$LT$T$GT$$u20$as$u20$core..ops..index..Index$LT$alacritty_terminal..index..Line$GT$$GT$::index::h367087db943c6406(arg1, arg3 + i_1), 
                    *(arg1 + 0x4c));
                i = i_1;
                i_1 += 1;
            } while (i != 0xffffffff);
        }
    }
    else if (arg3 > r12)
    {
        int32_t rbp_3 = *(arg1 + 0x4c);
        int32_t r13_2;
        
        do
        {
            r13_2 = r12 + 1;
            result = alacritty_terminal::grid::row::Row$LT$T$GT$::reset::h7a49f1c8f619314f(
                _$LT$alacritty_terminal..grid..storage..Storage$LT$T$GT$$u20$as$u20$core..ops..index..Index$LT$alacritty_terminal..index..Line$GT$$GT$::index::h367087db943c6406(arg1, r12), 
                rbp_3);
            r12 = r13_2;
        } while (arg3 != r13_2);
    }
    
    return result;
}
