__int64 __fastcall alacritty_terminal::index::Point::add(
        __int64 a1,
        int a2,
        __int64 a3,
        unsigned __int8 a4,
        __int64 a5)
{
  unsigned __int64 v5; // r9
  unsigned __int64 v6; // rax

  v5 = *(_QWORD *)(a3 + 184);
  if ( !v5 )
    core::panicking::panic_const::panic_const_div_by_zero(&off_877C40);
  v6 = a1 + a5;
  if ( (v5 | (a1 + a5)) >> 32 )
    return alacritty_terminal::index::Point::grid_clamp(v6 % v5, (unsigned int)(v6 / v5) + a2, a3, a4);
  else
    return alacritty_terminal::index::Point::grid_clamp(
             (unsigned int)v6 % (unsigned int)v5,
             (unsigned int)v6 / (unsigned int)v5 + a2,
             a3,
             a4);
}