
  void* alacritty::input::Processor$LT$T$C$A$GT$::on_mouse_release::hac8a1c7846717501(int64_t* arg1, int16_t arg2)

{
    int64_t* rbx = arg1;
    char* r14 = arg1[5];
    char rax_1;
    
    if (!(*r14 & 4))
        rax_1 = _$LT$alacritty..event..ActionContext$LT$N$C$T$GT$$u20$as$u20$alacritty..input..ActionContext$LT$T$GT$$GT$::mouse_mode::h5645ae47cef353d4(rbx[1]);
    
    void* result;
    
    if (*r14 & 4 || !rax_1)
    {
        void* r14_1 = rbx[6];
        int128_t zmm1 = *(r14_1 + 0x738);
        int128_t zmm2 = *(r14_1 + 0x748);
        int128_t var_158 = *(r14_1 + 0x728);
        int64_t rax_4 = *(r14_1 + 0x758);
        *(r14_1 + 0x758) = 2;
        int128_t* rdi_3 = &var_158;
        
        if (rax_4 == 2)
            rdi_3 = nullptr;
        
        int64_t* rax_5 = core::option::Option$LT$T$GT$::filter::h0f01ff3529478ed4(rdi_3, arg2);
        
        if (rax_5)
            rbx = _$LT$alacritty..event..ActionContext$LT$N$C$T$GT$$u20$as$u20$alacritty..input..ActionContext$LT$T$GT$$GT$::trigger_hint::h4f3e94a68883926c(rbx, rax_5);
        
        int128_t var_118 = var_158;
        core::ptr::drop_in_place$LT$core..option..Option$LT$alacritty..display..hint..HintMatch$GT$$GT$::ha95ebafd6b78edef(r14_1 + 0x728);
        *(r14_1 + 0x758) = rax_4;
        int128_t zmm0_1 = var_118;
        *(r14_1 + 0x748) = zmm2;
        *(r14_1 + 0x738) = zmm1;
        *(r14_1 + 0x728) = zmm0_1;
        int64_t rax_9 = alacritty::display::window::Window::id::h395f89524db74beb(_$LT$alacritty..event..ActionContext$LT$N$C$T$GT$$u20$as$u20$alacritty..input..ActionContext$LT$T$GT$$GT$::window::hc2466ca785044c59(r14_1));
        alacritty::scheduler::Scheduler::unschedule::h47626c0d73e9c11f(&var_118, rbx[0xc], rax_9);
        result = core::ptr::drop_in_place$LT$core..option..Option$LT$alacritty..scheduler..Timer$GT$$GT$::h4830a0e7a5b3781a(&var_118);
        
        if (arg2 < 2)
            return _$LT$alacritty..event..ActionContext$LT$N$C$T$GT$$u20$as$u20$alacritty..input..ActionContext$LT$T$GT$$GT$::copy_selection::h4e46574a1c8d7956(rbx, 1);
    }
    else
    {
        result = jump_table_4f2b90[arg2] + &jump_table_4f2b90;
        
        switch (result)
        {
            case 0x859e06:
            {
                /* tailcall */
                return alacritty::input::Processor$LT$T$C$A$GT$::mouse_report::hed04f95cad75d625(
                    rbx, nullptr, 1);
            }
            case 0x859f3b:
            {
                result = 1;
                /* tailcall */
                return alacritty::input::Processor$LT$T$C$A$GT$::mouse_report::hed04f95cad75d625(
                    rbx, result, 1);
            }
            case 0x859f3f:
            {
                result = 2;
                /* tailcall */
                return alacritty::input::Processor$LT$T$C$A$GT$::mouse_report::hed04f95cad75d625(
                    rbx, result, 1);
            }
        }
    }
    
    return result;
}
