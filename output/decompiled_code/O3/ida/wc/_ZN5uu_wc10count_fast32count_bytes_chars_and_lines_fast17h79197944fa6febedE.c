__int64 __fastcall uu_wc::count_fast::count_bytes_chars_and_lines_fast(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 i; // r13
  __int64 v4; // rax
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // r12
  __m128i si128; // xmm4
  __m128i v8; // xmm5
  __m128i v9; // xmm6
  unsigned __int64 v10; // r13
  unsigned __int64 j; // rax
  __m128i v12; // xmm0
  __int64 v13; // rcx
  __m128i v14; // xmm1
  __m128i v15; // xmm2
  __m128i v16; // xmm3
  __m128i v17; // xmm1
  __int64 result; // rax
  __int64 v19; // [rsp+10h] [rbp-4038h]
  _QWORD s[2054]; // [rsp+18h] [rbp-4030h] BYREF

  v2 = 0LL;
  memset(s, 0, 0x4000uLL);
  for ( i = 0LL; ; i = bytecount::count(s, v5, 10LL) + v19 )
  {
    while ( 1 )
    {
      v4 = <std::io::stdio::StdinLock as std::io::Read>::read(a2, s, 0x4000LL);
      v6 = v5;
      if ( !v4 )
        break;
      if ( (unsigned __int8)std::io::error::Error::kind(v5) != 35 )
      {
        result = a1;
        *(_QWORD *)a1 = 0LL;
        *(_QWORD *)(a1 + 8) = v2;
        *(_QWORD *)(a1 + 16) = i;
        *(_OWORD *)(a1 + 24) = 0LL;
        *(_QWORD *)(a1 + 40) = v6;
        return result;
      }
      core::ptr::drop_in_place<std::io::error::Error>(v6);
    }
    if ( !v5 )
      break;
    if ( v5 > 0x4000 )
      core::slice::index::slice_end_index_len_fail(
        v5,
        0x4000LL,
        &anon_a808bb20f78aff64bf06a0678fac6b82_1_llvm_4946481185994499599);
    si128 = _mm_load_si128((const __m128i *)&xmmword_11130);
    v8 = _mm_load_si128((const __m128i *)&xmmword_11400);
    v9 = _mm_load_si128((const __m128i *)&xmmword_11470);
    v19 = i;
    if ( v5 < 4 )
    {
      v10 = 0LL;
      for ( j = 0LL; j != v5; ++j )
LABEL_12:
        v10 += (*((_BYTE *)s + j) & 0xC0) != 0x80;
      goto LABEL_13;
    }
    j = v5 & 0x7FFC;
    v12 = 0LL;
    v13 = 0LL;
    v14 = 0LL;
    do
    {
      v15 = _mm_cmpgt_epi8(_mm_and_si128(_mm_cvtsi32_si128(*(unsigned __int16 *)((char *)s + v13)), si128), v8);
      v12 = _mm_add_epi64(
              v12,
              _mm_and_si128(_mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v15, v15), 212), 212), v9));
      v16 = _mm_cmpgt_epi8(_mm_and_si128(_mm_cvtsi32_si128(*(unsigned __int16 *)((char *)s + v13 + 2)), si128), v8);
      v14 = _mm_add_epi64(
              v14,
              _mm_and_si128(_mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v16, v16), 212), 212), v9));
      v13 += 4LL;
    }
    while ( j != v13 );
    v17 = _mm_add_epi64(v14, v12);
    v10 = _mm_add_epi64(_mm_shuffle_epi32(v17, 238), v17).m128i_u64[0];
    if ( j != v5 )
      goto LABEL_12;
LABEL_13:
    v2 += v10;
  }
  result = a1;
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = v2;
  *(_QWORD *)(a1 + 16) = i;
  *(_OWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  return result;
}
