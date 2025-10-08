__int64 __fastcall alacritty_terminal::grid::resize::<impl alacritty_terminal::grid::Grid<T>>::shrink_lines(
        __int64 a1,
        unsigned __int64 a2)
{
  unsigned __int64 v3; // rcx
  bool v4; // cc
  __int64 v5; // rcx
  unsigned int v6; // ebp
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rsi
  __int64 result; // rax

  v3 = *(int *)(a1 + 56) + 1LL;
  v4 = v3 <= a2;
  v5 = v3 - a2;
  if ( v4 )
  {
    v6 = a2 - 1;
  }
  else
  {
    alacritty_terminal::grid::Grid<T>::scroll_up(a1, 0, *(_DWORD *)(a1 + 152), v5);
    v6 = a2 - 1;
    *(_DWORD *)(a1 + 56) = core::cmp::Ord::min(*(unsigned int *)(a1 + 56), (unsigned int)(a2 - 1));
  }
  *(_DWORD *)(a1 + 104) = core::cmp::Ord::min(*(unsigned int *)(a1 + 104), v6);
  v7 = *(_QWORD *)(a1 + 16);
  if ( !v7 )
    core::panicking::panic_const::panic_const_rem_by_zero(&off_877380);
  v8 = *(_QWORD *)(a1 + 24) + v7 + *(_QWORD *)(a1 + 152) - a2;
  if ( (v7 | v8) >> 32 )
    v9 = (*(_QWORD *)(a1 + 24) + v7 + *(_QWORD *)(a1 + 152) - a2) % v7;
  else
    v9 = (unsigned int)v8 % (unsigned int)v7;
  *(_QWORD *)(a1 + 24) = v9;
  v10 = a2 - *(_QWORD *)(a1 + 32) + *(_QWORD *)(a1 + 40);
  *(_QWORD *)(a1 + 40) = v10;
  result = v10 + 1000;
  if ( v7 > v10 + 1000 )
    result = alacritty_terminal::grid::storage::Storage<T>::truncate(a1);
  *(_QWORD *)(a1 + 32) = a2;
  *(_QWORD *)(a1 + 152) = a2;
  return result;
}