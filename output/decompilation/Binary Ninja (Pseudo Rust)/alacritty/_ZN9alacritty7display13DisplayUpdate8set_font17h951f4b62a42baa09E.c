
  fn alacritty::display::DisplayUpdate::set_font::h951f4b62a42baa09(arg1: *mut i64, arg2: i64) -> i64

{
    let rax: i64;
    let var_18: i64 = rax;
    core::ptr::drop_in_place$LT$core..option..Option$LT$alacritty..config..font..Font$GT$$GT$::h6a8a19fc679bf79f(arg1);
    let result: i64 = memcpy(arg1, arg2, 0xd0);
    *arg1.byte_offset(0xdc) = 1;
    result
}
