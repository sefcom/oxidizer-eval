__int64 __fastcall alacritty::input::Processor<T,A>::reset_mouse_cursor(__int64 a1)
{
  unsigned __int8 v1; // bl
  __int64 result; // rax

  v1 = alacritty::input::Processor<T,A>::cursor_state(a1);
  result = <alacritty::event::ActionContext<N,T> as alacritty::input::ActionContext<T>>::window(*(_QWORD *)(a1 + 48));
  if ( v1 != *(_BYTE *)(result + 245) )
  {
    *(_BYTE *)(result + 245) = v1;
    return winit::window::Window::set_cursor(*(_QWORD *)(result + 32), *(_QWORD *)(result + 40), v1);
  }
  return result;
}