
  bool alacritty::input::Processor$LT$T$C$A$GT$::normal_mouse_report::hbfc2b27746782bc2(int64_t* arg1, void* arg2, int64_t arg3, int32_t arg4, char arg5)

{
    int32_t r12_1 = *(arg2 + 0x6dc);
    int64_t rcx = 0xdf;
    
    if (r12_1 & 0x4000)
        rcx = 0x7df;
    
    bool result = arg4 >= rcx;
    rcx = arg3 >= rcx;
    rcx |= result;
    
    if (rcx)
        return result;
    
    uint64_t rax = alloc::alloc::Global::alloc_impl::h6fb1b6049873c120(1, 4, 0);
    
    if (!rax)
    {
        alloc::alloc::handle_alloc_error::h88aa4f4f9d19c4f9();
        /* no return */
    }
    
    char r12_3 = r12_1 >> 0xe & 1;
    *rax = 0x5b1b;
    *(rax + 2) = 0x4d;
    *(rax + 3) = arg5 + 0x20;
    int64_t var_40 = 4;
    uint64_t var_38_1 = rax;
    int64_t var_30_1 = 4;
    rax = arg3 >= 0x5f;
    int128_t var_58;
    int64_t var_50;
    uint64_t var_48;
    
    if (!(rax & r12_3))
    {
        int64_t r14;
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
    
    if (!(arg4 >= 0x5f & r12_3))
    {
        int32_t rbp;
        rbp = arg4 + 0x21;
        alloc::vec::Vec$LT$T$C$A$GT$::push::hdd6373653790597a(&var_40, rbp);
    }
    else
    {
        alacritty::input::Processor$LT$T$C$A$GT$::normal_mouse_report::_$u7b$$u7b$closure$u7d$$u7d$::h3419623e3f24a613(&var_58, arg4);
        alloc::vec::Vec$LT$T$C$A$GT$::append_elements::h227b37816228bbe4(&var_40, var_50, var_48);
        int64_t var_48_1 = 0;
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::hf03622863648a7aa(&var_58);
    }
    
    int64_t var_48_2 = var_30_1;
    var_58 = var_40;
    return _$LT$alacritty..event..ActionContext$LT$N$C$T$GT$$u20$as$u20$alacritty..input..ActionContext$LT$T$GT$$GT$::write_to_pty::h8c41aa14fceee80b(arg1, &var_58);
}
