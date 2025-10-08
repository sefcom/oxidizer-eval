
  fn alacritty_terminal::event_loop::State::goto_next::h7eba0190fe200f00(arg1: *mut i64) -> i64

{
    let mut var_28: i64;
    alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::pop_front::h0d1d48e973731513(&var_28, 
        arg1);
    let r14: i64 = var_28;
    let mut var_38: i128;
    let var_20: i128;
    
    if r14 != -0x7fffffffffffffff
    {
        var_38 = var_20;
    }
    let result: i64 = core::ptr::drop_in_place$LT$core..option..Option$LT$alacritty_terminal..event_loop..Writing$GT$$GT$::h05d462abb11a4eb0(&arg1[0x40]);
    arg1[0x40] = r14;
    *arg1.byte_offset(0x208) = var_38;
    arg1[0x43] = 0;
    result
}
