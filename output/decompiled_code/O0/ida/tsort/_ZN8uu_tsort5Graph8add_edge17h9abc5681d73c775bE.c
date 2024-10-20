int __fastcall uu_tsort::Graph::add_edge(__int64 a1, const void *a2, size_t a3, const void *a4, __int64 a5)
{
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 inner_mut; // rax
  __int64 v14; // r12
  __int64 v15; // r13
  __int64 v16; // rax
  __int64 v17; // rcx
  _BOOL8 v19; // [rsp+0h] [rbp-78h] BYREF
  __int128 v20; // [rsp+8h] [rbp-70h]
  __int128 v21; // [rsp+18h] [rbp-60h]
  __int64 v22; // [rsp+28h] [rbp-50h] BYREF
  __int128 v23; // [rsp+30h] [rbp-48h]
  __int128 v24; // [rsp+40h] [rbp-38h]

  hashbrown::rustc_entry::<impl hashbrown::map::HashMap<K,V,S,A>>::rustc_entry(&v22, a1, a2, a3);
  v20 = v23;
  v21 = v24;
  v19 = v22 != 0;
  ((void (__fastcall *)(_BOOL8 *))std::collections::hash::map::Entry<K,V>::or_insert_with)(&v19);
  if ( a3 != a5 || (LODWORD(v8) = bcmp(a2, a4, a3), (_DWORD)v8) )
  {
    hashbrown::rustc_entry::<impl hashbrown::map::HashMap<K,V,S,A>>::rustc_entry(&v22, a1, a4, a5);
    v20 = v23;
    v21 = v24;
    v19 = v22 != 0;
    ((void (__fastcall *)(_BOOL8 *, __int64, __int64, __int64, __int64, __int64))std::collections::hash::map::Entry<K,V>::or_insert_with)(
      &v19,
      a1,
      v9,
      v10,
      v11,
      v12);
    inner_mut = hashbrown::map::HashMap<K,V,S,A>::get_inner_mut(a1, a2, a3);
    if ( !inner_mut )
      core::option::unwrap_failed(&off_110F78);
    v14 = inner_mut;
    v15 = *(_QWORD *)(inner_mut + 32);
    if ( v15 == *(_QWORD *)(inner_mut + 16) )
      alloc::raw_vec::RawVec<T,A>::grow_one(inner_mut + 16);
    v16 = *(_QWORD *)(v14 + 24);
    v17 = 16 * v15;
    *(_QWORD *)(v16 + v17) = a4;
    *(_QWORD *)(v16 + v17 + 8) = a5;
    *(_QWORD *)(v14 + 32) = v15 + 1;
    v8 = hashbrown::map::HashMap<K,V,S,A>::get_inner_mut(a1, a4, a5);
    if ( !v8 )
      core::option::unwrap_failed(&off_110F90);
    if ( *(_QWORD *)(v8 + 40) == -1LL )
      core::panicking::panic_const::panic_const_add_overflow(&off_110FA8);
    ++*(_QWORD *)(v8 + 40);
  }
  return v8;
}
