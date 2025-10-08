__int64 __fastcall fd::exec::command::OutputBuffer::write(_QWORD *a1)
{
  __int64 v1; // r15
  __int64 v2; // rsi
  char v3; // dl
  __int64 v4; // r14
  __int64 v5; // rbx
  _QWORD *v6; // rbx
  unsigned __int8 v8; // [rsp+Fh] [rbp-79h]
  __int64 v9; // [rsp+10h] [rbp-78h] BYREF
  __int64 v10; // [rsp+18h] [rbp-70h] BYREF
  _QWORD *v11; // [rsp+20h] [rbp-68h]
  __int64 v12; // [rsp+28h] [rbp-60h]
  __int64 v13; // [rsp+30h] [rbp-58h] BYREF
  void *v14; // [rsp+38h] [rbp-50h] BYREF
  _QWORD v15[9]; // [rsp+40h] [rbp-48h] BYREF

  v1 = a1[2];
  if ( !v1 )
    return core::ptr::drop_in_place<fd::exec::command::OutputBuffer>(a1);
  v2 = a1[3];
  v11 = a1;
  std::sync::poison::mutex::Mutex<T>::lock(v15, v2);
  v12 = core::result::Result<T,E>::unwrap(v15, &off_402178);
  v8 = v3 & 1;
  v13 = std::io::stdio::stdout();
  v14 = &std::io::stdio::stderr::INSTANCE;
  v9 = std::io::stdio::Stdout::lock(&v13);
  v10 = std::io::stdio::Stdout::lock(&v14);
  v4 = a1[1];
  v5 = 0LL;
  do
  {
    v15[0] = <std::io::stdio::StdoutLock as std::io::Write>::write_all(
               &v9,
               *(_QWORD *)(v4 + v5 + 8),
               *(_QWORD *)(v4 + v5 + 16));
    core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(v15);
    v15[0] = <std::io::stdio::StderrLock as std::io::Write>::write_all(
               &v10,
               *(_QWORD *)(v4 + v5 + 32),
               *(_QWORD *)(v4 + v5 + 40));
    core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(v15);
    v5 += 48LL;
  }
  while ( 48 * v1 != v5 );
  v6 = v11;
  core::ptr::drop_in_place<std::io::stdio::StderrLock>(v10);
  core::ptr::drop_in_place<std::io::stdio::StderrLock>(v9);
  core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<crossbeam_channel::flavors::zero::Inner>>(v12, v8);
  return core::ptr::drop_in_place<fd::exec::command::OutputBuffer>(v6);
}