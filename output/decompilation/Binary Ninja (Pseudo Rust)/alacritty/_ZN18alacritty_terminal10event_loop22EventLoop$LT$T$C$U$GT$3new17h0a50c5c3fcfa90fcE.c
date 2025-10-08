
  fn alacritty_terminal::event_loop::EventLoop$LT$T$C$U$GT$::new::h0a50c5c3fcfa90fc(arg1: *mut i64, arg2: i64, arg3: *mut i8, arg4: *mut i64, arg5: i8, arg6: i8) -> i64

{
    let mut var_a8: i64 = arg2;
    let mut var_a0: i64;
    std::sync::mpmc::channel::ha252193adc172ba6(&var_a0);
    let rbx: i64 = var_a0;
    let mut var_90: i64;
    let rbp: i64 = var_90;
    let mut var_88: i64;
    let r12: i64 = var_88;
    let mut var_68: i64 = rbx;
    let var_98: i64;
    let var_60: i64 = var_98;
    let mut var_58: i64 = rbp;
    let var_50: i64 = r12;
    polling::Poller::new::h54da8015f7437264(&var_a0);
    
    if var_a0 == 1
    {
        *arg1 = var_98;
        arg1[0x13] = 2;
        core::ptr::drop_in_place$LT$std..sync..mpsc..Receiver$LT$alacritty_terminal..event_loop..Msg$GT$$GT$::h82c9d4559ee14a57(&var_58);
        core::ptr::drop_in_place$LT$std..sync..mpsc..Sender$LT$alacritty_terminal..event_loop..Msg$GT$$GT$::h3379555d6b398184(&var_68);
        core::ptr::drop_in_place$LT$alacritty_terminal..tty..unix..Pty$GT$::hd757896eccbf420d(arg4);
        core::ptr::drop_in_place$LT$alacritty..event..EventProxy$GT$::hde04cda56e5a09b7(arg3);
        return core::ptr::drop_in_place$LT$alloc..sync..Arc$LT$alacritty_terminal..sync..FairMutex$LT$alacritty_terminal..term..Term$LT$alacritty..event..EventProxy$GT$$GT$$GT$$GT$::h894d15eab6fc536d(&var_a8);
    }
    
    let rax_2: i32 = *var_a0[4];
    let zmm0_1: i128 = var_90;
    let var_48_1: i128 = zmm0_1;
    var_a0 = 1;
    let var_98_1: i64 = 1;
    var_90 = rax_2;
    var_90 = var_98;
    *var_88[4] = zmm0_1;
    let rax_3: u64 = alloc::boxed::Box$LT$T$GT$::new::h0181621e79023cdc(&var_a0);
    *arg1.byte_offset(0x40) = *arg4.byte_offset(0x40);
    let zmm0_2: i128 = *arg4;
    let mut zmm1_1: i128 = *arg4.byte_offset(0x10);
    let zmm2_1: i128 = *arg4.byte_offset(0x20);
    *arg1.byte_offset(0x30) = *arg4.byte_offset(0x30);
    *arg1.byte_offset(0x20) = zmm2_1;
    *arg1.byte_offset(0x10) = zmm1_1;
    *arg1 = zmm0_2;
    zmm1_1 = *arg3.byte_offset(0x10);
    *arg1.byte_offset(0x98) = *arg3;
    *arg1.byte_offset(0xa8) = zmm1_1;
    arg1[0x17] = *arg3.byte_offset(0x20);
    arg1[0xa] = rbx;
    arg1[0xb] = var_98;
    arg1[0xc] = rax_3;
    arg1[0xd] = arg2;
    arg1[0xe] = rbp;
    arg1[0xf] = r12;
    arg1[0x10] = -0x7ffffffffffffffd;
    arg1[0x18] = arg5;
    *arg1.byte_offset(0xc1) = arg6;
    arg6
}
