
  fn alacritty::input::Processor$LT$T$C$A$GT$::update_selection_scrolling::haef1ad53b13a7ec5(arg1: *mut c_void, arg2: *mut c_void, arg3: i32) -> i64

{
    let zmm0: f64 = *_$LT$alacritty..event..ActionContext$LT$N$C$T$GT$$u20$as$u20$alacritty..input..ActionContext$LT$T$GT$$GT$::window::hc2466ca785044c59(arg1).byte_offset(0x18);
    let mut var_210: i64;
    _$LT$alacritty..event..ActionContext$LT$N$C$T$GT$$u20$as$u20$alacritty..input..ActionContext$LT$T$GT$$GT$::size_info::h75f6d6cd23dc8329(&var_210, arg1);
    let rax_2: i64 = alacritty::display::window::Window::id::h395f89524db74beb(_$LT$alacritty..event..ActionContext$LT$N$C$T$GT$$u20$as$u20$alacritty..input..ActionContext$LT$T$GT$$GT$::window::hc2466ca785044c59(arg1));
    let mut zmm0_1: f64 = 5.0 * zmm0;
    let mut zmm1: i64 = -0x3e20000000000000;
    let zmm2: i64 = 0x41dfffffffc00000;
    let mut r15: i32 = _mm_min_sd(_mm_max_sd(zmm0_1, zmm1), zmm2);
    
    if FCMP_UO(zmm0_1, zmm0_1)
    {
        r15 = 0;
    }
    
    let zmm3: f64 = zmm0 * 20.0;
    let mut r13: i32 = _mm_min_sd(_mm_max_sd(zmm3, zmm1), zmm2);
    
    if FCMP_UO(zmm3, zmm3)
    {
        r13 = 0;
    }
    
    let var_1ec: i32;
    zmm0_1 = var_1ec;
    let mut rsi_1: i32 = zmm0_1;
    
    if zmm0_1 > 2.14748352e+09f
    {
        rsi_1 = 0x7fffffff;
    }
    
    let mut var_228: f64;
    var_228 = zmm0_1;
    
    if FCMP_UO(zmm0_1, zmm0_1)
    {
        rsi_1 = 0;
    }
    
    let rax_3: i32 = core::cmp::Ord::max::h485505c56320f468(r15, rsi_1);
    let rax_4: i64 = var_210;
    
    if rax_4 < 0
    {
        zmm0_1 = (rax_4 & 1) | rax_4 >> 1;
        zmm0_1 = zmm0_1 + zmm0_1;
    }
    else
    {
        zmm0_1 = rax_4;
    }
    
    let var_1fc: i32;
    zmm1 = var_1fc;
    let mut rdi_5: i32 = zmm1;
    
    if zmm1 > 2.14748352e+09f
    {
        rdi_5 = 0x7fffffff;
    }
    
    let cond:2: bool = FCMP_UO(zmm1, zmm1);
    let var_1f4: i32;
    zmm0_1 = zmm0_1 * var_1f4;
    zmm1 = var_228 + zmm0_1;
    
    if cond:2
    {
        rdi_5 = 0;
    }
    
    let mut rsi_2: i32 = zmm1;
    
    if zmm1 > 2.14748352e+09f
    {
        rsi_2 = 0x7fffffff;
    }
    
    if FCMP_UO(zmm1, zmm1)
    {
        rsi_2 = 0;
    }
    
    let rax_7: i32 = core::cmp::Ord::min::h3552534d3430b892(rdi_5 - r15, rsi_2);
    let mut var_1e8: i64;
    let mut rax_10: i32;
    
    if arg3 >= rax_3
    {
        if arg3 < rax_7
        {
            alacritty::scheduler::Scheduler::unschedule::h47626c0d73e9c11f(&var_1e8, arg2, rax_2);
            return core::ptr::drop_in_place$LT$core..option..Option$LT$alacritty..scheduler..Timer$GT$$GT$::h4830a0e7a5b3781a(&var_1e8);
        }
        
        rax_10 = rax_7 - (arg3 + r13);
        
        if r13 == 0
        {
            core::panicking::panic_const::panic_const_div_by_zero::hc7d962fcb87948a3();
            /* no return */
        }
    }
    else
    {
        rax_10 = r13 - arg3 + rax_3;
        
        if r13 == 0
        {
            core::panicking::panic_const::panic_const_div_by_zero::hc7d962fcb87948a3();
            /* no return */
        }
    }
    
    if r13 == 0xffffffff && -(rax_10) == 0x80000000
    {
        core::panicking::panic_const::panic_const_div_overflow::h7f81f43144dd3074();
        /* no return */
    }
    
    let var_1e0_1: i32 = 0;
    let var_1dc_1: i32 = rax_10 / r13;
    var_1e8 = -0x7ffffffffffffffd;
    let mut var_f8: ();
    alacritty::event::Event::new::hfaf9b093bcbfdb2b(&var_f8, &var_1e8, 1);
    alacritty::scheduler::Scheduler::unschedule::h47626c0d73e9c11f(&var_1e8, arg2, rax_2);
    core::ptr::drop_in_place$LT$core..option..Option$LT$alacritty..scheduler..Timer$GT$$GT$::h4830a0e7a5b3781a(&var_1e8);
    let var_238_1: i32 = 0;
    alacritty::scheduler::Scheduler::schedule::hb60357d8e26bddb3(arg2, &var_f8, 0, 0xe4e1c0, 1, 
        rax_2)
}
