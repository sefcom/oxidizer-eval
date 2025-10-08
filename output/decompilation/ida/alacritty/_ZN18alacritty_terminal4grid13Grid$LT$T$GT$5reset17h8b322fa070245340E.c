__int64 __fastcall alacritty_terminal::grid::Grid<T>::reset(__int64 a1)
{
  unsigned __int64 v1; // rcx
  unsigned __int64 v2; // rax
  __int128 v3; // xmm0
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // r15
  int v9; // esi
  bool v10; // cf
  __int64 result; // rax
  __int64 v12; // rsi
  int v13; // ebp
  __int64 v14; // rax
  __int128 v15; // [rsp+8h] [rbp-50h] BYREF
  __int128 v16; // [rsp+18h] [rbp-40h]
  __int128 v17; // [rsp+28h] [rbp-30h]

  v1 = *(_QWORD *)(a1 + 152);
  if ( *(_QWORD *)(a1 + 40) < v1 )
    v1 = *(_QWORD *)(a1 + 40);
  v2 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(a1 + 40) = v1;
  if ( v2 > v1 + 1000 )
    alacritty_terminal::grid::storage::Storage<T>::truncate(a1);
  *(_QWORD *)(a1 + 160) = 0LL;
  <alacritty_terminal::grid::Cursor<T> as core::default::Default>::default(&v15);
  core::ptr::drop_in_place<alacritty_terminal::grid::Cursor<alacritty_terminal::term::cell::Cell>>(a1 + 96);
  v3 = v15;
  v4 = v16;
  *(_OWORD *)(a1 + 128) = v17;
  *(_OWORD *)(a1 + 112) = v4;
  *(_OWORD *)(a1 + 96) = v3;
  <alacritty_terminal::grid::Cursor<T> as core::default::Default>::default(&v15);
  core::ptr::drop_in_place<alacritty_terminal::grid::Cursor<alacritty_terminal::term::cell::Cell>>(a1 + 48);
  v5 = v15;
  v6 = v16;
  *(_OWORD *)(a1 + 80) = v17;
  *(_OWORD *)(a1 + 64) = v6;
  *(_OWORD *)(a1 + 48) = v5;
  *(_QWORD *)(a1 + 160) = 0LL;
  v7 = *(_QWORD *)(a1 + 40);
  v8 = *(_QWORD *)(a1 + 152);
  v9 = 0;
  v10 = v7 < v8;
  result = v7 - v8;
  if ( !v10 )
    v9 = result;
  v12 = (unsigned int)-v9;
  if ( (int)v12 < (int)v8 )
  {
    do
    {
      v13 = v12 + 1;
      v14 = <alacritty_terminal::grid::storage::Storage<T> as core::ops::index::Index<alacritty_terminal::index::Line>>::index(
              a1,
              v12,
              &off_877368);
      result = alacritty_terminal::grid::row::Row<T>::reset(v14, *(unsigned int *)(a1 + 76));
      v12 = (unsigned int)(v12 + 1);
    }
    while ( v13 < (int)v8 );
  }
  return result;
}