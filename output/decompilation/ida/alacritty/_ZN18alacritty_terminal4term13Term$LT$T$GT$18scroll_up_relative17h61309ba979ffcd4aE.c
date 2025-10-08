char __fastcall alacritty_terminal::term::Term<T>::scroll_up_relative(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v3; // r15
  unsigned int v4; // ebp
  __int64 v6; // rax
  int v7; // r14d
  __int64 v8; // r15
  __int128 *v9; // r12
  char v10; // al
  __int128 v11; // xmm0
  __int64 v12; // rcx
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  int v15; // eax
  __int64 v16; // rsi
  int v17; // edi
  unsigned int v19; // [rsp+14h] [rbp-F4h] BYREF
  __int64 v20; // [rsp+18h] [rbp-F0h] BYREF
  __int128 v21; // [rsp+20h] [rbp-E8h] BYREF
  __int128 v22; // [rsp+30h] [rbp-D8h]
  __int64 v23; // [rsp+40h] [rbp-C8h]
  char v24; // [rsp+48h] [rbp-C0h]
  int v25; // [rsp+49h] [rbp-BFh]
  __int16 v26; // [rsp+4Dh] [rbp-BBh]
  char v27; // [rsp+4Fh] [rbp-B9h]
  __int64 v28; // [rsp+50h] [rbp-B8h]
  _QWORD v29[4]; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD v30[5]; // [rsp+78h] [rbp-90h] BYREF
  _OWORD v31[2]; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v32; // [rsp+C0h] [rbp-48h]
  char v33; // [rsp+C8h] [rbp-40h]
  _QWORD v34[7]; // [rsp+C9h] [rbp-3Fh]

  v3 = a3;
  v4 = a2;
  v19 = a2;
  v20 = a3;
  if ( (unsigned __int64)core::sync::atomic::atomic_load(&log::MAX_LOG_LEVEL_FILTER, 0LL) >= 5 )
  {
    v29[0] = &v19;
    v29[1] = <alacritty_terminal::index::Line as core::fmt::Display>::fmt;
    v29[2] = &v20;
    v29[3] = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
    *(_QWORD *)&v21 = &off_877870;
    *((_QWORD *)&v21 + 1) = 2LL;
    v23 = 0LL;
    *(_QWORD *)&v22 = v29;
    *((_QWORD *)&v22 + 1) = 2LL;
    v6 = log::__private_api::loc(&off_877890);
    v30[0] = aAlacrittyTermi_2;
    v30[1] = 24LL;
    v30[2] = aAlacrittyTermi_2;
    v30[3] = 24LL;
    v30[4] = v6;
    log::__private_api::log(&v21, 5LL, v30);
    v3 = v20;
    v4 = v19;
  }
  v7 = *(_DWORD *)(a1 + 676);
  v8 = core::cmp::Ord::min(v3, v7 - *(_DWORD *)(a1 + 672));
  v20 = v8;
  v9 = (__int128 *)(a1 + 600);
  v10 = *(_BYTE *)(a1 + 640);
  *(_BYTE *)(a1 + 640) = 2;
  if ( v10 == 2 )
  {
    v24 = 2;
  }
  else
  {
    v32 = *(_QWORD *)(a1 + 632);
    v11 = *v9;
    v31[1] = *(_OWORD *)(a1 + 616);
    v31[0] = v11;
    v33 = v10;
    v12 = *(_QWORD *)(a1 + 648);
    v34[0] = *(_QWORD *)(a1 + 641);
    *(_QWORD *)((char *)v34 + 7) = v12;
    alacritty_terminal::selection::Selection::rotate(
      (unsigned int)&v21,
      (unsigned int)v31,
      *(_QWORD *)(a1 + 184),
      *(_QWORD *)(a1 + 192),
      v4,
      v7,
      v8);
  }
  *(_QWORD *)(a1 + 648) = v28;
  v13 = v21;
  v14 = v22;
  *(_QWORD *)(a1 + 632) = v23;
  *(_BYTE *)(a1 + 640) = v24;
  *(_DWORD *)(a1 + 641) = v25;
  *(_WORD *)(a1 + 645) = v26;
  *(_BYTE *)(a1 + 647) = v27;
  *(_OWORD *)(a1 + 616) = v14;
  *v9 = v13;
  LOBYTE(v15) = alacritty_terminal::grid::Grid<T>::scroll_up(a1 + 40, v4, v7, v8);
  v16 = (unsigned int)-*(_DWORD *)(a1 + 200);
  if ( v4 )
    v16 = v4;
  v17 = *(_DWORD *)(a1 + 664);
  if ( v7 > v17 && (int)v16 <= v17 )
  {
    v15 = core::cmp::Ord::max((unsigned int)(v17 - v20), v16);
    *(_DWORD *)(a1 + 664) = v15;
  }
  *(_BYTE *)(a1 + 528) = 1;
  return v15;
}