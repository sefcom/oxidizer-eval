
  int64_t alacritty::display::window::Window::toggle_maximized::h67e9cad012b2286f(void* arg1)

{
    /* tailcall */
    return alacritty::display::window::Window::set_maximized::hf8571f6f03a74d24(arg1, 
        winit::window::Window::is_maximized::h63fe6b4aba5a78b9(*(arg1 + 0x20), *(arg1 + 0x28)) ^ 1);
}
