__int64 __fastcall alacritty::config::monitor::ConfigMonitor::new(__int64 a1, __int128 *a2, _OWORD *a3)
{
  _OWORD *v3; // r15
  __int64 v5; // rdx
  __int64 v6; // r14
  __int64 v7; // r15
  unsigned __int64 i; // rbp
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // rsi
  __int64 v12; // r13
  __int64 v13; // rax
  __int64 v14; // rdx
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int64 result; // rax
  __int64 v18; // rax
  __int128 v20; // [rsp+18h] [rbp-1E0h] BYREF
  __int64 v21; // [rsp+28h] [rbp-1D0h]
  __int64 v22; // [rsp+30h] [rbp-1C8h]
  __int128 v23; // [rsp+38h] [rbp-1C0h] BYREF
  __int64 v24; // [rsp+48h] [rbp-1B0h]
  __int128 v25; // [rsp+50h] [rbp-1A8h] BYREF
  _QWORD v26[2]; // [rsp+60h] [rbp-198h] BYREF
  _QWORD v27[5]; // [rsp+70h] [rbp-188h] BYREF
  __m256i v28; // [rsp+98h] [rbp-160h] BYREF
  __int128 v29; // [rsp+B8h] [rbp-140h]
  __int64 v30; // [rsp+C8h] [rbp-130h]
  __m256i dest; // [rsp+D0h] [rbp-128h] BYREF
  __int128 v32; // [rsp+F0h] [rbp-108h]
  __int64 v33; // [rsp+100h] [rbp-F8h]
  __int128 v34; // [rsp+108h] [rbp-F0h]
  __int128 v35; // [rsp+118h] [rbp-E0h]
  __int64 v36; // [rsp+128h] [rbp-D0h]
  _QWORD v37[6]; // [rsp+180h] [rbp-78h] BYREF
  __int128 v38; // [rsp+1B0h] [rbp-48h] BYREF
  __int64 v39; // [rsp+1C0h] [rbp-38h]

  v3 = a3;
  if ( *((_QWORD *)a2 + 2) )
  {
    v22 = alacritty::config::monitor::ConfigMonitor::hash_paths(*((_QWORD *)a2 + 1));
    v21 = v5;
    alloc::vec::Vec<T,A>::retain(a2);
    v6 = *((_QWORD *)a2 + 2);
    if ( v6 )
    {
      v7 = 0LL;
      for ( i = 0LL; i != v6; ++i )
      {
        v9 = *((_QWORD *)a2 + 2);
        if ( i >= v9 )
          core::panicking::panic_bounds_check(i, v9, &off_881848);
        std::fs::canonicalize(
          &v23,
          *(_QWORD *)(*((_QWORD *)a2 + 1) + v7 + 8),
          *(_QWORD *)(*((_QWORD *)a2 + 1) + v7 + 16));
        if ( __OFSUB__(0LL, (_QWORD)v23) )
        {
          core::ptr::drop_in_place<core::result::Result<std::path::PathBuf,std::io::error::Error>>(&v23);
        }
        else
        {
          v10 = *((_QWORD *)a2 + 2);
          if ( i >= v10 )
            core::panicking::panic_bounds_check(i, v10, &off_881860);
          std::fs::symlink_metadata(&dest);
          if ( dest.m256i_i32[0] == 2 || (v34 & 0xF000) != 0xA000 )
          {
            v11 = *((_QWORD *)a2 + 2);
            if ( i >= v11 )
              core::panicking::panic_bounds_check(i, v11, &off_881890);
            v12 = *((_QWORD *)a2 + 1);
            core::mem::drop(v7 + v12);
            *(_QWORD *)(v12 + v7 + 16) = v24;
            *(_OWORD *)(v12 + v7) = v23;
          }
          else
          {
            alloc::vec::Vec<T,A>::push(a2, &v23, &off_881878);
          }
          core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&dest);
        }
        v7 += 24LL;
      }
    }
    v3 = a3;
    std::sync::mpmc::channel(&dest);
    v20 = *(_OWORD *)dest.m256i_i8;
    v25 = *(_OWORD *)&dest.m256i_u64[2];
    v13 = <std::sync::mpmc::Sender<T> as core::clone::Clone>::clone(dest.m256i_i64[0], dest.m256i_i64[1]);
    <notify::inotify::INotifyWatcher as notify::Watcher>::new(&v28, v13, v14, 1LL);
    if ( v28.m256i_i32[0] == 6 )
    {
      v33 = v28.m256i_i64[3];
      v32 = *(_OWORD *)&v28.m256i_u64[1];
      v35 = *a2;
      v36 = *((_QWORD *)a2 + 2);
      v34 = v25;
      v15 = a3[1];
      *(_OWORD *)dest.m256i_i8 = *a3;
      *(_OWORD *)&dest.m256i_u64[2] = v15;
      alacritty_terminal::thread::spawn_named(&v38, &dest);
      v16 = v20;
      *(_OWORD *)(a1 + 32) = v38;
      *(_QWORD *)(a1 + 48) = v39;
      *(_QWORD *)a1 = v22;
      result = v21;
      *(_QWORD *)(a1 + 8) = v21;
      *(_OWORD *)(a1 + 16) = v16;
      return result;
    }
    v33 = v30;
    v32 = v29;
    dest = v28;
    if ( core::sync::atomic::atomic_load(&log::MAX_LOG_LEVEL_FILTER, 0LL) )
    {
      v26[0] = &dest;
      v26[1] = <notify::error::Error as core::fmt::Display>::fmt;
      v37[0] = &off_881820;
      v37[1] = 1LL;
      v37[4] = 0LL;
      v37[2] = v26;
      v37[3] = 1LL;
      v18 = log::__private_api::loc(&off_881830);
      v27[0] = aAlacrittyConfi;
      v27[1] = 26LL;
      v27[2] = aAlacrittyConfi;
      v27[3] = 26LL;
      v27[4] = v18;
      log::__private_api::log(v37, 1LL, v27);
    }
    *(_QWORD *)a1 = 2LL;
    core::ptr::drop_in_place<notify::error::Error>(&dest);
    core::ptr::drop_in_place<std::sync::mpsc::Receiver<core::result::Result<notify_types::event::Event,notify::error::Error>>>(&v25);
    core::ptr::drop_in_place<std::sync::mpsc::Sender<core::result::Result<notify_types::event::Event,notify::error::Error>>>(&v20);
  }
  else
  {
    *(_QWORD *)a1 = 2LL;
  }
  core::ptr::drop_in_place<winit::event_loop::EventLoopProxy<alacritty::event::Event>>(v3);
  return core::ptr::drop_in_place<alloc::vec::Vec<std::path::PathBuf>>(a2);
}