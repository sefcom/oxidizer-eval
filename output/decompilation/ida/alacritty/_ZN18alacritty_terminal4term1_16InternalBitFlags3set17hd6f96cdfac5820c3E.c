__int64 __fastcall alacritty_terminal::term::_::InternalBitFlags::set(_DWORD *a1, unsigned int a2, int a3)
{
  __int64 result; // rax

  result = a2 | *a1;
  if ( !a3 )
    result = *a1 & ~a2;
  *a1 = result;
  return result;
}