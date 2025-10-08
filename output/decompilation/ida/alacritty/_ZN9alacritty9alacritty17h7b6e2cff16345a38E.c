__int64 __fastcall alacritty::alacritty(_BYTE *src)
{
  __int64 v1; // r14
  __int64 v2; // rax
  __int64 v3; // rax
  const char *v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rdx
  char v9; // cl
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned __int64 v12; // r14
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v16; // [rsp+0h] [rbp-1A38h] BYREF
  __int64 v17; // [rsp+8h] [rbp-1A30h] BYREF
  const char *v18; // [rsp+10h] [rbp-1A28h] BYREF
  __int64 (__fastcall *v19)(); // [rsp+18h] [rbp-1A20h]
  const char *v20; // [rsp+20h] [rbp-1A18h]
  __int64 v21; // [rsp+28h] [rbp-1A10h]
  __int64 v22; // [rsp+30h] [rbp-1A08h]
  unsigned __int64 v23; // [rsp+38h] [rbp-1A00h] BYREF
  __int128 v24; // [rsp+40h] [rbp-19F8h]
  _BYTE v25[24]; // [rsp+50h] [rbp-19E8h] BYREF
  _BYTE v26[24]; // [rsp+68h] [rbp-19D0h] BYREF
  __int128 v27; // [rsp+80h] [rbp-19B8h]
  _OWORD v28[3]; // [rsp+90h] [rbp-19A8h] BYREF
  __int64 v29; // [rsp+C0h] [rbp-1978h]
  __int128 v30; // [rsp+D0h] [rbp-1968h] BYREF
  __int128 v31; // [rsp+E0h] [rbp-1958h]
  __int128 v32; // [rsp+F0h] [rbp-1948h]
  __int64 v33; // [rsp+100h] [rbp-1938h]
  __int128 v34; // [rsp+450h] [rbp-15E8h]
  __int128 v35; // [rsp+460h] [rbp-15D8h]
  __int128 v36; // [rsp+470h] [rbp-15C8h]
  __int64 v37; // [rsp+480h] [rbp-15B8h]
  _OWORD v38[138]; // [rsp+4B0h] [rbp-1588h] BYREF
  __int64 v39; // [rsp+D50h] [rbp-CE8h] BYREF
  unsigned __int8 v40; // [rsp+D59h] [rbp-CDFh]
  char v41; // [rsp+D91h] [rbp-CA7h]
  __int64 v42; // [rsp+FF0h] [rbp-A48h]
  __int64 v43; // [rsp+FF8h] [rbp-A40h]
  _BYTE v44[57]; // [rsp+1130h] [rbp-908h] BYREF
  char v45; // [rsp+1169h] [rbp-8CFh]
  _QWORD v46[281]; // [rsp+1170h] [rbp-8C8h] BYREF

  *(_QWORD *)&v38[86] = 0LL;
  winit::event_loop::EventLoopBuilder<T>::build(v38, 0LL, 2LL);
  v30 = *(_OWORD *)((char *)v38 + 8);
  v31 = *(_OWORD *)((char *)&v38[1] + 8);
  v32 = *(_OWORD *)((char *)&v38[2] + 8);
  v33 = *((_QWORD *)&v38[3] + 1);
  if ( *(_QWORD *)&v38[0] == 3LL )
  {
    *(_QWORD *)&v38[3] = v33;
    v38[2] = v32;
    v38[1] = v31;
    v38[0] = v30;
    v1 = alloc::boxed::Box<T>::new(v38);
LABEL_3:
    core::ptr::drop_in_place<alacritty::cli::Options>(src);
    return v1;
  }
  memcpy(&v46[8], &v38[4], 0x860uLL);
  *(_OWORD *)&v46[1] = v30;
  *(_OWORD *)&v46[3] = v31;
  *(_OWORD *)&v46[5] = v32;
  v46[7] = v33;
  v46[0] = *(_QWORD *)&v38[0];
  winit::platform_impl::linux::EventLoop<T>::create_proxy(v38, v46);
  v31 = v38[1];
  v30 = v38[0];
  alacritty::logging::initialize(v38, src, &v30);
  core::result::Result<T,E>::expect(v26, v38);
  if ( (unsigned __int64)core::sync::atomic::atomic_load(&log::MAX_LOG_LEVEL_FILTER, 0LL) >= 3 )
  {
    *(_QWORD *)&v38[0] = &off_884480;
    *((_QWORD *)&v38[0] + 1) = 1LL;
    v38[1] = 8uLL;
    v2 = log::__private_api::loc(&off_8844D8);
    *(_QWORD *)&v30 = aAlacritty_1;
    *((_QWORD *)&v30 + 1) = 9LL;
    *(_QWORD *)&v31 = aAlacritty_1;
    *((_QWORD *)&v31 + 1) = 9LL;
    *(_QWORD *)&v32 = v2;
    log::__private_api::log(v38, 3LL, &v30);
  }
  if ( (unsigned __int64)core::sync::atomic::atomic_load(&log::MAX_LOG_LEVEL_FILTER, 0LL) >= 3 )
  {
    *(_QWORD *)&v38[0] = &off_884490;
    *((_QWORD *)&v38[0] + 1) = 1LL;
    *(_QWORD *)&v38[1] = &v16;
    *(_OWORD *)((char *)&v38[1] + 8) = 0LL;
    v3 = log::__private_api::loc(&off_8844F0);
    *(_QWORD *)&v30 = aAlacritty_1;
    *((_QWORD *)&v30 + 1) = 9LL;
    *(_QWORD *)&v31 = aAlacritty_1;
    *((_QWORD *)&v31 + 1) = 9LL;
    *(_QWORD *)&v32 = v3;
    log::__private_api::log(v38, 3LL, &v30);
  }
  if ( (unsigned __int64)core::sync::atomic::atomic_load(&log::MAX_LOG_LEVEL_FILTER, 0LL) >= 3 )
  {
    <winit::event_loop::EventLoop<T> as raw_window_handle::borrowed::HasDisplayHandle>::display_handle(v38, v46);
    core::result::Result<T,E>::unwrap(&v30, v38, &off_884508);
    v4 = aX11;
    if ( (_DWORD)v30 == 6 )
      v4 = aWayland;
    v23 = (unsigned __int64)v4;
    *(_QWORD *)&v24 = 4LL * ((_DWORD)v30 == 6) + 3;
    v18 = (const char *)&v23;
    v19 = <&T as core::fmt::Display>::fmt;
    *(_QWORD *)&v38[0] = &off_884048;
    *((_QWORD *)&v38[0] + 1) = 1LL;
    *(_QWORD *)&v38[2] = 0LL;
    *(_QWORD *)&v38[1] = &v18;
    *((_QWORD *)&v38[1] + 1) = 1LL;
    v5 = log::__private_api::loc(&off_884520);
    *(_QWORD *)&v30 = aAlacritty_1;
    *((_QWORD *)&v30 + 1) = 9LL;
    *(_QWORD *)&v31 = aAlacritty_1;
    *((_QWORD *)&v31 + 1) = 9LL;
    *(_QWORD *)&v32 = v5;
    log::__private_api::log(v38, 3LL, &v30);
  }
  alacritty::config::load(&v39, src);
  alacritty::log_config_path(v42, v43);
  core::sync::atomic::atomic_store(&log::MAX_LOG_LEVEL_FILTER, v39, 0LL, v6);
  alacritty_terminal::tty::setup_env();
  hashbrown::map::HashMap<K,V,S,A>::iter(v38, v44);
  while ( 1 )
  {
    v7 = <hashbrown::map::Iter<K,V> as core::iter::traits::iterator::Iterator>::next(v38);
    if ( !v7 )
      break;
    std::env::set_var(v7, v8);
  }
  v9 = v41;
  if ( v45 != 2 )
    v9 = v45;
  if ( (v9 & 1) != 0 )
  {
    winit::platform_impl::linux::EventLoop<T>::create_proxy(v38, v46);
    v31 = v38[1];
    v30 = v38[0];
    alacritty::ipc::spawn_ipc_socket(&v23, (__int64)src, &v30);
    v12 = v23;
    if ( v23 == 0x8000000000000000LL )
    {
      if ( src[482] )
      {
        v1 = alloc::boxed::Box<T>::new(v24, src, v10, v11);
        core::ptr::drop_in_place<alacritty::config::ui_config::UiConfig>(&v39);
        core::ptr::drop_in_place<core::option::Option<std::path::PathBuf>>(v26);
        core::ptr::drop_in_place<winit::event_loop::EventLoop<alacritty::event::Event>>(v46);
        goto LABEL_3;
      }
      v17 = v24;
      if ( (unsigned __int64)core::sync::atomic::atomic_load(&log::MAX_LOG_LEVEL_FILTER, 0LL) >= 2 )
      {
        v18 = (const char *)&v17;
        v19 = <std::io::error::Error as core::fmt::Debug>::fmt;
        *(_QWORD *)&v38[0] = &off_8844A0;
        *((_QWORD *)&v38[0] + 1) = 1LL;
        *(_QWORD *)&v38[2] = 0LL;
        *(_QWORD *)&v38[1] = &v18;
        *((_QWORD *)&v38[1] + 1) = 1LL;
        v13 = log::__private_api::loc(&off_884538);
        *(_QWORD *)&v30 = aAlacritty_1;
        *((_QWORD *)&v30 + 1) = 9LL;
        *(_QWORD *)&v31 = aAlacritty_1;
        *((_QWORD *)&v31 + 1) = 9LL;
        *(_QWORD *)&v32 = v13;
        log::__private_api::log(v38, 2LL, &v30);
      }
      core::ptr::drop_in_place<std::io::error::Error>(&v17);
    }
    else
    {
      v27 = v24;
    }
  }
  else
  {
    v12 = 0x8000000000000000LL;
  }
  core::option::Option<T>::filter(v25, v26, v40);
  v23 = v12;
  v24 = v27;
  memcpy(v38, src, 0x1F0uLL);
  alacritty::event::Processor::new((__int64)&v30, (__int64)&v39, v38, (__int64)v46);
  memcpy(v38, v46, sizeof(v38));
  v1 = alacritty::event::Processor::run((__int64)&v30, v38);
  v38[0] = v34;
  *(_QWORD *)&v38[3] = v37;
  v38[2] = v36;
  v38[1] = v35;
  *(_QWORD *)&v34 = 2LL;
  if ( LODWORD(v38[0]) == 2 )
  {
    core::ptr::drop_in_place<core::option::Option<alacritty::config::monitor::ConfigMonitor>>(v38);
  }
  else
  {
    v29 = *(_QWORD *)&v38[3];
    v28[2] = v38[2];
    v28[1] = v38[1];
    v28[0] = v38[0];
    alacritty::config::monitor::ConfigMonitor::shutdown((__int64)v28);
  }
  if ( (unsigned __int64)core::sync::atomic::atomic_load(&log::MAX_LOG_LEVEL_FILTER, 0LL) >= 3 )
  {
    *(_QWORD *)&v38[0] = &off_8844B0;
    *((_QWORD *)&v38[0] + 1) = 1LL;
    v38[1] = 8uLL;
    v14 = log::__private_api::loc(&off_884550);
    v18 = aAlacritty_1;
    v19 = (__int64 (__fastcall *)())byte_9;
    v20 = aAlacritty_1;
    v21 = 9LL;
    v22 = v14;
    log::__private_api::log(v38, 3LL, &v18);
  }
  core::ptr::drop_in_place<alacritty::event::Processor>(&v30);
  core::ptr::drop_in_place<alacritty::TemporaryFiles>(&v23);
  return v1;
}