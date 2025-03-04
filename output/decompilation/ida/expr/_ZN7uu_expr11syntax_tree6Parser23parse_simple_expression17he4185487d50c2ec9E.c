__int64 __fastcall uu_expr::syntax_tree::Parser::parse_simple_expression(__int64 a1, __int64 *a2)
{
  __int64 *v2; // r14
  __int64 result; // rax
  __int64 *v5; // r15
  __int64 v6; // r12
  __int128 v7; // xmm0
  __int128 *v8; // rdi
  __int64 v9; // rcx
  __int128 v10; // xmm0
  __int64 v11; // r14
  __int64 v12; // rcx
  _BYTE *v13; // rdi
  char v14; // dl
  __int128 v15; // xmm0
  __int64 v16; // rdx
  __int128 v17; // xmm0
  __int64 v18; // rsi
  __int64 v19; // r15
  __int64 v20; // rax
  __int64 v21; // rcx
  unsigned __int64 v22; // rsi
  unsigned __int64 v23; // rdi
  _BYTE v24[40]; // [rsp+0h] [rbp-118h] BYREF
  __int128 v25; // [rsp+30h] [rbp-E8h]
  __int128 v26; // [rsp+40h] [rbp-D8h]
  __int128 v27; // [rsp+50h] [rbp-C8h] BYREF
  __int128 v28; // [rsp+60h] [rbp-B8h]
  int v29; // [rsp+78h] [rbp-A0h]
  char v30; // [rsp+7Ch] [rbp-9Ch]
  __int128 v31; // [rsp+80h] [rbp-98h] BYREF
  __int128 v32; // [rsp+90h] [rbp-88h]
  __int64 v33; // [rsp+A8h] [rbp-70h]
  __int128 v34; // [rsp+B0h] [rbp-68h] BYREF
  __int128 v35; // [rsp+C0h] [rbp-58h]
  _OWORD v36[4]; // [rsp+D0h] [rbp-48h] BYREF

  v2 = a2;
  uu_expr::syntax_tree::Parser::next((__int64)v24, a2);
  v5 = *(__int64 **)&v24[8];
  result = *(_QWORD *)v24;
  v6 = *(_QWORD *)&v24[16];
  if ( *(_QWORD *)v24 != 7LL )
  {
    v9 = *(_QWORD *)&v24[24];
    *(_OWORD *)(a1 + 8) = *(_OWORD *)v24;
    *(_QWORD *)(a1 + 24) = v6;
    goto LABEL_7;
  }
  if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                           *(_QWORD *)&v24[8],
                           *(_QWORD *)&v24[16],
                           aMatch,
                           5LL) )
  {
    if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v5, v6, aSubstr, 6LL) )
    {
      result = uu_expr::syntax_tree::Parser::parse_expression((__int64)v24, a2);
      v25 = *(_OWORD *)&v24[8];
      v26 = *(_OWORD *)&v24[24];
      if ( !*(_QWORD *)v24 )
      {
        v35 = v26;
        v34 = v25;
        uu_expr::syntax_tree::Parser::parse_expression((__int64)v24, a2);
        v25 = *(_OWORD *)&v24[8];
        v26 = *(_OWORD *)&v24[24];
        if ( *(_QWORD *)v24 )
        {
          v10 = v25;
          *(_OWORD *)(a1 + 24) = v26;
          *(_OWORD *)(a1 + 8) = v10;
          *(_QWORD *)a1 = 1LL;
        }
        else
        {
          v32 = v26;
          v31 = v25;
          uu_expr::syntax_tree::Parser::parse_expression((__int64)v24, a2);
          v25 = *(_OWORD *)&v24[8];
          v26 = *(_OWORD *)&v24[24];
          if ( !*(_QWORD *)v24 )
          {
            v28 = v26;
            v27 = v25;
            *(_OWORD *)&v24[16] = v35;
            *(_OWORD *)v24 = v34;
            v11 = alloc::boxed::Box<T>::new(v24);
            v33 = v11;
            *(_OWORD *)&v24[16] = v32;
            *(_OWORD *)v24 = v31;
            v19 = alloc::boxed::Box<T>::new(v24);
            *(_QWORD *)&v25 = v19;
            *(_OWORD *)&v24[16] = v28;
            *(_OWORD *)v24 = v27;
            v13 = v24;
            v12 = alloc::boxed::Box<T>::new(v24);
            v14 = 2;
            result = v19;
            goto LABEL_37;
          }
          v17 = v25;
          *(_OWORD *)(a1 + 24) = v26;
          *(_OWORD *)(a1 + 8) = v17;
          *(_QWORD *)a1 = 1LL;
          core::ptr::drop_in_place<uu_expr::syntax_tree::AstNode>(&v31);
        }
        v8 = &v34;
        return core::ptr::drop_in_place<uu_expr::syntax_tree::AstNode>(v8);
      }
      goto LABEL_18;
    }
    if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v5, v6, aIndex, 5LL) )
    {
      result = uu_expr::syntax_tree::Parser::parse_expression((__int64)v24, a2);
      v25 = *(_OWORD *)&v24[8];
      v26 = *(_OWORD *)&v24[24];
      if ( !*(_QWORD *)v24 )
      {
        v32 = v26;
        v31 = v25;
        uu_expr::syntax_tree::Parser::parse_expression((__int64)v24, a2);
        v25 = *(_OWORD *)&v24[8];
        v26 = *(_OWORD *)&v24[24];
        if ( *(_QWORD *)v24 )
          goto LABEL_5;
        v28 = v26;
        v27 = v25;
        *(_OWORD *)&v24[16] = v32;
        *(_OWORD *)v24 = v31;
        v11 = alloc::boxed::Box<T>::new(v24);
        *(_QWORD *)&v25 = v11;
        *(_OWORD *)&v24[16] = v28;
        *(_OWORD *)v24 = v27;
        result = alloc::boxed::Box<T>::new(v24);
        LOBYTE(v13) = 2;
        LOBYTE(a2) = 1;
        v14 = 1;
        goto LABEL_37;
      }
LABEL_18:
      v15 = v25;
      *(_OWORD *)(a1 + 24) = v26;
      *(_OWORD *)(a1 + 8) = v15;
      *(_QWORD *)a1 = 1LL;
      return result;
    }
    if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v5, v6, aLength, 6LL) )
    {
      result = uu_expr::syntax_tree::Parser::parse_expression((__int64)v24, a2);
      v25 = *(_OWORD *)&v24[8];
      v26 = *(_OWORD *)&v24[24];
      if ( !*(_QWORD *)v24 )
      {
        v36[1] = v26;
        v36[0] = v25;
        v13 = v36;
        result = alloc::boxed::Box<T>::new(v36);
        v11 = result;
        v14 = 3;
        goto LABEL_37;
      }
      goto LABEL_18;
    }
    if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v5, v6, asc_5F25F, 1LL) )
    {
      v13 = v24;
      if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v5, v6, asc_5F27B, 1LL) )
      {
        result = uu_expr::syntax_tree::Parser::parse_expression((__int64)v24, a2);
        v25 = *(_OWORD *)&v24[8];
        v26 = *(_OWORD *)&v24[24];
        if ( !*(_QWORD *)v24 )
        {
          v28 = v26;
          v27 = v25;
          uu_expr::syntax_tree::Parser::next((__int64)v24, a2);
          v18 = *(_QWORD *)&v24[16];
          if ( *(_QWORD *)v24 == 7LL )
          {
            if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                                    *(_QWORD *)&v24[8],
                                    *(_QWORD *)&v24[16],
                                    asc_5F27C,
                                    1LL) )
            {
              v14 = v27;
              LOBYTE(v13) = BYTE1(v27);
              LOBYTE(a2) = BYTE2(v27);
              v29 = *(_DWORD *)((char *)&v27 + 3);
              v30 = BYTE7(v27);
              v11 = *((_QWORD *)&v27 + 1);
              v12 = *((_QWORD *)&v28 + 1);
              result = v28;
              goto LABEL_37;
            }
            v22 = v2[1];
            v23 = v2[2] - 1;
            if ( v23 >= v22 )
              core::panicking::panic_bounds_check(v23, v22, &off_1A32B0);
            <T as alloc::slice::hack::ConvertVec>::to_vec(
              v24,
              *(_QWORD *)(*v2 + 16 * v23),
              *(_QWORD *)(*v2 + 16 * v23 + 8));
            *(_QWORD *)(a1 + 32) = *(_QWORD *)&v24[16];
            *(_OWORD *)(a1 + 16) = *(_OWORD *)v24;
            v20 = 6LL;
            v21 = 8LL;
          }
          else
          {
            v20 = *(_QWORD *)&v24[24];
            *(_OWORD *)(a1 + 8) = *(_OWORD *)v24;
            *(_QWORD *)(a1 + 24) = v18;
            v21 = 32LL;
          }
          *(_QWORD *)(a1 + v21) = v20;
          *(_QWORD *)a1 = 1LL;
          v8 = &v27;
          return core::ptr::drop_in_place<uu_expr::syntax_tree::AstNode>(v8);
        }
        goto LABEL_18;
      }
      a2 = v5;
      v16 = v6;
LABEL_35:
      <T as alloc::slice::hack::ConvertVec>::to_vec(v24, a2, v16);
      result = *(_QWORD *)&v24[8];
      v11 = *(_QWORD *)v24;
      v12 = *(_QWORD *)&v24[16];
      v14 = 0;
      goto LABEL_37;
    }
    uu_expr::syntax_tree::Parser::next((__int64)v24, a2);
    a2 = *(__int64 **)&v24[8];
    result = *(_QWORD *)v24;
    v16 = *(_QWORD *)&v24[16];
    if ( *(_QWORD *)v24 == 7LL )
    {
      v13 = v24;
      goto LABEL_35;
    }
    v9 = *(_QWORD *)&v24[24];
    *(_OWORD *)(a1 + 8) = *(_OWORD *)v24;
    *(_QWORD *)(a1 + 24) = v16;
LABEL_7:
    *(_QWORD *)(a1 + 32) = v9;
    *(_QWORD *)a1 = 1LL;
    return result;
  }
  result = uu_expr::syntax_tree::Parser::parse_expression((__int64)v24, a2);
  v25 = *(_OWORD *)&v24[8];
  v26 = *(_OWORD *)&v24[24];
  if ( *(_QWORD *)v24 )
    goto LABEL_18;
  v32 = v26;
  v31 = v25;
  uu_expr::syntax_tree::Parser::parse_expression((__int64)v24, a2);
  v25 = *(_OWORD *)&v24[8];
  v26 = *(_OWORD *)&v24[24];
  if ( *(_QWORD *)v24 )
  {
LABEL_5:
    v7 = v25;
    *(_OWORD *)(a1 + 24) = v26;
    *(_OWORD *)(a1 + 8) = v7;
    *(_QWORD *)a1 = 1LL;
    v8 = &v31;
    return core::ptr::drop_in_place<uu_expr::syntax_tree::AstNode>(v8);
  }
  v28 = v26;
  v27 = v25;
  *(_OWORD *)&v24[16] = v32;
  *(_OWORD *)v24 = v31;
  v11 = alloc::boxed::Box<T>::new(v24);
  *(_QWORD *)&v25 = v11;
  *(_OWORD *)&v24[16] = v28;
  *(_OWORD *)v24 = v27;
  result = alloc::boxed::Box<T>::new(v24);
  v14 = 1;
  LOBYTE(v13) = 2;
  LOBYTE(a2) = 0;
LABEL_37:
  *(_BYTE *)(a1 + 8) = v14;
  *(_BYTE *)(a1 + 9) = (_BYTE)v13;
  *(_BYTE *)(a1 + 10) = (_BYTE)a2;
  *(_DWORD *)(a1 + 11) = v29;
  *(_BYTE *)(a1 + 15) = v30;
  *(_QWORD *)(a1 + 16) = v11;
  *(_QWORD *)(a1 + 24) = result;
  *(_QWORD *)(a1 + 32) = v12;
  *(_QWORD *)a1 = 0LL;
  return result;
}
