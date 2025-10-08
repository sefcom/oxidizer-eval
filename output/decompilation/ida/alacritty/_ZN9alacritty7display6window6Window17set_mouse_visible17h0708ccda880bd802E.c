__int64 __fastcall alacritty::display::window::Window::set_mouse_visible(__int64 a1, unsigned __int8 a2)
{
  __int64 result; // rax

  if ( a2 != *(_BYTE *)(a1 + 244) )
  {
    *(_BYTE *)(a1 + 244) = a2;
    return winit::window::Window::set_cursor_visible(*(_QWORD *)(a1 + 32), *(_QWORD *)(a1 + 40), a2);
  }
  return result;
}