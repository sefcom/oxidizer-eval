__int64 __fastcall uu_wc::count_fast::count_bytes_chars_and_lines_fast(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  __int64 v3; // rax
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // r12
  __m128i si128; // xmm4
  __m128i v7; // xmm5
  __m128i v8; // xmm6
  unsigned __int64 v9; // rcx
  unsigned __int64 i; // rax
  __m128i v11; // xmm0
  __int64 v12; // rcx
  __m128i v13; // xmm1
  __m128i v14; // xmm2
  __m128i v15; // xmm3
  __m128i v16; // xmm1
  __int64 v18; // [rsp+0h] [rbp-4038h]
  _QWORD s[2054]; // [rsp+8h] [rbp-4030h] BYREF

  v18 = 0LL;
  memset(s, 0, 0x4000uLL);
  v2 = 0LL;
  while ( 1 )
  {
    while ( 1 )
    {
      v3 = <std::fs::File as std::io::Read>::read(a2, s, 0x4000LL);
      v5 = v4;
      if ( !v3 )
        break;
      if ( (unsigned __int8)std::io::error::Error::kind(v4) != 35 )
      {
        *(_QWORD *)a1 = v2;
        *(_QWORD *)(a1 + 8) = v18;
        *(_OWORD *)(a1 + 16) = 0LL;
        *(_QWORD *)(a1 + 32) = 0LL;
        *(_QWORD *)(a1 + 40) = v5;
        return a1;
      }
      core::ptr::drop_in_place<std::io::error::Error>(v5);
    }
    if ( !v4 )
      break;
    if ( v4 > 0x4000 )
      core::slice::index::slice_end_index_len_fail(
        v4,
        0x4000LL,
        &anon_a808bb20f78aff64bf06a0678fac6b82_1_llvm_4946481185994499599);
    si128 = _mm_load_si128((const __m128i *)&xmmword_11130);
    v7 = _mm_load_si128((const __m128i *)&xmmword_11400);
    v8 = _mm_load_si128((const __m128i *)&xmmword_11470);
    if ( v4 < 4 )
    {
      v9 = 0LL;
      for ( i = 0LL; i != v4; ++i )
LABEL_12:
        v9 += (*((_BYTE *)s + i) & 0xC0) != 0x80;
      goto LABEL_13;
    }
    i = v4 & 0x7FFC;
    v11 = 0LL;
    v12 = 0LL;
    v13 = 0LL;
    do
    {
      v14 = _mm_cmpgt_epi8(_mm_and_si128(_mm_cvtsi32_si128(*(unsigned __int16 *)((char *)s + v12)), si128), v7);
      v11 = _mm_add_epi64(
              v11,
              _mm_and_si128(_mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v14, v14), 212), 212), v8));
      v15 = _mm_cmpgt_epi8(_mm_and_si128(_mm_cvtsi32_si128(*(unsigned __int16 *)((char *)s + v12 + 2)), si128), v7);
      v13 = _mm_add_epi64(
              v13,
              _mm_and_si128(_mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v15, v15), 212), 212), v8));
      v12 += 4LL;
    }
    while ( i != v12 );
    v16 = _mm_add_epi64(v13, v11);
    v9 = _mm_add_epi64(_mm_shuffle_epi32(v16, 238), v16).m128i_u64[0];
    if ( i != v4 )
      goto LABEL_12;
LABEL_13:
    v2 += v4;
    v18 += v9;
  }
  *(_QWORD *)a1 = v2;
  *(_QWORD *)(a1 + 8) = v18;
  *(_OWORD *)(a1 + 16) = 0LL;
  *(_OWORD *)(a1 + 32) = 0LL;
  return a1;
}
