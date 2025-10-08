__int64 __fastcall bat::syntax_mapping::ignored_suffixes::IgnoredSuffixes::strip_suffix(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // r12
  _QWORD *v5; // r13
  _QWORD *v6; // r12
  __int64 v7; // rbx
  __int64 v8; // rax

  v3 = *(_QWORD *)(a1 + 16);
  if ( !v3 )
    return 0LL;
  v5 = *(_QWORD **)(a1 + 8);
  v6 = &v5[2 * v3];
  v7 = 0LL;
  while ( 1 )
  {
    v8 = <&str as core::str::pattern::Pattern>::strip_suffix_of(*v5, v5[1], a2, a3);
    if ( v8 )
      break;
    v5 += 2;
    if ( v5 == v6 )
      return v7;
  }
  return v8;
}