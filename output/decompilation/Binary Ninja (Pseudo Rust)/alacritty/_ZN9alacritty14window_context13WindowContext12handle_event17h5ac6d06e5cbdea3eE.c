
  fn alacritty::window_context::WindowContext::handle_event::h5ac6d06e5cbdea3e(arg1: *mut c_void, arg2: i64, arg3: i64, arg4: i64, arg5: *mut i64) -> i64

{
    let rax: i64 = *arg5;
    let mut var_f8: ();
    
    if rax == 3
    {
        if arg5[0x12] != 0x1d
        {
            memcpy(&var_f8, arg5, 0xc0);
            return alloc::vec::Vec$LT$T$C$A$GT$::push::hae985e737553ba9c(arg1.byte_offset(0x1de0), 
                &var_f8);
        }
    }
    else if rax != 8
    {
        memcpy(&var_f8, arg5, 0xc0);
        return alloc::vec::Vec$LT$T$C$A$GT$::push::hae985e737553ba9c(arg1.byte_offset(0x1de0), 
            &var_f8);
    }
    
    if *arg1.byte_offset(0x1df0) == 0
    {
        /* tailcall */
        return core::ptr::drop_in_place$LT$winit..event..Event$LT$alacritty..event..Event$GT$$GT$::h2f5abd1f5210d02c(arg5);
    }
    
    let r12_1: *mut c_void = *arg1.byte_offset(0x1e18);
    alacritty_terminal::sync::FairMutex$LT$T$GT$::lock::h8771cda87d96e8b1(r12_1.byte_offset(0x10));
    let mut var_250: *mut c_void = arg1.byte_offset(0x1d40);
    let var_248_1: *mut i32 = r12_1.byte_offset(0x18);
    let var_240_1: i64 = arg3;
    let var_238_1: *mut c_void = arg1.byte_offset(0x1cf0);
    let var_230_1: *mut c_void = arg1.byte_offset(0x1d58);
    let var_228_1: *mut c_void = arg1.byte_offset(0x1e28);
    let var_220_1: *mut c_void = arg1.byte_offset(0x1170);
    let var_218_1: *mut c_void = arg1.byte_offset(0x1cd0);
    let var_210_1: i64 = *arg1.byte_offset(0x1e20) + 0x10;
    let var_208_1: *mut c_void = arg1.byte_offset(0x1e39);
    let var_200_1: *mut c_void = arg1.byte_offset(0x1d30);
    let var_1f8_1: i64 = arg2;
    let var_1f0_1: i64 = arg4;
    let var_1e8_1: *mut c_void = arg1;
    let var_1e0_1: *mut c_void = arg1.byte_offset(0x1e10);
    let var_1d8_1: *mut c_void = arg1.byte_offset(0x1e38);
    let var_1d0_1: *mut c_void = arg1.byte_offset(0x1e3a);
    let var_1c8_1: i64 = *arg1.byte_offset(0x1e30);
    let var_1c0_1: i8 = *arg1.byte_offset(0x1e3b);
    let rax_9: i8 = *arg1.byte_offset(0x1100);
    let mut i_1: *mut i64;
    alloc::vec::Vec$LT$T$C$A$GT$::drain::ha853ee75937775c8(&i_1, arg1.byte_offset(0x1de0));
    let var_270: i64;
    
    for let mut i: *mut i64 = i_1; i != var_270; i = i_1
    {
        i_1 = &i[0x18];
        let rax_11: i64 = *i;
        
        if rax_11 == 0xb
        {
            break;
        }
        
        let mut var_1b8: i64 = rax_11;
        let mut var_1b0: ();
        memcpy(&var_1b0, &i[1], 0xb8);
        alacritty::event::_$LT$impl$u20$alacritty..input..Processor$LT$alacritty..event..EventProxy$C$alacritty..event..ActionContext$LT$alacritty_terminal..event_loop..Notifier$C$alacritty..event..EventProxy$GT$$GT$$GT$::handle_event::hbc6e5c650f7e56d9(&var_250, &var_1b8);
    }
    
    core::ptr::drop_in_place$LT$alloc..vec..drain..Drain$LT$winit..event..Event$LT$alacritty..event..Event$GT$$GT$$GT$::he821fa7f9645a3a7(&i_1);
    let mut rax_18: i8;
    
    if *arg1.byte_offset(0x16cc) == 0
    {
        rax_18 = *arg1.byte_offset(0x1e38);
        
        if (rax_18 & 1) != 0 || *arg1.byte_offset(0x1d29) == 1
        {
            goto 'label_87023f;
        }
    }
    else
    {
        alacritty::window_context::WindowContext::submit_display_update::h6cc5b42c48dd8bf0(
            r12_1.byte_offset(0x18), arg1.byte_offset(0x1170), arg1.byte_offset(0x1d40), 
            arg1.byte_offset(0x1cd0), arg1, rax_9, (*arg1.byte_offset(0x1e20)).byte_offset(0x10));
        *arg1.byte_offset(0x1e38) = 1;
        'label_87023f:
        let rax_19: *mut c_void = *arg1.byte_offset(0x1e20);
        *arg1.byte_offset(0x1e28);
        rax_18 = alacritty::display::Display::update_highlighted_hints::h6a14f2ce82852321(
            arg1.byte_offset(0x1170), r12_1.byte_offset(0x18), *rax_19.byte_offset(0x2e0), 
            *rax_19.byte_offset(0x2e8), arg1.byte_offset(0x1cf0)) | *arg1.byte_offset(0x1e38);
        *arg1.byte_offset(0x1e38) = rax_18;
        *arg1.byte_offset(0x1d29) = 0;
    }
    
    if (rax_18 & 1) != 0 && *arg1.byte_offset(0x1580) == 1 && *arg1.byte_offset(0x1e3a) == 0
        && (*arg5 != 3 || arg5[0x12] != 0x1d) && *arg1.byte_offset(0x1581) == 0
    {
        *arg1.byte_offset(0x1581) = 1;
        winit::window::Window::request_redraw::h03824d2d23a334d5(arg1.byte_offset(0x14b0));
    }
    
    core::ptr::drop_in_place$LT$lock_api..mutex..MutexGuard$LT$parking_lot..raw_mutex..RawMutex$C$alacritty_terminal..term..Term$LT$alacritty..event..EventProxy$GT$$GT$$GT$::h090449980f2d2d72(r12_1.byte_offset(0x10));
    core::ptr::drop_in_place$LT$winit..event..Event$LT$alacritty..event..Event$GT$$GT$::h2f5abd1f5210d02c(arg5)
}
