        __int64 a8)
{
  __int64 v12; // r9
  __int64 result; // rax
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  char **v16; // rax
  __int128 v17; // xmm0
  unsigned __int8 is_symlink; // [rsp+Fh] [rbp-129h]
  __int128 v19; // [rsp+10h] [rbp-128h] BYREF
  __int64 v20; // [rsp+20h] [rbp-118h]
  char v21; // [rsp+28h] [rbp-110h]
  char **v22; // [rsp+30h] [rbp-108h] BYREF
  __int128 v23; // [rsp+38h] [rbp-100h]
  _BYTE v24[40]; // [rsp+48h] [rbp-F0h]
  __int128 v25; // [rsp+70h] [rbp-C8h] BYREF
  __int64 v26; // [rsp+80h] [rbp-B8h]
  char v27; // [rsp+88h] [rbp-B0h]
  __int128 v28; // [rsp+90h] [rbp-A8h] BYREF
  __int64 v29; // [rsp+A0h] [rbp-98h]
  __int128 *v30; // [rsp+B0h] [rbp-88h] BYREF
  __int64 (__fastcall *v31)(); // [rsp+B8h] [rbp-80h]
  __int128 *v32; // [rsp+C0h] [rbp-78h]
  __int64 (__fastcall *v33)(); // [rsp+C8h] [rbp-70h]
  __int64 v34; // [rsp+D0h] [rbp-68h]
  __int128 v35; // [rsp+D8h] [rbp-60h] BYREF
  __int64 v36; // [rsp+E8h] [rbp-50h]
  __int128 v37; // [rsp+F0h] [rbp-48h] BYREF
  __int64 v38; // [rsp+100h] [rbp-38h]

  v34 = a7;
  if ( uu_cp::is_forbidden_to_copy_to_same_file(a2, a3, (__int64)a4, (__int64)a5, a6, a7) )
  {
    *(_QWORD *)&v25 = 1LL;
    *((_QWORD *)&v25 + 1) = a2;
    v26 = a3;
    v27 = 1;
    *(_QWORD *)&v19 = 1LL;
    *((_QWORD *)&v19 + 1) = a4;
    v20 = (__int64)a5;
    v21 = 1;
    v30 = &v25;
    v31 = <os_display::Quoted as core::fmt::Display>::fmt;
    v32 = &v19;
    v33 = <os_display::Quoted as core::fmt::Display>::fmt;
    v22 = (char **)&unk_1B5EA8;
    *(_QWORD *)&v23 = 3LL;
    *((_QWORD *)&v23 + 1) = &v30;
    *(_OWORD *)v24 = 2uLL;
    result = core::option::Option<T>::map_or_else(a1 + 8, &v22);
    *(_QWORD *)a1 = 4LL;
    return result;
  }
  if ( *(_BYTE *)(a6 + 77) != 2 )
  {
    uu_cp::OverwriteMode::verify((__int64)&v22, *(unsigned int *)(a6 + 60), a4, a5, *(unsigned __int8 *)(a6 + 71), v12);
    result = (__int64)v22;
    if ( v22 != (char **)&byte_9[4] )
    {
LABEL_8:
      *(_QWORD *)(a1 + 56) = *(_QWORD *)&v24[32];
      v14 = v23;
      v15 = *(_OWORD *)v24;
      *(_OWORD *)(a1 + 40) = *(_OWORD *)&v24[16];
      *(_OWORD *)(a1 + 24) = v15;
      *(_OWORD *)(a1 + 8) = v14;
      *(_QWORD *)a1 = result;
      return result;
    }
  }
  uucore::features::backup_control::get_backup_path(
    &v35,
    *(unsigned int *)(a6 + 76),
    a4,
    a5,
    *(_QWORD *)(a6 + 8),
    *(_QWORD *)(a6 + 16));
  if ( (_QWORD)v35 == 0x8000000000000000LL )
  {
LABEL_6:
    uu_cp::delete_dest_if_needed_and_allowed((unsigned int)&v22, a2, a3, (_DWORD)a4, (_DWORD)a5, a6, v34, a8);
    result = (__int64)v22;
    if ( v22 == (char **)&byte_9[4] )
    {
LABEL_7:
      *(_QWORD *)a1 = 13LL;
      return result;
    }
    goto LABEL_8;
  }
  v28 = v35;
  v29 = v36;
  if ( (unsigned __int8)uucore::features::fs::paths_refer_to_same_file(a2, a3, *((_QWORD *)&v35 + 1), v36, 1LL) )
  {
    *(_QWORD *)&v25 = 1LL;
    *((_QWORD *)&v25 + 1) = a4;
    v26 = (__int64)a5;
    v27 = 1;
    *(_QWORD *)&v19 = 1LL;
    *((_QWORD *)&v19 + 1) = a2;
    v20 = a3;
    v21 = 1;
    v30 = &v25;
    v31 = <os_display::Quoted as core::fmt::Display>::fmt;
    v32 = &v19;
    v33 = <os_display::Quoted as core::fmt::Display>::fmt;
    v22 = &off_1B5ED8;
    *(_QWORD *)&v23 = 3LL;
    *((_QWORD *)&v23 + 1) = &v30;
    *(_OWORD *)v24 = 2uLL;
    core::option::Option<T>::map_or_else(&v37, &v22);
    *(_QWORD *)(a1 + 24) = v38;
    *(_OWORD *)(a1 + 8) = v37;
    *(_QWORD *)a1 = 4LL;
  }
  else
  {
    is_symlink = std::path::Path::is_symlink(a4, a5);
    uu_cp::backup_dest(&v22, (__int64)a4, (__int64)a5, *((__int64 *)&v28 + 1), v29, is_symlink);
    v16 = v22;
    v19 = v23;
    v20 = *(_QWORD *)v24;
    if ( v22 == (char **)&byte_9[4] )
    {
      v25 = v19;
      v26 = v20;
      core::ptr::drop_in_place<std::path::PathBuf>(&v25);
      result = core::ptr::drop_in_place<std::path::PathBuf>(&v28);
      if ( is_symlink )
        goto LABEL_7;
      goto LABEL_6;
    }
    v17 = *(_OWORD *)&v24[8];
    *(_OWORD *)(a1 + 48) = *(_OWORD *)&v24[24];
    *(_OWORD *)(a1 + 32) = v17;
    *(_QWORD *)(a1 + 24) = v20;
    *(_OWORD *)(a1 + 8) = v19;
    *(_QWORD *)a1 = v16;
  }
  return core::ptr::drop_in_place<std::path::PathBuf>(&v28);
}
