__int64 __fastcall alacritty::config::monitor::ConfigMonitor::shutdown(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rdx
  __int64 v3; // r15
  __int64 v4; // r14
  __int64 v5; // rax
  __int64 v7; // [rsp+0h] [rbp-A8h] BYREF
  __int64 v8; // [rsp+8h] [rbp-A0h]
  _BYTE v9[40]; // [rsp+10h] [rbp-98h] BYREF
  __int64 v10; // [rsp+38h] [rbp-70h]
  __int128 v11; // [rsp+48h] [rbp-60h] BYREF
  __int128 v12; // [rsp+58h] [rbp-50h]
  __int64 v13; // [rsp+68h] [rbp-40h]
  _QWORD v14[5]; // [rsp+80h] [rbp-28h] BYREF

  *(_QWORD *)v9 = 0LL;
  *(_QWORD *)&v9[8] = 8LL;
  *(_OWORD *)&v9[16] = 0LL;
  v9[32] = 5;
  notify_types::event::Event::set_info(&v11, v9, aShutdown_0, 8LL);
  v10 = v13;
  *(_OWORD *)&v9[8] = v11;
  *(_OWORD *)&v9[24] = v12;
  *(_QWORD *)v9 = 6LL;
  std::sync::mpmc::Sender<T>::send(&v11, *(_QWORD *)(a1 + 16), *(_QWORD *)(a1 + 24), v9);
  core::ptr::drop_in_place<core::result::Result<(),std::sync::mpsc::SendError<core::result::Result<notify_types::event::Event,notify::error::Error>>>>(&v11);
  *(_QWORD *)&v9[16] = *(_QWORD *)(a1 + 48);
  *(_OWORD *)v9 = *(_OWORD *)(a1 + 32);
  v1 = std::thread::JoinInner<T>::join(v9);
  v3 = v1;
  v4 = v2;
  if ( v1 )
  {
    v7 = v1;
    v8 = v2;
    if ( (unsigned __int64)core::sync::atomic::atomic_load(&log::MAX_LOG_LEVEL_FILTER, 0LL) >= 2 )
    {
      v14[0] = &v7;
      v14[1] = <alloc::boxed::Box<T,A> as core::fmt::Debug>::fmt;
      *(_QWORD *)v9 = &off_881960;
      *(_QWORD *)&v9[8] = 1LL;
      *(_QWORD *)&v9[32] = 0LL;
      *(_QWORD *)&v9[16] = v14;
      *(_QWORD *)&v9[24] = 1LL;
      v5 = log::__private_api::loc(&off_881970);
      *(_QWORD *)&v11 = aAlacrittyConfi;
      *((_QWORD *)&v11 + 1) = 26LL;
      *(_QWORD *)&v12 = aAlacrittyConfi;
      *((_QWORD *)&v12 + 1) = 26LL;
      v13 = v5;
      log::__private_api::log(v9, 2LL, &v11);
      v3 = v7;
      v4 = v8;
    }
    core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(v3, v4);
  }
  else
  {
    core::ptr::drop_in_place<core::option::Option<alloc::boxed::Box<dyn core::error::Error>>>(0LL, v2);
  }
  return core::ptr::drop_in_place<std::sync::mpsc::Sender<core::result::Result<notify_types::event::Event,notify::error::Error>>>(a1 + 16);
}