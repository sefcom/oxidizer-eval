__int64 __fastcall alacritty::display::window::Window::toggle_fullscreen(__int64 a1)
{
  _QWORD v2[19]; // [rsp+0h] [rbp-98h] BYREF

  winit::window::Window::fullscreen(v2, *(_QWORD *)(a1 + 32), *(_QWORD *)(a1 + 40));
  alacritty::display::window::Window::set_fullscreen(a1, v2[0] == 0x8000000000000003LL);
  return core::ptr::drop_in_place<core::option::Option<winit::window::Fullscreen>>(v2);
}