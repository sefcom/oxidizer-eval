__int64 __fastcall uu_expr::syntax_tree::NumericOp::eval(__int64 a1, char a2, __int64 a3, __int64 a4)
{
  __int128 *v6; // rsi
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int64 result; // rax
  __int128 *v10; // rsi
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm0
  __int128 v15; // [rsp+0h] [rbp-E8h] BYREF
  __int128 v16; // [rsp+10h] [rbp-D8h]
  _BYTE v17[40]; // [rsp+20h] [rbp-C8h] BYREF
  __int128 v18; // [rsp+50h] [rbp-98h] BYREF
  __int128 v19; // [rsp+60h] [rbp-88h]
  __int128 v20; // [rsp+70h] [rbp-78h] BYREF
  __int128 v21; // [rsp+80h] [rbp-68h]
  __int128 v22; // [rsp+90h] [rbp-58h] BYREF
  __int128 v23; // [rsp+A0h] [rbp-48h]
  __int128 v24; // [rsp+B0h] [rbp-38h]
  __int128 v25; // [rsp+C0h] [rbp-28h]

  v6 = (__int128 *)(a3 + 8);
  if ( *(_DWORD *)a3 == 1 )
  {
    v7 = *v6;
    v8 = *(_OWORD *)(a3 + 24);
LABEL_5:
    *(_OWORD *)(a1 + 24) = v8;
    *(_OWORD *)(a1 + 8) = v7;
    *(_QWORD *)a1 = 1LL;
    return core::ptr::drop_in_place<core::result::Result<uu_expr::syntax_tree::NumOrStr,uu_expr::ExprError>>(a4);
  }
  uu_expr::syntax_tree::NumOrStr::eval_as_bigint(v17, v6);
  v15 = *(_OWORD *)&v17[8];
  v16 = *(_OWORD *)&v17[24];
  if ( *(_DWORD *)v17 == 1 )
  {
    v7 = v15;
    v8 = v16;
    goto LABEL_5;
  }
  v21 = v16;
  v20 = v15;
  v10 = (__int128 *)(a4 + 8);
  if ( (*(_BYTE *)a4 & 1) != 0 )
  {
    v11 = *v10;
    v12 = *(_OWORD *)(a4 + 24);
  }
  else
  {
    uu_expr::syntax_tree::NumOrStr::eval_as_bigint(v17, v10);
    v15 = *(_OWORD *)&v17[8];
    v16 = *(_OWORD *)&v17[24];
    if ( *(_DWORD *)v17 != 1 )
    {
      v19 = v16;
      v18 = v15;
      switch ( a2 )
      {
        case 0:
          v16 = v21;
          v15 = v20;
          *(_OWORD *)&v17[16] = v19;
          *(_OWORD *)v17 = v18;
          result = ((__int64 (__fastcall *)(__int128 *, __int128 *, _BYTE *))num_bigint::bigint::addition::<impl core::ops::arith::Add for num_bigint::bigint::BigInt>::add)(
                     &v22,
                     &v15,
                     v17);
          goto LABEL_21;
        case 1:
          v16 = v21;
          v15 = v20;
          *(_OWORD *)&v17[16] = v19;
          *(_OWORD *)v17 = v18;
          result = ((__int64 (__fastcall *)(__int128 *, __int128 *, _BYTE *))num_bigint::bigint::subtraction::<impl core::ops::arith::Sub for num_bigint::bigint::BigInt>::sub)(
                     &v22,
                     &v15,
                     v17);
          goto LABEL_21;
        case 2:
          v16 = v21;
          v15 = v20;
          *(_OWORD *)&v17[16] = v19;
          *(_OWORD *)v17 = v18;
          result = ((__int64 (__fastcall *)(__int128 *, __int128 *, _BYTE *))num_bigint::bigint::multiplication::<impl core::ops::arith::Mul for num_bigint::bigint::BigInt>::mul)(
                     &v22,
                     &v15,
                     v17);
          goto LABEL_21;
        case 3:
          if ( BYTE8(v19) == 1 )
            goto LABEL_19;
          num_bigint::bigint::division::<impl core::ops::arith::Div for &num_bigint::bigint::BigInt>::div(
            v17,
            &v20,
            &v18);
          v14 = *(_OWORD *)v17;
          v24 = *(_OWORD *)v17;
          v25 = *(_OWORD *)&v17[16];
          *(_OWORD *)(a1 + 24) = *(_OWORD *)&v17[16];
          *(_OWORD *)(a1 + 8) = v14;
          *(_QWORD *)a1 = 0LL;
          goto LABEL_23;
        case 4:
          if ( BYTE8(v19) != 1 )
          {
            num_bigint::bigint::division::<impl core::ops::arith::Div for &num_bigint::bigint::BigInt>::div(
              v17,
              &v20,
              &v18);
            v10 = *(__int128 **)&v17[8];
            if ( *(_QWORD *)v17 != 0x8000000000000000LL )
            {
              core::ptr::drop_in_place<core::result::Result<num_bigint::bigint::BigInt,num_bigint::ParseBigIntError>>(
                *(_QWORD *)v17,
                *(_QWORD *)&v17[8]);
              v16 = v21;
              v15 = v20;
              *(_OWORD *)&v17[16] = v19;
              *(_OWORD *)v17 = v18;
              result = ((__int64 (__fastcall *)(__int128 *, __int128 *, _BYTE *))num_bigint::bigint::division::<impl core::ops::arith::Rem for num_bigint::bigint::BigInt>::rem)(
                         &v22,
                         &v15,
                         v17);
LABEL_21:
              v13 = v22;
              v25 = v23;
              v24 = v22;
              *(_OWORD *)(a1 + 24) = v23;
              *(_OWORD *)(a1 + 8) = v13;
              *(_QWORD *)a1 = 0LL;
              return result;
            }
          }
          core::ptr::drop_in_place<core::result::Result<num_bigint::bigint::BigInt,num_bigint::ParseBigIntError>>(
            0x8000000000000000LL,
            v10);
LABEL_19:
          *(_QWORD *)(a1 + 8) = 4LL;
          *(_QWORD *)a1 = 1LL;
LABEL_23:
          core::ptr::drop_in_place<num_bigint::bigint::BigInt>(v18, *((_QWORD *)&v18 + 1));
          break;
      }
      return core::ptr::drop_in_place<num_bigint::bigint::BigInt>(v20, *((_QWORD *)&v20 + 1));
    }
    v11 = v15;
    v12 = v16;
  }
  *(_OWORD *)(a1 + 24) = v12;
  *(_OWORD *)(a1 + 8) = v11;
  *(_QWORD *)a1 = 1LL;
  return core::ptr::drop_in_place<num_bigint::bigint::BigInt>(v20, *((_QWORD *)&v20 + 1));
}