__int64 __fastcall just::justfile::Justfile::public_groups(__int64 a1, _QWORD *a2, char a3)
{
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // r12
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  __int64 v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rbp
  __int64 v17; // rax
  __int64 v18; // rbx
  __int64 v19; // r15
  __int64 v20; // r12
  __int64 v23; // [rsp+8h] [rbp-150h] BYREF
  __int64 v24; // [rsp+10h] [rbp-148h]
  __int64 v25; // [rsp+18h] [rbp-140h]
  __int128 v26; // [rsp+20h] [rbp-138h] BYREF
  __m256i v27; // [rsp+30h] [rbp-128h]
  __int64 v28; // [rsp+50h] [rbp-108h]
  __int64 v29; // [rsp+58h] [rbp-100h]
  __int64 v30; // [rsp+60h] [rbp-F8h]
  __int64 v31; // [rsp+70h] [rbp-E8h]
  _QWORD *v32; // [rsp+78h] [rbp-E0h]
  __int128 v33; // [rsp+80h] [rbp-D8h] BYREF
  __m256i v34; // [rsp+90h] [rbp-C8h]
  __int64 v35; // [rsp+B0h] [rbp-A8h]
  __int64 v36; // [rsp+B8h] [rbp-A0h]
  __int64 v37; // [rsp+C0h] [rbp-98h]
  _BYTE v38[24]; // [rsp+C8h] [rbp-90h] BYREF
  __int64 v39; // [rsp+E0h] [rbp-78h]
  __int128 v40; // [rsp+E8h] [rbp-70h]
  _BYTE v41[24]; // [rsp+F8h] [rbp-60h] BYREF
  __int128 v42; // [rsp+110h] [rbp-48h]

  v31 = a1;
  v23 = 0LL;
  v24 = 8LL;
  v25 = 0LL;
  v3 = a2[87];
  v4 = a2[88];
  v5 = v3;
  if ( v3 )
    v5 = a2[89];
  v32 = a2;
  v26 = v3 != 0;
  v27.m256i_i64[0] = v3;
  v27.m256i_i64[1] = v4;
  *(_OWORD *)&v27.m256i_u64[2] = v26;
  v28 = v3;
  v29 = v4;
  v30 = v5;
  while ( <alloc::collections::btree::map::Iter<K,V> as core::iter::traits::iterator::Iterator>::next(&v26) )
  {
    v7 = v6;
    if ( !v6 )
      break;
    if ( !*(_BYTE *)(*(_QWORD *)v6 + 268LL)
      && !(unsigned __int8)just::attribute_set::AttributeSet::contains((__int64 *)(*(_QWORD *)v6 + 232LL), 15) )
    {
      just::recipe::Recipe<D>::groups(v41, *(_QWORD *)v7 + 16LL);
      <alloc::collections::btree::map::BTreeMap<K,V,A> as core::iter::traits::collect::IntoIterator>::into_iter(
        &v33,
        v41);
      while ( 1 )
      {
        <alloc::collections::btree::map::IntoIter<K,V,A> as core::iter::traits::iterator::Iterator>::next(v38, &v33);
        v9 = *(_QWORD *)v38;
        if ( __OFSUB__(-*(_QWORD *)v38, 1LL) )
          break;
        v42 = *(_OWORD *)&v38[8];
        v10 = *(_QWORD *)(*(_QWORD *)v7 + 216LL);
        *(_OWORD *)v38 = *(_OWORD *)(*(_QWORD *)v7 + 72LL);
        *(_QWORD *)&v38[16] = v10;
        v39 = v9;
        v40 = v42;
        alloc::vec::Vec<T,A>::push(&v23, v38, &off_430358);
      }
      core::ptr::drop_in_place<alloc::collections::btree::set::IntoIter<alloc::string::String>>(
        &v33,
        &v33,
        v8,
        -*(_QWORD *)v38);
    }
  }
  v11 = v32[84];
  v12 = v32[85];
  v13 = 0LL;
  v14 = v11;
  if ( v11 )
    v14 = v32[86];
  LOBYTE(v13) = v11 != 0;
  v33 = v13;
  v34.m256i_i64[0] = v11;
  v34.m256i_i64[1] = v12;
  *(_OWORD *)&v34.m256i_u64[2] = v13;
  v35 = v11;
  v36 = v12;
  v37 = v14;
  while ( <alloc::collections::btree::map::Iter<K,V> as core::iter::traits::iterator::Iterator>::next(&v33) )
  {
    v16 = v15;
    if ( !v15 )
      break;
    v17 = *(_QWORD *)(v15 + 16);
    if ( v17 )
    {
      v18 = *(_QWORD *)(v15 + 8);
      v19 = 24 * v17;
      do
      {
        if ( *(_BYTE *)(v16 + 560) == 37 )
          core::option::unwrap_failed(&off_430328);
        v20 = *(_QWORD *)(v16 + 552);
        <alloc::string::String as core::clone::Clone>::clone(v38, v18);
        v26 = 8uLL;
        v27.m256i_i64[0] = v20;
        v27.m256i_i64[3] = *(_QWORD *)&v38[16];
        *(_OWORD *)&v27.m256i_u64[1] = *(_OWORD *)v38;
        alloc::vec::Vec<T,A>::push(&v23, &v26, &off_430340);
        v18 += 24LL;
        v19 -= 24LL;
      }
      while ( v19 );
    }
  }
  if ( (a3 & 1) != 0 )
    alloc::slice::stable_sort(v24, v25);
  else
    alloc::slice::<impl [T]>::sort_by(v24, v25);
  <hashbrown::map::HashMap<K,V,S,A> as core::default::Default>::default(&v33);
  v27 = v34;
  v26 = v33;
  alloc::vec::Vec<T,A>::retain(&v23, &v26);
  <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v33, &v23);
  core::iter::traits::iterator::Iterator::collect(v31, &v33);
  return core::ptr::drop_in_place<std::collections::hash::set::HashSet<alloc::string::String>>(&v26);
}