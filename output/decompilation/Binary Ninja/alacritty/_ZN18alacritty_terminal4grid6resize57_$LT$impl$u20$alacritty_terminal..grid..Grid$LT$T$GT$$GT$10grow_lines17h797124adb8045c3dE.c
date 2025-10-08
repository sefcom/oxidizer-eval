
  int64_t alacritty_terminal::grid::resize::_$LT$impl$u20$alacritty_terminal..grid..Grid$LT$T$GT$$GT$::grow_lines::h797124adb8045c3d(int64_t* arg1, int64_t arg2)

{
    int64_t rbx_1 = arg2 - arg1[0x13];
    int64_t r13 = 0;
    alacritty_terminal::grid::storage::Storage$LT$T$GT$::initialize::hf07ff5cf81d3c7d9(arg1, 
        arg2 - arg1[4], 
        *(_$LT$alacritty_terminal..grid..storage..Storage$LT$T$GT$$u20$as$u20$core..ops..index..Index$LT$alacritty_terminal..index..Line$GT$$GT$::index::h367087db943c6406(arg1, 0) + 0x10));
    arg1[4] = arg2;
    arg1[0x13] = arg2;
    int64_t rax_1 = arg1[5];
    
    if (rax_1 >= arg2)
        r13 = rax_1 - arg2;
    
    int64_t rax_3 = core::cmp::Ord::min::h7c13e9bfb8ea3862(r13, rbx_1);
    int32_t r12_2 = rax_3;
    
    if (rbx_1 != rax_3)
        alacritty_terminal::grid::Grid$LT$T$GT$::scroll_up::hf31756b0f8886f88(arg1, 0, arg2, 
            rbx_1 - rax_3);
    
    arg1[0xd] += r12_2;
    arg1[7] += r12_2;
    int64_t rax_4 = arg1[0x14];
    int64_t rcx_2 = 0;
    
    if (rax_4 >= rbx_1)
        rcx_2 = rax_4 - rbx_1;
    
    arg1[0x14] = rcx_2;
    /* tailcall */
    return alacritty_terminal::grid::Grid$LT$T$GT$::decrease_scroll_limit::h8721b8159654f913(arg1, 
        rbx_1);
}
