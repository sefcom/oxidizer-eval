
  int64_t alacritty::display::window::Window::toggle_fullscreen::hec38b31e6f25bb11(void* arg1)

{
    int64_t var_98;
    winit::window::Window::fullscreen::h7b514a63f78efc09(&var_98, *(arg1 + 0x20), *(arg1 + 0x28));
    int32_t rsi_1;
    rsi_1 = var_98 == -0x7ffffffffffffffd;
    alacritty::display::window::Window::set_fullscreen::h72faa300d5c80e9c(arg1, rsi_1);
    return core::ptr::drop_in_place$LT$core..option..Option$LT$winit..window..Fullscreen$GT$$GT$::h179c0a3065004bec(&var_98);
}
