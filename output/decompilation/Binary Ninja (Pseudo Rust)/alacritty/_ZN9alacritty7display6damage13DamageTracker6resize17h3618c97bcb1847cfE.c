
  fn alacritty::display::damage::DamageTracker::resize::h3618c97bcb1847cf(arg1: *mut c_void, arg2: i64, arg3: i64) -> i64

{
    *arg1.byte_offset(0xb0) = arg2;
    *arg1.byte_offset(0xb8) = arg3;
    alacritty::display::damage::FrameDamage::reset::hc5350e11c260da59(arg1.byte_offset(0x18), arg2);
    let result: i64 = alacritty::display::damage::FrameDamage::reset::hc5350e11c260da59(
        arg1.byte_offset(0x50), arg2);
    *arg1.byte_offset(0x48) = 1;
    result
}
