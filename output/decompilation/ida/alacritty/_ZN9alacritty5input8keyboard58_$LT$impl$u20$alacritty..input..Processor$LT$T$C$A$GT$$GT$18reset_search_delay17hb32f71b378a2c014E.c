__int64 __fastcall alacritty::input::keyboard::<impl alacritty::input::Processor<T,A>>::reset_search_delay(_QWORD *a1)
{
  __int64 result; // rax
  __int64 v2; // rax
  __int64 v3; // r14
  __int64 v4; // rbx
  _DWORD v5[58]; // [rsp+10h] [rbp-108h] BYREF
  int v6; // [rsp+F8h] [rbp-20h]

  result = <alacritty::event::ActionContext<N,T> as alacritty::input::ActionContext<T>>::search_active(a1[13]);
  if ( (_BYTE)result )
  {
    v2 = <alacritty::event::ActionContext<N,T> as alacritty::input::ActionContext<T>>::window(a1[6]);
    v3 = alacritty::display::window::Window::id(v2);
    v4 = a1[12];
    <alacritty::event::ActionContext<N,T> as alacritty::input::ActionContext<T>>::scheduler_mut(v4);
    alacritty::scheduler::Scheduler::unschedule(v5, v4, v3, 1LL);
    if ( v5[0] == 2 )
      return core::ptr::drop_in_place<core::option::Option<alacritty::scheduler::Timer>>(v5);
    else
      return alacritty::scheduler::Scheduler::schedule(v4, (unsigned int)v5, 0, 500000000, 0, v5[56], v6);
  }
  return result;
}