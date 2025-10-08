
  fn alacritty_terminal::event_loop::PeekableReceiver$LT$T$GT$::recv::h115ab21756fd4378(arg1: *mut i64, arg2: *mut i64) -> i64

{
    if arg2[2] != -0x7ffffffffffffffd
    {
        let rax_2: i64 = arg2[4];
        arg1[2] = rax_2;
        *arg1 = *arg2.byte_offset(0x10);
        arg2[2] = -0x7ffffffffffffffd;
        return rax_2;
    }
    
    let mut var_58: i64;
    std::sync::mpmc::Receiver$LT$T$GT$::try_recv::haa6718ece8b77ad0(&var_58, *arg2, arg2[1]);
    let var_50: i8;
    
    if var_58 == -0x7ffffffffffffffd && var_50 != 0
    {
        let mut var_40: *mut *mut [i8; 0x86] = &data_c77268;
        let var_38: i64 = 1;
        let var_30: i64 = 8;
        let var_28: i128 = {0};
        core::panicking::panic_fmt::h96f341d36638c225(&var_40);
        /* no return */
    }
    
    if var_58 == -0x7ffffffffffffffd
    {
        *arg1 = -0x7ffffffffffffffd;
        return core::ptr::drop_in_place$LT$core..result..Result$LT$alacritty_terminal..event_loop..Msg$C$std..sync..mpsc..TryRecvError$GT$$GT$::h44d8e2a1ee460e32(&var_58);
    }
    
    let var_48: i64;
    arg1[2] = var_48;
    *arg1 = var_58;
    var_48
}
