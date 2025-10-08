__int64 __fastcall alacritty_terminal::vi_mode::ViModeCursor::scroll(int a1, __int64 a2, int a3)
{
  unsigned int v3; // ebx
  _BYTE v5[8]; // [rsp+0h] [rbp-28h] BYREF
  __int64 v6; // [rsp+8h] [rbp-20h]

  v3 = alacritty_terminal::index::Line::grid_clamp(a1 - a3, *(_QWORD *)(a2 + 80), *(_QWORD *)(a2 + 192), 1);
  alacritty_terminal::vi_mode::first_occupied_in_line(v5, a2, v3);
  if ( v5[0] )
    return v6;
  else
    return 0LL;
}