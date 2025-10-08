__int64 __fastcall alacritty::event::ActionContext<N,T>::exit_search(_QWORD *a1)
{
  __int64 v1; // r14
  __int64 result; // rax

  v1 = a1[6];
  alacritty::display::window::Window::set_ime_allowed(v1 + 800, (*(_DWORD *)(a1[1] + 1756LL) & 0x10000) == 0);
  *(_BYTE *)(v1 + 72) = 1;
  *(_BYTE *)(v1 + 1372) = 1;
  result = a1[13];
  *(_QWORD *)(result + 4352) = 0LL;
  *(_BYTE *)(result + 4448) = 2;
  return result;
}