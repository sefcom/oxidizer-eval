__int64 __fastcall uu_cp::Attributes::diff(__int64 a1, const __m128i *a2, unsigned __int8 *a3)
{
  __int64 result; // rax
  __m128i v4; // xmm1
  __m128i v5; // xmm1
  __m128i si128; // xmm2
  __m128i v7; // xmm3
  int v8; // ecx
  __m128i v9; // xmm1
  __m128i v10; // xmm1
  __m128i v11; // xmm0

  result = a3[8];
  v4 = _mm_cvtsi32_si128(*a3 | (a3[2] << 8) | (a3[4] << 16) | (a3[6] << 24));
  v5 = _mm_unpacklo_epi8(v4, v4);
  si128 = _mm_load_si128((const __m128i *)&xmmword_1E9E0);
  v7 = _mm_cmpgt_epi8(
         (__m128i)0LL,
         _mm_and_si128(
           _mm_slli_epi16(
             _mm_shuffle_epi32(
               _mm_shufflehi_epi16(
                 _mm_shufflelo_epi16(_mm_cmpeq_epi8(_mm_unpacklo_epi8(v5, v5), (__m128i)0LL), 232),
                 232),
               232),
             7u),
           si128));
  v8 = a3[10];
  *(_QWORD *)a1 = _mm_or_si128(_mm_andnot_si128(v7, (__m128i)xmmword_1EA40), _mm_and_si128(_mm_loadl_epi64(a2), v7)).m128i_u64[0];
  v9 = _mm_cvtsi32_si128((unsigned int)result | (v8 << 8));
  v10 = _mm_shufflelo_epi16(_mm_cmpeq_epi8(_mm_unpacklo_epi8(v9, v9), (__m128i)0LL), 84);
  v11 = _mm_cmpgt_epi8(
          (__m128i)0LL,
          _mm_and_si128(_mm_slli_epi16(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v10, v10), 232), 7u), si128));
  *(_DWORD *)(a1 + 8) = _mm_cvtsi128_si32(
                          _mm_or_si128(
                            _mm_andnot_si128(v11, (__m128i)xmmword_1E7E0),
                            _mm_and_si128(_mm_cvtsi32_si128(a2->m128i_u32[2]), v11)));
  return result;
}
