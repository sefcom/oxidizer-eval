__int64 __fastcall uu_tail::follow::watch::Observer::add_bad_path(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        char a6)
{
  __int64 result; // rax
  __int64 v7; // [rsp-8h] [rbp-18h]

  result = 0LL;
  if ( *(_BYTE *)(a1 + 140) )
  {
    if ( *(_BYTE *)(a1 + 142) != 2 )
      return uu_tail::follow::watch::Observer::add_path(a1, a2, a3, a4, a5, 0LL, v7, a6);
  }
  return result;
}
