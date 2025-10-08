
  int64_t alacritty_terminal::index::Point::sub::h2a90a9a53ccead04(int64_t arg1, int32_t arg2, void* arg3, int64_t arg4)

{
    int64_t r10 = *(arg3 + 0x90);
    
    if (!r10)
    {
        core::panicking::panic_const::panic_const_div_by_zero::hc7d962fcb87948a3();
        /* no return */
    }
    
    int64_t rax = 0;
    
    if (arg4 + r10 - 1 >= arg1)
        rax = arg4 + r10 - 1 - arg1;
    
    uint32_t r9;
    
    if (!((rax | r10) >> 0x20))
        r9 = COMBINE(0, rax) / r10;
    else
        r9 = COMBINE(0, rax) / r10;
    
    uint64_t rdx_10;
    
    if (!((arg4 | r10) >> 0x20))
        rdx_10 = COMBINE(0, arg4) % r10;
    else
        rdx_10 = COMBINE(0, arg4) % r10;
    
    int64_t rdi_1 = arg1 + r10 - rdx_10;
    int32_t rsi = arg2 - r9;
    
    if (!((rdi_1 | r10) >> 0x20))
        /* tailcall */
        return alacritty_terminal::index::Point::grid_clamp::h0af70e6c7939b3f8(
            COMBINE(0, rdi_1) % r10, rsi, arg3);
    
    /* tailcall */
    return alacritty_terminal::index::Point::grid_clamp::h0af70e6c7939b3f8(COMBINE(0, rdi_1) % r10, 
        rsi, arg3);
}
