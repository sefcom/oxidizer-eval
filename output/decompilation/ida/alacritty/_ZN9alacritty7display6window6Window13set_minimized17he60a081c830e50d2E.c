__int64 __fastcall alacritty::display::window::Window::set_minimized(__int64 a1)
{
  return winit::window::Window::set_minimized(a1 + 32);
}