__int64 __fastcall alacritty_terminal::term::Term<T>::scroll_down_relative(__int64 a1, int a2, __int64 a3)
{
  __int64 v3; // r15
  int v4; // ebp
  __int64 v6; // rax
  int v7; // r14d
  __int64 v8; // rax
  __int64 v9; // r15
  __int128 *v10; // r12
  char v11; // al
  __int128 v12; // xmm0
  __int64 v13; // rcx
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  int v16; // edi
  __int64 result; // rax
  int v18; // [rsp+14h] [rbp-F4h] BYREF
  __int64 v19; // [rsp+18h] [rbp-F0h] BYREF
  __int128 v20; // [rsp+20h] [rbp-E8h] BYREF
  __int128 v21; // [rsp+30h] [rbp-D8h]
  __int64 v22; // [rsp+40h] [rbp-C8h]
  char v23; // [rsp+48h] [rbp-C0h]
  int v24; // [rsp+49h] [rbp-BFh]
  __int16 v25; // [rsp+4Dh] [rbp-BBh]
  char v26; // [rsp+4Fh] [rbp-B9h]
  __int64 v27; // [rsp+50h] [rbp-B8h]
  _QWORD v28[4]; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD v29[5]; // [rsp+78h] [rbp-90h] BYREF
  _OWORD v30[2]; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v31; // [rsp+C0h] [rbp-48h]
  char v32; // [rsp+C8h] [rbp-40h]
  _QWORD v33[7]; // [rsp+C9h] [rbp-3Fh]

  v3 = a3;
  v4 = a2;
  v18 = a2;
  v19 = a3;
  if ( (unsigned __int64)core::sync::atomic::atomic_load(&log::MAX_LOG_LEVEL_FILTER, 0LL) >= 5 )
  {
    v28[0] = &v18;
    v28[1] = <alacritty_terminal::index::Line as core::fmt::Display>::fmt;
    v28[2] = &v19;
    v28[3] = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
    *(_QWORD *)&v20 = &off_8778A8;
    *((_QWORD *)&v20 + 1) = 2LL;
    v22 = 0LL;
    *(_QWORD *)&v21 = v28;
    *((_QWORD *)&v21 + 1) = 2LL;
    v6 = log::__private_api::loc(&off_8778C8);
    v29[0] = aAlacrittyTermi_2;
    v29[1] = 24LL;
    v29[2] = aAlacrittyTermi_2;
    v29[3] = 24LL;
    v29[4] = v6;
    log::__private_api::log(&v20, 5LL, v29);
    v3 = v19;
    v4 = v18;
  }
  v7 = *(_DWORD *)(a1 + 676);
  v8 = core::cmp::Ord::min(v3, v7 - *(_DWORD *)(a1 + 672));
  v9 = core::cmp::Ord::min(v8, v7 - v4);
  v19 = v9;
  v10 = (__int128 *)(a1 + 600);
  v11 = *(_BYTE *)(a1 + 640);
  *(_BYTE *)(a1 + 640) = 2;
  if ( v11 == 2 )
  {
    v23 = 2;
  }
  else
  {
    v31 = *(_QWORD *)(a1 + 632);
    v12 = *v10;
    v30[1] = *(_OWORD *)(a1 + 616);
    v30[0] = v12;
    v32 = v11;
    v13 = *(_QWORD *)(a1 + 648);
    v33[0] = *(_QWORD *)(a1 + 641);
    *(_QWORD *)((char *)v33 + 7) = v13;
    alacritty_terminal::selection::Selection::rotate(
      (unsigned int)&v20,
      (unsigned int)v30,
      *(_QWORD *)(a1 + 184),
      *(_QWORD *)(a1 + 192),
      v4,
      v7,
      -(int)v9);
  }
  *(_QWORD *)(a1 + 648) = v27;
  v14 = v20;
  v15 = v21;
  *(_QWORD *)(a1 + 632) = v22;
  *(_BYTE *)(a1 + 640) = v23;
  *(_DWORD *)(a1 + 641) = v24;
  *(_WORD *)(a1 + 645) = v25;
  *(_BYTE *)(a1 + 647) = v26;
  *(_OWORD *)(a1 + 616) = v15;
  *v10 = v14;
  v16 = *(_DWORD *)(a1 + 664);
  if ( v7 > v16 && v4 <= v16 )
    *(_DWORD *)(a1 + 664) = core::cmp::Ord::min((unsigned int)(v9 + v16), (unsigned int)(v7 - 1));
  result = alacritty_terminal::grid::Grid<T>::scroll_down(a1 + 40, v4, v7, v9);
  *(_BYTE *)(a1 + 528) = 1;
  return result;
}