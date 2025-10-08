__int64 __fastcall firecracker::api_server_adapter::ApiServerAdapter::run_microvm(
        _BYTE *a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        void *src,
        volatile signed __int64 *a8,
        __int64 a9)
{
  volatile signed __int64 *v9; // r15
  __int64 v10; // r14
  __int64 v11; // rax
  __int64 v12; // rax
  char v13; // dl
  unsigned __int8 v14; // dl
  int v15; // ecx
  _QWORD v17[2]; // [rsp+8h] [rbp-1F0h] BYREF
  int v18; // [rsp+18h] [rbp-1E0h]
  char v19; // [rsp+1Ch] [rbp-1DCh]
  __int64 v20; // [rsp+20h] [rbp-1D8h]
  __int64 v21; // [rsp+28h] [rbp-1D0h]
  __int64 v22; // [rsp+30h] [rbp-1C8h]
  __int64 v23; // [rsp+38h] [rbp-1C0h]
  _BYTE dest[376]; // [rsp+40h] [rbp-1B8h] BYREF
  volatile signed __int64 *v25; // [rsp+1B8h] [rbp-40h]
  int v26; // [rsp+1C0h] [rbp-38h]

  v9 = a8;
  if ( _InterlockedIncrement64(a8) <= 0 )
    BUG();
  v10 = a9;
  v17[0] = 1LL;
  v17[1] = 1LL;
  v18 = 0;
  v19 = 0;
  v20 = a3;
  v21 = a4;
  v22 = a5;
  v23 = a6;
  memcpy(dest, src, sizeof(dest));
  v25 = v9;
  v26 = a2;
  v11 = alloc::boxed::Box<T>::new(v17);
  <event_manager::manager::EventManager<T> as event_manager::SubscriberOps>::add_subscriber(v10, v11, &off_3A3AA0);
  while ( 1 )
  {
    event_manager::manager::EventManager<S>::run_with_timeout(v17, v10);
    core::result::Result<T,E>::expect(v17, &unk_38575, 38LL, &off_3A3AC8);
    std::sync::poison::mutex::Mutex<T>::lock(v17, a8 + 2);
    v12 = core::result::Result<T,E>::unwrap(v17, &off_3A3AE0);
    v14 = v13 & 1;
    v15 = *(unsigned __int8 *)(v12 + 532);
    if ( v15 != 158 )
      break;
    core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<firecracker::metrics::PeriodicMetrics>>(v12, v14);
  }
  if ( *(_BYTE *)(v12 + 532) )
  {
    *a1 = 29;
    a1[1] = v15;
    core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<firecracker::metrics::PeriodicMetrics>>(v12, v14);
  }
  else
  {
    core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<firecracker::metrics::PeriodicMetrics>>(v12, v14);
    *a1 = 32;
  }
  return core::ptr::drop_in_place<alloc::sync::Arc<std::sync::poison::mutex::Mutex<vmm::Vmm>>>(&a8);
}