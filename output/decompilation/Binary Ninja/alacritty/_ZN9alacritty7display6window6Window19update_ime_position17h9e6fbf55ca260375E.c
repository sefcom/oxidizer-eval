
  int64_t alacritty::display::window::Window::update_ime_position::h9e6fbf55ca260375(void* arg1, int64_t arg2, int64_t arg3, void* arg4)

{
    uint64_t rax_4 = *(arg1 + 0xf3);
    uint64_t zmm0[0x2];
    
    if (arg3 < 0)
    {
        zmm0[0] = (arg3 & 1) | arg3 >> 1;
        zmm0[0] = zmm0[0] + zmm0[0];
    }
    else
        zmm0[0] = arg3;
    
    double zmm2 = *(arg4 + 0x18);
    zmm0[0] = zmm0[0] * zmm2;
    zmm0[0] = zmm0[0] + *(arg4 + 0x20);
    double zmm3 = *(arg4 + 0x1c);
    zmm0[0] = zmm0[0];
    int64_t rsi = arg2 + rax_4;
    double zmm1;
    
    if (arg2 + rax_4 < 0)
    {
        zmm1 = (rsi & 1) | rsi >> 1;
        zmm1 = zmm1 + zmm1;
    }
    else
        zmm1 = rsi;
    
    zmm1 = zmm1 * zmm3;
    zmm1 = zmm1 + *(arg4 + 0x24);
    zmm2 = zmm2;
    /* tailcall */
    return winit::window::Window::set_ime_cursor_area::h23d6b176b0686c7c(*(arg1 + 0x20), 
        *(arg1 + 0x28), zmm0, zmm1, zmm2 + zmm2, zmm3);
}
