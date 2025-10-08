
  fn alacritty::display::content::RenderableCell::compute_bg_rgb::h1db88f8de20295e8(arg1: i64, arg2: *mut c_void, arg3: i32) -> u64

{
    let rcx: u32 = arg3 >> 0x10;
    
    if arg3 == 0
    {
        /* tailcall */
        return alacritty::display::content::RenderableContent::color::h883a873f7862c055(arg1, arg2, 
            rcx);
    }
    
    let rdx: u8 = arg3 >> 8;
    
    if arg3 != 1
    {
        /* tailcall */
        return alacritty::display::content::RenderableContent::color::h883a873f7862c055(arg1, arg2, 
            rdx);
    }
    
    rdx | rcx << 8
}
