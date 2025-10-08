__int64 __fastcall alacritty::display::window::Window::set_ime_allowed(__int64 a1, unsigned __int8 a2)
{
  __int64 result; // rax

  if ( !*(_BYTE *)(a1 + 243) )
    return winit::window::Window::set_ime_allowed(a1 + 32, a2);
  return result;
}