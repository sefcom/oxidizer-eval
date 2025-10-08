
  int64_t* alacritty::window_context::WindowContext::update_config::h98162595dbe55738(void* arg1, int64_t* arg2)

{
    void* r13 = *(arg1 + 0x1e20);
    void* var_280 = r13;
    *(arg1 + 0x1e20) = arg2;
    alloc::rc::RcInnerPtr::inc_strong::h04231d05a40329cb(arg2);
    void* rax =
        alacritty::cli::ParsedOptions::override_config_rc::h35ab90cde0bbb7d9(arg1 + 0x1df8, arg2);
    core::ptr::drop_in_place$LT$alloc..rc..Rc$LT$alacritty..config..ui_config..UiConfig$GT$$GT$::h077aa8980e2272c3(arg1 + 0x1e20);
    *(arg1 + 0x1e20) = rax;
    alacritty::display::Display::update_config::hf55e38dcbbf2a1d6(arg1 + 0x1170, rax + 0x10);
    void* r12 = *(arg1 + 0x1e18);
    alacritty_terminal::sync::FairMutex$LT$T$GT$::lock::h8771cda87d96e8b1(r12 + 0x10);
    void* r14_2 = *(arg1 + 0x1e20);
    int128_t var_278;
    alacritty::config::ui_config::UiConfig::term_options::hd6aa2decf979f436(&var_278, r14_2 + 0x10, 
        r12 + 0x10);
    alacritty_terminal::term::Term$LT$T$GT$::set_options::h35d1164ca74ce318(r12 + 0x18, &var_278);
    core::ptr::drop_in_place$LT$lock_api..mutex..MutexGuard$LT$parking_lot..raw_mutex..RawMutex$C$alacritty_terminal..term..Term$LT$alacritty..event..EventProxy$GT$$GT$$GT$::h090449980f2d2d72(r12 + 0x10);
    uint32_t zmm0[0x4] = *(r13 + 0x3e0);
    zmm0[0] = zmm0[0] - *(r14_2 + 0x3e0);
    
    if (!(__andps_xmmxud_memxud(zmm0, data_4e90d0)[0] <= 1.1920929e-07f))
        *(arg1 + 0x16cc) = 0x101;
    
    if (!_$LT$alacritty..config..font..Font$u20$as$u20$core..cmp..PartialEq$GT$::eq::ha165a17f7f207ddb(r13 + 0x78, r14_2 + 0x78))
    {
        int64_t zmm0_1;
        zmm0_1 = *(arg1 + 0x14a8);
        double zmm1_1;
        zmm1_1 = *(r13 + 0x138) / 1000000.0;
        zmm1_1 = zmm1_1 * zmm0_1;
        double zmm4_1;
        zmm4_1 = _mm_min_ss(0x4579f000, _mm_max_ss(0x3f800000, zmm1_1)) * 1000000f;
        int32_t rdx_1 = zmm4_1;
        
        if (zmm4_1 < 0f)
            rdx_1 = 0;
        
        if (zmm4_1 > 4.29496704e+09f)
            rdx_1 = -1;
        
        int32_t r12_2 = *(arg1 + 0x19a0);
        
        if (r12_2 == rdx_1)
        {
            zmm4_1 = *(r14_2 + 0x138) / 1000000.0;
            zmm0_1 = zmm0_1 * zmm4_1;
            zmm1_1 = _mm_min_ss(0x4579f000, _mm_max_ss(0x3f800000, zmm0_1)) * 1000000f;
            r12_2 = zmm1_1;
            
            if (zmm1_1 < 0f)
                r12_2 = 0;
            
            if (zmm1_1 > 4.29496704e+09f)
                r12_2 = -1;
            
            *(arg1 + 0x19a0) = r12_2;
        }
        
        _$LT$alacritty..config..font..Font$u20$as$u20$core..clone..Clone$GT$::clone::h51757ca44d710c13(&var_278, r14_2 + 0x78);
        int32_t var_1b4;
        int32_t var_e4_1 = var_1b4;
        char var_1b0;
        char var_e0_1 = var_1b0;
        int128_t var_1a8 = var_278;
        int128_t var_268;
        int128_t var_198_1 = var_268;
        int128_t var_258;
        int128_t var_188_1 = var_258;
        int128_t var_248;
        int128_t var_178_1 = var_248;
        int128_t var_238;
        int128_t var_168_1 = var_238;
        int128_t var_228;
        int128_t var_158_1 = var_228;
        int128_t var_218;
        int128_t var_148_1 = var_218;
        int128_t var_208;
        int128_t var_138_1 = var_208;
        int128_t var_1f8;
        int128_t var_128_1 = var_1f8;
        int128_t var_1c8;
        int128_t var_f8_1 = var_1c8;
        int128_t var_1d8;
        int128_t var_108_1 = var_1d8;
        int128_t var_1e8;
        int128_t var_118_1 = var_1e8;
        int32_t var_e8_1 = r12_2;
        char var_1af;
        char var_df_1 = var_1af;
        alacritty::display::DisplayUpdate::set_font::h951f4b62a42baa09(arg1 + 0x15f0, &var_1a8);
        r14_2 = *(arg1 + 0x1e20);
    }
    
    int64_t r15_4 = *(arg1 + 0x14b0);
    void* r12_3 = *(arg1 + 0x14b8);
    alacritty::display::window::Window::set_theme::h2c8f120771d3197d(r15_4, r12_3, 
        *(r14_2 + 0x1c1));
    
    if (*(r13 + 0x1b8) != *(r14_2 + 0x1b8) || *(r13 + 0x1ba) != *(r14_2 + 0x1ba)
            || *(r13 + 0x1bc) != *(r14_2 + 0x1bc) || *(r13 + 0x1bf) != *(r14_2 + 0x1bf))
        *(arg1 + 0x16cc) = 1;
    
    if (!*(arg1 + 0x1e3b))
    {
        char rax_10;
        
        if (*(r14_2 + 0x1bd))
            rax_10 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h8240391abffeb7c9(*(arg1 + 0x1498), *(arg1 + 0x14a0), *(r13 + 0x150), *(r13 + 0x158));
        
        if (!*(r14_2 + 0x1bd) || rax_10)
        {
            _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(
                &var_278, r14_2 + 0x148);
            alacritty::display::window::Window::set_title::h52d854e97dce46c3(arg1 + 0x1490, 
                &var_278);
            r14_2 = *(arg1 + 0x1e20);
            r15_4 = *(arg1 + 0x14b0);
            r12_3 = *(arg1 + 0x14b8);
        }
    }
    
    float zmm0_3 = *(r14_2 + 0x1b4);
    zmm0_3 - 1f;
    alacritty::display::window::Window::set_transparent::h592de576e1e64970(r15_4, r12_3, 
        zmm0_3 < 1f);
    alacritty::display::window::Window::set_blur::hdaafcc381de4b4ca(r15_4, r12_3, *(r14_2 + 0x1be));
    alacritty::display::hint::HintState::update_alphabet::hfa8d2fcb226dbb8a(arg1 + 0x1588, 
        *(r14_2 + 0x2c8), *(r14_2 + 0x2d0));
    int64_t var_d0 = -0x7ffffffffffffff8;
    int64_t var_d8 = -0x8000000000000000;
    alacritty::event::Event::new::hfaf9b093bcbfdb2b(&var_278, &var_d8, 0);
    alloc::vec::Vec$LT$T$C$A$GT$::push::hae985e737553ba9c(arg1 + 0x1de0, &var_278);
    *(arg1 + 0x1e38) = 1;
    return core::ptr::drop_in_place$LT$alloc..rc..Rc$LT$alacritty..config..ui_config..UiConfig$GT$$GT$::h077aa8980e2272c3(&var_280);
}
