
  fn alacritty_terminal::event_loop::PeekableReceiver$LT$T$GT$::peek::h98818be9381ae152(arg1: *mut i64) -> *mut c_void

{
    let result: *mut c_void = &arg1[2];
    
    if arg1[2] == -0x7ffffffffffffffd
    {
        let mut var_50: i64;
        std::sync::mpmc::Receiver$LT$T$GT$::try_recv::haa6718ece8b77ad0(&var_50, *arg1, arg1[1]);
        let r12_1: i64 = var_50;
        let mut var_38: i128;
        let var_48: i128;
        
        if r12_1 != -0x7ffffffffffffffd
        {
            var_38 = var_48;
        }
        else
        {
            core::ptr::drop_in_place$LT$core..result..Result$LT$alacritty_terminal..event_loop..Msg$C$std..sync..mpsc..TryRecvError$GT$$GT$::h44d8e2a1ee460e32(&var_50);
        }
        core::ptr::drop_in_place$LT$core..result..Result$LT$alacritty_terminal..event_loop..Msg$C$std..sync..mpsc..TryRecvError$GT$$GT$::h44d8e2a1ee460e32(result);
        arg1[2] = r12_1;
        *arg1.byte_offset(0x18) = var_38;
        
        if r12_1 == -0x7ffffffffffffffd
        {
            return nullptr;
        }
    }
    
    result
}
