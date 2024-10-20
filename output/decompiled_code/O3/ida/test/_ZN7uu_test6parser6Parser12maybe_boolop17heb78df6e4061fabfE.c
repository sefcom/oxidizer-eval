_OWORD *__fastcall uu_test::parser::Parser::maybe_boolop(_QWORD *a1, __int64 a2)
{
  _QWORD *v3; // rbp
  unsigned __int64 v4; // rax
  __int64 v5; // rcx
  const void *v6; // r12
  signed __int64 v7; // r15
  __int64 v8; // rax
  void *v9; // r13
  __int32 v10; // r15d
  _OWORD *result; // rax
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rax
  unsigned __int64 v15; // rax
  __int64 v16; // rcx
  const void *v17; // r13
  signed __int64 v18; // r15
  __int64 v19; // rbx
  __int64 v20; // rax
  void *v21; // rbp
  __int64 v22; // rbp
  __int128 v23; // kr10_16
  __int64 v24; // r15
  __int64 v25; // rbx
  __int64 v26; // rbx
  __int64 v27; // rax
  __int64 v28; // rcx
  __int128 v29; // xmm0
  __int64 v30; // rsi
  __int64 v31; // rax
  __int128 v32; // xmm0
  _OWORD *v33; // rax
  __int64 v34; // rsi
  __int64 *v35; // rcx
  __int64 v36; // rsi
  const char *v37; // rsi
  __int128 v38; // xmm0
  __m256i v39; // [rsp+0h] [rbp-F8h] BYREF
  __int64 v40; // [rsp+20h] [rbp-D8h]
  __int64 *v41; // [rsp+30h] [rbp-C8h]
  _QWORD *v42; // [rsp+38h] [rbp-C0h]
  _BYTE v43[24]; // [rsp+40h] [rbp-B8h] BYREF
  __m256i s2; // [rsp+58h] [rbp-A0h] BYREF
  __int64 v45; // [rsp+78h] [rbp-80h] BYREF
  _QWORD v46[4]; // [rsp+80h] [rbp-78h]
  __m256i v47; // [rsp+A0h] [rbp-58h] BYREF
  __int64 v48; // [rsp+C0h] [rbp-38h]

  v3 = a1;
  v4 = *(_QWORD *)(a2 + 24);
  if ( v4 == 0x8000000000000001LL )
  {
    v5 = *(_QWORD *)(a2 + 56);
    v4 = 0x8000000000000000LL;
    if ( v5 != *(_QWORD *)(a2 + 72) )
    {
      *(_QWORD *)(a2 + 56) = v5 + 24;
      v4 = *(_QWORD *)v5;
      *(_OWORD *)v39.m256i_i8 = *(_OWORD *)(v5 + 8);
    }
    *(_QWORD *)(a2 + 24) = v4;
    *(_OWORD *)(a2 + 32) = *(_OWORD *)v39.m256i_i8;
  }
  if ( v4 != 0x8000000000000000LL )
  {
    v6 = *(const void **)(a2 + 32);
    v7 = *(_QWORD *)(a2 + 40);
    if ( v7 )
    {
      if ( v7 < 0 )
      {
        v41 = 0LL;
      }
      else
      {
        v41 = (_QWORD *)(&dword_0 + 1);
        v8 = _rust_alloc(v7, 1LL);
        if ( v8 )
        {
          v9 = (void *)v8;
LABEL_12:
          memcpy(v9, v6, v7);
          v45 = v7;
          v46[0] = v9;
          v46[1] = v7;
          goto LABEL_13;
        }
      }
      alloc::raw_vec::handle_error(v41, v7);
    }
    v9 = &dword_0 + 1;
    goto LABEL_12;
  }
  v45 = 0x8000000000000000LL;
LABEL_13:
  uu_test::parser::Symbol::new(v39.m256i_i64, &v45);
  v10 = v39.m256i_i32[0];
  result = (_OWORD *)(v39.m256i_i64[0] - 2);
  if ( (unsigned __int64)(v39.m256i_i64[0] - 2) <= 3 )
  {
    result = *(_OWORD **)&asc_102C0[8 * v39.m256i_i64[0] - 16];
    v12 = *(__int64 *)((char *)v39.m256i_i64 + (_QWORD)result);
    if ( v12 )
      result = (_OWORD *)_rust_dealloc(*(__int64 *)((char *)&v39.m256i_i64[1] + (_QWORD)result), v12, 1LL);
  }
  if ( v10 != 2 )
    goto LABEL_71;
  v13 = *(_QWORD *)(a2 + 24);
  *(_QWORD *)(a2 + 24) = 0x8000000000000001LL;
  if ( v13 == 0x8000000000000001LL )
  {
    v14 = *(_QWORD *)(a2 + 56);
    if ( v14 == *(_QWORD *)(a2 + 72) )
    {
      v39.m256i_i64[0] = 0x8000000000000000LL;
    }
    else
    {
      *(_QWORD *)(a2 + 56) = v14 + 24;
      v39.m256i_i64[2] = *(_QWORD *)(v14 + 16);
      *(_OWORD *)v39.m256i_i8 = *(_OWORD *)v14;
    }
  }
  else
  {
    *(_OWORD *)&v39.m256i_u64[1] = *(_OWORD *)(a2 + 32);
    v39.m256i_i64[0] = v13;
  }
  uu_test::parser::Symbol::new(v47.m256i_i64, v39.m256i_i64);
  v15 = *(_QWORD *)(a2 + 24);
  if ( v15 == 0x8000000000000001LL )
  {
    v16 = *(_QWORD *)(a2 + 56);
    v15 = 0x8000000000000000LL;
    if ( v16 != *(_QWORD *)(a2 + 72) )
    {
      *(_QWORD *)(a2 + 56) = v16 + 24;
      v15 = *(_QWORD *)v16;
      *(_OWORD *)v39.m256i_i8 = *(_OWORD *)(v16 + 8);
    }
    *(_QWORD *)(a2 + 24) = v15;
    *(_OWORD *)(a2 + 32) = *(_OWORD *)v39.m256i_i8;
  }
  v42 = a1;
  if ( v15 == 0x8000000000000000LL )
  {
    v39.m256i_i64[0] = 0x8000000000000000LL;
    goto LABEL_34;
  }
  v17 = *(const void **)(a2 + 32);
  v18 = *(_QWORD *)(a2 + 40);
  if ( !v18 )
  {
    v21 = &dword_0 + 1;
    goto LABEL_33;
  }
  if ( v18 < 0 )
  {
    v19 = 0LL;
LABEL_77:
    alloc::raw_vec::handle_error(v19, v18);
  }
  v19 = 1LL;
  v20 = _rust_alloc(*(_QWORD *)(a2 + 40), 1LL);
  if ( !v20 )
    goto LABEL_77;
  v21 = (void *)v20;
LABEL_33:
  memcpy(v21, v17, v18);
  v39.m256i_i64[0] = v18;
  v39.m256i_i64[1] = (__int64)v21;
  v39.m256i_i64[2] = v18;
LABEL_34:
  uu_test::parser::Symbol::new(&v45, v39.m256i_i64);
  v22 = v45;
  if ( v45 == 6 )
  {
    switch ( v47.m256i_i64[0] )
    {
      case 0LL:
        v37 = asc_193AB;
        goto LABEL_66;
      case 1LL:
        v37 = asc_193AC;
LABEL_66:
        std::sys::os_str::bytes::Slice::to_owned(v43, v37, 1LL);
        goto LABEL_67;
      case 2LL:
      case 3LL:
        *(_OWORD *)&v43[8] = *(_OWORD *)&v47.m256i_u64[2];
        *(_QWORD *)v43 = v47.m256i_i64[1];
LABEL_67:
        v39.m256i_i64[3] = *(_QWORD *)&v43[16];
        *(_OWORD *)&v39.m256i_u64[1] = *(_OWORD *)v43;
        break;
      case 4LL:
      case 5LL:
        v39.m256i_i64[3] = v48;
        *(_OWORD *)&v39.m256i_u64[1] = *(_OWORD *)&v47.m256i_u64[2];
        break;
      case 6LL:
        uu_test::parser::Symbol::into_literal::panic_cold_explicit(&v45, &v39, v47.m256i_i64[0], v47.m256i_i64[1]);
    }
    v39.m256i_i64[0] = 3LL;
    result = (_OWORD *)uu_test::parser::Parser::literal(&s2, a2, &v39);
    if ( s2.m256i_i32[0] != 7 )
    {
      v38 = *(_OWORD *)s2.m256i_i8;
      result = v42;
      *((_OWORD *)v42 + 1) = *(_OWORD *)&s2.m256i_u64[2];
      *result = v38;
      return result;
    }
    goto LABEL_70;
  }
  v41 = &v45;
  v40 = v48;
  v39 = v47;
  std::sys::os_str::bytes::Slice::to_owned(&s2, aA, 2LL);
  v23 = *(_OWORD *)s2.m256i_i8;
  v24 = v39.m256i_i64[0];
  if ( v39.m256i_i64[0] == 2
    && v39.m256i_i64[3] == s2.m256i_i64[2]
    && !bcmp((const void *)v39.m256i_i64[2], (const void *)s2.m256i_i64[1], s2.m256i_u64[2]) )
  {
    if ( (_QWORD)v23 )
      _rust_dealloc(*((_QWORD *)&v23 + 1), v23, 1LL);
    uu_test::parser::Parser::term(&s2, a2);
    v25 = s2.m256i_i64[0];
    if ( s2.m256i_i64[0] == 7 )
      goto LABEL_43;
    *(_QWORD *)&v43[16] = s2.m256i_i64[3];
    *(_OWORD *)v43 = *(_OWORD *)&s2.m256i_u64[1];
    v31 = 1LL;
    goto LABEL_58;
  }
  if ( (_QWORD)v23 )
    _rust_dealloc(*((_QWORD *)&v23 + 1), v23, 1LL);
  uu_test::parser::Parser::expr((__int64)&s2, a2);
  v25 = s2.m256i_i64[0];
  if ( s2.m256i_i64[0] != 7 )
  {
    *(_QWORD *)&v43[16] = s2.m256i_i64[3];
    *(_OWORD *)v43 = *(_OWORD *)&s2.m256i_u64[1];
    v31 = 1LL;
    if ( (unsigned __int64)(v24 - 2) >= 2 )
    {
      if ( (_DWORD)v24 != 4 && (_DWORD)v24 != 5 )
      {
LABEL_60:
        v35 = v42;
        v42[3] = *(_QWORD *)&v43[16];
        *(_OWORD *)(v35 + 1) = *(_OWORD *)v43;
        *v35 = v25;
        goto LABEL_61;
      }
      v31 = 2LL;
    }
LABEL_58:
    v34 = v39.m256i_i64[v31];
    if ( v34 )
      _rust_dealloc(v39.m256i_i64[v31 + 1], v34, 1LL);
    goto LABEL_60;
  }
LABEL_43:
  v26 = *(_QWORD *)(a2 + 16);
  if ( v26 == *(_QWORD *)a2 )
    alloc::raw_vec::RawVec<T,A>::grow_one(a2);
  v27 = *(_QWORD *)(a2 + 8);
  v28 = 5 * v26;
  *(_QWORD *)(v27 + 8 * v28 + 32) = v48;
  v29 = *(_OWORD *)v47.m256i_i8;
  *(_OWORD *)(v27 + 8 * v28 + 16) = *(_OWORD *)&v47.m256i_u64[2];
  *(_OWORD *)(v27 + 8 * v28) = v29;
  *(_QWORD *)(a2 + 16) = v26 + 1;
  uu_test::parser::Parser::maybe_boolop(&v39, a2);
  if ( v39.m256i_i32[0] == 7 )
  {
    result = (_OWORD *)(v22 - 2);
    if ( (unsigned __int64)(v22 - 2) <= 3 )
    {
      result = *(_OWORD **)&asc_102C0[8 * v22 - 16];
      v30 = *(_QWORD *)((char *)&v46[-1] + (_QWORD)result);
      if ( v30 )
        result = (_OWORD *)_rust_dealloc(*(_QWORD *)((char *)v46 + (_QWORD)result), v30, 1LL);
    }
LABEL_70:
    v3 = v42;
LABEL_71:
    *v3 = 7LL;
    return result;
  }
  v32 = *(_OWORD *)v39.m256i_i8;
  v33 = v42;
  *((_OWORD *)v42 + 1) = *(_OWORD *)&v39.m256i_u64[2];
  *v33 = v32;
LABEL_61:
  result = (_OWORD *)(v22 - 2);
  if ( (unsigned __int64)(v22 - 2) <= 3 )
  {
    result = *(_OWORD **)&asc_102C0[8 * v22 - 16];
    v36 = *(_QWORD *)((char *)&v46[-1] + (_QWORD)result);
    if ( v36 )
      return (_OWORD *)_rust_dealloc(*(_QWORD *)((char *)v46 + (_QWORD)result), v36, 1LL);
  }
  return result;
}
