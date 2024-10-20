__int64 __fastcall uu_test::parser::Parser::literal(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r13
  const char *v6; // rsi
  __int128 v7; // xmm0
  __int64 v8; // r15
  __int64 v9; // rax
  __int64 v10; // rcx
  __int128 v11; // xmm0
  unsigned __int64 v12; // rax
  __int64 v13; // rcx
  const void *v14; // r12
  signed __int64 v15; // r15
  __int64 v16; // rbx
  __int64 v17; // rax
  void *v18; // r13
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 result; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rsi
  const char *v25; // rsi
  __int64 v26; // rbx
  __int64 v27; // rax
  __int64 v28; // rcx
  __int128 v29; // xmm0
  __int64 v30; // rax
  __int64 v31; // rcx
  __int128 v32; // xmm0
  __int64 v33; // rsi
  __m256i v34; // [rsp+0h] [rbp-118h] BYREF
  __int64 v35; // [rsp+20h] [rbp-F8h]
  __int64 v36; // [rsp+30h] [rbp-E8h]
  __m256i *v37; // [rsp+38h] [rbp-E0h] BYREF
  __int128 v38; // [rsp+40h] [rbp-D8h]
  __int128 v39; // [rsp+50h] [rbp-C8h] BYREF
  __int128 v40; // [rsp+60h] [rbp-B8h]
  __int64 v41; // [rsp+70h] [rbp-A8h]
  __m256i v42; // [rsp+80h] [rbp-98h] BYREF
  __int64 v43; // [rsp+A0h] [rbp-78h]
  __int64 v44[2]; // [rsp+A8h] [rbp-70h] BYREF
  __int64 v45; // [rsp+B8h] [rbp-60h]
  __int64 v46; // [rsp+C0h] [rbp-58h]
  __int128 v47; // [rsp+D0h] [rbp-48h] BYREF
  __int64 v48; // [rsp+E0h] [rbp-38h]

  v5 = a1;
  switch ( *(_QWORD *)a3 )
  {
    case 0LL:
      v6 = asc_193AB;
      goto LABEL_5;
    case 1LL:
      v6 = asc_193AC;
LABEL_5:
      std::sys::os_str::bytes::Slice::to_owned(&v39, v6, 1LL);
      goto LABEL_6;
    case 2LL:
    case 3LL:
      *(_QWORD *)&v40 = *(_QWORD *)(a3 + 24);
      v39 = *(_OWORD *)(a3 + 8);
LABEL_6:
      v34.m256i_i64[3] = v40;
      v7 = v39;
      break;
    case 4LL:
    case 5LL:
      v34.m256i_i64[3] = *(_QWORD *)(a3 + 32);
      v7 = *(_OWORD *)(a3 + 16);
      break;
    case 6LL:
      uu_test::parser::Symbol::into_literal::panic_cold_explicit(a1, a2, a3, a4);
  }
  *(_OWORD *)&v34.m256i_u64[1] = v7;
  v34.m256i_i64[0] = 3LL;
  v8 = *(_QWORD *)(a2 + 16);
  if ( v8 == *(_QWORD *)a2 )
    alloc::raw_vec::RawVec<T,A>::grow_one(a2);
  v9 = *(_QWORD *)(a2 + 8);
  v10 = 5 * v8;
  *(_QWORD *)(v9 + 8 * v10 + 32) = v35;
  v11 = *(_OWORD *)v34.m256i_i8;
  *(_OWORD *)(v9 + 8 * v10 + 16) = *(_OWORD *)&v34.m256i_u64[2];
  *(_OWORD *)(v9 + 8 * v10) = v11;
  *(_QWORD *)(a2 + 16) = v8 + 1;
  v12 = *(_QWORD *)(a2 + 24);
  if ( v12 == 0x8000000000000001LL )
  {
    v13 = *(_QWORD *)(a2 + 56);
    if ( v13 == *(_QWORD *)(a2 + 72) )
    {
      v12 = 0x8000000000000000LL;
    }
    else
    {
      *(_QWORD *)(a2 + 56) = v13 + 24;
      v12 = *(_QWORD *)v13;
      *(_OWORD *)v34.m256i_i8 = *(_OWORD *)(v13 + 8);
    }
    *(_QWORD *)(a2 + 24) = v12;
    *(_OWORD *)(a2 + 32) = *(_OWORD *)v34.m256i_i8;
  }
  if ( v12 == 0x8000000000000000LL )
  {
    v34.m256i_i64[0] = 0x8000000000000000LL;
    goto LABEL_23;
  }
  v14 = *(const void **)(a2 + 32);
  v15 = *(_QWORD *)(a2 + 40);
  if ( !v15 )
  {
    v16 = a1;
    v18 = &dword_0 + 1;
    goto LABEL_22;
  }
  if ( v15 < 0 )
  {
    v36 = 0LL;
LABEL_60:
    alloc::raw_vec::handle_error(v36, v15);
  }
  v16 = a1;
  v36 = 1LL;
  v17 = _rust_alloc(v15, 1LL);
  if ( !v17 )
    goto LABEL_60;
  v18 = (void *)v17;
LABEL_22:
  memcpy(v18, v14, v15);
  v34.m256i_i64[0] = v15;
  v34.m256i_i64[1] = (__int64)v18;
  v34.m256i_i64[2] = v15;
  v5 = v16;
LABEL_23:
  uu_test::parser::Symbol::new(v44, v34.m256i_i64);
  if ( v44[0] != 4 )
  {
    result = 8LL;
    if ( (unsigned __int64)(v44[0] - 2) < 2 )
      goto LABEL_55;
    if ( LODWORD(v44[0]) != 5 )
    {
LABEL_57:
      *(_QWORD *)v5 = 7LL;
      return result;
    }
LABEL_54:
    result = 16LL;
LABEL_55:
    v33 = *(__int64 *)((char *)v44 + result);
    if ( v33 )
      result = _rust_dealloc(*(__int64 *)((char *)&v44[1] + result), v33, 1LL);
    goto LABEL_57;
  }
  v19 = *(_QWORD *)(a2 + 24);
  *(_QWORD *)(a2 + 24) = 0x8000000000000001LL;
  if ( v19 == 0x8000000000000001LL )
  {
    v20 = *(_QWORD *)(a2 + 56);
    if ( v20 == *(_QWORD *)(a2 + 72) )
    {
      v34.m256i_i64[0] = 0x8000000000000000LL;
    }
    else
    {
      *(_QWORD *)(a2 + 56) = v20 + 24;
      v34.m256i_i64[2] = *(_QWORD *)(v20 + 16);
      *(_OWORD *)v34.m256i_i8 = *(_OWORD *)v20;
    }
  }
  else
  {
    *(_OWORD *)&v34.m256i_u64[1] = *(_OWORD *)(a2 + 32);
    v34.m256i_i64[0] = v19;
  }
  uu_test::parser::Symbol::new(v42.m256i_i64, v34.m256i_i64);
  v22 = *(_QWORD *)(a2 + 24);
  *(_QWORD *)(a2 + 24) = 0x8000000000000001LL;
  if ( v22 == 0x8000000000000001LL )
  {
    v23 = *(_QWORD *)(a2 + 56);
    if ( v23 == *(_QWORD *)(a2 + 72) )
    {
      v34.m256i_i64[0] = 0x8000000000000000LL;
    }
    else
    {
      *(_QWORD *)(a2 + 56) = v23 + 24;
      v34.m256i_i64[2] = *(_QWORD *)(v23 + 16);
      *(_OWORD *)v34.m256i_i8 = *(_OWORD *)v23;
    }
  }
  else
  {
    *(_OWORD *)&v34.m256i_u64[1] = *(_OWORD *)(a2 + 32);
    v34.m256i_i64[0] = v22;
  }
  uu_test::parser::Symbol::new((__int64 *)&v39, v34.m256i_i64);
  if ( (_QWORD)v39 != 6LL )
  {
    switch ( (__int64)v39 )
    {
      case 0LL:
        v25 = asc_193AB;
        goto LABEL_48;
      case 1LL:
        v25 = asc_193AC;
LABEL_48:
        std::sys::os_str::bytes::Slice::to_owned(&v37, v25, 1LL);
        v34.m256i_i64[1] = (__int64)v37;
        *(_OWORD *)&v34.m256i_u64[2] = v38;
        break;
      case 2LL:
      case 3LL:
        JUMPOUT(0x84ABELL);
      case 4LL:
      case 5LL:
        v34.m256i_i64[3] = v41;
        *(_OWORD *)&v34.m256i_u64[1] = v40;
        break;
    }
    v34.m256i_i64[0] = 3LL;
    v26 = *(_QWORD *)(a2 + 16);
    if ( v26 == *(_QWORD *)a2 )
      alloc::raw_vec::RawVec<T,A>::grow_one(a2);
    v27 = *(_QWORD *)(a2 + 8);
    v28 = 5 * v26;
    *(_QWORD *)(v27 + 8 * v28 + 32) = v35;
    v29 = *(_OWORD *)v34.m256i_i8;
    *(_OWORD *)(v27 + 8 * v28 + 16) = *(_OWORD *)&v34.m256i_u64[2];
    *(_OWORD *)(v27 + 8 * v28) = v29;
    *(_QWORD *)(a2 + 16) = v26 + 1;
    v35 = v43;
    v34 = v42;
    if ( v26 + 1 == *(_QWORD *)a2 )
      alloc::raw_vec::RawVec<T,A>::grow_one(a2);
    v30 = *(_QWORD *)(a2 + 8);
    v31 = 5 * (v26 + 1);
    *(_QWORD *)(v30 + 8 * v31 + 32) = v35;
    v32 = *(_OWORD *)v34.m256i_i8;
    *(_OWORD *)(v30 + 8 * v31 + 16) = *(_OWORD *)&v34.m256i_u64[2];
    *(_OWORD *)(v30 + 8 * v31) = v32;
    *(_QWORD *)(a2 + 16) = v26 + 2;
    goto LABEL_54;
  }
  v37 = &v42;
  *(_QWORD *)&v38 = <uu_test::parser::Symbol as core::fmt::Display>::fmt;
  v34.m256i_i64[0] = (__int64)&unk_FF60;
  v34.m256i_i64[1] = 1LL;
  v35 = 0LL;
  v34.m256i_i64[2] = (__int64)&v37;
  v34.m256i_i64[3] = 1LL;
  alloc::fmt::format::format_inner(&v47, &v34);
  *(_QWORD *)(v5 + 24) = v48;
  *(_OWORD *)(v5 + 8) = v47;
  *(_QWORD *)v5 = 3LL;
  result = v42.m256i_i64[0];
  if ( (unsigned __int64)(v42.m256i_i64[0] - 2) <= 3 )
  {
    result = *(_QWORD *)&asc_102C0[8 * v42.m256i_i64[0] - 16];
    v24 = *(__int64 *)((char *)v42.m256i_i64 + result);
    if ( v24 )
      result = _rust_dealloc(*(__int64 *)((char *)&v42.m256i_i64[1] + result), v24, 1LL);
  }
  if ( v45 )
    return _rust_dealloc(v46, v45, 1LL);
  return result;
}
