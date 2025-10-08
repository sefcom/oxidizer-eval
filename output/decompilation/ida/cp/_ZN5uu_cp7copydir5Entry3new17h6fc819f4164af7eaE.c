__int64 __fastcall uu_cp::copydir::Entry::new(__int64 a1, _QWORD *a2, __int64 a3, char a4)
{
  __int64 v6; // r15
  __int64 v7; // rdx
  __int64 v8; // r12
  __int64 v9; // rcx
  __int64 result; // rax
  unsigned __int8 is_dir; // al
  __int64 v12; // r15
  __int64 v13; // rdi
  char v14; // cl
  __int64 dir_all; // rax
  __int64 v16; // rax
  __int64 v17; // r14
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int64 v20; // [rsp+8h] [rbp-F0h] BYREF
  __int128 v21; // [rsp+10h] [rbp-E8h] BYREF
  __int64 v22; // [rsp+20h] [rbp-D8h]
  __int128 v23; // [rsp+30h] [rbp-C8h] BYREF
  _BYTE v24[24]; // [rsp+40h] [rbp-B8h]
  __int64 v25; // [rsp+58h] [rbp-A0h]
  __int128 v26; // [rsp+78h] [rbp-80h] BYREF
  __int64 v27; // [rsp+88h] [rbp-70h]
  __int128 v28; // [rsp+90h] [rbp-68h] BYREF
  __int64 v29; // [rsp+A0h] [rbp-58h]
  __int64 v30; // [rsp+A8h] [rbp-50h] BYREF
  __int128 v31; // [rsp+B0h] [rbp-48h] BYREF
  __int64 v32; // [rsp+C0h] [rbp-38h]

  v6 = <&T as core::convert::AsRef<U>>::as_ref(a3);
  v8 = v7;
  std::path::Path::to_path_buf(&v31, v6);
  std::path::Path::join(&v26, a2[1], a2[2], &v31);
  v9 = 0LL;
  if ( !__OFSUB__(0LL, a2[3]) )
    v9 = a2[4];
  uu_cp::copydir::get_local_to_root_parent(&v23, *((__int64 *)&v26 + 1), v27, v9, a2[5]);
  if ( (_QWORD)v23 == 0x8000000000000000LL )
  {
    *(_QWORD *)a1 = 0x8000000000000000LL;
LABEL_5:
    core::ptr::drop_in_place<std::path::PathBuf>(&v26);
    return core::ptr::drop_in_place<std::path::PathBuf>(&v31);
  }
  v22 = *(_QWORD *)v24;
  v21 = v23;
  if ( a4 )
  {
    is_dir = std::path::Path::is_dir(v6, v8);
    v12 = a2[7];
    if ( v12 )
    {
      v13 = a2[6];
      v14 = *(_BYTE *)(v13 + v12 - 1);
      if ( v14 == 47 )
      {
        if ( is_dir )
          goto LABEL_10;
      }
      else if ( !((v14 != 92) | is_dir ^ 1) )
      {
LABEL_10:
        dir_all = std::fs::create_dir_all(v13, a2[7]);
        v30 = dir_all;
        if ( dir_all )
        {
          v20 = dir_all;
          *(_QWORD *)&v28 = &v20;
          *((_QWORD *)&v28 + 1) = <std::io::error::Error as core::fmt::Display>::fmt;
          *(_QWORD *)&v23 = &off_15E600;
          *((_QWORD *)&v23 + 1) = 2LL;
          *(_QWORD *)&v24[16] = 0LL;
          *(_QWORD *)v24 = &v28;
          *(_QWORD *)&v24[8] = 1LL;
          std::io::stdio::_eprint(&v23);
          core::ptr::drop_in_place<std::io::error::Error>(&v20);
        }
        else
        {
          core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(&v30);
        }
        goto LABEL_18;
      }
    }
    v16 = std::path::Path::strip_prefix(*((_QWORD *)&v21 + 1), v22, a2[8], a2[9]);
    if ( !v16 )
    {
      *(_QWORD *)a1 = 0x8000000000000000LL;
      core::ptr::drop_in_place<std::path::PathBuf>(&v21);
      goto LABEL_5;
    }
    std::path::Path::to_path_buf(&v23, v16);
    core::ptr::drop_in_place<std::path::PathBuf>(&v21);
    v22 = *(_QWORD *)v24;
    v21 = v23;
  }
  else
  {
    v12 = a2[7];
  }
LABEL_18:
  v17 = a2[6];
  std::path::Path::join(&v28, v17, v12, &v21);
  result = std::path::Path::is_file(v17, v12);
  *(_QWORD *)v24 = v27;
  v18 = v26;
  v25 = v32;
  *(_OWORD *)&v24[8] = v31;
  v19 = v28;
  *(_QWORD *)(a1 + 64) = v29;
  *(_OWORD *)(a1 + 48) = v19;
  *(_OWORD *)a1 = v18;
  *(_QWORD *)(a1 + 32) = *(_QWORD *)&v24[16];
  *(_QWORD *)(a1 + 40) = v25;
  *(_OWORD *)(a1 + 16) = *(_OWORD *)v24;
  *(_BYTE *)(a1 + 72) = result;
  return result;
}