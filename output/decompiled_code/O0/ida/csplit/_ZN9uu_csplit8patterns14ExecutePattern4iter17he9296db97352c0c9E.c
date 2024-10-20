__int64 *__fastcall uu_csplit::patterns::ExecutePattern::iter(__int64 *a1, _QWORD *a2)
{
  __int64 *result; // rax
  __int64 v3; // rcx

  result = a1;
  if ( *a2 )
  {
    a1[1] = a2[1];
    v3 = 1LL;
  }
  else
  {
    v3 = 0LL;
  }
  *a1 = v3;
  a1[2] = 0LL;
  return result;
}
