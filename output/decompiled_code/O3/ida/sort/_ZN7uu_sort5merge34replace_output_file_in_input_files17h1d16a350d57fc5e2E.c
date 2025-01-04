        __int64 a5)
{
  signed __int64 v7; // rdx
  signed __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rbp
  unsigned int v12; // r12d
  __int64 v13; // rdx
  __int64 v14; // rbx
  __int128 v16; // [rsp+0h] [rbp-178h] BYREF
  __int64 v17; // [rsp+10h] [rbp-168h]
  __int128 v18; // [rsp+20h] [rbp-158h] BYREF
  __int64 v19; // [rsp+30h] [rbp-148h]
  __int128 v20; // [rsp+40h] [rbp-138h] BYREF
  __int128 v21; // [rsp+50h] [rbp-128h]
  __int128 v22; // [rsp+88h] [rbp-F0h] BYREF
  __int64 v23; // [rsp+98h] [rbp-E0h]
  __int128 v24; // [rsp+A0h] [rbp-D8h] BYREF
  __int64 v25; // [rsp+B0h] [rbp-C8h]
  _BYTE v26[24]; // [rsp+B8h] [rbp-C0h] BYREF
  __int128 v27; // [rsp+D0h] [rbp-A8h] BYREF
  __int64 v28; // [rsp+E0h] [rbp-98h]
  __int128 v29; // [rsp+F0h] [rbp-88h]
  __int64 v30; // [rsp+100h] [rbp-78h]
  __int128 v31; // [rsp+110h] [rbp-68h]
  __int64 v32; // [rsp+120h] [rbp-58h]
  unsigned __int64 v33; // [rsp+128h] [rbp-50h]
  signed __int64 v34; // [rsp+130h] [rbp-48h]
  _QWORD v35[8]; // [rsp+138h] [rbp-40h] BYREF

  *(_QWORD *)&v18 = 0x8000000000000000LL;
  if ( !a3 )
  {
LABEL_23:
    core::ptr::drop_in_place<core::option::Option<std::path::PathBuf>>(&v18);
    return 0LL;
  }
  std::fs::canonicalize(&v20, a3, a4);
  v17 = v21;
  v16 = v20;
  v7 = v20;
  v8 = 0x8000000000000002LL;
  v9 = v20;
  if ( (__int64)v20 < (__int64)0x8000000000000002LL )
  {
LABEL_18:
    if ( v9 == 0x8000000000000000LL )
    {
      core::ptr::drop_in_place<core::result::Result<std::path::PathBuf,std::io::error::Error>>(&v16);
    }
    else if ( v9 != 0x8000000000000001LL && v7 < v8 )
    {
      core::ptr::drop_in_place<std::path::PathBuf>(&v16);
    }
    goto LABEL_23;
  }
  v33 = 0x8000000000000002LL;
  v34 = v20;
  v28 = v17;
  v27 = v16;
  v35[0] = a1;
  v35[1] = a1 + 24 * a2;
  v10 = <core::slice::iter::IterMut<T> as core::iter::traits::iterator::Iterator>::next(v35);
  if ( !v10 )
  {
LABEL_17:
    core::ptr::drop_in_place<std::path::PathBuf>(&v27);
    v9 = v16;
    v7 = v34;
    v8 = v33;
    goto LABEL_18;
  }
  v11 = v10;
  while ( 1 )
  {
    std::fs::canonicalize(&v22, *(_QWORD *)(v11 + 8), *(_QWORD *)(v11 + 16));
    if ( (_QWORD)v22 != 0x8000000000000000LL )
      break;
LABEL_5:
    core::ptr::drop_in_place<core::result::Result<std::path::PathBuf,std::io::error::Error>>(&v22);
LABEL_6:
    v11 = <core::slice::iter::IterMut<T> as core::iter::traits::iterator::Iterator>::next(v35);
    if ( !v11 )
      goto LABEL_17;
  }
  v24 = v22;
  v25 = v23;
  if ( !(unsigned __int8)<std::path::PathBuf as core::cmp::PartialEq>::eq(
                           *((_QWORD *)&v22 + 1),
                           v23,
                           *((_QWORD *)&v27 + 1),
                           v28) )
    goto LABEL_14;
  if ( (_QWORD)v18 != 0x8000000000000000LL )
  {
    <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(&v20, &v18);
    v30 = v21;
    v29 = v20;
    core::ptr::drop_in_place<std::ffi::os_str::OsString>(v11);
    *(_QWORD *)(v11 + 16) = v30;
    *(_OWORD *)v11 = v29;
LABEL_14:
    core::ptr::drop_in_place<std::path::PathBuf>(&v24);
LABEL_15:
    if ( (_QWORD)v22 != 0x8000000000000000LL )
      goto LABEL_6;
    goto LABEL_5;
  }
  uu_sort::tmp_dir::TmpDirWrapper::next_file(&v20, a5);
  if ( *((_QWORD *)&v20 + 1) == 0x8000000000000000LL )
  {
    v14 = v21;
    core::ptr::drop_in_place<std::path::PathBuf>(&v24);
    goto LABEL_27;
  }
  v12 = v20;
  *(_QWORD *)v26 = *((_QWORD *)&v20 + 1);
  *(_OWORD *)&v26[8] = v21;
  *(_QWORD *)&v21 = v25;
  v20 = v24;
  if ( !std::fs::copy(&v20, v26) )
  {
    <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(&v20, v26);
    v32 = v21;
    v31 = v20;
    core::ptr::drop_in_place<std::ffi::os_str::OsString>(v11);
    *(_QWORD *)(v11 + 16) = v32;
    *(_OWORD *)v11 = v31;
    *(_QWORD *)&v21 = *(_QWORD *)&v26[16];
    v20 = *(_OWORD *)v26;
    core::ptr::drop_in_place<core::option::Option<std::path::PathBuf>>(&v18);
    v19 = v21;
    v18 = v20;
    core::ptr::drop_in_place<std::fs::File>(v12);
    goto LABEL_15;
  }
  LOBYTE(v20) = 4;
  *((_QWORD *)&v20 + 1) = v13;
  v14 = alloc::boxed::Box<T>::new(&v20);
  core::ptr::drop_in_place<std::path::PathBuf>(v26);
  core::ptr::drop_in_place<std::fs::File>(v12);
LABEL_27:
  if ( (_QWORD)v22 == 0x8000000000000000LL )
    core::ptr::drop_in_place<core::result::Result<std::path::PathBuf,std::io::error::Error>>(&v22);
  core::ptr::drop_in_place<std::path::PathBuf>(&v27);
  if ( (_QWORD)v16 == 0x8000000000000000LL )
    core::ptr::drop_in_place<core::result::Result<std::path::PathBuf,std::io::error::Error>>(&v16);
  core::ptr::drop_in_place<core::option::Option<std::path::PathBuf>>(&v18);
  return v14;
}
