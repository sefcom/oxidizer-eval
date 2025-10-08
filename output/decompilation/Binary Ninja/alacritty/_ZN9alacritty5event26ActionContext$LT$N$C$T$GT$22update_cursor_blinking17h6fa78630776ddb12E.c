
  char* alacritty::event::ActionContext$LT$N$C$T$GT$::update_cursor_blinking::h6fa78630776ddb12(void* arg1)

{
    void* rdi = *(arg1 + 8);
    void* rax = *(arg1 + 0x40);
    bool r14 = *(rax + 0x3d6);
    char rbp = *(rax + 0x3d7);
    int32_t r15 = *(rdi + 0x6dc);
    
    if (r15 & 0x10000)
    {
        bool rcx_1 = *(rax + 0x3d4);
        
        if (rcx_1 != 4)
        {
            rbp = *(rax + 0x3d5);
            r14 = rcx_1;
        }
    }
    
    char rax_1 = alacritty_terminal::term::Term$LT$T$GT$::cursor_style::hbc8727fad33b6b36(rdi);
    
    if (r14 == 3)
        goto label_854cb3;
    
    uint32_t rdx_1 = rbp;
    
    if (rdx_1 - 1 < 2)
        goto label_854cb3;
    
    char var_134;
    void* rbp_1;
    
    if (rdx_1)
    {
        rbp_1 = *(arg1 + 0x30);
        var_134 = 1;
        
        if (r15 & 0x10001)
            r14 = *(rbp_1 + 0x2d0) == 2;
        else
            r14 = false;
    }
    else
    {
        rax_1 = 0;
        label_854cb3:
        rbp_1 = *(arg1 + 0x30);
        var_134 = rax_1;
        
        if (!(r15 & 0x10001))
            r14 = false;
        else
            r14 = *(rbp_1 + 0x2d0) == 2;
    }
    
    int64_t rax_2 = alacritty::display::window::Window::id::h395f89524db74beb(rbp_1 + 0x320);
    void* r12 = *(arg1 + 0x60);
    void var_128;
    alacritty::scheduler::Scheduler::unschedule::h47626c0d73e9c11f(&var_128, r12, rax_2);
    core::ptr::drop_in_place$LT$core..option..Option$LT$alacritty..scheduler..Timer$GT$$GT$::h4830a0e7a5b3781a(&var_128);
    alacritty::scheduler::Scheduler::unschedule::h47626c0d73e9c11f(&var_128, r12, rax_2);
    core::ptr::drop_in_place$LT$core..option..Option$LT$alacritty..scheduler..Timer$GT$$GT$::h4830a0e7a5b3781a(&var_128);
    **(arg1 + 0x48) = 0;
    
    if (var_134 & r14 && *(rdi + 0x6e2) == 1)
    {
        alacritty::event::ActionContext$LT$N$C$T$GT$::schedule_blinking::h7f65cefdef5166e4(arg1);
        /* tailcall */
        return alacritty::event::ActionContext$LT$N$C$T$GT$::schedule_blinking_timeout::h7dcff9507b3e6248(arg1);
    }
    
    *(rbp_1 + 0x836) = 0;
    char* result = *(arg1 + 0x78);
    *result = 1;
    return result;
}
