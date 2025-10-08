__int64 __fastcall sniffnet::networking::parse_packets::maybe_send_tick_run_offline(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 result; // rax
  bool v7; // cc
  __int64 v8; // rcx
  __int64 v10; // r13
  __int64 v12; // r15
  char v13; // dl
  unsigned __int8 v14; // bp
  __int128 v15; // [rsp+8h] [rbp-2C0h] BYREF
  __int64 v16; // [rsp+18h] [rbp-2B0h]
  _QWORD dest[33]; // [rsp+20h] [rbp-2A8h] BYREF
  __int128 v18; // [rsp+128h] [rbp-1A0h]
  __int64 v19; // [rsp+138h] [rbp-190h]
  char v20; // [rsp+140h] [rbp-188h]
  __int64 v21; // [rsp+150h] [rbp-178h]
  __int64 v22; // [rsp+158h] [rbp-170h]
  _BYTE src[360]; // [rsp+160h] [rbp-168h] BYREF

  result = *a2;
  if ( *(_OWORD *)a2 == 0LL )
  {
    *a2 = a4;
    a2[1] = a5;
  }
  else
  {
    v7 = a4 <= result;
    v8 = a4 - result;
    if ( !v7 )
    {
      v10 = v8;
      sniffnet::networking::types::info_traffic::InfoTraffic::take_but_leave_something(src, a2);
      std::sync::poison::mutex::Mutex<T>::lock(dest, a3 + 16);
      v12 = core::result::Result<T,E>::unwrap(dest, &off_2DFF768);
      v14 = v13 & 1;
      alloc::vec::Vec<T,A>::drain(dest, v12 + 8);
      core::iter::traits::iterator::Iterator::collect(&v15, dest);
      memcpy(dest, src, 0x100uLL);
      v18 = v15;
      v19 = v16;
      v21 = a6;
      dest[32] = a1;
      v20 = 0;
      v22 = 0LL;
      event_listener_strategy::EventListenerFuture::wait(src);
      core::ptr::drop_in_place<core::result::Result<(),async_channel::SendError<sniffnet::networking::parse_packets::BackendTrafficMessage>>>(
        src,
        dest);
      result = core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<event_listener::sys::Inner<()>>>(v12, v14);
      if ( v10 >= 2 )
      {
        v21 = a6;
        dest[0] = a1;
        LODWORD(dest[1]) = v10 - 1;
        *(_QWORD *)&v18 = 0x8000000000000001LL;
        v22 = 0LL;
        event_listener_strategy::EventListenerFuture::wait(src);
        return core::ptr::drop_in_place<core::result::Result<(),async_channel::SendError<sniffnet::networking::parse_packets::BackendTrafficMessage>>>(
                 src,
                 dest);
      }
    }
  }
  return result;
}