void __fastcall sniffnet::networking::parse_packets::maybe_send_tick_run_live(
        __int64 a1,
        void *a2,
        __int64 a3,
        __int64 a4,
        __int64 *a5,
        __int64 a6)
{
  unsigned int v6; // ebx
  __int64 v9; // r14
  int v10; // edx
  __int64 v11; // r12
  char v12; // dl
  unsigned __int8 v13; // bp
  __int128 v16; // [rsp+18h] [rbp-2C0h] BYREF
  __int64 v17; // [rsp+28h] [rbp-2B0h]
  _QWORD dest[33]; // [rsp+30h] [rbp-2A8h] BYREF
  __int128 v19; // [rsp+138h] [rbp-1A0h]
  __int64 v20; // [rsp+148h] [rbp-190h]
  char v21; // [rsp+150h] [rbp-188h]
  __int64 v22; // [rsp+160h] [rbp-178h]
  __int64 v23; // [rsp+168h] [rbp-170h]
  _BYTE src[360]; // [rsp+170h] [rbp-168h] BYREF

  v6 = *((_DWORD *)a5 + 2);
  if ( v6 != 1000000000 )
  {
    v9 = *a5;
    if ( (unsigned __int8)sniffnet::networking::parse_packets::maybe_send_tick_run_live::{{closure}}(*a5, v6) )
    {
      dest[0] = v9;
      LODWORD(dest[1]) = v6;
      *a5 = std::time::Instant::checked_add(dest, 1LL, 0LL);
      *((_DWORD *)a5 + 2) = v10;
      sniffnet::networking::types::info_traffic::InfoTraffic::take_but_leave_something(src, a2);
      std::sync::poison::mutex::Mutex<T>::lock(dest, a3 + 16);
      v11 = core::result::Result<T,E>::unwrap(dest, &off_2DFF750);
      v13 = v12 & 1;
      alloc::vec::Vec<T,A>::drain(dest, v11 + 8);
      core::iter::traits::iterator::Iterator::collect(&v16, dest);
      memcpy(dest, src, 0x100uLL);
      v19 = v16;
      v20 = v17;
      v22 = a6;
      dest[32] = a1;
      v21 = 0;
      v23 = 0LL;
      event_listener_strategy::EventListenerFuture::wait(src);
      core::ptr::drop_in_place<core::result::Result<(),async_channel::SendError<sniffnet::networking::parse_packets::BackendTrafficMessage>>>(
        src,
        dest);
      core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<event_listener::sys::Inner<()>>>(v11, v13);
      sniffnet::networking::types::capture_context::CaptureSource::set_addresses(a4);
    }
  }
}