_QWORD *__fastcall uu_tail::chunks::ReverseChunks::new(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // r12
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r15
  __m128d v8; // xmm1
  double v9; // xmm0_8
  __int64 v10; // rdx
  __int64 v11; // rax

  v2 = <std::fs::File as std::io::Seek>::stream_position(a2);
  v4 = core::result::Result<T,E>::unwrap(v2, v3, &off_173180);
  v5 = <std::fs::File as std::io::Seek>::seek(a2, 1LL, 0LL);
  v7 = core::result::Result<T,E>::unwrap(v5, v6, &off_173198) - v4;
  v8 = _mm_sub_pd(
         (__m128d)_mm_unpacklo_epi32((__m128i)(unsigned __int64)v7, (__m128i)xmmword_22100),
         (__m128d)xmmword_22070);
  v9 = ceil((_mm_unpackhi_pd(v8, v8).m128d_f64[0] + v8.m128d_f64[0]) * 0.0000152587890625);
  v10 = (unsigned int)(int)v9;
  if ( v9 < 0.0 )
    v10 = 0LL;
  v11 = -1LL;
  if ( v9 <= 1.844674407370955e19 )
    v11 = v10;
  *a1 = a2;
  a1[1] = v7;
  a1[2] = v11;
  a1[3] = 0LL;
  return a1;
}