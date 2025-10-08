__int64 __fastcall uu_more::Pager::page_down(_QWORD *a1)
{
  __int64 result; // rax
  __int64 v2; // rcx
  unsigned __int64 v3; // r8
  unsigned __int64 v4; // rsi
  bool v5; // cf

  result = a1[10];
  v2 = a1[11];
  v3 = result + 2 * v2;
  if ( __CFADD__(result, 2 * v2) )
    v3 = -1LL;
  v4 = a1[14];
  if ( v3 >= v4 )
  {
    a1[10] = v4 - v2;
  }
  else
  {
    v5 = __CFADD__(v2, result);
    result += v2;
    if ( v5 )
      result = -1LL;
    a1[10] = result;
  }
  return result;
}