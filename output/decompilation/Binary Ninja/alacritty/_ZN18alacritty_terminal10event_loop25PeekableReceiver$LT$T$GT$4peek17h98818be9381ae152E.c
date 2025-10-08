
  void* alacritty_terminal::event_loop::PeekableReceiver$LT$T$GT$::peek::h98818be9381ae152(int64_t* arg1)

{
    void* result = &arg1[2];
    
    if (arg1[2] == -0x7ffffffffffffffd)
    {
        int64_t var_50;
        std::sync::mpmc::Receiver$LT$T$GT$::try_recv::haa6718ece8b77ad0(&var_50, *arg1, arg1[1]);
        int64_t r12_1 = var_50;
        int128_t var_38;
        int128_t var_48;
        
        if (r12_1 != -0x7ffffffffffffffd)
            var_38 = var_48;
        else
            core::ptr::drop_in_place$LT$core..result..Result$LT$alacritty_terminal..event_loop..Msg$C$std..sync..mpsc..TryRecvError$GT$$GT$::h44d8e2a1ee460e32(&var_50);
        core::ptr::drop_in_place$LT$core..result..Result$LT$alacritty_terminal..event_loop..Msg$C$std..sync..mpsc..TryRecvError$GT$$GT$::h44d8e2a1ee460e32(result);
        arg1[2] = r12_1;
        *(arg1 + 0x18) = var_38;
        
        if (r12_1 == -0x7ffffffffffffffd)
            return nullptr;
    }
    
    return result;
}
