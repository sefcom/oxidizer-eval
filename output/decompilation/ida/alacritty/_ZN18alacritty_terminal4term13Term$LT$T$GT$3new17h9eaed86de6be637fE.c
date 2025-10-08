__int64 __fastcall alacritty_terminal::term::Term<T>::new(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v7; // r13
  int v8; // r12d
  __int64 v9; // rbp
  __int64 i; // rax
  __int128 v11; // xmm1
  __int128 v12; // xmm1
  __int128 v13; // xmm1
  __int64 result; // rax
  __int64 v15; // [rsp+0h] [rbp-618h]
  __int64 v16; // [rsp+8h] [rbp-610h]
  __int64 v18; // [rsp+18h] [rbp-600h]
  __int64 v19; // [rsp+20h] [rbp-5F8h] BYREF
  __int64 v20; // [rsp+28h] [rbp-5F0h]
  __int128 v21; // [rsp+30h] [rbp-5E8h]
  __int128 v22; // [rsp+40h] [rbp-5D8h]
  _QWORD src[22]; // [rsp+50h] [rbp-5C8h] BYREF
  _DWORD v24[45]; // [rsp+100h] [rbp-518h] BYREF
  _BYTE v25[1124]; // [rsp+1B4h] [rbp-464h] BYREF

  alacritty_terminal::grid::Grid<T>::new((__int64)src, a3, a4, *(_QWORD *)(a2 + 24));
  alacritty_terminal::grid::Grid<T>::new((__int64)v24, a3, a4, 0LL);
  core::iter::traits::iterator::Iterator::collect(&v19, src[18]);
  v15 = v19;
  v16 = v20;
  v7 = v21;
  v8 = src[19];
  alacritty_terminal::term::TermDamageState::new(&v19, a4, a3);
  v18 = v19;
  v9 = v20;
  for ( i = 7LL; ; i += 8LL )
  {
    LOBYTE(v24[i + 38]) = 0;
    LOBYTE(v24[i + 39]) = 0;
    LOBYTE(v24[i + 40]) = 0;
    LOBYTE(v24[i + 41]) = 0;
    LOBYTE(v24[i + 42]) = 0;
    if ( i == 271 )
      break;
    LOBYTE(v24[i + 43]) = 0;
    LOBYTE(v24[i + 44]) = 0;
    v25[4 * i] = 0;
  }
  *(_BYTE *)(a1 + 1762) = 0;
  *(_QWORD *)(a1 + 656) = 0LL;
  *(_DWORD *)(a1 + 664) = 0;
  *(_BYTE *)(a1 + 640) = 2;
  memcpy((void *)(a1 + 40), src, 0xB0uLL);
  memcpy((void *)(a1 + 216), v24, 0xB0uLL);
  *(_BYTE *)(a1 + 1763) = 0;
  *(_QWORD *)(a1 + 392) = v15;
  *(_QWORD *)(a1 + 400) = v16;
  *(_QWORD *)(a1 + 408) = v7;
  *(_DWORD *)(a1 + 1756) = 163969;
  *(_DWORD *)(a1 + 672) = 0;
  *(_DWORD *)(a1 + 676) = v8;
  memcpy((void *)(a1 + 680), v25, 0x434uLL);
  *(_BYTE *)(a1 + 1760) = 2;
  v11 = *(_OWORD *)(a5 + 16);
  *(_OWORD *)a1 = *(_OWORD *)a5;
  *(_OWORD *)(a1 + 16) = v11;
  *(_QWORD *)(a1 + 32) = *(_QWORD *)(a5 + 32);
  *(_QWORD *)(a1 + 576) = 0x8000000000000000LL;
  *(_QWORD *)(a1 + 416) = 0LL;
  *(_QWORD *)(a1 + 424) = 8LL;
  *(_OWORD *)(a1 + 432) = 0LL;
  *(_QWORD *)(a1 + 448) = 1LL;
  *(_OWORD *)(a1 + 456) = 0LL;
  *(_QWORD *)(a1 + 472) = 1LL;
  *(_QWORD *)(a1 + 480) = 0LL;
  *(_QWORD *)(a1 + 488) = v18;
  *(_QWORD *)(a1 + 496) = v9;
  v12 = v22;
  *(_OWORD *)(a1 + 504) = v21;
  *(_OWORD *)(a1 + 520) = v12;
  v13 = *(_OWORD *)(a2 + 16);
  *(_OWORD *)(a1 + 536) = *(_OWORD *)a2;
  *(_OWORD *)(a1 + 552) = v13;
  result = *(_QWORD *)(a2 + 32);
  *(_QWORD *)(a1 + 568) = result;
  return result;
}