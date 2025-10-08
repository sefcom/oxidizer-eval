
  int64_t alacritty::display::window::Window::set_title::h52d854e97dce46c3(int64_t* arg1, int128_t* arg2)

{
    int128_t* r14 = arg1;
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcb6d23ea7ad1ac3a(arg1);
    *r14 = *arg2;
    uint64_t rcx = arg2[1];
    r14[1] = rcx;
    /* tailcall */
    return winit::window::Window::set_title::h485d3ace19b03c55(r14[2], *(r14 + 0x28), *(r14 + 8), 
        rcx);
}
