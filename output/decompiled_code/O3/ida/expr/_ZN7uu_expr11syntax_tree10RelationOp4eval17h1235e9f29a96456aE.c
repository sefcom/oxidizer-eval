__int64 __fastcall uu_expr::syntax_tree::RelationOp::eval(__int64 a1, char a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int128 v6; // xmm0
  __int128 v7; // xmm0
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  bool v12; // zf
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  bool v17; // zf
  char v18; // bp
  char v19; // r14
  bool v20; // cf
  __int128 v21; // xmm0
  __int128 v22; // [rsp+0h] [rbp-108h] BYREF
  __int128 v23; // [rsp+10h] [rbp-F8h]
  __int64 v24; // [rsp+20h] [rbp-E8h] BYREF
  __int64 v25; // [rsp+28h] [rbp-E0h]
  __int64 v26; // [rsp+30h] [rbp-D8h]
  char v27; // [rsp+38h] [rbp-D0h]
  _BYTE v28[8]; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v29; // [rsp+48h] [rbp-C0h]
  __int64 v30; // [rsp+50h] [rbp-B8h]
  _BYTE v31[8]; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v32; // [rsp+60h] [rbp-A8h]
  __int64 v33; // [rsp+68h] [rbp-A0h]
  _BYTE v34[40]; // [rsp+70h] [rbp-98h] BYREF
  __int128 v35; // [rsp+A0h] [rbp-68h] BYREF
  __int128 v36; // [rsp+B0h] [rbp-58h]
  __int128 v37; // [rsp+C0h] [rbp-48h] BYREF
  __int128 v38; // [rsp+D0h] [rbp-38h]

  result = uu_expr::syntax_tree::AstNode::eval((__int64)v34, a3);
  v22 = *(_OWORD *)&v34[8];
  v23 = *(_OWORD *)&v34[24];
  if ( *(_QWORD *)v34 )
  {
    v6 = v22;
    *(_OWORD *)(a1 + 24) = v23;
    *(_OWORD *)(a1 + 8) = v6;
    *(_QWORD *)a1 = 1LL;
    return result;
  }
  v36 = v23;
  v35 = v22;
  uu_expr::syntax_tree::AstNode::eval((__int64)v34, a4);
  v22 = *(_OWORD *)&v34[8];
  v23 = *(_OWORD *)&v34[24];
  if ( *(_QWORD *)v34 )
  {
    v7 = v22;
    *(_OWORD *)(a1 + 24) = v23;
    *(_OWORD *)(a1 + 8) = v7;
    *(_QWORD *)a1 = 1LL;
    return core::ptr::drop_in_place<uu_expr::syntax_tree::NumOrStr>(&v35);
  }
  v38 = v23;
  v37 = v22;
  uu_expr::syntax_tree::NumOrStr::to_bigint((__int64)&v24, &v35);
  uu_expr::syntax_tree::NumOrStr::to_bigint((__int64)&v22, &v37);
  if ( v24 == 0x8000000000000000LL || (_QWORD)v22 == 0x8000000000000000LL )
  {
    *(_OWORD *)&v34[16] = v36;
    *(_OWORD *)v34 = v35;
    uu_expr::syntax_tree::NumOrStr::eval_as_string((__int64)v28, (__int128 *)v34, v8, v9, v10, v11);
    *(_OWORD *)&v34[16] = v38;
    *(_OWORD *)v34 = v37;
    uu_expr::syntax_tree::NumOrStr::eval_as_string((__int64)v31, (__int128 *)v34, v13, v14, v15, v16);
    switch ( a2 )
    {
      case 0:
        v17 = (unsigned __int8)<alloc::vec::Vec<T,A1> as core::cmp::PartialOrd<alloc::vec::Vec<T,A2>>>::partial_cmp(
                                 v29,
                                 v30,
                                 v32,
                                 v33) == 0xFF;
        goto LABEL_25;
      case 1:
        v20 = (unsigned __int8)(<alloc::vec::Vec<T,A1> as core::cmp::PartialOrd<alloc::vec::Vec<T,A2>>>::partial_cmp(
                                  v29,
                                  v30,
                                  v32,
                                  v33)
                              - 3) < 0xFEu;
        goto LABEL_30;
      case 2:
        v18 = alloc::vec::partial_eq::<impl core::cmp::PartialEq<alloc::vec::Vec<U,A2>> for alloc::vec::Vec<T,A1>>::eq(
                v29,
                v30,
                v32,
                v33);
        goto LABEL_31;
      case 3:
        v18 = alloc::vec::partial_eq::<impl core::cmp::PartialEq<alloc::vec::Vec<U,A2>> for alloc::vec::Vec<T,A1>>::eq(
                v29,
                v30,
                v32,
                v33) ^ 1;
        goto LABEL_31;
      case 4:
        v17 = (unsigned __int8)<alloc::vec::Vec<T,A1> as core::cmp::PartialOrd<alloc::vec::Vec<T,A2>>>::partial_cmp(
                                 v29,
                                 v30,
                                 v32,
                                 v33) == 1;
LABEL_25:
        v18 = v17;
        goto LABEL_31;
      case 5:
        v20 = (unsigned __int8)<alloc::vec::Vec<T,A1> as core::cmp::PartialOrd<alloc::vec::Vec<T,A2>>>::partial_cmp(
                                 v29,
                                 v30,
                                 v32,
                                 v33) < 2u;
LABEL_30:
        v18 = v20;
LABEL_31:
        core::ptr::drop_in_place<alloc::string::String>(v31);
        core::ptr::drop_in_place<alloc::string::String>(v28);
        v19 = 0;
        break;
    }
  }
  else
  {
    switch ( a2 )
    {
      case 0:
        v12 = (unsigned __int8)<num_bigint::bigint::BigInt as core::cmp::Ord>::cmp(&v24, &v22) == 0xFF;
        goto LABEL_12;
      case 1:
        if ( (unsigned __int8)<num_bigint::bigint::BigInt as core::cmp::Ord>::cmp(&v24, &v22) == 1 )
          goto LABEL_37;
        goto LABEL_35;
      case 2:
        if ( v27 != BYTE8(v23) )
          goto LABEL_37;
        if ( v27 == 1 )
        {
LABEL_35:
          core::ptr::drop_in_place<core::result::Result<num_bigint::bigint::BigInt,num_bigint::ParseBigIntError>>(&v22);
          core::ptr::drop_in_place<core::result::Result<num_bigint::bigint::BigInt,num_bigint::ParseBigIntError>>(&v24);
          v19 = 1;
          goto LABEL_36;
        }
        v19 = 1;
        v18 = alloc::vec::partial_eq::<impl core::cmp::PartialEq<alloc::vec::Vec<U,A2>> for alloc::vec::Vec<T,A1>>::eq(
                v25,
                v26,
                *((_QWORD *)&v22 + 1),
                v23);
        break;
      case 3:
        if ( v27 != BYTE8(v23) )
          goto LABEL_35;
        if ( v27 == 1 )
        {
LABEL_37:
          core::ptr::drop_in_place<core::result::Result<num_bigint::bigint::BigInt,num_bigint::ParseBigIntError>>(&v22);
          core::ptr::drop_in_place<core::result::Result<num_bigint::bigint::BigInt,num_bigint::ParseBigIntError>>(&v24);
          v19 = 1;
          goto LABEL_38;
        }
        v18 = alloc::vec::partial_eq::<impl core::cmp::PartialEq<alloc::vec::Vec<U,A2>> for alloc::vec::Vec<T,A1>>::eq(
                v25,
                v26,
                *((_QWORD *)&v22 + 1),
                v23) ^ 1;
LABEL_13:
        v19 = 1;
        break;
      case 4:
        v12 = (unsigned __int8)<num_bigint::bigint::BigInt as core::cmp::Ord>::cmp(&v24, &v22) == 1;
LABEL_12:
        v18 = v12;
        goto LABEL_13;
      case 5:
        if ( (unsigned __int8)<num_bigint::bigint::BigInt as core::cmp::Ord>::cmp(&v24, &v22) <= 1u )
          goto LABEL_35;
        goto LABEL_37;
    }
  }
  core::ptr::drop_in_place<core::result::Result<num_bigint::bigint::BigInt,num_bigint::ParseBigIntError>>(&v22);
  core::ptr::drop_in_place<core::result::Result<num_bigint::bigint::BigInt,num_bigint::ParseBigIntError>>(&v24);
  if ( v18 )
LABEL_36:
    result = <uu_expr::syntax_tree::NumOrStr as core::convert::From<usize>>::from(v34, 1LL);
  else
LABEL_38:
    result = <uu_expr::syntax_tree::NumOrStr as core::convert::From<usize>>::from(v34, 0LL);
  v21 = *(_OWORD *)v34;
  *(_OWORD *)(a1 + 24) = *(_OWORD *)&v34[16];
  *(_OWORD *)(a1 + 8) = v21;
  *(_QWORD *)a1 = 0LL;
  if ( v19 )
  {
    core::ptr::drop_in_place<uu_expr::syntax_tree::NumOrStr>(&v37);
    return core::ptr::drop_in_place<uu_expr::syntax_tree::NumOrStr>(&v35);
  }
  return result;
}
