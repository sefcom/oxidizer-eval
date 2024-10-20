__int64 __fastcall uu_df::table::RowFormatter::scaled_bytes(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // rax
  char v4; // cl
  __m128i si128; // xmm2
  __m128d v6; // xmm1
  double v7; // xmm0_8
  __m128d v8; // xmm1
  char v10; // [rsp+Fh] [rbp-69h] BYREF
  __int128 v11; // [rsp+10h] [rbp-68h] BYREF
  __int64 v12; // [rsp+20h] [rbp-58h]
  double v13; // [rsp+28h] [rbp-50h] BYREF
  _QWORD v14[7]; // [rsp+30h] [rbp-48h] BYREF
  char v15; // [rsp+68h] [rbp-10h]

  v3 = *(_QWORD *)(a2 + 8);
  v4 = *(_BYTE *)(v3 + 84);
  if ( v4 == 2 )
  {
    si128 = _mm_load_si128((const __m128i *)&xmmword_18320);
    v6 = _mm_sub_pd((__m128d)_mm_unpacklo_epi32((__m128i)a3, si128), (__m128d)xmmword_182B0);
    v7 = _mm_unpackhi_pd(v6, v6).m128d_f64[0] + v6.m128d_f64[0];
    v8 = _mm_sub_pd(
           (__m128d)_mm_unpacklo_epi32(_mm_loadl_epi64((const __m128i *)(v3 + 72)), si128),
           (__m128d)xmmword_182B0);
    v13 = ceil(v7 / (_mm_unpackhi_pd(v8, v8).m128d_f64[0] + v8.m128d_f64[0]));
    *(_QWORD *)&v11 = 0LL;
    *((_QWORD *)&v11 + 1) = 1LL;
    v12 = 0LL;
    v14[6] = 32LL;
    v15 = 3;
    v14[0] = 0LL;
    v14[2] = 0LL;
    v14[4] = &v11;
    v14[5] = &anon_af4f526f2bb93cc55be513d58d93e125_7_llvm_17079165128840404064;
    if ( (unsigned __int8)core::fmt::float::<impl core::fmt::Display for f64>::fmt(&v13, v14) )
      core::result::unwrap_failed(
        anon_af4f526f2bb93cc55be513d58d93e125_9_llvm_17079165128840404064,
        55LL,
        &v10,
        &anon_21d6120f1bf3ae8083dd7bd30f6eb60d_17_llvm_13186119769495240950,
        &anon_af4f526f2bb93cc55be513d58d93e125_11_llvm_17079165128840404064);
    *(_QWORD *)(a1 + 16) = v12;
    *(_OWORD *)a1 = v11;
  }
  else
  {
    uu_df::blocks::to_magnitude_and_suffix(a1, a3, 0LL, v4 & 1);
  }
  return a1;
}
