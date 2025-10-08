
  fn alacritty::event::ActionContext$LT$N$C$T$GT$::update_cursor_blinking::h6fa78630776ddb12(arg1: *mut c_void) -> *mut i8

{
    let rdi: *mut c_void = *arg1.byte_offset(8);
    let rax: *mut c_void = *arg1.byte_offset(0x40);
    let mut r14: bool = *rax.byte_offset(0x3d6);
    let mut rbp: i8 = *rax.byte_offset(0x3d7);
    let r15: i32 = *rdi.byte_offset(0x6dc);
    
    if (r15 & 0x10000) != 0
    {
        let rcx_1: bool = *rax.byte_offset(0x3d4);
        
        if rcx_1 != 4
        {
            rbp = *rax.byte_offset(0x3d5);
            r14 = rcx_1;
        }
    }
    
    let mut rax_1: i8 =
        alacritty_terminal::term::Term$LT$T$GT$::cursor_style::hbc8727fad33b6b36(rdi);
    
    if r14 == 3
    {
        goto 'label_854cb3;
    }
    
    let rdx_1: u32 = rbp;
    
    if rdx_1 - 1 < 2
    {
        goto 'label_854cb3;
    }
    
    let mut var_134: i8;
    let mut rbp_1: *mut c_void;
    
    if rdx_1 != 0
    {
        rbp_1 = *arg1.byte_offset(0x30);
        var_134 = 1;
        
        if (r15 & 0x10001) != 0
        {
            r14 = *rbp_1.byte_offset(0x2d0) == 2;
        }
        else
        {
            r14 = false;
        }
    }
    else
    {
        rax_1 = 0;
        'label_854cb3:
        rbp_1 = *arg1.byte_offset(0x30);
        var_134 = rax_1;
        
        if (r15 & 0x10001) == 0
        {
            r14 = false;
        }
        else
        {
            r14 = *rbp_1.byte_offset(0x2d0) == 2;
        }
    }
    
    let rax_2: i64 =
        alacritty::display::window::Window::id::h395f89524db74beb(rbp_1.byte_offset(0x320));
    let r12: *mut c_void = *arg1.byte_offset(0x60);
    let mut var_128: ();
    alacritty::scheduler::Scheduler::unschedule::h47626c0d73e9c11f(&var_128, r12, rax_2);
    core::ptr::drop_in_place$LT$core..option..Option$LT$alacritty..scheduler..Timer$GT$$GT$::h4830a0e7a5b3781a(&var_128);
    alacritty::scheduler::Scheduler::unschedule::h47626c0d73e9c11f(&var_128, r12, rax_2);
    core::ptr::drop_in_place$LT$core..option..Option$LT$alacritty..scheduler..Timer$GT$$GT$::h4830a0e7a5b3781a(&var_128);
    **arg1.byte_offset(0x48) = 0;
    
    if (var_134 & r14) != 0 && *rdi.byte_offset(0x6e2) == 1
    {
        alacritty::event::ActionContext$LT$N$C$T$GT$::schedule_blinking::h7f65cefdef5166e4(arg1);
        /* tailcall */
        return alacritty::event::ActionContext$LT$N$C$T$GT$::schedule_blinking_timeout::h7dcff9507b3e6248(arg1);
    }
    
    *rbp_1.byte_offset(0x836) = 0;
    let result: *mut i8 = *arg1.byte_offset(0x78);
    *result = 1;
    result
}
