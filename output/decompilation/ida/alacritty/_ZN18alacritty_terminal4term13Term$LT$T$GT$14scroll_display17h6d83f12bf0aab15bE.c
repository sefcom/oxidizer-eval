__int64 __fastcall alacritty_terminal::term::Term<T>::scroll_display(__int64 a1, int a2, int a3)
{
  __int64 v4; // r14
  unsigned int v5; // ebp
  unsigned int v6; // eax
  __int64 result; // rax
  unsigned __int64 v8[7]; // [rsp+0h] [rbp-38h] BYREF

  v4 = *(_QWORD *)(a1 + 200);
  alacritty_terminal::grid::Grid<T>::scroll_display((unsigned __int64 *)(a1 + 40), a2, a3);
  v8[0] = 0x8000000000000000LL;
  <alacritty::event::EventProxy as alacritty_terminal::event::EventListener>::send_event(a1, v8);
  v5 = *(_DWORD *)(a1 + 192) + ~*(_DWORD *)(a1 + 200);
  v6 = core::cmp::Ord::max((unsigned int)-*(_DWORD *)(a1 + 200), *(unsigned int *)(a1 + 664));
  *(_DWORD *)(a1 + 664) = core::cmp::Ord::min(v5, v6);
  result = alacritty_terminal::term::Term<T>::vi_mode_recompute_selection(a1);
  if ( v4 != *(_QWORD *)(a1 + 200) )
    *(_BYTE *)(a1 + 528) = 1;
  return result;
}