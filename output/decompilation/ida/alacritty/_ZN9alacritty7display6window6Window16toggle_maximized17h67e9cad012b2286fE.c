__int64 __fastcall alacritty::display::window::Window::toggle_maximized(__int64 a1)
{
  winit::window::Window::is_maximized(*(_QWORD *)(a1 + 32), *(_QWORD *)(a1 + 40));
  return alacritty::display::window::Window::set_maximized(a1);
}