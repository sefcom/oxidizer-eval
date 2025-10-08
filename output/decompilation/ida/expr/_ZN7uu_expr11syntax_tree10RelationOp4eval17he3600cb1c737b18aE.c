__int64 __fastcall uu_expr::syntax_tree::RelationOp::eval(__int64 a1, char a2, __int64 a3, __int64 a4)
{
  __int128 *v4; // r15
  __int128 v5; // xmm0
  __int64 result; // rax
  __int128 v7; // xmm0
  __int128 *v8; // r12
  __int128 v9; // xmm0
  _OWORD *v10; // rdi
  __int128 v11; // xmm0
  __int64 v12; // r14
  unsigned __int8 v13; // bp
  __int64 v14; // r15
  unsigned __int8 v15; // bp
  char v16; // bp
  char v17; // r14
  char v18; // bp
  __int128 v19; // xmm0
  __int128 v20; // [rsp+0h] [rbp-A8h] BYREF
  __int128 v21; // [rsp+10h] [rbp-98h]
  __int64 v22; // [rsp+20h] [rbp-88h] BYREF
  __int64 v23; // [rsp+28h] [rbp-80h]
  __int64 v24; // [rsp+30h] [rbp-78h]
  char v25; // [rsp+38h] [rbp-70h]
  _OWORD v26[2]; // [rsp+40h] [rbp-68h] BYREF
  _OWORD v27[4]; // [rsp+60h] [rbp-48h] BYREF

  v4 = (__int128 *)(a3 + 8);
  if ( *(_DWORD *)a3 == 1 )
  {
    v5 = *v4;
    *(_OWORD *)(a1 + 24) = *(_OWORD *)(a3 + 24);
    *(_OWORD *)(a1 + 8) = v5;
    *(_QWORD *)a1 = 1LL;
    return core::ptr::drop_in_place<core::result::Result<uu_expr::syntax_tree::NumOrStr,uu_expr::ExprError>>(a4);
  }
  v7 = *v4;
  v26[1] = *(_OWORD *)(a3 + 24);
  v26[0] = v7;
  v8 = (__int128 *)(a4 + 8);
  if ( (*(_BYTE *)a4 & 1) != 0 )
  {
    v9 = *v8;
    *(_OWORD *)(a1 + 24) = *(_OWORD *)(a4 + 24);
    *(_OWORD *)(a1 + 8) = v9;
    *(_QWORD *)a1 = 1LL;
    v10 = (_OWORD *)(a3 + 8);
    return core::ptr::drop_in_place<uu_expr::syntax_tree::NumOrStr>(v10);
  }
  v11 = *v8;
  v27[1] = *(_OWORD *)(a4 + 24);
  v27[0] = v11;
  uu_expr::syntax_tree::NumOrStr::to_bigint(&v22, a3 + 8);
  uu_expr::syntax_tree::NumOrStr::to_bigint(&v20, v8);
  v12 = v22;
  if ( (__OFSUB__(-v22, 1LL) | __OFSUB__(-(__int64)v20, 1LL)) != 1 )
  {
    switch ( a2 )
    {
      case 0:
        v14 = v20;
        v15 = <num_bigint::bigint::BigInt as core::cmp::Ord>::cmp(&v22, &v20);
        goto LABEL_19;
      case 1:
        v14 = v20;
        v16 = (char)<num_bigint::bigint::BigInt as core::cmp::Ord>::cmp(&v22, &v20) <= 0;
        goto LABEL_20;
      case 2:
        if ( v25 != BYTE8(v21) )
          goto LABEL_16;
        if ( v25 != 1 )
        {
          v14 = v20;
          v16 = alloc::vec::partial_eq::<impl core::cmp::PartialEq<alloc::vec::Vec<U,A2>> for alloc::vec::Vec<T,A1>>::eq(
                  v23,
                  v24,
                  *((_QWORD *)&v20 + 1),
                  v21);
          goto LABEL_20;
        }
LABEL_30:
        core::ptr::drop_in_place<core::result::Result<num_bigint::bigint::BigInt,num_bigint::ParseBigIntError>>(
          v20,
          *((_QWORD *)&v20 + 1));
        core::ptr::drop_in_place<core::result::Result<num_bigint::bigint::BigInt,num_bigint::ParseBigIntError>>(
          v12,
          v23);
        v17 = 1;
        goto LABEL_31;
      case 3:
        if ( v25 != BYTE8(v21) )
          goto LABEL_30;
        if ( v25 == 1 )
        {
LABEL_16:
          core::ptr::drop_in_place<core::result::Result<num_bigint::bigint::BigInt,num_bigint::ParseBigIntError>>(
            v20,
            *((_QWORD *)&v20 + 1));
          core::ptr::drop_in_place<core::result::Result<num_bigint::bigint::BigInt,num_bigint::ParseBigIntError>>(
            v12,
            v23);
          v17 = 1;
          goto LABEL_29;
        }
        v14 = v20;
        v16 = alloc::vec::partial_eq::<impl core::cmp::PartialEq<alloc::vec::Vec<U,A2>> for alloc::vec::Vec<T,A1>>::eq(
                v23,
                v24,
                *((_QWORD *)&v20 + 1),
                v21) ^ 1;
LABEL_20:
        core::ptr::drop_in_place<core::result::Result<num_bigint::bigint::BigInt,num_bigint::ParseBigIntError>>(
          v14,
          *((_QWORD *)&v20 + 1));
        core::ptr::drop_in_place<core::result::Result<num_bigint::bigint::BigInt,num_bigint::ParseBigIntError>>(
          v12,
          v23);
        v17 = 1;
        if ( v16 )
          goto LABEL_31;
        goto LABEL_29;
      case 4:
        v14 = v20;
        v16 = (char)<num_bigint::bigint::BigInt as core::cmp::Ord>::cmp(&v22, &v20) > 0;
        goto LABEL_20;
      case 5:
        v14 = v20;
        v15 = ~(unsigned __int8)<num_bigint::bigint::BigInt as core::cmp::Ord>::cmp(&v22, &v20);
LABEL_19:
        v16 = v15 >> 7;
        goto LABEL_20;
    }
  }
  core::ptr::drop_in_place<core::result::Result<num_bigint::bigint::BigInt,num_bigint::ParseBigIntError>>(
    v20,
    *((_QWORD *)&v20 + 1));
  core::ptr::drop_in_place<core::result::Result<num_bigint::bigint::BigInt,num_bigint::ParseBigIntError>>(v12, v23);
  uu_expr::syntax_tree::NumOrStr::eval_as_string(&v22, v4);
  uu_expr::syntax_tree::NumOrStr::eval_as_string(&v20, v8);
  switch ( a2 )
  {
    case 0:
      v13 = <alloc::vec::Vec<T,A1> as core::cmp::PartialOrd<alloc::vec::Vec<T,A2>>>::partial_cmp(
              v23,
              v24,
              *((_QWORD *)&v20 + 1),
              v21);
      goto LABEL_27;
    case 1:
      v18 = (char)<alloc::vec::Vec<T,A1> as core::cmp::PartialOrd<alloc::vec::Vec<T,A2>>>::partial_cmp(
                    v23,
                    v24,
                    *((_QWORD *)&v20 + 1),
                    v21) <= 0;
      break;
    case 2:
      v18 = alloc::vec::partial_eq::<impl core::cmp::PartialEq<alloc::vec::Vec<U,A2>> for alloc::vec::Vec<T,A1>>::eq(
              v23,
              v24,
              *((_QWORD *)&v20 + 1),
              v21);
      break;
    case 3:
      v18 = alloc::vec::partial_eq::<impl core::cmp::PartialEq<alloc::vec::Vec<U,A2>> for alloc::vec::Vec<T,A1>>::eq(
              v23,
              v24,
              *((_QWORD *)&v20 + 1),
              v21) ^ 1;
      break;
    case 4:
      v18 = (char)<alloc::vec::Vec<T,A1> as core::cmp::PartialOrd<alloc::vec::Vec<T,A2>>>::partial_cmp(
                    v23,
                    v24,
                    *((_QWORD *)&v20 + 1),
                    v21) > 0;
      break;
    case 5:
      v13 = ~(unsigned __int8)<alloc::vec::Vec<T,A1> as core::cmp::PartialOrd<alloc::vec::Vec<T,A2>>>::partial_cmp(
                                v23,
                                v24,
                                *((_QWORD *)&v20 + 1),
                                v21);
LABEL_27:
      v18 = v13 >> 7;
      break;
  }
  core::ptr::drop_in_place<alloc::string::String>(&v20);
  core::ptr::drop_in_place<alloc::string::String>(&v22);
  v17 = 0;
  if ( v18 )
LABEL_31:
    result = <uu_expr::syntax_tree::NumOrStr as core::convert::From<usize>>::from(&v20, 1LL);
  else
LABEL_29:
    result = <uu_expr::syntax_tree::NumOrStr as core::convert::From<usize>>::from(&v20, 0LL);
  v19 = v20;
  *(_OWORD *)(a1 + 24) = v21;
  *(_OWORD *)(a1 + 8) = v19;
  *(_QWORD *)a1 = 0LL;
  if ( v17 )
  {
    core::ptr::drop_in_place<uu_expr::syntax_tree::NumOrStr>(v27);
    v10 = v26;
    return core::ptr::drop_in_place<uu_expr::syntax_tree::NumOrStr>(v10);
  }
  return result;
}