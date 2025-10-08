char __fastcall alacritty_terminal::vi_mode::is_wrap(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  __int64 v4; // rax
  unsigned __int64 v5; // rsi

  v4 = <alacritty_terminal::grid::storage::Storage<T> as core::ops::index::Index<alacritty_terminal::index::Line>>::index(
         a1 + 40,
         a3,
         &off_877CE8);
  v5 = *(_QWORD *)(v4 + 16);
  if ( a2 >= v5 )
    core::panicking::panic_bounds_check(a2, v5, &off_877CE8);
  return (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(v4 + 8) + 24 * a2 + 20) & 0x10) >> 4;
}