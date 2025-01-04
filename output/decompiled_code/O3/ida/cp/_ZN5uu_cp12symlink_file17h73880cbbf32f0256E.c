__int64 __fastcall uu_cp::symlink_file(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v9; // r13
  void *filename; // rax
  __int64 v11; // rdx
  void *v12; // r12
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 result; // rax
  __int64 v17; // [rsp+10h] [rbp-1E8h]
  _QWORD v18[4]; // [rsp+28h] [rbp-1D0h] BYREF
  _QWORD v19[3]; // [rsp+48h] [rbp-1B0h] BYREF
  char v20; // [rsp+60h] [rbp-198h]
  _QWORD v21[3]; // [rsp+68h] [rbp-190h] BYREF
  char v22; // [rsp+80h] [rbp-178h]
  __int128 v23; // [rsp+88h] [rbp-170h] BYREF
  __int64 v24; // [rsp+98h] [rbp-160h]
  _BYTE src[152]; // [rsp+A0h] [rbp-158h] BYREF
  _BYTE dest[192]; // [rsp+138h] [rbp-C0h] BYREF

  v9 = std::os::unix::fs::symlink(a2, a3, a4, a5);
  v17 = a4;
  filename = (void *)uucore::features::fs::get_filename(a4, a5);
  if ( !filename )
    v11 = 17LL;
  v12 = &unk_2D170;
  if ( !filename )
    filename = &unk_2D170;
  v19[0] = 0LL;
  v19[1] = filename;
  v19[2] = v11;
  v20 = 1;
  v13 = uucore::features::fs::get_filename(a2, a3);
  if ( v13 )
    v12 = (void *)v13;
  else
    v14 = 17LL;
  v21[0] = 0LL;
  v21[1] = v12;
  v21[2] = v14;
  v22 = 1;
  v18[0] = v19;
  v18[1] = <os_display::Quoted as core::fmt::Display>::fmt;
  v18[2] = v21;
  v18[3] = <os_display::Quoted as core::fmt::Display>::fmt;
  *(_QWORD *)src = &off_1B5E88;
  *(_QWORD *)&src[8] = 2LL;
  *(_QWORD *)&src[32] = 0LL;
  *(_QWORD *)&src[16] = v18;
  *(_QWORD *)&src[24] = 2LL;
  core::option::Option<T>::map_or_else(&v23, src);
  *(_QWORD *)&src[16] = v24;
  *(_OWORD *)src = v23;
  if ( v9 )
  {
    result = *(_QWORD *)src;
    a1[2] = *(_QWORD *)&src[8];
    a1[3] = *(_QWORD *)&src[16];
    *a1 = 3LL;
    a1[1] = result;
    a1[4] = v9;
  }
  else
  {
    core::ptr::drop_in_place<<core::result::Result<(),std::io::error::Error> as quick_error::ResultExt<(),std::io::error::Error>>::context<alloc::string::String>::{{closure}}>(src);
    uucore::features::fs::FileInformation::from_path(src, v17, a5, 0LL);
    if ( !*(_QWORD *)src )
    {
      memcpy(dest, &src[8], 0x90uLL);
      hashbrown::map::HashMap<K,V,S,A>::insert(a6, dest);
    }
    result = core::ptr::drop_in_place<core::result::Result<uucore::features::fs::FileInformation,std::io::error::Error>>(src);
    *a1 = 13LL;
  }
  return result;
}
