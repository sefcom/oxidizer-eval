
  fn alacritty::display::window::Window::update_ime_position::h9e6fbf55ca260375(arg1: *mut c_void, arg2: i64, arg3: i64, arg4: *mut c_void) -> i64

{
    let rax_4: u64 = *arg1.byte_offset(0xf3);
    let zmm0: [u64; 0x2];
    
    if arg3 < 0
    {
        zmm0[0] = (arg3 & 1) | arg3 >> 1;
        zmm0[0] = zmm0[0] + zmm0[0];
    }
    else
    {
        zmm0[0] = arg3;
    }
    
    let mut zmm2: f64 = *arg4.byte_offset(0x18);
    zmm0[0] = zmm0[0] * zmm2;
    zmm0[0] = zmm0[0] + *arg4.byte_offset(0x20);
    let zmm3: f64 = *arg4.byte_offset(0x1c);
    zmm0[0] = zmm0[0];
    let rsi: i64 = arg2 + rax_4;
    let mut zmm1: f64;
    
    if arg2 + rax_4 < 0
    {
        zmm1 = (rsi & 1) | rsi >> 1;
        zmm1 = zmm1 + zmm1;
    }
    else
    {
        zmm1 = rsi;
    }
    
    zmm1 = zmm1 * zmm3;
    zmm1 = zmm1 + *arg4.byte_offset(0x24);
    zmm2 = zmm2;
    /* tailcall */
    winit::window::Window::set_ime_cursor_area::h23d6b176b0686c7c(*arg1.byte_offset(0x20), 
        *arg1.byte_offset(0x28), zmm0, zmm1, zmm2 + zmm2, zmm3)
}
