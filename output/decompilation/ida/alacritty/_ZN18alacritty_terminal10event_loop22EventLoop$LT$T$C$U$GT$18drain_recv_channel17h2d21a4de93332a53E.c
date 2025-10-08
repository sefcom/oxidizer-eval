char __fastcall alacritty_terminal::event_loop::EventLoop<T,U>::drain_recv_channel(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned __int64 v4; // rcx
  __int64 v5; // [rsp+0h] [rbp-68h] BYREF
  __int64 v6; // [rsp+8h] [rbp-60h]
  __int64 v7; // [rsp+10h] [rbp-58h]
  __int64 v8; // [rsp+18h] [rbp-50h]
  _QWORD v9[9]; // [rsp+20h] [rbp-48h] BYREF

  v8 = a2;
  alacritty_terminal::event_loop::PeekableReceiver<T>::recv(&v5, a1 + 112);
  v2 = v5;
  if ( v5 == 0x8000000000000003LL )
  {
LABEL_2:
    core::ptr::drop_in_place<core::result::Result<alacritty_terminal::event_loop::Msg,std::sync::mpsc::TryRecvError>>(&v5);
    return 1;
  }
  while ( 1 )
  {
    v4 = v2 ^ 0x8000000000000000LL;
    if ( (unsigned __int64)(v2 + 0x7FFFFFFFFFFFFFFFLL) >= 2 )
      v4 = 0LL;
    if ( v4 )
      break;
    v9[0] = v2;
    v9[1] = v6;
    v9[2] = v7;
    alloc::collections::vec_deque::VecDeque<T,A>::push_back(v8, v9);
LABEL_5:
    alacritty_terminal::event_loop::PeekableReceiver<T>::recv(&v5, a1 + 112);
    v2 = v5;
    if ( v5 == 0x8000000000000003LL )
      goto LABEL_2;
  }
  if ( v4 == 2 )
  {
    <alacritty_terminal::tty::unix::Pty as alacritty_terminal::event::OnResize>::on_resize(a1, v6);
    goto LABEL_5;
  }
  return 0;
}