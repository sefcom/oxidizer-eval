
  fn alacritty::input::Processor$LT$T$C$A$GT$::normal_mouse_report::hbfc2b27746782bc2(arg1: *mut i64, arg2: *mut c_void, arg3: i64, arg4: i32, arg5: i8) -> bool

{
    let r12_1: i32 = *arg2.byte_offset(0x6dc);
    let mut rcx: i64 = 0xdf;
    
    if (r12_1 & 0x4000) != 0
    {
        rcx = 0x7df;
    }
    
    let result: bool = arg4 >= rcx;
    rcx = arg3 >= rcx;
    rcx |= result;
    
    if rcx != 0
    {
        return result;
    }
    
    let mut rax: u64 = alloc::alloc::Global::alloc_impl::h6fb1b6049873c120(1, 4, 0);
    
    if rax == 0
    {
        alloc::alloc::handle_alloc_error::h88aa4f4f9d19c4f9();
        /* no return */
    }
    
    let r12_3: i8 = r12_1 >> 0xe & 1;
    *rax = 0x5b1b;
    *(rax + 2) = 0x4d;
    *(rax + 3) = arg5 + 0x20;
    let mut var_40: i64 = 4;
    let var_38_1: u64 = rax;
    let var_30_1: i64 = 4;
    rax = arg3 >= 0x5f;
    let mut var_58: i128;
    let var_50: i64;
    let mut var_48: u64;
    
    if (rax & r12_3) == 0
    {
        let mut r14: i64;
        r14 = arg3 + 0x21;
        alloc::vec::Vec$LT$T$C$A$GT$::push::hdd6373653790597a(&var_40, r14);
    }
    else
    {
        alacritty::input::Processor$LT$T$C$A$GT$::normal_mouse_report::_$u7b$$u7b$closure$u7d$$u7d$::h3419623e3f24a613(&var_58, arg3);
        alloc::vec::Vec$LT$T$C$A$GT$::append_elements::h227b37816228bbe4(&var_40, var_50, var_48);
        var_48 = 0;
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::hf03622863648a7aa(&var_58);
    }
    
    if (arg4 >= 0x5f & r12_3) == 0
    {
        let mut rbp: i32;
        rbp = arg4 + 0x21;
        alloc::vec::Vec$LT$T$C$A$GT$::push::hdd6373653790597a(&var_40, rbp);
    }
    else
    {
        alacritty::input::Processor$LT$T$C$A$GT$::normal_mouse_report::_$u7b$$u7b$closure$u7d$$u7d$::h3419623e3f24a613(&var_58, arg4);
        alloc::vec::Vec$LT$T$C$A$GT$::append_elements::h227b37816228bbe4(&var_40, var_50, var_48);
        let var_48_1: i64 = 0;
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::hf03622863648a7aa(&var_58);
    }
    
    let var_48_2: i64 = var_30_1;
    var_58 = var_40;
    _$LT$alacritty..event..ActionContext$LT$N$C$T$GT$$u20$as$u20$alacritty..input..ActionContext$LT$T$GT$$GT$::write_to_pty::h8c41aa14fceee80b(arg1, &var_58)
}
