__int64 __fastcall ruff_python_formatter::comments::map::MultiMap<K,V>::trailing(_QWORD *a1)
{
  __int64 inner; // rax
  __int64 v3; // rax
  __int64 v4; // rdx
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // rsi

  inner = hashbrown::map::HashMap<K,V,S,A>::get_inner(a1 + 6);
  if ( !inner )
    return 4LL;
  if ( *(_DWORD *)(inner + 16) )
  {
    v3 = ruff_python_formatter::comments::map::InOrderEntry::trailing_range(inner + 16);
    return <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(
             v3,
             v4,
             a1[1],
             a1[2],
             &off_57CF40);
  }
  else
  {
    v6 = *(_QWORD *)(inner + 24) + 2LL;
    v7 = a1[5];
    if ( v6 >= v7 )
      core::panicking::panic_bounds_check(v6, v7, &off_57CF58);
    return *(_QWORD *)(a1[4] + 24 * v6 + 8);
  }
}