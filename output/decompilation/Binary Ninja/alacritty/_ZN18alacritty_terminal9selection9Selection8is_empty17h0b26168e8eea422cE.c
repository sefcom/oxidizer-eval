
  uint64_t alacritty_terminal::selection::Selection::is_empty::h0b26168e8eea422c(int128_t* arg1)

{
    uint64_t result = arg1[3];
    
    if (result - 2 < 2)
    {
        int64_t rax;
        rax = 0;
        return 0;
    }
    
    if (result)
    {
        int64_t rcx_4 = *arg1;
        char rsi_3 = arg1[1];
        int64_t rdx_2 = *(arg1 + 0x18);
        bool rdi_3 = *(arg1 + 0x28);
        
        if (rcx_4 == rdx_2)
            result = 1;
        
        if (rcx_4 != rdx_2 || (rdi_3 ^ rsi_3) & 1)
        {
            if (rcx_4 + 1 == rdx_2)
            {
                rdi_3 &= 1;
                result = 1;
            }
            
            if (rcx_4 + 1 != rdx_2 || !(rsi_3 & !rdi_3))
            {
                bool rax_3 = rdi_3;
                
                if (rsi_3 & 1)
                    rax_3 = false;
                
                if (rdx_2 + 1 != rcx_4)
                    rax_3 = false;
                
                return rax_3 & 1;
            }
        }
    }
    else
    {
        char rax_1 = *(arg1 + 0x28);
        int128_t var_28 = *(arg1 + 0x18);
        int128_t var_48 = *arg1;
        char rax_2 = arg1[1];
        int32_t rbx_1 = *var_48[8];
        int32_t rbp_1 = *var_28[8];
        
        if (_$LT$alacritty_terminal..index..Point$LT$L$C$C$GT$$u20$as$u20$core..cmp..Ord$GT$::cmp::h96fd75b64b1be1c4(var_48, rbx_1, var_28, rbp_1) > 0)
        {
            core::intrinsics::typed_swap_nonoverlapping::h3ee0142b4e3b51c2(&var_48, &var_28);
            rbx_1 = *var_48[8];
            rbp_1 = *var_28[8];
        }
        
        if (rbx_1 != rbp_1)
            result = 0;
        else
        {
            int64_t rcx_2 = var_48;
            int64_t rdx_1 = var_28;
            result = 1;
            
            if (!(rcx_2 == rdx_1 & rax_2 == rax_1))
            {
                result = !rax_1;
                
                if ((rax_2 & result) != 1)
                    result = 0;
                else
                    result = rcx_2 + 1 == rdx_1;
            }
        }
    }
    
    result &= 1;
    return result;
}
