__int64 __fastcall ruff_python_formatter::string::docstring::CodeExampleKind::indent(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rax
  __int64 result; // rax

  v2 = 1LL;
  if ( (*(_QWORD *)a2 ^ 0x8000000000000000LL) < 3 )
    v2 = *(_QWORD *)a2 ^ 0x8000000000000000LL;
  if ( !v2 )
    return ruff_python_formatter::string::docstring::Indentation::from_str(
             a1,
             *(_QWORD *)(a2 + 32),
             *(_QWORD *)(a2 + 40));
  if ( v2 == 1 )
  {
    result = *(unsigned int *)(a2 + 48);
    if ( (_DWORD)result == 5 )
    {
      result = *(_QWORD *)(a2 + 40);
      *(_QWORD *)(a1 + 16) = result;
      *(_OWORD *)a1 = *(_OWORD *)(a2 + 24);
    }
    else
    {
      *(_DWORD *)(a1 + 20) = *(_DWORD *)(a2 + 68);
      *(_OWORD *)(a1 + 4) = *(_OWORD *)(a2 + 52);
      *(_DWORD *)a1 = result;
    }
  }
  else
  {
    result = *(_QWORD *)(a2 + 48);
    *(_QWORD *)(a1 + 16) = result;
    *(_OWORD *)a1 = *(_OWORD *)(a2 + 32);
  }
  return result;
}