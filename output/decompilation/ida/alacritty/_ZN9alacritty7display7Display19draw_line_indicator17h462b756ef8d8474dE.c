__int64 __fastcall alacritty::display::Display::draw_line_indicator(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        unsigned __int8 a4,
        unsigned __int64 a5,
        __int64 a6)
{
  unsigned __int64 v6; // r15
  unsigned __int64 v7; // rbp
  unsigned __int64 v8; // r12
  unsigned __int16 *v9; // rdx
  unsigned __int16 *v10; // rcx
  __int64 v14; // [rsp+18h] [rbp-C0h] BYREF
  __int64 v15; // [rsp+20h] [rbp-B8h] BYREF
  _BYTE v16[8]; // [rsp+28h] [rbp-B0h] BYREF
  __int64 v17; // [rsp+30h] [rbp-A8h]
  unsigned __int64 v18; // [rsp+38h] [rbp-A0h]
  unsigned __int64 v19[3]; // [rsp+40h] [rbp-98h] BYREF
  _QWORD v20[4]; // [rsp+58h] [rbp-80h] BYREF
  _QWORD v21[12]; // [rsp+78h] [rbp-60h] BYREF

  v14 = a6;
  v6 = a1[244];
  v15 = a3 - 1;
  v20[0] = &v14;
  v20[1] = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
  v20[2] = &v15;
  v20[3] = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
  v21[0] = &off_8827E8;
  v21[1] = 3LL;
  v21[4] = 0LL;
  v21[2] = v20;
  v21[3] = 2LL;
  core::option::Option<T>::map_or_else(v16, 0LL, a3 - 1, v21);
  v7 = v18;
  v8 = v6 - v18;
  if ( v6 < v18 )
    v8 = 0LL;
  v19[0] = 0LL;
  v19[1] = v8;
  v19[2] = v6 - 1;
  alacritty::display::damage::FrameDamage::damage_line(a1[4], a1[5], v19);
  alacritty::display::damage::FrameDamage::damage_line(a1[11], a1[12], v19);
  if ( ((a5 >= v8) & a4) == 0 )
  {
    v9 = (unsigned __int16 *)(a2 + 501);
    if ( (*(_BYTE *)(a2 + 500) & 1) == 0 )
      v9 = (unsigned __int16 *)(a2 + 624);
    v10 = (unsigned __int16 *)(a2 + 627);
    if ( (*(_BYTE *)(a2 + 496) & 1) != 0 )
      v10 = (unsigned __int16 *)(a2 + 497);
    alacritty::renderer::Renderer::draw_string(
      (_DWORD)a1 + 224,
      0,
      v8,
      *v10 | (*((unsigned __int8 *)v10 + 2) << 16),
      *v9 | (*((unsigned __int8 *)v9 + 2) << 16),
      v17,
      v17 + v7,
      (__int64)(a1 + 243),
      (__int64)(a1 + 191));
  }
  return core::ptr::drop_in_place<alloc::string::String>(v16);
}