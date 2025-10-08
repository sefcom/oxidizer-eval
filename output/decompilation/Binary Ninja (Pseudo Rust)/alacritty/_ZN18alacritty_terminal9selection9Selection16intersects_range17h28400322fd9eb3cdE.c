
  fn alacritty_terminal::selection::Selection::intersects_range::h28400322fd9eb3cd(arg1: i32, arg2: i32) -> i64

{
    let mut rbx: i32 = arg2;
    let mut var_c: i32 = 0;
    
    if arg1 < arg2
    {
        rbx = arg1;
    }
    
    let mut result: i32;
    result = *_$LT$core..ops..range..RangeTo$LT$T$GT$$u20$as$u20$core..ops..range..RangeBounds$LT$T$GT$$GT$::end_bound::h14c9d6fe65901d1b(&var_c) - 1 >= rbx;
    result
}
