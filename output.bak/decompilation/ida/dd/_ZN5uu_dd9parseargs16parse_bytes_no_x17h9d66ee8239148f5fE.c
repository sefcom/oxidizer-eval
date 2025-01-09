unsigned __int64 __fastcall uu_dd::parseargs::parse_bytes_no_x(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5)
{
  __int64 v7; // rbx
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rbp
  __int64 v10; // r15
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // r14
  __int64 v13; // rax
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rcx
  unsigned __int64 result; // rax
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rcx
  unsigned __int64 *v19; // r14
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // kr10_8
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rbx
  unsigned __int64 v24; // [rsp+8h] [rbp-A0h] BYREF
  unsigned __int64 v25; // [rsp+10h] [rbp-98h]
  __int128 v26; // [rsp+18h] [rbp-90h]
  __int64 v27; // [rsp+28h] [rbp-80h]
  __int64 v28; // [rsp+30h] [rbp-78h]
  _QWORD v29[4]; // [rsp+38h] [rbp-70h] BYREF
  __int16 v30; // [rsp+58h] [rbp-50h]
  char v31; // [rsp+5Ah] [rbp-4Eh]
  __int128 v32; // [rsp+60h] [rbp-48h] BYREF
  __int64 v33; // [rsp+70h] [rbp-38h]

  v28 = a3;
  v27 = a2;
  v30 = 257;
  v31 = 0;
  v29[0] = 0LL;
  v29[2] = 0LL;
  v7 = core::str::<impl str>::find(a4, a5);
  v9 = v8;
  v10 = core::str::<impl str>::rfind(a4, a5, 119LL);
  v12 = v11;
  v13 = core::str::<impl str>::rfind(a4, a5, 98LL);
  if ( v7 )
  {
    if ( !(v13 | v10) )
    {
      uu_dd::parseargs::parse_bytes_only((__int64 *)&v24, a4, a5, v9);
      v15 = v24;
      result = v25;
      if ( v24 == 14 )
      {
        v17 = 1LL;
        goto LABEL_14;
      }
LABEL_16:
      *(_OWORD *)(a1 + 16) = v26;
      *(_QWORD *)a1 = v15;
      *(_QWORD *)(a1 + 8) = result;
      return result;
    }
LABEL_7:
    result = <T as alloc::slice::hack::ConvertVec>::to_vec(a1 + 8, v27, v28);
    *(_QWORD *)a1 = 7LL;
    return result;
  }
  if ( !v10 )
  {
    if ( v13 )
    {
      uu_dd::parseargs::parse_bytes_only((__int64 *)&v24, a4, a5, v14);
      v18 = v24;
      result = v25;
      v19 = (unsigned __int64 *)a1;
      if ( v24 != 14 )
      {
        *(_OWORD *)(a1 + 16) = v26;
        *(_QWORD *)a1 = v18;
        *(_QWORD *)(a1 + 8) = result;
        return result;
      }
      v20 = v25 << 9;
      if ( !is_mul_ok(0x200uLL, v25) )
        goto LABEL_15;
    }
    else
    {
      uucore::parser::parse_size::Parser::parse_u64(&v24, v29, a4, a5);
      v19 = (unsigned __int64 *)a1;
      if ( v24 < 2 )
      {
        <T as alloc::slice::hack::ConvertVec>::to_vec(&v32, v27, v28);
        *(_QWORD *)(a1 + 24) = v33;
        *(_OWORD *)(a1 + 8) = v32;
        *(_QWORD *)a1 = 13LL;
        return core::ptr::drop_in_place<core::result::Result<u64,uucore::parser::parse_size::ParseSizeError>>(&v24);
      }
      v22 = -1LL;
      if ( (_DWORD)v24 != 2 )
        v22 = v25;
      v23 = v22;
      core::ptr::drop_in_place<core::result::Result<u64,uucore::parser::parse_size::ParseSizeError>>(&v24);
      v20 = v23;
      if ( !is_mul_ok(1uLL, v23) )
        goto LABEL_15;
    }
LABEL_23:
    v19[1] = v20;
    result = 14LL;
    goto LABEL_24;
  }
  if ( v13 )
    goto LABEL_7;
  uu_dd::parseargs::parse_bytes_only((__int64 *)&v24, a4, a5, v12);
  v15 = v24;
  result = v25;
  if ( v24 != 14 )
    goto LABEL_16;
  v17 = 2LL;
LABEL_14:
  v19 = (unsigned __int64 *)a1;
  v21 = result;
  v20 = v17 * result;
  if ( is_mul_ok(v17, v21) )
    goto LABEL_23;
LABEL_15:
  <T as alloc::slice::hack::ConvertVec>::to_vec(v19 + 1, v27, v28);
  result = 8LL;
LABEL_24:
  *v19 = result;
  return result;
}
