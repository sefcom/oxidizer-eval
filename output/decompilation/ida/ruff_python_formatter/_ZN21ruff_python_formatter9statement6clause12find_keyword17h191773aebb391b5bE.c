const char *__fastcall ruff_python_formatter::statement::clause::find_keyword(
        __int64 a1,
        __int64 a2,
        char a3,
        __int64 a4,
        __int64 a5)
{
  const char *result; // rax
  unsigned __int64 v7; // [rsp+0h] [rbp-58h] BYREF
  unsigned int v8; // [rsp+8h] [rbp-50h]
  _BYTE v9[72]; // [rsp+10h] [rbp-48h] BYREF

  ruff_python_trivia::tokenizer::SimpleTokenizer::starts_at(v9, a2, a4, a5);
  core::iter::traits::iterator::Iterator::try_fold(&v7, v9);
  result = (const char *)v8;
  if ( (_BYTE)v8 == 90 )
  {
    *(_DWORD *)a1 = 0;
    result = aExpectedTheCas;
    *(_QWORD *)(a1 + 8) = aExpectedTheCas;
    *(_QWORD *)(a1 + 16) = 81LL;
  }
  else if ( a3 == (_BYTE)v8 )
  {
    _mm_storel_ps((double *)(a1 + 4), (__m128)v7);
    *(_DWORD *)a1 = 4;
  }
  else
  {
    *(_DWORD *)a1 = 0;
    result = aExpectedTheKey;
    *(_QWORD *)(a1 + 8) = aExpectedTheKey;
    *(_QWORD *)(a1 + 16) = 59LL;
  }
  return result;
}