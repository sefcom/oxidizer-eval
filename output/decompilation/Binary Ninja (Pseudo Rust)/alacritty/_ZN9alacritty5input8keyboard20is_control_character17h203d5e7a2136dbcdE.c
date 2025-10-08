
  fn alacritty::input::keyboard::is_control_character::h203d5e7a2136dbcd(arg1: i8, arg2: i64) -> i64

{
    if arg2 != 1
    {
        return 0;
    }
    
    let mut result: i64;
    result = 1;
    
    if arg1 >= 0x20
    {
        /* tailcall */
        return core::ops::range::RangeBounds::contains::hd1bbb23183ae382d(arg1);
    }
    
    result
}
