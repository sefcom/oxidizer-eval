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
  __int64 v16; // rdx
  char **v17; // [rsp+0h] [rbp-C8h] BYREF
  __int64 v18; // [rsp+8h] [rbp-C0h]
  __int64 **v19; // [rsp+10h] [rbp-B8h]
  __int64 v20; // [rsp+18h] [rbp-B0h]
  __int64 v21; // [rsp+20h] [rbp-A8h]
  __int64 v22; // [rsp+30h] [rbp-98h] BYREF
  __int128 v23; // [rsp+38h] [rbp-90h]
  char v24; // [rsp+48h] [rbp-80h]
  __int64 *v25; // [rsp+50h] [rbp-78h] BYREF
  __int128 v26; // [rsp+58h] [rbp-70h]
  __int64 (__fastcall *v27)(); // [rsp+68h] [rbp-60h]
  __int64 v28; // [rsp+70h] [rbp-58h] BYREF
  char v29; // [rsp+78h] [rbp-50h]
  _QWORD v30[2]; // [rsp+80h] [rbp-48h] BYREF
  __int64 v31; // [rsp+90h] [rbp-38h] BYREF
  char v32; // [rsp+98h] [rbp-30h]

  v3 = a1;
  if ( !(unsigned __int8)uu_rm::prompt_dir(a1, *((_QWORD *)&a1 + 1), *(unsigned __int8 *)(a2 + 6)) )
    return 0;
  std::fs::read_dir(&v28, a1, *((_QWORD *)&a1 + 1));
  if ( v29 != 2 )
  {
    v31 = v28;
    v32 = v29;
    if ( !*(_WORD *)(a2 + 3) )
    {
      v22 = uucore::util_name(&v28, a1, v4, v5);
      *(_QWORD *)&v23 = v7;
      v25 = &v22;
      *(_QWORD *)&v26 = <&T as core::fmt::Display>::fmt;
      v17 = (char **)&unk_127D88;
      v18 = 2LL;
      v21 = 0LL;
      v19 = &v25;
      v20 = 1LL;
      std::io::stdio::_eprint(&v17);
      v22 = 1LL;
      v23 = a1;
      v24 = 1;
      v25 = &v22;
      *(_QWORD *)&v26 = <os_display::Quoted as core::fmt::Display>::fmt;
      v17 = &off_127E60;
      v18 = 2LL;
      v21 = 0LL;
      v19 = &v25;
      v20 = 1LL;
      std::io::stdio::_eprint(&v17);
      goto LABEL_19;
    }
    <std::fs::ReadDir as core::iter::traits::iterator::Iterator>::next(&v17, &v31);
    if ( v17 )
    {
      core::ptr::drop_in_place<core::option::Option<core::result::Result<std::fs::DirEntry,std::io::error::Error>>>(&v17);
      v22 = uucore::util_name(&v17, &v31, v8, v9);
      *(_QWORD *)&v23 = v10;
      v25 = &v22;
      *(_QWORD *)&v26 = <&T as core::fmt::Display>::fmt;
      v17 = (char **)&unk_127D88;
      v18 = 2LL;
      v21 = 0LL;
      v19 = &v25;
      v20 = 1LL;
      std::io::stdio::_eprint(&v17);
      v22 = 1LL;
      v23 = a1;
      v24 = 1;
      v25 = &v22;
      *(_QWORD *)&v26 = <os_display::Quoted as core::fmt::Display>::fmt;
      v17 = &off_127EA0;
      v18 = 2LL;
      v21 = 0LL;
      v19 = &v25;
      v20 = 1LL;
      std::io::stdio::_eprint(&v17);
      goto LABEL_19;
    }
    core::ptr::drop_in_place<core::option::Option<core::result::Result<std::fs::DirEntry,std::io::error::Error>>>(&v17);
    v11 = std::fs::remove_dir(a1, *((_QWORD *)&a1 + 1));
    if ( v11 )
    {
      v30[0] = v11;
      *(_QWORD *)&a1 = v11;
      if ( (unsigned __int8)std::io::error::Error::kind(v11) == 1 )
      {
        v22 = uucore::util_name(a1, *((_QWORD *)&a1 + 1), v12, v13);
        *(_QWORD *)&v23 = v14;
        v25 = &v22;
        *(_QWORD *)&v26 = <&T as core::fmt::Display>::fmt;
        v17 = (char **)&unk_127D88;
        v18 = 2LL;
        v21 = 0LL;
        v19 = &v25;
        v20 = 1LL;
        std::io::stdio::_eprint(&v17);
        v22 = 1LL;
        *(_QWORD *)&v23 = v3;
        *((_QWORD *)&v23 + 1) = *((_QWORD *)&a1 + 1);
        v24 = 1;
        v25 = &v22;
        *(_QWORD *)&v26 = <os_display::Quoted as core::fmt::Display>::fmt;
        v17 = &off_127DC8;
        v18 = 2LL;
        v21 = 0LL;
        v19 = &v25;
        v20 = 1LL;
      }
      else
      {
        v22 = uucore::util_name(a1, *((_QWORD *)&a1 + 1), v12, v13);
        *(_QWORD *)&v23 = v16;
        v25 = &v22;
        *(_QWORD *)&v26 = <&T as core::fmt::Display>::fmt;
        v17 = (char **)&unk_127D88;
        v18 = 2LL;
        v21 = 0LL;
        v19 = &v25;
        v20 = 1LL;
        std::io::stdio::_eprint(&v17);
        v22 = 1LL;
        *(_QWORD *)&v23 = v3;
        *((_QWORD *)&v23 + 1) = *((_QWORD *)&a1 + 1);
        v24 = 1;
        v25 = &v22;
        *(_QWORD *)&v26 = <os_display::Quoted as core::fmt::Display>::fmt;
        *((_QWORD *)&v26 + 1) = v30;
        v27 = <std::io::error::Error as core::fmt::Display>::fmt;
        v17 = &off_127DE8;
        v18 = 3LL;
        v21 = 0LL;
        v19 = &v25;
        v20 = 2LL;
      }
      std::io::stdio::_eprint(&v17);
      core::ptr::drop_in_place<std::io::error::Error>(v30);
LABEL_19:
      core::ptr::drop_in_place<std::fs::ReadDir>(&v31);
      if ( v29 != 2 )
        return 1;
LABEL_20:
      core::ptr::drop_in_place<core::result::Result<std::fs::ReadDir,std::io::error::Error>>(&v28);
      return 1;
    }
    if ( *(_BYTE *)(a2 + 5) )
    {
      uu_rm::normalize(&v25, a1, *((_QWORD *)&a1 + 1));
      v22 = 1LL;
      v23 = v26;
      v24 = 1;
      v30[0] = &v22;
      v30[1] = <os_display::Quoted as core::fmt::Display>::fmt;
      v17 = &off_127EC0;
      v18 = 2LL;
      v21 = 0LL;
      v19 = (__int64 **)v30;
      v20 = 1LL;
      ((void (__fastcall *)(char ***))std::io::stdio::_print)(&v17);
      core::ptr::drop_in_place<std::path::PathBuf>(&v25);
    }
    core::ptr::drop_in_place<std::fs::ReadDir>(&v31);
    if ( v29 == 2 )
      core::ptr::drop_in_place<core::result::Result<std::fs::ReadDir,std::io::error::Error>>(&v28);
    return 0;
  }
  v22 = uucore::util_name(&v28, a1, v4, v5);
  *(_QWORD *)&v23 = v6;
  v25 = &v22;
  *(_QWORD *)&v26 = <&T as core::fmt::Display>::fmt;
  v17 = (char **)&unk_127D88;
  v18 = 2LL;
  v21 = 0LL;
  v19 = &v25;
  v20 = 1LL;
  std::io::stdio::_eprint(&v17);
  v22 = 1LL;
  v23 = a1;
  v24 = 1;
  v25 = &v22;
  *(_QWORD *)&v26 = <os_display::Quoted as core::fmt::Display>::fmt;
  v17 = &off_127EA0;
  v18 = 2LL;
  v21 = 0LL;
  v19 = &v25;
  v20 = 1LL;
  std::io::stdio::_eprint(&v17);
  if ( v29 == 2 )
    goto LABEL_20;
  core::ptr::drop_in_place<std::fs::ReadDir>(&v28);
  return 1;
}
