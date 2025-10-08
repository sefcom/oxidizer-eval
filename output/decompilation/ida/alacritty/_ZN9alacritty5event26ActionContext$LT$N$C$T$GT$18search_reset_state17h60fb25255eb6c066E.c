_BYTE *__fastcall alacritty::event::ActionContext<N,T>::search_reset_state(_QWORD *a1)
{
  __int64 v2; // rax
  _BYTE *result; // rax
  __int64 v4; // r14
  __int64 v5; // rdi
  int v6; // ecx
  _BYTE v7[264]; // [rsp+0h] [rbp-108h] BYREF

  v2 = alacritty::display::window::Window::id(a1[6] + 800LL);
  alacritty::scheduler::Scheduler::unschedule(v7, a1[12], v2, 1LL);
  result = (_BYTE *)core::ptr::drop_in_place<core::option::Option<alacritty::scheduler::Timer>>(v7);
  v4 = a1[13];
  *(_BYTE *)(v4 + 4448) = 2;
  v5 = a1[1];
  if ( (*(_BYTE *)(v5 + 1758) & 1) != 0 )
  {
    v6 = *(_DWORD *)(v4 + 4408);
    *(_QWORD *)(v5 + 656) = *(_QWORD *)(v4 + 4400);
    *(_DWORD *)(v5 + 664) = v6;
    alacritty_terminal::term::Term<T>::scroll_display(v5, 0, *(_DWORD *)(v4 + 4456));
    *(_DWORD *)(v4 + 4456) = 0;
    result = (_BYTE *)a1[15];
    *result = 1;
  }
  return result;
}