__int64 __fastcall uu_tail::follow::watch::WatcherRx::watch_with_parent(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r15
  __int64 v7; // r12
  __int128 v8; // xmm0
  __int64 v9; // rbx
  char is_absolute; // al
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r15
  __int64 v14; // r13
  _QWORD *v15; // r12
  _BYTE v17[24]; // [rsp+0h] [rbp-B8h] BYREF
  __int128 v18; // [rsp+20h] [rbp-98h] BYREF
  _QWORD *v19; // [rsp+30h] [rbp-88h]
  __int64 v20; // [rsp+38h] [rbp-80h]
  __int64 v21; // [rsp+40h] [rbp-78h]
  __int128 v22; // [rsp+50h] [rbp-68h] BYREF
  _QWORD *v23; // [rsp+60h] [rbp-58h]
  _QWORD v24[2]; // [rsp+68h] [rbp-50h] BYREF
  __int128 v25; // [rsp+78h] [rbp-40h] BYREF
  _QWORD *v26; // [rsp+88h] [rbp-30h]

  std::path::Path::to_path_buf(v17, a3, a4);
  if ( (unsigned __int8)std::path::Path::is_file(*(_QWORD *)&v17[8], *(_QWORD *)&v17[16]) )
  {
    v4 = std::path::Path::parent(*(_QWORD *)&v17[8], *(_QWORD *)&v17[16]);
    v6 = v4;
    if ( !v4 )
    {
      v22 = *(_OWORD *)&v17[8];
      v24[0] = &v22;
      v24[1] = <std::path::Display as core::fmt::Display>::fmt;
      *(_QWORD *)&v18 = &off_1BBD68;
      *((_QWORD *)&v18 + 1) = 1LL;
      v21 = 0LL;
      v19 = v24;
      v20 = 1LL;
      core::option::Option<T>::map_or_else(&v25, &v18);
      LODWORD(v20) = 1;
      v18 = v25;
      v19 = v26;
      v9 = alloc::boxed::Box<T>::new(&v18);
      goto LABEL_13;
    }
    v7 = v5;
    if ( (unsigned __int8)std::path::Path::is_dir(v4, v5) )
    {
      std::path::Path::to_path_buf(&v18, v6, v7);
      core::ptr::drop_in_place<std::path::PathBuf>(v17);
      *(_QWORD *)&v17[16] = v19;
      v8 = v18;
    }
    else
    {
      std::sys::os_str::bytes::Slice::to_owned(&v18, asc_29816, 1LL);
      v23 = v19;
      v22 = v18;
      core::ptr::drop_in_place<std::path::PathBuf>(v17);
      *(_QWORD *)&v17[16] = v23;
      v8 = v22;
    }
    *(_OWORD *)v17 = v8;
  }
  is_absolute = std::path::Path::is_absolute(*(_QWORD *)&v17[8], *(_QWORD *)&v17[16]);
  v12 = *(_QWORD *)&v17[16];
  v11 = *(_QWORD *)&v17[8];
  if ( !is_absolute )
  {
    std::fs::canonicalize(&v18, *(_QWORD *)&v17[8], *(_QWORD *)&v17[16]);
    v13 = v18;
    if ( (_QWORD)v18 == 0x8000000000000000LL )
    {
      v9 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(*((_QWORD *)&v18 + 1));
      goto LABEL_13;
    }
    v14 = *((_QWORD *)&v18 + 1);
    v15 = v19;
    core::ptr::drop_in_place<std::path::PathBuf>(v17);
    *(_QWORD *)v17 = v13;
    v11 = v14;
    *(_QWORD *)&v17[8] = v14;
    v12 = (__int64)v15;
    *(_QWORD *)&v17[16] = v15;
  }
  v9 = uu_tail::follow::watch::WatcherRx::watch(a1, a2, v11, v12);
  if ( !v9 )
  {
    core::ptr::drop_in_place<std::path::PathBuf>(v17);
    return 0LL;
  }
LABEL_13:
  core::ptr::drop_in_place<std::path::PathBuf>(v17);
  return v9;
}
