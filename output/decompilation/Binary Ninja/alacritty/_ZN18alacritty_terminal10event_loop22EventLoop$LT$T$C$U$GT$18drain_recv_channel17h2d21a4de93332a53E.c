
  int64_t alacritty_terminal::event_loop::EventLoop$LT$T$C$U$GT$::drain_recv_channel::h2d21a4de93332a53(void* arg1, int64_t* arg2)

{
    int64_t i_1;
    alacritty_terminal::event_loop::PeekableReceiver$LT$T$GT$::recv::h115ab21756fd4378(&i_1, 
        arg1 + 0x70);
    int64_t i = i_1;
    
    if (i != -0x7ffffffffffffffd)
    {
        do
        {
            int64_t rcx_3 = i ^ 0x8000000000000000;
            
            if (i + 0x7fffffffffffffff >= 2)
                rcx_3 = 0;
            
            int64_t var_60;
            
            if (!rcx_3)
            {
                int64_t i_2 = i;
                int64_t var_40_1 = var_60;
                int64_t var_58;
                int64_t var_38_1 = var_58;
                alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::push_back::h7c7713be3f82d0d2(
                    arg2, &i_2);
            }
            else
            {
                if (rcx_3 != 2)
                    return 0;
                
                _$LT$alacritty_terminal..tty..unix..Pty$u20$as$u20$alacritty_terminal..event..OnResize$GT$::on_resize::h44ce8e7d6aa16083(arg1, var_60);
            }
            alacritty_terminal::event_loop::PeekableReceiver$LT$T$GT$::recv::h115ab21756fd4378(
                &i_1, arg1 + 0x70);
            i = i_1;
        } while (i != -0x7ffffffffffffffd);
    }
    
    core::ptr::drop_in_place$LT$core..result..Result$LT$alacritty_terminal..event_loop..Msg$C$std..sync..mpsc..TryRecvError$GT$$GT$::h44d8e2a1ee460e32(&i_1);
    int64_t result;
    result = 1;
    return result;
}
