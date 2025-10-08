void __fastcall __noreturn alacritty::display::Display::draw_search(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // rax
  unsigned __int16 *v5; // rcx
  int v6; // ecx
  unsigned __int16 *v7; // rax
  __int128 *v8; // [rsp+8h] [rbp-90h] BYREF
  __int64 v9; // [rsp+10h] [rbp-88h]
  _QWORD *v10; // [rsp+18h] [rbp-80h]
  __int128 v11; // [rsp+20h] [rbp-78h]
  __int64 v12; // [rsp+30h] [rbp-68h]
  _BYTE v13[8]; // [rsp+38h] [rbp-60h] BYREF
  __int64 v14; // [rsp+40h] [rbp-58h]
  __int64 v15; // [rsp+48h] [rbp-50h]
  _QWORD v16[2]; // [rsp+50h] [rbp-48h] BYREF
  _QWORD v17[3]; // [rsp+60h] [rbp-38h] BYREF
  __int16 v18; // [rsp+78h] [rbp-20h]

  v16[0] = a3;
  v16[1] = a4;
  v4 = *(_QWORD *)(a1 + 1952);
  if ( v4 <= 0xFFFF )
  {
    v17[0] = v16;
    v17[1] = <&T as core::fmt::Display>::fmt;
    v17[2] = 0LL;
    v18 = v4;
    v8 = &xmmword_E8B60;
    v9 = 1LL;
    *((_QWORD *)&v11 + 1) = &unk_1031D8;
    v12 = 1LL;
    v10 = v17;
    *(_QWORD *)&v11 = 2LL;
    core::option::Option<T>::map_or_else(v13, 0LL, a3, &v8);
    v5 = (unsigned __int16 *)(a2 + 505);
    if ( (*(_BYTE *)(a2 + 504) & 1) == 0 )
      v5 = (unsigned __int16 *)(a2 + 627);
    v6 = *v5 | (*((unsigned __int8 *)v5 + 2) << 16);
    v7 = (unsigned __int16 *)(a2 + 624);
    if ( (*(_BYTE *)(a2 + 508) & 1) != 0 )
      v7 = (unsigned __int16 *)(a2 + 509);
    alacritty::renderer::Renderer::draw_string(
      a1 + 224,
      *(_QWORD *)(a1 + 1944),
      0,
      v6,
      *v7 | (*((unsigned __int8 *)v7 + 2) << 16),
      v14,
      v14 + v15,
      a1 + 1944,
      a1 + 1528);
  }
  v8 = (__int128 *)&off_8827A0;
  v9 = 1LL;
  v10 = (_QWORD *)&byte_8;
  v11 = 0LL;
  core::panicking::panic_fmt(&v8, &off_8827B0);
}