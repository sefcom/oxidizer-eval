__int64 __fastcall forc_publish::tarball::process_readme(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v4; // r15
  __int64 v5; // rsi
  int v6; // r12d
  __int64 v7; // rdx
  __int64 v8; // rax
  _QWORD *v9; // rsi
  __int64 v11; // [rsp+8h] [rbp-160h] BYREF
  __int64 v12; // [rsp+10h] [rbp-158h]
  __int64 v13; // [rsp+18h] [rbp-150h]
  _QWORD v14[2]; // [rsp+20h] [rbp-148h] BYREF
  _OWORD v15[2]; // [rsp+30h] [rbp-138h] BYREF
  _OWORD v16[2]; // [rsp+58h] [rbp-110h] BYREF
  __int128 v17; // [rsp+78h] [rbp-F0h] BYREF
  _QWORD *v18; // [rsp+88h] [rbp-E0h]
  __int128 dest; // [rsp+90h] [rbp-D8h] BYREF
  _QWORD *v20; // [rsp+A0h] [rbp-C8h]
  __int64 v21; // [rsp+A8h] [rbp-C0h]
  __int64 v22; // [rsp+B0h] [rbp-B8h]

  std::path::Path::join(&v11, a2, a3, aReadmeMd, 9LL);
  v3 = v12;
  v4 = v13;
  v5 = v12;
  std::fs::metadata(&dest);
  v6 = dest;
  core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&dest, v5);
  if ( v6 == 2 )
    goto LABEL_6;
  forc_publish::md_pre_process::flatten_markdown((__int64)v16, v3, v4);
  if ( LODWORD(v16[0]) != 6 )
  {
    v15[1] = v16[1];
    v15[0] = v16[0];
    v14[0] = v15;
    v14[1] = <forc_publish::md_pre_process::error::MDPreProcessError as core::fmt::Display>::fmt;
    *(_QWORD *)&dest = &off_E53FA0;
    *((_QWORD *)&dest + 1) = 1LL;
    v22 = 0LL;
    v20 = v14;
    v21 = 1LL;
    core::option::Option<T>::map_or_else(&v17, 0LL, v7, &dest);
    dest = v17;
    v9 = v18;
    v20 = v18;
    forc_tracing::println_warning(*((_QWORD *)&v17 + 1));
    core::ptr::drop_in_place<alloc::string::String>(&dest, v9);
    core::ptr::drop_in_place<forc_publish::md_pre_process::error::MDPreProcessError>(v15);
    goto LABEL_6;
  }
  v8 = std::fs::write(&v11, (char *)v16 + 8);
  if ( !v8 )
  {
LABEL_6:
    *(_BYTE *)a1 = 14;
    return core::ptr::drop_in_place<std::path::PathBuf>(v11, v3);
  }
  *(_BYTE *)a1 = 0;
  *(_QWORD *)(a1 + 8) = v8;
  return core::ptr::drop_in_place<std::path::PathBuf>(v11, v3);
}