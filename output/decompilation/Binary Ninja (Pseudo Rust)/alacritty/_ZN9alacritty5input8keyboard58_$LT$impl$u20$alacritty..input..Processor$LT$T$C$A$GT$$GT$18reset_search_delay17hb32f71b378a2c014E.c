
  fn alacritty::input::keyboard::_$LT$impl$u20$alacritty..input..Processor$LT$T$C$A$GT$$GT$::reset_search_delay::hb32f71b378a2c014(arg1: *mut c_void) -> i64

{
    let result: i8 = _$LT$alacritty..event..ActionContext$LT$N$C$T$GT$$u20$as$u20$alacritty..input..ActionContext$LT$T$GT$$GT$::search_active::hab11a215551a244e(*arg1.byte_offset(0x68));
    
    if result == 0
    {
        return result;
    }
    
    let rax_1: i64 = alacritty::display::window::Window::id::h395f89524db74beb(_$LT$alacritty..event..ActionContext$LT$N$C$T$GT$$u20$as$u20$alacritty..input..ActionContext$LT$T$GT$$GT$::window::hc2466ca785044c59(
        *arg1.byte_offset(0x30)));
    let rbx_1: *mut c_void = *arg1.byte_offset(0x60);
    let mut var_108: i32;
    alacritty::scheduler::Scheduler::unschedule::h47626c0d73e9c11f(&var_108, rbx_1, rax_1);
    
    if var_108 == 2
    {
        return core::ptr::drop_in_place$LT$core..option..Option$LT$alacritty..scheduler..Timer$GT$$GT$::h4830a0e7a5b3781a(&var_108);
    }
    
    let var_20: i32;
    let var_118: i32 = var_20;
    let var_28: i8;
    alacritty::scheduler::Scheduler::schedule::hb60357d8e26bddb3(rbx_1, &var_108, 0, 0x1dcd6500, 0, 
        var_28)
}
