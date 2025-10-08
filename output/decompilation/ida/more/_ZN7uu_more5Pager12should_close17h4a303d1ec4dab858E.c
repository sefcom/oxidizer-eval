bool __fastcall uu_more::Pager::should_close(_QWORD *a1)
{
  __int64 v1; // rax
  bool v2; // cf
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rcx

  v1 = a1[10];
  v2 = __CFADD__(a1[11], v1);
  v3 = a1[11] + v1;
  v4 = -1LL;
  if ( !v2 )
    v4 = v3;
  return v4 >= a1[14];
}