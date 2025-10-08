void __fastcall alacritty::display::Display::draw_render_timer(_QWORD *a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // r14
  bool v4; // cf
  unsigned __int64 v5; // r14
  int v6; // ebp
  int v7; // r15d
  int v8; // r13d
  unsigned __int64 v9; // r12
  int v10; // [rsp+Ch] [rbp-ACh]
  __int64 v11; // [rsp+10h] [rbp-A8h] BYREF
  _BYTE v12[8]; // [rsp+18h] [rbp-A0h] BYREF
  __int64 v13; // [rsp+20h] [rbp-98h]
  unsigned __int64 v14; // [rsp+28h] [rbp-90h]
  unsigned __int64 v15[3]; // [rsp+30h] [rbp-88h] BYREF
  _QWORD v16[2]; // [rsp+48h] [rbp-70h] BYREF
  _QWORD v17[12]; // [rsp+58h] [rbp-60h] BYREF

  if ( *(_BYTE *)(a2 + 10) == 1 )
  {
    v11 = a1[260];
    v16[0] = &v11;
    v16[1] = core::fmt::float::<impl core::fmt::Display for f64>::fmt;
    v17[0] = &unk_8827C8;
    v17[1] = 2LL;
    v17[4] = &unk_103210;
    v17[5] = 1LL;
    v17[2] = v16;
    v17[3] = 1LL;
    core::option::Option<T>::map_or_else(v12, 0LL, a3, v17);
    v3 = a1[243];
    v4 = v3 < 2;
    v5 = v3 - 2;
    if ( v4 )
      v5 = 0LL;
    v10 = *(unsigned __int16 *)(a2 + 627);
    v6 = *(unsigned __int8 *)(a2 + 629);
    v7 = *(unsigned __int16 *)(a2 + 571);
    v8 = *(unsigned __int8 *)(a2 + 573);
    v9 = v14;
    v15[0] = v5;
    v15[1] = 0LL;
    v15[2] = v14;
    alacritty::display::damage::FrameDamage::damage_line(a1[4], a1[5], v15);
    alacritty::display::damage::FrameDamage::damage_line(a1[11], a1[12], v15);
    alacritty::renderer::Renderer::draw_string(
      (_DWORD)a1 + 224,
      v5,
      0,
      (v6 << 16) | v10,
      (v8 << 16) | v7,
      v13,
      v13 + v9,
      (__int64)(a1 + 243),
      (__int64)(a1 + 191));
  }
}