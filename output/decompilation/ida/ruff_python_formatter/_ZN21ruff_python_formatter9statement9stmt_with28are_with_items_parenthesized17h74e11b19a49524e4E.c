void __fastcall ruff_python_formatter::statement::stmt_with::are_with_items_parenthesized(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  unsigned int v4; // eax
  __int64 v5; // r8
  _BYTE v6[8]; // [rsp+Ch] [rbp-5Ch] BYREF
  char v7; // [rsp+14h] [rbp-54h]
  _BYTE v8[48]; // [rsp+18h] [rbp-50h] BYREF
  _BYTE v9[32]; // [rsp+48h] [rbp-20h] BYREF

  if ( *(_QWORD *)(a2 + 16) <= 1uLL )
  {
    *(_BYTE *)(a1 + 4) = 0;
  }
  else
  {
    v4 = *(_DWORD *)(a2 + 48);
    v5 = *(unsigned int *)(*(_QWORD *)(a2 + 8) + 80LL);
    if ( v4 > (unsigned int)v5 )
      core::panicking::panic(aAssertionFaile_0, 38LL, &off_57F028);
    ruff_python_trivia::tokenizer::SimpleTokenizer::new(v8, a3, a4, v4, v5);
    v9[0] = 0;
    core::iter::traits::iterator::Iterator::try_fold(v6, v8, v9);
    if ( v7 == 90 )
    {
      *(_DWORD *)a1 = 0;
      *(_QWORD *)(a1 + 8) = aExpectedAWithK;
      *(_QWORD *)(a1 + 16) = 46LL;
      return;
    }
    core::iter::traits::iterator::Iterator::try_fold(v6, v8, v9);
    *(_BYTE *)(a1 + 4) = v7 != 90;
  }
  *(_DWORD *)a1 = 4;
}