__int64 __fastcall uu_cp::symlink_file(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v9; // r13
  void *filename; // rax
  __int64 v11; // rdx
  void *v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 result; // rax
  __int64 v17; // [rsp+18h] [rbp-1E0h]
  __int128 v18; // [rsp+28h] [rbp-1D0h] BYREF
  __int64 v19; // [rsp+38h] [rbp-1C0h]
  _QWORD v20[4]; // [rsp+40h] [rbp-1B8h] BYREF
  _QWORD v21[3]; // [rsp+60h] [rbp-198h] BYREF
  char v22; // [rsp+78h] [rbp-180h]
  _QWORD v23[3]; // [rsp+80h] [rbp-178h] BYREF
  char v24; // [rsp+98h] [rbp-160h]
  _BYTE src[152]; // [rsp+A0h] [rbp-158h] BYREF
  _BYTE dest[192]; // [rsp+138h] [rbp-C0h] BYREF

  v9 = std::os::unix::fs::symlink(a2, a3, a4, a5);
  v17 = a5;
  filename = (void *)uucore::features::fs::get_filename(a4, a5);
  if ( !filename )
    v11 = 17LL;
  v12 = &unk_2CF70;
  if ( !filename )
    filename = &unk_2CF70;
  v21[0] = 0LL;
  v21[1] = filename;
  v21[2] = v11;
  v22 = 1;
  v13 = uucore::features::fs::get_filename(a2, a3);
  if ( v13 )
    v12 = (void *)v13;
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
  *(_QWORD *)src = &off_1B57B8;
  *(_QWORD *)&src[8] = 2LL;
  *(_QWORD *)&src[32] = 0LL;
  *(_QWORD *)&src[16] = v20;
  *(_QWORD *)&src[24] = 2LL;
  core::option::Option<T>::map_or_else(&v18, src);
  *(_QWORD *)&src[16] = v19;
  *(_OWORD *)src = v18;
  if ( v9 )
  {
    result = v19;
    *(_QWORD *)(a1 + 24) = v19;
    *(_OWORD *)(a1 + 8) = v18;
    *(_QWORD *)a1 = 3LL;
    *(_QWORD *)(a1 + 32) = v9;
  }
  else
  {
    core::ptr::drop_in_place<<core::result::Result<(),std::io::error::Error> as quick_error::ResultExt<(),std::io::error::Error>>::context<alloc::string::String>::{{closure}}>(src);
    uucore::features::fs::FileInformation::from_path(src, a4, v17, 0LL);
    if ( !*(_QWORD *)src )
    {
      memcpy(dest, &src[8], 0x90uLL);
      hashbrown::map::HashMap<K,V,S,A>::insert(a6, dest);
    }
    core::ptr::drop_in_place<core::result::Result<uucore::features::fs::FileInformation,std::io::error::Error>>(src);
    result = a1;
    *(_QWORD *)a1 = 13LL;
  }
  return result;
}
