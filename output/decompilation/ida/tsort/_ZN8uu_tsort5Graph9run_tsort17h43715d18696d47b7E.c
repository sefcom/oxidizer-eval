__int64 __fastcall uu_tsort::Graph::run_tsort(__int64 a1)
{
  __int64 v1; // r14
  __int64 contiguous; // rax
  unsigned __int64 v3; // rdx
  __int64 v4; // rax
  unsigned __int64 v5; // rdx
  __int64 i; // rdi
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r13
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 inner_mut; // rax
  char v16; // [rsp+Fh] [rbp-B9h] BYREF
  __int64 v17; // [rsp+10h] [rbp-B8h]
  __int64 next_node; // [rsp+18h] [rbp-B0h] BYREF
  __int64 v19; // [rsp+20h] [rbp-A8h]
  __int64 *p_next_node; // [rsp+28h] [rbp-A0h] BYREF
  __int64 (__fastcall *v21)(); // [rsp+30h] [rbp-98h]
  _QWORD v22[6]; // [rsp+48h] [rbp-80h] BYREF
  _BYTE v23[80]; // [rsp+78h] [rbp-50h] BYREF

  v17 = a1;
  v1 = a1 + 24;
  hashbrown::map::HashMap<K,V,S,A>::iter(v22, a1 + 24);
  core::iter::traits::iterator::Iterator::collect(v23, v22);
  contiguous = alloc::collections::vec_deque::VecDeque<T,A>::make_contiguous(v23);
  if ( v3 >= 2 )
  {
    if ( v3 >= 0x15 )
      core::slice::sort::unstable::ipnsort(contiguous, v3, &v16);
    else
      core::slice::sort::shared::smallsort::insertion_sort_shift_left(contiguous, v3);
  }
  v4 = alloc::collections::vec_deque::VecDeque<T,A>::make_contiguous(v23);
  if ( v5 >= 2 )
  {
    if ( v5 >= 0x15 )
      core::slice::sort::unstable::ipnsort(v4, v5, &v16);
    else
      core::slice::sort::shared::smallsort::insertion_sort_shift_left(v4, v5);
  }
  for ( i = v17; *(_QWORD *)(v17 + 48); i = v17 )
  {
    next_node = uu_tsort::Graph::find_next_node(i, v23);
    v19 = v7;
    p_next_node = &next_node;
    v21 = <&T as core::fmt::Display>::fmt;
    v22[0] = &unk_EB328;
    v22[1] = 2LL;
    v22[4] = 0LL;
    v22[2] = &p_next_node;
    v22[3] = 1LL;
    std::io::stdio::_print(v22);
    hashbrown::map::HashMap<K,V,S,A>::remove(&p_next_node, v1, next_node, v19);
    if ( p_next_node == (__int64 *)0x8000000000000000LL )
    {
      core::ptr::drop_in_place<core::option::Option<uu_tsort::Node>>(0x8000000000000000LL, v21);
    }
    else
    {
      <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(v22, &p_next_node);
      v8 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(v22);
      if ( v8 )
      {
        v10 = v8;
        v11 = v9;
        do
        {
          inner_mut = hashbrown::map::HashMap<K,V,S,A>::get_inner_mut(v1, v10, v11);
          if ( !inner_mut )
            core::option::unwrap_failed(&off_EB348);
          if ( (*(_QWORD *)(inner_mut + 40))-- == 1LL )
            alloc::collections::vec_deque::VecDeque<T,A>::push_back(v23, v10, v11, &off_EB360);
          v10 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(v22);
          v11 = v12;
        }
        while ( v10 );
      }
      core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<&str>>(v22);
    }
  }
  return core::ptr::drop_in_place<alloc::collections::vec_deque::VecDeque<&str>>(v23);
}