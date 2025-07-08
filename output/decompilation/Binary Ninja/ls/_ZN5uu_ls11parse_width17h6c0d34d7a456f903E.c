
  uint16_t uu_ls::parse_width::h6c0d34d7a456f903(char* arg1, void* arg2)

{
    uint16_t result;
    char result_1;
    
    if (!arg2)
    {
        int64_t var_20;
        std::env::var_os::h00ce706604dc1520(&var_20, "COLUMNS: ignoring invalid width …");
        
        if (var_20 != -0x8000000000000000)
        {
            int64_t var_10;
            int64_t var_48_1 = var_10;
            result_1 = var_20;
            result = uu_ls::parse_width::_$u7b$$u7b$closure$u7d$$u7d$::h0185f2defe4792c8(&result_1);
        }
        else
        {
            int32_t rax_1 = terminal_size::unix::terminal_size::h9cd9ea50976260ba();
            result = 0x50;
            
            if (rax_1)
                result = rax_1 >> 0x10;
        }
        
        *(arg1 + 2) = result;
        *arg1 = 7;
    }
    else
    {
        uu_ls::parse_width::_$u7b$$u7b$closure$u7d$$u7d$::h592058b1caa92954(&result_1, *(arg2 + 8), 
            *(arg2 + 0x10));
        result = result_1;
        uint16_t result_2;
        
        if (result != 7)
        {
            int32_t var_24;
            *(arg1 + 0x34) = var_24;
            int128_t var_34;
            *(arg1 + 0x24) = var_34;
            int64_t var_48;
            *(arg1 + 0x14) = *var_48[4];
            int128_t var_54;
            *(arg1 + 4) = var_54;
            *arg1 = result;
            char var_57;
            arg1[1] = var_57;
            *(arg1 + 2) = result_2;
        }
        else
        {
            result = result_2;
            *(arg1 + 2) = result;
            *arg1 = 7;
        }
    }
    return result;
}
