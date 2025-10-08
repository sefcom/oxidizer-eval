__int64 __fastcall alacritty_terminal::grid::storage::Storage<T>::swap(__int64 a1, int a2, int a3)
{
  __int64 v3; // rax
  __int64 v4; // rsi
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // r10
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 result; // rax
  __int64 v12; // rcx
  __int128 v13; // xmm0
  __int128 v14; // xmm0

  v3 = *(_DWORD *)(a1 + 32) - a2;
  v4 = *(_QWORD *)(a1 + 24);
  v5 = v4 + v3 - 1;
  v6 = *(_QWORD *)(a1 + 16);
  v7 = v6;
  if ( v5 < v6 )
    v7 = 0LL;
  v8 = v5 - v7;
  v9 = v4 + *(_DWORD *)(a1 + 32) - a3 - 1;
  if ( v9 < v6 )
    v6 = 0LL;
  v10 = *(_QWORD *)(a1 + 8);
  result = 32 * v8;
  v12 = 32 * (v9 - v6);
  v13 = *(_OWORD *)(v10 + result);
  *(_OWORD *)(v10 + result) = *(_OWORD *)(v10 + v12);
  *(_OWORD *)(v10 + v12) = v13;
  v14 = *(_OWORD *)(v10 + result + 16);
  *(_OWORD *)(v10 + result + 16) = *(_OWORD *)(v10 + v12 + 16);
  *(_OWORD *)(v10 + v12 + 16) = v14;
  return result;
}