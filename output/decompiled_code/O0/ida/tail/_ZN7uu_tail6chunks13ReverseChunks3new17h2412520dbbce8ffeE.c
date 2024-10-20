_QWORD *__fastcall uu_tail::chunks::ReverseChunks::new(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // r12
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // r15
  __m128d v7; // xmm1
  double v8; // xmm0_8
  __int64 v9; // rax
  __int64 v10; // rcx
  unsigned __int64 v12; // [rsp+8h] [rbp-30h] BYREF
  _QWORD v13[5]; // [rsp+10h] [rbp-28h] BYREF

  v2 = <std::fs::File as std::io::Seek>::seek(a2, 2LL, 0LL);
  v4 = v3;
  if ( v2 )
  {
    v13[0] = v3;
    core::result::unwrap_failed(
      anon_d47df02a786f831a0d9960a1e02c39b9_6_llvm_1356039585147583896,
      43LL,
      v13,
      &anon_d47df02a786f831a0d9960a1e02c39b9_5_llvm_1356039585147583896,
      &anon_d47df02a786f831a0d9960a1e02c39b9_9_llvm_1356039585147583896);
  }
  if ( <std::fs::File as std::io::Seek>::seek(a2, 1LL, 0LL) )
  {
    v12 = v5;
    core::result::unwrap_failed(
      anon_d47df02a786f831a0d9960a1e02c39b9_6_llvm_1356039585147583896,
      43LL,
      &v12,
      &anon_d47df02a786f831a0d9960a1e02c39b9_5_llvm_1356039585147583896,
      &anon_d47df02a786f831a0d9960a1e02c39b9_10_llvm_1356039585147583896);
  }
  v6 = v5 - v4;
  if ( v5 < v4 )
    core::panicking::panic_const::panic_const_sub_overflow(&anon_d47df02a786f831a0d9960a1e02c39b9_11_llvm_1356039585147583896);
  v7 = _mm_sub_pd((__m128d)_mm_unpacklo_epi32((__m128i)v6, (__m128i)xmmword_21D90), (__m128d)xmmword_21D20);
  v8 = ceil((_mm_unpackhi_pd(v7, v7).m128d_f64[0] + v7.m128d_f64[0]) * 0.0000152587890625);
  v9 = 0LL;
  if ( v8 >= 0.0 )
    v9 = (unsigned int)(int)v8;
  v10 = -1LL;
  if ( v8 <= 1.844674407370955e19 )
    v10 = v9;
  *a1 = a2;
  a1[1] = v6;
  a1[2] = v10;
  a1[3] = 0LL;
  return a1;
}
