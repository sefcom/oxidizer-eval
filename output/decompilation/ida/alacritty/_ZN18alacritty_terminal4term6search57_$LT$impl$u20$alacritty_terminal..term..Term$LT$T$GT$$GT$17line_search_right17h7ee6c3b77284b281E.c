unsigned __int64 __fastcall alacritty_terminal::term::search::<impl alacritty_terminal::term::Term<T>>::line_search_right(
        __int64 a1,
        int a2)
{
  int v3; // r13d
  unsigned __int64 v4; // rbx
  unsigned int v5; // r12d
  __int64 v6; // rax
  unsigned __int64 v7; // rsi

  v3 = *(_DWORD *)(a1 + 192);
  v4 = *(_QWORD *)(a1 + 184) - 1LL;
  do
  {
    v5 = a2++;
    if ( a2 >= v3 )
      break;
    v6 = <alacritty_terminal::grid::storage::Storage<T> as core::ops::index::Index<alacritty_terminal::index::Line>>::index(
           a1 + 40,
           v5,
           &off_877A90);
    v7 = *(_QWORD *)(v6 + 16);
    if ( v4 >= v7 )
      core::panicking::panic_bounds_check(v4, v7, &off_877AA8);
  }
  while ( (*(_BYTE *)(*(_QWORD *)(v6 + 8) + 24 * v4 + 20) & 0x10) != 0 );
  return v4;
}