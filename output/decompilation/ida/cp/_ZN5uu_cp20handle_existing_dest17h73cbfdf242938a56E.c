__int64 __fastcall uu_cp::handle_existing_dest(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        unsigned __int8 a7,
        __int64 a8)
{
  _QWORD *v12; // r14
  __int64 result; // rax
  _QWORD *v14; // rbx
  int v15; // eax
  __int64 v16; // rcx
  char ***v17; // r14
  __int64 v18; // r15
  __int64 v19; // r13
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int64 v22; // r13
  __int128 *v23; // r14
  unsigned __int64 v24; // rax
  unsigned __int8 is_symlink; // al
  __int64 v26; // rcx
  unsigned __int8 v27; // r13
  bool v28; // zf
  char **v29; // [rsp+0h] [rbp-138h] BYREF
  __int128 v30; // [rsp+8h] [rbp-130h]
  __m256i v31; // [rsp+18h] [rbp-120h]
  __int64 v32; // [rsp+38h] [rbp-100h] BYREF
  __int64 v33; // [rsp+40h] [rbp-F8h]
  __int64 v34; // [rsp+48h] [rbp-F0h]
  char v35; // [rsp+50h] [rbp-E8h]
  __int64 *v36; // [rsp+58h] [rbp-E0h] BYREF
  __int64 (__fastcall *v37)(); // [rsp+60h] [rbp-D8h]
  __int64 v38; // [rsp+68h] [rbp-D0h]
  char v39; // [rsp+70h] [rbp-C8h]
  _QWORD *v40; // [rsp+78h] [rbp-C0h]
  __int64 **v41; // [rsp+80h] [rbp-B8h] BYREF
  __int64 (__fastcall *v42)(); // [rsp+88h] [rbp-B0h]
  __int64 *v43; // [rsp+90h] [rbp-A8h]
  __int64 (__fastcall *v44)(); // [rsp+98h] [rbp-A0h]
  __int64 v45; // [rsp+A0h] [rbp-98h] BYREF
  __int64 v46; // [rsp+A8h] [rbp-90h]
  __int64 v47; // [rsp+B0h] [rbp-88h]
  __int64 v48; // [rsp+B8h] [rbp-80h]
  __int64 v49; // [rsp+C0h] [rbp-78h]
  __int64 v50; // [rsp+C8h] [rbp-70h]
  __int128 v51; // [rsp+D0h] [rbp-68h] BYREF
  __int64 v52; // [rsp+E0h] [rbp-58h]
  _BYTE v53[72]; // [rsp+F0h] [rbp-48h] BYREF

  v40 = a1;
  v50 = a7;
  if ( uu_cp::is_forbidden_to_copy_to_same_file(a2, a3, a4, a5, a6, a7) )
  {
    v36 = (_QWORD *)(&dword_0 + 1);
    v37 = (__int64 (__fastcall *)())a2;
    v38 = a3;
    v39 = 1;
    v32 = 1LL;
    v33 = a4;
    v34 = a5;
    v35 = 1;
    v41 = &v36;
    v42 = <os_display::Quoted as core::fmt::Display>::fmt;
    v43 = &v32;
    v44 = <os_display::Quoted as core::fmt::Display>::fmt;
    v29 = (char **)&unk_15EBD8;
    *(_QWORD *)&v30 = 3LL;
    *((_QWORD *)&v30 + 1) = &v41;
    *(_OWORD *)v31.m256i_i8 = 2uLL;
    v12 = v40;
    result = core::option::Option<T>::map_or_else(v40 + 1, &v29);
    *v12 = 0x8000000000000003LL;
    return result;
  }
  v14 = v40;
  v15 = *(unsigned __int8 *)(a6 + 102);
  v16 = a6;
  if ( v15 == 1 )
  {
    if ( *(_BYTE *)(a6 + 95) )
    {
      v32 = 1LL;
      v33 = a4;
      v34 = a5;
      v35 = 1;
      v36 = &v32;
      v37 = <os_display::Quoted as core::fmt::Display>::fmt;
      v29 = &off_15EB08;
      *(_QWORD *)&v30 = 2LL;
      *((_QWORD *)&v30 + 1) = &v36;
      *(_OWORD *)v31.m256i_i8 = 1uLL;
      std::io::stdio::_print(&v29);
    }
    result = 0x8000000000000007LL;
    *v14 = 0x8000000000000007LL;
    *((_BYTE *)v14 + 8) = 0;
  }
  else
  {
    v17 = (char ***)a5;
    v18 = a4;
    if ( v15 != 2 )
    {
      uu_cp::OverwriteMode::verify((__int64)&v29, *(_DWORD *)(a6 + 84), a4, v17, *(_BYTE *)(a6 + 95));
      result = (__int64)v29;
      if ( v29 != (char **)0x800000000000000CLL )
      {
LABEL_13:
        v20 = v30;
        v21 = *(_OWORD *)v31.m256i_i8;
        *(_OWORD *)(v14 + 5) = *(_OWORD *)&v31.m256i_u64[2];
        *(_OWORD *)(v14 + 3) = v21;
        *(_OWORD *)(v14 + 1) = v20;
        *v14 = result;
        return result;
      }
      v16 = a6;
    }
    v19 = v16;
    uucore::features::backup_control::get_backup_path(
      &v45,
      *(unsigned __int8 *)(v16 + 101),
      v18,
      v17,
      *(_QWORD *)(v16 + 8),
      *(_QWORD *)(v16 + 16));
    if ( v45 == 0x8000000000000000LL )
    {
LABEL_8:
      uu_cp::delete_dest_if_needed_and_allowed((unsigned int)&v29, a2, a3, v18, (_DWORD)v17, v19, v50, a8);
      result = (__int64)v29;
      if ( v29 == (char **)0x800000000000000CLL )
      {
LABEL_9:
        *v14 = 0x800000000000000CLL;
        return result;
      }
      goto LABEL_13;
    }
    v48 = v19;
    v22 = v46;
    v49 = v47;
    if ( (unsigned __int8)uucore::features::fs::paths_refer_to_same_file(a2, a3, v46, v47, 1LL) )
    {
      v36 = (_QWORD *)(&dword_0 + 1);
      v37 = (__int64 (__fastcall *)())v18;
      v38 = (__int64)v17;
      v39 = 1;
      v32 = 1LL;
      v33 = a2;
      v34 = a3;
      v35 = 1;
      v41 = &v36;
      v42 = <os_display::Quoted as core::fmt::Display>::fmt;
      v43 = &v32;
      v44 = <os_display::Quoted as core::fmt::Display>::fmt;
      v29 = &off_15EC08;
      *(_QWORD *)&v30 = 3LL;
      *((_QWORD *)&v30 + 1) = &v41;
      *(_OWORD *)v31.m256i_i8 = 2uLL;
      v23 = (__int128 *)v53;
      core::option::Option<T>::map_or_else(v53, &v29);
      v24 = 0x8000000000000003LL;
    }
    else
    {
      is_symlink = std::path::Path::is_symlink(v18, v17);
      v26 = v22;
      v27 = is_symlink;
      uu_cp::backup_dest(&v29, v18, (__int64)v17, v26, v49, is_symlink);
      v24 = (unsigned __int64)v29;
      v51 = v30;
      v52 = v31.m256i_i64[0];
      if ( v29 == (char **)0x800000000000000CLL )
      {
        core::ptr::drop_in_place<std::path::PathBuf>(&v51);
        result = core::ptr::drop_in_place<std::path::PathBuf>(&v45);
        v28 = v27 == 0;
        LODWORD(v19) = v48;
        if ( !v28 )
          goto LABEL_9;
        goto LABEL_8;
      }
      v14[6] = v31.m256i_i64[3];
      *((_OWORD *)v14 + 2) = *(_OWORD *)&v31.m256i_u64[1];
      v23 = &v51;
    }
    v14[3] = *((_QWORD *)v23 + 2);
    *(_OWORD *)(v14 + 1) = *v23;
    *v14 = v24;
    return core::ptr::drop_in_place<std::path::PathBuf>(&v45);
  }
  return result;
}