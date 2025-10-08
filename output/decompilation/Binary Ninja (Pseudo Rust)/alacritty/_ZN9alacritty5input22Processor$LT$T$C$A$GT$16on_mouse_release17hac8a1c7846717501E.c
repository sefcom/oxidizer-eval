
  fn alacritty::input::Processor$LT$T$C$A$GT$::on_mouse_release::hac8a1c7846717501(arg1: *mut i64, arg2: i16) -> *mut c_void

{
    let mut rbx: *mut i64 = arg1;
    let r14: *mut i8 = arg1[5];
    let mut rax_1: i8;
    
    if (*r14 & 4) == 0
    {
        rax_1 = _$LT$alacritty..event..ActionContext$LT$N$C$T$GT$$u20$as$u20$alacritty..input..ActionContext$LT$T$GT$$GT$::mouse_mode::h5645ae47cef353d4(rbx[1]);
    }
    
    let mut result: *mut c_void;
    
    if (*r14 & 4) != 0 || rax_1 == 0
    {
        let mut r14_1: *mut c_void = rbx[6];
        let zmm1: i128 = *r14_1.byte_offset(0x738);
        let zmm2: i128 = *r14_1.byte_offset(0x748);
        let mut var_158: i128 = *r14_1.byte_offset(0x728);
        let rax_4: i64 = *r14_1.byte_offset(0x758);
        *r14_1.byte_offset(0x758) = 2;
        let mut rdi_3: *mut i128 = &var_158;
        
        if rax_4 == 2
        {
            rdi_3 = nullptr;
        }
        
        let rax_5: *mut i64 = core::option::Option$LT$T$GT$::filter::h0f01ff3529478ed4(rdi_3, arg2);
        
        if rax_5 != 0
        {
            rbx = _$LT$alacritty..event..ActionContext$LT$N$C$T$GT$$u20$as$u20$alacritty..input..ActionContext$LT$T$GT$$GT$::trigger_hint::h4f3e94a68883926c(rbx, rax_5);
        }
        
        let mut var_118: i128 = var_158;
        core::ptr::drop_in_place$LT$core..option..Option$LT$alacritty..display..hint..HintMatch$GT$$GT$::ha95ebafd6b78edef(r14_1.byte_offset(0x728));
        *r14_1.byte_offset(0x758) = rax_4;
        let zmm0_1: i128 = var_118;
        *r14_1.byte_offset(0x748) = zmm2;
        *r14_1.byte_offset(0x738) = zmm1;
        *r14_1.byte_offset(0x728) = zmm0_1;
        let rax_9: i64 = alacritty::display::window::Window::id::h395f89524db74beb(_$LT$alacritty..event..ActionContext$LT$N$C$T$GT$$u20$as$u20$alacritty..input..ActionContext$LT$T$GT$$GT$::window::hc2466ca785044c59(r14_1));
        alacritty::scheduler::Scheduler::unschedule::h47626c0d73e9c11f(&var_118, rbx[0xc], rax_9);
        result = core::ptr::drop_in_place$LT$core..option..Option$LT$alacritty..scheduler..Timer$GT$$GT$::h4830a0e7a5b3781a(&var_118);
        
        if arg2 < 2
        {
            return _$LT$alacritty..event..ActionContext$LT$N$C$T$GT$$u20$as$u20$alacritty..input..ActionContext$LT$T$GT$$GT$::copy_selection::h4e46574a1c8d7956(rbx, 1);
        }
    }
    else
    {
        result = jump_table_4f2b90[arg2] + &jump_table_4f2b90;
        
        match result
        {
            0x859e06 =>
            {
                /* tailcall */
                return alacritty::input::Processor$LT$T$C$A$GT$::mouse_report::hed04f95cad75d625(
                    rbx, nullptr, 1);
            }
            0x859f3b =>
            {
                result = 1;
                /* tailcall */
                return alacritty::input::Processor$LT$T$C$A$GT$::mouse_report::hed04f95cad75d625(
                    rbx, result, 1);
            }
            0x859f3f =>
            {
                result = 2;
                /* tailcall */
                return alacritty::input::Processor$LT$T$C$A$GT$::mouse_report::hed04f95cad75d625(
                    rbx, result, 1);
            }
        }
    }
    
    result
}
