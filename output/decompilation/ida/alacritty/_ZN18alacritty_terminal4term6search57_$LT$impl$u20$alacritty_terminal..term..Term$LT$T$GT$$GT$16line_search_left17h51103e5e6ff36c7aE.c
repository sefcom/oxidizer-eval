__int64 __fastcall alacritty_terminal::term::search::<impl alacritty_terminal::term::Term<T>>::line_search_left(
        _QWORD *a1,
        int a2)
{
  unsigned __int64 v3; // rax
  int v4; // r13d
  bool v5; // cf
  unsigned __int64 v6; // rax
  int v7; // r13d
  unsigned __int64 v8; // r14
  unsigned int v9; // r12d
  __int64 v10; // rax
  unsigned __int64 v11; // rsi

  v3 = a1[10];
  v4 = 0;
  v5 = v3 < a1[24];
  v6 = v3 - a1[24];
  if ( !v5 )
    v4 = v6;
  v7 = -v4;
  v8 = a1[23] - 1LL;
  do
  {
    v9 = a2;
    if ( a2 <= v7 )
      break;
    --a2;
    v10 = <alacritty_terminal::grid::storage::Storage<T> as core::ops::index::Index<alacritty_terminal::index::Line>>::index(
            a1 + 5,
            v9 - 1,
            &off_877A60);
    v11 = *(_QWORD *)(v10 + 16);
    if ( v8 >= v11 )
      core::panicking::panic_bounds_check(v8, v11, &off_877A78);
  }
  while ( (*(_BYTE *)(*(_QWORD *)(v10 + 8) + 24 * v8 + 20) & 0x10) != 0 );
  return v9;
}