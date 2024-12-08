        __int64 a8)
{
  __int64 v12; // r9
  __int64 v13; // rax
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm2
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int64 v19; // rax
  __int128 v20; // xmm0
  unsigned __int8 is_symlink; // [rsp+Fh] [rbp-129h]
  __int128 v22; // [rsp+10h] [rbp-128h] BYREF
  __int64 v23; // [rsp+20h] [rbp-118h]
  char v24; // [rsp+28h] [rbp-110h]
  _BYTE v25[64]; // [rsp+30h] [rbp-108h] BYREF
  __int128 v26; // [rsp+70h] [rbp-C8h] BYREF
  __int64 v27; // [rsp+80h] [rbp-B8h]
  char v28; // [rsp+88h] [rbp-B0h]
  __int128 v29; // [rsp+90h] [rbp-A8h] BYREF
  __int64 v30; // [rsp+A0h] [rbp-98h]
  __int128 *v31; // [rsp+B0h] [rbp-88h] BYREF
  __int64 (__fastcall *v32)(); // [rsp+B8h] [rbp-80h]
  __int128 *v33; // [rsp+C0h] [rbp-78h]
  __int64 (__fastcall *v34)(); // [rsp+C8h] [rbp-70h]
  __int64 v35; // [rsp+D0h] [rbp-68h]
  __int128 v36; // [rsp+D8h] [rbp-60h] BYREF
  __int64 v37; // [rsp+E8h] [rbp-50h]
  __int128 v38; // [rsp+F0h] [rbp-48h] BYREF
  __int64 v39; // [rsp+100h] [rbp-38h]

  v35 = a7;
  if ( uu_cp::is_forbidden_to_copy_to_same_file(a2, a3, (__int64)a4, (__int64)a5, a6, a7) )
  {
    *(_QWORD *)&v26 = 1LL;
    *((_QWORD *)&v26 + 1) = a2;
    v27 = a3;
    v28 = 1;
    *(_QWORD *)&v22 = 1LL;
    *((_QWORD *)&v22 + 1) = a4;
    v23 = (__int64)a5;
    v24 = 1;
    v31 = &v26;
    v32 = <os_display::Quoted as core::fmt::Display>::fmt;
    v33 = &v22;
    v34 = <os_display::Quoted as core::fmt::Display>::fmt;
    *(_QWORD *)v25 = &unk_1B5808;
    *(_QWORD *)&v25[8] = 3LL;
    *(_QWORD *)&v25[32] = 0LL;
    *(_QWORD *)&v25[16] = &v31;
    *(_QWORD *)&v25[24] = 2LL;
    core::option::Option<T>::map_or_else(a1 + 8, v25);
    *(_QWORD *)a1 = 4LL;
    return;
  }
  if ( *(_BYTE *)(a6 + 77) != 2 )
  {
    uu_cp::OverwriteMode::verify((__int64)v25, *(unsigned int *)(a6 + 60), a4, a5, *(unsigned __int8 *)(a6 + 71), v12);
    if ( *(_DWORD *)v25 != 13 )
    {
      v14 = *(_OWORD *)v25;
      v15 = *(_OWORD *)&v25[16];
      v16 = *(_OWORD *)&v25[32];
      *(_OWORD *)(a1 + 48) = *(_OWORD *)&v25[48];
      *(_OWORD *)(a1 + 32) = v16;
      *(_OWORD *)(a1 + 16) = v15;
      *(_OWORD *)a1 = v14;
      return;
    }
  }
  uucore::features::backup_control::get_backup_path(
    &v36,
    *(unsigned int *)(a6 + 76),
    a4,
    a5,
    *(_QWORD *)(a6 + 8),
    *(_QWORD *)(a6 + 16));
  if ( (_QWORD)v36 == 0x8000000000000000LL )
    goto LABEL_6;
  v29 = v36;
  v30 = v37;
  if ( (unsigned __int8)uucore::features::fs::paths_refer_to_same_file(a2, a3, *((_QWORD *)&v36 + 1), v37, 1LL) )
  {
    *(_QWORD *)&v26 = 1LL;
    *((_QWORD *)&v26 + 1) = a4;
    v27 = (__int64)a5;
    v28 = 1;
    *(_QWORD *)&v22 = 1LL;
    *((_QWORD *)&v22 + 1) = a2;
    v23 = a3;
    v24 = 1;
    v31 = &v26;
    v32 = <os_display::Quoted as core::fmt::Display>::fmt;
    v33 = &v22;
    v34 = <os_display::Quoted as core::fmt::Display>::fmt;
    *(_QWORD *)v25 = &off_1B57D8;
    *(_QWORD *)&v25[8] = 3LL;
    *(_QWORD *)&v25[32] = 0LL;
    *(_QWORD *)&v25[16] = &v31;
    *(_QWORD *)&v25[24] = 2LL;
    core::option::Option<T>::map_or_else(&v38, v25);
    *(_QWORD *)(a1 + 24) = v39;
    *(_OWORD *)(a1 + 8) = v38;
    *(_QWORD *)a1 = 4LL;
LABEL_16:
    core::ptr::drop_in_place<std::path::PathBuf>(&v29);
    return;
  }
  is_symlink = std::path::Path::is_symlink(a4, a5);
  uu_cp::backup_dest(v25, (__int64)a4, (__int64)a5, *((__int64 *)&v29 + 1), v30, is_symlink);
  v19 = *(_QWORD *)v25;
  v22 = *(_OWORD *)&v25[8];
  v23 = *(_QWORD *)&v25[24];
  if ( *(_QWORD *)v25 != 13LL )
  {
    v20 = *(_OWORD *)&v25[32];
    *(_OWORD *)(a1 + 48) = *(_OWORD *)&v25[48];
    *(_OWORD *)(a1 + 32) = v20;
    *(_QWORD *)(a1 + 24) = v23;
    *(_OWORD *)(a1 + 8) = v22;
    *(_QWORD *)a1 = v19;
    goto LABEL_16;
  }
  v26 = v22;
  v27 = v23;
  core::ptr::drop_in_place<std::path::PathBuf>(&v26);
  core::ptr::drop_in_place<std::path::PathBuf>(&v29);
  if ( is_symlink )
    goto LABEL_7;
LABEL_6:
  uu_cp::delete_dest_if_needed_and_allowed((unsigned int)v25, a2, a3, (_DWORD)a4, (_DWORD)a5, a6, v35, a8);
  v13 = *(_QWORD *)v25;
  if ( *(_QWORD *)v25 == 13LL )
  {
LABEL_7:
    *(_QWORD *)a1 = 13LL;
    return;
  }
  *(_QWORD *)(a1 + 56) = *(_QWORD *)&v25[56];
  v17 = *(_OWORD *)&v25[8];
  v18 = *(_OWORD *)&v25[24];
  *(_OWORD *)(a1 + 40) = *(_OWORD *)&v25[40];
  *(_OWORD *)(a1 + 24) = v18;
  *(_OWORD *)(a1 + 8) = v17;
  *(_QWORD *)a1 = v13;
}
