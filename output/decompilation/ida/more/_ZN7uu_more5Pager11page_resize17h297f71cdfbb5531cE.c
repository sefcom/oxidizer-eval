__int64 __fastcall uu_more::Pager::page_resize(__int64 a1, __int64 a2, __int16 a3, __int16 a4)
{
  bool v4; // cf
  unsigned __int16 v5; // dx
  __int64 result; // rax

  if ( !a4 )
  {
    v4 = a3 == 0;
    v5 = a3 - 1;
    if ( v4 )
      v5 = 0;
    result = v5;
    *(_QWORD *)(a1 + 88) = v5;
  }
  return result;
}