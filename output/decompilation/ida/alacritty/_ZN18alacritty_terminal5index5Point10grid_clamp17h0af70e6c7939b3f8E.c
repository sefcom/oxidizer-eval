__int64 __fastcall alacritty_terminal::index::Point::grid_clamp(__int64 a1, int a2, __int64 a3)
{
  __int64 column; // r15
  __int64 v5; // r14
  __int64 result; // rax

  column = alacritty_terminal::grid::Dimensions::last_column(*(_QWORD *)(a3 + 144));
  v5 = core::cmp::Ord::min(a1, column);
  if ( a2 > (int)alacritty_terminal::grid::Dimensions::bottommost_line(*(_QWORD *)(a3 + 152)) )
    v5 = column;
  result = 0LL;
  if ( a2 >= 0 )
    return v5;
  return result;
}