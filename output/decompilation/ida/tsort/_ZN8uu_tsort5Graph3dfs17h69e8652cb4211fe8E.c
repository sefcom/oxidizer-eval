__int64 __fastcall uu_tsort::Graph::dfs(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int v5; // ebp
  __int64 inner; // rax
  __int64 v9; // r12
  _QWORD *v10; // r13
  _QWORD *v11; // r12
  __int64 v12; // rax
  __int64 v14; // [rsp+8h] [rbp-40h] BYREF
  __int64 v15; // [rsp+10h] [rbp-38h]

  v14 = a2;
  v15 = a3;
  LOBYTE(v5) = 1;
  if ( (unsigned __int8)<T as core::slice::cmp::SliceContains>::slice_contains(
                          &v14,
                          *(_QWORD *)(a5 + 8),
                          *(_QWORD *)(a5 + 16)) )
    return v5;
  if ( hashbrown::map::HashMap<K,V,S,A>::get_inner(a4, &v14) )
    return 0;
  hashbrown::map::HashMap<K,V,S,A>::insert(a4, v14, v15);
  alloc::vec::Vec<T,A>::push(a5, v14, v15, &off_EB450);
  inner = hashbrown::map::HashMap<K,V,S,A>::get_inner(a1 + 24);
  if ( !inner || (v9 = *(_QWORD *)(inner + 32)) == 0 )
  {
LABEL_8:
    v12 = *(_QWORD *)(a5 + 16);
    if ( v12 )
      *(_QWORD *)(a5 + 16) = v12 - 1;
    return 0;
  }
  v10 = *(_QWORD **)(inner + 24);
  v11 = &v10[2 * v9];
  while ( !(unsigned __int8)uu_tsort::Graph::dfs(a1, *v10, v10[1], a4, a5) )
  {
    v10 += 2;
    if ( v10 == v11 )
      goto LABEL_8;
  }
  return v5;
}