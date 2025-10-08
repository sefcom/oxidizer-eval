
  int64_t* alacritty_terminal::event_loop::EventLoopSender::send::haeef4044a20286f0(int64_t* arg1, int64_t* arg2, int128_t* arg3)

{
    int64_t var_30;
    std::sync::mpmc::Sender$LT$T$GT$::send::h12a80bae5fcd4320(&var_30, *arg2, arg2[1], arg3);
    int64_t rax = var_30;
    
    if (rax != -0x7ffffffffffffffd)
    {
        int128_t var_28;
        *(arg1 + 8) = var_28;
        *arg1 = rax;
    }
    else
    {
        polling::Poller::notify::h604973b6b86d6531(arg2[2] + 0x10);
        *arg1 = -0x7ffffffffffffffc;
    }
    
    return arg1;
}
