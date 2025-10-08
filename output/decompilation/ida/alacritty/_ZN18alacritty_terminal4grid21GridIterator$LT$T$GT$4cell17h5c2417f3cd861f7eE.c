__int64 __fastcall alacritty_terminal::grid::GridIterator<T>::cell(__int64 a1)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // rsi

  v1 = *(_QWORD *)(a1 + 8);
  v2 = <alacritty_terminal::grid::storage::Storage<T> as core::ops::index::Index<alacritty_terminal::index::Line>>::index(
         *(_QWORD *)a1,
         *(unsigned int *)(a1 + 16),
         &off_8773C8);
  v3 = *(_QWORD *)(v2 + 16);
  if ( v1 >= v3 )
    core::panicking::panic_bounds_check(v1, v3, &off_8773C8);
  return *(_QWORD *)(v2 + 8) + 24 * v1;
}