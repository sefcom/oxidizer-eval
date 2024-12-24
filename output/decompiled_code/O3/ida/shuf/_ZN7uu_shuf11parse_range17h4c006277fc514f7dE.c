__int64 __fastcall uu_shuf::parse_range(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  unsigned __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rbp
  __int64 v9; // r12
  __int64 v10; // r13
  __int64 v11; // rax
  unsigned __int64 v12; // r12
  _QWORD *v13; // rax
  unsigned __int64 v15; // rax
  __int64 v16; // [rsp+0h] [rbp-B8h] BYREF
  unsigned __int64 v17; // [rsp+8h] [rbp-B0h]
  __int64 v18; // [rsp+10h] [rbp-A8h]
  int v19; // [rsp+18h] [rbp-A0h]
  __int128 v20; // [rsp+20h] [rbp-98h] BYREF
  _QWORD *v21; // [rsp+30h] [rbp-88h]
  __int64 v22; // [rsp+38h] [rbp-80h]
  __int64 v23; // [rsp+40h] [rbp-78h]
  __int64 v24; // [rsp+50h] [rbp-68h]
  _QWORD v25[2]; // [rsp+58h] [rbp-60h] BYREF
  __int64 v26; // [rsp+68h] [rbp-50h] BYREF
  __int64 v27; // [rsp+70h] [rbp-48h]
  __int64 v28; // [rsp+78h] [rbp-40h]
  __int64 v29; // [rsp+80h] [rbp-38h]

  core::str::<impl str>::split_once(&v26);
  v8 = v26;
  if ( v26 )
  {
    v9 = v27;
    v24 = v28;
    v10 = v29;
    core::num::<impl core::str::traits::FromStr for usize>::from_str(&v16, v26, v27);
    if ( (_BYTE)v16 )
    {
      uu_shuf::parse_range::{{closure}}(&v20, v8, v9);
LABEL_9:
      v13 = v21;
      *(_OWORD *)(a1 + 8) = v20;
      *(_QWORD *)(a1 + 24) = v13;
      *(_QWORD *)a1 = 1LL;
      return a1;
    }
    v12 = v17;
    core::num::<impl core::str::traits::FromStr for usize>::from_str(&v16, v24, v10);
    if ( (_BYTE)v16 )
    {
      uu_shuf::parse_range::{{closure}}(&v20, v24, v10);
      goto LABEL_9;
    }
    v15 = v17;
    if ( v12 <= v17 || (v5 = v17 + 1, v12 == v17 + 1) )
    {
      *(_QWORD *)(a1 + 8) = v12;
      *(_QWORD *)(a1 + 16) = v15;
      *(_BYTE *)(a1 + 24) = 0;
      v11 = 0LL;
      goto LABEL_6;
    }
    v16 = 0LL;
    v17 = a2;
    v18 = a3;
    LOBYTE(v19) = 1;
    v25[0] = &v16;
  }
  else
  {
    v16 = 0LL;
    v17 = a2;
    v18 = a3;
    LOBYTE(v19) = 1;
    v25[0] = &v16;
  }
  v25[1] = <os_display::Quoted as core::fmt::Display>::fmt;
  *(_QWORD *)&v20 = &off_137DD8;
  *((_QWORD *)&v20 + 1) = 1LL;
  v23 = 0LL;
  v21 = v25;
  v22 = 1LL;
  core::option::Option<T>::map_or_else(a1 + 8, &v20, v4, v5, v6, v7);
  v11 = 1LL;
LABEL_6:
  *(_QWORD *)a1 = v11;
  return a1;
}
