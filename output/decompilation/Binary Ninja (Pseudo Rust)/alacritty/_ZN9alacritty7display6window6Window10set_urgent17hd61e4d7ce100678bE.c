
  fn alacritty::display::window::Window::set_urgent::hd61e4d7ce100678b(arg1: *mut c_void, arg2: i8) -> i64

{
    /* tailcall */
    winit::window::Window::request_user_attention::hfb82027ef588d7e9(arg1.byte_offset(0x20), 
        (arg2 ^ 1) * 2)
}
