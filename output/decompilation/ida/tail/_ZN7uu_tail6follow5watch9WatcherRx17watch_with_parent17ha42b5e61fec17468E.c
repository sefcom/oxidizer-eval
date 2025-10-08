__int64 __fastcall uu_tail::follow::watch::WatcherRx::watch_with_parent(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  _QWORD *v5; // r12
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r13
  __int64 v12; // rbp
  __int128 v13; // xmm0
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // r14
  _QWORD *v19; // r12
  __int128 v20; // kr00_16
  __int128 v22; // [rsp+0h] [rbp-C8h] BYREF
  _QWORD *v23; // [rsp+10h] [rbp-B8h]
  __int128 v24; // [rsp+20h] [rbp-A8h] BYREF
  _QWORD *v25; // [rsp+30h] [rbp-98h]
  __int64 v26; // [rsp+38h] [rbp-90h]
  __int64 v27; // [rsp+40h] [rbp-88h]
  __int128 v28; // [rsp+50h] [rbp-78h] BYREF
  _QWORD *v29; // [rsp+60h] [rbp-68h]
  _QWORD v30[2]; // [rsp+70h] [rbp-58h] BYREF
  __int128 v31; // [rsp+80h] [rbp-48h] BYREF
  _QWORD *v32; // [rsp+90h] [rbp-38h]

  std::path::Path::to_path_buf(&v22, a3, a4);
  v4 = *((_QWORD *)&v22 + 1);
  v5 = v23;
  if ( (unsigned __int8)std::path::Path::is_file(*((_QWORD *)&v22 + 1), v23) )
  {
    v6 = std::path::Path::parent(v4, v5);
    v11 = v6;
    if ( !v6 )
    {
      *(_QWORD *)&v28 = v4;
      *((_QWORD *)&v28 + 1) = v5;
      v30[0] = &v28;
      v30[1] = <std::path::Display as core::fmt::Display>::fmt;
      *(_QWORD *)&v24 = &off_173490;
      *((_QWORD *)&v24 + 1) = 1LL;
      v27 = 0LL;
      v25 = v30;
      v26 = 1LL;
      core::option::Option<T>::map_or_else(&v31, &v24, v7, v8, v9, v10);
      LODWORD(v26) = 1;
      v24 = v31;
      v25 = v32;
      v18 = alloc::boxed::Box<T>::new(&v24, &v24, v14, v15, v16, v17);
      goto LABEL_13;
    }
    v12 = v7;
    if ( (unsigned __int8)std::path::Path::is_dir(v6, v7) )
    {
      std::path::Path::to_path_buf(&v24, v11, v12);
      core::ptr::drop_in_place<std::path::PathBuf>(v22, v4);
      v23 = v25;
      v13 = v24;
    }
    else
    {
      <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v24, asc_24C62, 1LL);
      v29 = v25;
      v28 = v24;
      core::ptr::drop_in_place<std::path::PathBuf>(v22, v4);
      v23 = v29;
      v13 = v28;
    }
    v22 = v13;
  }
  v4 = *((_QWORD *)&v22 + 1);
  v19 = v23;
  if ( !(unsigned __int8)std::path::Path::is_absolute(*((_QWORD *)&v22 + 1), v23) )
  {
    std::fs::canonicalize(&v24, v4, v19);
    v20 = v24;
    if ( __OFSUB__(-(__int64)v24, 1LL) )
    {
      v18 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(*((_QWORD *)&v24 + 1));
      goto LABEL_13;
    }
    v19 = v25;
    core::ptr::drop_in_place<std::path::PathBuf>(v22, v4);
    v22 = v20;
    v23 = v19;
    v4 = *((_QWORD *)&v20 + 1);
  }
  v18 = uu_tail::follow::watch::WatcherRx::watch(a1, a2, v4, v19);
  if ( !v18 )
  {
    core::ptr::drop_in_place<std::path::PathBuf>(v22, v4);
    return 0LL;
  }
LABEL_13:
  core::ptr::drop_in_place<std::path::PathBuf>(v22, v4);
  return v18;
}