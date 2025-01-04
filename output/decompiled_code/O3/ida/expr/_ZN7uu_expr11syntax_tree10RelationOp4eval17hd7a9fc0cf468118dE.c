__int64 __fastcall uu_expr::syntax_tree::RelationOp::eval(__int64 a1, char a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int128 v6; // xmm0
  __int128 v7; // xmm0
  bool v8; // zf
  bool v9; // zf
  char v10; // bp
  char v11; // r14
  bool v12; // cf
  __int128 v13; // xmm0
  __int128 v14; // [rsp+0h] [rbp-108h] BYREF
  __int128 v15; // [rsp+10h] [rbp-F8h]
  __int64 v16; // [rsp+20h] [rbp-E8h] BYREF
  __int64 v17; // [rsp+28h] [rbp-E0h]
  __int64 v18; // [rsp+30h] [rbp-D8h]
  char v19; // [rsp+38h] [rbp-D0h]
  _BYTE v20[8]; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v21; // [rsp+48h] [rbp-C0h]
  __int64 v22; // [rsp+50h] [rbp-B8h]
  _BYTE v23[8]; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v24; // [rsp+60h] [rbp-A8h]
  __int64 v25; // [rsp+68h] [rbp-A0h]
  _BYTE v26[40]; // [rsp+70h] [rbp-98h] BYREF
  __int128 v27; // [rsp+A0h] [rbp-68h] BYREF
  __int128 v28; // [rsp+B0h] [rbp-58h]
  __int128 v29; // [rsp+C0h] [rbp-48h] BYREF
  __int128 v30; // [rsp+D0h] [rbp-38h]

  result = uu_expr::syntax_tree::AstNode::eval(v26, a3);
  v14 = *(_OWORD *)&v26[8];
  v15 = *(_OWORD *)&v26[24];
  if ( *(_QWORD *)v26 )
  {
    v6 = v14;
    *(_OWORD *)(a1 + 24) = v15;
    *(_OWORD *)(a1 + 8) = v6;
    *(_QWORD *)a1 = 1LL;
    return result;
  }
  v28 = v15;
  v27 = v14;
  uu_expr::syntax_tree::AstNode::eval(v26, a4);
  v14 = *(_OWORD *)&v26[8];
  v15 = *(_OWORD *)&v26[24];
  if ( *(_QWORD *)v26 )
  {
    v7 = v14;
    *(_OWORD *)(a1 + 24) = v15;
    *(_OWORD *)(a1 + 8) = v7;
    *(_QWORD *)a1 = 1LL;
    return core::ptr::drop_in_place<uu_expr::syntax_tree::NumOrStr>(&v27);
  }
  v30 = v15;
  v29 = v14;
  uu_expr::syntax_tree::NumOrStr::to_bigint(&v16, &v27);
  uu_expr::syntax_tree::NumOrStr::to_bigint(&v14, &v29);
  if ( v16 == 0x8000000000000000LL || (_QWORD)v14 == 0x8000000000000000LL )
  {
    *(_OWORD *)&v26[16] = v28;
    *(_OWORD *)v26 = v27;
    uu_expr::syntax_tree::NumOrStr::eval_as_string(v20, v26);
    *(_OWORD *)&v26[16] = v30;
    *(_OWORD *)v26 = v29;
    uu_expr::syntax_tree::NumOrStr::eval_as_string(v23, v26);
    switch ( a2 )
    {
      case 0:
        v9 = (unsigned __int8)<alloc::vec::Vec<T,A1> as core::cmp::PartialOrd<alloc::vec::Vec<T,A2>>>::partial_cmp(
                                v21,
                                v22,
                                v24,
                                v25) == 0xFF;
        goto LABEL_25;
      case 1:
        v12 = (unsigned __int8)(<alloc::vec::Vec<T,A1> as core::cmp::PartialOrd<alloc::vec::Vec<T,A2>>>::partial_cmp(
                                  v21,
                                  v22,
                                  v24,
                                  v25)
                              - 3) < 0xFEu;
        goto LABEL_30;
      case 2:
        v10 = alloc::vec::partial_eq::<impl core::cmp::PartialEq<alloc::vec::Vec<U,A2>> for alloc::vec::Vec<T,A1>>::eq(
                v21,
                v22,
                v24,
                v25);
        goto LABEL_31;
      case 3:
        v10 = alloc::vec::partial_eq::<impl core::cmp::PartialEq<alloc::vec::Vec<U,A2>> for alloc::vec::Vec<T,A1>>::eq(
                v21,
                v22,
                v24,
                v25) ^ 1;
        goto LABEL_31;
      case 4:
        v9 = (unsigned __int8)<alloc::vec::Vec<T,A1> as core::cmp::PartialOrd<alloc::vec::Vec<T,A2>>>::partial_cmp(
                                v21,
                                v22,
                                v24,
                                v25) == 1;
LABEL_25:
        v10 = v9;
        goto LABEL_31;
      case 5:
        v12 = (unsigned __int8)<alloc::vec::Vec<T,A1> as core::cmp::PartialOrd<alloc::vec::Vec<T,A2>>>::partial_cmp(
                                 v21,
                                 v22,
                                 v24,
                                 v25) < 2u;
LABEL_30:
        v10 = v12;
LABEL_31:
        core::ptr::drop_in_place<alloc::string::String>(v23);
        core::ptr::drop_in_place<alloc::string::String>(v20);
        v11 = 0;
        break;
    }
  }
  else
  {
    switch ( a2 )
    {
      case 0:
        v8 = (unsigned __int8)<num_bigint::bigint::BigInt as core::cmp::Ord>::cmp(&v16, &v14) == 0xFF;
        goto LABEL_12;
      case 1:
        if ( (unsigned __int8)<num_bigint::bigint::BigInt as core::cmp::Ord>::cmp(&v16, &v14) == 1 )
          goto LABEL_38;
        goto LABEL_36;
      case 2:
        if ( v19 != BYTE8(v15) )
          goto LABEL_38;
        if ( v19 == 1 )
        {
LABEL_36:
          core::ptr::drop_in_place<core::result::Result<num_bigint::bigint::BigInt,num_bigint::ParseBigIntError>>(&v14);
          core::ptr::drop_in_place<core::result::Result<num_bigint::bigint::BigInt,num_bigint::ParseBigIntError>>(&v16);
          v11 = 1;
          goto LABEL_37;
        }
        v11 = 1;
        v10 = alloc::vec::partial_eq::<impl core::cmp::PartialEq<alloc::vec::Vec<U,A2>> for alloc::vec::Vec<T,A1>>::eq(
                v17,
                v18,
                *((_QWORD *)&v14 + 1),
                v15);
        break;
      case 3:
        v11 = 1;
        if ( v19 == BYTE8(v15) )
        {
          if ( v19 == 1 )
          {
            v10 = 0;
          }
          else
          {
            v10 = alloc::vec::partial_eq::<impl core::cmp::PartialEq<alloc::vec::Vec<U,A2>> for alloc::vec::Vec<T,A1>>::eq(
                    v17,
                    v18,
                    *((_QWORD *)&v14 + 1),
                    v15) ^ 1;
LABEL_13:
            v11 = 1;
          }
        }
        else
        {
          v10 = 1;
        }
        break;
      case 4:
        v8 = (unsigned __int8)<num_bigint::bigint::BigInt as core::cmp::Ord>::cmp(&v16, &v14) == 1;
LABEL_12:
        v10 = v8;
        goto LABEL_13;
      case 5:
        if ( (unsigned __int8)<num_bigint::bigint::BigInt as core::cmp::Ord>::cmp(&v16, &v14) <= 1u )
          goto LABEL_36;
LABEL_38:
        core::ptr::drop_in_place<core::result::Result<num_bigint::bigint::BigInt,num_bigint::ParseBigIntError>>(&v14);
        core::ptr::drop_in_place<core::result::Result<num_bigint::bigint::BigInt,num_bigint::ParseBigIntError>>(&v16);
        v11 = 1;
        goto LABEL_39;
    }
  }
  core::ptr::drop_in_place<core::result::Result<num_bigint::bigint::BigInt,num_bigint::ParseBigIntError>>(&v14);
  core::ptr::drop_in_place<core::result::Result<num_bigint::bigint::BigInt,num_bigint::ParseBigIntError>>(&v16);
  if ( v10 )
LABEL_37:
    result = <uu_expr::syntax_tree::NumOrStr as core::convert::From<usize>>::from(v26, 1LL);
  else
LABEL_39:
    result = <uu_expr::syntax_tree::NumOrStr as core::convert::From<usize>>::from(v26, 0LL);
  v13 = *(_OWORD *)v26;
  *(_OWORD *)(a1 + 24) = *(_OWORD *)&v26[16];
  *(_OWORD *)(a1 + 8) = v13;
  *(_QWORD *)a1 = 0LL;
  if ( v11 )
  {
    core::ptr::drop_in_place<uu_expr::syntax_tree::NumOrStr>(&v29);
    return core::ptr::drop_in_place<uu_expr::syntax_tree::NumOrStr>(&v27);
  }
  return result;
}
