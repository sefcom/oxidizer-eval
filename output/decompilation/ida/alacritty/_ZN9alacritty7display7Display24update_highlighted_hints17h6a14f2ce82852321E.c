__int64 __fastcall alacritty::display::Display::update_highlighted_hints(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6)
{
  _OWORD *v6; // rbp
  int v8; // r15d
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int64 v13; // r12
  int v14; // edx
  int v15; // r14d
  char v16; // r13
  char v17; // cl
  unsigned __int8 v18; // al
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  char v21; // r14
  bool v23; // r15
  char v24; // r15
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int128 v27; // [rsp+10h] [rbp-B8h] BYREF
  __int128 v28; // [rsp+20h] [rbp-A8h]
  __int128 v29; // [rsp+30h] [rbp-98h]
  __int64 v30; // [rsp+40h] [rbp-88h]
  int v31; // [rsp+4Ch] [rbp-7Ch]
  __int128 v32; // [rsp+50h] [rbp-78h] BYREF
  __int128 v33; // [rsp+60h] [rbp-68h]
  __int128 v34; // [rsp+70h] [rbp-58h]
  __int64 v35; // [rsp+80h] [rbp-48h]
  __int64 v36; // [rsp+88h] [rbp-40h]
  __int64 v37; // [rsp+90h] [rbp-38h]

  v31 = a6;
  v8 = *(_DWORD *)(a2 + 1756);
  v37 = a4;
  v36 = a3;
  if ( (v8 & 0x10000) == 0 )
  {
    LOBYTE(v35) = 2;
LABEL_4:
    LOBYTE(v6) = *(_BYTE *)(a1 + 1936) == 2;
    goto LABEL_5;
  }
  alacritty::display::hint::highlighted_at((__int64)&v32, a2, a3, a4, *(_QWORD *)(a2 + 656), *(_DWORD *)(a2 + 664), 36);
  if ( (_BYTE)v35 == 2 )
    goto LABEL_4;
  v6 = (_OWORD *)(a1 + 1888);
  if ( *(_BYTE *)(a1 + 1936) == 2 )
  {
    v30 = v35;
    v29 = v34;
    v28 = v33;
    v27 = v32;
    core::ptr::drop_in_place<core::option::Option<alacritty::display::hint::HintMatch>>(a1 + 1888);
    *(_QWORD *)(a1 + 1936) = v35;
    v11 = v32;
    v12 = v33;
    *(_OWORD *)(a1 + 1920) = v34;
    *(_OWORD *)(a1 + 1904) = v12;
    *v6 = v11;
    *(_QWORD *)(a1 + 1992) = 0LL;
    LOBYTE(v6) = 1;
LABEL_10:
    *(_BYTE *)(a1 + 72) = 1;
    if ( *(_BYTE *)(a1 + 1044) != 1 )
      goto LABEL_19;
    goto LABEL_11;
  }
  LODWORD(v6) = <alacritty::display::hint::HintMatch as core::cmp::PartialEq>::eq(&v32, a1 + 1888);
LABEL_5:
  v30 = v35;
  v29 = v34;
  v28 = v33;
  v27 = v32;
  core::ptr::drop_in_place<core::option::Option<alacritty::display::hint::HintMatch>>(a1 + 1888);
  LOBYTE(v6) = (unsigned __int8)v6 ^ 1;
  *(_QWORD *)(a1 + 1936) = v35;
  v9 = v32;
  v10 = v33;
  *(_OWORD *)(a1 + 1920) = v34;
  *(_OWORD *)(a1 + 1904) = v10;
  *(_OWORD *)(a1 + 1888) = v9;
  *(_QWORD *)(a1 + 1992) = 0LL;
  if ( (_BYTE)v6 )
    goto LABEL_10;
  if ( *(_BYTE *)(a1 + 1044) != 1 )
    goto LABEL_19;
LABEL_11:
  if ( !*(_BYTE *)(a5 + 58)
    || *(_BYTE *)(a2 + 640) != 2 && !(unsigned __int8)alacritty_terminal::selection::Selection::is_empty(a2 + 600) )
  {
LABEL_19:
    v30 = *(_QWORD *)(a1 + 1880);
    v19 = *(_OWORD *)(a1 + 1832);
    v20 = *(_OWORD *)(a1 + 1848);
    v29 = *(_OWORD *)(a1 + 1864);
    v28 = v20;
    v27 = v19;
    *(_BYTE *)(a1 + 1880) = 2;
    v21 = v30;
    core::ptr::drop_in_place<core::option::Option<alacritty::display::hint::HintMatch>>(&v27);
    if ( v21 != 2 )
    {
      *(_BYTE *)(a1 + 72) = 1;
      LOBYTE(v6) = 1;
    }
    return (unsigned int)v6;
  }
  v13 = alacritty::event::Mouse::point(*(_QWORD *)(a5 + 32), *(_QWORD *)(a5 + 40), a1 + 1944, *(_QWORD *)(a2 + 200));
  v15 = v14;
  alacritty::display::hint::highlighted_at((__int64)&v27, a2, v36, v37, v13, v14, v31);
  v16 = v30;
  if ( (_BYTE)v30 != 2 )
  {
    LOBYTE(v6) = *(_BYTE *)(a1 + 200) & (*(_DWORD *)(a1 + 216) != v15);
    *(_QWORD *)(a1 + 200) = 1LL;
    *(_QWORD *)(a1 + 208) = v13;
    *(_DWORD *)(a1 + 216) = v15;
    if ( *(_BYTE *)(a1 + 1045) != 3 )
    {
      *(_BYTE *)(a1 + 1045) = 3;
      winit::window::Window::set_cursor(*(_QWORD *)(a1 + 832), *(_QWORD *)(a1 + 840), 3LL);
    }
    goto LABEL_27;
  }
  if ( *(_BYTE *)(a1 + 1880) != 2 )
  {
    *(_QWORD *)(a1 + 200) = 0LL;
    v17 = *(_BYTE *)(a1 + 1045);
    if ( (v8 & 0x10000) == 0 && (v8 & 0x2048) != 0 )
    {
      if ( v17 )
      {
        v18 = 0;
LABEL_26:
        *(_BYTE *)(a1 + 1045) = v18;
        winit::window::Window::set_cursor(*(_QWORD *)(a1 + 832), *(_QWORD *)(a1 + 840), v18);
      }
    }
    else
    {
      v18 = 8;
      if ( v17 != 8 )
        goto LABEL_26;
    }
  }
LABEL_27:
  v23 = *(_BYTE *)(a1 + 1880) == 2;
  if ( v16 == 2 || v23 )
    v24 = v16 == 2 && v23;
  else
    v24 = <alacritty::display::hint::HintMatch as core::cmp::PartialEq>::eq(a1 + 1832, &v27);
  core::ptr::drop_in_place<core::option::Option<alacritty::display::hint::HintMatch>>(a1 + 1832);
  *(_QWORD *)(a1 + 1880) = v30;
  v25 = v27;
  v26 = v28;
  *(_OWORD *)(a1 + 1864) = v29;
  *(_OWORD *)(a1 + 1848) = v26;
  *(_OWORD *)(a1 + 1832) = v25;
  *(_QWORD *)(a1 + 1984) = 0LL;
  if ( !v24 )
    *(_BYTE *)(a1 + 72) = 1;
  LOBYTE(v6) = v24 ^ 1 | (unsigned __int8)v6;
  return (unsigned int)v6;
}