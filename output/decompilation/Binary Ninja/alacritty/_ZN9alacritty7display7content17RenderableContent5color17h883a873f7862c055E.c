
  uint64_t alacritty::display::content::RenderableContent::color::h883a873f7862c055(int64_t arg1, void* arg2, int64_t arg3)

{
    if (arg3 > 0x10c)
    {
        int64_t rax;
        int64_t var_8 = rax;
        core::panicking::panic_bounds_check::h025cadc56a971af7(arg3, 0x10d);
        /* no return */
    }
    
    int16_t* rsi = arg2 + arg3 * 3;
    
    if (*(arg1 + (arg3 << 2)) & 1)
        rsi = arg1 + (arg3 << 2) + 1;
    
    return rsi[1] << 0x10 | *rsi;
}
