__int64 __fastcall uu_ls::match_quoting_style_name(_BYTE *a1, size_t a2, unsigned __int8 a3)
{
  unsigned __int8 v3; // al
  unsigned __int16 v4; // cx
  bool v5; // zf
  bool v6; // cl

  v3 = 4;
  v4 = 0;
  switch ( a2 )
  {
    case 1uLL:
      v3 = 2 * (*a1 != 99) + 2;
      v4 = 2 * (*a1 == 99);
      break;
    case 5uLL:
      v3 = 4;
      if ( !(*(_DWORD *)a1 ^ 0x6C656873 | (unsigned __int8)a1[4] ^ 0x6C) )
        v3 = a3;
      v4 = 0;
      break;
    case 6uLL:
      v3 = 2 * (bcmp(a1, aEscape, a2) != 0) + 2;
      v4 = 0;
      break;
    case 7uLL:
      v6 = (*(_DWORD *)a1 ^ 0x6574696C | *(_DWORD *)(a1 + 3) ^ 0x6C617265) == 0;
      v3 = 4 - v6;
      v4 = v6 & a3;
      break;
    case 0xCuLL:
      if ( *(_QWORD *)a1 ^ 0x6C612D6C6C656873LL | *((unsigned int *)a1 + 2) ^ 0x73796177LL )
      {
        v4 = (*(_QWORD *)a1 ^ 0x73652D6C6C656873LL | *((unsigned int *)a1 + 2) ^ 0x65706163LL) == 0;
        v3 = 4;
        if ( !(*(_QWORD *)a1 ^ 0x73652D6C6C656873LL | *((unsigned int *)a1 + 2) ^ 0x65706163LL) )
          v3 = a3;
      }
      else
      {
        v4 = 256;
        v3 = a3;
      }
      break;
    case 0x13uLL:
      v5 = _mm_movemask_epi8(
             _mm_and_si128(
               _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)a1), (__m128i)xmmword_1D300),
               _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(a1 + 3)), (__m128i)xmmword_1D3B0))) == 0xFFFF;
      v3 = 4;
      if ( v5 )
        v3 = a3;
      v4 = 257;
      if ( !v5 )
        v4 = 0;
      break;
    default:
      return (v3 << 16) | (unsigned int)v4;
  }
  return (v3 << 16) | (unsigned int)v4;
}
