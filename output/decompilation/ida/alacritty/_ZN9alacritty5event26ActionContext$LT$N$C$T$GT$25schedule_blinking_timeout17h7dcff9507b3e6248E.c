char __fastcall alacritty::event::ActionContext<N,T>::schedule_blinking_timeout(_QWORD *a1)
{
  __int64 v1; // rax
  __int64 v2; // r15
  int v3; // edx
  int v4; // r14d
  char result; // al
  __int64 v6; // rax
  int v7; // r12d
  unsigned __int64 v8[22]; // [rsp+10h] [rbp-198h] BYREF
  _QWORD v9[29]; // [rsp+C0h] [rbp-E8h] BYREF

  v1 = a1[8];
  if ( *(_BYTE *)(v1 + 984) )
  {
    v2 = core::cmp::Ord::max(
           2LL * *(_QWORD *)(v1 + 968) / 0x3E8uLL,
           1000000 * (unsigned int)(2LL * *(_QWORD *)(v1 + 968) % 0x3E8uLL),
           *(unsigned __int8 *)(v1 + 984));
    v4 = v3;
  }
  else
  {
    v4 = 0;
    v2 = 0LL;
  }
  result = v2 == 0;
  if ( v4 != 0 || v2 != 0 )
  {
    v6 = alacritty::display::window::Window::id(a1[6] + 800LL);
    v7 = v6;
    v8[0] = 0x8000000000000008LL;
    alacritty::event::Event::new(v9, v8, v6);
    return alacritty::scheduler::Scheduler::schedule(a1[12], (unsigned int)v9, v2, v4, 0, v7, 3);
  }
  return result;
}