
  fn alacritty::display::window::Window::toggle_maximized::h67e9cad012b2286f(arg1: *mut c_void) -> i64

{
    /* tailcall */
    alacritty::display::window::Window::set_maximized::hf8571f6f03a74d24(arg1, 
        winit::window::Window::is_maximized::h63fe6b4aba5a78b9(*arg1.byte_offset(0x20), 
            *arg1.byte_offset(0x28)) ^ 1)
}
