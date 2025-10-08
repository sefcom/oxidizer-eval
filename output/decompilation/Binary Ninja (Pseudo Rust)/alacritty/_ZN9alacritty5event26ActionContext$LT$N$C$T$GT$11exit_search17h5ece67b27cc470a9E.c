
  fn alacritty::event::ActionContext$LT$N$C$T$GT$::exit_search::h5ece67b27cc470a9(arg1: *mut c_void) -> *mut c_void

{
    let rax: i64;
    let var_18: i64 = rax;
    let r14: *mut c_void = *arg1.byte_offset(0x30);
    alacritty::display::window::Window::set_ime_allowed::hbb6cdda1349198bd(r14.byte_offset(0x320), 
        (*(*arg1.byte_offset(8) + 0x6dc) & 0x10000) == 0);
    *r14.byte_offset(0x48) = 1;
    *r14.byte_offset(0x55c) = 1;
    let result: *mut c_void = *arg1.byte_offset(0x68);
    *result.byte_offset(0x1100) = 0;
    *result.byte_offset(0x1160) = 2;
    result
}
