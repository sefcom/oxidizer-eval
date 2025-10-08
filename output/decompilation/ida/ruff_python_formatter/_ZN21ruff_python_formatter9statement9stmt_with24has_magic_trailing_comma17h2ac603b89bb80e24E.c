__int64 __fastcall ruff_python_formatter::statement::stmt_with::has_magic_trailing_comma(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned int v4; // eax
  __int64 v5; // rsi

  v2 = *(_QWORD *)(a1 + 16);
  if ( !v2 )
    return 0LL;
  v4 = *(_DWORD *)(*(_QWORD *)(a1 + 8) + 104 * v2 - 20);
  v5 = *(unsigned int *)(a1 + 52);
  if ( v4 > (unsigned int)v5 )
    core::panicking::panic(aAssertionFaile_0, 38LL, &off_57F010);
  return ruff_python_formatter::other::commas::has_magic_trailing_comma(v4, v5, a2);
}