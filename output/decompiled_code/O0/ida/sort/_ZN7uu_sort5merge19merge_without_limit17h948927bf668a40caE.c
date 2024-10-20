_QWORD *__fastcall uu_sort::merge::merge_without_limit(_QWORD *a1, _OWORD *a2, __int64 a3)
{
  __int128 *v3; // rsi
  __int64 v4; // rdx
  unsigned __int64 v5; // rcx
  __int128 v6; // xmm1
  __int128 v7; // xmm2
  __int64 v8; // r13
  __int64 v9; // r12
  __int128 v10; // kr00_16
  __int64 v11; // rbp
  __int64 v12; // rax
  __int64 v13; // r13
  __int64 v14; // rax
  __int64 v15; // rcx
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm2
  __int128 v19; // xmm3
  _QWORD *v20; // rax
  unsigned __int64 v21; // rdx
  __int64 v22; // r13
  __int64 i; // rbx
  __int64 *v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rcx
  __int128 v28; // xmm0
  __int128 v29; // xmm1
  __int64 v30; // rcx
  __int64 v31; // rsi
  __int64 v32; // r15
  __int64 v33; // rax
  __int64 v34; // rax
  unsigned __int64 v35; // r15
  unsigned __int64 v36; // rbx
  __int64 v37; // r14
  _QWORD *v39; // rdx
  __int128 v40; // kr10_16
  _QWORD *v41; // rdx
  _QWORD *v42; // rax
  unsigned __int64 v43; // rdx
  __m256i v45; // [rsp+0h] [rbp-7C8h] BYREF
  __int128 v46; // [rsp+30h] [rbp-798h] BYREF
  __int128 v47; // [rsp+40h] [rbp-788h] BYREF
  __int64 v48; // [rsp+50h] [rbp-778h]
  __int128 v49; // [rsp+58h] [rbp-770h] BYREF
  __int64 v50; // [rsp+68h] [rbp-760h]
  _QWORD *v51; // [rsp+70h] [rbp-758h]
  __int128 v52; // [rsp+78h] [rbp-750h] BYREF
  __int128 v53; // [rsp+88h] [rbp-740h] BYREF
  unsigned __int64 v54; // [rsp+98h] [rbp-730h]
  __m256i v55; // [rsp+A0h] [rbp-728h] BYREF
  __int128 v56; // [rsp+C0h] [rbp-708h] BYREF
  _OWORD *v57; // [rsp+D0h] [rbp-6F8h]
  __int64 v58; // [rsp+D8h] [rbp-6F0h]
  __int128 v59; // [rsp+E0h] [rbp-6E8h] BYREF
  __m256i v60; // [rsp+F0h] [rbp-6D8h] BYREF
  __int128 v61; // [rsp+110h] [rbp-6B8h]
  __int64 v62; // [rsp+120h] [rbp-6A8h]
  __int64 v63; // [rsp+130h] [rbp-698h] BYREF
  __int64 *v64; // [rsp+138h] [rbp-690h]
  __int64 v65; // [rsp+140h] [rbp-688h]
  __int64 v66; // [rsp+148h] [rbp-680h]
  __int64 v67; // [rsp+150h] [rbp-678h]
  __int128 v68; // [rsp+158h] [rbp-670h]
  __int64 v69; // [rsp+168h] [rbp-660h]
  __int128 v70; // [rsp+170h] [rbp-658h]
  __int128 v71; // [rsp+180h] [rbp-648h]
  __int128 v72; // [rsp+190h] [rbp-638h]
  __int128 v73; // [rsp+1A0h] [rbp-628h]
  __int64 v74; // [rsp+1B0h] [rbp-618h]
  __int128 v75; // [rsp+1B8h] [rbp-610h]
  __int128 v76; // [rsp+1C8h] [rbp-600h]
  __int64 v77; // [rsp+1D8h] [rbp-5F0h]
  __m256i v78; // [rsp+1E0h] [rbp-5E8h]
  __m256i v79; // [rsp+200h] [rbp-5C8h]
  __m256i v80; // [rsp+220h] [rbp-5A8h]
  _OWORD v81[8]; // [rsp+240h] [rbp-588h] BYREF
  _OWORD v82[8]; // [rsp+2C0h] [rbp-508h] BYREF
  _OWORD v83[8]; // [rsp+340h] [rbp-488h] BYREF
  _OWORD v84[8]; // [rsp+3C0h] [rbp-408h] BYREF
  _OWORD v85[7]; // [rsp+440h] [rbp-388h] BYREF
  __int64 v86; // [rsp+4B0h] [rbp-318h]
  _OWORD v87[7]; // [rsp+4B8h] [rbp-310h] BYREF
  __int64 v88; // [rsp+528h] [rbp-2A0h]
  _OWORD v89[2]; // [rsp+530h] [rbp-298h] BYREF
  __int64 v90; // [rsp+550h] [rbp-278h]
  _BYTE dest[160]; // [rsp+558h] [rbp-270h] BYREF
  __int64 v92; // [rsp+5F8h] [rbp-1D0h] BYREF
  __int128 v93; // [rsp+600h] [rbp-1C8h]
  __int128 v94; // [rsp+610h] [rbp-1B8h]
  __int128 v95; // [rsp+620h] [rbp-1A8h]
  __int128 v96; // [rsp+630h] [rbp-198h]
  __int128 v97; // [rsp+640h] [rbp-188h]
  __int128 v98; // [rsp+650h] [rbp-178h]
  __int128 v99; // [rsp+660h] [rbp-168h]
  __int64 v100; // [rsp+670h] [rbp-158h]
  __int64 v101; // [rsp+678h] [rbp-150h] BYREF
  __int128 v102; // [rsp+680h] [rbp-148h]
  __int128 v103; // [rsp+690h] [rbp-138h]
  __int128 v104; // [rsp+6A0h] [rbp-128h]
  __int128 v105; // [rsp+6B0h] [rbp-118h]
  __int128 v106; // [rsp+6C0h] [rbp-108h]
  __int128 v107; // [rsp+6D0h] [rbp-F8h]
  __int128 v108; // [rsp+6E0h] [rbp-E8h]
  __int64 v109; // [rsp+6F0h] [rbp-D8h]
  _BYTE src[208]; // [rsp+6F8h] [rbp-D0h] BYREF

  v58 = a3;
  v57 = a2;
  v51 = a1;
  std::sync::mpmc::channel(&v45);
  v46 = *(_OWORD *)v45.m256i_i8;
  v56 = *(_OWORD *)&v45.m256i_u64[2];
  alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v45, 0LL, 0LL);
  if ( v45.m256i_i64[0] )
    alloc::raw_vec::handle_error(v45.m256i_i64[1], v45.m256i_i64[2]);
  v47 = *(_OWORD *)&v45.m256i_u64[1];
  v48 = 0LL;
  v3 = 0LL;
  alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v45, 0LL, 0LL);
  if ( v45.m256i_i64[0] )
    alloc::raw_vec::handle_error(v45.m256i_i64[1], v45.m256i_i64[2]);
  v5 = 0x8000000000000000LL;
  v49 = *(_OWORD *)&v45.m256i_u64[1];
  v50 = 0LL;
  v6 = v57[1];
  v7 = v57[2];
  *(_OWORD *)v60.m256i_i8 = *v57;
  *(_OWORD *)&v60.m256i_u64[2] = v6;
  v61 = v7;
  v62 = 0LL;
  while ( 1 )
  {
    v45 = v60;
    v60.m256i_i64[0] = 0x8000000000000001LL;
    if ( v45.m256i_i64[0] == 0x8000000000000001LL )
    {
      core::ptr::drop_in_place<core::option::Option<core::result::Result<uu_sort::merge::PlainTmpMergeInput,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>(&v45);
      v3 = (__int128 *)v61;
      itertools::groupbylazy::IntoChunks<I>::step(&v55, v61, *((_QWORD *)&v61 + 1));
    }
    else
    {
      v55 = v45;
    }
    v8 = v55.m256i_i64[0];
    if ( v55.m256i_i64[0] == 0x8000000000000001LL )
      break;
    v80 = v55;
    v9 = v62;
    if ( v62 == -1 )
      core::panicking::panic_const::panic_const_add_overflow(
        &anon_63ca0f90b115037567b298c459bc5907_6_llvm_5466747653277509712,
        v3,
        v4,
        v5);
    ++v62;
    v79 = v55;
    std::sync::mpmc::sync_channel(&v45, 2LL);
    v10 = *(_OWORD *)&v45.m256i_u64[2];
    v52 = *(_OWORD *)v45.m256i_i8;
    *(_OWORD *)v45.m256i_i8 = *(_OWORD *)&v45.m256i_u64[2];
    v11 = v50;
    if ( v50 == (_QWORD)v49 )
      alloc::raw_vec::RawVec<T,A>::grow_one(&v49);
    *(_OWORD *)(*((_QWORD *)&v49 + 1) + 16 * v11) = v10;
    v50 = v11 + 1;
    v12 = v79.m256i_i64[2];
    if ( v8 == 0x8000000000000000LL )
    {
      v41 = v51;
      v51[1] = v79.m256i_i64[1];
      v41[2] = v12;
      *v41 = 3LL;
      if ( (_QWORD)v52 )
      {
        if ( (_QWORD)v52 == 1LL )
          std::sync::mpmc::counter::Sender<C>::release((char *)&v52 + 8);
        else
          std::sync::mpmc::counter::Sender<C>::release((char *)&v52 + 8);
      }
      else
      {
        std::sync::mpmc::counter::Sender<C>::release((char *)&v52 + 8);
      }
      v42 = (_QWORD *)v61;
      if ( *(_QWORD *)v61 )
        core::cell::panic_already_borrowed(&anon_106514630be1c9ef1de9e84b8238e531_28_llvm_16179947721019886102);
      v43 = *(_QWORD *)(v61 + 176);
      if ( v43 == -1LL || v43 < *((_QWORD *)&v61 + 1) )
        *(_QWORD *)(v61 + 176) = *((_QWORD *)&v61 + 1);
      *v42 = 0LL;
      core::ptr::drop_in_place<core::option::Option<core::result::Result<uu_sort::merge::PlainTmpMergeInput,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>(&v60);
      core::ptr::drop_in_place<alloc::vec::Vec<std::sync::mpsc::Receiver<uu_sort::chunks::Chunk>>>(&v49);
      core::ptr::drop_in_place<alloc::vec::Vec<core::option::Option<uu_sort::merge::ReaderFile<uu_sort::merge::PlainTmpMergeInput>>>>(&v47);
      if ( (_QWORD)v56 )
      {
        if ( (_QWORD)v56 == 1LL )
          std::sync::mpmc::counter::Receiver<C>::release((char *)&v56 + 8);
        else
          std::sync::mpmc::counter::Receiver<C>::release((char *)&v56 + 8);
      }
      else
      {
        std::sync::mpmc::counter::Receiver<C>::release((char *)&v56 + 8);
      }
      if ( (_QWORD)v46 )
      {
        if ( (_QWORD)v46 == 1LL )
          std::sync::mpmc::counter::Sender<C>::release((char *)&v46 + 8);
        else
          std::sync::mpmc::counter::Sender<C>::release((char *)&v46 + 8);
      }
      else
      {
        std::sync::mpmc::counter::Sender<C>::release((char *)&v46 + 8);
      }
      return v51;
    }
    v70 = v52;
    *(_QWORD *)&v71 = v8;
    *((_QWORD *)&v71 + 1) = v79.m256i_i64[1];
    v72 = *(_OWORD *)&v79.m256i_u64[2];
    *(_QWORD *)&v73 = 0LL;
    *((_QWORD *)&v73 + 1) = 1LL;
    v74 = 0LL;
    v13 = v48;
    if ( v48 == (_QWORD)v47 )
      alloc::raw_vec::RawVec<T,A>::grow_one(&v47, *((_QWORD *)&v52 + 1), v79.m256i_i64[3], v79.m256i_i64[1]);
    v14 = *((_QWORD *)&v47 + 1);
    v15 = 9 * v13;
    v16 = v70;
    v17 = v71;
    v18 = v72;
    v19 = v73;
    *(_QWORD *)(*((_QWORD *)&v47 + 1) + 8 * v15 + 64) = v74;
    *(_OWORD *)(v14 + 8 * v15 + 48) = v19;
    *(_OWORD *)(v14 + 8 * v15 + 32) = v18;
    *(_OWORD *)(v14 + 8 * v15 + 16) = v17;
    *(_OWORD *)(v14 + 8 * v15) = v16;
    v48 = v13 + 1;
    uu_sort::chunks::RecycledChunk::new(v85, 0x2000LL);
    v92 = v9;
    v100 = v86;
    v99 = v85[6];
    v98 = v85[5];
    v97 = v85[4];
    v96 = v85[3];
    v95 = v85[2];
    v94 = v85[1];
    v93 = v85[0];
    v3 = &v46;
    std::sync::mpmc::Sender<T>::send(v83, &v46, &v92);
    if ( *((_QWORD *)&v83[0] + 1) != 0x8000000000000000LL )
    {
      v81[7] = v83[7];
      v81[6] = v83[6];
      v81[5] = v83[5];
      v81[4] = v83[4];
      v81[3] = v83[3];
      v81[2] = v83[2];
      v81[1] = v83[1];
      v81[0] = v83[0];
      core::result::unwrap_failed(aCalledResultUn_6, 43LL, v81, &off_1D4AD8, &off_1D4D18);
    }
  }
  v20 = (_QWORD *)v61;
  if ( *(_QWORD *)v61 )
    core::cell::panic_already_borrowed(&anon_106514630be1c9ef1de9e84b8238e531_28_llvm_16179947721019886102);
  v21 = *(_QWORD *)(v61 + 176);
  if ( v21 == -1LL || v21 < *((_QWORD *)&v61 + 1) )
    *(_QWORD *)(v61 + 176) = *((_QWORD *)&v61 + 1);
  *v20 = 0LL;
  core::ptr::drop_in_place<core::option::Option<core::result::Result<uu_sort::merge::PlainTmpMergeInput,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>(&v60);
  v22 = v48;
  for ( i = 0LL; v22 != i; ++i )
  {
    uu_sort::chunks::RecycledChunk::new(v87, 0x2000LL);
    v101 = i;
    v109 = v88;
    v108 = v87[6];
    v107 = v87[5];
    v106 = v87[4];
    v105 = v87[3];
    v104 = v87[2];
    v103 = v87[1];
    v102 = v87[0];
    std::sync::mpmc::Sender<T>::send(v84, &v46, &v101);
    if ( *((_QWORD *)&v84[0] + 1) != 0x8000000000000000LL )
    {
      v82[7] = v84[7];
      v82[6] = v84[6];
      v82[5] = v84[5];
      v82[4] = v84[4];
      v82[3] = v84[3];
      v82[2] = v84[2];
      v82[1] = v84[1];
      v82[0] = v84[0];
      core::result::unwrap_failed(aCalledResultUn_6, 43LL, v82, &off_1D4AD8, &off_1D4D00);
    }
  }
  <uu_sort::GlobalSettings as core::clone::Clone>::clone(src, v58);
  v89[0] = v56;
  v89[1] = v47;
  v90 = v48;
  memcpy(dest, src, sizeof(dest));
  v45.m256i_i64[2] = 0x8000000000000000LL;
  v45.m256i_i64[0] = 0LL;
  std::thread::Builder::spawn_unchecked_(&v55, &v45, v89, 0LL);
  if ( !v55.m256i_i64[0] )
  {
    v55.m256i_i64[0] = v55.m256i_i64[1];
    core::result::unwrap_failed(
      "failed to spawn threadmain",
      22LL,
      &v55,
      &anon_fe38f741e54badf7015918e7aa68e0c9_11_llvm_9495795450009312203,
      &anon_e73ee028dc74ef313b0965e1e543fc57_5_llvm_12031147188011335587);
  }
  v68 = *(_OWORD *)v55.m256i_i8;
  v69 = v55.m256i_i64[2];
  *(_QWORD *)&v53 = 0LL;
  *((_QWORD *)&v53 + 1) = 8LL;
  v54 = 0LL;
  v24 = (__int64 *)*((_QWORD *)&v49 + 1);
  v25 = v50;
  v63 = *((_QWORD *)&v49 + 1);
  v64 = (__int64 *)*((_QWORD *)&v49 + 1);
  v65 = v49;
  v66 = *((_QWORD *)&v49 + 1) + 16 * v50;
  v67 = 0LL;
  if ( v50 )
  {
    do
    {
      v64 = v24 + 2;
      v30 = *v24;
      if ( *v24 == 3 )
        break;
      v31 = v24[1];
      v45.m256i_i64[0] = *v24;
      v45.m256i_i64[1] = v31;
      v32 = v67;
      if ( v67 == -1 )
        core::panicking::panic_const::panic_const_add_overflow(
          &anon_63ca0f90b115037567b298c459bc5907_6_llvm_5466747653277509712,
          v31,
          v25,
          v30);
      ++v67;
      *(_QWORD *)&v59 = v30;
      *((_QWORD *)&v59 + 1) = v31;
      if ( v30 )
      {
        if ( v30 == 1 )
          std::sync::mpmc::list::Channel<T>::recv(&v45, v31, v25, 1000000000LL);
        else
          std::sync::mpmc::zero::Channel<T>::recv(&v45, v31, v25, 1000000000LL);
      }
      else
      {
        std::sync::mpmc::array::Channel<T>::recv(&v45, v31, v25, 1000000000LL);
      }
      if ( (v45.m256i_i8[0] & 1) != 0 || (v33 = v45.m256i_i64[1]) == 0 )
      {
        if ( (_QWORD)v59 )
        {
          if ( (_QWORD)v59 == 1LL )
            std::sync::mpmc::counter::Receiver<C>::release((char *)&v59 + 8);
          else
            std::sync::mpmc::counter::Receiver<C>::release((char *)&v59 + 8);
        }
        else
        {
          std::sync::mpmc::counter::Receiver<C>::release((char *)&v59 + 8);
        }
      }
      else
      {
        v45.m256i_i64[0] = 1LL;
        v45.m256i_i64[1] = 1LL;
        v45.m256i_i64[2] = v33;
        v34 = alloc::alloc::Global::alloc_impl(1LL, 8LL, 24LL, 0LL);
        if ( !v34 )
          alloc::alloc::handle_alloc_error(8LL, 24LL);
        *(_QWORD *)(v34 + 16) = v45.m256i_i64[2];
        *(_OWORD *)v34 = *(_OWORD *)v45.m256i_i8;
        v76 = (unsigned __int64)v34;
        v75 = v59;
        v77 = v32;
        v35 = v54;
        if ( v54 == (_QWORD)v53 )
          alloc::raw_vec::RawVec<T,A>::grow_one(&v53);
        v26 = *((_QWORD *)&v53 + 1);
        v27 = 5 * v35;
        v28 = v75;
        v29 = v76;
        v25 = v77;
        *(_QWORD *)(*((_QWORD *)&v53 + 1) + 8 * v27 + 32) = v77;
        *(_OWORD *)(v26 + 8 * v27 + 16) = v29;
        *(_OWORD *)(v26 + 8 * v27) = v28;
        v54 = v35 + 1;
      }
      v24 = v64;
    }
    while ( v64 != (__int64 *)v66 );
  }
  <alloc::vec::into_iter::IntoIter<T,A> as core::ops::drop::Drop>::drop(&v63);
  v36 = v54;
  v45.m256i_i64[2] = v54;
  *(_OWORD *)v45.m256i_i8 = v53;
  v45.m256i_i64[3] = v58;
  if ( v54 >= 2 )
  {
    v37 = (v54 >> 1) - 1;
    do
      binary_heap_plus::binary_heap::BinaryHeap<T,C>::sift_down_range(&v45, v37, v36);
    while ( v37-- != 0 );
  }
  v78 = v45;
  v39 = v51;
  *(_OWORD *)v51 = v46;
  v40 = *(_OWORD *)&v78.m256i_u64[2];
  *((_OWORD *)v39 + 1) = *(_OWORD *)v78.m256i_i8;
  *((_OWORD *)v39 + 2) = v40;
  *((_OWORD *)v39 + 3) = v68;
  v39[8] = v69;
  v39[9] = 0LL;
  return v51;
}
