        __int64 a4)
{
  int v4; // ecx
  int v5; // r8d
  int v6; // r9d
  __int64 v8; // [rsp+0h] [rbp-5F8h]
  int v9; // [rsp+8h] [rbp-5F0h]
  void *v11; // [rsp+18h] [rbp-5E0h]
  __int64 v12; // [rsp+38h] [rbp-5C0h] BYREF
  __int64 v13; // [rsp+40h] [rbp-5B8h]
  __int64 v14; // [rsp+48h] [rbp-5B0h]
  __int128 v15; // [rsp+50h] [rbp-5A8h]
  __int64 v16; // [rsp+60h] [rbp-598h]
  __int128 v17; // [rsp+70h] [rbp-588h] BYREF
  __int64 v18; // [rsp+80h] [rbp-578h]
  _BYTE v19[24]; // [rsp+88h] [rbp-570h] BYREF
  __int128 v20; // [rsp+A0h] [rbp-558h]
  __int64 v21; // [rsp+B0h] [rbp-548h]
  int v22[178]; // [rsp+C0h] [rbp-538h] BYREF
  _QWORD src[13]; // [rsp+388h] [rbp-270h] BYREF
  _BYTE v24[104]; // [rsp+3F0h] [rbp-208h] BYREF
  int v25[26]; // [rsp+458h] [rbp-1A0h] BYREF
  int v26[4]; // [rsp+4C0h] [rbp-138h] BYREF
  __int64 v27; // [rsp+4D0h] [rbp-128h]
  _BYTE dest[104]; // [rsp+4E0h] [rbp-118h] BYREF
  _QWORD v29[3]; // [rsp+548h] [rbp-B0h] BYREF
  _QWORD v30[16]; // [rsp+560h] [rbp-98h] BYREF
  char v31; // [rsp+5E7h] [rbp-11h]

  v9 = a4;
  v31 = 0;
  core::iter::traits::iterator::Iterator::collect(&v12, a3, a4);
  uu_env::EnvAppData::process_all_string_arguments(v19, a2, &v12);
  <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(&v17, v19);
  if ( (_QWORD)v17 == 0x8000000000000000LL )
  {
    <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
      a1,
      *((_QWORD *)&v17 + 1),
      v18,
      &off_135DB0);
LABEL_8:
    v31 = 0;
    core::ptr::drop_in_place<alloc::vec::Vec<std::ffi::os_str::OsString>>(&v12);
    return a1;
  }
  v21 = v18;
  v20 = v17;
  v31 = 1;
  v16 = v18;
  v15 = v17;
  uu_env::uu_app(v22);
  v31 = 0;
  v27 = v16;
  *(_OWORD *)v26 = v15;
  clap_builder::builder::command::Command::try_get_matches_from(
    (int)v25,
    (int)v22,
    (int)v26,
    v4,
    v5,
    v6,
    v8,
    v9,
    a3,
    a1);
  core::result::Result<T,E>::map_err((unsigned int)v24, (unsigned int)v25);
  <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(src, v24);
  if ( src[0] == 0x8000000000000000LL )
  {
    <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
      v11,
      src[1],
      src[2],
      &off_135D98);
    goto LABEL_8;
  }
  memcpy(dest, src, sizeof(dest));
  v30[13] = v12;
  v30[14] = v13;
  v30[15] = v14;
  v29[0] = v12;
  v29[1] = v13;
  v29[2] = v14;
  memcpy(v30, dest, 0x68uLL);
  memcpy(v11, v29, 0x80uLL);
  v31 = 0;
  return a1;
}
