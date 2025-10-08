
  fn alacritty_terminal::index::Point::grid_clamp::h0af70e6c7939b3f8(arg1: i64, arg2: i32, arg3: *mut c_void) -> i64

{
    let rax: i64;
    let var_28: i64 = rax;
    let rax_1: i64 = alacritty_terminal::grid::Dimensions::last_column::h43ccb5805f51a6ac(
        *arg3.byte_offset(0x90));
    let mut r14_1: i32 = core::cmp::Ord::min::hffab314b5e6491b1(arg1, rax_1);
    let rax_3: i32 = alacritty_terminal::grid::Dimensions::bottommost_line::h4f75d9959625aee4(
        *arg3.byte_offset(0x98));
    
    if arg2 > rax_3
    {
        r14_1 = rax_1;
    }
    
    if arg2 >= 0
    {
        return r14_1;
    }
    
    rax_3
}
