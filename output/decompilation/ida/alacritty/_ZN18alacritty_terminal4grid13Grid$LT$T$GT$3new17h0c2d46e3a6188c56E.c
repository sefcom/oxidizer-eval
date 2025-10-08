__int64 __fastcall alacritty_terminal::grid::Grid<T>::new(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm1
  __int128 v10; // xmm2
  _OWORD v11[3]; // [rsp+8h] [rbp-80h] BYREF
  _OWORD v12[5]; // [rsp+38h] [rbp-50h] BYREF

  alacritty_terminal::grid::storage::Storage<T>::with_capacity(v11);
  <alacritty_terminal::grid::Cursor<T> as core::default::Default>::default(v12);
  result = <alacritty_terminal::grid::Cursor<T> as core::default::Default>::default(a1 + 48);
  v7 = v12[0];
  v8 = v12[1];
  *(_OWORD *)(a1 + 128) = v12[2];
  *(_OWORD *)(a1 + 112) = v8;
  *(_OWORD *)(a1 + 96) = v7;
  v9 = v11[1];
  v10 = v11[2];
  *(_OWORD *)a1 = v11[0];
  *(_OWORD *)(a1 + 16) = v9;
  *(_OWORD *)(a1 + 32) = v10;
  *(_QWORD *)(a1 + 144) = a3;
  *(_QWORD *)(a1 + 152) = a2;
  *(_QWORD *)(a1 + 160) = 0LL;
  *(_QWORD *)(a1 + 168) = a4;
  return result;
}