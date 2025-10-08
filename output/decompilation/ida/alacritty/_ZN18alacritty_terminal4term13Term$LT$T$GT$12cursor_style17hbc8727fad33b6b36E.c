__int64 __fastcall alacritty_terminal::term::Term<T>::cursor_style(__int64 a1)
{
  __int64 result; // rax

  result = *(unsigned int *)(a1 + 1760);
  if ( (_BYTE)result == 2 )
  {
    result = *(unsigned int *)(a1 + 568);
    if ( (*(_BYTE *)(a1 + 1758) & 1) == 0 )
      return result;
  }
  else if ( (*(_BYTE *)(a1 + 1758) & 1) == 0 )
  {
    return result;
  }
  result = (unsigned __int8)result;
  if ( *(_BYTE *)(a1 + 570) != 2 )
    return *(unsigned __int8 *)(a1 + 570);
  return result;
}