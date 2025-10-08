
  fn alacritty::display::window::Window::set_mouse_visible::h0708ccda880bd802(arg1: *mut c_void, arg2: i8)

{
    if arg2 == *arg1.byte_offset(0xf4)
    {
        return;
    }
    
    *arg1.byte_offset(0xf4) = arg2;
    /* tailcall */
    winit::window::Window::set_cursor_visible::hc9ccbdea95426f05(*arg1.byte_offset(0x20), 
        *arg1.byte_offset(0x28), arg2)
}
