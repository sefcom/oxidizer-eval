__int64 __fastcall ruff_python_formatter::statement::trailing_semicolon(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  unsigned int v7; // edx
  __int64 result; // rax
  unsigned __int64 v9; // [rsp+0h] [rbp-78h] BYREF
  char v10; // [rsp+8h] [rbp-70h]
  _QWORD v11[2]; // [rsp+10h] [rbp-68h] BYREF
  _BYTE v12[88]; // [rsp+20h] [rbp-58h] BYREF

  v11[0] = a2;
  v11[1] = a3;
  <ruff_python_ast::generated::AnyNodeRef as ruff_text_size::traits::Ranged>::range(v11);
  ruff_python_trivia::tokenizer::SimpleTokenizer::starts_at(v12, v7, a4, a5);
  v12[48] = 0;
  <core::iter::adapters::take_while::TakeWhile<I,P> as core::iter::traits::iterator::Iterator>::try_fold(&v9, v12);
  result = 0LL;
  if ( v10 == 13 )
  {
    _mm_storel_ps((double *)(a1 + 4), (__m128)v9);
    result = 1LL;
  }
  *(_DWORD *)a1 = result;
  return result;
}