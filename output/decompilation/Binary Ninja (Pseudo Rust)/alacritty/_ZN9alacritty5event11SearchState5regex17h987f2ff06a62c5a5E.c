
  fn alacritty::event::SearchState::regex::h987f2ff06a62c5a5(arg1: *mut c_void) -> i64

{
    if *arg1.byte_offset(0x1100) != 1
    {
        return 0;
    }
    
    /* tailcall */
    alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::get::hff110cf533a80182(
        arg1.byte_offset(0x1110), *arg1.byte_offset(0x1108))
}
