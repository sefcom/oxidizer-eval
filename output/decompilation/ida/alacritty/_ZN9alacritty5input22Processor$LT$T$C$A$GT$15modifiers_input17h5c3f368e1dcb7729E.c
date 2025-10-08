__int64 __fastcall alacritty::input::Processor<T,A>::modifiers_input(_QWORD *a1, int a2, char a3)
{
  __int64 v4; // r15
  __int64 v5; // rbx
  unsigned __int8 v6; // bl
  __int64 result; // rax

  v4 = a1[5];
  <alacritty::event::ActionContext<N,T> as alacritty::input::ActionContext<T>>::inline_search_state(v4);
  *(_DWORD *)v4 = a2;
  *(_BYTE *)(v4 + 4) = a3;
  v5 = a1[3];
  <alacritty::event::ActionContext<N,T> as alacritty::input::ActionContext<T>>::scheduler_mut(v5);
  *(_BYTE *)(v5 + 57) = 1;
  v6 = alacritty::input::Processor<T,A>::cursor_state(a1);
  result = <alacritty::event::ActionContext<N,T> as alacritty::input::ActionContext<T>>::window(a1[6]);
  if ( v6 != *(_BYTE *)(result + 245) )
  {
    *(_BYTE *)(result + 245) = v6;
    return winit::window::Window::set_cursor(*(_QWORD *)(result + 32), *(_QWORD *)(result + 40), v6);
  }
  return result;
}