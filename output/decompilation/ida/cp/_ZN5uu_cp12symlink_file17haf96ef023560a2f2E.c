unsigned __int64 __fastcall uu_cp::symlink_file(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v9; // r13
  const char *filename; // rax
  __int64 v11; // rdx
  const char *v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rdx
  unsigned __int64 result; // rax
  __int64 v17; // [rsp+18h] [rbp-1E0h]
  unsigned __int64 v18; // [rsp+28h] [rbp-1D0h] BYREF
  __int128 v19; // [rsp+30h] [rbp-1C8h]
  _QWORD v20[4]; // [rsp+40h] [rbp-1B8h] BYREF
  _QWORD v21[3]; // [rsp+60h] [rbp-198h] BYREF
  char v22; // [rsp+78h] [rbp-180h]
  _QWORD v23[3]; // [rsp+80h] [rbp-178h] BYREF
  char v24; // [rsp+98h] [rbp-160h]
  char **v25; // [rsp+A0h] [rbp-158h] BYREF
  _QWORD src[18]; // [rsp+A8h] [rbp-150h] BYREF
  _BYTE dest[192]; // [rsp+138h] [rbp-C0h] BYREF

  v9 = std::os::unix::fs::symlink(a2, a3, a4, a5);
  v17 = a5;
  filename = (const char *)uucore::features::fs::get_filename(a4, a5);
  if ( !filename )
    v11 = 17LL;
  v12 = aInvalidFileNam;
  if ( !filename )
    filename = aInvalidFileNam;
  v21[0] = 0LL;
  v21[1] = filename;
  v21[2] = v11;
  v22 = 1;
  v13 = uucore::features::fs::get_filename(a2, a3);
  if ( v13 )
    v12 = (const char *)v13;
  else
    v14 = 17LL;
  v23[0] = 0LL;
  v23[1] = v12;
  v23[2] = v14;
  v24 = 1;
  v20[0] = v21;
  v20[1] = <os_display::Quoted as core::fmt::Display>::fmt;
  v20[2] = v23;
  v20[3] = <os_display::Quoted as core::fmt::Display>::fmt;
  v25 = &off_15EBB8;
  src[0] = 2LL;
  src[3] = 0LL;
  src[1] = v20;
  src[2] = 2LL;
  core::option::Option<T>::map_or_else(&v18, &v25);
  if ( v9 )
  {
    result = v18;
    *(_OWORD *)(a1 + 16) = v19;
    *(_QWORD *)a1 = 0x8000000000000002LL;
    *(_QWORD *)(a1 + 8) = result;
    *(_QWORD *)(a1 + 32) = v9;
  }
  else
  {
    core::ptr::drop_in_place<<core::result::Result<(),std::io::error::Error> as quick_error::ResultExt<(),std::io::error::Error>>::context<alloc::string::String>::{{closure}}>(&v18);
    uucore::features::fs::FileInformation::from_path(&v25, a4, v17, 0LL);
    if ( ((unsigned __int8)v25 & 1) == 0 )
    {
      memcpy(dest, src, 0x90uLL);
      hashbrown::map::HashMap<K,V,S,A>::insert(a6, dest);
    }
    core::ptr::drop_in_place<core::result::Result<uucore::features::fs::FileInformation,std::io::error::Error>>(&v25);
    result = 0x800000000000000CLL;
    *(_QWORD *)a1 = 0x800000000000000CLL;
  }
  return result;
}