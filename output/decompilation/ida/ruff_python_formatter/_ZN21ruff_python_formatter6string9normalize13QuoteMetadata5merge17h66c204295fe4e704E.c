__int64 __fastcall ruff_python_formatter::string::normalize::QuoteMetadata::merge(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        double a4)
{
  __int64 result; // rax
  char v5; // r8
  char v6; // cl
  char v7; // dl
  bool v8; // zf

  result = *a2;
  v5 = 2;
  if ( (_BYTE)result == *(_BYTE *)a3 )
  {
    v6 = a2[1];
    if ( (_BYTE)result && (unsigned __int8)result != 1 )
    {
      *(_QWORD *)&a4 = _mm_add_epi32(
                         _mm_loadl_epi64((const __m128i *)(a3 + 4)),
                         _mm_loadl_epi64((const __m128i *)(a2 + 4))).m128i_u64[0];
    }
    else
    {
      v7 = *(_BYTE *)(a3 + 1) & 1;
      v8 = (v6 & 1) == 0;
      v6 = 1;
      if ( v8 )
        v6 = v7;
    }
    v5 = a2[12];
    *(_BYTE *)a1 = result;
    *(_BYTE *)(a1 + 1) = v6;
    *(double *)(a1 + 4) = a4;
  }
  *(_BYTE *)(a1 + 12) = v5;
  return result;
}