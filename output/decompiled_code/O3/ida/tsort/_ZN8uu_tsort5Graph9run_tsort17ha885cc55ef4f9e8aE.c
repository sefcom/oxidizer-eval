__int64 __fastcall uu_tsort::Graph::run_tsort(__int64 a1, _QWORD *a2)
{
  __int64 contiguous; // rax
  unsigned __int64 v4; // rdx
  _QWORD *v5; // rsi
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rbx
  __int64 v9; // r12
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rbx
  __int64 v13; // r12
  __int64 v14; // rdx
  __int64 inner_mut; // rax
  __int64 v17; // rcx
  __int64 v18; // rbx
  char v20; // [rsp+7h] [rbp-E1h] BYREF
  __int64 v21; // [rsp+8h] [rbp-E0h]
  __m256i v22; // [rsp+10h] [rbp-D8h] BYREF
  __int64 v23; // [rsp+30h] [rbp-B8h]
  __int128 v24; // [rsp+38h] [rbp-B0h] BYREF
  __int64 v25; // [rsp+48h] [rbp-A0h]
  _BYTE v26[32]; // [rsp+50h] [rbp-98h] BYREF
  __m256i v27; // [rsp+70h] [rbp-78h] BYREF
  __int64 v28; // [rsp+90h] [rbp-58h]
  _QWORD v29[10]; // [rsp+98h] [rbp-50h] BYREF

  v21 = a1;
  alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v22, a2[3], 0LL);
  if ( v22.m256i_i64[0] )
    alloc::raw_vec::handle_error(v22.m256i_i64[1], v22.m256i_i64[2]);
  v24 = *(_OWORD *)&v22.m256i_u64[1];
  v25 = 0LL;
  hashbrown::map::HashMap<K,V,S,A>::iter(&v22, a2);
  v28 = v23;
  v27 = v22;
  <alloc::collections::vec_deque::VecDeque<T> as alloc::collections::vec_deque::spec_from_iter::SpecFromIter<T,I>>::spec_from_iter(
    v26,
    &v27);
  contiguous = alloc::collections::vec_deque::VecDeque<T,A>::make_contiguous(v26);
  v5 = (_QWORD *)v4;
  if ( v4 >= 2 )
  {
    if ( v4 >= 0x15 )
      core::slice::sort::unstable::ipnsort(contiguous, v4, &v20);
    else
      core::slice::sort::shared::smallsort::insertion_sort_shift_left(contiguous, v4, 1LL, &v20);
  }
  while ( 1 )
  {
    v6 = alloc::collections::vec_deque::VecDeque<T,A>::pop_front(v26, v5);
    v8 = v6;
    if ( !v6 )
      break;
    v9 = v7;
    alloc::vec::Vec<T,A>::push(&v24, v6);
    v5 = a2;
    hashbrown::map::HashMap<K,V,S,A>::remove(v29, a2, v8, v9);
    if ( v29[0] != 0x8000000000000000LL )
    {
      v5 = v29;
      <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v22, v29);
      v10 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v22);
      if ( v10 )
      {
        v12 = v10;
        v13 = v11;
        do
        {
          v5 = (_QWORD *)v12;
          inner_mut = hashbrown::map::HashMap<K,V,S,A>::get_inner_mut(a2, v12, v13);
          if ( !inner_mut )
            core::option::unwrap_failed(&off_122658);
          if ( (*(_QWORD *)(inner_mut + 40))-- == 1LL )
          {
            v5 = (_QWORD *)v12;
            alloc::collections::vec_deque::VecDeque<T,A>::push_back(v26, v12, v13);
          }
          v12 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v22);
          v13 = v14;
        }
        while ( v12 );
      }
      core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<&str>>(&v22);
    }
  }
  if ( a2[3] )
  {
    uu_tsort::Graph::detect_cycle((__int64)&v22, (__int64)a2);
    v17 = v21;
    *(_QWORD *)(v21 + 24) = v22.m256i_i64[2];
    *(_OWORD *)(v17 + 8) = *(_OWORD *)v22.m256i_i8;
    *(_QWORD *)v17 = 1LL;
    core::ptr::drop_in_place<alloc::collections::vec_deque::VecDeque<&str>>(v26);
    core::ptr::drop_in_place<alloc::vec::Vec<&str>>(&v24);
    return v21;
  }
  else
  {
    v18 = v21;
    *(_QWORD *)(v21 + 24) = v25;
    *(_OWORD *)(v18 + 8) = v24;
    *(_QWORD *)v18 = 0LL;
    core::ptr::drop_in_place<alloc::collections::vec_deque::VecDeque<&str>>(v26);
  }
  return v18;
}
