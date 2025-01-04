__int64 __fastcall uu_shuf::parse_range(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  unsigned __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // r12
  __int64 v9; // r13
  __int64 v10; // rbp
  char **v11; // rax
  __int128 v12; // xmm0
  __int64 v13; // rax
  unsigned __int64 v15; // r13
  unsigned __int64 v16; // rax
  __int64 v17; // [rsp+0h] [rbp-B8h] BYREF
  unsigned __int64 v18; // [rsp+8h] [rbp-B0h]
  __int64 v19; // [rsp+10h] [rbp-A8h]
  int v20; // [rsp+18h] [rbp-A0h]
  char **v21; // [rsp+20h] [rbp-98h] BYREF
  __int128 v22; // [rsp+28h] [rbp-90h]
  __int64 v23; // [rsp+38h] [rbp-80h]
  __int64 v24; // [rsp+40h] [rbp-78h]
  __int64 v25; // [rsp+50h] [rbp-68h]
  _QWORD v26[2]; // [rsp+58h] [rbp-60h] BYREF
  __int64 v27; // [rsp+68h] [rbp-50h] BYREF
  __int64 v28; // [rsp+70h] [rbp-48h]
  __int64 v29; // [rsp+78h] [rbp-40h]
  __int64 v30; // [rsp+80h] [rbp-38h]

  core::str::<impl str>::split_once(&v27);
  v8 = v27;
  if ( !v27 )
  {
    v17 = 0LL;
    v18 = a2;
    v19 = a3;
    LOBYTE(v20) = 1;
    v26[0] = &v17;
LABEL_6:
    v26[1] = <os_display::Quoted as core::fmt::Display>::fmt;
    v21 = &off_137D38;
    *(_QWORD *)&v22 = 1LL;
    v24 = 0LL;
    *((_QWORD *)&v22 + 1) = v26;
    v23 = 1LL;
    ((void (__fastcall *)(__int64, char ***, __int64, unsigned __int64, __int64, __int64, __int64, unsigned __int64, __int64, int))core::option::Option<T>::map_or_else)(
      a1 + 8,
      &v21,
      v4,
      v5,
      v6,
      v7,
      v17,
      v18,
      v19,
      v20);
    v13 = 1LL;
LABEL_7:
    *(_QWORD *)a1 = v13;
    return a1;
  }
  v9 = v28;
  v25 = v29;
  v10 = v30;
  core::num::<impl core::str::traits::FromStr for usize>::from_str(&v17, v27, v28);
  if ( !(_BYTE)v17 )
  {
    v15 = v18;
    core::num::<impl core::str::traits::FromStr for usize>::from_str(&v17, v25, v10);
    if ( (_BYTE)v17 )
    {
      uu_shuf::parse_range::{{closure}}(&v21, v25, v10);
      v11 = v21;
      if ( v21 != (char **)0x8000000000000000LL )
        goto LABEL_4;
      v16 = v22;
      if ( v15 <= (unsigned __int64)v22 )
        goto LABEL_16;
    }
    else
    {
      v16 = v18;
      if ( v15 <= v18 )
        goto LABEL_16;
    }
    v5 = v16 + 1;
    if ( v15 != v16 + 1 )
    {
      v17 = 0LL;
      v18 = a2;
      v19 = a3;
      LOBYTE(v20) = 1;
      v26[0] = &v17;
      goto LABEL_6;
    }
LABEL_16:
    *(_QWORD *)(a1 + 8) = v15;
    *(_QWORD *)(a1 + 16) = v16;
    *(_BYTE *)(a1 + 24) = 0;
    v13 = 0LL;
    goto LABEL_7;
  }
  uu_shuf::parse_range::{{closure}}(&v21, v8, v9);
  v11 = v21;
LABEL_4:
  v12 = v22;
  *(_QWORD *)(a1 + 8) = v11;
  *(_OWORD *)(a1 + 16) = v12;
  *(_QWORD *)a1 = 1LL;
  return a1;
}
