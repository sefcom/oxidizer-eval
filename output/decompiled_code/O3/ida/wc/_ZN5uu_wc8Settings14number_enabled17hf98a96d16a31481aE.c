        __int64 a6)
{
  __m128i v6; // xmm0
  _QWORD v8[2]; // [rsp+0h] [rbp-18h] BYREF
  char v9; // [rsp+10h] [rbp-8h]
  int v10; // [rsp+11h] [rbp-7h]

  v9 = *(_BYTE *)(a1 + 24);
  v6 = _mm_shufflelo_epi16(_mm_unpacklo_epi8(_mm_cvtsi32_si128(*(_DWORD *)(a1 + 25)), (__m128i)0LL), 180);
  v10 = _mm_cvtsi128_si32(_mm_packus_epi16(v6, v6));
  v8[0] = 0LL;
  v8[1] = 5LL;
  return ((__int64 (__fastcall *)(_QWORD *, __int64, __int64, __int64, __int64, __int64))<core::array::iter::IntoIter<T,_> as core::iter::traits::iterator::Iterator>::fold)(
           v8,
           a2,
           a3,
           a4,
           a5,
           a6);
}
