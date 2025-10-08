__int64 __fastcall uu_tsort::Graph::detect_cycle(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int128 v3; // rax
  __int64 v4; // rax
  _QWORD *v5; // rbp
  char v7; // [rsp+Fh] [rbp-C9h] BYREF
  __int64 v8; // [rsp+10h] [rbp-C8h] BYREF
  __int64 v9; // [rsp+18h] [rbp-C0h]
  unsigned __int64 v10; // [rsp+20h] [rbp-B8h]
  __int128 v11; // [rsp+28h] [rbp-B0h] BYREF
  __int64 v12; // [rsp+38h] [rbp-A0h]
  _OWORD v13[3]; // [rsp+40h] [rbp-98h] BYREF
  _OWORD v14[6]; // [rsp+78h] [rbp-60h] BYREF

  v8 = 0LL;
  v9 = 8LL;
  v10 = 0LL;
  hashbrown::map::HashMap<K,V,S,A>::iter(v14, a2 + 24);
  while ( 1 )
  {
    v2 = <hashbrown::map::Iter<K,V> as core::iter::traits::iterator::Iterator>::next(v14);
    if ( !v2 )
      break;
    alloc::vec::Vec<T,A>::push(&v8, v2);
  }
  if ( v10 >= 2 )
  {
    if ( v10 >= 0x15 )
      core::slice::sort::unstable::ipnsort(v9, v10, &v7);
    else
      core::slice::sort::shared::smallsort::insertion_sort_shift_left(v9, v10, 1LL);
  }
  <hashbrown::map::HashMap<K,V,S,A> as core::default::Default>::default(v14);
  v13[2] = v14[2];
  v13[1] = v14[1];
  v13[0] = v14[0];
  *(_QWORD *)&v3 = alloc::raw_vec::RawVecInner<A>::with_capacity_in(*(_QWORD *)(a2 + 48), 8LL, 16LL, &off_EB408);
  v11 = v3;
  v12 = 0LL;
  <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(v14, &v8);
  v4 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(v14);
  if ( !v4 )
  {
LABEL_13:
    core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<&&str>>(v14);
    core::panicking::panic(aInternalErrorE, 40LL, &off_EB420);
  }
  v5 = (_QWORD *)v4;
  while ( hashbrown::map::HashMap<K,V,S,A>::get_inner(v13, v5)
       || !(unsigned __int8)uu_tsort::Graph::dfs(a2, *v5, v5[1], v13, &v11) )
  {
    v5 = (_QWORD *)<alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(v14);
    if ( !v5 )
      goto LABEL_13;
  }
  *(_QWORD *)(a1 + 16) = v12;
  *(_OWORD *)a1 = v11;
  core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<&&str>>(v14);
  return core::ptr::drop_in_place<std::collections::hash::set::HashSet<&str>>(
           *(_QWORD *)&v13[0],
           *((_QWORD *)&v13[0] + 1));
}