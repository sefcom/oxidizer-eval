
  int64_t alacritty_terminal::event_loop::State::goto_next::h7eba0190fe200f00(int64_t* arg1)

{
    int64_t var_28;
    alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::pop_front::h0d1d48e973731513(&var_28, 
        arg1);
    int64_t r14 = var_28;
    int128_t var_38;
    int128_t var_20;
    
    if (r14 != -0x7fffffffffffffff)
        var_38 = var_20;
    int64_t result = core::ptr::drop_in_place$LT$core..option..Option$LT$alacritty_terminal..event_loop..Writing$GT$$GT$::h05d462abb11a4eb0(&arg1[0x40]);
    arg1[0x40] = r14;
    *(arg1 + 0x208) = var_38;
    arg1[0x43] = 0;
    return result;
}
