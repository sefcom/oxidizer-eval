
  fn alacritty_terminal::term::search::RegexIter$LT$T$GT$::next_match::h1b33213739459af7(arg1: *mut i64, arg2: *mut i64) -> i64

{
    let result_1: i64;
    let mut result: i64 = result_1;
    let rsi: *mut c_void = arg2[5];
    let rdx: i64 = arg2[4];
    let rcx: i64 = *arg2;
    let r8: i32 = arg2[1];
    let r9: i32 = arg2[2];
    let r10: i32 = arg2[3];
    
    if arg2[6] == 1
    {
        result = r10;
        alacritty_terminal::term::search::_$LT$impl$u20$alacritty_terminal..term..Term$LT$T$GT$$GT$::regex_search_right::hdca176f2ea14268c(arg1, rsi, rdx, rcx, r8, r9);
        return result;
    }
    
    result = r10;
    alacritty_terminal::term::search::_$LT$impl$u20$alacritty_terminal..term..Term$LT$T$GT$$GT$::regex_search_left::h18fa67e9b20e95d7(arg1, rsi, rdx, rcx, r8, r9);
    result
}
