__int64 __fastcall uu_ptx::get_output_chunks(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned __int64 a6,
        _QWORD *a7)
{
  __int64 v11; // rbp
  __int128 v12; // rax
  __int128 v13; // rax
  __int128 v14; // rax
  __int128 v15; // rax
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rbp
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // r13
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rdx
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rdx
  unsigned __int64 v27; // rbx
  __int64 v28; // rax
  __int64 v29; // rdx
  unsigned __int64 v30; // r13
  unsigned __int64 v31; // rbp
  __int64 v32; // rax
  unsigned __int64 v33; // rax
  unsigned __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // r13
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rbx
  unsigned __int64 v40; // r13
  unsigned __int64 v41; // rdx
  unsigned __int64 v42; // r15
  __int64 v43; // rax
  unsigned __int64 v44; // rax
  unsigned __int64 v45; // rax
  unsigned __int64 v46; // rbp
  __int64 v47; // rdx
  __int64 v48; // r15
  __int64 v49; // rax
  __int64 v50; // rdx
  __int64 v51; // rcx
  unsigned __int64 v53; // [rsp+8h] [rbp-1C0h]
  unsigned __int64 v54; // [rsp+8h] [rbp-1C0h]
  __int128 v55; // [rsp+10h] [rbp-1B8h] BYREF
  unsigned __int64 v56; // [rsp+20h] [rbp-1A8h]
  unsigned __int64 v57; // [rsp+28h] [rbp-1A0h]
  __int128 v58; // [rsp+30h] [rbp-198h] BYREF
  __int64 v59; // [rsp+40h] [rbp-188h]
  __int128 *v60; // [rsp+48h] [rbp-180h]
  __int64 v61; // [rsp+50h] [rbp-178h]
  unsigned __int64 v62; // [rsp+58h] [rbp-170h]
  __int64 v63; // [rsp+60h] [rbp-168h]
  __int64 v64; // [rsp+68h] [rbp-160h]
  __int128 v65; // [rsp+70h] [rbp-158h] BYREF
  unsigned __int64 v66; // [rsp+80h] [rbp-148h]
  __int128 v67; // [rsp+88h] [rbp-140h] BYREF
  __int64 v68; // [rsp+98h] [rbp-130h]
  _QWORD *v69; // [rsp+A0h] [rbp-128h] BYREF
  __int64 (__fastcall *v70)(); // [rsp+A8h] [rbp-120h]
  __int128 *v71; // [rsp+B0h] [rbp-118h]
  __int64 (__fastcall *v72)(); // [rsp+B8h] [rbp-110h]
  __int64 v73; // [rsp+C0h] [rbp-108h]
  unsigned __int64 v74; // [rsp+C8h] [rbp-100h]
  __int64 v75; // [rsp+D0h] [rbp-F8h]
  const char *v76; // [rsp+D8h] [rbp-F0h] BYREF
  __int64 v77; // [rsp+E0h] [rbp-E8h]
  _QWORD *v78; // [rsp+E8h] [rbp-E0h]
  __int64 v79; // [rsp+F0h] [rbp-D8h]
  __int64 v80; // [rsp+F8h] [rbp-D0h]
  char v81[8]; // [rsp+108h] [rbp-C0h] BYREF
  __int64 v82; // [rsp+110h] [rbp-B8h]
  __int64 v83; // [rsp+118h] [rbp-B0h]
  char v84[8]; // [rsp+120h] [rbp-A8h] BYREF
  __int64 v85; // [rsp+128h] [rbp-A0h]
  __int64 v86; // [rsp+130h] [rbp-98h]
  char v87[8]; // [rsp+138h] [rbp-90h] BYREF
  __int64 v88; // [rsp+140h] [rbp-88h]
  __int64 v89; // [rsp+148h] [rbp-80h]
  char v90[8]; // [rsp+150h] [rbp-78h] BYREF
  __int64 v91; // [rsp+158h] [rbp-70h]
  __int64 v92; // [rsp+160h] [rbp-68h]
  __int128 v93; // [rsp+168h] [rbp-60h] BYREF
  unsigned __int64 v94; // [rsp+178h] [rbp-50h]
  __int128 v95; // [rsp+180h] [rbp-48h] BYREF
  __int64 v96; // [rsp+190h] [rbp-38h]

  v64 = a2;
  v75 = a1;
  v11 = a7[9] >> 1;
  v63 = a7[10];
  v53 = core::cmp::Ord::max(v11 - v63);
  v73 = a7[5];
  v57 = core::cmp::Ord::max(v11 + ~(a4 + 2 * v73));
  *(_QWORD *)&v12 = alloc::raw_vec::RawVecInner<A>::with_capacity_in(v11, 1LL, 1LL, &off_251510);
  v58 = v12;
  v59 = 0LL;
  *(_QWORD *)&v13 = alloc::raw_vec::RawVecInner<A>::with_capacity_in(v11, 1LL, 1LL, &off_251510);
  v55 = v13;
  v56 = 0LL;
  *(_QWORD *)&v14 = alloc::raw_vec::RawVecInner<A>::with_capacity_in(v11, 1LL, 1LL, &off_251510);
  v65 = v14;
  v66 = 0LL;
  *(_QWORD *)&v15 = alloc::raw_vec::RawVecInner<A>::with_capacity_in(v11, 1LL, 1LL, &off_251510);
  v67 = v15;
  v68 = 0LL;
  uu_ptx::trim_idx(a2, a3, 0LL, a3);
  v17 = v16;
  v18 = core::cmp::Ord::max(v16 - v53);
  v19 = uu_ptx::trim_broken_word_left(a2, a3, v18, v17);
  v20 = uu_ptx::trim_idx(a2, a3, v19, v17);
  v22 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(v20, v21, a2, a3, &off_2519D0);
  core::iter::traits::iterator::Iterator::collect(v81, v22, v22 + 4 * v23);
  v62 = v20;
  <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
    &v55,
    v82,
    v82 + v83);
  if ( v53 < v56 )
    core::panicking::panic(aAssertionFaile_6, 49LL, &off_2519E8);
  v24 = core::cmp::Ord::min(v57, a6);
  v25 = uu_ptx::trim_broken_word_right(a5, a6, 0LL, v24);
  uu_ptx::trim_idx(a5, a6, 0LL, v25);
  v27 = v26;
  v28 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(0LL, v26, a5, a6, &off_251A00);
  core::iter::traits::iterator::Iterator::collect(v84, v28, v28 + 4 * v29);
  v60 = &v65;
  <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
    &v65,
    v85,
    v85 + v86);
  if ( v57 < v66 )
    core::panicking::panic(aAssertionFaile_7, 47LL, &off_251A18);
  v30 = v56;
  v31 = uu_ptx::trim_idx(a5, a6, v27, a6);
  v32 = core::cmp::Ord::max(v53 - (v63 + v30));
  v33 = core::cmp::Ord::min(a6, v32 + v31);
  v34 = uu_ptx::trim_broken_word_right(a5, a6, v31, v33);
  v54 = uu_ptx::trim_idx(a5, a6, v31, v34);
  v36 = v35;
  v37 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(v54, v35, a5, a6, &off_251A30);
  core::iter::traits::iterator::Iterator::collect(v87, v37, v37 + 4 * v38);
  v61 = v36;
  v74 = v27;
  <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
    &v67,
    v88,
    v88 + v89);
  v39 = v64;
  v40 = v66;
  uu_ptx::trim_idx(v64, a3, 0LL, v62);
  v42 = v41;
  v43 = core::cmp::Ord::max(v57 - (v40 + v63));
  v44 = core::cmp::Ord::max(v42 - v43);
  v45 = uu_ptx::trim_broken_word_left(v39, a3, v44, v42);
  v46 = uu_ptx::trim_idx(v39, a3, v45, v42);
  v48 = v47;
  v49 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(v46, v47, v39, a3, &off_251A48);
  core::iter::traits::iterator::Iterator::collect(v90, v49, v49 + 4 * v50);
  <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
    &v58,
    v91,
    v91 + v92);
  if ( v74 != a6 )
  {
    if ( v54 == v61 || (v60 = &v67, v61 != a6) )
      <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
        v60,
        a7[4],
        a7[4] + v73);
  }
  if ( v62 )
  {
    if ( v46 == v48 )
    {
      v69 = a7 + 3;
      v70 = <alloc::string::String as core::fmt::Display>::fmt;
      v71 = &v55;
      v72 = <alloc::string::String as core::fmt::Display>::fmt;
      v76 = "\x01";
      v77 = 2LL;
      v80 = 0LL;
      v78 = &v69;
      v79 = 2LL;
      core::option::Option<T>::map_or_else(&v93, &v76);
      core::ptr::drop_in_place<alloc::string::String>(&v55);
      v56 = v94;
      v55 = v93;
    }
    else if ( v46 )
    {
      v69 = a7 + 3;
      v70 = <alloc::string::String as core::fmt::Display>::fmt;
      v71 = &v58;
      v72 = <alloc::string::String as core::fmt::Display>::fmt;
      v76 = "\x01";
      v77 = 2LL;
      v80 = 0LL;
      v78 = &v69;
      v79 = 2LL;
      core::option::Option<T>::map_or_else(&v95, &v76);
      core::ptr::drop_in_place<alloc::string::String>(&v58);
      v59 = v96;
      v58 = v95;
    }
  }
  v51 = v75;
  *(_QWORD *)(v75 + 16) = v68;
  *(_OWORD *)v51 = v67;
  *(_QWORD *)(v51 + 40) = v56;
  *(_OWORD *)(v51 + 24) = v55;
  *(_OWORD *)(v51 + 48) = v65;
  *(_QWORD *)(v51 + 64) = v66;
  *(_OWORD *)(v51 + 72) = v58;
  *(_QWORD *)(v51 + 88) = v59;
  core::ptr::drop_in_place<alloc::string::String>(v90);
  core::ptr::drop_in_place<alloc::string::String>(v87);
  core::ptr::drop_in_place<alloc::string::String>(v84);
  return core::ptr::drop_in_place<alloc::string::String>(v81);
}