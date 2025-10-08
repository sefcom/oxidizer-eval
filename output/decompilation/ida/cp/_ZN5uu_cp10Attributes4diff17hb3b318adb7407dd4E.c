__int64 __fastcall uu_cp::Attributes::diff(__int64 a1, const __m128i *a2, unsigned __int8 *a3)
{
  __m128i inserted; // xmm0
  __m128i si128; // xmm2
  __m128i v5; // xmm3
  __int64 result; // rax
  unsigned int v7; // ecx
  __m128i v8; // xmm3
  __m128i v9; // xmm0

  inserted = _mm_insert_epi16(_mm_insert_epi16(_mm_insert_epi16(_mm_cvtsi32_si128(*a3), a3[2], 1), a3[4], 2), a3[6], 3);
  si128 = _mm_load_si128((const __m128i *)&xmmword_209D0);
  v5 = _mm_cmpgt_epi8(
         (__m128i)0LL,
         _mm_and_si128(
           _mm_slli_epi16(
             _mm_shuffle_epi32(
               _mm_shufflehi_epi16(_mm_shufflelo_epi16(_mm_unpacklo_epi8(inserted, inserted), 232), 232),
               232),
             7u),
           si128));
  result = a3[8];
  v7 = a3[10];
  *(_QWORD *)a1 = _mm_or_si128(_mm_and_si128(v5, (__m128i)xmmword_20A70), _mm_andnot_si128(v5, _mm_loadl_epi64(a2))).m128i_u64[0];
  v8 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(result), _mm_cvtsi32_si128(v7));
  v9 = _mm_cmpgt_epi8(
         (__m128i)0LL,
         _mm_and_si128(
           _mm_slli_epi16(_mm_shufflelo_epi16(_mm_shuffle_epi32(_mm_unpacklo_epi8(v8, v8), 232), 232), 7u),
           si128));
  *(_DWORD *)(a1 + 8) = _mm_cvtsi128_si32(
                          _mm_or_si128(
                            _mm_and_si128(v9, (__m128i)xmmword_20840),
                            _mm_andnot_si128(v9, _mm_cvtsi32_si128(a2->m128i_u32[2]))));
  return result;
}