
  fn alacritty::display::window::Window::set_fullscreen::h72faa300d5c80e9c(arg1: *mut c_void, arg2: i32) -> i64

{
    let mut var_90: i64;
    
    if arg2 == 0
    {
        var_90 = -0x7ffffffffffffffd;
        return winit::window::Window::set_fullscreen::h887106e44b0d2168(arg1.byte_offset(0x20), 
            &var_90);
    }
    
    var_90 = -0x7ffffffffffffffe;
    let var_88: i64 = -0x7fffffffffffffff;
    winit::window::Window::set_fullscreen::h887106e44b0d2168(arg1.byte_offset(0x20), &var_90)
}
