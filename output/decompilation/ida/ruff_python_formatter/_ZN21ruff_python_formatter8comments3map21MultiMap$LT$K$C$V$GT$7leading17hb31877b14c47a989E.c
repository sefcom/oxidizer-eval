__int64 __fastcall ruff_python_formatter::comments::map::MultiMap<K,V>::leading(_QWORD *a1)
{
  __int64 inner; // rax
  int v3; // edi
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // rsi

  inner = hashbrown::map::HashMap<K,V,S,A>::get_inner(a1 + 6);
  if ( !inner )
    return 4LL;
  v3 = *(_DWORD *)(inner + 16);
  if ( v3 )
    return <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(
             (unsigned int)(v3 - 1),
             (unsigned int)(*(_DWORD *)(inner + 20) - 1),
             a1[1],
             a1[2],
             &off_57CEE0);
  v5 = *(_QWORD *)(inner + 24);
  v6 = a1[5];
  if ( v5 >= v6 )
    core::panicking::panic_bounds_check(v5, v6, &off_57CEF8);
  return *(_QWORD *)(a1[4] + 24 * v5 + 8);
}