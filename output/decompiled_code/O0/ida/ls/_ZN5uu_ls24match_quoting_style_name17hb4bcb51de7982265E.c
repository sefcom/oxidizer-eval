__int64 __fastcall uu_ls::match_quoting_style_name(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  __int64 v3; // rax

  switch ( a2 )
  {
    case 1LL:
      if ( *(_BYTE *)a1 != 99 )
        goto LABEL_13;
      LOWORD(v3) = 2;
      a3 = 2;
      return (a3 << 16) | (unsigned int)(unsigned __int16)v3;
    case 5LL:
      LODWORD(v3) = *(_DWORD *)a1 ^ 0x6C656873;
      if ( (unsigned int)v3 | *(unsigned __int8 *)(a1 + 4) ^ 0x6C )
        goto LABEL_13;
      goto LABEL_8;
    case 6LL:
      a3 = 2 * ((*(_DWORD *)a1 ^ 0x61637365 | *(unsigned __int16 *)(a1 + 4) ^ 0x6570) != 0) + 2;
LABEL_8:
      LOWORD(v3) = 0;
      return (a3 << 16) | (unsigned int)(unsigned __int16)v3;
    case 7LL:
      LODWORD(v3) = *(_DWORD *)a1 ^ 0x6574696C;
      if ( (unsigned int)v3 | *(_DWORD *)(a1 + 3) ^ 0x6C617265 )
        goto LABEL_13;
      LOWORD(v3) = a3;
      a3 = 3;
      break;
    case 12LL:
      if ( *(_QWORD *)a1 ^ 0x6C612D6C6C656873LL | *(unsigned int *)(a1 + 8) ^ 0x73796177LL )
      {
        v3 = *(_QWORD *)a1 ^ 0x73652D6C6C656873LL;
        if ( v3 | *(unsigned int *)(a1 + 8) ^ 0x65706163LL )
LABEL_13:
          a3 = 4;
        else
          LOWORD(v3) = 1;
      }
      else
      {
        LOWORD(v3) = 256;
      }
      break;
    case 19LL:
      LODWORD(v3) = _mm_movemask_epi8(
                      _mm_and_si128(
                        _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)a1), (__m128i)xmmword_28640),
                        _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(a1 + 3)), (__m128i)xmmword_286D0)));
      if ( (_DWORD)v3 != 0xFFFF )
        goto LABEL_13;
      LOWORD(v3) = 257;
      break;
    default:
      goto LABEL_13;
  }
  return (a3 << 16) | (unsigned int)(unsigned __int16)v3;
}
