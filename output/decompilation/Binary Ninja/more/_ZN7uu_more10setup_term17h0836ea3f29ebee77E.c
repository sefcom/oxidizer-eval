
  uint64_t* uu_more::setup_term::h0836ea3f29ebee77(uint64_t* arg1)

{
    int64_t rax;
    int64_t var_18 = rax;
    std::io::stdio::stdout::hb6a8e10bcccf3287();
    int64_t* r14 = &std::io::stdio::STDOUT::h411b213c5c9add46;
    uint64_t rax_2;
    
    if (!crossterm::terminal::enable_raw_mode::hd50a747b44e84432())
        rax_2 = 0;
    else
    {
        rax_2 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
        r14 = &data_526ba8;
    }
    
    arg1[1] = r14;
    *arg1 = rax_2;
    return arg1;
}
