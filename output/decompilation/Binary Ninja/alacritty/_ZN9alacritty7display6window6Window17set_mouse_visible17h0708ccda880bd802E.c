
  void alacritty::display::window::Window::set_mouse_visible::h0708ccda880bd802(void* arg1, char arg2)

{
    if (arg2 == *(arg1 + 0xf4))
        return;
    
    *(arg1 + 0xf4) = arg2;
    /* tailcall */
    return winit::window::Window::set_cursor_visible::hc9ccbdea95426f05(*(arg1 + 0x20), 
        *(arg1 + 0x28), arg2);
}
