__int64 __fastcall uu_csplit::split_name::SplitName::new(__int64 a1, const __m128i *a2, const __m128i *a3, __int64 a4)
{
  __m128i v6; // xmm0
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __m128i v10; // xmm0
  const __m128i *v11; // r15
  char v12; // bp
  __m128i v13; // xmm0
  __m128i v15; // [rsp+0h] [rbp-148h] BYREF
  __int64 v16; // [rsp+10h] [rbp-138h]
  __m128i v17; // [rsp+20h] [rbp-128h] BYREF
  _BYTE v18[72]; // [rsp+30h] [rbp-118h] BYREF
  __int64 v19; // [rsp+78h] [rbp-D0h]
  __int64 v20; // [rsp+80h] [rbp-C8h] BYREF
  __m256i v21; // [rsp+88h] [rbp-C0h] BYREF
  __m128i v22; // [rsp+A8h] [rbp-A0h]
  __int128 v23; // [rsp+B8h] [rbp-90h]
  __int64 v24; // [rsp+C8h] [rbp-80h]
  __m128i v25; // [rsp+D0h] [rbp-78h] BYREF
  __int64 v26; // [rsp+E0h] [rbp-68h]
  __m128i v27; // [rsp+F0h] [rbp-58h] BYREF
  __int64 v28; // [rsp+100h] [rbp-48h]
  _BYTE v29[64]; // [rsp+108h] [rbp-40h] BYREF

  if ( a2->m128i_i64[0] == 0x8000000000000000LL )
  {
    <T as alloc::slice::hack::ConvertVec>::to_vec(&v17, aXx, 2LL);
    v16 = *(_QWORD *)v18;
    v6 = _mm_loadu_si128(&v17);
  }
  else
  {
    v16 = a2[1].m128i_i64[0];
    v6 = _mm_loadu_si128(a2);
  }
  v15 = v6;
  v7 = *(_QWORD *)a4;
  if ( *(_QWORD *)a4 == 0x8000000000000000LL )
  {
    v8 = 2LL;
  }
  else
  {
    *(__m128i *)&v21.m256i_u64[1] = _mm_loadu_si128((const __m128i *)(a4 + 8));
    v21.m256i_i64[0] = v7;
    uu_csplit::split_name::SplitName::new::{{closure}}(&v17, &v21);
    v9 = v17.m128i_i64[0];
    v10 = _mm_loadu_si128((const __m128i *)&v17.m128i_u64[1]);
    v25 = *(__m128i *)&v18[8];
    if ( v17.m128i_i64[0] != 12 )
    {
      *(__m128i *)(a1 + 32) = v25;
      *(_QWORD *)(a1 + 8) = v9;
      *(__m128i *)(a1 + 16) = v10;
      *(_QWORD *)a1 = 0x8000000000000000LL;
      v12 = 1;
      goto LABEL_15;
    }
    v8 = v10.m128i_i64[0];
  }
  v20 = v8;
  if ( a3->m128i_i64[0] == 0x8000000000000000LL )
  {
    v21.m256i_i64[0] = (__int64)&v20;
    v21.m256i_i64[1] = (__int64)core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
    v17.m128i_i64[0] = (__int64)&off_2E1D08;
    v17.m128i_i64[1] = 2LL;
    *(_QWORD *)&v18[16] = 0LL;
    *(_QWORD *)v18 = &v21;
    *(_QWORD *)&v18[8] = 1LL;
    v11 = (const __m128i *)v29;
    core::option::Option<T>::map_or_else(v29, &v17);
    v12 = 1;
  }
  else
  {
    v12 = 0;
    v11 = a3;
  }
  v28 = v11[1].m128i_i64[0];
  v27 = _mm_loadu_si128(v11);
  uucore::features::format::Format<F>::parse(&v17, &v27);
  if ( v17.m128i_i64[0] != 0x8000000000000000LL )
  {
    v23 = *(_OWORD *)&v18[32];
    v24 = *(_QWORD *)&v18[48];
    *(_OWORD *)&v21.m256i_u64[2] = *(_OWORD *)v18;
    v22 = _mm_loadu_si128((const __m128i *)&v18[16]);
    *(__m128i *)v21.m256i_i8 = v17;
    <T as alloc::slice::hack::ConvertVec>::to_vec(&v25, v15.m128i_i64[1], v16);
    v19 = v24;
    *(_OWORD *)&v18[56] = v23;
    *(__m128i *)&v18[40] = v22;
    *(__m256i *)&v18[8] = v21;
    *(_QWORD *)v18 = v26;
    v13 = _mm_loadu_si128(&v25);
    v17 = v13;
    *(_QWORD *)(a1 + 80) = *((_QWORD *)&v23 + 1);
    *(_QWORD *)(a1 + 88) = v19;
    *(_OWORD *)(a1 + 64) = *(_OWORD *)&v18[48];
    *(_OWORD *)(a1 + 48) = *(_OWORD *)&v18[32];
    *(_OWORD *)(a1 + 32) = *(_OWORD *)&v18[16];
    *(_OWORD *)(a1 + 16) = *(_OWORD *)v18;
    *(__m128i *)a1 = v13;
    core::ptr::drop_in_place<alloc::string::String>(&v15);
    return a1;
  }
  *(_QWORD *)(a1 + 8) = (v17.m128i_i32[2] == 10) + 9LL;
  *(_QWORD *)a1 = 0x8000000000000000LL;
  core::ptr::drop_in_place<core::result::Result<uucore::features::format::Format<uucore::features::format::num_format::UnsignedInt>,uucore::features::format::FormatError>>(&v17);
LABEL_15:
  core::ptr::drop_in_place<alloc::string::String>(&v15);
  if ( v12 && a3->m128i_i64[0] != 0x8000000000000000LL )
    core::ptr::drop_in_place<alloc::string::String>(a3);
  return a1;
}
