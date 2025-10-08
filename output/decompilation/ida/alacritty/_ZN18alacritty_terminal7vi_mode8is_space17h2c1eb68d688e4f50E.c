__int64 __fastcall alacritty_terminal::vi_mode::is_space(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  __int64 v4; // rax
  unsigned __int64 v5; // rsi
  __int64 v6; // rax
  __int64 result; // rax

  v4 = <alacritty_terminal::grid::storage::Storage<T> as core::ops::index::Index<alacritty_terminal::index::Line>>::index(
         a1 + 40,
         a3,
         &off_877D00);
  v5 = *(_QWORD *)(v4 + 16);
  if ( a2 >= v5 )
    core::panicking::panic_bounds_check(a2, v5, &off_877D18);
  v6 = *(_QWORD *)(v4 + 8);
  if ( (*(_WORD *)(v6 + 24 * a2 + 20) & 0x440) != 0 )
    return 0LL;
  result = *(unsigned int *)(v6 + 24 * a2 + 16);
  LOBYTE(result) = (_DWORD)result == 32 || (_DWORD)result == 9;
  return result;
}