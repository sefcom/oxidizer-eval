__int64 __fastcall ruff_python_formatter::other::commas::has_magic_trailing_comma(__int64 a1, __int64 a2, __int64 a3)
{
  if ( *(_BYTE *)(a3 + 55) )
    return 0LL;
  else
    return ruff_python_formatter::other::commas::has_trailing_comma(a1, a2, *(_QWORD *)a3, *(_QWORD *)(a3 + 8));
}