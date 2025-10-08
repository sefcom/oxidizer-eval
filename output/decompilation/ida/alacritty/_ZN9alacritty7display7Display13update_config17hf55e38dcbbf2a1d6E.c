void *__fastcall alacritty::display::Display::update_config(__int64 a1, __int64 a2)
{
  unsigned int v2; // eax
  _BYTE src[823]; // [rsp+1h] [rbp-337h] BYREF

  *(_BYTE *)(a1 + 192) = *(_BYTE *)(a2 + 11);
  *(_BYTE *)(a1 + 1472) = *(_BYTE *)(a2 + 858);
  v2 = 1000000 * (*(_WORD *)(a2 + 856) % 0x3E8u);
  *(_QWORD *)(a1 + 1440) = (unsigned int)(8389 * (*(unsigned __int16 *)(a2 + 856) >> 3)) >> 20;
  *(_DWORD *)(a1 + 1448) = v2;
  <alacritty::display::color::List as core::convert::From<&alacritty::config::color::Colors>>::from(src);
  return memcpy((void *)(a1 + 2104), src, 0x327uLL);
}