__int64 __fastcall uu_rm::remove_dir_recursive(__int64 a1, __int64 a2, _BYTE *a3)
{
  unsigned int i; // ebp
  __int64 v5; // r13
  __int64 v7; // rax
  __int64 v8; // rdi
  __int128 v9; // rax
  unsigned int v10; // r12d
  __int64 v11; // r15
  __int64 (__fastcall *v12)(); // r15
  __int64 v13; // rax
  __int64 v14; // r12
  __int128 v15; // rax
  __int64 v16; // r14
  __int128 v17; // rax
  char v19; // [rsp+Fh] [rbp-109h]
  char **v20; // [rsp+10h] [rbp-108h] BYREF
  __int128 v21; // [rsp+18h] [rbp-100h]
  __int128 v22; // [rsp+28h] [rbp-F0h]
  __int64 v23; // [rsp+38h] [rbp-E0h]
  __int128 v24; // [rsp+40h] [rbp-D8h] BYREF
  __int128 v25; // [rsp+50h] [rbp-C8h]
  __int64 v26; // [rsp+60h] [rbp-B8h]
  __int128 *v27; // [rsp+68h] [rbp-B0h] BYREF
  __int64 (__fastcall *v28)(); // [rsp+70h] [rbp-A8h]
  __int64 v29; // [rsp+78h] [rbp-A0h]
  __int128 v30; // [rsp+80h] [rbp-98h] BYREF
  __int128 v31; // [rsp+90h] [rbp-88h]
  __int64 v32; // [rsp+A0h] [rbp-78h]
  __int64 v33; // [rsp+B0h] [rbp-68h]
  _BYTE *v34; // [rsp+B8h] [rbp-60h]
  __int64 v35; // [rsp+C0h] [rbp-58h] BYREF
  unsigned __int8 v36; // [rsp+C8h] [rbp-50h]
  __int64 v37; // [rsp+D0h] [rbp-48h]
  __int64 v38; // [rsp+D8h] [rbp-40h] BYREF
  unsigned __int8 v39; // [rsp+E0h] [rbp-38h]

  v5 = a2;
  core::str::converts::from_utf8(&v20, a1, a2);
  if ( ((unsigned __int8)v20 & 1) == 0 && *((_QWORD *)&v21 + 1) >= 0x3E9uLL )
  {
    v7 = std::fs::remove_dir_all(a1, a2);
    if ( v7 )
    {
      v8 = v7;
      v27 = (__int128 *)<std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(
                          v7,
                          a1,
                          a2);
      *(_QWORD *)&v9 = uucore::util_name(v8, a1);
      v24 = v9;
      *(_QWORD *)&v30 = &v24;
      *((_QWORD *)&v30 + 1) = <&T as core::fmt::Display>::fmt;
      v20 = (char **)&unk_EA4A0;
      *(_QWORD *)&v21 = 2LL;
      *((_QWORD *)&v21 + 1) = &v30;
      v22 = 1uLL;
      std::io::stdio::_eprint(&v20);
      *(_QWORD *)&v24 = &v27;
      *((_QWORD *)&v24 + 1) = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
      v20 = (char **)&unk_EA4E0;
      *(_QWORD *)&v21 = 2LL;
      *((_QWORD *)&v21 + 1) = &v24;
      v22 = 1uLL;
      std::io::stdio::_eprint(&v20);
      goto LABEL_5;
    }
    return 0;
  }
  if ( !(unsigned __int8)std::path::Path::is_dir(a1, a2) || (unsigned __int8)std::path::Path::is_symlink(a1, a2) )
    return (unsigned int)uu_rm::remove_file(a1, a2, a3);
  v19 = a3[7];
  if ( v19 == 2 && !(unsigned __int8)uu_rm::is_dir_empty(a1, a2) && !(unsigned __int8)uu_rm::prompt_descend(a1, a2) )
    return 0;
  std::fs::read_dir(&v38, a1, a2);
  v10 = v39;
  v11 = v38;
  if ( v39 == 2 )
  {
    if ( (unsigned __int8)std::io::error::Error::kind(v38) == 1 )
    {
      core::ptr::drop_in_place<std::io::error::Error>(v11);
      i = 0;
      if ( v19 != 2 )
        goto LABEL_28;
    }
    else
    {
      core::ptr::drop_in_place<std::io::error::Error>(v11);
      LOBYTE(i) = 1;
      if ( v19 != 2 )
        goto LABEL_28;
    }
LABEL_27:
    if ( (unsigned __int8)uu_rm::prompt_dir(a1, v5, (unsigned __int8)a3[6], 2LL) )
      goto LABEL_28;
    return 0;
  }
  v34 = a3;
  v37 = a2;
  v33 = v38;
  v35 = v38;
  v36 = v39;
  for ( i = 0; ; i = v10 )
  {
    <std::fs::ReadDir as core::iter::traits::iterator::Iterator>::next(&v20, &v35);
    if ( (_DWORD)v20 != 1 )
      break;
    v30 = v21;
    v32 = v23;
    v31 = v22;
    if ( !(_QWORD)v21 )
    {
      LOBYTE(v10) = 1;
LABEL_15:
      core::ptr::drop_in_place<core::result::Result<std::fs::DirEntry,std::io::error::Error>>(&v30);
      continue;
    }
    v26 = v23;
    v25 = v22;
    v24 = v21;
    std::fs::DirEntry::path(&v27, &v24);
    v12 = v28;
    v10 = uu_rm::remove_dir_recursive(v28, v29, v34);
    core::ptr::drop_in_place<std::path::PathBuf>(v27, v12);
    core::ptr::drop_in_place<std::fs::DirEntry>(&v24);
    LOBYTE(v10) = (i | v10) & 1;
    if ( !(_QWORD)v30 )
      goto LABEL_15;
  }
  core::ptr::drop_in_place<std::fs::ReadDir>(&v35);
  v5 = v37;
  a3 = v34;
  if ( v19 == 2 )
    goto LABEL_27;
LABEL_28:
  v13 = std::fs::remove_dir(a1, v5);
  if ( !v13 )
  {
    if ( a3[5] == 1 )
    {
      uu_rm::normalize(&v30, a1, v5);
      v16 = *((_QWORD *)&v30 + 1);
      *(_QWORD *)&v24 = 1LL;
      *((_QWORD *)&v24 + 1) = *((_QWORD *)&v30 + 1);
      *(_QWORD *)&v25 = v31;
      BYTE8(v25) = 1;
      v27 = &v24;
      v28 = <os_display::Quoted as core::fmt::Display>::fmt;
      v20 = &off_EA520;
      *(_QWORD *)&v21 = 2LL;
      *((_QWORD *)&v21 + 1) = &v27;
      v22 = 1uLL;
      std::io::stdio::_print(&v20);
      core::ptr::drop_in_place<std::path::PathBuf>(v30, v16);
    }
    return i;
  }
  v14 = v13;
  if ( (i & 1) != 0 )
  {
LABEL_36:
    core::ptr::drop_in_place<std::io::error::Error>(v14);
    return i;
  }
  if ( !uu_rm::is_readable() )
  {
    *(_QWORD *)&v17 = uucore::util_name(a1, v5);
    v24 = v17;
    *(_QWORD *)&v30 = &v24;
    *((_QWORD *)&v30 + 1) = <&T as core::fmt::Display>::fmt;
    v20 = (char **)&unk_EA4A0;
    *(_QWORD *)&v21 = 2LL;
    *((_QWORD *)&v21 + 1) = &v30;
    v22 = 1uLL;
    std::io::stdio::_eprint(&v20);
    *(_QWORD *)&v24 = 1LL;
    *((_QWORD *)&v24 + 1) = a1;
    *(_QWORD *)&v25 = v5;
    BYTE8(v25) = 1;
    *(_QWORD *)&v30 = &v24;
    *((_QWORD *)&v30 + 1) = <os_display::Quoted as core::fmt::Display>::fmt;
    v20 = &off_EA500;
    *(_QWORD *)&v21 = 2LL;
    *((_QWORD *)&v21 + 1) = &v30;
    v22 = 1uLL;
    std::io::stdio::_eprint(&v20);
    LOBYTE(i) = 1;
    goto LABEL_36;
  }
  v27 = (__int128 *)<std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(
                      v14,
                      a1,
                      v5);
  *(_QWORD *)&v15 = uucore::util_name(v14, a1);
  v24 = v15;
  *(_QWORD *)&v30 = &v24;
  *((_QWORD *)&v30 + 1) = <&T as core::fmt::Display>::fmt;
  v20 = (char **)&unk_EA4A0;
  *(_QWORD *)&v21 = 2LL;
  *((_QWORD *)&v21 + 1) = &v30;
  v22 = 1uLL;
  std::io::stdio::_eprint(&v20);
  *(_QWORD *)&v24 = &v27;
  *((_QWORD *)&v24 + 1) = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
  v20 = (char **)&unk_EA4E0;
  *(_QWORD *)&v21 = 2LL;
  *((_QWORD *)&v21 + 1) = &v24;
  v22 = 1uLL;
  std::io::stdio::_eprint(&v20);
LABEL_5:
  core::ptr::drop_in_place<alloc::boxed::Box<uucore::mods::error::UIoError>>(v27);
  LOBYTE(i) = 1;
  return i;
}