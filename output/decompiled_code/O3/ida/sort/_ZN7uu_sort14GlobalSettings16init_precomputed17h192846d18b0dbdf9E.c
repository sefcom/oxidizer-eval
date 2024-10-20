unsigned __int64 __fastcall uu_sort::GlobalSettings::init_precomputed(__int64 a1)
{
  __int64 v1; // rcx
  unsigned __int64 result; // rax
  __int64 v3; // r8
  __int64 v4; // rsi
  __int64 v5; // rdx
  bool v6; // zf
  __int64 v7; // rdx
  __int64 v8; // r8
  unsigned __int64 v9; // rsi
  unsigned __int8 *v10; // r10
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // r8
  _BYTE *v15; // r10
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned __int64 v18; // rdx
  unsigned __int8 *v19; // rsi
  __m128i v20; // xmm0
  __m128i si128; // xmm2
  __m128i v22; // xmm3
  unsigned __int64 v23; // r8
  __m128i v24; // xmm1
  __m128i v25; // xmm4
  __m128i v26; // xmm5
  __m128i v27; // xmm1
  _BYTE *v28; // rcx

  v1 = *(_QWORD *)(a1 + 8);
  result = *(_QWORD *)(a1 + 16);
  v3 = 56 * result;
  v4 = v1;
  do
  {
    v5 = v3;
    if ( !v3 )
      break;
    v6 = *(_BYTE *)(v4 + 54) == 0;
    v4 += 56LL;
    v3 -= 56LL;
  }
  while ( v6 );
  *(_BYTE *)(a1 + 96) = v5 != 0;
  if ( !result )
  {
    *(_QWORD *)(a1 + 88) = 0LL;
    *(_QWORD *)(a1 + 72) = 0LL;
    v9 = 0LL;
    goto LABEL_27;
  }
  if ( result >= 4 )
  {
    v10 = (unsigned __int8 *)(v1 + 223);
    v7 = 0LL;
    v8 = 0LL;
    do
    {
      v7 += *(v10 - 168) + *(v10 - 112) + (unsigned __int64)*(v10 - 56) + *v10;
      v8 += 4LL;
      v10 += 224;
    }
    while ( (result & 0xFFFFFFFFFFFFFFFCLL) != v8 );
  }
  else
  {
    v7 = 0LL;
    v8 = 0LL;
  }
  if ( (result & 3) != 0 )
  {
    v11 = v1 + 56 * v8 + 55;
    v12 = 0LL;
    do
    {
      v7 += *(unsigned __int8 *)(v11 + v12);
      v12 += 56LL;
    }
    while ( 56 * (result & 3) != v12 );
  }
  *(_QWORD *)(a1 + 88) = v7;
  if ( result >= 4 )
  {
    v15 = (_BYTE *)(v1 + 221);
    v13 = 0LL;
    v14 = 0LL;
    do
    {
      v13 += (*(v15 - 112) < 2u)
           + (unsigned __int64)(*(v15 - 168) < 2u)
           + (*v15 < 2u)
           + (unsigned __int64)(*(v15 - 56) < 2u);
      v14 += 4LL;
      v15 += 224;
    }
    while ( (result & 0xFFFFFFFFFFFFFFFCLL) != v14 );
  }
  else
  {
    v13 = 0LL;
    v14 = 0LL;
  }
  if ( (result & 3) != 0 )
  {
    v16 = v1 + 56 * v14 + 53;
    v17 = 0LL;
    do
    {
      v13 += *(_BYTE *)(v16 + v17) < 2u;
      v17 += 56LL;
    }
    while ( 56 * (result & 3) != v17 );
  }
  *(_QWORD *)(a1 + 72) = v13;
  if ( result < 4 )
  {
    v9 = 0LL;
    v18 = 0LL;
LABEL_25:
    result -= v18;
    v28 = (_BYTE *)(56 * v18 + v1 + 53);
    do
    {
      v9 += *v28 == 2;
      v28 += 56;
      --result;
    }
    while ( result );
    goto LABEL_27;
  }
  v18 = result & 0xFFFFFFFFFFFFFFFCLL;
  v19 = (unsigned __int8 *)(v1 + 221);
  v20 = 0LL;
  si128 = _mm_load_si128((const __m128i *)&xmmword_1F230);
  v22 = _mm_load_si128((const __m128i *)&xmmword_1F240);
  v23 = result & 0xFFFFFFFFFFFFFFFCLL;
  v24 = 0LL;
  do
  {
    v25 = _mm_cmpeq_epi8(_mm_cvtsi32_si128(*(v19 - 168) | (*(v19 - 112) << 8)), si128);
    v20 = _mm_add_epi64(
            v20,
            _mm_and_si128(_mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v25, v25), 212), 212), v22));
    v26 = _mm_cmpeq_epi8(_mm_cvtsi32_si128(*(v19 - 56) | (*v19 << 8)), si128);
    v24 = _mm_add_epi64(
            v24,
            _mm_and_si128(_mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v26, v26), 212), 212), v22));
    v19 += 224;
    v23 -= 4LL;
  }
  while ( v23 );
  v27 = _mm_add_epi64(v24, v20);
  v9 = _mm_add_epi64(_mm_shuffle_epi32(v27, 238), v27).m128i_u64[0];
  if ( result != v18 )
    goto LABEL_25;
LABEL_27:
  *(_QWORD *)(a1 + 80) = v9;
  return result;
}
