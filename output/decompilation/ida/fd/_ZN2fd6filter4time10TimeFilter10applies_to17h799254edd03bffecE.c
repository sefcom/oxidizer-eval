_BOOL8 __fastcall fd::filter::time::TimeFilter::applies_to(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rcx
  unsigned int v4; // eax
  _BOOL4 v5; // edi
  _BOOL8 result; // rax
  _BOOL4 v7; // edi

  v3 = *(_QWORD *)(a1 + 8);
  v4 = *(_DWORD *)(a1 + 16);
  if ( *(_DWORD *)a1 == 1 )
  {
    v5 = a3 > v4;
    result = a2 > v3;
    if ( a2 == v3 )
      return v5;
  }
  else
  {
    v7 = a3 < v4;
    result = a2 < v3;
    if ( a2 == v3 )
      return v7;
  }
  return result;
}