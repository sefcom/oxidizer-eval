unsigned __int64 __fastcall uu_more::Pager::next_line(__int64 a1)
{
  unsigned __int64 result; // rax
  __int64 v2; // rcx
  unsigned __int64 v3; // rdx
  bool v4; // cf
  unsigned __int64 v5; // rcx

  result = *(_QWORD *)(a1 + 80);
  v2 = *(_QWORD *)(a1 + 112);
  v3 = 0LL;
  v4 = v2 == 0;
  v5 = v2 - 1;
  if ( !v4 )
    v3 = v5;
  if ( result < v3 )
    *(_QWORD *)(a1 + 80) = ++result;
  return result;
}