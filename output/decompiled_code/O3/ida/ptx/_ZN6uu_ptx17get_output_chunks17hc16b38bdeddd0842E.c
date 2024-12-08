        _QWORD *a7)
{
  __int64 v11; // r15
  __int64 v12; // r13
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // r15
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 slice; // rax
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // rbx
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rax
  unsigned __int64 v28; // r13
  unsigned __int64 v29; // r15
  __int64 v30; // rax
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // r13
  __int64 v34; // rdx
  __int64 v35; // r15
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rax
  __int64 v39; // rbx
  unsigned __int64 v40; // rbp
  unsigned __int64 v41; // rdx
  unsigned __int64 v42; // r15
  __int64 v43; // rax
  unsigned __int64 v44; // rax
  unsigned __int64 v45; // rax
  unsigned __int64 v46; // r15
  __int64 v47; // rdx
  __int64 v48; // rbp
  __int64 v49; // rax
  __int64 v50; // rdx
  __int64 v51; // rax
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // r9
  __int64 v56; // rax
  __int64 v57; // rcx
  __int64 v59; // [rsp+0h] [rbp-1C8h]
  unsigned __int64 v60; // [rsp+8h] [rbp-1C0h]
  unsigned __int64 v61; // [rsp+8h] [rbp-1C0h]
  const char *v62; // [rsp+10h] [rbp-1B8h] BYREF
  __int128 v63; // [rsp+18h] [rbp-1B0h]
  __int64 v64; // [rsp+28h] [rbp-1A0h]
  __int64 v65; // [rsp+30h] [rbp-198h]
  __int128 v66; // [rsp+40h] [rbp-188h] BYREF
  unsigned __int64 v67; // [rsp+50h] [rbp-178h]
  __int128 v68; // [rsp+60h] [rbp-168h] BYREF
  __int64 v69; // [rsp+70h] [rbp-158h]
  unsigned __int64 v70; // [rsp+78h] [rbp-150h]
  unsigned __int64 v71; // [rsp+80h] [rbp-148h]
  __int128 *v72; // [rsp+88h] [rbp-140h]
  __int64 v73; // [rsp+90h] [rbp-138h]
  __int64 v74; // [rsp+98h] [rbp-130h]
  __int128 v75; // [rsp+A0h] [rbp-128h] BYREF
  unsigned __int64 v76; // [rsp+B0h] [rbp-118h]
  __int128 v77; // [rsp+B8h] [rbp-110h] BYREF
  __int64 v78; // [rsp+C8h] [rbp-100h]
  _QWORD *v79; // [rsp+D0h] [rbp-F8h] BYREF
  __int64 (__fastcall *v80)(); // [rsp+D8h] [rbp-F0h]
  __int128 *v81; // [rsp+E0h] [rbp-E8h]
  __int64 (__fastcall *v82)(); // [rsp+E8h] [rbp-E0h]
  __int64 v83; // [rsp+F0h] [rbp-D8h]
  unsigned __int64 v84; // [rsp+F8h] [rbp-D0h]
  __int64 v85; // [rsp+100h] [rbp-C8h]
  char v86[8]; // [rsp+108h] [rbp-C0h] BYREF
  __int64 v87; // [rsp+110h] [rbp-B8h]
  __int64 v88; // [rsp+118h] [rbp-B0h]
  char v89[8]; // [rsp+120h] [rbp-A8h] BYREF
  __int64 v90; // [rsp+128h] [rbp-A0h]
  __int64 v91; // [rsp+130h] [rbp-98h]
  char v92[8]; // [rsp+138h] [rbp-90h] BYREF
  __int64 v93; // [rsp+140h] [rbp-88h]
  __int64 v94; // [rsp+148h] [rbp-80h]
  char v95[8]; // [rsp+150h] [rbp-78h] BYREF
  __int64 v96; // [rsp+158h] [rbp-70h]
  __int64 v97; // [rsp+160h] [rbp-68h]
  __int128 v98; // [rsp+168h] [rbp-60h] BYREF
  unsigned __int64 v99; // [rsp+178h] [rbp-50h]
  __int128 v100; // [rsp+180h] [rbp-48h] BYREF
  __int64 v101; // [rsp+190h] [rbp-38h]

  v74 = a2;
  v85 = a1;
  v11 = a7[9] >> 1;
  v73 = a7[10];
  v60 = core::cmp::max_by(v11 - v73);
  v83 = a7[5];
  v71 = core::cmp::max_by(v11 + ~(a4 + 2 * v83));
  alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v62, v11, 0LL);
  if ( v62 )
    alloc::raw_vec::handle_error(v63, *((_QWORD *)&v63 + 1));
  v68 = v63;
  v69 = 0LL;
  alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v62, v11, 0LL);
  if ( v62 )
    alloc::raw_vec::handle_error(v63, *((_QWORD *)&v63 + 1));
  v66 = v63;
  v67 = 0LL;
  alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v62, v11, 0LL);
  if ( v62 )
    alloc::raw_vec::handle_error(v63, *((_QWORD *)&v63 + 1));
  v75 = v63;
  v76 = 0LL;
  alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v62, v11, 0LL);
  if ( v62 )
    alloc::raw_vec::handle_error(v63, *((_QWORD *)&v63 + 1));
  v77 = v63;
  v78 = 0LL;
  v12 = v74;
  uu_ptx::trim_idx(v74, a3, 0LL, a3);
  v14 = v13;
  v15 = core::cmp::max_by(v13 - v60);
  v16 = uu_ptx::trim_broken_word_left(v12, a3, v15, v14);
  v70 = uu_ptx::trim_idx(v12, a3, v16, v14);
  v18 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(v70, v17, v12, a3, &off_2EE7A8);
  <alloc::string::String as core::iter::traits::collect::FromIterator<&char>>::from_iter(v86, v18, v18 + 4 * v19);
  slice = core::slice::iter::Iter<T>::make_slice(v87, v87 + v88);
  alloc::vec::Vec<T,A>::append_elements(&v66, slice);
  if ( v60 < v67 )
    core::panicking::panic(aAssertionFaile_10, 49LL, &off_2EE7C0);
  v21 = core::cmp::min_by(v71, a6);
  v22 = uu_ptx::trim_broken_word_right(a5, a6, 0LL, v21);
  uu_ptx::trim_idx(a5, a6, 0LL, v22);
  v24 = v23;
  v25 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(0LL, v23, a5, a6, &off_2EE7D8);
  <alloc::string::String as core::iter::traits::collect::FromIterator<&char>>::from_iter(v89, v25, v25 + 4 * v26);
  v27 = core::slice::iter::Iter<T>::make_slice(v90, v90 + v91);
  v72 = &v75;
  alloc::vec::Vec<T,A>::append_elements(&v75, v27);
  if ( v71 < v76 )
    core::panicking::panic(aAssertionFaile_11, 47LL, &off_2EE7F0);
  v28 = v67;
  v29 = uu_ptx::trim_idx(a5, a6, v24, a6);
  v30 = core::cmp::max_by(v60 - (v73 + v28));
  v31 = core::cmp::min_by(a6, v30 + v29);
  v32 = uu_ptx::trim_broken_word_right(a5, a6, v29, v31);
  v33 = uu_ptx::trim_idx(a5, a6, v29, v32);
  v35 = v34;
  v36 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(v33, v34, a5, a6, &off_2EE808);
  <alloc::string::String as core::iter::traits::collect::FromIterator<&char>>::from_iter(v92, v36, v36 + 4 * v37);
  v84 = v33;
  v59 = v35;
  v61 = v24;
  v38 = core::slice::iter::Iter<T>::make_slice(v93, v93 + v94);
  alloc::vec::Vec<T,A>::append_elements(&v77, v38);
  v39 = v74;
  v40 = v76;
  uu_ptx::trim_idx(v74, a3, 0LL, v70);
  v42 = v41;
  v43 = core::cmp::max_by(v71 - (v40 + v73));
  v44 = core::cmp::max_by(v42 - v43);
  v45 = uu_ptx::trim_broken_word_left(v39, a3, v44, v42);
  v46 = uu_ptx::trim_idx(v39, a3, v45, v42);
  v48 = v47;
  v49 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(v46, v47, v39, a3, &off_2EE820);
  <alloc::string::String as core::iter::traits::collect::FromIterator<&char>>::from_iter(v95, v49, v49 + 4 * v50);
  v51 = core::slice::iter::Iter<T>::make_slice(v96, v96 + v97);
  alloc::vec::Vec<T,A>::append_elements(&v68, v51);
  if ( v61 != a6 )
  {
    if ( v84 == v59 || (v72 = &v77, v59 != a6) )
    {
      v56 = core::slice::iter::Iter<T>::make_slice(a7[4], a7[4] + v83);
      alloc::vec::Vec<T,A>::append_elements(v72, v56);
    }
  }
  if ( v70 )
  {
    if ( v46 == v48 )
    {
      v79 = a7 + 3;
      v80 = <alloc::string::String as core::fmt::Display>::fmt;
      v81 = &v66;
      v82 = <alloc::string::String as core::fmt::Display>::fmt;
      v62 = "\x01";
      *(_QWORD *)&v63 = 2LL;
      v65 = 0LL;
      *((_QWORD *)&v63 + 1) = &v79;
      v64 = 2LL;
      core::option::Option<T>::map_or_else(&v98, &v62, v52, &v66, v54, v55);
      core::ptr::drop_in_place<alloc::string::String>(&v66);
      v67 = v99;
      v66 = v98;
    }
    else if ( v46 )
    {
      v79 = a7 + 3;
      v80 = <alloc::string::String as core::fmt::Display>::fmt;
      v81 = &v68;
      v82 = <alloc::string::String as core::fmt::Display>::fmt;
      v62 = "\x01";
      *(_QWORD *)&v63 = 2LL;
      v65 = 0LL;
      *((_QWORD *)&v63 + 1) = &v79;
      v64 = 2LL;
      core::option::Option<T>::map_or_else(&v100, &v62, v52, v53, v54, v55);
      core::ptr::drop_in_place<alloc::string::String>(&v68);
      v69 = v101;
      v68 = v100;
    }
  }
  v57 = v85;
  *(_QWORD *)(v85 + 16) = v78;
  *(_OWORD *)v57 = v77;
  *(_QWORD *)(v57 + 40) = v67;
  *(_OWORD *)(v57 + 24) = v66;
  *(_OWORD *)(v57 + 48) = v75;
  *(_QWORD *)(v57 + 64) = v76;
  *(_OWORD *)(v57 + 72) = v68;
  *(_QWORD *)(v57 + 88) = v69;
  core::ptr::drop_in_place<alloc::string::String>(v95);
  core::ptr::drop_in_place<alloc::string::String>(v92);
  core::ptr::drop_in_place<alloc::string::String>(v89);
  return core::ptr::drop_in_place<alloc::string::String>(v86);
}
