__int64 __fastcall uu_more::Pager::prev_line(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rcx
  bool v3; // cf
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 24);
  v2 = 0LL;
  v3 = v1 == 0;
  result = v1 - 1;
  if ( !v3 )
    v2 = result;
  *(_QWORD *)(a1 + 24) = v2;
  return result;
}
