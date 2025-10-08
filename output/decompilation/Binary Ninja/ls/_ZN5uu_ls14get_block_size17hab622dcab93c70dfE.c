
  int64_t uu_ls::get_block_size::hab622dcab93c70df(int32_t arg1, int64_t arg2, int64_t arg3, char arg4)

{
    int64_t result;
    
    if (((arg1 & 0xb000) | 0x4000) != 0x6000)
    {
        result = arg2 << 9;
        
        if (arg4)
            return result;
    }
    else
    {
        result = 0;
        
        if (arg4)
            return result;
    }
    
    if (!arg3)
    {
        int64_t result_1 = result;
        core::panicking::panic_const::panic_const_div_by_zero::hc7d962fcb87948a3();
        /* no return */
    }
    
    if (!((result | arg3) >> 0x20))
        return COMBINE(0, result) / arg3;
    
    return COMBINE(0, result) / arg3;
}
