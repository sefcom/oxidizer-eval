
  char* alacritty::event::ActionContext$LT$N$C$T$GT$::search_reset_state::h60fb25255eb6c066(void* arg1)

{
    int64_t rax = alacritty::display::window::Window::id::h395f89524db74beb(0x320 + *(arg1 + 0x30));
    void var_108;
    alacritty::scheduler::Scheduler::unschedule::h47626c0d73e9c11f(&var_108, *(arg1 + 0x60), rax);
    char* result = core::ptr::drop_in_place$LT$core..option..Option$LT$alacritty..scheduler..Timer$GT$$GT$::h4830a0e7a5b3781a(&var_108);
    void* r14 = *(arg1 + 0x68);
    *(r14 + 0x1160) = 2;
    int32_t* rdi_3 = *(arg1 + 8);
    
    if (*(rdi_3 + 0x6de) & 1)
    {
        int32_t rcx_1 = *(r14 + 0x1138);
        *(rdi_3 + 0x290) = *(r14 + 0x1130);
        rdi_3[0xa6] = rcx_1;
        *(r14 + 0x1168);
        alacritty_terminal::term::Term$LT$T$GT$::scroll_display::h6d83f12bf0aab15b(rdi_3);
        *(r14 + 0x1168) = 0;
        result = *(arg1 + 0x78);
        *result = 1;
    }
    
    return result;
}
