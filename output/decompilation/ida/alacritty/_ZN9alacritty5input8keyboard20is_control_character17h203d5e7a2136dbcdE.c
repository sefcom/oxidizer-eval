char __fastcall alacritty::input::keyboard::is_control_character(unsigned __int8 a1, __int64 a2)
{
  char result; // al

  if ( a2 != 1 )
    return 0;
  result = 1;
  if ( a1 >= 0x20u )
    return core::ops::range::RangeBounds::contains(a1);
  return result;
}