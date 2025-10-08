__int64 __fastcall alacritty::display::window::Window::set_resize_increments(
        __int64 a1,
        __int64 a2,
        float a3,
        float a4)
{
  _DWORD v5[3]; // [rsp+Ch] [rbp-Ch] BYREF

  *(float *)&v5[1] = a3;
  *(float *)&v5[2] = a4;
  v5[0] = 1;
  return winit::window::Window::set_resize_increments(a1, a2, v5);
}