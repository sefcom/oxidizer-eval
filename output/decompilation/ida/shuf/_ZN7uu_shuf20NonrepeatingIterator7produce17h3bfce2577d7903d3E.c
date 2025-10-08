__int64 __fastcall uu_shuf::NonrepeatingIterator::produce(__int64 a1)
{
  __int64 v1; // r14
  __int64 v2; // r14
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  __int128 v7; // [rsp+0h] [rbp-68h] BYREF
  unsigned __int64 v8; // [rsp+10h] [rbp-58h]
  __int64 v9; // [rsp+18h] [rbp-50h] BYREF
  _BYTE v10[72]; // [rsp+20h] [rbp-48h] BYREF

  if ( *(_QWORD *)a1 )
  {
    do
    {
      v1 = *(_QWORD *)(a1 + 56);
      <core::ops::range::RangeInclusive<Idx> as core::clone::Clone>::clone(&v9, a1 + 64);
      v2 = rand::rng::Rng::random_range(v1, &v9, &off_FA0C8);
    }
    while ( (unsigned __int8)hashbrown::map::HashMap<K,V,S,A>::insert(a1, v2) );
    v3 = -1LL;
    if ( *(_QWORD *)(a1 + 72) - *(_QWORD *)(a1 + 64) != -1LL )
      v3 = *(_QWORD *)(a1 + 72) - *(_QWORD *)(a1 + 64) + 1LL;
    if ( *(_QWORD *)(a1 + 24) >= v3 >> 2 )
    {
      <core::ops::range::RangeInclusive<Idx> as core::clone::Clone>::clone(v10, a1 + 64);
      v9 = a1;
      core::iter::traits::iterator::Iterator::collect(&v7, &v9);
      v4 = v8;
      if ( v8 < *(_QWORD *)(a1 + 48) )
        core::panicking::panic(aAssertionFaile, 57LL, &off_FA0E0);
      <[T] as rand::seq::slice::SliceRandom>::partial_shuffle(&v9, *((_QWORD *)&v7 + 1), v8, a1 + 56);
      if ( *(_QWORD *)(a1 + 48) <= v4 )
        v8 = *(_QWORD *)(a1 + 48);
      core::ptr::drop_in_place<uu_shuf::NumberSet>(a1);
      *(_QWORD *)a1 = 0LL;
      *(_OWORD *)(a1 + 8) = v7;
      *(_QWORD *)(a1 + 24) = v8;
    }
  }
  else
  {
    v5 = *(_QWORD *)(a1 + 24);
    if ( !v5 )
      core::option::unwrap_failed(&off_FA0F8);
    *(_QWORD *)(a1 + 24) = v5 - 1;
    return *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8 * v5 - 8);
  }
  return v2;
}