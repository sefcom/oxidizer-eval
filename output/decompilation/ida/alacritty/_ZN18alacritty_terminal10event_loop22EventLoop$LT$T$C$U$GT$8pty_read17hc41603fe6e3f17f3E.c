__int64 __fastcall alacritty_terminal::event_loop::EventLoop<T,U>::pty_read(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // rbp
  unsigned __int64 i; // r15
  unsigned __int64 v7; // rbx
  char v8; // al
  __int64 v9; // rdx
  __int64 v10; // r12
  char v11; // al
  __int64 v12; // r12
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // r12
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v19; // [rsp+0h] [rbp-78h] BYREF
  __int64 v20; // [rsp+8h] [rbp-70h]
  __int64 v21; // [rsp+10h] [rbp-68h]
  __int64 v22; // [rsp+18h] [rbp-60h]
  __int64 v23; // [rsp+20h] [rbp-58h]
  _QWORD v24[10]; // [rsp+28h] [rbp-50h] BYREF

  v21 = a4;
  v20 = *(_QWORD *)(a1 + 104) + 1792LL;
  ((void (*)(void))<parking_lot::raw_mutex::RawMutex as lock_api::mutex::RawMutex>::lock)();
  v19 = 0LL;
  v5 = <alacritty_terminal::tty::unix::Pty as alacritty_terminal::tty::EventedReadWrite>::reader(a1);
  v22 = a2;
  v23 = a2 + 32;
  for ( i = 0LL; i <= 0xFFFE; i += v7 )
  {
    v7 = 0LL;
    while ( 1 )
    {
      v8 = <std::fs::File as std::io::Read>::read(v5, v7 + a3, 0x100000 - v7);
      v10 = v9;
      if ( (v8 & 1) != 0 )
      {
        v24[0] = v9;
        v11 = std::io::error::Error::kind(v9);
        if ( v11 != 13 && v11 != 35 )
        {
          core::ptr::drop_in_place<core::option::Option<lock_api::mutex::MutexGuard<parking_lot::raw_mutex::RawMutex,()>>>(v19);
          goto LABEL_23;
        }
        if ( !v7 )
        {
          core::ptr::drop_in_place<std::io::error::Error>(v24);
          goto LABEL_20;
        }
        core::ptr::drop_in_place<std::io::error::Error>(v24);
        if ( v19 )
          goto LABEL_15;
      }
      else
      {
        if ( !(v9 | v7) )
          goto LABEL_20;
        v7 += v9;
        if ( v19 )
          goto LABEL_15;
      }
      v12 = *(_QWORD *)(a1 + 104) + 16LL;
      if ( (unsigned __int8)<parking_lot::raw_mutex::RawMutex as lock_api::mutex::RawMutex>::try_lock(v12) )
        break;
      if ( v7 >= 0x100000 )
      {
        v12 = *(_QWORD *)(a1 + 104) + 16LL;
        <parking_lot::raw_mutex::RawMutex as lock_api::mutex::RawMutex>::lock(v12);
        break;
      }
    }
    core::option::Option<T>::insert(&v19, v12);
LABEL_15:
    if ( v21 )
    {
      v13 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(
              0LL,
              v7,
              a3,
              0x100000LL,
              &off_877220);
      v14 = std::io::Write::write_all(v21, v13);
      core::result::Result<T,E>::unwrap(v14, &off_877238);
    }
    v15 = v19;
    v16 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(
            0LL,
            v7,
            a3,
            0x100000LL,
            &off_877250);
    vte::ansi::Processor<T>::advance(v23, v15 + 8, v16, v17);
  }
LABEL_20:
  if ( *(_QWORD *)(v22 + 48) < i )
  {
    v24[0] = 0x8000000000000009LL;
    <alacritty::event::EventProxy as alacritty_terminal::event::EventListener>::send_event(a1 + 152, v24);
  }
  core::ptr::drop_in_place<core::option::Option<lock_api::mutex::MutexGuard<parking_lot::raw_mutex::RawMutex,()>>>(v19);
  v10 = 0LL;
LABEL_23:
  core::ptr::drop_in_place<core::option::Option<lock_api::mutex::MutexGuard<parking_lot::raw_mutex::RawMutex,()>>>(v20);
  return v10;
}