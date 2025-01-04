__int64 __fastcall uu_wc::Settings::number_enabled(__int64 a1)
{
  __m128i v1; // xmm0
  _QWORD v3[2]; // [rsp+0h] [rbp-18h] BYREF
  char v4; // [rsp+10h] [rbp-8h]
  int v5; // [rsp+11h] [rbp-7h]

  v4 = *(_BYTE *)(a1 + 24);
  v1 = _mm_shufflelo_epi16(_mm_unpacklo_epi8(_mm_cvtsi32_si128(*(_DWORD *)(a1 + 25)), (__m128i)0LL), 180);
  v5 = _mm_cvtsi128_si32(_mm_packus_epi16(v1, v1));
  v3[0] = 0LL;
  v3[1] = 5LL;
  return ((__int64 (__fastcall *)(_QWORD *))<core::array::iter::IntoIter<T,_> as core::iter::traits::iterator::Iterator>::fold)(v3);
}
