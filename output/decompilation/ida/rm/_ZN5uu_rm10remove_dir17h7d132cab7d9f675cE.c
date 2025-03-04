char __fastcall uu_rm::remove_dir(__int128 a1, __int64 a2)
{
  __int64 v3; // r14
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v20; // rdx
  char **v21; // [rsp+0h] [rbp-C8h] BYREF
  __int64 v22; // [rsp+8h] [rbp-C0h]
  __int64 **v23; // [rsp+10h] [rbp-B8h]
  __int64 v24; // [rsp+18h] [rbp-B0h]
  __int64 v25; // [rsp+20h] [rbp-A8h]
  __int64 v26; // [rsp+30h] [rbp-98h] BYREF
  __int128 v27; // [rsp+38h] [rbp-90h]
  char v28; // [rsp+48h] [rbp-80h]
  __int64 *v29; // [rsp+50h] [rbp-78h] BYREF
  __int128 v30; // [rsp+58h] [rbp-70h]
  __int64 (__fastcall *v31)(); // [rsp+68h] [rbp-60h]
  __int64 v32; // [rsp+70h] [rbp-58h] BYREF
  char v33; // [rsp+78h] [rbp-50h]
  _QWORD v34[2]; // [rsp+80h] [rbp-48h] BYREF
  __int64 v35; // [rsp+90h] [rbp-38h] BYREF
  char v36; // [rsp+98h] [rbp-30h]

  v3 = a1;
  if ( !(unsigned __int8)uu_rm::prompt_dir((__int64 (__fastcall *)())a1, *((__int64 *)&a1 + 1), *(_BYTE *)(a2 + 6)) )
    return 0;
  std::fs::read_dir(&v32, a1, *((_QWORD *)&a1 + 1));
  if ( v33 != 2 )
  {
    v35 = v32;
    v36 = v33;
    if ( !*(_WORD *)(a2 + 3) )
    {
      v26 = uucore::util_name(&v32, a1, v4, v5);
      *(_QWORD *)&v27 = v7;
      v29 = &v26;
      *(_QWORD *)&v30 = <&T as core::fmt::Display>::fmt;
      v21 = (char **)&unk_127970;
      v22 = 2LL;
      v25 = 0LL;
      v23 = &v29;
      v24 = 1LL;
      std::io::stdio::_eprint(&v21);
      v26 = 1LL;
      v27 = a1;
      v28 = 1;
      v29 = &v26;
      *(_QWORD *)&v30 = <os_display::Quoted as core::fmt::Display>::fmt;
      v21 = &off_127A50;
      v22 = 2LL;
      v25 = 0LL;
      v23 = &v29;
      v24 = 1LL;
      std::io::stdio::_eprint(&v21);
      goto LABEL_19;
    }
    <std::fs::ReadDir as core::iter::traits::iterator::Iterator>::next(&v21, &v35);
    if ( v21 )
    {
      core::ptr::drop_in_place<core::option::Option<core::result::Result<std::fs::DirEntry,std::io::error::Error>>>(&v21);
      v26 = uucore::util_name(&v21, &v35, v8, v9);
      *(_QWORD *)&v27 = v10;
      v29 = &v26;
      *(_QWORD *)&v30 = <&T as core::fmt::Display>::fmt;
      v21 = (char **)&unk_127970;
      v22 = 2LL;
      v25 = 0LL;
      v23 = &v29;
      v24 = 1LL;
      std::io::stdio::_eprint(&v21);
      v26 = 1LL;
      v27 = a1;
      v28 = 1;
      v29 = &v26;
      *(_QWORD *)&v30 = <os_display::Quoted as core::fmt::Display>::fmt;
      v21 = &off_127AA8;
      v22 = 2LL;
      v25 = 0LL;
      v23 = &v29;
      v24 = 1LL;
      std::io::stdio::_eprint(&v21);
      goto LABEL_19;
    }
    core::ptr::drop_in_place<core::option::Option<core::result::Result<std::fs::DirEntry,std::io::error::Error>>>(&v21);
    v11 = std::fs::remove_dir(a1, *((_QWORD *)&a1 + 1));
    if ( v11 )
    {
      v34[0] = v11;
      *(_QWORD *)&a1 = v11;
      if ( (unsigned __int8)std::io::error::Error::kind(v11) == 1 )
      {
        v26 = uucore::util_name(a1, *((_QWORD *)&a1 + 1), v12, v13);
        *(_QWORD *)&v27 = v14;
        v29 = &v26;
        *(_QWORD *)&v30 = <&T as core::fmt::Display>::fmt;
        v21 = (char **)&unk_127970;
        v22 = 2LL;
        v25 = 0LL;
        v23 = &v29;
        v24 = 1LL;
        std::io::stdio::_eprint(&v21);
        v26 = 1LL;
        *(_QWORD *)&v27 = v3;
        *((_QWORD *)&v27 + 1) = *((_QWORD *)&a1 + 1);
        v28 = 1;
        v29 = &v26;
        *(_QWORD *)&v30 = <os_display::Quoted as core::fmt::Display>::fmt;
        v21 = &off_1279B0;
        v22 = 2LL;
        v25 = 0LL;
        v23 = &v29;
        v24 = 1LL;
      }
      else
      {
        v26 = uucore::util_name(a1, *((_QWORD *)&a1 + 1), v12, v13);
        *(_QWORD *)&v27 = v20;
        v29 = &v26;
        *(_QWORD *)&v30 = <&T as core::fmt::Display>::fmt;
        v21 = (char **)&unk_127970;
        v22 = 2LL;
        v25 = 0LL;
        v23 = &v29;
        v24 = 1LL;
        std::io::stdio::_eprint(&v21);
        v26 = 1LL;
        *(_QWORD *)&v27 = v3;
        *((_QWORD *)&v27 + 1) = *((_QWORD *)&a1 + 1);
        v28 = 1;
        v29 = &v26;
        *(_QWORD *)&v30 = <os_display::Quoted as core::fmt::Display>::fmt;
        *((_QWORD *)&v30 + 1) = v34;
        v31 = <std::io::error::Error as core::fmt::Display>::fmt;
        v21 = &off_1279D0;
        v22 = 3LL;
        v25 = 0LL;
        v23 = &v29;
        v24 = 2LL;
      }
      std::io::stdio::_eprint(&v21);
      core::ptr::drop_in_place<std::io::error::Error>(v34);
LABEL_19:
      core::ptr::drop_in_place<std::fs::ReadDir>(&v35);
      if ( v33 != 2 )
        return 1;
LABEL_20:
      core::ptr::drop_in_place<core::result::Result<std::fs::ReadDir,std::io::error::Error>>(&v32);
      return 1;
    }
    if ( *(_BYTE *)(a2 + 5) )
    {
      uu_rm::normalize();
      v26 = 1LL;
      v27 = v30;
      v28 = 1;
      v34[0] = &v26;
      v34[1] = <os_display::Quoted as core::fmt::Display>::fmt;
      v21 = &off_127A88;
      v22 = 2LL;
      v25 = 0LL;
      v23 = (__int64 **)v34;
      v24 = 1LL;
      ((void (__fastcall *)(char ***, _QWORD, __int64, __int64, __int64, __int64))std::io::stdio::_print)(
        &v21,
        a1,
        v15,
        v16,
        v17,
        v18);
      core::ptr::drop_in_place<std::path::PathBuf>(&v29);
    }
    core::ptr::drop_in_place<std::fs::ReadDir>(&v35);
    if ( v33 == 2 )
      core::ptr::drop_in_place<core::result::Result<std::fs::ReadDir,std::io::error::Error>>(&v32);
    return 0;
  }
  v26 = uucore::util_name(&v32, a1, v4, v5);
  *(_QWORD *)&v27 = v6;
  v29 = &v26;
  *(_QWORD *)&v30 = <&T as core::fmt::Display>::fmt;
  v21 = (char **)&unk_127970;
  v22 = 2LL;
  v25 = 0LL;
  v23 = &v29;
  v24 = 1LL;
  std::io::stdio::_eprint(&v21);
  v26 = 1LL;
  v27 = a1;
  v28 = 1;
  v29 = &v26;
  *(_QWORD *)&v30 = <os_display::Quoted as core::fmt::Display>::fmt;
  v21 = &off_127AA8;
  v22 = 2LL;
  v25 = 0LL;
  v23 = &v29;
  v24 = 1LL;
  std::io::stdio::_eprint(&v21);
  if ( v33 == 2 )
    goto LABEL_20;
  core::ptr::drop_in_place<std::fs::ReadDir>(&v32);
  return 1;
}
