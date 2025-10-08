
  int64_t alacritty::display::Display::request_frame::h50f3eaa34af0ccb9(void* arg1, void* arg2)

{
    *(arg1 + 0x410) = 0;
    int64_t var_210;
    alacritty::display::window::Window::current_monitor::ha6a20112880c3114(&var_210, 
        *(arg1 + 0x340), *(arg1 + 0x348));
    uint128_t var_198;
    uint128_t zmm0_1;
    
    if (var_210 == -0x7fffffffffffffff)
        zmm0_1 = 0x40ed4c0000000000;
    else
    {
        int64_t var_1a0;
        int64_t var_128_1 = var_1a0;
        uint128_t var_1b0;
        uint128_t var_138_1 = var_1b0;
        uint128_t var_1c0;
        uint128_t var_148_1 = var_1c0;
        uint128_t var_1d0;
        uint128_t var_158_1 = var_1d0;
        int128_t var_1e0;
        int128_t var_168_1 = var_1e0;
        int128_t var_1f0;
        int128_t var_178_1 = var_1f0;
        uint128_t var_200;
        uint128_t var_188_1 = var_200;
        var_198 = var_210;
        char rax_2;
        int32_t rdx_1;
        rax_2 = alacritty::display::Display::request_frame::_$u7b$$u7b$closure$u7d$$u7d$::h3c37ceebc40a2dbd(&var_198);
        
        if (!(rax_2 & 1))
            zmm0_1 = 0x40ed4c0000000000;
        else
            zmm0_1 = rdx_1;
    }
    
    uint128_t zmm1_1;
    zmm1_1 = 0x412e848000000000 / zmm0_1;
    zmm1_1 = zmm1_1 * 1000.0;
    int64_t rax_4 = zmm1_1;
    zmm0_1 = zmm1_1 - 9.2233720368547758e+18;
    int64_t rdx_4 = (zmm0_1 & rax_4 >> 0x3f) | rax_4;
    int64_t rax_5 = 0;
    
    if (zmm1_1 >= _mm_xor_pd(zmm0_1, zmm0_1))
        rax_5 = rdx_4;
    
    int64_t rcx_2 = -1;
    
    if (zmm1_1 <= 1.844674407370955e+19)
        rcx_2 = rax_5;
    
    uint64_t rdx_6 = rcx_2 / 0xf4240;
    int64_t rax_10;
    int32_t rdx_8;
    rax_10 = alacritty::display::FrameTimer::compute_timeout::hd003256b07b45f79(arg1 + 0x5c8, 
        rdx_6, (rcx_2 - rdx_6 * 0xf4240) * 0x3e8);
    char r15_1 = alacritty::display::window::Window::id::h395f89524db74beb(arg1 + 0x320);
    var_198 = -0x7ffffffffffffff6;
    void var_e8;
    alacritty::event::Event::new::h74b0126f9adfc99e(&var_e8, &var_198);
    int32_t var_218 = 4;
    return alacritty::scheduler::Scheduler::schedule::hb60357d8e26bddb3(arg2, &var_e8, rax_10, 
        rdx_8, 0, r15_1);
}
