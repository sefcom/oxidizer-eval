__int64 __fastcall uu_dd::parseargs::parse_bytes_no_x(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  char v7; // bl
  __int64 v8; // rdx
  __int64 v9; // rbp
  char v10; // r15
  __int64 v11; // rdx
  __int64 v12; // r14
  char v13; // al
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 result; // rax
  __int64 *v17; // r14
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rbx
  __int64 v20; // [rsp+8h] [rbp-A0h] BYREF
  unsigned __int64 v21; // [rsp+10h] [rbp-98h]
  __int128 v22; // [rsp+18h] [rbp-90h]
  __int64 v23; // [rsp+28h] [rbp-80h]
  __int64 v24; // [rsp+30h] [rbp-78h]
  _QWORD v25[4]; // [rsp+38h] [rbp-70h] BYREF
  __int16 v26; // [rsp+58h] [rbp-50h]
  char v27; // [rsp+5Ah] [rbp-4Eh]
  __int128 v28; // [rsp+60h] [rbp-48h] BYREF
  __int64 v29; // [rsp+70h] [rbp-38h]

  v24 = a3;
  v23 = a2;
  v26 = 257;
  v27 = 0;
  v25[0] = 0LL;
  v25[2] = 0LL;
  v7 = core::str::<impl str>::find(a4, a5);
  v9 = v8;
  v10 = core::str::<impl str>::rfind(a4, a5, 119LL);
  v12 = v11;
  v13 = core::str::<impl str>::rfind(a4, a5, 98LL);
  if ( (v7 & 1) != 0 )
  {
    if ( (v10 & 1) == 0 && (v13 & 1) == 0 )
    {
      uu_dd::parseargs::parse_bytes_only(&v20, a4, a5, v9);
      v15 = v20;
      result = v21;
      if ( v20 == 14 )
      {
        v17 = (__int64 *)a1;
        v18 = v21;
        if ( !is_mul_ok(1uLL, v21) )
          goto LABEL_23;
LABEL_16:
        v17[1] = v18;
        result = 14LL;
LABEL_24:
        *v17 = result;
        return result;
      }
      goto LABEL_17;
    }
LABEL_9:
    result = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(a1 + 8, v23, v24);
    *(_QWORD *)a1 = 7LL;
    return result;
  }
  if ( (v10 & 1) != 0 )
  {
    if ( (v13 & 1) != 0 )
      goto LABEL_9;
    uu_dd::parseargs::parse_bytes_only(&v20, a4, a5, v12);
    v15 = v20;
    result = v21;
    if ( v20 != 14 )
      goto LABEL_17;
    v17 = (__int64 *)a1;
    v18 = 2 * v21;
    if ( is_mul_ok(2uLL, v21) )
      goto LABEL_16;
LABEL_23:
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v17 + 1, v23, v24);
    result = 8LL;
    goto LABEL_24;
  }
  if ( (v13 & 1) != 0 )
  {
    uu_dd::parseargs::parse_bytes_only(&v20, a4, a5, v14);
    v15 = v20;
    result = v21;
    if ( v20 == 14 )
    {
      v17 = (__int64 *)a1;
      v18 = v21 << 9;
      if ( !is_mul_ok(0x200uLL, v21) )
        goto LABEL_23;
      goto LABEL_16;
    }
LABEL_17:
    *(_OWORD *)(a1 + 16) = v22;
    *(_QWORD *)a1 = v15;
    *(_QWORD *)(a1 + 8) = result;
    return result;
  }
  uucore::features::parser::parse_size::Parser::parse_u64(&v20, v25, a4, a5);
  if ( v20 == 2 )
  {
    v19 = -1LL;
    v17 = (__int64 *)a1;
LABEL_22:
    core::ptr::drop_in_place<core::result::Result<u64,uucore::features::parser::parse_size::ParseSizeError>>(&v20);
    v18 = v19;
    if ( is_mul_ok(1uLL, v19) )
      goto LABEL_16;
    goto LABEL_23;
  }
  v17 = (__int64 *)a1;
  if ( (_DWORD)v20 == 4 )
  {
    v19 = v21;
    goto LABEL_22;
  }
  <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v28, v23, v24);
  *(_QWORD *)(a1 + 24) = v29;
  *(_OWORD *)(a1 + 8) = v28;
  *(_QWORD *)a1 = 13LL;
  return core::ptr::drop_in_place<core::result::Result<u64,uucore::features::parser::parse_size::ParseSizeError>>(&v20);
}