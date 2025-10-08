
  int64_t alacritty_terminal::index::Point::add::h870632f29f948f48(int64_t arg1, int32_t arg2, void* arg3, char arg4, int64_t arg5)

{
    int64_t r9 = *(arg3 + 0xb8);
    
    if (!r9)
    {
        core::panicking::panic_const::panic_const_div_by_zero::hc7d962fcb87948a3();
        /* no return */
    }
    
    int64_t rax_1 = arg5 + arg1;
    
    if (!((rax_1 | r9) >> 0x20))
    {
        int32_t temp2_1 = r9;
        /* tailcall */
        return alacritty_terminal::index::Point::grid_clamp::hd0d1827dd0c9d684(
            COMBINE(0, rax_1) % temp2_1, arg2 + COMBINE(0, rax_1) / temp2_1, arg3, arg4);
    }
    
    int64_t rdx_3 = 0;
    int32_t temp2 = r9;
    /* tailcall */
    return alacritty_terminal::index::Point::grid_clamp::hd0d1827dd0c9d684(
        COMBINE(rdx_3, rax_1) % temp2, arg2 + COMBINE(rdx_3, rax_1) / temp2, arg3, arg4);
}
