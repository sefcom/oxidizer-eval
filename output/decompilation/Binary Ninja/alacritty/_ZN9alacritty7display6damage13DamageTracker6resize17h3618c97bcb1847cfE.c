
  int64_t alacritty::display::damage::DamageTracker::resize::h3618c97bcb1847cf(void* arg1, int64_t arg2, int64_t arg3)

{
    *(arg1 + 0xb0) = arg2;
    *(arg1 + 0xb8) = arg3;
    alacritty::display::damage::FrameDamage::reset::hc5350e11c260da59(arg1 + 0x18, arg2);
    int64_t result =
        alacritty::display::damage::FrameDamage::reset::hc5350e11c260da59(arg1 + 0x50, arg2);
    *(arg1 + 0x48) = 1;
    return result;
}
