        char a8)
{
  char **result; // rax
  __int64 v13; // r12
  const char *v14; // rsi
  _BOOL8 v15; // rdx
  __int128 v16; // xmm0
  __int128 v18; // [rsp+10h] [rbp-A8h] BYREF
  char **v19; // [rsp+20h] [rbp-98h]
  char v20; // [rsp+28h] [rbp-90h]
  __int128 v21; // [rsp+30h] [rbp-88h] BYREF
  char **v22; // [rsp+40h] [rbp-78h]
  char **v23; // [rsp+48h] [rbp-70h] BYREF
  __int128 v24; // [rsp+50h] [rbp-68h]
  __int64 v25; // [rsp+60h] [rbp-58h]
  __int128 v26; // [rsp+68h] [rbp-50h]
  __int128 v27; // [rsp+78h] [rbp-40h]

  if ( a7 && (unsigned __int8)std::path::Path::is_dir(a4, a5) )
  {
    *(_QWORD *)&v18 = 1LL;
    *((_QWORD *)&v18 + 1) = a4;
    v19 = (char **)a5;
    v20 = 1;
    *(_QWORD *)&v21 = &v18;
    *((_QWORD *)&v21 + 1) = <os_display::Quoted as core::fmt::Display>::fmt;
    v23 = &off_1B56E8;
    *(_QWORD *)&v24 = 2LL;
    *(_QWORD *)&v26 = 0LL;
    *((_QWORD *)&v24 + 1) = &v21;
    v25 = 1LL;
    result = (char **)core::option::Option<T>::map_or_else(a1 + 8, &v23);
    *(_QWORD *)a1 = 4LL;
    return result;
  }
  if ( a8 )
  {
    if ( !(unsigned __int8)std::path::Path::is_dir(a4, a5) )
      return (char **)<uu_cp::Error as core::convert::From<&str>>::from(a1, aWithParentsThe, 51LL);
    if ( !a6 )
    {
      v13 = a3;
      std::path::Path::components(&v23, a2, a3);
      if ( BYTE10(v27) )
      {
        v14 = asc_2CF20;
        v15 = 1LL;
      }
      else
      {
        v15 = BYTE8(v24) < 5u;
        v14 = (_BYTE *)(&dword_0 + 1);
        if ( BYTE8(v24) < 5u )
          v14 = asc_2CF20;
      }
      goto LABEL_17;
    }
LABEL_10:
    std::path::Path::to_path_buf(&v21, a4);
LABEL_19:
    result = v22;
    *(_QWORD *)(a1 + 24) = v22;
    *(_OWORD *)(a1 + 8) = v21;
    *(_QWORD *)a1 = 13LL;
    return result;
  }
  if ( a6 )
    goto LABEL_10;
  v13 = a3;
  v14 = (const char *)std::path::Path::parent(a2, a3);
  if ( !v14 )
  {
    v14 = a2;
    v15 = a3;
  }
LABEL_17:
  uu_cp::localize_to_target((__int64 *)&v23, (__int64)v14, v15, (__int64)a2, v13, a4, a5);
  result = v23;
  v18 = v24;
  v19 = (char **)v25;
  if ( v23 == (char **)&byte_9[4] )
  {
    v21 = v18;
    v22 = v19;
    goto LABEL_19;
  }
  v16 = v26;
  *(_OWORD *)(a1 + 48) = v27;
  *(_OWORD *)(a1 + 32) = v16;
  *(_QWORD *)(a1 + 24) = v19;
  *(_OWORD *)(a1 + 8) = v18;
  *(_QWORD *)a1 = result;
  return result;
}
