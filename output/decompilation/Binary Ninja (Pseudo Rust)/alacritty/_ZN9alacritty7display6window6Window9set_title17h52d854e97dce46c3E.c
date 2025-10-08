
  fn alacritty::display::window::Window::set_title::h52d854e97dce46c3(arg1: *mut i64, arg2: *mut i128) -> i64

{
    let r14: *mut i128 = arg1;
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcb6d23ea7ad1ac3a(arg1);
    *r14 = *arg2;
    let rcx: u64 = arg2[1];
    r14[1] = rcx;
    /* tailcall */
    winit::window::Window::set_title::h485d3ace19b03c55(r14[2], *r14.byte_offset(0x28), 
        *r14.byte_offset(8), rcx)
}
