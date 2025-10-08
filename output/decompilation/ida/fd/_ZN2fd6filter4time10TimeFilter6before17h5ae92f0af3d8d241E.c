__int64 __fastcall fd::filter::time::TimeFilter::before(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  int v4; // edx
  __int64 v5; // rcx

  result = fd::filter::time::TimeFilter::from_str(a2, a3);
  v5 = 2LL;
  if ( v4 != 1000000000 )
  {
    *(_QWORD *)(a1 + 8) = result;
    *(_DWORD *)(a1 + 16) = v4;
    v5 = 0LL;
  }
  *(_QWORD *)a1 = v5;
  return result;
}