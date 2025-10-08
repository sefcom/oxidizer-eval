__int64 __fastcall alacritty_terminal::index::Line::grid_clamp(
        unsigned int a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        char a4)
{
  int v4; // r14d
  unsigned int v6; // ebp
  unsigned int v7; // r14d
  unsigned int v8; // eax
  __int64 v9; // rdi
  unsigned int v10; // eax
  int v12; // ebx
  unsigned int v13; // eax
  unsigned int v14; // ecx
  unsigned int v17; // eax

  if ( !a4 )
  {
    v10 = alacritty_terminal::grid::Dimensions::bottommost_line(a3);
    v8 = core::cmp::Ord::min(v10, a1);
    v9 = 0LL;
    return core::cmp::Ord::max(v9, v8);
  }
  v4 = a2;
  if ( a4 == 1 )
  {
    v6 = alacritty_terminal::grid::Dimensions::bottommost_line(a3);
    v7 = alacritty_terminal::grid::Dimensions::topmost_line(a2, a3);
    v8 = core::cmp::Ord::min(v6, a1);
    v9 = v7;
    return core::cmp::Ord::max(v9, v8);
  }
  v12 = a1 - a3;
  if ( (int)a1 >= (int)a3 )
  {
    v17 = alacritty_terminal::grid::Dimensions::topmost_line(a2, a3);
    if ( !v4 )
      core::panicking::panic_const::panic_const_rem_by_zero(&off_877C28);
    v14 = v17;
    if ( !(~v4 | (v12 + 0x80000000)) )
      core::panicking::panic_const::panic_const_rem_overflow(&off_877C28, a3, ~v4 | (v12 + 0x80000000), v17);
  }
  else
  {
    v13 = alacritty_terminal::grid::Dimensions::bottommost_line(a3);
    if ( !(_DWORD)a2 )
      core::panicking::panic_const::panic_const_rem_by_zero(&off_877C10);
    v14 = v13;
    if ( !(~(_DWORD)a2 | (++v12 + 0x80000000)) )
      core::panicking::panic_const::panic_const_rem_overflow(&off_877C10, a2, ~(_DWORD)a2 | (v12 + 0x80000000), v13);
  }
  return v14 + v12 % v4;
}