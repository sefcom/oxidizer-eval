__int64 __fastcall alacritty_terminal::grid::Grid<T>::cursor_cell(__int64 a1)
{
  unsigned __int64 v1; // rbx
  _QWORD *v2; // r14
  unsigned __int64 v3; // rsi

  v1 = *(_QWORD *)(a1 + 48);
  v2 = (_QWORD *)<alacritty_terminal::grid::storage::Storage<T> as core::ops::index::Index<alacritty_terminal::index::Line>>::index(
                   a1,
                   *(unsigned int *)(a1 + 56),
                   &off_8772A8);
  v2[3] = core::cmp::Ord::max(v2[3], v1 + 1);
  v3 = v2[2];
  if ( v1 >= v3 )
    core::panicking::panic_bounds_check(v1, v3, &off_8772C0);
  return v2[1] + 24 * v1;
}