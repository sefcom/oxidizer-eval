__int64 __fastcall uu_wc::Settings::number_enabled(__int64 a1)
{
  char v1; // al
  __m128i v2; // xmm0
  _QWORD v4[2]; // [rsp+0h] [rbp-18h] BYREF
  char v5; // [rsp+10h] [rbp-8h]
  int v6; // [rsp+11h] [rbp-7h]

  v1 = *(_BYTE *)(a1 + 24);
  v4[0] = 0LL;
  v4[1] = 5LL;
  v5 = v1;
  v2 = _mm_shufflelo_epi16(_mm_unpacklo_epi8(_mm_cvtsi32_si128(*(_DWORD *)(a1 + 25)), (__m128i)0LL), 180);
  v6 = _mm_cvtsi128_si32(_mm_packus_epi16(v2, v2));
  return ((__int64 (__fastcall *)(_QWORD *))<core::array::iter::IntoIter<T,_> as core::iter::traits::iterator::Iterator>::fold)(v4);
}