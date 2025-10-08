_OWORD *__fastcall linera_summary::performance_summary::PerformanceSummary::format_comment_body(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  __int64 v3; // r15
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int128 *v9; // rax
  __m128 v10; // xmm0
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rbp
  __int64 v17; // rax
  __int64 v18; // rbp
  __int64 v19; // r15
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  _OWORD *v26; // rbx
  __int128 v28; // [rsp+0h] [rbp-1D8h] BYREF
  char ***v29; // [rsp+10h] [rbp-1C8h]
  __int64 v30; // [rsp+18h] [rbp-1C0h]
  __int64 v31; // [rsp+20h] [rbp-1B8h]
  __int64 (__fastcall *v32)(); // [rsp+28h] [rbp-1B0h]
  __int128 *v33; // [rsp+30h] [rbp-1A8h]
  __int64 (__fastcall *v34)(); // [rsp+38h] [rbp-1A0h]
  __int128 v35; // [rsp+40h] [rbp-198h] BYREF
  char ***v36; // [rsp+50h] [rbp-188h]
  __int128 v37; // [rsp+60h] [rbp-178h] BYREF
  char ***v38; // [rsp+70h] [rbp-168h]
  __int128 v39; // [rsp+80h] [rbp-158h] BYREF
  char ***v40; // [rsp+90h] [rbp-148h]
  __int128 v41; // [rsp+98h] [rbp-140h] BYREF
  char ***v42; // [rsp+A8h] [rbp-130h]
  __int64 v43; // [rsp+B0h] [rbp-128h]
  __int64 v44; // [rsp+B8h] [rbp-120h]
  char **v45; // [rsp+C8h] [rbp-110h] BYREF
  __int64 (__fastcall *v46)(); // [rsp+D0h] [rbp-108h]
  __int128 *v47; // [rsp+D8h] [rbp-100h]
  __int64 (__fastcall *v48)(); // [rsp+E0h] [rbp-F8h] BYREF
  __int128 *v49; // [rsp+E8h] [rbp-F0h]
  __int64 (__fastcall *v50)(); // [rsp+F0h] [rbp-E8h]
  __int128 *v51; // [rsp+F8h] [rbp-E0h]
  __m128 v52; // [rsp+100h] [rbp-D8h]
  __int64 v53; // [rsp+110h] [rbp-C8h]
  __int64 v54; // [rsp+118h] [rbp-C0h]
  __int64 v55; // [rsp+120h] [rbp-B8h]
  __int64 v56; // [rsp+128h] [rbp-B0h] BYREF
  __int128 v57; // [rsp+130h] [rbp-A8h] BYREF
  char ***v58; // [rsp+140h] [rbp-98h]
  _QWORD v59[2]; // [rsp+148h] [rbp-90h] BYREF
  _QWORD v60[2]; // [rsp+158h] [rbp-80h] BYREF
  _BYTE v61[24]; // [rsp+168h] [rbp-70h] BYREF
  _BYTE v62[24]; // [rsp+180h] [rbp-58h] BYREF
  __int128 v63[4]; // [rsp+198h] [rbp-40h] BYREF

  v2 = *(_QWORD *)(a2 + 200);
  v3 = *(_QWORD *)(a2 + 208);
  v59[0] = v2;
  v59[1] = v3;
  v4 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeTo<usize>>::get(v2, v3);
  if ( !v4 )
    core::str::slice_error_fail(v2, v3, 0LL, 7LL, &off_8F35D0);
  v60[0] = v4;
  v60[1] = 7LL;
  v37 = *(_OWORD *)(a2 + 152);
  v39 = *(_OWORD *)(a2 + 176);
  v45 = (char **)&v37;
  v46 = <&T as core::fmt::Display>::fmt;
  v47 = &v39;
  v48 = <&T as core::fmt::Display>::fmt;
  v49 = (__int128 *)v59;
  v50 = <&T as core::fmt::Display>::fmt;
  *(_QWORD *)&v28 = &off_8F34F0;
  *((_QWORD *)&v28 + 1) = 3LL;
  v31 = 0LL;
  v29 = &v45;
  v30 = 3LL;
  ((void (__fastcall *)(__int128 *, _QWORD, __int64, __int128 *))core::option::Option<T>::map_or_else)(
    &v41,
    0LL,
    v5,
    &v28);
  v57 = v41;
  v58 = v42;
  v45 = &off_8F35E8;
  v46 = <&T as core::fmt::Display>::fmt;
  v47 = (__int128 *)v60;
  v48 = <&T as core::fmt::Display>::fmt;
  v49 = &v57;
  v50 = <alloc::string::String as core::fmt::Display>::fmt;
  *(_QWORD *)&v28 = &unk_8F3520;
  *((_QWORD *)&v28 + 1) = 4LL;
  v31 = 0LL;
  v29 = &v45;
  v30 = 3LL;
  ((void (__fastcall *)(__int128 *, _QWORD, __int64, __int128 *, __int64, __int64))core::option::Option<T>::map_or_else)(
    &v41,
    0LL,
    v6,
    &v28,
    v7,
    v8);
  v35 = v41;
  v36 = v42;
  <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
    &v35,
    aCiRuntimeCompa,
    aWorkflow);
  v9 = *(__int128 **)(a2 + 280);
  v53 = a1;
  if ( v9 )
  {
    v10 = *(__m128 *)(a2 + 288);
    v11 = 1LL;
  }
  else
  {
    v10 = 0LL;
    v11 = 0LL;
  }
  v45 = (char **)v11;
  v46 = 0LL;
  v47 = v9;
  _mm_storel_ps((double *)&v48, v10);
  v49 = (__int128 *)v11;
  v50 = 0LL;
  v51 = v9;
  v52 = v10;
  while ( 1 )
  {
    v12 = <alloc::collections::btree::map::Iter<K,V> as core::iter::traits::iterator::Iterator>::next(&v45);
    if ( !v12 )
      break;
    v16 = v13;
    v56 = v12;
    *(_QWORD *)&v39 = &v56;
    *((_QWORD *)&v39 + 1) = <&T as core::fmt::Display>::fmt;
    core::option::Option<T>::map_or_else(&v41, 0LL, v13, &v28, v14, v15, &off_8F3560, 2LL, &v39, 1LL, 0LL);
    v28 = v41;
    v29 = v42;
    <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
      &v35,
      *((_QWORD *)&v41 + 1),
      (char *)v42 + *((_QWORD *)&v41 + 1));
    core::ptr::drop_in_place<alloc::string::String>(&v28);
    <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
      &v35,
      &unk_17A789,
      &unk_17A7CB);
    <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
      &v35,
      &unk_17A7CB,
      "|  |  |\nlinera-summary/src/performance_summary.rs## Performance Summary for commit%");
    v17 = *(_QWORD *)(v16 + 16);
    if ( v17 )
    {
      v18 = *(_QWORD *)(v16 + 8);
      v54 = 72 * v17;
      v19 = 0LL;
      v55 = v18;
      do
      {
        *(_QWORD *)&v28 = *(_QWORD *)(v18 + v19 + 48);
        DWORD2(v28) = 0;
        <T as alloc::string::SpecToString>::spec_to_string(v61, &v28);
        *(_QWORD *)&v28 = *(_QWORD *)(v18 + v19 + 56);
        DWORD2(v28) = 0;
        <T as alloc::string::SpecToString>::spec_to_string(v62, &v28);
        *(_QWORD *)&v37 = *(_QWORD *)(v18 + v19 + 64);
        *(_QWORD *)&v39 = &v37;
        *((_QWORD *)&v39 + 1) = core::fmt::float::<impl core::fmt::Display for f64>::fmt;
        v32 = (__int64 (__fastcall *)())(&dword_0 + 1);
        core::option::Option<T>::map_or_else(&v41, 0LL, v20, &v28, v21, v22, &unk_8F35F8, 2LL, &v39, 1LL, "");
        v37 = v41;
        v38 = v42;
        v63[0] = *(_OWORD *)(v18 + v19 + 8);
        v32 = <alloc::string::String as core::fmt::Display>::fmt;
        v33 = &v37;
        v34 = <alloc::string::String as core::fmt::Display>::fmt;
        *(_QWORD *)&v41 = &off_8F3580;
        *((_QWORD *)&v41 + 1) = 5LL;
        v44 = 0LL;
        v42 = (char ***)&v28;
        v43 = 4LL;
        core::option::Option<T>::map_or_else(
          &v39,
          0LL,
          v23,
          &v41,
          v24,
          v25,
          v63,
          <&T as core::fmt::Display>::fmt,
          v61,
          <alloc::string::String as core::fmt::Display>::fmt,
          v62);
        v28 = v39;
        v29 = v40;
        <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
          &v35,
          *((_QWORD *)&v39 + 1),
          (char *)v40 + *((_QWORD *)&v39 + 1));
        core::ptr::drop_in_place<alloc::string::String>(&v28);
        core::ptr::drop_in_place<alloc::string::String>(&v37);
        core::ptr::drop_in_place<alloc::string::String>(v62);
        core::ptr::drop_in_place<alloc::string::String>(v61);
        v19 += 72LL;
        v18 = v55;
      }
      while ( v54 != v19 );
    }
    alloc::string::String::push(&v35, 10LL);
  }
  v26 = (_OWORD *)v53;
  *(_QWORD *)(v53 + 16) = v36;
  *v26 = v35;
  core::ptr::drop_in_place<alloc::string::String>(&v57);
  return v26;
}