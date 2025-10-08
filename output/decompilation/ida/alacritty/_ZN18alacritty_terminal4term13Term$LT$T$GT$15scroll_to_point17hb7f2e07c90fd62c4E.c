__int64 __fastcall alacritty_terminal::term::Term<T>::scroll_to_point(__int64 a1, int a2)
{
  __int64 result; // rax

  result = *(unsigned int *)(a1 + 200);
  if ( a2 < -*(_DWORD *)(a1 + 200) )
    return alacritty_terminal::term::Term<T>::scroll_display(a1, 0, -(result + a2));
  if ( a2 >= *(_DWORD *)(a1 + 192) - (int)result )
    return alacritty_terminal::term::Term<T>::scroll_display(a1, 0, *(_DWORD *)(a1 + 192) + ~((int)result + a2));
  return result;
}