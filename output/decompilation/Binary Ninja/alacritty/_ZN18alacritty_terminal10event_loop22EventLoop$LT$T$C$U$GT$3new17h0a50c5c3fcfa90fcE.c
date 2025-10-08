
  int64_t alacritty_terminal::event_loop::EventLoop$LT$T$C$U$GT$::new::h0a50c5c3fcfa90fc(int64_t* arg1, int64_t arg2, char* arg3, int64_t* arg4, char arg5, char arg6)

{
    int64_t var_a8 = arg2;
    int64_t var_a0;
    std::sync::mpmc::channel::ha252193adc172ba6(&var_a0);
    int64_t rbx = var_a0;
    int64_t var_90;
    int64_t rbp = var_90;
    int64_t var_88;
    int64_t r12 = var_88;
    int64_t var_68 = rbx;
    int64_t var_98;
    int64_t var_60 = var_98;
    int64_t var_58 = rbp;
    int64_t var_50 = r12;
    polling::Poller::new::h54da8015f7437264(&var_a0);
    
    if (var_a0 == 1)
    {
        *arg1 = var_98;
        arg1[0x13] = 2;
        core::ptr::drop_in_place$LT$std..sync..mpsc..Receiver$LT$alacritty_terminal..event_loop..Msg$GT$$GT$::h82c9d4559ee14a57(&var_58);
        core::ptr::drop_in_place$LT$std..sync..mpsc..Sender$LT$alacritty_terminal..event_loop..Msg$GT$$GT$::h3379555d6b398184(&var_68);
        core::ptr::drop_in_place$LT$alacritty_terminal..tty..unix..Pty$GT$::hd757896eccbf420d(arg4);
        core::ptr::drop_in_place$LT$alacritty..event..EventProxy$GT$::hde04cda56e5a09b7(arg3);
        return core::ptr::drop_in_place$LT$alloc..sync..Arc$LT$alacritty_terminal..sync..FairMutex$LT$alacritty_terminal..term..Term$LT$alacritty..event..EventProxy$GT$$GT$$GT$$GT$::h894d15eab6fc536d(&var_a8);
    }
    
    int32_t rax_2 = *var_a0[4];
    int128_t zmm0_1 = var_90;
    int128_t var_48_1 = zmm0_1;
    var_a0 = 1;
    int64_t var_98_1 = 1;
    var_90 = rax_2;
    var_90 = var_98;
    *var_88[4] = zmm0_1;
    uint64_t rax_3 = alloc::boxed::Box$LT$T$GT$::new::h0181621e79023cdc(&var_a0);
    *(arg1 + 0x40) = *(arg4 + 0x40);
    int128_t zmm0_2 = *arg4;
    int128_t zmm1_1 = *(arg4 + 0x10);
    int128_t zmm2_1 = *(arg4 + 0x20);
    *(arg1 + 0x30) = *(arg4 + 0x30);
    *(arg1 + 0x20) = zmm2_1;
    *(arg1 + 0x10) = zmm1_1;
    *arg1 = zmm0_2;
    zmm1_1 = *(arg3 + 0x10);
    *(arg1 + 0x98) = *arg3;
    *(arg1 + 0xa8) = zmm1_1;
    arg1[0x17] = *(arg3 + 0x20);
    arg1[0xa] = rbx;
    arg1[0xb] = var_98;
    arg1[0xc] = rax_3;
    arg1[0xd] = arg2;
    arg1[0xe] = rbp;
    arg1[0xf] = r12;
    arg1[0x10] = -0x7ffffffffffffffd;
    arg1[0x18] = arg5;
    *(arg1 + 0xc1) = arg6;
    return arg6;
}
