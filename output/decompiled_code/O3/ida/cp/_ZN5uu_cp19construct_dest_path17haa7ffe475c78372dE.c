        char a8)
{
  void *result; // rax
  void *v13; // rax
  _BOOL8 v14; // rcx
  _BOOL8 v15; // rdx
  __int64 v16; // rdx
  __int128 v17; // [rsp+0h] [rbp-A8h] BYREF
  void *v18; // [rsp+10h] [rbp-98h]
  char v19; // [rsp+18h] [rbp-90h]
  _QWORD v20[2]; // [rsp+28h] [rbp-80h] BYREF
  char **v21; // [rsp+38h] [rbp-70h] BYREF
  __int128 v22; // [rsp+40h] [rbp-68h] BYREF
  __int64 v23; // [rsp+50h] [rbp-58h]
  __int64 v24; // [rsp+58h] [rbp-50h]
  char v25; // [rsp+72h] [rbp-36h]

  if ( a7 && (unsigned __int8)std::path::Path::is_dir(a4, a5) )
  {
    *(_QWORD *)&v17 = 1LL;
    *((_QWORD *)&v17 + 1) = a4;
    v18 = a5;
    v19 = 1;
    v20[0] = &v17;
    v20[1] = <os_display::Quoted as core::fmt::Display>::fmt;
    v21 = &off_1553E0;
    *(_QWORD *)&v22 = 2LL;
    v24 = 0LL;
    *((_QWORD *)&v22 + 1) = v20;
    v23 = 1LL;
    result = (void *)alloc::fmt::format::format_inner(a1 + 8, &v21);
    *(_QWORD *)a1 = 4LL;
    return result;
  }
  if ( !a8 )
  {
    if ( !a6 )
    {
      v13 = (void *)std::path::Path::parent(a2, a3);
      v14 = v15;
      if ( !v13 )
      {
        v13 = a2;
        v14 = a3;
      }
      goto LABEL_18;
    }
LABEL_10:
    std::path::Path::to_path_buf(&v17, a4);
LABEL_20:
    result = v18;
    *(_QWORD *)(a1 + 24) = v18;
    *(_OWORD *)(a1 + 8) = v17;
    *(_QWORD *)a1 = 13LL;
    return result;
  }
  if ( !(unsigned __int8)std::path::Path::is_dir(a4, a5) )
  {
    result = (void *)_rust_alloc(51LL, 1LL);
    if ( !result )
      alloc::raw_vec::handle_error(1LL, 51LL);
    qmemcpy(result, "with --parents, the destination must be a directory", 51);
    *(_QWORD *)a1 = 4LL;
    *(_QWORD *)(a1 + 8) = 51LL;
    *(_QWORD *)(a1 + 16) = result;
    *(_QWORD *)(a1 + 24) = 51LL;
    return result;
  }
  if ( a6 )
    goto LABEL_10;
  std::path::Path::components(&v21, a2, a3);
  if ( v25 )
  {
    v13 = &unk_26F19;
    v14 = 1LL;
  }
  else
  {
    v14 = BYTE8(v22) < 5u;
    v13 = &dword_0 + 1;
    if ( BYTE8(v22) < 5u )
      v13 = &unk_26F19;
  }
LABEL_18:
  result = (void *)std::path::Path::_strip_prefix(a2, a3, v13, v14);
  if ( result )
  {
    std::path::Path::_join(&v22, a4, a5, result, v16);
    v18 = (void *)v23;
    v17 = v22;
    goto LABEL_20;
  }
  *(_QWORD *)a1 = 7LL;
  return result;
}
