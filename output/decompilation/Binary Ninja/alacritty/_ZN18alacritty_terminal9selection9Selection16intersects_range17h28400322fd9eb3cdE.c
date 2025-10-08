
  int64_t alacritty_terminal::selection::Selection::intersects_range::h28400322fd9eb3cd(int32_t arg1, int32_t arg2)

{
    int32_t rbx = arg2;
    int32_t var_c = 0;
    
    if (arg1 < arg2)
        rbx = arg1;
    
    int32_t result;
    result = *_$LT$core..ops..range..RangeTo$LT$T$GT$$u20$as$u20$core..ops..range..RangeBounds$LT$T$GT$$GT$::end_bound::h14c9d6fe65901d1b(&var_c) - 1 >= rbx;
    return result;
}
