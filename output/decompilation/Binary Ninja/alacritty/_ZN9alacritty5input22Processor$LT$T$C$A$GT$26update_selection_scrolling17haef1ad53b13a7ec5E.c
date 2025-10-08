
  int64_t alacritty::input::Processor$LT$T$C$A$GT$::update_selection_scrolling::haef1ad53b13a7ec5(void* arg1, void* arg2, int32_t arg3)

{
    double zmm0 = *(_$LT$alacritty..event..ActionContext$LT$N$C$T$GT$$u20$as$u20$alacritty..input..ActionContext$LT$T$GT$$GT$::window::hc2466ca785044c59(arg1) + 0x18);
    int64_t var_210;
    _$LT$alacritty..event..ActionContext$LT$N$C$T$GT$$u20$as$u20$alacritty..input..ActionContext$LT$T$GT$$GT$::size_info::h75f6d6cd23dc8329(&var_210, arg1);
    int64_t rax_2 = alacritty::display::window::Window::id::h395f89524db74beb(_$LT$alacritty..event..ActionContext$LT$N$C$T$GT$$u20$as$u20$alacritty..input..ActionContext$LT$T$GT$$GT$::window::hc2466ca785044c59(arg1));
    double zmm0_1 = 5.0 * zmm0;
    int64_t zmm1 = -0x3e20000000000000;
    int64_t zmm2 = 0x41dfffffffc00000;
    int32_t r15 = _mm_min_sd(_mm_max_sd(zmm0_1, zmm1), zmm2);
    
    if (FCMP_UO(zmm0_1, zmm0_1))
        r15 = 0;
    
    double zmm3 = zmm0 * 20.0;
    int32_t r13 = _mm_min_sd(_mm_max_sd(zmm3, zmm1), zmm2);
    
    if (FCMP_UO(zmm3, zmm3))
        r13 = 0;
    
    int32_t var_1ec;
    zmm0_1 = var_1ec;
    int32_t rsi_1 = zmm0_1;
    
    if (zmm0_1 > 2.14748352e+09f)
        rsi_1 = 0x7fffffff;
    
    double var_228;
    var_228 = zmm0_1;
    
    if (FCMP_UO(zmm0_1, zmm0_1))
        rsi_1 = 0;
    
    int32_t rax_3 = core::cmp::Ord::max::h485505c56320f468(r15, rsi_1);
    int64_t rax_4 = var_210;
    
    if (rax_4 < 0)
    {
        zmm0_1 = (rax_4 & 1) | rax_4 >> 1;
        zmm0_1 = zmm0_1 + zmm0_1;
    }
    else
        zmm0_1 = rax_4;
    
    int32_t var_1fc;
    zmm1 = var_1fc;
    int32_t rdi_5 = zmm1;
    
    if (zmm1 > 2.14748352e+09f)
        rdi_5 = 0x7fffffff;
    
    bool cond:2 = FCMP_UO(zmm1, zmm1);
    int32_t var_1f4;
    zmm0_1 = zmm0_1 * var_1f4;
    zmm1 = var_228 + zmm0_1;
    
    if (cond:2)
        rdi_5 = 0;
    
    int32_t rsi_2 = zmm1;
    
    if (zmm1 > 2.14748352e+09f)
        rsi_2 = 0x7fffffff;
    
    if (FCMP_UO(zmm1, zmm1))
        rsi_2 = 0;
    
    int32_t rax_7 = core::cmp::Ord::min::h3552534d3430b892(rdi_5 - r15, rsi_2);
    int64_t var_1e8;
    int32_t rax_10;
    
    if (arg3 >= rax_3)
    {
        if (arg3 < rax_7)
        {
            alacritty::scheduler::Scheduler::unschedule::h47626c0d73e9c11f(&var_1e8, arg2, rax_2);
            return core::ptr::drop_in_place$LT$core..option..Option$LT$alacritty..scheduler..Timer$GT$$GT$::h4830a0e7a5b3781a(&var_1e8);
        }
        
        rax_10 = rax_7 - (arg3 + r13);
        
        if (!r13)
        {
            core::panicking::panic_const::panic_const_div_by_zero::hc7d962fcb87948a3();
            /* no return */
        }
    }
    else
    {
        rax_10 = r13 - arg3 + rax_3;
        
        if (!r13)
        {
            core::panicking::panic_const::panic_const_div_by_zero::hc7d962fcb87948a3();
            /* no return */
        }
    }
    
    if (r13 == 0xffffffff && -(rax_10) == 0x80000000)
    {
        core::panicking::panic_const::panic_const_div_overflow::h7f81f43144dd3074();
        /* no return */
    }
    
    int32_t var_1e0_1 = 0;
    int32_t var_1dc_1 = rax_10 / r13;
    var_1e8 = -0x7ffffffffffffffd;
    void var_f8;
    alacritty::event::Event::new::hfaf9b093bcbfdb2b(&var_f8, &var_1e8, 1);
    alacritty::scheduler::Scheduler::unschedule::h47626c0d73e9c11f(&var_1e8, arg2, rax_2);
    core::ptr::drop_in_place$LT$core..option..Option$LT$alacritty..scheduler..Timer$GT$$GT$::h4830a0e7a5b3781a(&var_1e8);
    int32_t var_238_1 = 0;
    return alacritty::scheduler::Scheduler::schedule::hb60357d8e26bddb3(arg2, &var_f8, 0, 0xe4e1c0, 
        1, rax_2);
}
