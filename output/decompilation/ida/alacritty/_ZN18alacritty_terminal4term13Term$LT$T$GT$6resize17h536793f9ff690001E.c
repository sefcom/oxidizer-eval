unsigned __int64 __fastcall alacritty_terminal::term::Term<T>::resize(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3)
{
  unsigned __int64 v3; // r13
  unsigned __int64 v4; // rbp
  unsigned __int64 v5; // r14
  unsigned __int64 v6; // r15
  unsigned __int64 v7; // r14
  unsigned __int64 result; // rax
  __int64 v9; // rax
  unsigned __int64 v10; // rax
  unsigned int v11; // r12d
  bool v12; // cf
  unsigned int v13; // eax
  unsigned int v14; // eax
  unsigned int v15; // eax
  int v16; // r12d
  unsigned int v17; // r14d
  unsigned __int64 v18; // rsi
  unsigned __int64 v19; // r13
  char v20; // al
  __int128 v21; // xmm0
  __int64 v22; // rcx
  int v23; // eax
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int64 v26; // r14
  int v27; // r15d
  int v28; // ebp
  unsigned int v29; // eax
  unsigned __int64 v30; // [rsp+10h] [rbp-108h] BYREF
  unsigned __int64 v31; // [rsp+18h] [rbp-100h] BYREF
  __int128 v32; // [rsp+20h] [rbp-F8h] BYREF
  __m256i v33; // [rsp+30h] [rbp-E8h]
  __int64 v34; // [rsp+50h] [rbp-C8h]
  const char *v35; // [rsp+58h] [rbp-C0h] BYREF
  __int64 v36; // [rsp+60h] [rbp-B8h]
  const char *v37; // [rsp+68h] [rbp-B0h]
  __int64 v38; // [rsp+70h] [rbp-A8h]
  __int64 v39; // [rsp+78h] [rbp-A0h]
  __int64 v40; // [rsp+80h] [rbp-98h]
  unsigned __int64 v41; // [rsp+88h] [rbp-90h]
  _QWORD v42[4]; // [rsp+90h] [rbp-88h] BYREF
  _OWORD v43[2]; // [rsp+B0h] [rbp-68h] BYREF
  __int64 v44; // [rsp+D0h] [rbp-48h]
  char v45; // [rsp+D8h] [rbp-40h]
  _QWORD v46[7]; // [rsp+D9h] [rbp-3Fh]

  v3 = a3;
  v4 = a2;
  v5 = *(_QWORD *)(a1 + 184);
  v6 = *(_QWORD *)(a1 + 192);
  v30 = a3;
  v31 = a2;
  v41 = v5;
  v7 = a3 ^ v5;
  result = core::sync::atomic::atomic_load(&log::MAX_LOG_LEVEL_FILTER, 0LL);
  if ( v7 | a2 ^ v6 )
  {
    v40 = a1 + 40;
    if ( result > 3 )
    {
      v42[0] = &v30;
      v42[1] = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
      v42[2] = &v31;
      v42[3] = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
      *(_QWORD *)&v32 = &off_8778F0;
      *((_QWORD *)&v32 + 1) = 2LL;
      v33.m256i_i64[0] = (__int64)v42;
      *(_OWORD *)&v33.m256i_u64[1] = 2uLL;
      v9 = log::__private_api::loc(&off_877910);
      v35 = aAlacrittyTermi_2;
      v36 = 24LL;
      v37 = aAlacrittyTermi_2;
      v38 = 24LL;
      v39 = v9;
      log::__private_api::log(&v32, 4LL, &v35);
      v4 = v31;
      v3 = v30;
    }
    v10 = *(_QWORD *)(a1 + 80);
    v11 = 0;
    v12 = v10 < v6;
    v13 = v10 - v6;
    if ( !v12 )
      v11 = v13;
    v14 = core::cmp::Ord::min(0LL, (unsigned int)(v4 + ~*(_DWORD *)(a1 + 96)));
    v15 = core::cmp::Ord::max((unsigned int)(v4 - v6), v14);
    v16 = core::cmp::Ord::min(v15, v11);
    *(_DWORD *)(a1 + 664) += v16;
    v17 = (*(_DWORD *)(a1 + 1756) & 0x1000u) >> 12;
    alacritty_terminal::grid::resize::<impl alacritty_terminal::grid::Grid<T>>::resize(
      v40,
      (*(_DWORD *)(a1 + 1756) & 0x1000) == 0,
      v4,
      v3);
    alacritty_terminal::grid::resize::<impl alacritty_terminal::grid::Grid<T>>::resize(a1 + 216, v17, v31, v30);
    v18 = v30;
    v19 = v41;
    if ( v41 == v30 )
    {
      v20 = *(_BYTE *)(a1 + 640);
      *(_BYTE *)(a1 + 640) = 2;
      if ( v20 != 2 )
      {
        v44 = *(_QWORD *)(a1 + 632);
        v21 = *(_OWORD *)(a1 + 600);
        v43[1] = *(_OWORD *)(a1 + 616);
        v43[0] = v21;
        v45 = v20;
        v22 = *(_QWORD *)(a1 + 648);
        v46[0] = *(_QWORD *)(a1 + 641);
        *(_QWORD *)((char *)v46 + 7) = v22;
        v23 = core::cmp::Ord::max(v31, v6);
        alacritty_terminal::selection::Selection::rotate(
          (unsigned int)&v32,
          (unsigned int)v43,
          *(_QWORD *)(a1 + 184),
          *(_QWORD *)(a1 + 192),
          0,
          v23,
          -v16);
        *(_QWORD *)(a1 + 648) = v34;
        v24 = v32;
        v25 = *(_OWORD *)v33.m256i_i8;
        *(_OWORD *)(a1 + 632) = *(_OWORD *)&v33.m256i_u64[2];
        *(_OWORD *)(a1 + 616) = v25;
        *(_OWORD *)(a1 + 600) = v24;
      }
    }
    else
    {
      *(_BYTE *)(a1 + 640) = 2;
      *(_QWORD *)&v32 = *(_QWORD *)(a1 + 408);
      alloc::vec::Vec<T,A>::resize_with(a1 + 392, v18, &v32);
      v19 = v30;
    }
    v26 = *(_QWORD *)(a1 + 656);
    v27 = *(_DWORD *)(a1 + 192);
    v28 = *(_DWORD *)(a1 + 200);
    v29 = core::cmp::Ord::min(*(unsigned int *)(a1 + 664), (unsigned int)(v27 + ~v28));
    *(_DWORD *)(a1 + 664) = core::cmp::Ord::max(v29, (unsigned int)-v28);
    *(_QWORD *)(a1 + 656) = core::cmp::Ord::min(v26, *(_QWORD *)(a1 + 184) - 1LL);
    *(_DWORD *)(a1 + 672) = 0;
    *(_DWORD *)(a1 + 676) = v27;
    return alacritty_terminal::term::TermDamageState::resize(a1 + 488, v19, v31);
  }
  else if ( result > 3 )
  {
    *(_QWORD *)&v32 = &off_8778E0;
    *((_QWORD *)&v32 + 1) = 1LL;
    v33.m256i_i64[0] = 8LL;
    *(_OWORD *)&v33.m256i_u64[1] = 0LL;
    v35 = aAlacrittyTermi_2;
    v36 = 24LL;
    v37 = aAlacrittyTermi_2;
    v38 = 24LL;
    v39 = log::__private_api::loc(&off_877940);
    return log::__private_api::log(&v32, 4LL, &v35);
  }
  return result;
}