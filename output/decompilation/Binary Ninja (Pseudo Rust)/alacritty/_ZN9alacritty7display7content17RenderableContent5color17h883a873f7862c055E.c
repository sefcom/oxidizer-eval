
  fn alacritty::display::content::RenderableContent::color::h883a873f7862c055(arg1: i64, arg2: *mut c_void, arg3: i64) -> u64

{
    if arg3 > 0x10c
    {
        let rax: i64;
        let var_8: i64 = rax;
        core::panicking::panic_bounds_check::h025cadc56a971af7(arg3, 0x10d);
        /* no return */
    }
    
    let mut rsi: *mut i16 = arg2.byte_offset(arg3 * 3);
    
    if (*(arg1 + (arg3 << 2)) & 1) != 0
    {
        rsi = arg1 + (arg3 << 2) + 1;
    }
    
    rsi[1] << 0x10 | *rsi
}
