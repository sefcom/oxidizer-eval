
  uint32_t alacritty_terminal::grid::Grid$LT$T$GT$::scroll_down::hcd50b72e74cc8cd9(void* arg1, int32_t arg2, int32_t arg3, int64_t arg4)

{
    int64_t rax;
    int64_t var_38 = rax;
    int32_t r12 = arg3;
    int32_t r14 = arg2;
    uint32_t result = arg3 - arg2;
    
    if (result <= arg4)
    {
        if (r12 > r14)
        {
            int32_t rbp_2 = *(arg1 + 0x4c);
            int32_t r13_1;
            
            do
            {
                r13_1 = r14 + 1;
                result = alacritty_terminal::grid::row::Row$LT$T$GT$::reset::h7a49f1c8f619314f(
                    _$LT$alacritty_terminal..grid..storage..Storage$LT$T$GT$$u20$as$u20$core..ops..index..Index$LT$alacritty_terminal..index..Line$GT$$GT$::index::h367087db943c6406(arg1, r14), 
                    rbp_2);
                r14 = r13_1;
            } while (r12 != r13_1);
        }
    }
    else if (!*(arg1 + 0xa8))
    {
        int32_t rax_4 = *(arg1 + 0x98);
        
        if (r12 < rax_4)
        {
            int32_t rbp_3;
            
            do
            {
                rbp_3 = r12 + 1;
                alacritty_terminal::grid::storage::Storage$LT$T$GT$::swap::hbe868b4d06836c04(arg1, 
                    r12, r12 + -(arg4));
                r12 = rbp_3;
            } while (rax_4 != rbp_3);
        }
        
        int64_t rcx = *(arg1 + 0x10);
        
        if (!rcx)
        {
            core::panicking::panic_const::panic_const_rem_by_zero::hedb898bfe2cd5907();
            /* no return */
        }
        
        int64_t rax_6 = *(arg1 + 0x18) + arg4;
        
        if (!((rax_6 | rcx) >> 0x20))
        {
            int32_t temp2_2 = rcx;
            result = COMBINE(0, rax_6) / temp2_2;
            *(arg1 + 0x18) = COMBINE(0, rax_6) % temp2_2;
            
            if (arg4)
            {
                label_76c98e:
                int32_t rbp_4 = *(arg1 + 0x4c);
                int64_t rsi_6 = 0;
                int64_t r13_4;
                
                do
                {
                    r13_4 = rsi_6 + 1;
                    result = alacritty_terminal::grid::row::Row$LT$T$GT$::reset::h7a49f1c8f619314f(
                        _$LT$alacritty_terminal..grid..storage..Storage$LT$T$GT$$u20$as$u20$core..ops..index..Index$LT$alacritty_terminal..index..Line$GT$$GT$::index::h367087db943c6406(arg1, rsi_6), 
                        rbp_4);
                    rsi_6 = r13_4;
                } while (arg4 != r13_4);
            }
        }
        else
        {
            int64_t rdx_7 = 0;
            int32_t temp2_1 = rcx;
            result = COMBINE(rdx_7, rax_6) / temp2_1;
            *(arg1 + 0x18) = COMBINE(rdx_7, rax_6) % temp2_1;
            
            if (arg4)
                goto label_76c98e;
        }
        
        if (r14 > 0)
        {
            int32_t rsi_8 = 0;
            int32_t rbp_5;
            
            do
            {
                rbp_5 = rsi_8 + 1;
                result =
                    alacritty_terminal::grid::storage::Storage$LT$T$GT$::swap::hbe868b4d06836c04(
                    arg1, rsi_8, arg4 + rsi_8);
                rsi_8 = rbp_5;
            } while (r14 != rbp_5);
        }
    }
    else
    {
        int32_t rbp_1 = r14 + arg4;
        
        while (rbp_1 < r12)
        {
            int32_t rdx = ~arg4 + r12;
            r12 -= 1;
            result = alacritty_terminal::grid::storage::Storage$LT$T$GT$::swap::hbe868b4d06836c04(
                arg1, r12, rdx);
        }
        
        if (r14 < rbp_1)
        {
            int32_t r15_2 = *(arg1 + 0x4c);
            
            do
            {
                rbp_1 -= 1;
                result = alacritty_terminal::grid::row::Row$LT$T$GT$::reset::h7a49f1c8f619314f(
                    _$LT$alacritty_terminal..grid..storage..Storage$LT$T$GT$$u20$as$u20$core..ops..index..Index$LT$alacritty_terminal..index..Line$GT$$GT$::index::h367087db943c6406(arg1, rbp_1), 
                    r15_2);
            } while (r14 < rbp_1);
        }
    }
    
    return result;
}
