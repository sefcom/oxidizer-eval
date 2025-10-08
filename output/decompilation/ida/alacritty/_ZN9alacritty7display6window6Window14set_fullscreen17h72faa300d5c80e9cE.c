__int64 __fastcall alacritty::display::window::Window::set_fullscreen(__int64 a1, int a2)
{
  __int64 v2; // rdi
  _QWORD v4[18]; // [rsp+8h] [rbp-90h] BYREF

  v2 = a1 + 32;
  if ( a2 )
  {
    v4[0] = 0x8000000000000002LL;
    v4[1] = 0x8000000000000001LL;
  }
  else
  {
    v4[0] = 0x8000000000000003LL;
  }
  return winit::window::Window::set_fullscreen(v2, v4);
}