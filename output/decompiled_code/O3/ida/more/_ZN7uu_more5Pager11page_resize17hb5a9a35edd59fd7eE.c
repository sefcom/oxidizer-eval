__int64 __fastcall uu_more::Pager::page_resize(__int64 a1, __int16 a2, __int16 a3)
{
  __int64 result; // rax
  bool v4; // cf
  __int16 v5; // si

  if ( a3 != 1 )
  {
    result = 0LL;
    v4 = a2 == 0;
    v5 = a2 - 1;
    if ( v4 )
      v5 = 0;
    *(_WORD *)(a1 + 64) = v5;
  }
  return result;
}
