
  int64_t alacritty::display::window::Window::set_urgent::hd61e4d7ce100678b(void* arg1, char arg2)

{
    /* tailcall */
    return winit::window::Window::request_user_attention::hfb82027ef588d7e9(arg1 + 0x20, 
        (arg2 ^ 1) * 2);
}
