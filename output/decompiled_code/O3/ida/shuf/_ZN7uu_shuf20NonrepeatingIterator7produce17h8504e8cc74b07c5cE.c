__int64 __fastcall uu_shuf::NonrepeatingIterator::produce(__int64 a1)
{
  __int64 v1; // r14
  __int64 v2; // r14
  unsigned __int64 v3; // rcx
  __int64 v4; // rax
  __int128 v6; // [rsp+8h] [rbp-80h] BYREF
  unsigned __int64 v7; // [rsp+18h] [rbp-70h]
  __int128 v8; // [rsp+20h] [rbp-68h] BYREF
  unsigned __int64 v9; // [rsp+30h] [rbp-58h]
  __int64 v10; // [rsp+40h] [rbp-48h] BYREF
  _BYTE v11[64]; // [rsp+48h] [rbp-40h] BYREF

  if ( *(_QWORD *)a1 )
  {
    do
    {
      v1 = *(_QWORD *)(a1 + 56);
      <core::ops::range::RangeInclusive<Idx> as core::clone::Clone>::clone(&v8, a1 + 64);
      v2 = rand::rng::Rng::gen_range(v1, &v8);
    }
    while ( (unsigned __int8)hashbrown::map::HashMap<K,V,S,A>::insert(a1, v2) );
    v3 = -1LL;
    if ( *(_QWORD *)(a1 + 72) - *(_QWORD *)(a1 + 64) != -1LL )
      v3 = *(_QWORD *)(a1 + 72) - *(_QWORD *)(a1 + 64) + 1LL;
    if ( *(_QWORD *)(a1 + 24) >= v3 >> 2 )
    {
      <core::ops::range::RangeInclusive<Idx> as core::clone::Clone>::clone(v11, a1 + 64);
      v10 = a1;
      <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v6, &v10);
      if ( v7 < *(_QWORD *)(a1 + 48) )
        core::panicking::panic(aAssertionFaile_3, 57LL, &off_137D08);
      <[T] as rand::seq::SliceRandom>::partial_shuffle(&v8, *((_QWORD *)&v6 + 1), v7, a1 + 56);
      alloc::vec::Vec<T,A>::truncate(&v6, *(_QWORD *)(a1 + 48));
      v9 = v7;
      v8 = v6;
      core::ptr::drop_in_place<uu_shuf::NumberSet>(a1);
      *(_QWORD *)a1 = 0LL;
      *(_OWORD *)(a1 + 8) = v8;
      *(_QWORD *)(a1 + 24) = v9;
    }
  }
  else
  {
    v4 = *(_QWORD *)(a1 + 24);
    if ( !v4 )
      core::option::unwrap_failed(&off_137D20);
    *(_QWORD *)(a1 + 24) = v4 - 1;
    return *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8 * v4 - 8);
  }
  return v2;
}
