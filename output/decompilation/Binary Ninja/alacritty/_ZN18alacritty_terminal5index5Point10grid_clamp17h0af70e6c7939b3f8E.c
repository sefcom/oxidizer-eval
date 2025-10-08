
  int64_t alacritty_terminal::index::Point::grid_clamp::h0af70e6c7939b3f8(int64_t arg1, int32_t arg2, void* arg3)

{
    int64_t rax;
    int64_t var_28 = rax;
    int64_t rax_1 =
        alacritty_terminal::grid::Dimensions::last_column::h43ccb5805f51a6ac(*(arg3 + 0x90));
    int32_t r14_1 = core::cmp::Ord::min::hffab314b5e6491b1(arg1, rax_1);
    int32_t rax_3 =
        alacritty_terminal::grid::Dimensions::bottommost_line::h4f75d9959625aee4(*(arg3 + 0x98));
    
    if (arg2 > rax_3)
        r14_1 = rax_1;
    
    if (arg2 >= 0)
        return r14_1;
    
    return rax_3;
}
