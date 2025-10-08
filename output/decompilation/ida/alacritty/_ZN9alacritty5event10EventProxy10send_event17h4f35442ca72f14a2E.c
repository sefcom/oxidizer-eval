__int64 __fastcall alacritty::event::EventProxy::send_event(__int64 a1, const void *a2)
{
  _BYTE v3[192]; // [rsp+0h] [rbp-198h] BYREF
  _QWORD v4[27]; // [rsp+C0h] [rbp-D8h] BYREF

  alacritty::event::Event::new(v4, a2, *(_QWORD *)(a1 + 32));
  winit::event_loop::EventLoopProxy<T>::send_event(v3);
  return core::ptr::drop_in_place<core::result::Result<(),winit::event_loop::EventLoopClosed<alacritty::event::Event>>>(
           v3,
           a1);
}