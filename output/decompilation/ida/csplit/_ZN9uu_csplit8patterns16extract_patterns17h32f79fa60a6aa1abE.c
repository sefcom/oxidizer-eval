__int64 __fastcall uu_csplit::patterns::extract_patterns(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 i; // rax
  __int64 v5; // rbx
  __int64 v6; // rax
  bool v7; // zf
  __int64 v8; // r15
  __int64 v9; // r14
  __int128 v10; // kr00_16
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // r14
  __int64 v14; // r14
  __int64 v15; // rbp
  __int64 v16; // r13
  __int64 v17; // r15
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rax
  int v21; // r12d
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v29; // rcx
  __int128 v30; // xmm0
  __int64 v31; // rcx
  __int128 v32; // [rsp+8h] [rbp-210h]
  __int64 v33; // [rsp+20h] [rbp-1F8h] BYREF
  __m256i v34; // [rsp+28h] [rbp-1F0h]
  __int128 v35; // [rsp+48h] [rbp-1D0h]
  __int64 v36; // [rsp+58h] [rbp-1C0h]
  __m256i v37; // [rsp+60h] [rbp-1B8h] BYREF
  __int128 v38; // [rsp+80h] [rbp-198h]
  __int128 v39; // [rsp+90h] [rbp-188h]
  __int64 v40; // [rsp+A0h] [rbp-178h]
  __m256i v41; // [rsp+B0h] [rbp-168h]
  __int128 v42; // [rsp+D0h] [rbp-148h] BYREF
  __int64 v43; // [rsp+E0h] [rbp-138h]
  _QWORD v44[2]; // [rsp+E8h] [rbp-130h] BYREF
  _QWORD v45[2]; // [rsp+F8h] [rbp-120h] BYREF
  __m256i v46; // [rsp+108h] [rbp-110h] BYREF
  __m256i v47; // [rsp+128h] [rbp-F0h] BYREF
  __int128 v48; // [rsp+148h] [rbp-D0h]
  __int128 v49; // [rsp+158h] [rbp-C0h]
  __int64 v50; // [rsp+168h] [rbp-B0h]
  __m256i v51; // [rsp+170h] [rbp-A8h]
  __int128 v52; // [rsp+190h] [rbp-88h] BYREF
  __int64 v53; // [rsp+1A0h] [rbp-78h]
  _BYTE v54[32]; // [rsp+1A8h] [rbp-70h] BYREF
  _BYTE v55[80]; // [rsp+1C8h] [rbp-50h] BYREF

  v36 = a1;
  alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v37, a3, 0LL);
  if ( v37.m256i_i64[0] )
    alloc::raw_vec::handle_error(v37.m256i_i64[1], v37.m256i_i64[2]);
  v42 = *(_OWORD *)&v37.m256i_u64[1];
  v43 = 0LL;
  regex::regex::string::Regex::new(&v37, aPUptoPSkiptoPO, 56LL);
  core::result::Result<T,E>::unwrap(v54, &v37, &off_2E1B08);
  regex::regex::string::Regex::new(&v37, aPTimesD, 23LL);
  core::result::Result<T,E>::unwrap(v55, &v37, &off_2E1B20);
  v45[0] = a2;
  v45[1] = a2 + 24 * a3;
  for ( i = 0LL; ; i = v44[0] )
  {
    v5 = v44[1];
    v44[0] = 0LL;
    if ( !i )
      v5 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v45);
    if ( !v5 )
    {
      v27 = v36;
      *(_QWORD *)(v36 + 24) = v43;
      *(_OWORD *)(v27 + 8) = v42;
      *(_QWORD *)v27 = 12LL;
      core::ptr::drop_in_place<regex::regex::string::Regex>(v55);
      return core::ptr::drop_in_place<regex::regex::string::Regex>(v54);
    }
    v6 = *(_QWORD *)core::option::Option<T>::get_or_insert_with(v44, v45);
    if ( v6 )
    {
      regex::regex::string::Regex::captures_at(&v47, v55, *(_QWORD *)(v6 + 8), *(_QWORD *)(v6 + 16));
      *((_QWORD *)&v32 + 1) = 1LL;
      *(_QWORD *)&v32 = 1LL;
      if ( v47.m256i_i32[0] != 2 )
      {
        v40 = v50;
        v39 = v49;
        v38 = v48;
        v37 = v47;
        v7 = v44[0] == 0LL;
        v44[0] = 0LL;
        if ( v7 )
          <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v45);
        regex_automata::util::captures::Captures::get_group_by_name(&v33, &v37.m256i_u64[2], aTimes, 5LL);
        if ( v33 )
        {
          v8 = *((_QWORD *)&v39 + 1);
          v9 = v40;
          v10 = *(_OWORD *)v34.m256i_i8;
          v11 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(
                  v34.m256i_i64[0],
                  v34.m256i_i64[1],
                  *((_QWORD *)&v39 + 1),
                  v40);
          if ( !v11 )
            core::str::slice_error_fail(v8, v9, v10, *((_QWORD *)&v10 + 1), &off_2E1B38);
          core::num::<impl core::str::traits::FromStr for usize>::from_str(&v33, v11);
          *((_QWORD *)&v32 + 1) = core::result::Result<T,E>::unwrap(&v33) + 1;
          v12 = 1LL;
        }
        else
        {
          v12 = 0LL;
        }
        *(_QWORD *)&v32 = v12;
        core::ptr::drop_in_place<regex::regex::string::Captures>(&v37);
      }
    }
    else
    {
      *((_QWORD *)&v32 + 1) = 1LL;
      *(_QWORD *)&v32 = 1LL;
    }
    v13 = *(_QWORD *)(v5 + 8);
    regex::regex::string::Regex::captures_at(&v47, v54, v13, *(_QWORD *)(v5 + 16));
    if ( v47.m256i_i32[0] == 2 )
      break;
    v40 = v50;
    v39 = v49;
    v38 = v48;
    v37 = v47;
    regex_automata::util::captures::Captures::get_group_by_name(&v33, &v37.m256i_u64[2], aOffset, 6LL);
    if ( v33 )
    {
      v14 = *((_QWORD *)&v39 + 1);
      v15 = v40;
      v16 = v34.m256i_i64[1];
      v17 = v34.m256i_i64[0];
      v18 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(
              v34.m256i_i64[0],
              v34.m256i_i64[1],
              *((_QWORD *)&v39 + 1),
              v40);
      if ( !v18 )
        goto LABEL_44;
      v20 = core::num::<impl core::str::traits::FromStr for i32>::from_str(v18, v19);
      v21 = core::result::Result<T,E>::unwrap(v20);
    }
    else
    {
      v21 = 0;
    }
    regex_automata::util::captures::Captures::get_group_by_name(&v33, &v37.m256i_u64[2], aUpto, 4LL);
    if ( v33 )
    {
      v14 = *((_QWORD *)&v39 + 1);
      v15 = v40;
      v16 = v34.m256i_i64[1];
      v17 = v34.m256i_i64[0];
      v22 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(
              v34.m256i_i64[0],
              v34.m256i_i64[1],
              *((_QWORD *)&v39 + 1),
              v40);
      if ( !v22 )
        goto LABEL_44;
      regex::regex::string::Regex::new(&v46, v22, v23);
      if ( v46.m256i_i64[0] )
      {
        v41 = v46;
      }
      else
      {
        v53 = v46.m256i_i64[3];
        v52 = *(_OWORD *)&v46.m256i_u64[1];
        uu_csplit::patterns::extract_patterns::{{closure}}(&v33, v5, &v52);
        v24 = v33;
        v41 = v34;
        if ( v33 != 12 )
          goto LABEL_42;
      }
      v51 = v41;
      v34 = v41;
      HIDWORD(v33) = v21;
      v35 = v32;
      LODWORD(v33) = 1;
      alloc::vec::Vec<T,A>::push(&v42, &v33);
    }
    else
    {
      regex_automata::util::captures::Captures::get_group_by_name(&v33, &v37.m256i_u64[2], aSkipto, 6LL);
      if ( v33 )
      {
        v14 = *((_QWORD *)&v39 + 1);
        v15 = v40;
        v16 = v34.m256i_i64[1];
        v17 = v34.m256i_i64[0];
        v25 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(
                v34.m256i_i64[0],
                v34.m256i_i64[1],
                *((_QWORD *)&v39 + 1),
                v40);
        if ( !v25 )
LABEL_44:
          core::str::slice_error_fail(v14, v15, v17, v16, &off_2E1B38);
        regex::regex::string::Regex::new(&v46, v25, v26);
        if ( v46.m256i_i64[0] )
        {
          v41 = v46;
        }
        else
        {
          v53 = v46.m256i_i64[3];
          v52 = *(_OWORD *)&v46.m256i_u64[1];
          uu_csplit::patterns::extract_patterns::{{closure}}(&v33, v5, &v52);
          v24 = v33;
          v41 = v34;
          if ( v33 != 12 )
          {
LABEL_42:
            v30 = *(_OWORD *)v41.m256i_i8;
            v51 = v41;
            v31 = v36;
            *(_OWORD *)(v36 + 24) = *(_OWORD *)&v41.m256i_u64[2];
            *(_OWORD *)(v31 + 8) = v30;
            *(_QWORD *)v31 = v24;
            core::ptr::drop_in_place<regex::regex::string::Captures>(&v37);
            goto LABEL_43;
          }
        }
        v51 = v41;
        v34 = v41;
        HIDWORD(v33) = v21;
        v35 = v32;
        LODWORD(v33) = 2;
        alloc::vec::Vec<T,A>::push(&v42, &v33);
      }
    }
    core::ptr::drop_in_place<regex::regex::string::Captures>(&v37);
LABEL_6:
    ;
  }
  core::num::<impl core::str::traits::FromStr for usize>::from_str(&v33, v13);
  if ( !(_BYTE)v33 )
  {
    v37.m256i_i64[1] = v34.m256i_i64[0];
    *(_OWORD *)&v37.m256i_u64[2] = v32;
    v37.m256i_i32[0] = 0;
    alloc::vec::Vec<T,A>::push(&v42, &v37);
    if ( v47.m256i_i32[0] != 2 )
      core::ptr::drop_in_place<regex::regex::string::Captures>(&v47);
    goto LABEL_6;
  }
  <alloc::string::String as core::clone::Clone>::clone(&v37, v5);
  v29 = v36;
  *(_QWORD *)(v36 + 24) = v37.m256i_i64[2];
  *(_OWORD *)(v29 + 8) = *(_OWORD *)v37.m256i_i8;
  *(_QWORD *)v29 = 7LL;
  if ( v47.m256i_i32[0] != 2 )
    core::ptr::drop_in_place<regex::regex::string::Captures>(&v47);
LABEL_43:
  core::ptr::drop_in_place<regex::regex::string::Regex>(v55);
  core::ptr::drop_in_place<regex::regex::string::Regex>(v54);
  return core::ptr::drop_in_place<alloc::vec::Vec<uu_csplit::patterns::Pattern>>(&v42);
}
