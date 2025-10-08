
  fn alacritty::event::ActionContext$LT$N$C$T$GT$::schedule_blinking::h7f65cefdef5166e4(arg1: *mut c_void) -> i64

{
    let rax: i64 =
        alacritty::display::window::Window::id::h395f89524db74beb(0x320 + *arg1.byte_offset(0x30));
    let mut var_188: i64 = -0x7ffffffffffffff9;
    let mut var_d8: ();
    alacritty::event::Event::new::h74b0126f9adfc99e(&var_d8, &var_188);
    let rax_2: i64 =
        core::cmp::Ord::max::he38e22e81f6eeae2(*(*arg1.byte_offset(0x40)).byte_offset(0x3c8));
    let rdx_2: u64 = rax_2 / 0x3e8;
    let var_198: i32 = 2;
    alacritty::scheduler::Scheduler::schedule::hb60357d8e26bddb3(*arg1.byte_offset(0x60), &var_d8, 
        rdx_2, (rax_2 - rdx_2 * 0x3e8) * 0xf4240, 1, rax)
}
