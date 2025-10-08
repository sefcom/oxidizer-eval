
  uint64_t alacritty::display::content::RenderableCell::compute_bg_rgb::h1db88f8de20295e8(int64_t arg1, void* arg2, int32_t arg3)

{
    uint32_t rcx = arg3 >> 0x10;
    
    if (!arg3)
        /* tailcall */
        return alacritty::display::content::RenderableContent::color::h883a873f7862c055(arg1, arg2, 
            rcx);
    
    uint8_t rdx = arg3 >> 8;
    
    if (arg3 != 1)
        /* tailcall */
        return alacritty::display::content::RenderableContent::color::h883a873f7862c055(arg1, arg2, 
            rdx);
    
    return rdx | rcx << 8;
}
