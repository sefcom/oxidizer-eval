__int64 __fastcall alacritty::event::ActionContext<N,T>::schedule_blinking(_QWORD *a1)
{
  __int64 v1; // rbx
  unsigned __int64 v2; // rax
  unsigned __int64 v4[22]; // [rsp+10h] [rbp-188h] BYREF
  _QWORD v5[27]; // [rsp+C0h] [rbp-D8h] BYREF

  v1 = alacritty::display::window::Window::id(a1[6] + 800LL);
  v4[0] = 0x8000000000000007LL;
  alacritty::event::Event::new(v5, v4, v1);
  v2 = core::cmp::Ord::max(*(_QWORD *)(a1[8] + 968LL));
  return alacritty::scheduler::Scheduler::schedule(
           a1[12],
           (unsigned int)v5,
           v2 / 0x3E8,
           1000000 * (unsigned int)(v2 % 0x3E8),
           1,
           v1,
           2);
}