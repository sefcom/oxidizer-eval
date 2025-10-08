
  void* alacritty::event::ActionContext$LT$N$C$T$GT$::schedule_blinking_timeout::h7dcff9507b3e6248(void* arg1)

{
    void* result = *(arg1 + 0x40);
    uint64_t rcx = *(result + 0x3d8);
    int32_t r14;
    void* const result_1;
    
    if (!rcx)
    {
        r14 = 0;
        result_1 = nullptr;
    }
    else
    {
        int64_t rsi_2 = *(result + 0x3c8) * 2;
        uint64_t rdi_1 = rsi_2 / 0x3e8;
        int32_t rdx_3;
        result =
            core::cmp::Ord::max::h3810429b1613a891(rdi_1, (rsi_2 - rdi_1 * 0x3e8) * 0xf4240, rcx);
        result_1 = result;
        r14 = rdx_3;
    }
    
    result = !result_1;
    rcx = !r14;
    
    if (result & rcx)
        return result;
    
    int64_t rax_4 =
        alacritty::display::window::Window::id::h395f89524db74beb(0x320 + *(arg1 + 0x30));
    int64_t var_198 = -0x7ffffffffffffff8;
    void var_e8;
    alacritty::event::Event::new::h74b0126f9adfc99e(&var_e8, &var_198);
    int32_t var_1a8_1 = 3;
    return alacritty::scheduler::Scheduler::schedule::hb60357d8e26bddb3(*(arg1 + 0x60), &var_e8, 
        result_1, r14, 0, rax_4);
}
