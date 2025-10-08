
  int64_t alacritty::event::ActionContext$LT$N$C$T$GT$::schedule_blinking::h7f65cefdef5166e4(void* arg1)

{
    int64_t rax = alacritty::display::window::Window::id::h395f89524db74beb(0x320 + *(arg1 + 0x30));
    int64_t var_188 = -0x7ffffffffffffff9;
    void var_d8;
    alacritty::event::Event::new::h74b0126f9adfc99e(&var_d8, &var_188);
    int64_t rax_2 = core::cmp::Ord::max::he38e22e81f6eeae2(*(*(arg1 + 0x40) + 0x3c8));
    uint64_t rdx_2 = rax_2 / 0x3e8;
    int32_t var_198 = 2;
    return alacritty::scheduler::Scheduler::schedule::hb60357d8e26bddb3(*(arg1 + 0x60), &var_d8, 
        rdx_2, (rax_2 - rdx_2 * 0x3e8) * 0xf4240, 1, rax);
}
