
  uint16_t uu_ls::parse_width::h699105a2614aa38f(int64_t* arg1, void* arg2)

{
    uint16_t result;
    
    if (!arg2)
    {
        int64_t var_28;
        std::env::var_os::h584be2191f4a6db4(&var_28, "COLUMNS: ignoring invalid width …");
        
        if (var_28 != -0x8000000000000000)
            result = uu_ls::parse_width::_$u7b$$u7b$closure$u7d$$u7d$::h834e84f58277f74a(&var_28);
        else
        {
            int32_t rax_1 = terminal_size::unix::terminal_size::h0533c5cb6376a2e5();
            result = 0x50;
            
            if (rax_1 & 1)
                result = rax_1 >> 0x10;
        }
    }
    else
    {
        int64_t var_58;
        uu_ls::parse_width::_$u7b$$u7b$closure$u7d$$u7d$::hbcfe9c82ddd5108a(&var_58, *(arg2 + 8), 
            *(arg2 + 0x10));
        int64_t rcx_1 = var_58;
        uint16_t result_1;
        result = result_1;
        
        if (rcx_1 != -0x7ffffffffffffffa)
        {
            int64_t var_30;
            arg1[5] = var_30;
            int128_t var_3e;
            *(arg1 + 0x1a) = var_3e;
            int128_t var_4e;
            *(arg1 + 0xa) = var_4e;
            *arg1 = rcx_1;
            arg1[1] = result;
            return result;
        }
    }
    
    arg1[1] = result;
    *arg1 = -0x7ffffffffffffffa;
    return result;
}
