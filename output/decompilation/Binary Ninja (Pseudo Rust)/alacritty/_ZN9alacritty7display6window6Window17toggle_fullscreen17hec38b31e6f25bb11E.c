
  fn alacritty::display::window::Window::toggle_fullscreen::hec38b31e6f25bb11(arg1: *mut c_void) -> i64

{
    let mut var_98: i64;
    winit::window::Window::fullscreen::h7b514a63f78efc09(&var_98, *arg1.byte_offset(0x20), 
        *arg1.byte_offset(0x28));
    let mut rsi_1: i32;
    rsi_1 = var_98 == -0x7ffffffffffffffd;
    alacritty::display::window::Window::set_fullscreen::h72faa300d5c80e9c(arg1, rsi_1);
    core::ptr::drop_in_place$LT$core..option..Option$LT$winit..window..Fullscreen$GT$$GT$::h179c0a3065004bec(&var_98)
}
