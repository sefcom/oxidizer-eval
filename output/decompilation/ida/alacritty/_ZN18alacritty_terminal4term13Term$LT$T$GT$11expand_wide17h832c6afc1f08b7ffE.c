__int64 __fastcall alacritty_terminal::term::Term<T>::expand_wide(
        __int64 a1,
        unsigned __int64 a2,
        unsigned int a3,
        char a4)
{
  __int64 v7; // rax
  unsigned __int64 v8; // rsi
  __int16 v9; // ax
  unsigned __int64 v10; // r15
  unsigned int v11; // edx
  __int64 v12; // rax
  unsigned __int64 v13; // rsi

  v7 = <alacritty_terminal::grid::storage::Storage<T> as core::ops::index::Index<alacritty_terminal::index::Line>>::index(
         a1 + 40,
         a3,
         &off_877680);
  v8 = *(_QWORD *)(v7 + 16);
  if ( a2 >= v8 )
    core::panicking::panic_bounds_check(a2, v8, &off_877698);
  v9 = *(_WORD *)(*(_QWORD *)(v7 + 8) + 24 * a2 + 20);
  if ( a4 )
  {
    if ( (v9 & 0x400) != 0 )
    {
      return 1LL;
    }
    else if ( (v9 & 0x20) != 0 )
    {
      return core::cmp::Ord::min(a2 + 1, *(_QWORD *)(a1 + 184) - 1LL);
    }
  }
  else if ( (v9 & 0x60) != 0 )
  {
    a2 += (__int16)((unsigned int)(__int16)(v9 << 9) >> 15);
    v10 = alacritty_terminal::index::Point::sub(a2, a3, a1, 1LL);
    v12 = <alacritty_terminal::grid::storage::Storage<T> as core::ops::index::Index<alacritty_terminal::index::Line>>::index(
            a1 + 40,
            v11,
            &off_8776B0);
    v13 = *(_QWORD *)(v12 + 16);
    if ( v10 >= v13 )
      core::panicking::panic_bounds_check(v10, v13, &off_8776B0);
    if ( (*(_BYTE *)(*(_QWORD *)(v12 + 8) + 24 * v10 + 21) & 4) != 0 )
      return v10;
  }
  return a2;
}