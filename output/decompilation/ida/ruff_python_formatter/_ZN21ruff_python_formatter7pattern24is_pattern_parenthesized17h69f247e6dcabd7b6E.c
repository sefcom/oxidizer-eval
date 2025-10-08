bool __fastcall ruff_python_formatter::pattern::is_pattern_parenthesized(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rbx
  _BYTE v11[12]; // [rsp+14h] [rbp-84h] BYREF
  _BYTE v12[120]; // [rsp+20h] [rbp-78h] BYREF

  v7 = *a1 ^ 0x8000000000000000LL;
  v8 = 3LL;
  if ( v7 >= 8 )
    v7 = 3LL;
  ruff_python_trivia::tokenizer::first_non_trivia_token(v12, *(unsigned int *)((char *)a1 + qword_8D590[v7]), a4, a5);
  if ( v12[8] != 6 )
    return 0;
  if ( (*a1 ^ 0x8000000000000000LL) < 8 )
    v8 = *a1 ^ 0x8000000000000000LL;
  ruff_python_trivia::tokenizer::BackwardsTokenizer::up_to(
    v12,
    *(unsigned int *)((char *)a1 + qword_8D5D0[v8]),
    a4,
    a5,
    a2,
    a3);
  core::iter::traits::iterator::Iterator::try_fold(v11, v12);
  return v11[8] == 5;
}