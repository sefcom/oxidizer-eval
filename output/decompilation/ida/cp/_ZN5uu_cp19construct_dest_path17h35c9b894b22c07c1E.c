__int64 __fastcall uu_cp::construct_dest_path(
        __int64 a1,
        const char *a2,
        _BOOL8 a3,
        __int64 a4,
        __int64 a5,
        char a6,
        char a7,
        char a8)
{
  int v11; // r13d
  __int64 result; // rax
  _BOOL4 v13; // r12d
  _BOOL4 v14; // edx
  __int64 v15; // rax
  __int128 v17; // [rsp+10h] [rbp-A8h] BYREF
  __int64 v18; // [rsp+20h] [rbp-98h]
  char v19; // [rsp+28h] [rbp-90h]
  __int128 v20; // [rsp+30h] [rbp-88h] BYREF
  __int64 v21; // [rsp+40h] [rbp-78h]
  char **v22; // [rsp+48h] [rbp-70h] BYREF
  __int128 v23; // [rsp+50h] [rbp-68h]
  __int64 v24; // [rsp+60h] [rbp-58h]
  __int128 v25; // [rsp+68h] [rbp-50h]
  __int64 v26; // [rsp+78h] [rbp-40h]
  char v27; // [rsp+82h] [rbp-36h]

  v11 = (int)a2;
  if ( (a7 & 1) == 0 || !(unsigned __int8)std::path::Path::is_dir(a4, a5) )
  {
    if ( (a8 & 1) != 0 )
    {
      if ( !(unsigned __int8)std::path::Path::is_dir(a4, a5) )
        return <uu_cp::Error as core::convert::From<&str>>::from(a1, aWithParentsThe, 51LL);
      if ( !a6 )
      {
        v13 = a3;
        std::path::Path::components(&v22, a2, a3);
        if ( v27 )
        {
          a2 = asc_24BF6;
          v14 = 1;
        }
        else
        {
          v14 = BYTE8(v23) < 5u;
          LODWORD(a2) = 1;
          if ( BYTE8(v23) < 5u )
            a2 = asc_24BF6;
        }
LABEL_14:
        uu_cp::localize_to_target((unsigned int)&v22, (_DWORD)a2, v14, v11, v13, a4, a5);
        result = (__int64)v22;
        v17 = v23;
        v18 = v24;
        if ( v22 != (char **)0x800000000000000CLL )
        {
          *(_QWORD *)(a1 + 48) = v26;
          *(_OWORD *)(a1 + 32) = v25;
          *(_QWORD *)(a1 + 24) = v18;
          *(_OWORD *)(a1 + 8) = v17;
          goto LABEL_18;
        }
        v20 = v17;
        v21 = v18;
        goto LABEL_16;
      }
    }
    else if ( !a6 )
    {
      v13 = a3;
      v15 = std::path::Path::parent(a2, a3);
      LODWORD(a2) = v15;
      if ( !v15 )
      {
        v14 = a3;
        LODWORD(a2) = v11;
      }
      goto LABEL_14;
    }
    std::path::Path::to_path_buf(&v20, a4);
LABEL_16:
    *(_QWORD *)(a1 + 24) = v21;
    *(_OWORD *)(a1 + 8) = v20;
    result = 0x800000000000000CLL;
    goto LABEL_18;
  }
  *(_QWORD *)&v17 = 1LL;
  *((_QWORD *)&v17 + 1) = a4;
  v18 = a5;
  v19 = 1;
  *(_QWORD *)&v20 = &v17;
  *((_QWORD *)&v20 + 1) = <os_display::Quoted as core::fmt::Display>::fmt;
  v22 = &off_15EAE8;
  *(_QWORD *)&v23 = 2LL;
  *(_QWORD *)&v25 = 0LL;
  *((_QWORD *)&v23 + 1) = &v20;
  v24 = 1LL;
  core::option::Option<T>::map_or_else(a1 + 8, &v22);
  result = 0x8000000000000003LL;
LABEL_18:
  *(_QWORD *)a1 = result;
  return result;
}