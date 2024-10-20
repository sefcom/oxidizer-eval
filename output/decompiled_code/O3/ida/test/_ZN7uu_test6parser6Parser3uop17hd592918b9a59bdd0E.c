__int64 __fastcall uu_test::parser::Parser::uop(__int64 a1, __int128 *a2)
{
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rax
  __int128 *v7; // r14
  const char *v8; // rsi
  __int64 v9; // r15
  __int64 v10; // rax
  __int64 v11; // rcx
  __int128 v12; // xmm0
  __int64 result; // rax
  __int64 v14; // rcx
  __int128 v15; // xmm0
  const char *v16; // rsi
  __int64 v17; // r14
  __int64 v18; // rcx
  __int128 v19; // xmm0
  __m256i v20; // [rsp+0h] [rbp-88h] BYREF
  __int64 v21; // [rsp+20h] [rbp-68h]
  __int64 v22; // [rsp+28h] [rbp-60h] BYREF
  __int128 v23; // [rsp+30h] [rbp-58h]
  __int64 v24[2]; // [rsp+40h] [rbp-48h] BYREF
  __int128 v25; // [rsp+50h] [rbp-38h]
  __int64 v26; // [rsp+60h] [rbp-28h]

  v3 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)(a1 + 24) = 0x8000000000000001LL;
  if ( v3 == 0x8000000000000001LL )
  {
    v4 = *(_QWORD *)(a1 + 56);
    if ( v4 == *(_QWORD *)(a1 + 72) )
    {
      v20.m256i_i64[0] = 0x8000000000000000LL;
    }
    else
    {
      *(_QWORD *)(a1 + 56) = v4 + 24;
      v20.m256i_i64[2] = *(_QWORD *)(v4 + 16);
      *(_OWORD *)v20.m256i_i8 = *(_OWORD *)v4;
    }
  }
  else
  {
    *(_OWORD *)&v20.m256i_u64[1] = *(_OWORD *)(a1 + 32);
    v20.m256i_i64[0] = v3;
  }
  uu_test::parser::Symbol::new(v24, v20.m256i_i64);
  if ( v24[0] == 6 )
  {
    v6 = *((_QWORD *)a2 + 1);
    v7 = a2 + 1;
    switch ( *(_QWORD *)a2 )
    {
      case 0LL:
        v16 = asc_193AB;
        goto LABEL_23;
      case 1LL:
        v16 = asc_193AC;
LABEL_23:
        std::sys::os_str::bytes::Slice::to_owned(&v22, v16, 1LL);
        goto LABEL_24;
      case 2LL:
      case 3LL:
        v23 = *v7;
        v22 = v6;
LABEL_24:
        v20.m256i_i64[1] = v22;
        *(_OWORD *)&v20.m256i_u64[2] = v23;
        break;
      case 4LL:
      case 5LL:
        v20.m256i_i64[3] = *((_QWORD *)a2 + 4);
        *(_OWORD *)&v20.m256i_u64[1] = *v7;
        break;
      case 6LL:
        uu_test::parser::Symbol::into_literal::panic_cold_explicit(v24, &v20, v5, *(_QWORD *)a2);
    }
    v20.m256i_i64[0] = 3LL;
    v17 = *(_QWORD *)(a1 + 16);
    if ( v17 == *(_QWORD *)a1 )
      alloc::raw_vec::RawVec<T,A>::grow_one(a1);
    result = *(_QWORD *)(a1 + 8);
    v18 = 5 * v17;
    *(_QWORD *)(result + 8 * v18 + 32) = v21;
    v19 = *(_OWORD *)v20.m256i_i8;
    *(_OWORD *)(result + 8 * v18 + 16) = *(_OWORD *)&v20.m256i_u64[2];
    *(_OWORD *)(result + 8 * v18) = v19;
    *(_QWORD *)(a1 + 16) = v17 + 1;
  }
  else
  {
    switch ( v24[0] )
    {
      case 0LL:
        v8 = asc_193AB;
        goto LABEL_14;
      case 1LL:
        v8 = asc_193AC;
LABEL_14:
        std::sys::os_str::bytes::Slice::to_owned(&v22, v8, 1LL);
        goto LABEL_15;
      case 2LL:
      case 3LL:
        v23 = v25;
        v22 = v24[1];
LABEL_15:
        v20.m256i_i64[1] = v22;
        *(_OWORD *)&v20.m256i_u64[2] = v23;
        break;
      case 4LL:
      case 5LL:
        v20.m256i_i64[3] = v26;
        *(_OWORD *)&v20.m256i_u64[1] = v25;
        break;
    }
    v20.m256i_i64[0] = 3LL;
    v9 = *(_QWORD *)(a1 + 16);
    if ( v9 == *(_QWORD *)a1 )
      alloc::raw_vec::RawVec<T,A>::grow_one(a1);
    v10 = *(_QWORD *)(a1 + 8);
    v11 = 5 * v9;
    *(_QWORD *)(v10 + 8 * v11 + 32) = v21;
    v12 = *(_OWORD *)v20.m256i_i8;
    *(_OWORD *)(v10 + 8 * v11 + 16) = *(_OWORD *)&v20.m256i_u64[2];
    *(_OWORD *)(v10 + 8 * v11) = v12;
    *(_QWORD *)(a1 + 16) = v9 + 1;
    if ( v9 + 1 == *(_QWORD *)a1 )
      alloc::raw_vec::RawVec<T,A>::grow_one(a1);
    result = *(_QWORD *)(a1 + 8);
    v14 = 5 * (v9 + 1);
    *(_QWORD *)(result + 8 * v14 + 32) = *((_QWORD *)a2 + 4);
    v15 = *a2;
    *(_OWORD *)(result + 8 * v14 + 16) = a2[1];
    *(_OWORD *)(result + 8 * v14) = v15;
    *(_QWORD *)(a1 + 16) = v9 + 2;
  }
  return result;
}
