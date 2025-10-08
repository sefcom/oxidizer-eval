__int64 __fastcall uu_sort::merge::replace_output_file_in_input_files(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  __int64 v7; // r12
  __int64 v8; // r13
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rbx
  int v13; // [rsp+Ch] [rbp-13Ch] BYREF
  __int128 v14; // [rsp+10h] [rbp-138h] BYREF
  __int64 v15; // [rsp+20h] [rbp-128h]
  _BYTE v16[24]; // [rsp+28h] [rbp-120h] BYREF
  __int128 v17; // [rsp+40h] [rbp-108h] BYREF
  __int128 v18; // [rsp+50h] [rbp-F8h]
  __int128 v19; // [rsp+80h] [rbp-C8h] BYREF
  __int64 v20; // [rsp+90h] [rbp-B8h]
  __int64 v21; // [rsp+A0h] [rbp-A8h]
  _QWORD v22[3]; // [rsp+A8h] [rbp-A0h] BYREF
  __int128 v23; // [rsp+C0h] [rbp-88h]
  __int64 v24; // [rsp+D0h] [rbp-78h]
  __int128 v25; // [rsp+E0h] [rbp-68h]
  __int64 v26; // [rsp+F0h] [rbp-58h]
  __int128 v27; // [rsp+100h] [rbp-48h]
  __int64 v28; // [rsp+110h] [rbp-38h]

  *(_QWORD *)&v14 = 0x8000000000000000LL;
  if ( !a3 )
  {
    *(_QWORD *)&v19 = 0x8000000000000001LL;
    goto LABEL_16;
  }
  std::fs::canonicalize(&v17, a3, a4);
  v20 = v18;
  v19 = v17;
  if ( (__int64)v17 < (__int64)0x8000000000000002LL )
  {
LABEL_16:
    core::ptr::drop_in_place<core::option::Option<core::result::Result<std::path::PathBuf,std::io::error::Error>>>(&v19);
    v11 = 0LL;
    goto LABEL_20;
  }
  v24 = v20;
  v23 = v19;
  if ( !a2 )
  {
    v11 = 0LL;
    goto LABEL_19;
  }
  v21 = a5;
  v7 = *((_QWORD *)&v23 + 1);
  v8 = v24;
  v9 = 24 * a2;
  while ( 1 )
  {
    std::fs::canonicalize(v22, *(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 16));
    if ( v22[0] != 0x8000000000000000LL )
      break;
    core::ptr::drop_in_place<core::result::Result<std::path::PathBuf,std::io::error::Error>>(v22);
LABEL_6:
    a1 += 24LL;
    v9 -= 24LL;
    if ( !v9 )
    {
      v11 = 0LL;
      goto LABEL_19;
    }
  }
  if ( !(unsigned __int8)<std::path::PathBuf as core::cmp::PartialEq>::eq(v22[1], v22[2], v7, v8) )
    goto LABEL_14;
  if ( (_QWORD)v14 != 0x8000000000000000LL )
  {
    <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(&v17, *((_QWORD *)&v14 + 1), v15);
    v26 = v18;
    v25 = v17;
    core::ptr::drop_in_place<std::ffi::os_str::OsString>(a1);
    *(_QWORD *)(a1 + 16) = v26;
    *(_OWORD *)a1 = v25;
LABEL_14:
    core::ptr::drop_in_place<std::path::PathBuf>(v22);
    goto LABEL_6;
  }
  uu_sort::tmp_dir::TmpDirWrapper::next_file(&v17, v21);
  if ( *((_QWORD *)&v17 + 1) == 0x8000000000000000LL )
  {
    v11 = v18;
    core::ptr::drop_in_place<std::path::PathBuf>(v22);
    goto LABEL_19;
  }
  v13 = v17;
  *(_QWORD *)v16 = *((_QWORD *)&v17 + 1);
  *(_OWORD *)&v16[8] = v18;
  if ( (std::fs::copy(v22, v16) & 1) == 0 )
  {
    <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(&v17, *(_QWORD *)&v16[8], *(_QWORD *)&v16[16]);
    v28 = v18;
    v27 = v17;
    core::ptr::drop_in_place<std::ffi::os_str::OsString>(a1);
    *(_QWORD *)(a1 + 16) = v28;
    *(_OWORD *)a1 = v27;
    *(_QWORD *)&v18 = *(_QWORD *)&v16[16];
    v17 = *(_OWORD *)v16;
    core::ptr::drop_in_place<core::option::Option<std::path::PathBuf>>(&v14);
    v15 = v18;
    v14 = v17;
    core::ptr::drop_in_place<std::fs::File>(&v13);
    goto LABEL_6;
  }
  *(_QWORD *)&v17 = 0x8000000000000003LL;
  *((_QWORD *)&v17 + 1) = v10;
  v11 = alloc::boxed::Box<T>::new(&v17);
  core::ptr::drop_in_place<std::path::PathBuf>(v16);
  core::ptr::drop_in_place<std::fs::File>(&v13);
LABEL_19:
  core::ptr::drop_in_place<std::path::PathBuf>(&v19);
LABEL_20:
  core::ptr::drop_in_place<core::option::Option<std::path::PathBuf>>(&v14);
  return v11;
}