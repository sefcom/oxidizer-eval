
  fn alacritty::display::Display::request_frame::h50f3eaa34af0ccb9(arg1: *mut c_void, arg2: *mut c_void) -> i64

{
    *arg1.byte_offset(0x410) = 0;
    let mut var_210: i64;
    alacritty::display::window::Window::current_monitor::ha6a20112880c3114(&var_210, 
        *arg1.byte_offset(0x340), *arg1.byte_offset(0x348));
    let mut var_198: u128;
    let mut zmm0_1: u128;
    
    if var_210 == -0x7fffffffffffffff
    {
        zmm0_1 = 0x40ed4c0000000000;
    }
    else
    {
        let var_1a0: i64;
        let var_128_1: i64 = var_1a0;
        let var_1b0: u128;
        let var_138_1: u128 = var_1b0;
        let var_1c0: u128;
        let var_148_1: u128 = var_1c0;
        let var_1d0: u128;
        let var_158_1: u128 = var_1d0;
        let var_1e0: i128;
        let var_168_1: i128 = var_1e0;
        let var_1f0: i128;
        let var_178_1: i128 = var_1f0;
        let var_200: u128;
        let var_188_1: u128 = var_200;
        var_198 = var_210;
        let mut rax_2: i8;
        let mut rdx_1: i32;
        rax_2 = alacritty::display::Display::request_frame::_$u7b$$u7b$closure$u7d$$u7d$::h3c37ceebc40a2dbd(&var_198);
        
        if (rax_2 & 1) == 0
        {
            zmm0_1 = 0x40ed4c0000000000;
        }
        else
        {
            zmm0_1 = rdx_1;
        }
    }
    
    let mut zmm1_1: u128;
    zmm1_1 = 0x412e848000000000 / zmm0_1;
    zmm1_1 = zmm1_1 * 1000.0;
    let rax_4: i64 = zmm1_1;
    zmm0_1 = zmm1_1 - 9.2233720368547758e+18;
    let rdx_4: i64 = (zmm0_1 & rax_4 >> 0x3f) | rax_4;
    let mut rax_5: i64 = 0;
    
    if zmm1_1 >= _mm_xor_pd(zmm0_1, zmm0_1)
    {
        rax_5 = rdx_4;
    }
    
    let mut rcx_2: i64 = -1;
    
    if zmm1_1 <= 1.844674407370955e+19
    {
        rcx_2 = rax_5;
    }
    
    let rdx_6: u64 = rcx_2 / 0xf4240;
    let mut rax_10: i64;
    let mut rdx_8: i32;
    rax_10 = alacritty::display::FrameTimer::compute_timeout::hd003256b07b45f79(
        arg1.byte_offset(0x5c8), rdx_6, (rcx_2 - rdx_6 * 0xf4240) * 0x3e8);
    let r15_1: i8 =
        alacritty::display::window::Window::id::h395f89524db74beb(arg1.byte_offset(0x320));
    var_198 = -0x7ffffffffffffff6;
    let mut var_e8: ();
    alacritty::event::Event::new::h74b0126f9adfc99e(&var_e8, &var_198);
    let var_218: i32 = 4;
    alacritty::scheduler::Scheduler::schedule::hb60357d8e26bddb3(arg2, &var_e8, rax_10, rdx_8, 0, 
        r15_1)
}
