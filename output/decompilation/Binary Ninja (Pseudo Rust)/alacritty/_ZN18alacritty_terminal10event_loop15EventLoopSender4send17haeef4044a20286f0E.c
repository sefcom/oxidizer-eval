
  fn alacritty_terminal::event_loop::EventLoopSender::send::haeef4044a20286f0(arg1: *mut i64, arg2: *mut i64, arg3: *mut i128) -> *mut i64

{
    let mut var_30: i64;
    std::sync::mpmc::Sender$LT$T$GT$::send::h12a80bae5fcd4320(&var_30, *arg2, arg2[1], arg3);
    let rax: i64 = var_30;
    
    if rax != -0x7ffffffffffffffd
    {
        let var_28: i128;
        *arg1.byte_offset(8) = var_28;
        *arg1 = rax;
    }
    else
    {
        polling::Poller::notify::h604973b6b86d6531(arg2[2] + 0x10);
        *arg1 = -0x7ffffffffffffffc;
    }
    
    arg1
}
