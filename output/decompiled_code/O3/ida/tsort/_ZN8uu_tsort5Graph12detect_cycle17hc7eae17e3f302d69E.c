__int64 __fastcall uu_tsort::Graph::detect_cycle(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rax
  __int64 v3; // rbp
  __int64 v4; // rbx
  _OWORD *v5; // rcx
  __int128 v7; // [rsp+8h] [rbp-D0h] BYREF
  __int64 v8; // [rsp+18h] [rbp-C0h]
  __int64 v9; // [rsp+20h] [rbp-B8h]
  __m256i v10; // [rsp+28h] [rbp-B0h] BYREF
  __int64 v11; // [rsp+48h] [rbp-90h]
  __m256i v12; // [rsp+50h] [rbp-88h] BYREF
  __int64 v13; // [rsp+70h] [rbp-68h]
  _BYTE v14[96]; // [rsp+78h] [rbp-60h] BYREF

  v9 = a1;
  <hashbrown::map::HashMap<K,V,S,A> as core::default::Default>::default(v14);
  alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v10, *(_QWORD *)(a2 + 24), 0LL);
  if ( v10.m256i_i64[0] )
    alloc::raw_vec::handle_error(v10.m256i_i64[1], v10.m256i_i64[2]);
  v7 = *(_OWORD *)&v10.m256i_u64[1];
  v8 = 0LL;
  hashbrown::map::HashMap<K,V,S,A>::iter(&v10, a2);
  v13 = v11;
  v12 = v10;
  do
  {
    v2 = (_QWORD *)<hashbrown::map::Iter<K,V> as core::iter::traits::iterator::Iterator>::next(&v12);
    if ( !v2 )
      core::panicking::panic(aInternalErrorE_4, 40LL, &off_122670);
    v3 = *v2;
    v4 = v2[1];
  }
  while ( hashbrown::map::HashMap<K,V,S,A>::get_inner(v14, *v2, v4)
       || !(unsigned __int8)uu_tsort::Graph::dfs(a2, v3, v4, v14, &v7) );
  v5 = (_OWORD *)v9;
  *(_QWORD *)(v9 + 16) = v8;
  *v5 = v7;
  return core::ptr::drop_in_place<std::collections::hash::set::HashSet<&str>>(v14);
}
