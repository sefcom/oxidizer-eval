
  int64_t alacritty::input::Processor$LT$T$C$A$GT$::mouse_report::hed04f95cad75d625(int64_t* arg1, char arg2, char arg3)

{
    void* rbx = arg1[1];
    int32_t r12 = *(rbx + 0xc8);
    void* r13 = arg1[3];
    void var_58;
    _$LT$alacritty..event..ActionContext$LT$N$C$T$GT$$u20$as$u20$alacritty..input..ActionContext$LT$T$GT$$GT$::size_info::h75f6d6cd23dc8329(&var_58, arg1[6]);
    int64_t result;
    int32_t rdx_1;
    result = alacritty::event::Mouse::point::h7553a37268becc3a(*(r13 + 0x20), *(r13 + 0x28), 
        &var_58, r12);
    
    if (rdx_1 < 0)
        return result;
    
    int32_t rbp_1 = *arg1[5];
    uint8_t rcx_2 = (rbp_1 >> 5 & 8) | (rbp_1 & 4);
    rbp_1 u>>= 1;
    rbp_1 &= 0x10;
    rbp_1 |= rcx_2;
    
    if (*(rbx + 0x6dc) & 0x20)
    {
        rbp_1 += arg2;
        /* tailcall */
        return alacritty::input::Processor$LT$T$C$A$GT$::sgr_mouse_report::h6feeb7c04a7ac1ed(*arg1, 
            result, rdx_1, rbp_1, arg3);
    }
    
    if (!arg3)
        rbp_1 += arg2;
    else
        rbp_1 |= 3;
    
    /* tailcall */
    return alacritty::input::Processor$LT$T$C$A$GT$::normal_mouse_report::hbfc2b27746782bc2(*arg1, 
        rbx, result, rdx_1, rbp_1);
}
