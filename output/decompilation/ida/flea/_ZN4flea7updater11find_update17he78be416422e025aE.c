_QWORD *__fastcall flea::updater::find_update(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v8; // [rsp+0h] [rbp-E8h] BYREF
  __int64 v9; // [rsp+8h] [rbp-E0h]
  __int64 v10; // [rsp+10h] [rbp-D8h]
  __int128 v11; // [rsp+18h] [rbp-D0h] BYREF
  __int64 v12; // [rsp+28h] [rbp-C0h]

  std::sys::os_str::bytes::Slice::to_owned(&v8);
  std::path::PathBuf::push(&v8, a4, a5);
  std::fs::metadata(&v11, v9, v10);
  LODWORD(a5) = v11;
  core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&v11);
  if ( (_DWORD)a5 == 2 )
  {
    *a1 = 0x8000000000000000LL;
  }
  else
  {
    std::sys::os_str::bytes::Slice::to_str(&v11, v9, v10);
    if ( (v11 & 1) != 0 )
      core::option::unwrap_failed(&off_6F6268);
    <T as alloc::slice::hack::ConvertVec>::to_vec(&v11, *((_QWORD *)&v11 + 1), v12);
    a1[2] = v12;
    *(_OWORD *)a1 = v11;
  }
  core::ptr::drop_in_place<std::path::PathBuf>(&v8);
  return a1;
}