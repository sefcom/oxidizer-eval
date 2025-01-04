__int64 __fastcall uu_dd::flush_caches_full_length(__int64 a1, _BYTE *a2)
{
  __int64 v2; // r15
  _BOOL8 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  _BOOL8 v6; // rax
  __int64 v7; // rdx

  v2 = *(_QWORD *)(a1 + 8);
  if ( *(_BYTE *)(v2 + 69) )
  {
    v3 = uu_dd::Source::len((_DWORD *)a1);
    v5 = v4;
    if ( v3 )
      return v5;
    uu_dd::Input::discard_cache(*(_DWORD *)a1, *(_DWORD *)(a1 + 4), 0LL, v4);
  }
  if ( !*(_BYTE *)(v2 + 156) )
    return 0LL;
  v6 = uu_dd::Dest::len(a2);
  v5 = v7;
  if ( !v6 )
  {
    uu_dd::Output::discard_cache(a2, 0LL, v7);
    return 0LL;
  }
  return v5;
}
