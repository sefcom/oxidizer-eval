
  int64_t alacritty::display::DisplayUpdate::set_font::h951f4b62a42baa09(int64_t* arg1, int64_t arg2)

{
    int64_t rax;
    int64_t var_18 = rax;
    core::ptr::drop_in_place$LT$core..option..Option$LT$alacritty..config..font..Font$GT$$GT$::h6a8a19fc679bf79f(arg1);
    int64_t result = memcpy(arg1, arg2, 0xd0);
    *(arg1 + 0xdc) = 1;
    return result;
}
