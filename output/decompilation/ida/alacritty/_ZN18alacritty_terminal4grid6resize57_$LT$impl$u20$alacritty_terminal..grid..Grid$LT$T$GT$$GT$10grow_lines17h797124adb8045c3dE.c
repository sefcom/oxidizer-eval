__int64 __fastcall alacritty_terminal::grid::resize::<impl alacritty_terminal::grid::Grid<T>>::grow_lines(
        __int64 a1,
        unsigned __int64 a2)
{
  unsigned __int64 v2; // rbx
  unsigned __int64 v3; // r12
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  unsigned __int64 v6; // rax
  bool v7; // cf
  unsigned __int64 v8; // rax
  __int64 v9; // rax
  int v10; // r12d
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rax

  v2 = a2 - *(_QWORD *)(a1 + 152);
  v3 = a2 - *(_QWORD *)(a1 + 32);
  v4 = 0LL;
  v5 = <alacritty_terminal::grid::storage::Storage<T> as core::ops::index::Index<alacritty_terminal::index::Line>>::index(
         a1,
         0LL,
         &off_877440);
  alacritty_terminal::grid::storage::Storage<T>::initialize(a1, v3, *(_QWORD *)(v5 + 16));
  *(_QWORD *)(a1 + 32) = a2;
  *(_QWORD *)(a1 + 152) = a2;
  v6 = *(_QWORD *)(a1 + 40);
  v7 = v6 < a2;
  v8 = v6 - a2;
  if ( !v7 )
    v4 = v8;
  v9 = core::cmp::Ord::min(v4, v2);
  v10 = v9;
  if ( v2 != v9 )
    alacritty_terminal::grid::Grid<T>::scroll_up(a1, 0, a2, v2 - v9);
  *(_DWORD *)(a1 + 104) += v10;
  *(_DWORD *)(a1 + 56) += v10;
  v11 = *(_QWORD *)(a1 + 160);
  v12 = 0LL;
  v7 = v11 < v2;
  v13 = v11 - v2;
  if ( !v7 )
    v12 = v13;
  *(_QWORD *)(a1 + 160) = v12;
  return alacritty_terminal::grid::Grid<T>::decrease_scroll_limit((_QWORD *)a1, v2);
}