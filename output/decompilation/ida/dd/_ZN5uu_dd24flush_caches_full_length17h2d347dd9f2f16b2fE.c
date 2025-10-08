__int64 __fastcall uu_dd::flush_caches_full_length(__int64 a1, __int64 a2)
{
  __int64 v2; // r15
  __int64 v3; // rdx
  bool v4; // cl
  __int64 result; // rax
  __int64 v6; // rdx
  bool v7; // cl

  v2 = *(_QWORD *)(a1 + 8);
  if ( *(_BYTE *)(v2 + 69) )
  {
    v4 = uu_dd::Source::len((_DWORD *)a1);
    result = v3;
    if ( v4 )
      return result;
    uu_dd::Input::discard_cache(*(_DWORD *)a1, *(unsigned int *)(a1 + 4), 0LL, v3);
  }
  if ( *(_BYTE *)(v2 + 156) )
  {
    v7 = uu_dd::Dest::len((_BYTE *)a2);
    result = v6;
    if ( v7 )
      return result;
    uu_dd::Output::discard_cache(*(_DWORD *)a2, *(unsigned int *)(a2 + 4), 0LL, v6);
  }
  return 0LL;
}