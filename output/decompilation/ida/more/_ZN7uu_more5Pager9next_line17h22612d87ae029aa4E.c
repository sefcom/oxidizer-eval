__int64 __fastcall uu_more::Pager::next_line(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rcx

  result = *(_QWORD *)(a1 + 24) + 1LL;
  v2 = -1LL;
  if ( *(_QWORD *)(a1 + 24) != -1LL )
    v2 = *(_QWORD *)(a1 + 24) + 1LL;
  *(_QWORD *)(a1 + 24) = v2;
  return result;
}
