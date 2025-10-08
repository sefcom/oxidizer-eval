__int64 __fastcall forc_publish::md_pre_process::MarkdownDepGraph::topological_sort(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // r14
  __int64 v6; // rdx
  __int64 i; // rax
  _DWORD *v8; // rax
  __int64 v9; // r13
  __int64 v10; // r14
  __int64 v11; // rbx
  __int64 inner; // rax
  __int64 v13; // rax
  __int64 v14; // r14
  __int64 inner_mut; // rax
  __int64 result; // rax
  __m256i v18; // [rsp+8h] [rbp-160h] BYREF
  __int64 v19; // [rsp+28h] [rbp-140h]
  __int128 v20; // [rsp+30h] [rbp-138h] BYREF
  __int64 v21; // [rsp+40h] [rbp-128h]
  __m256i v22; // [rsp+50h] [rbp-118h] BYREF
  __int64 v23; // [rsp+70h] [rbp-F8h]
  __int64 v24; // [rsp+78h] [rbp-F0h]
  __int128 v25; // [rsp+80h] [rbp-E8h] BYREF
  __int64 v26; // [rsp+90h] [rbp-D8h]
  __int128 v27; // [rsp+98h] [rbp-D0h] BYREF
  __int64 v28; // [rsp+A8h] [rbp-C0h]
  __m256i v29; // [rsp+B0h] [rbp-B8h] BYREF
  __int64 v30; // [rsp+D0h] [rbp-98h]
  __int64 v31; // [rsp+D8h] [rbp-90h]
  __int128 v32; // [rsp+E0h] [rbp-88h] BYREF
  __int128 v33; // [rsp+F0h] [rbp-78h]
  __int64 v34; // [rsp+100h] [rbp-68h]
  __int64 v35; // [rsp+108h] [rbp-60h]
  __int128 v36; // [rsp+110h] [rbp-58h] BYREF
  __int64 v37; // [rsp+120h] [rbp-48h]

  v24 = a1;
  v32 = *(_OWORD *)&off_E53140;
  v33 = xmmword_E53150;
  v34 = std::thread::local::LocalKey<T>::with();
  v35 = v2;
  v31 = a2;
  hashbrown::map::HashMap<K,V,S,A>::iter(&v36, a2);
  v3 = <hashbrown::map::Iter<K,V> as core::iter::traits::iterator::Iterator>::next(&v36);
  if ( v3 )
  {
    v5 = v4;
    do
    {
      <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(&v18, *(_QWORD *)(v3 + 8), *(_QWORD *)(v3 + 16));
      v29.m256i_i64[2] = v18.m256i_i64[2];
      *(_OWORD *)v29.m256i_i8 = *(_OWORD *)v18.m256i_i8;
      hashbrown::rustc_entry::<impl hashbrown::map::HashMap<K,V,S,A>>::rustc_entry(&v18, &v32, &v29);
      if ( v18.m256i_i64[0] == 0x8000000000000000LL )
      {
        *(_OWORD *)&v22.m256i_u64[1] = *(_OWORD *)&v18.m256i_u64[1];
        v22.m256i_i64[0] = 0x8000000000000000LL;
      }
      else
      {
        v23 = v19;
        v22 = v18;
      }
      std::collections::hash::map::Entry<K,V>::or_insert(&v22);
      hashbrown::map::HashMap<K,V,S,A>::iter(&v18, v5);
      v30 = v19;
      v29 = v18;
      for ( i = <hashbrown::map::Iter<K,V> as core::iter::traits::iterator::Iterator>::next(&v29);
            i;
            i = <hashbrown::map::Iter<K,V> as core::iter::traits::iterator::Iterator>::next(&v29) )
      {
        <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(&v18, *(_QWORD *)(i + 8), *(_QWORD *)(i + 16));
        v21 = v18.m256i_i64[2];
        v20 = *(_OWORD *)v18.m256i_i8;
        hashbrown::rustc_entry::<impl hashbrown::map::HashMap<K,V,S,A>>::rustc_entry(&v18, &v32, &v20);
        if ( v18.m256i_i64[0] == 0x8000000000000000LL )
        {
          *(_OWORD *)&v22.m256i_u64[1] = *(_OWORD *)&v18.m256i_u64[1];
          v22.m256i_i64[0] = 0x8000000000000000LL;
        }
        else
        {
          v23 = v19;
          v22 = v18;
        }
        v8 = (_DWORD *)std::collections::hash::map::Entry<K,V>::or_insert(&v22);
        ++*v8;
      }
      v3 = <hashbrown::map::Iter<K,V> as core::iter::traits::iterator::Iterator>::next(&v36);
      v5 = v6;
    }
    while ( v3 );
  }
  hashbrown::map::HashMap<K,V,S,A>::iter(&v18, &v32);
  core::iter::traits::iterator::Iterator::collect(&v22, &v18);
  *(_QWORD *)&v25 = 0LL;
  *((_QWORD *)&v25 + 1) = 8LL;
  v26 = 0LL;
  alloc::collections::vec_deque::VecDeque<T,A>::pop_front(&v27, &v22);
  if ( (_QWORD)v27 == 0x8000000000000000LL )
  {
    v9 = 0LL;
  }
  else
  {
    v9 = 0LL;
    do
    {
      v21 = v28;
      v20 = v27;
      <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(&v18, *((_QWORD *)&v27 + 1), v28);
      v29.m256i_i64[2] = v18.m256i_i64[2];
      *(_OWORD *)v29.m256i_i8 = *(_OWORD *)v18.m256i_i8;
      alloc::vec::Vec<T,A>::push(&v25, &v29);
      inner = hashbrown::map::HashMap<K,V,S,A>::get_inner(v31, &v20);
      if ( inner )
      {
        hashbrown::map::HashMap<K,V,S,A>::iter(&v18, inner + 24);
        while ( 1 )
        {
          v13 = <hashbrown::map::Iter<K,V> as core::iter::traits::iterator::Iterator>::next(&v18);
          v14 = v13;
          if ( !v13 )
            break;
          inner_mut = hashbrown::map::HashMap<K,V,S,A>::get_inner_mut(&v32, v13);
          if ( !inner_mut )
            core::option::unwrap_failed(&off_E53F10);
          if ( (*(_DWORD *)(inner_mut + 24))-- == 1 )
          {
            <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(&v29, *(_QWORD *)(v14 + 8), *(_QWORD *)(v14 + 16));
            v37 = v29.m256i_i64[2];
            v36 = *(_OWORD *)v29.m256i_i8;
            alloc::collections::vec_deque::VecDeque<T,A>::push_back(&v22, &v36);
          }
        }
      }
      ++v9;
      core::ptr::drop_in_place<std::path::PathBuf>(v20, *((_QWORD *)&v20 + 1));
      alloc::collections::vec_deque::VecDeque<T,A>::pop_front(&v27, &v22);
    }
    while ( (_QWORD)v27 != 0x8000000000000000LL );
  }
  core::ptr::drop_in_place<core::option::Option<std::path::PathBuf>>(0x8000000000000000LL, *((_QWORD *)&v27 + 1));
  if ( v9 == *((_QWORD *)&v33 + 1) )
  {
    v10 = v24;
    *(_QWORD *)(v24 + 24) = v26;
    *(_OWORD *)(v10 + 8) = v25;
    v11 = 6LL;
  }
  else
  {
    core::ptr::drop_in_place<alloc::vec::Vec<std::path::PathBuf>>(&v25);
    v11 = 3LL;
    v10 = v24;
  }
  core::ptr::drop_in_place<alloc::collections::vec_deque::VecDeque<std::path::PathBuf>>(&v22);
  result = core::ptr::drop_in_place<std::collections::hash::map::HashMap<std::path::PathBuf,i32>>(&v32);
  *(_QWORD *)v10 = v11;
  return result;
}