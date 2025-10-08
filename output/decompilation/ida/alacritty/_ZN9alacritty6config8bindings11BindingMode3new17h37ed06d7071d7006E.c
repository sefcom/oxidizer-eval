__int64 __fastcall alacritty::config::bindings::BindingMode::new(unsigned int a1, unsigned int a2)
{
  _BYTE v3[25]; // [rsp+Fh] [rbp-19h] BYREF

  v3[0] = 0;
  alacritty::config::bindings::_::InternalBitFlags::set(v3, 1LL, (unsigned __int8)(a1 & 2) >> 1);
  alacritty::config::bindings::_::InternalBitFlags::set(v3, 2LL, (unsigned __int8)(a1 & 4) >> 2);
  alacritty::config::bindings::_::InternalBitFlags::set(v3, 4LL, (a1 >> 12) & 1);
  alacritty::config::bindings::_::InternalBitFlags::set(v3, 8LL, HIWORD(a1) & 1);
  alacritty::config::bindings::_::InternalBitFlags::set(v3, 16LL, a2);
  alacritty::config::bindings::_::InternalBitFlags::set(v3, 32LL, (a1 >> 18) & 1);
  alacritty::config::bindings::_::InternalBitFlags::set(v3, 64LL, (a1 >> 21) & 1);
  return v3[0];
}