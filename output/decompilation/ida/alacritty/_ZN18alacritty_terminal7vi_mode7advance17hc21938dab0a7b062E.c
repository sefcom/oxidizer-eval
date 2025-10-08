__int64 __fastcall alacritty_terminal::vi_mode::advance(__int64 a1, __int64 a2, unsigned int a3, int a4)
{
  if ( a4 )
    return alacritty_terminal::index::Point::add(a2, a3, a1, 1u, 1LL);
  else
    return alacritty_terminal::index::Point::sub(a2, a3, a1, 1LL);
}