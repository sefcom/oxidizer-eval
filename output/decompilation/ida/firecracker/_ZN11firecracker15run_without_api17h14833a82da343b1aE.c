__int64 __fastcall firecracker::run_without_api(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        __int64 a4,
        char a5,
        char a6,
        __int64 a7,
        __int64 a8,
        __int64 a9)
{
  int v13; // eax
  volatile signed __int64 *v14; // rax
  __int64 v15; // rt0
  char v16; // of
  volatile signed __int64 *v17; // r14
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm2
  __int64 v21; // rbx
  char v22; // dl
  char v23; // bp
  __int64 v24; // rax
  char v25; // dl
  unsigned __int8 v26; // dl
  int v27; // ecx
  __int128 v29; // [rsp+10h] [rbp-478h] BYREF
  __int128 v30; // [rsp+20h] [rbp-468h]
  __int128 v31; // [rsp+30h] [rbp-458h]
  __int128 v32; // [rsp+40h] [rbp-448h]
  volatile signed __int64 *v33; // [rsp+58h] [rbp-430h] BYREF
  __int128 v34; // [rsp+60h] [rbp-428h]
  __int128 v35; // [rsp+70h] [rbp-418h]
  __int128 v36; // [rsp+80h] [rbp-408h]
  __int128 v37; // [rsp+90h] [rbp-3F8h]
  __int64 v38; // [rsp+A0h] [rbp-3E8h] BYREF
  __int128 v39; // [rsp+A8h] [rbp-3E0h]
  __int128 v40; // [rsp+B8h] [rbp-3D0h]
  __int128 v41; // [rsp+C8h] [rbp-3C0h]
  __int128 v42; // [rsp+D8h] [rbp-3B0h]
  _BYTE src[312]; // [rsp+E8h] [rbp-3A0h] BYREF
  _BYTE v44[184]; // [rsp+220h] [rbp-268h] BYREF
  __int64 v45; // [rsp+2D8h] [rbp-1B0h] BYREF
  __int128 v46; // [rsp+2E0h] [rbp-1A8h]
  __int128 v47; // [rsp+2F0h] [rbp-198h]
  __int128 v48; // [rsp+300h] [rbp-188h]
  __int128 v49; // [rsp+310h] [rbp-178h]
  _QWORD dest[39]; // [rsp+320h] [rbp-168h] BYREF

  event_manager::manager::EventManager<S>::new_with_capacity(&v38);
  core::result::Result<T,E>::expect(v44, &v38, &off_3A4160);
  v13 = firecracker::metrics::PeriodicMetrics::new();
  v38 = 1LL;
  v39 = 1uLL;
  LODWORD(v40) = v13;
  v14 = (volatile signed __int64 *)alloc::boxed::Box<T>::new(&v38);
  v33 = v14;
  v15 = _InterlockedIncrement64(v14);
  if ( (v15 < 0) ^ v16 | (v15 == 0) )
    BUG();
  v17 = v14;
  <event_manager::manager::EventManager<T> as event_manager::SubscriberOps>::add_subscriber(v44, v14, &off_3A3CC0);
  if ( __OFSUB__(0LL, *a3) )
    core::option::unwrap_failed(&off_3A4178);
  firecracker::build_microvm_from_json((char *)&v38, a2, (__int64)v44, (__int64)a3, a4, a5, a6, a7, a8, a9);
  v29 = v39;
  v30 = v40;
  v31 = v41;
  v32 = v42;
  if ( v38 == 0x8000000000000000LL )
  {
    v18 = v29;
    v19 = v30;
    v20 = v31;
    v34 = v29;
    v35 = v30;
    v36 = v31;
    v37 = v32;
    *(_OWORD *)(a1 + 48) = v32;
    *(_OWORD *)(a1 + 32) = v20;
    *(_OWORD *)(a1 + 16) = v19;
    *(_OWORD *)a1 = v18;
  }
  else
  {
    memcpy(dest, src, sizeof(dest));
    v37 = v32;
    v36 = v31;
    v35 = v30;
    v34 = v29;
    v46 = v29;
    v47 = v30;
    v48 = v31;
    v49 = v32;
    v45 = v38;
    *(_QWORD *)&v29 = dest[38];
    core::ptr::drop_in_place<vmm::resources::VmResources>(&v45);
    std::sync::poison::mutex::Mutex<T>::lock(&v38, v17 + 2);
    v21 = core::result::Result<T,E>::expect(&v38, &off_3A4190);
    v23 = v22;
    firecracker::metrics::PeriodicMetrics::start(v21 + 8);
    core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<firecracker::metrics::PeriodicMetrics>>(v21, v23 & 1);
    while ( 1 )
    {
      event_manager::manager::EventManager<S>::run_with_timeout(&v38, v44);
      core::result::Result<T,E>::expect(&v38, aFailedToStartT, 33LL, &off_3A41A8);
      std::sync::poison::mutex::Mutex<T>::lock(&v38, v29 + 16);
      v24 = core::result::Result<T,E>::unwrap(&v38, &off_3A41C0);
      v26 = v25 & 1;
      v27 = *(unsigned __int8 *)(v24 + 532);
      if ( v27 != 158 )
        break;
      core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<firecracker::metrics::PeriodicMetrics>>(v24, v26);
    }
    if ( *(_BYTE *)(v24 + 532) )
    {
      *(_BYTE *)a1 = 28;
      *(_BYTE *)(a1 + 1) = v27;
      core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<firecracker::metrics::PeriodicMetrics>>(v24, v26);
    }
    else
    {
      core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<firecracker::metrics::PeriodicMetrics>>(v24, v26);
      *(_BYTE *)a1 = 29;
    }
    core::ptr::drop_in_place<alloc::sync::Arc<std::sync::poison::mutex::Mutex<vmm::Vmm>>>(&v29);
  }
  core::ptr::drop_in_place<alloc::sync::Arc<std::sync::poison::mutex::Mutex<firecracker::metrics::PeriodicMetrics>>>(&v33);
  return core::ptr::drop_in_place<event_manager::manager::EventManager<alloc::sync::Arc<std::sync::poison::mutex::Mutex<dyn event_manager::MutEventSubscriber>>>>(v44);
}