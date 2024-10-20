__int64 __fastcall uu_shuf::parse_range(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v5; // r12
  __int64 v6; // rsi
  __int64 v7; // rcx
  __int64 v8; // rdx
  unsigned __int64 v9; // r13
  __int64 v10; // r12
  unsigned __int64 v11; // rbp
  __int64 v12; // rax
  unsigned __int64 v13; // rax
  __int64 v14; // rax
  __int64 v16; // [rsp+0h] [rbp-B8h] BYREF
  __int64 v17; // [rsp+8h] [rbp-B0h]
  unsigned __int64 v18; // [rsp+10h] [rbp-A8h]
  char v19; // [rsp+18h] [rbp-A0h]
  __int128 v20; // [rsp+20h] [rbp-98h] BYREF
  __int64 v21; // [rsp+30h] [rbp-88h]
  char **v22; // [rsp+38h] [rbp-80h] BYREF
  __int64 v23; // [rsp+40h] [rbp-78h]
  __int128 *v24; // [rsp+48h] [rbp-70h]
  __int64 v25; // [rsp+50h] [rbp-68h]
  __int64 v26; // [rsp+58h] [rbp-60h]
  _BYTE v27[8]; // [rsp+68h] [rbp-50h] BYREF
  unsigned __int64 v28; // [rsp+70h] [rbp-48h]
  _QWORD v29[8]; // [rsp+78h] [rbp-40h] BYREF

  v5 = 0LL;
  while ( 1 )
  {
    v6 = a2 + v5;
    if ( a3 - v5 > 0xF )
    {
      if ( core::slice::memchr::memchr_aligned(45LL, v6) != 1 )
        goto LABEL_20;
      v7 = v8;
    }
    else
    {
      if ( a3 == v5 )
        goto LABEL_20;
      v7 = 0LL;
      while ( *(_BYTE *)(v6 + v7) != 45 )
      {
        if ( a3 - v5 == ++v7 )
          goto LABEL_20;
      }
    }
    v9 = v7 + v5;
    v5 += v7 + 1;
    if ( v9 < a3 && *(_BYTE *)(a2 + v9) == 45 )
      break;
    if ( a3 < v5 )
      goto LABEL_20;
  }
  core::num::<impl core::str::traits::FromStr for usize>::from_str(v27, a2, v9);
  if ( v27[0] )
  {
    v16 = 0LL;
    v17 = a2;
LABEL_17:
    v18 = v9;
    v19 = 1;
    v29[0] = &v16;
    v29[1] = <os_display::Quoted as core::fmt::Display>::fmt;
    v22 = &off_F24D0;
    v23 = 1LL;
    v26 = 0LL;
    v24 = (__int128 *)v29;
    v25 = 1LL;
    alloc::fmt::format::format_inner(&v20, &v22);
    v12 = v21;
    *(_OWORD *)(a1 + 8) = v20;
    *(_QWORD *)(a1 + 24) = v12;
LABEL_21:
    v14 = 1LL;
    goto LABEL_22;
  }
  v9 = a3 - v5;
  v10 = a2 + v5;
  v11 = v28;
  core::num::<impl core::str::traits::FromStr for usize>::from_str(v27, v10, v9);
  if ( v27[0] )
  {
    v16 = 0LL;
    v17 = v10;
    goto LABEL_17;
  }
  v13 = v28;
  if ( v11 > v28 && v11 != v28 + 1 )
  {
LABEL_20:
    v16 = 0LL;
    v17 = a2;
    v18 = a3;
    v19 = 1;
    *(_QWORD *)&v20 = &v16;
    *((_QWORD *)&v20 + 1) = <os_display::Quoted as core::fmt::Display>::fmt;
    v22 = &off_F24D0;
    v23 = 1LL;
    v26 = 0LL;
    v24 = &v20;
    v25 = 1LL;
    alloc::fmt::format::format_inner(a1 + 8, &v22);
    goto LABEL_21;
  }
  *(_QWORD *)(a1 + 8) = v11;
  *(_QWORD *)(a1 + 16) = v13;
  *(_BYTE *)(a1 + 24) = 0;
  v14 = 0LL;
LABEL_22:
  *(_QWORD *)a1 = v14;
  return a1;
}
