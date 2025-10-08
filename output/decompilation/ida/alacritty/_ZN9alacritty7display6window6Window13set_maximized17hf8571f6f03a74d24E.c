__int64 __fastcall alacritty::display::window::Window::set_maximized(__int64 a1)
{
  return winit::window::Window::set_maximized(a1 + 32);
}