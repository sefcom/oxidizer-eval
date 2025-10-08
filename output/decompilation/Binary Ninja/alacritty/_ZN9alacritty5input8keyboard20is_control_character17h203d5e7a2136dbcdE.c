
  int64_t alacritty::input::keyboard::is_control_character::h203d5e7a2136dbcd(char arg1, int64_t arg2)

{
    if (arg2 != 1)
        return 0;
    
    int64_t result;
    result = 1;
    
    if (arg1 >= 0x20)
        /* tailcall */
        return core::ops::range::RangeBounds::contains::hd1bbb23183ae382d(arg1);
    
    return result;
}
