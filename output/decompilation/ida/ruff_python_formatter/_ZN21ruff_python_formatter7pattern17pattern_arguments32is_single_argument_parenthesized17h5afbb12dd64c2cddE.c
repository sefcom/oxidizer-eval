bool __fastcall ruff_python_formatter::pattern::pattern_arguments::is_single_argument_parenthesized(
        _QWORD *a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // r8
  unsigned __int64 v5; // rsi
  unsigned int v6; // eax
  _BYTE v8[8]; // [rsp+Ch] [rbp-4Ch] BYREF
  char v9; // [rsp+14h] [rbp-44h]
  _BYTE v10[64]; // [rsp+18h] [rbp-40h] BYREF

  v4 = a2;
  v5 = 3LL;
  if ( (*a1 ^ 0x8000000000000000LL) < 8 )
    v5 = *a1 ^ 0x8000000000000000LL;
  v6 = *(_DWORD *)((char *)a1 + qword_8D590[v5]);
  if ( v6 > (unsigned int)v4 )
    core::panicking::panic(aAssertionFaile_0, 38LL, &off_57E5F8);
  ruff_python_trivia::tokenizer::SimpleTokenizer::new(v10, a3, a4, v6, v4);
  do
    core::iter::traits::iterator::Iterator::try_fold(v8, v10);
  while ( v9 == 11 );
  if ( v9 != 6 )
    return 0;
  do
    core::iter::traits::iterator::Iterator::try_fold(v8, v10);
  while ( v9 == 11 );
  return v9 == 6;
}