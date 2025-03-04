void __fastcall uu_expr::syntax_tree::NumericOp::eval(__int64 a1, char a2, __int64 a3, __int64 a4)
{
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // [rsp+0h] [rbp-138h] BYREF
  __int128 v13; // [rsp+10h] [rbp-128h]
  _BYTE v14[40]; // [rsp+20h] [rbp-118h] BYREF
  _BYTE v15[40]; // [rsp+50h] [rbp-E8h] BYREF
  __int128 v16; // [rsp+80h] [rbp-B8h] BYREF
  __int128 v17; // [rsp+90h] [rbp-A8h]
  __int128 v18; // [rsp+A0h] [rbp-98h] BYREF
  __int128 v19; // [rsp+B0h] [rbp-88h]
  __int128 v20; // [rsp+C0h] [rbp-78h]
  __int128 v21; // [rsp+D0h] [rbp-68h]
  __int128 v22; // [rsp+E0h] [rbp-58h] BYREF
  __int128 v23; // [rsp+F0h] [rbp-48h]
  __int128 v24; // [rsp+100h] [rbp-38h] BYREF
  __int128 v25; // [rsp+110h] [rbp-28h]

  uu_expr::syntax_tree::AstNode::eval((__int64)v15, a3);
  v22 = *(_OWORD *)&v15[8];
  v23 = *(_OWORD *)&v15[24];
  if ( *(_QWORD *)v15 )
  {
    v5 = v22;
    v6 = v23;
LABEL_5:
    *(_OWORD *)(a1 + 24) = v6;
    *(_OWORD *)(a1 + 8) = v5;
    *(_QWORD *)a1 = 1LL;
    return;
  }
  uu_expr::syntax_tree::NumOrStr::eval_as_bigint((__int64)v14, &v22);
  v12 = *(_OWORD *)&v14[8];
  v13 = *(_OWORD *)&v14[24];
  if ( *(_QWORD *)v14 )
  {
    v5 = v12;
    v6 = v13;
    goto LABEL_5;
  }
  v19 = v13;
  v18 = v12;
  uu_expr::syntax_tree::AstNode::eval((__int64)v15, a4);
  v24 = *(_OWORD *)&v15[8];
  v25 = *(_OWORD *)&v15[24];
  if ( *(_QWORD *)v15 )
  {
    v7 = v24;
    v8 = v25;
  }
  else
  {
    uu_expr::syntax_tree::NumOrStr::eval_as_bigint((__int64)v14, &v24);
    v12 = *(_OWORD *)&v14[8];
    v13 = *(_OWORD *)&v14[24];
    if ( !*(_QWORD *)v14 )
    {
      v17 = v13;
      v16 = v12;
      switch ( a2 )
      {
        case 0:
          *(_OWORD *)&v14[16] = v19;
          *(_OWORD *)v14 = v18;
          *(_OWORD *)&v15[16] = v17;
          *(_OWORD *)v15 = v16;
          num_bigint::bigint::addition::<impl core::ops::arith::Add for num_bigint::bigint::BigInt>::add(&v12, v14, v15);
          goto LABEL_20;
        case 1:
          *(_OWORD *)&v14[16] = v19;
          *(_OWORD *)v14 = v18;
          *(_OWORD *)&v15[16] = v17;
          *(_OWORD *)v15 = v16;
          num_bigint::bigint::subtraction::<impl core::ops::arith::Sub for num_bigint::bigint::BigInt>::sub(
            &v12,
            v14,
            v15);
          goto LABEL_20;
        case 2:
          *(_OWORD *)&v14[16] = v19;
          *(_OWORD *)v14 = v18;
          *(_OWORD *)&v15[16] = v17;
          *(_OWORD *)v15 = v16;
          num_bigint::bigint::multiplication::<impl core::ops::arith::Mul for num_bigint::bigint::BigInt>::mul(
            &v12,
            v14,
            v15);
LABEL_20:
          v10 = v12;
          v11 = v13;
          goto LABEL_21;
        case 3:
          if ( BYTE8(v17) == 1 )
            goto LABEL_24;
          num_bigint::bigint::division::<impl core::ops::arith::Div<&num_bigint::bigint::BigInt> for &num_bigint::bigint::BigInt>::div(
            v15,
            &v18,
            &v16);
          v9 = *(_OWORD *)v15;
          v20 = *(_OWORD *)v15;
          v21 = *(_OWORD *)&v15[16];
          *(_OWORD *)(a1 + 24) = *(_OWORD *)&v15[16];
          *(_OWORD *)(a1 + 8) = v9;
          *(_QWORD *)a1 = 0LL;
          core::ptr::drop_in_place<num_bigint::bigint::BigInt>(&v16);
          goto LABEL_11;
        case 4:
          if ( BYTE8(v17) == 1 )
          {
            *(_QWORD *)v14 = 0x8000000000000000LL;
          }
          else
          {
            num_bigint::bigint::division::<impl core::ops::arith::Div<&num_bigint::bigint::BigInt> for &num_bigint::bigint::BigInt>::div(
              v15,
              &v18,
              &v16);
            *(_OWORD *)&v14[16] = *(_OWORD *)&v15[16];
            *(_OWORD *)v14 = *(_OWORD *)v15;
            if ( *(_QWORD *)v15 != 0x8000000000000000LL )
            {
              core::ptr::drop_in_place<core::option::Option<num_bigint::bigint::BigInt>>(v14);
              *(_OWORD *)&v14[16] = v19;
              *(_OWORD *)v14 = v18;
              *(_OWORD *)&v15[16] = v17;
              *(_OWORD *)v15 = v16;
              num_bigint::bigint::division::<impl core::ops::arith::Rem for num_bigint::bigint::BigInt>::rem(
                &v12,
                v14,
                v15);
              v10 = v12;
              v11 = v13;
LABEL_21:
              v21 = v11;
              v20 = v10;
              *(_OWORD *)(a1 + 24) = v11;
              *(_OWORD *)(a1 + 8) = v10;
              *(_QWORD *)a1 = 0LL;
              return;
            }
          }
          core::ptr::drop_in_place<core::option::Option<num_bigint::bigint::BigInt>>(v14);
LABEL_24:
          *(_QWORD *)(a1 + 8) = 4LL;
          *(_QWORD *)a1 = 1LL;
          core::ptr::drop_in_place<num_bigint::bigint::BigInt>(&v16);
          goto LABEL_11;
      }
    }
    v7 = v12;
    v8 = v13;
  }
  *(_OWORD *)(a1 + 24) = v8;
  *(_OWORD *)(a1 + 8) = v7;
  *(_QWORD *)a1 = 1LL;
LABEL_11:
  core::ptr::drop_in_place<num_bigint::bigint::BigInt>(&v18);
}
