char __fastcall alacritty::display::Ime::set_enabled(__int64 a1, int a2)
{
  char result; // al

  result = 1;
  if ( !a2 )
  {
    core::ptr::drop_in_place<alacritty::display::Ime>(a1);
    *(_QWORD *)a1 = 2LL;
    result = 0;
  }
  *(_BYTE *)(a1 + 72) = result;
  return result;
}