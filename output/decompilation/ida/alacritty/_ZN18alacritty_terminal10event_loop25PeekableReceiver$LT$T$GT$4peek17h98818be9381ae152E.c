__int64 __fastcall alacritty_terminal::event_loop::PeekableReceiver<T>::peek(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // r12
  __int64 v4; // [rsp+8h] [rbp-50h] BYREF
  __int128 v5; // [rsp+10h] [rbp-48h]
  __int128 v6; // [rsp+20h] [rbp-38h]

  v1 = a1 + 16;
  if ( *(_QWORD *)(a1 + 16) == 0x8000000000000003LL )
  {
    std::sync::mpmc::Receiver<T>::try_recv(&v4, *(_QWORD *)a1, *(_QWORD *)(a1 + 8));
    v2 = v4;
    if ( v4 == 0x8000000000000003LL )
      core::ptr::drop_in_place<core::result::Result<alacritty_terminal::event_loop::Msg,std::sync::mpsc::TryRecvError>>(&v4);
    else
      v6 = v5;
    core::ptr::drop_in_place<core::result::Result<alacritty_terminal::event_loop::Msg,std::sync::mpsc::TryRecvError>>(v1);
    *(_QWORD *)(a1 + 16) = v2;
    *(_OWORD *)(a1 + 24) = v6;
    if ( v2 == 0x8000000000000003LL )
      return 0LL;
  }
  return v1;
}