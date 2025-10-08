
  fn alacritty::event::ActionContext$LT$N$C$T$GT$::schedule_blinking_timeout::h7dcff9507b3e6248(arg1: *mut c_void) -> *mut c_void

{
    let mut result: *mut c_void = *arg1.byte_offset(0x40);
    let mut rcx: u64 = *result.byte_offset(0x3d8);
    let mut r14: i32;
    let mut result_1: *mut c_void;
    
    if rcx == 0
    {
        r14 = 0;
        result_1 = nullptr;
    }
    else
    {
        let rsi_2: i64 = *result.byte_offset(0x3c8) * 2;
        let rdi_1: u64 = rsi_2 / 0x3e8;
        let mut rdx_3: i32;
        result =
            core::cmp::Ord::max::h3810429b1613a891(rdi_1, (rsi_2 - rdi_1 * 0x3e8) * 0xf4240, rcx);
        result_1 = result;
        r14 = rdx_3;
    }
    
    result = result_1 == 0;
    rcx = r14 == 0;
    
    if (result & rcx) != 0
    {
        return result;
    }
    
    let rax_4: i64 =
        alacritty::display::window::Window::id::h395f89524db74beb(0x320 + *arg1.byte_offset(0x30));
    let mut var_198: i64 = -0x7ffffffffffffff8;
    let mut var_e8: ();
    alacritty::event::Event::new::h74b0126f9adfc99e(&var_e8, &var_198);
    let var_1a8_1: i32 = 3;
    alacritty::scheduler::Scheduler::schedule::hb60357d8e26bddb3(*arg1.byte_offset(0x60), &var_e8, 
        result_1, r14, 0, rax_4)
}
