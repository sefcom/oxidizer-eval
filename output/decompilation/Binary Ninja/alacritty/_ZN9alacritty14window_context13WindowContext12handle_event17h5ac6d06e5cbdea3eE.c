
  int64_t alacritty::window_context::WindowContext::handle_event::h5ac6d06e5cbdea3e(void* arg1, int64_t arg2, int64_t arg3, int64_t arg4, int64_t* arg5)

{
    int64_t rax = *arg5;
    void var_f8;
    
    if (rax == 3)
    {
        if (arg5[0x12] != 0x1d)
        {
            memcpy(&var_f8, arg5, 0xc0);
            return alloc::vec::Vec$LT$T$C$A$GT$::push::hae985e737553ba9c(arg1 + 0x1de0, &var_f8);
        }
    }
    else if (rax != 8)
    {
        memcpy(&var_f8, arg5, 0xc0);
        return alloc::vec::Vec$LT$T$C$A$GT$::push::hae985e737553ba9c(arg1 + 0x1de0, &var_f8);
    }
    
    if (!*(arg1 + 0x1df0))
        /* tailcall */
        return core::ptr::drop_in_place$LT$winit..event..Event$LT$alacritty..event..Event$GT$$GT$::h2f5abd1f5210d02c(arg5);
    
    void* r12_1 = *(arg1 + 0x1e18);
    alacritty_terminal::sync::FairMutex$LT$T$GT$::lock::h8771cda87d96e8b1(r12_1 + 0x10);
    void* var_250 = arg1 + 0x1d40;
    int32_t* var_248_1 = r12_1 + 0x18;
    int64_t var_240_1 = arg3;
    void* var_238_1 = arg1 + 0x1cf0;
    void* var_230_1 = arg1 + 0x1d58;
    void* var_228_1 = arg1 + 0x1e28;
    void* var_220_1 = arg1 + 0x1170;
    void* var_218_1 = arg1 + 0x1cd0;
    int64_t var_210_1 = *(arg1 + 0x1e20) + 0x10;
    void* var_208_1 = arg1 + 0x1e39;
    void* var_200_1 = arg1 + 0x1d30;
    int64_t var_1f8_1 = arg2;
    int64_t var_1f0_1 = arg4;
    void* var_1e8_1 = arg1;
    void* var_1e0_1 = arg1 + 0x1e10;
    void* var_1d8_1 = arg1 + 0x1e38;
    void* var_1d0_1 = arg1 + 0x1e3a;
    int64_t var_1c8_1 = *(arg1 + 0x1e30);
    char var_1c0_1 = *(arg1 + 0x1e3b);
    char rax_9 = *(arg1 + 0x1100);
    void* var_278;
    alloc::vec::Vec$LT$T$C$A$GT$::drain::ha853ee75937775c8(&var_278, arg1 + 0x1de0);
    int64_t* rsi_1 = var_278;
    int64_t var_270;
    
    if (rsi_1 != var_270)
    {
        int64_t var_1b8;
        int64_t* rbp_1 = &var_1b8;
        
        do
        {
            var_278 = &rsi_1[0x18];
            int64_t rax_11 = *rsi_1;
            
            if (rax_11 == 0xb)
                break;
            
            var_1b8 = rax_11;
            void var_1b0;
            memcpy(&var_1b0, &rsi_1[1], 0xb8);
            rbp_1 = alacritty::event::_$LT$impl$u20$alacritty..input..Processor$LT$alacritty..event..EventProxy$C$alacritty..event..ActionContext$LT$alacritty_terminal..event_loop..Notifier$C$alacritty..event..EventProxy$GT$$GT$$GT$::handle_event::hbc6e5c650f7e56d9(&var_250, rbp_1);
            rsi_1 = var_278;
        } while (rsi_1 != var_270);
    }
    
    core::ptr::drop_in_place$LT$alloc..vec..drain..Drain$LT$winit..event..Event$LT$alacritty..event..Event$GT$$GT$$GT$::he821fa7f9645a3a7(&var_278);
    char rax_18;
    
    if (!*(arg1 + 0x16cc))
    {
        rax_18 = *(arg1 + 0x1e38);
        
        if (rax_18 & 1 || *(arg1 + 0x1d29) == 1)
            goto label_87023f;
    }
    else
    {
        alacritty::window_context::WindowContext::submit_display_update::h6cc5b42c48dd8bf0(
            r12_1 + 0x18, arg1 + 0x1170, arg1 + 0x1d40, arg1 + 0x1cd0, arg1, rax_9, 
            *(arg1 + 0x1e20) + 0x10);
        *(arg1 + 0x1e38) = 1;
        label_87023f:
        void* rax_19 = *(arg1 + 0x1e20);
        *(arg1 + 0x1e28);
        rax_18 = alacritty::display::Display::update_highlighted_hints::h6a14f2ce82852321(
            arg1 + 0x1170, r12_1 + 0x18, *(rax_19 + 0x2e0), *(rax_19 + 0x2e8), arg1 + 0x1cf0)
            | *(arg1 + 0x1e38);
        *(arg1 + 0x1e38) = rax_18;
        *(arg1 + 0x1d29) = 0;
    }
    
    if (rax_18 & 1 && *(arg1 + 0x1580) == 1 && !*(arg1 + 0x1e3a)
        && (*arg5 != 3 || arg5[0x12] != 0x1d) && !*(arg1 + 0x1581))
    {
        *(arg1 + 0x1581) = 1;
        winit::window::Window::request_redraw::h03824d2d23a334d5(arg1 + 0x14b0);
    }
    
    core::ptr::drop_in_place$LT$lock_api..mutex..MutexGuard$LT$parking_lot..raw_mutex..RawMutex$C$alacritty_terminal..term..Term$LT$alacritty..event..EventProxy$GT$$GT$$GT$::h090449980f2d2d72(r12_1 + 0x10);
    return core::ptr::drop_in_place$LT$winit..event..Event$LT$alacritty..event..Event$GT$$GT$::h2f5abd1f5210d02c(arg5);
}
