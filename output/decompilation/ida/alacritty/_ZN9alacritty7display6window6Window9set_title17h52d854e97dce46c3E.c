__int64 __fastcall alacritty::display::window::Window::set_title(__int64 a1, __int64 a2)
{
  core::ptr::drop_in_place<alloc::string::String>(a1);
  *(_OWORD *)a1 = *(_OWORD *)a2;
  *(_QWORD *)(a1 + 16) = *(_QWORD *)(a2 + 16);
  return winit::window::Window::set_title(*(_QWORD *)(a1 + 32), *(_QWORD *)(a1 + 40), *(_QWORD *)(a1 + 8));
}