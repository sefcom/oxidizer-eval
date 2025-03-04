__int64 __fastcall uu_tsort::Graph::dfs(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int v5; // ebp
  __int64 inner; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 *v11; // rax
  __int64 v12; // rax
  __int64 v14; // [rsp+0h] [rbp-48h] BYREF
  __int64 v15; // [rsp+8h] [rbp-40h]
  _QWORD v16[7]; // [rsp+10h] [rbp-38h] BYREF

  v14 = a2;
  v15 = a3;
  LOBYTE(v5) = 1;
  if ( !(unsigned __int8)<T as core::slice::cmp::SliceContains>::slice_contains(
                           &v14,
                           *(_QWORD *)(a5 + 8),
                           *(_QWORD *)(a5 + 16)) )
  {
    if ( !hashbrown::map::HashMap<K,V,S,A>::get_inner(a4, &v14) )
    {
      hashbrown::map::HashMap<K,V,S,A>::insert(a4, v14, v15);
      alloc::vec::Vec<T,A>::push(a5, v14);
      inner = hashbrown::map::HashMap<K,V,S,A>::get_inner(a1, v14, v15);
      if ( inner )
      {
        v9 = *(_QWORD *)(inner + 24);
        v10 = 16LL * *(_QWORD *)(inner + 32);
        v16[0] = v9;
        v16[1] = v9 + v10;
        while ( 1 )
        {
          v11 = (__int64 *)<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v16);
          if ( !v11 )
            break;
          if ( (unsigned __int8)uu_tsort::Graph::dfs(a1, *v11, v11[1], a4, a5) )
            return v5;
        }
      }
      v12 = *(_QWORD *)(a5 + 16);
      if ( v12 )
        *(_QWORD *)(a5 + 16) = v12 - 1;
    }
    return 0;
  }
  return v5;
}
