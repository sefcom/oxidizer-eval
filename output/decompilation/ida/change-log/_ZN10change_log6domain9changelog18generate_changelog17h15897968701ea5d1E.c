__int64 __fastcall change_log::domain::changelog::generate_changelog(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v5; // r12
  __int64 v6; // rbp
  __int64 v7; // r13
  const char *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r14
  __int64 v11; // r14
  char v12; // bp
  __int64 inner; // rbx
  __int64 v14; // rbx
  __int64 v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rsi
  _OWORD *v20; // rcx
  __int128 v22; // [rsp+8h] [rbp-200h] BYREF
  __int64 v23; // [rsp+18h] [rbp-1F0h]
  __int128 v24; // [rsp+20h] [rbp-1E8h] BYREF
  __int64 v25; // [rsp+30h] [rbp-1D8h]
  __m256i v26; // [rsp+40h] [rbp-1C8h] BYREF
  __int128 v27; // [rsp+60h] [rbp-1A8h]
  __int128 v28; // [rsp+80h] [rbp-188h] BYREF
  __int64 v29; // [rsp+90h] [rbp-178h]
  __int64 v30; // [rsp+A0h] [rbp-168h] BYREF
  __int64 v31; // [rsp+A8h] [rbp-160h]
  __int64 v32; // [rsp+B0h] [rbp-158h]
  __m256i *v33; // [rsp+B8h] [rbp-150h] BYREF
  __int128 *v34; // [rsp+C0h] [rbp-148h] BYREF
  __int64 (__fastcall *v35)(); // [rsp+C8h] [rbp-140h]
  __m256i v36; // [rsp+D0h] [rbp-138h] BYREF
  __int128 v37; // [rsp+F0h] [rbp-118h] BYREF
  __int64 v38; // [rsp+108h] [rbp-100h]
  __int64 v39; // [rsp+110h] [rbp-F8h]
  __int64 v40; // [rsp+118h] [rbp-F0h] BYREF
  __int64 v41; // [rsp+120h] [rbp-E8h]
  __int64 v42; // [rsp+128h] [rbp-E0h]
  __int128 v43; // [rsp+130h] [rbp-D8h] BYREF
  __int128 v44; // [rsp+140h] [rbp-C8h]
  __int64 v45; // [rsp+150h] [rbp-B8h]
  __int64 v46; // [rsp+158h] [rbp-B0h]
  _OWORD v47[2]; // [rsp+160h] [rbp-A8h] BYREF
  __int64 v48; // [rsp+180h] [rbp-88h]
  __int64 v49; // [rsp+188h] [rbp-80h]
  __m256i v50; // [rsp+190h] [rbp-78h] BYREF
  __int128 v51; // [rsp+1B0h] [rbp-58h]
  _BYTE v52[8]; // [rsp+1C0h] [rbp-48h] BYREF
  __int64 v53; // [rsp+1C8h] [rbp-40h]
  __int64 v54; // [rsp+1D0h] [rbp-38h]

  v39 = a1;
  v30 = 0LL;
  v31 = 1LL;
  v32 = 0LL;
  v38 = a2;
  v47[1] = xmmword_6A5B58;
  v47[0] = *(_OWORD *)&off_6A5B48;
  v48 = std::thread::local::LocalKey<T>::with();
  v49 = v2;
  v44 = xmmword_6A5B58;
  v43 = *(_OWORD *)&off_6A5B48;
  v45 = std::thread::local::LocalKey<T>::with();
  v46 = v3;
  v40 = 0LL;
  v41 = 8LL;
  v42 = 0LL;
  <hashbrown::map::HashMap<K,V,S,A> as core::default::Default>::default(&v26);
  v51 = v27;
  v50 = v26;
  v4 = *(_QWORD *)(a2 + 16);
  if ( v4 )
  {
    v5 = *(_QWORD *)(v38 + 8);
    v6 = 104 * v4;
    v7 = 0LL;
    do
    {
      if ( *(_QWORD *)(v5 + v7 + 88) )
      {
        <alloc::string::String as core::clone::Clone>::clone(&v26, v5 + v7 + 72);
        hashbrown::map::HashMap<K,V,S,A>::insert(&v50, &v26);
      }
      v8 = change_log::domain::changelog::category_from_pr_type(*(_QWORD *)(v5 + v7 + 8));
      if ( v8 )
      {
        if ( *(_BYTE *)(v5 + v7 + 96) )
        {
          hashbrown::rustc_entry::<impl hashbrown::map::HashMap<K,V,S,A>>::rustc_entry(&v26, &v43, v8, v9);
          if ( v26.m256i_i64[0] )
          {
            v36 = v26;
          }
          else
          {
            *(_OWORD *)&v36.m256i_u64[1] = *(_OWORD *)&v26.m256i_u64[1];
            v36.m256i_i64[0] = 0LL;
          }
          v10 = std::collections::hash::map::Entry<K,V>::or_default(&v36);
          <alloc::string::String as core::clone::Clone>::clone(&v26, v5 + v7 + 24);
          alloc::vec::Vec<T,A>::push(v10, &v26, &off_6A5BF8);
          <alloc::string::String as core::clone::Clone>::clone(&v26, v5 + v7 + 48);
          alloc::vec::Vec<T,A>::push(&v40, &v26, &off_6A5C10);
        }
        else
        {
          hashbrown::rustc_entry::<impl hashbrown::map::HashMap<K,V,S,A>>::rustc_entry(&v26, v47, v8, v9);
          if ( v26.m256i_i64[0] )
          {
            v36 = v26;
          }
          else
          {
            *(_OWORD *)&v36.m256i_u64[1] = *(_OWORD *)&v26.m256i_u64[1];
            v36.m256i_i64[0] = 0LL;
          }
          v11 = std::collections::hash::map::Entry<K,V>::or_default(&v36);
          <alloc::string::String as core::clone::Clone>::clone(&v26, v5 + v7 + 24);
          alloc::vec::Vec<T,A>::push(v11, &v26, &off_6A5BE0);
        }
      }
      v7 += 104LL;
    }
    while ( v6 != v7 );
  }
  if ( v50.m256i_i64[3] )
  {
    <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
      &v30,
      "# Summary\n\nIn this release, we:\n",
      "");
    v37 = v51;
    v36 = v50;
    <hashbrown::map::HashMap<K,V,S,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v26, &v36);
    core::iter::traits::iterator::Iterator::collect(v52, &v26);
    alloc::slice::stable_sort(v53, v54);
    <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v36, v52);
    <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v28, &v36);
    if ( !__OFSUB__(0LL, (_QWORD)v28) )
    {
      do
      {
        v25 = v29;
        v24 = v28;
        v34 = &v24;
        v35 = <alloc::string::String as core::fmt::Display>::fmt;
        v26.m256i_i64[0] = (__int64)&unk_6A5B80;
        v26.m256i_i64[1] = 2LL;
        *(_QWORD *)&v27 = 0LL;
        v26.m256i_i64[2] = (__int64)&v34;
        v26.m256i_i64[3] = 1LL;
        core::option::Option<T>::map_or_else(&v22, &v26);
        *(_OWORD *)v26.m256i_i8 = v22;
        v26.m256i_i64[2] = v23;
        <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
          &v30,
          *((_QWORD *)&v22 + 1),
          *((_QWORD *)&v22 + 1) + v23);
        core::ptr::drop_in_place<alloc::string::String>(&v26);
        core::ptr::drop_in_place<alloc::string::String>(&v24);
        <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v28, &v36);
      }
      while ( (_QWORD)v28 != 0x8000000000000000LL );
    }
    core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<alloc::string::String>>(&v36);
    alloc::string::String::push(&v30, 10LL);
    v12 = 0;
  }
  else
  {
    v12 = 1;
  }
  v36.m256i_i64[0] = (__int64)"FeaturesS";
  v36.m256i_i64[1] = 8LL;
  v36.m256i_i64[2] = (__int64)aFixes;
  v36.m256i_i64[3] = 5LL;
  *(_QWORD *)&v37 = aChores;
  *((_QWORD *)&v37 + 1) = 6LL;
  if ( *((_QWORD *)&v44 + 1) )
  {
    <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
      &v30,
      &unk_CACF7,
      asc_CAD03);
    v33 = &v36;
    inner = hashbrown::map::HashMap<K,V,S,A>::get_inner(&v43);
    if ( inner )
    {
      *(_QWORD *)&v28 = &v33;
      *((_QWORD *)&v28 + 1) = <&T as core::fmt::Display>::fmt;
      v26.m256i_i64[0] = (__int64)&off_6A5BA0;
      v26.m256i_i64[1] = 2LL;
      *(_QWORD *)&v27 = 0LL;
      v26.m256i_i64[2] = (__int64)&v28;
      v26.m256i_i64[3] = 1LL;
      core::option::Option<T>::map_or_else(&v22, &v26);
      v24 = v22;
      v25 = v23;
      <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
        &v30,
        *((_QWORD *)&v22 + 1),
        *((_QWORD *)&v22 + 1) + v23);
      core::ptr::drop_in_place<alloc::string::String>(&v24);
      core::iter::traits::iterator::Iterator::collect(
        &v22,
        *(_QWORD *)(inner + 24),
        *(_QWORD *)(inner + 24) + 24LL * *(_QWORD *)(inner + 32));
      alloc::str::join_generic_copy(&v26, *((_QWORD *)&v22 + 1), v23, asc_CACF6, 1LL);
      v29 = v26.m256i_i64[2];
      v28 = *(_OWORD *)v26.m256i_i8;
      core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v22);
      v34 = &v28;
      v35 = <alloc::string::String as core::fmt::Display>::fmt;
      v26.m256i_i64[0] = (__int64)&unk_6A5BC0;
      v26.m256i_i64[1] = 2LL;
      *(_QWORD *)&v27 = 0LL;
      v26.m256i_i64[2] = (__int64)&v34;
      v26.m256i_i64[3] = 1LL;
      core::option::Option<T>::map_or_else(&v22, &v26);
      v24 = v22;
      v25 = v23;
      <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
        &v30,
        *((_QWORD *)&v22 + 1),
        *((_QWORD *)&v22 + 1) + v23);
      core::ptr::drop_in_place<alloc::string::String>(&v24);
      core::ptr::drop_in_place<alloc::string::String>(&v28);
    }
    v33 = (__m256i *)&v36.m256i_u64[2];
    v14 = hashbrown::map::HashMap<K,V,S,A>::get_inner(&v43);
    if ( v14 )
    {
      *(_QWORD *)&v28 = &v33;
      *((_QWORD *)&v28 + 1) = <&T as core::fmt::Display>::fmt;
      v26.m256i_i64[0] = (__int64)&off_6A5BA0;
      v26.m256i_i64[1] = 2LL;
      *(_QWORD *)&v27 = 0LL;
      v26.m256i_i64[2] = (__int64)&v28;
      v26.m256i_i64[3] = 1LL;
      core::option::Option<T>::map_or_else(&v22, &v26);
      v24 = v22;
      v25 = v23;
      <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
        &v30,
        *((_QWORD *)&v22 + 1),
        *((_QWORD *)&v22 + 1) + v23);
      core::ptr::drop_in_place<alloc::string::String>(&v24);
      core::iter::traits::iterator::Iterator::collect(
        &v22,
        *(_QWORD *)(v14 + 24),
        *(_QWORD *)(v14 + 24) + 24LL * *(_QWORD *)(v14 + 32));
      alloc::str::join_generic_copy(&v26, *((_QWORD *)&v22 + 1), v23, asc_CACF6, 1LL);
      v29 = v26.m256i_i64[2];
      v28 = *(_OWORD *)v26.m256i_i8;
      core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v22);
      v34 = &v28;
      v35 = <alloc::string::String as core::fmt::Display>::fmt;
      v26.m256i_i64[0] = (__int64)&unk_6A5BC0;
      v26.m256i_i64[1] = 2LL;
      *(_QWORD *)&v27 = 0LL;
      v26.m256i_i64[2] = (__int64)&v34;
      v26.m256i_i64[3] = 1LL;
      core::option::Option<T>::map_or_else(&v22, &v26);
      v24 = v22;
      v25 = v23;
      <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
        &v30,
        *((_QWORD *)&v22 + 1),
        *((_QWORD *)&v22 + 1) + v23);
      core::ptr::drop_in_place<alloc::string::String>(&v24);
      core::ptr::drop_in_place<alloc::string::String>(&v28);
    }
    v33 = (__m256i *)&v37;
    v15 = hashbrown::map::HashMap<K,V,S,A>::get_inner(&v43);
    if ( v15 )
    {
      *(_QWORD *)&v28 = &v33;
      *((_QWORD *)&v28 + 1) = <&T as core::fmt::Display>::fmt;
      v26.m256i_i64[0] = (__int64)&off_6A5BA0;
      v26.m256i_i64[1] = 2LL;
      *(_QWORD *)&v27 = 0LL;
      v26.m256i_i64[2] = (__int64)&v28;
      v26.m256i_i64[3] = 1LL;
      core::option::Option<T>::map_or_else(&v22, &v26);
      v24 = v22;
      v25 = v23;
      <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
        &v30,
        *((_QWORD *)&v22 + 1),
        *((_QWORD *)&v22 + 1) + v23);
      core::ptr::drop_in_place<alloc::string::String>(&v24);
      core::iter::traits::iterator::Iterator::collect(
        &v22,
        *(_QWORD *)(v15 + 24),
        *(_QWORD *)(v15 + 24) + 24LL * *(_QWORD *)(v15 + 32));
      alloc::str::join_generic_copy(&v26, *((_QWORD *)&v22 + 1), v23, asc_CACF6, 1LL);
      v29 = v26.m256i_i64[2];
      v28 = *(_OWORD *)v26.m256i_i8;
      core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v22);
      v34 = &v28;
      v35 = <alloc::string::String as core::fmt::Display>::fmt;
      v26.m256i_i64[0] = (__int64)&unk_6A5BC0;
      v26.m256i_i64[1] = 2LL;
      *(_QWORD *)&v27 = 0LL;
      v26.m256i_i64[2] = (__int64)&v34;
      v26.m256i_i64[3] = 1LL;
      core::option::Option<T>::map_or_else(&v22, &v26);
      v24 = v22;
      v25 = v23;
      <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
        &v30,
        *((_QWORD *)&v22 + 1),
        *((_QWORD *)&v22 + 1) + v23);
      core::ptr::drop_in_place<alloc::string::String>(&v24);
      core::ptr::drop_in_place<alloc::string::String>(&v28);
    }
  }
  v16 = hashbrown::map::HashMap<K,V,S,A>::get_inner(v47);
  if ( v16 )
    change_log::domain::changelog::generate_changelog::{{closure}}(
      &v30,
      v36.m256i_i64[0],
      v36.m256i_i64[1],
      *(_QWORD *)(v16 + 24),
      *(_QWORD *)(v16 + 32));
  v17 = hashbrown::map::HashMap<K,V,S,A>::get_inner(v47);
  if ( v17 )
    change_log::domain::changelog::generate_changelog::{{closure}}(
      &v30,
      v36.m256i_i64[2],
      v36.m256i_i64[3],
      *(_QWORD *)(v17 + 24),
      *(_QWORD *)(v17 + 32));
  v18 = hashbrown::map::HashMap<K,V,S,A>::get_inner(v47);
  if ( v18 )
    change_log::domain::changelog::generate_changelog::{{closure}}(
      &v30,
      v37,
      *((_QWORD *)&v37 + 1),
      *(_QWORD *)(v18 + 24),
      *(_QWORD *)(v18 + 32));
  if ( v42 )
    change_log::domain::changelog::generate_changelog::{{closure}}(&v30, aMigrationNotes, 15LL, v41, v42);
  v19 = core::str::<impl str>::trim_matches(v31, v32);
  <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v26);
  v20 = (_OWORD *)v39;
  *(_QWORD *)(v39 + 16) = v26.m256i_i64[2];
  *v20 = *(_OWORD *)v26.m256i_i8;
  if ( v12 )
    core::ptr::drop_in_place<std::collections::hash::set::HashSet<alloc::string::String>>(&v50, v19);
  core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v40);
  core::ptr::drop_in_place<std::collections::hash::map::HashMap<&str,alloc::vec::Vec<alloc::string::String>>>(&v43, v19);
  core::ptr::drop_in_place<std::collections::hash::map::HashMap<&str,alloc::vec::Vec<alloc::string::String>>>(v47, v19);
  core::ptr::drop_in_place<alloc::string::String>(&v30);
  core::ptr::drop_in_place<alloc::vec::Vec<change_log::domain::models::ChangelogInfo>>(v38);
  return v39;
}