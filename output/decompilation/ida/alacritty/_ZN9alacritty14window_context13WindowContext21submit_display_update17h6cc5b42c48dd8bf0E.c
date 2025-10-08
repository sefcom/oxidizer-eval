unsigned __int8 __fastcall alacritty::window_context::WindowContext::submit_display_update(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        char a6,
        __int64 a7)
{
  int v9; // r12d
  unsigned __int8 v10; // r15
  int v11; // r13d
  unsigned __int8 result; // al
  __int64 v13; // rax
  int v14; // edx

  v9 = *(_DWORD *)(a1 + 192);
  if ( (*(_BYTE *)(a1 + 1758) & 1) != 0 )
    v10 = *(_DWORD *)(a1 + 664) == v9 - 1;
  else
    v10 = *(_BYTE *)(a5 + 4460) ^ 1;
  v11 = *(_DWORD *)(a1 + 96);
  result = alacritty::display::Display::handle_update(a2, a1, a3, a4, a5, a7);
  if ( !a6 )
  {
    if ( *(_QWORD *)(a5 + 4352) )
    {
      v13 = *(_QWORD *)(a1 + 200);
      v14 = 1;
      if ( !(v10 & 1 | (v11 + 1 != v9 || v13 != 0)) )
        return alacritty_terminal::term::Term<T>::scroll_display(a1, 0, v14);
      result = v13 != 0;
      v14 = -1;
      if ( (v10 & result) != 0 )
        return alacritty_terminal::term::Term<T>::scroll_display(a1, 0, v14);
    }
  }
  return result;
}