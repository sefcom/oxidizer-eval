void *__fastcall alacritty::display::damage::DamageTracker::new(void *dest, __int64 a2, __int64 a3)
{
  _QWORD src[28]; // [rsp+8h] [rbp-E0h] BYREF

  core::array::<impl core::default::Default for [T; 2]>::default(&src[3]);
  src[0] = 0LL;
  LOBYTE(src[21]) = 2;
  LOBYTE(src[24]) = 0;
  src[22] = a2;
  src[23] = a3;
  alacritty::display::damage::DamageTracker::resize(src, a2, a3);
  return memcpy(dest, src, 0xC8uLL);
}