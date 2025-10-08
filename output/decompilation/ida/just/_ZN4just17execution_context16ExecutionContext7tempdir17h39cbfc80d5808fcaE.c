__int64 __fastcall just::execution_context::ExecutionContext::tempdir(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 result; // rax
  __int64 v7; // rax
  char v8; // al
  __int128 v9; // [rsp+0h] [rbp-108h] BYREF
  __int64 v10; // [rsp+10h] [rbp-F8h]
  __int128 v11; // [rsp+18h] [rbp-F0h] BYREF
  __int64 v12; // [rsp+28h] [rbp-E0h]
  _QWORD v13[3]; // [rsp+30h] [rbp-D8h] BYREF
  int v14; // [rsp+48h] [rbp-C0h] BYREF
  const char *v15; // [rsp+50h] [rbp-B8h]
  __int64 v16; // [rsp+58h] [rbp-B0h]
  __int64 v17; // [rsp+60h] [rbp-A8h]
  __int64 v18; // [rsp+68h] [rbp-A0h]
  __int64 v19; // [rsp+70h] [rbp-98h]
  __int16 v20; // [rsp+78h] [rbp-90h]
  _BYTE v21[33]; // [rsp+80h] [rbp-88h] BYREF
  __int128 v22; // [rsp+A1h] [rbp-67h]
  __int128 v23; // [rsp+B1h] [rbp-57h]
  __int128 v24; // [rsp+C1h] [rbp-47h]
  _BYTE v25[23]; // [rsp+D1h] [rbp-37h]

  v19 = 6LL;
  v17 = 1LL;
  v18 = 0LL;
  v20 = 0;
  v14 = 0;
  v15 = aJust_2;
  v16 = 5LL;
  if ( !__OFSUB__(0LL, *(_QWORD *)(*a2 + 240LL)) )
  {
    v5 = *a2 + 240LL;
    goto LABEL_8;
  }
  v4 = a2[2];
  if ( *(_QWORD *)(v4 + 360) != 0x8000000000000000LL )
  {
    v5 = v4 + 360;
LABEL_8:
    std::path::Path::join(v21, *(_QWORD *)(a2[3] + 32LL), *(_QWORD *)(a2[3] + 40LL), v5);
    tempfile::Builder::tempdir_in(&v9, &v14, v21);
    if ( (_BYTE)v10 == 2 )
      return just::execution_context::ExecutionContext::tempdir::{{closure}}(a1, a3, v9);
    goto LABEL_13;
  }
  dirs::runtime_dir(v13);
  if ( v13[0] == 0x8000000000000000LL )
  {
    tempfile::Builder::tempdir(&v9, &v14);
    if ( (_BYTE)v10 != 2 )
      goto LABEL_13;
    return just::execution_context::ExecutionContext::tempdir::{{closure}}(a1, a3, v9);
  }
  std::path::Path::join(&v11, v13[1], v13[2], aJust, 4LL);
  v7 = std::fs::create_dir_all(&v11);
  if ( v7 )
  {
    just::execution_context::ExecutionContext::tempdir::{{closure}}(v21, *((_QWORD *)&v11 + 1), v12, v7);
    v8 = v21[0];
    *(_QWORD *)(a1 + 96) = *(_QWORD *)&v25[15];
    *(_OWORD *)(a1 + 81) = *(_OWORD *)v25;
    *(_OWORD *)(a1 + 65) = v24;
    *(_OWORD *)(a1 + 49) = v23;
    *(_OWORD *)(a1 + 33) = v22;
    *(_OWORD *)(a1 + 17) = *(_OWORD *)&v21[17];
    *(_OWORD *)(a1 + 1) = *(_OWORD *)&v21[1];
    *(_BYTE *)a1 = v8;
    core::ptr::drop_in_place<std::path::PathBuf>(&v11);
    return core::ptr::drop_in_place<std::path::PathBuf>(v13);
  }
  *(_QWORD *)&v21[16] = v12;
  *(_OWORD *)v21 = v11;
  tempfile::Builder::tempdir_in(&v9, &v14, v21);
  core::ptr::drop_in_place<std::path::PathBuf>(v13);
  if ( (_BYTE)v10 == 2 )
    return just::execution_context::ExecutionContext::tempdir::{{closure}}(a1, a3, v9);
LABEL_13:
  result = v10;
  *(_QWORD *)(a1 + 24) = v10;
  *(_OWORD *)(a1 + 8) = v9;
  *(_BYTE *)a1 = 56;
  return result;
}