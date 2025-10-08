const char *__fastcall ruff_python_formatter::statement::clause::colon_range(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  const char *result; // rax
  unsigned __int64 v5; // [rsp+0h] [rbp-58h] BYREF
  unsigned __int8 v6; // [rsp+8h] [rbp-50h]
  _BYTE v7[48]; // [rsp+10h] [rbp-48h] BYREF
  _BYTE v8[24]; // [rsp+40h] [rbp-18h] BYREF

  ruff_python_trivia::tokenizer::SimpleTokenizer::starts_at(v7, a2, a3, a4);
  v8[0] = 0;
  core::iter::traits::iterator::Iterator::try_fold(&v5, v7, v8);
  result = (const char *)v6;
  if ( v6 == 12 )
  {
    _mm_storel_ps((double *)(a1 + 4), (__m128)v5);
    *(_DWORD *)a1 = 4;
  }
  else
  {
    *(_DWORD *)a1 = 0;
    if ( (_DWORD)result == 90 )
    {
      result = aExpectedTheCol;
      *(_QWORD *)(a1 + 8) = aExpectedTheCol;
      *(_QWORD *)(a1 + 16) = 85LL;
    }
    else
    {
      result = aExpectedColonM;
      *(_QWORD *)(a1 + 8) = aExpectedColonM;
      *(_QWORD *)(a1 + 16) = 82LL;
    }
  }
  return result;
}