_QWORD *__fastcall uu_tail::chunks::ReverseChunks::new(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // r12
  __int64 v6; // rdx
  __int64 v7; // r15
  __m128d v8; // xmm1
  double v9; // xmm0_8
  __int64 v10; // rax
  __int64 v11; // rcx
  _QWORD v13[5]; // [rsp+0h] [rbp-28h] BYREF

  v13[0] = v2;
  v3 = <std::fs::File as std::io::Seek>::seek(a2, 2LL, 0LL);
  v5 = v4;
  if ( v3 )
  {
    v13[0] = v4;
    core::result::unwrap_failed(
      anon_260ad779062915721296377f2d114085_2_llvm_11775337101010531792,
      43LL,
      v13,
      &anon_260ad779062915721296377f2d114085_1_llvm_11775337101010531792,
      &anon_260ad779062915721296377f2d114085_4_llvm_11775337101010531792);
  }
  if ( <std::fs::File as std::io::Seek>::seek(a2, 1LL, 0LL) )
  {
    v13[0] = v6;
    core::result::unwrap_failed(
      anon_260ad779062915721296377f2d114085_2_llvm_11775337101010531792,
      43LL,
      v13,
      &anon_260ad779062915721296377f2d114085_1_llvm_11775337101010531792,
      &anon_260ad779062915721296377f2d114085_5_llvm_11775337101010531792);
  }
  v7 = v6 - v5;
  v8 = _mm_sub_pd(
         (__m128d)_mm_unpacklo_epi32((__m128i)(unsigned __int64)(v6 - v5), (__m128i)xmmword_198C0),
         (__m128d)xmmword_19820);
  v9 = ceil((_mm_unpackhi_pd(v8, v8).m128d_f64[0] + v8.m128d_f64[0]) * 0.0000152587890625);
  v10 = 0LL;
  if ( v9 >= 0.0 )
    v10 = (unsigned int)(int)v9;
  v11 = -1LL;
  if ( v9 <= 1.844674407370955e19 )
    v11 = v10;
  *a1 = a2;
  a1[1] = v7;
  a1[2] = v11;
  a1[3] = 0LL;
  return a1;
}
