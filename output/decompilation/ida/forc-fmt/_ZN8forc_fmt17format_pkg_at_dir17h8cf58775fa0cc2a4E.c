__int64 __fastcall forc_fmt::format_pkg_at_dir(int a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int8 v4; // bl
  char v5; // r14
  __int64 v6; // rbx
  __int128 v8; // [rsp+0h] [rbp-108h] BYREF
  __int64 v9; // [rsp+10h] [rbp-F8h]
  __int128 v10; // [rsp+18h] [rbp-F0h]
  char v11; // [rsp+38h] [rbp-D0h] BYREF
  unsigned __int8 v12; // [rsp+39h] [rbp-CFh]
  __int64 v13; // [rsp+40h] [rbp-C8h]
  int v14; // [rsp+4Ch] [rbp-BCh]
  __int128 v15; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v16; // [rsp+60h] [rbp-A8h]
  __int64 v17; // [rsp+70h] [rbp-98h]
  __int128 v18; // [rsp+78h] [rbp-90h] BYREF
  __int64 v19; // [rsp+88h] [rbp-80h]
  __int128 v20; // [rsp+90h] [rbp-78h] BYREF
  __int64 v21; // [rsp+A0h] [rbp-68h]
  _QWORD v22[3]; // [rsp+A8h] [rbp-60h] BYREF
  _BYTE v23[72]; // [rsp+C0h] [rbp-48h] BYREF

  v17 = a4;
  sway_utils::helpers::find_parent_dir_with_file(&v18);
  if ( __OFSUB__(0LL, (_QWORD)v18) )
  {
    *(_QWORD *)&v8 = &off_80A450;
    *((_QWORD *)&v8 + 1) = 1LL;
    v9 = 8LL;
    v10 = 0LL;
    return anyhow::__private::format_err(&v8);
  }
  <&str as alloc::string::SpecToString>::spec_to_string(&v8, *((_QWORD *)&v18 + 1), v19);
  v16 = v9;
  v15 = v8;
  std::path::Path::join(&v20, *((_QWORD *)&v8 + 1), v9, aForcToml, 9LL);
  v9 = v19;
  v8 = v18;
  ((void (__fastcall *)(_BYTE *, __int128 *))sway_utils::helpers::get_sway_files)(v23, &v8);
  <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v8, v23);
  <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(v22, &v8);
  v14 = a1;
  if ( v22[0] != 0x8000000000000000LL )
  {
    v4 = 0;
    while ( 1 )
    {
      forc_fmt::format_file((__int64)&v11, a1, (__int64)v22, v17);
      if ( v11 == 1 )
        break;
      v4 |= v12;
      <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(v22, &v8);
      if ( v22[0] == 0x8000000000000000LL )
        goto LABEL_7;
    }
    v6 = v13;
    core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<std::path::PathBuf>>(&v8);
    core::ptr::drop_in_place<std::path::PathBuf>(&v20);
    goto LABEL_13;
  }
  v4 = 0;
LABEL_7:
  core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<std::path::PathBuf>>(&v8);
  v5 = v14;
  v9 = v21;
  v8 = v20;
  forc_fmt::format_manifest((__int64)&v11, a1, (__int64)&v8);
  if ( v11 == 1 )
  {
    v6 = v13;
LABEL_13:
    core::ptr::drop_in_place<std::path::PathBuf>(&v15);
    return v6;
  }
  if ( (v5 & 1) != 0 && ((v12 | v4) & 1) != 0 )
  {
    *(_QWORD *)&v8 = &off_80A3E0;
    *((_QWORD *)&v8 + 1) = 1LL;
    v9 = 8LL;
    v10 = 0LL;
    v6 = anyhow::__private::format_err(&v8);
    goto LABEL_13;
  }
  core::ptr::drop_in_place<std::path::PathBuf>(&v15);
  return 0LL;
}