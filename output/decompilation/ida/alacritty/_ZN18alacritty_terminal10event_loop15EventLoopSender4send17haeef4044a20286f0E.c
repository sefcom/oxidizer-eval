_QWORD *__fastcall alacritty_terminal::event_loop::EventLoopSender::send(_QWORD *a1, _QWORD *a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v6; // [rsp+8h] [rbp-30h] BYREF
  __int128 v7; // [rsp+10h] [rbp-28h]

  std::sync::mpmc::Sender<T>::send(&v6, *a2, a2[1], a3);
  v3 = v6;
  if ( v6 == 0x8000000000000003LL )
  {
    v4 = polling::Poller::notify(a2[2] + 16LL);
    if ( v4 )
    {
      *a1 = 0x8000000000000003LL;
      a1[1] = v4;
    }
    else
    {
      *a1 = 0x8000000000000004LL;
    }
  }
  else
  {
    *(_OWORD *)(a1 + 1) = v7;
    *a1 = v3;
  }
  return a1;
}