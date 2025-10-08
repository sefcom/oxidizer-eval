
  fn alacritty_terminal::event_loop::EventLoop$LT$T$C$U$GT$::drain_recv_channel::h2d21a4de93332a53(arg1: *mut c_void, arg2: *mut i64) -> i64

{
    let mut i_1: i64;
    alacritty_terminal::event_loop::PeekableReceiver$LT$T$GT$::recv::h115ab21756fd4378(&i_1, 
        arg1.byte_offset(0x70));
    let mut i: i64 = i_1;
    
    if i != -0x7ffffffffffffffd
    {
        do
        {
            let mut rcx_3: i64 = i ^ 0x8000000000000000;
            
            if i + 0x7fffffffffffffff >= 2
            {
                rcx_3 = 0;
            }
            
            let var_60: i64;
            
            if rcx_3 == 0
            {
                let mut i_2: i64 = i;
                let var_40_1: i64 = var_60;
                let var_58: i64;
                let var_38_1: i64 = var_58;
                alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::push_back::h7c7713be3f82d0d2(
                    arg2, &i_2);
            }
            else
            {
                if rcx_3 != 2
                {
                    return 0;
                }
                
                _$LT$alacritty_terminal..tty..unix..Pty$u20$as$u20$alacritty_terminal..event..OnResize$GT$::on_resize::h44ce8e7d6aa16083(arg1, var_60);
            }
            alacritty_terminal::event_loop::PeekableReceiver$LT$T$GT$::recv::h115ab21756fd4378(
                &i_1, arg1.byte_offset(0x70));
            i = i_1;
        } while i != -0x7ffffffffffffffd;
    }
    
    core::ptr::drop_in_place$LT$core..result..Result$LT$alacritty_terminal..event_loop..Msg$C$std..sync..mpsc..TryRecvError$GT$$GT$::h44d8e2a1ee460e32(&i_1);
    let mut result: i64;
    result = 1;
    result
}
