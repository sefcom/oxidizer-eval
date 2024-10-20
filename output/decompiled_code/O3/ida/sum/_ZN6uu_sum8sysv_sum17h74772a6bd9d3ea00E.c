unsigned __int64 __fastcall uu_sum::sysv_sum(__int64 a1, __int64 a2)
{
  unsigned int v3; // r13d
  __int64 (__fastcall *v4)(__int64, _QWORD *, __int64); // rbp
  __int64 v5; // r15
  unsigned __int64 v6; // rdx
  unsigned __int8 *v7; // rax
  unsigned __int64 v8; // rcx
  __m128i v9; // xmm1
  __m128i v10; // xmm0
  unsigned __int64 v11; // rsi
  __m128i v12; // xmm0
  __m128i v13; // xmm1
  unsigned __int8 *v14; // rcx
  int v15; // edx
  __int64 v16; // rsi
  _QWORD s[518]; // [rsp+8h] [rbp-1030h] BYREF

  v3 = 0;
  memset(s, 0, 0x1000uLL);
  v4 = *(__int64 (__fastcall **)(__int64, _QWORD *, __int64))(a2 + 24);
  v5 = 0LL;
  while ( !v4(a1, s, 4096LL) )
  {
    if ( !v6 )
      goto LABEL_14;
    if ( v6 >= 0x1001 )
      core::slice::index::slice_end_index_len_fail(v6, 4096LL, &off_DF918);
    v5 += v6;
    if ( v6 < 8 )
    {
      v7 = (unsigned __int8 *)s;
      goto LABEL_10;
    }
    v8 = v6 & 0x1FF8;
    v7 = (unsigned __int8 *)s + (v6 & 0xFFFFFFFFFFFFFFF8LL);
    v9 = _mm_cvtsi32_si128(v3);
    v10 = 0LL;
    v11 = 0LL;
    do
    {
      v9 = _mm_add_epi32(
             v9,
             _mm_unpacklo_epi16(_mm_unpacklo_epi8(_mm_cvtsi32_si128(s[v11 / 8]), (__m128i)0LL), (__m128i)0LL));
      v10 = _mm_add_epi32(
              v10,
              _mm_unpacklo_epi16(_mm_unpacklo_epi8(_mm_cvtsi32_si128(HIDWORD(s[v11 / 8])), (__m128i)0LL), (__m128i)0LL));
      v11 += 8LL;
    }
    while ( v8 != v11 );
    v12 = _mm_add_epi32(v10, v9);
    v13 = _mm_add_epi32(_mm_shuffle_epi32(v12, 238), v12);
    v3 = _mm_cvtsi128_si32(_mm_add_epi32(_mm_shuffle_epi32(v13, 85), v13));
    if ( v8 != v6 )
    {
LABEL_10:
      v14 = (unsigned __int8 *)s + v6;
      do
      {
        v15 = *v7++;
        v3 += v15;
      }
      while ( v7 != v14 );
    }
  }
  core::ptr::drop_in_place<std::io::error::Error>(v6);
LABEL_14:
  if ( *(_QWORD *)a2 )
    (*(void (__fastcall **)(__int64))a2)(a1);
  v16 = *(_QWORD *)(a2 + 8);
  if ( v16 )
    _rust_dealloc(a1, v16, *(_QWORD *)(a2 + 16));
  return (unsigned __int64)(v5 + 511) >> 9;
}
