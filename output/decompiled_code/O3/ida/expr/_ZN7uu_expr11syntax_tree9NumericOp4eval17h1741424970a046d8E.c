__int64 __fastcall uu_expr::syntax_tree::NumericOp::eval(__int64 a1, char a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // [rsp+0h] [rbp-138h] BYREF
  __int128 v14; // [rsp+10h] [rbp-128h]
  _BYTE v15[40]; // [rsp+20h] [rbp-118h] BYREF
  _BYTE v16[40]; // [rsp+50h] [rbp-E8h] BYREF
  __int128 v17; // [rsp+80h] [rbp-B8h] BYREF
  __int128 v18; // [rsp+90h] [rbp-A8h]
  __int128 v19; // [rsp+A0h] [rbp-98h] BYREF
  __int128 v20; // [rsp+B0h] [rbp-88h]
  __int128 v21; // [rsp+C0h] [rbp-78h]
  __int128 v22; // [rsp+D0h] [rbp-68h]
  __int128 v23; // [rsp+E0h] [rbp-58h] BYREF
  __int128 v24; // [rsp+F0h] [rbp-48h]
  __int128 v25; // [rsp+100h] [rbp-38h] BYREF
  __int128 v26; // [rsp+110h] [rbp-28h]

  result = uu_expr::syntax_tree::AstNode::eval(v16, a3);
  v23 = *(_OWORD *)&v16[8];
  v24 = *(_OWORD *)&v16[24];
  if ( *(_QWORD *)v16 )
  {
    v6 = v23;
    v7 = v24;
LABEL_5:
    *(_OWORD *)(a1 + 24) = v7;
    *(_OWORD *)(a1 + 8) = v6;
    *(_QWORD *)a1 = 1LL;
    return result;
  }
  result = uu_expr::syntax_tree::NumOrStr::eval_as_bigint(v15, &v23);
  v13 = *(_OWORD *)&v15[8];
  v14 = *(_OWORD *)&v15[24];
  if ( *(_QWORD *)v15 )
  {
    v6 = v13;
    v7 = v14;
    goto LABEL_5;
  }
  v20 = v14;
  v19 = v13;
  uu_expr::syntax_tree::AstNode::eval(v16, a4);
  v25 = *(_OWORD *)&v16[8];
  v26 = *(_OWORD *)&v16[24];
  if ( *(_QWORD *)v16 )
  {
    v8 = v25;
    v9 = v26;
  }
  else
  {
    uu_expr::syntax_tree::NumOrStr::eval_as_bigint(v15, &v25);
    v13 = *(_OWORD *)&v15[8];
    v14 = *(_OWORD *)&v15[24];
    if ( !*(_QWORD *)v15 )
    {
      v18 = v14;
      v17 = v13;
      switch ( a2 )
      {
        case 0:
          *(_OWORD *)&v15[16] = v20;
          *(_OWORD *)v15 = v19;
          *(_OWORD *)&v16[16] = v18;
          *(_OWORD *)v16 = v17;
          result = num_bigint::bigint::addition::<impl core::ops::arith::Add for num_bigint::bigint::BigInt>::add(
                     &v13,
                     v15,
                     v16);
          goto LABEL_20;
        case 1:
          *(_OWORD *)&v15[16] = v20;
          *(_OWORD *)v15 = v19;
          *(_OWORD *)&v16[16] = v18;
          *(_OWORD *)v16 = v17;
          result = num_bigint::bigint::subtraction::<impl core::ops::arith::Sub for num_bigint::bigint::BigInt>::sub(
                     &v13,
                     v15,
                     v16);
          goto LABEL_20;
        case 2:
          *(_OWORD *)&v15[16] = v20;
          *(_OWORD *)v15 = v19;
          *(_OWORD *)&v16[16] = v18;
          *(_OWORD *)v16 = v17;
          result = num_bigint::bigint::multiplication::<impl core::ops::arith::Mul for num_bigint::bigint::BigInt>::mul(
                     &v13,
                     v15,
                     v16);
LABEL_20:
          v11 = v13;
          v12 = v14;
          goto LABEL_21;
        case 3:
          if ( BYTE8(v18) == 1 )
            goto LABEL_24;
          num_bigint::bigint::division::<impl core::ops::arith::Div<&num_bigint::bigint::BigInt> for &num_bigint::bigint::BigInt>::div(
            v16,
            &v19,
            &v17);
          v10 = *(_OWORD *)v16;
          v21 = *(_OWORD *)v16;
          v22 = *(_OWORD *)&v16[16];
          *(_OWORD *)(a1 + 24) = *(_OWORD *)&v16[16];
          *(_OWORD *)(a1 + 8) = v10;
          *(_QWORD *)a1 = 0LL;
          core::ptr::drop_in_place<num_bigint::bigint::BigInt>(&v17);
          return core::ptr::drop_in_place<num_bigint::bigint::BigInt>(&v19);
        case 4:
          if ( BYTE8(v18) == 1 )
          {
            *(_QWORD *)v15 = 0x8000000000000000LL;
          }
          else
          {
            num_bigint::bigint::division::<impl core::ops::arith::Div<&num_bigint::bigint::BigInt> for &num_bigint::bigint::BigInt>::div(
              v16,
              &v19,
              &v17);
            *(_OWORD *)&v15[16] = *(_OWORD *)&v16[16];
            *(_OWORD *)v15 = *(_OWORD *)v16;
            if ( *(_QWORD *)v16 != 0x8000000000000000LL )
            {
              core::ptr::drop_in_place<core::option::Option<num_bigint::bigint::BigInt>>(v15);
              *(_OWORD *)&v15[16] = v20;
              *(_OWORD *)v15 = v19;
              *(_OWORD *)&v16[16] = v18;
              *(_OWORD *)v16 = v17;
              result = num_bigint::bigint::division::<impl core::ops::arith::Rem for num_bigint::bigint::BigInt>::rem(
                         &v13,
                         v15,
                         v16);
              v11 = v13;
              v12 = v14;
LABEL_21:
              v22 = v12;
              v21 = v11;
              *(_OWORD *)(a1 + 24) = v12;
              *(_OWORD *)(a1 + 8) = v11;
              *(_QWORD *)a1 = 0LL;
              return result;
            }
          }
          core::ptr::drop_in_place<core::option::Option<num_bigint::bigint::BigInt>>(v15);
LABEL_24:
          *(_QWORD *)(a1 + 8) = 4LL;
          *(_QWORD *)a1 = 1LL;
          core::ptr::drop_in_place<num_bigint::bigint::BigInt>(&v17);
          return core::ptr::drop_in_place<num_bigint::bigint::BigInt>(&v19);
      }
    }
    v8 = v13;
    v9 = v14;
  }
  *(_OWORD *)(a1 + 24) = v9;
  *(_OWORD *)(a1 + 8) = v8;
  *(_QWORD *)a1 = 1LL;
  return core::ptr::drop_in_place<num_bigint::bigint::BigInt>(&v19);
}
