
  fn alacritty::display::window::Window::set_ime_allowed::hbb6cdda1349198bd(arg1: *mut c_void, arg2: i8)

{
    if *arg1.byte_offset(0xf3) == 0
    {
        /* tailcall */
        return winit::window::Window::set_ime_allowed::hf8d1a377be69edc4(arg1.byte_offset(0x20), 
            arg2);
    }
}
