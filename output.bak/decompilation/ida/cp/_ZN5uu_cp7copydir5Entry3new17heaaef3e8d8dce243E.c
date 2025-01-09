__int64 __fastcall uu_cp::copydir::Entry::new(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4, char a5)
{
  __int64 v8; // rcx
  __int64 result; // rax
  unsigned __int8 is_dir; // bp
  __int64 v11; // r14
  __int64 v12; // r15
  __int64 dir_all; // rax
  __int64 v14; // rax
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // [rsp+0h] [rbp-E8h] BYREF
  __int64 v18; // [rsp+10h] [rbp-D8h]
  __int64 v19; // [rsp+18h] [rbp-D0h] BYREF
  __int128 v20; // [rsp+20h] [rbp-C8h] BYREF
  _BYTE v21[24]; // [rsp+30h] [rbp-B8h]
  __int64 v22; // [rsp+48h] [rbp-A0h]
  __int128 v23; // [rsp+50h] [rbp-98h]
  __int64 v24; // [rsp+60h] [rbp-88h]
  __int128 v25; // [rsp+70h] [rbp-78h] BYREF
  __int64 v26; // [rsp+80h] [rbp-68h]
  __int128 v27; // [rsp+88h] [rbp-60h] BYREF
  __int64 v28; // [rsp+98h] [rbp-50h]
  __int128 v29; // [rsp+A0h] [rbp-48h] BYREF
  __int64 v30; // [rsp+B0h] [rbp-38h]

  std::path::Path::to_path_buf(&v29, a3);
  std::path::Path::join(&v25, a2[1], a2[2], &v29);
  if ( a2[3] == 0x8000000000000000LL )
    v8 = 0LL;
  else
    v8 = a2[4];
  uu_cp::copydir::get_local_to_root_parent(&v20, *((__int64 *)&v25 + 1), v26, v8, a2[5]);
  if ( (_QWORD)v20 == 0x8000000000000000LL )
  {
    *(_QWORD *)a1 = 0x8000000000000000LL;
LABEL_6:
    core::ptr::drop_in_place<std::path::PathBuf>(&v25);
    return core::ptr::drop_in_place<std::path::PathBuf>(&v29);
  }
  v18 = *(_QWORD *)v21;
  v17 = v20;
  if ( a5 )
  {
    is_dir = std::path::Path::is_dir(a3, a4);
    v11 = a2[6];
    v12 = a2[7];
    if ( ((unsigned __int8)uucore::features::fs::path_ends_with_terminator(v11, v12) & is_dir) != 0 )
    {
      dir_all = std::fs::create_dir_all(v11, v12);
      if ( dir_all )
      {
        v19 = dir_all;
        *(_QWORD *)&v27 = &v19;
        *((_QWORD *)&v27 + 1) = <std::io::error::Error as core::fmt::Display>::fmt;
        *(_QWORD *)&v20 = &off_1B62A0;
        *((_QWORD *)&v20 + 1) = 2LL;
        *(_QWORD *)&v21[16] = 0LL;
        *(_QWORD *)v21 = &v27;
        *(_QWORD *)&v21[8] = 1LL;
        std::io::stdio::_eprint(&v20);
        core::ptr::drop_in_place<std::io::error::Error>(v19);
      }
    }
    else
    {
      v14 = std::path::Path::strip_prefix(*((_QWORD *)&v17 + 1), v18, a2[8], a2[9]);
      if ( !v14 )
      {
        *(_QWORD *)a1 = 0x8000000000000000LL;
        core::ptr::drop_in_place<std::path::PathBuf>(&v17);
        goto LABEL_6;
      }
      std::path::Path::to_path_buf(&v20, v14);
      core::ptr::drop_in_place<std::path::PathBuf>(&v17);
      v18 = *(_QWORD *)v21;
      v17 = v20;
    }
  }
  else
  {
    v11 = a2[6];
    v12 = a2[7];
  }
  *(_QWORD *)v21 = v18;
  v20 = v17;
  std::path::Path::join(&v27, v11, v12, &v20);
  result = std::path::Path::is_file(v11, v12);
  *(_QWORD *)v21 = v26;
  v15 = v25;
  v20 = v25;
  v22 = v30;
  *(_OWORD *)&v21[8] = v29;
  v24 = v28;
  v16 = v27;
  v23 = v27;
  *(_QWORD *)(a1 + 64) = v28;
  *(_OWORD *)(a1 + 48) = v16;
  *(_OWORD *)a1 = v15;
  *(_QWORD *)(a1 + 32) = *(_QWORD *)&v21[16];
  *(_QWORD *)(a1 + 40) = v22;
  *(_OWORD *)(a1 + 16) = *(_OWORD *)v21;
  *(_BYTE *)(a1 + 72) = result;
  return result;
}
