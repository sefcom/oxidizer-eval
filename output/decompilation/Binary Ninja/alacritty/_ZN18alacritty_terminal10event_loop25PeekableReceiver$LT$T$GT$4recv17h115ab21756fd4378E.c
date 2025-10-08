
  int64_t alacritty_terminal::event_loop::PeekableReceiver$LT$T$GT$::recv::h115ab21756fd4378(int64_t* arg1, int64_t* arg2)

{
    if (arg2[2] != -0x7ffffffffffffffd)
    {
        int64_t rax_2 = arg2[4];
        arg1[2] = rax_2;
        *arg1 = *(arg2 + 0x10);
        arg2[2] = -0x7ffffffffffffffd;
        return rax_2;
    }
    
    int64_t var_58;
    std::sync::mpmc::Receiver$LT$T$GT$::try_recv::haa6718ece8b77ad0(&var_58, *arg2, arg2[1]);
    char var_50;
    
    if (var_58 == -0x7ffffffffffffffd && var_50)
    {
        char const (** const var_40)[0x86] = &data_c77268;
        int64_t var_38 = 1;
        int64_t var_30 = 8;
        int128_t var_28 = {0};
        core::panicking::panic_fmt::h96f341d36638c225(&var_40);
        /* no return */
    }
    
    if (var_58 == -0x7ffffffffffffffd)
    {
        *arg1 = -0x7ffffffffffffffd;
        return core::ptr::drop_in_place$LT$core..result..Result$LT$alacritty_terminal..event_loop..Msg$C$std..sync..mpsc..TryRecvError$GT$$GT$::h44d8e2a1ee460e32(&var_58);
    }
    
    int64_t var_48;
    arg1[2] = var_48;
    *arg1 = var_58;
    return var_48;
}
