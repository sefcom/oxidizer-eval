__int64 __fastcall ruff_python_formatter::comments::map::MultiMap<K,V>::dangling(_QWORD *a1)
{
  _DWORD *inner; // rax
  int v3; // esi
  bool v4; // cf
  __int64 v5; // rsi
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // rsi

  inner = (_DWORD *)hashbrown::map::HashMap<K,V,S,A>::get_inner(a1 + 6);
  if ( !inner )
    return 4LL;
  if ( inner[4] )
  {
    v3 = inner[6];
    v4 = v3 == 0;
    v5 = (unsigned int)(v3 - 1);
    if ( v4 )
      v5 = (unsigned int)(inner[5] - 1);
    return <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(
             (unsigned int)(inner[5] - 1),
             v5,
             a1[1],
             a1[2],
             &off_57CF10);
  }
  else
  {
    v7 = *((_QWORD *)inner + 3) + 1LL;
    v8 = a1[5];
    if ( v7 >= v8 )
      core::panicking::panic_bounds_check(v7, v8, &off_57CF28);
    return *(_QWORD *)(a1[4] + 24 * v7 + 8);
  }
}