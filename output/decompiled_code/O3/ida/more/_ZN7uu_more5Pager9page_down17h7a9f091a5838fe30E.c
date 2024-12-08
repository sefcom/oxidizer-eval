__int64 __fastcall uu_more::Pager::page_down(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rcx
  __int64 v3; // rdx
  unsigned __int64 v4; // rsi
  bool v5; // cf
  unsigned __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // r8

  result = *(unsigned __int16 *)(a1 + 64);
  v2 = 2 * (unsigned int)*(unsigned __int16 *)(a1 + 64);
  v3 = *(_QWORD *)(a1 + 24);
  v4 = *(_QWORD *)(a1 + 48);
  v5 = __CFADD__(v3, v2);
  v6 = v3 + v2;
  if ( v5 )
    v6 = -1LL;
  v5 = __CFADD__(result, v3);
  v7 = result + v3;
  if ( v5 )
    v7 = -1LL;
  v8 = v4 - result;
  if ( v6 < v4 )
    v8 = v7;
  *(_QWORD *)(a1 + 24) = v8;
  return result;
}
