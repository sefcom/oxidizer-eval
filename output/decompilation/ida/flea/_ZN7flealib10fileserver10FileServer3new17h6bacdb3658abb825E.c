__int64 __fastcall flealib::fileserver::FileServer::new(__int64 a1)
{
  __int128 v2; // [rsp+8h] [rbp-40h] BYREF
  __int64 v3; // [rsp+18h] [rbp-30h]
  _BYTE v4[8]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v5; // [rsp+28h] [rbp-20h]
  __int64 v6; // [rsp+30h] [rbp-18h]

  std::env::current_dir(&v2);
  core::result::Result<T,E>::unwrap(v4, &v2);
  std::sys::os_str::bytes::Slice::to_str(&v2, v5, v6);
  if ( (v2 & 1) != 0 )
    core::option::unwrap_failed(&off_709898);
  <T as alloc::slice::hack::ConvertVec>::to_vec(&v2, *((_QWORD *)&v2 + 1), v3);
  *(_QWORD *)(a1 + 16) = v3;
  *(_OWORD *)a1 = v2;
  core::ptr::drop_in_place<std::path::PathBuf>(v4);
  return a1;
}