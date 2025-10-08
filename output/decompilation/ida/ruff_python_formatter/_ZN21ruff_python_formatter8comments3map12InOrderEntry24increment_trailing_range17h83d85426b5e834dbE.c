__int64 __fastcall ruff_python_formatter::comments::map::InOrderEntry::increment_trailing_range(_DWORD *a1)
{
  unsigned int v1; // eax
  int v2; // ecx
  _DWORD *v3; // rdi
  __int64 result; // rax
  unsigned int v5; // eax

  v1 = a1[2];
  v2 = a1[3];
  if ( v1 )
  {
    v3 = a1 + 3;
    if ( v2 )
    {
      return ruff_python_formatter::comments::map::PartIndex::increment(v3);
    }
    else
    {
      result = ruff_python_formatter::comments::map::PartIndex::incremented(v1);
      *v3 = result;
    }
  }
  else
  {
    if ( v2 )
      core::panicking::panic(aInternalErrorE_1, 40LL, &off_57D050);
    v5 = a1[1];
    a1[2] = v5;
    result = ruff_python_formatter::comments::map::PartIndex::incremented(v5);
    a1[3] = result;
  }
  return result;
}