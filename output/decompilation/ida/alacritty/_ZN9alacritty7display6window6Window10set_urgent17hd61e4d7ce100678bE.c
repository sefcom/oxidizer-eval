__int64 __fastcall alacritty::display::window::Window::set_urgent(__int64 a1, unsigned __int8 a2)
{
  return winit::window::Window::request_user_attention(a1 + 32, 2 * (a2 ^ 1u));
}