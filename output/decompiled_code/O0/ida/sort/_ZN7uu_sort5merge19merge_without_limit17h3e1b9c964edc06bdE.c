_QWORD *__fastcall uu_sort::merge::merge_without_limit(_QWORD *a1, __int128 *a2, __int64 a3)
{
  unsigned __int64 v3; // rax
  bool v4; // cf
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rax
  __int128 v8; // xmm1
  __int128 v9; // xmm2
  __m256i *v10; // r14
  __int64 *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // r12
  __int64 v16; // r15
  __m256i *v17; // rbx
  __int128 v18; // kr00_16
  __int64 v19; // r14
  __int64 v20; // rax
  __int64 v21; // r12
  __int64 v22; // rax
  __int64 v23; // rcx
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm2
  __int128 v27; // xmm3
  __int64 v28; // rbp
  __int64 i; // rbx
  __int64 *v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rax
  __int64 v33; // rcx
  __int128 v34; // xmm0
  __int128 v35; // xmm1
  __int64 v36; // rcx
  __int64 v37; // rsi
  __int64 v38; // r15
  __int64 v39; // rax
  __int64 v40; // rax
  unsigned __int64 v41; // r15
  unsigned __int64 v42; // rbx
  __int64 v43; // r14
  _QWORD *result; // rax
  __int128 v45; // kr10_16
  _QWORD *v46; // rdx
  __m256i v47; // [rsp+0h] [rbp-7F8h] BYREF
  _QWORD *v48; // [rsp+28h] [rbp-7D0h]
  __int128 v49; // [rsp+30h] [rbp-7C8h] BYREF
  __int128 v50; // [rsp+40h] [rbp-7B8h] BYREF
  __int64 v51; // [rsp+50h] [rbp-7A8h]
  __int128 v52; // [rsp+58h] [rbp-7A0h] BYREF
  __int64 v53; // [rsp+68h] [rbp-790h]
  __int128 *v54; // [rsp+70h] [rbp-788h]
  __int128 v55; // [rsp+78h] [rbp-780h] BYREF
  __int128 v56; // [rsp+88h] [rbp-770h] BYREF
  unsigned __int64 v57; // [rsp+98h] [rbp-760h]
  __int128 v58; // [rsp+A0h] [rbp-758h] BYREF
  __int64 v59; // [rsp+B0h] [rbp-748h]
  __int128 v60; // [rsp+B8h] [rbp-740h] BYREF
  _BYTE v61[24]; // [rsp+C8h] [rbp-730h] BYREF
  __int64 v62; // [rsp+E0h] [rbp-718h]
  __int64 v63; // [rsp+E8h] [rbp-710h] BYREF
  __int64 *v64; // [rsp+F0h] [rbp-708h]
  __int64 v65; // [rsp+F8h] [rbp-700h]
  __int64 v66; // [rsp+100h] [rbp-6F8h]
  __int64 v67; // [rsp+108h] [rbp-6F0h]
  __int128 v68; // [rsp+110h] [rbp-6E8h] BYREF
  __int128 v69; // [rsp+120h] [rbp-6D8h]
  __int128 v70; // [rsp+130h] [rbp-6C8h]
  __int64 v71; // [rsp+140h] [rbp-6B8h]
  __int128 v72; // [rsp+150h] [rbp-6A8h]
  __int64 v73; // [rsp+160h] [rbp-698h]
  unsigned __int64 v74; // [rsp+170h] [rbp-688h]
  __int128 v75; // [rsp+178h] [rbp-680h]
  __int64 v76; // [rsp+188h] [rbp-670h]
  __int128 v77; // [rsp+190h] [rbp-668h]
  __int128 v78; // [rsp+1A0h] [rbp-658h]
  __int128 v79; // [rsp+1B0h] [rbp-648h]
  __int128 v80; // [rsp+1C0h] [rbp-638h]
  __int64 v81; // [rsp+1D0h] [rbp-628h]
  __int128 v82; // [rsp+1D8h] [rbp-620h]
  __int128 v83; // [rsp+1E8h] [rbp-610h]
  __int64 v84; // [rsp+1F8h] [rbp-600h]
  __m256i v85; // [rsp+200h] [rbp-5F8h]
  __int64 v86; // [rsp+228h] [rbp-5D0h]
  _BYTE v87[24]; // [rsp+230h] [rbp-5C8h]
  __int64 v88; // [rsp+248h] [rbp-5B0h] BYREF
  __int128 v89; // [rsp+250h] [rbp-5A8h]
  _OWORD v90[8]; // [rsp+260h] [rbp-598h] BYREF
  _OWORD v91[8]; // [rsp+2E0h] [rbp-518h] BYREF
  _OWORD v92[8]; // [rsp+360h] [rbp-498h] BYREF
  _OWORD v93[8]; // [rsp+3E0h] [rbp-418h] BYREF
  _OWORD v94[7]; // [rsp+460h] [rbp-398h] BYREF
  __int64 v95; // [rsp+4D0h] [rbp-328h]
  _OWORD v96[7]; // [rsp+4D8h] [rbp-320h] BYREF
  __int64 v97; // [rsp+548h] [rbp-2B0h]
  __int128 v98; // [rsp+550h] [rbp-2A8h]
  _OWORD v99[2]; // [rsp+560h] [rbp-298h] BYREF
  __int64 v100; // [rsp+580h] [rbp-278h]
  _BYTE dest[160]; // [rsp+588h] [rbp-270h] BYREF
  __int64 v102; // [rsp+628h] [rbp-1D0h] BYREF
  __int128 v103; // [rsp+630h] [rbp-1C8h]
  __int128 v104; // [rsp+640h] [rbp-1B8h]
  __int128 v105; // [rsp+650h] [rbp-1A8h]
  __int128 v106; // [rsp+660h] [rbp-198h]
  __int128 v107; // [rsp+670h] [rbp-188h]
  __int128 v108; // [rsp+680h] [rbp-178h]
  __int128 v109; // [rsp+690h] [rbp-168h]
  __int64 v110; // [rsp+6A0h] [rbp-158h]
  __int64 v111; // [rsp+6A8h] [rbp-150h] BYREF
  __int128 v112; // [rsp+6B0h] [rbp-148h]
  __int128 v113; // [rsp+6C0h] [rbp-138h]
  __int128 v114; // [rsp+6D0h] [rbp-128h]
  __int128 v115; // [rsp+6E0h] [rbp-118h]
  __int128 v116; // [rsp+6F0h] [rbp-108h]
  __int128 v117; // [rsp+700h] [rbp-F8h]
  __int128 v118; // [rsp+710h] [rbp-E8h]
  __int64 v119; // [rsp+720h] [rbp-D8h]
  _BYTE src[208]; // [rsp+728h] [rbp-D0h] BYREF

  v59 = a3;
  v54 = a2;
  std::sync::mpmc::channel(&v47);
  v48 = a1;
  v49 = *(_OWORD *)v47.m256i_i8;
  v58 = *(_OWORD *)&v47.m256i_u64[2];
  v3 = *((_QWORD *)a2 + 3);
  v4 = v3 < *((_QWORD *)a2 + 1);
  v5 = v3 - *((_QWORD *)a2 + 1);
  if ( v4 )
    goto LABEL_66;
  alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v47, v5 / 0x18, 0LL);
  if ( v47.m256i_i64[0] )
    alloc::raw_vec::handle_error(v47.m256i_i64[1], v47.m256i_i64[2]);
  v50 = *(_OWORD *)&v47.m256i_u64[1];
  v51 = 0LL;
  v6 = *((_QWORD *)v54 + 3);
  v4 = v6 < *((_QWORD *)v54 + 1);
  v7 = v6 - *((_QWORD *)v54 + 1);
  if ( v4 )
LABEL_66:
    core::panicking::panic_nounwind(anon_ff3add0fc2121d489142e144a6a370f6_24_llvm_5182399808099546885, 71LL);
  alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v47, v7 / 0x18, 0LL);
  if ( v47.m256i_i64[0] )
    alloc::raw_vec::handle_error(v47.m256i_i64[1], v47.m256i_i64[2]);
  v52 = *(_OWORD *)&v47.m256i_u64[1];
  v53 = 0LL;
  v8 = v54[1];
  v9 = v54[2];
  v68 = *v54;
  v69 = v8;
  v70 = v9;
  v71 = 0LL;
  v10 = &v47;
  v74 = 0x8000000000000001LL;
  while ( 1 )
  {
    v11 = (__int64 *)*((_QWORD *)&v68 + 1);
    if ( *((_QWORD *)&v68 + 1) == *((_QWORD *)&v69 + 1) )
      break;
    *((_QWORD *)&v68 + 1) += 24LL;
    v12 = *v11;
    if ( *v11 == 0x8000000000000000LL )
      break;
    v98 = *(_OWORD *)(v11 + 1);
    v88 = v12;
    v89 = v98;
    v13 = v70;
    (*(void (__fastcall **)(__m256i *, _QWORD, __int64 *))(*((_QWORD *)&v70 + 1) + 32LL))(v10, v70, &v88);
    v15 = v47.m256i_i64[0];
    v72 = *(_OWORD *)&v47.m256i_u64[1];
    v73 = v47.m256i_i64[3];
    if ( v47.m256i_i64[0] == v74 )
      break;
    v62 = v73;
    *(_OWORD *)&v61[8] = v72;
    *(_QWORD *)v61 = v47.m256i_i64[0];
    v16 = v71;
    if ( v71 == -1 )
      core::panicking::panic_const::panic_const_add_overflow(
        &anon_63ca0f90b115037567b298c459bc5907_6_llvm_5466747653277509712,
        v13,
        v14,
        &v61[8]);
    ++v71;
    *(_QWORD *)&v87[16] = v73;
    *(_OWORD *)v87 = v72;
    v86 = v47.m256i_i64[0];
    v17 = v10;
    std::sync::mpmc::sync_channel(v10, 2LL);
    v18 = *(_OWORD *)&v47.m256i_u64[2];
    v55 = *(_OWORD *)v47.m256i_i8;
    *(_OWORD *)v47.m256i_i8 = *(_OWORD *)&v47.m256i_u64[2];
    v19 = v53;
    if ( v53 == (_QWORD)v52 )
      alloc::raw_vec::RawVec<T,A>::grow_one(&v52);
    *(_OWORD *)(*((_QWORD *)&v52 + 1) + 16 * v19) = v18;
    v53 = v19 + 1;
    v20 = *(_QWORD *)&v87[8];
    if ( v15 == 0x8000000000000000LL )
    {
      v46 = v48;
      v48[1] = *(_QWORD *)v87;
      v46[2] = v20;
      *v46 = 3LL;
      if ( (_QWORD)v55 )
      {
        if ( (_QWORD)v55 == 1LL )
          std::sync::mpmc::counter::Sender<C>::release((char *)&v55 + 8);
        else
          std::sync::mpmc::counter::Sender<C>::release((char *)&v55 + 8);
      }
      else
      {
        std::sync::mpmc::counter::Sender<C>::release((char *)&v55 + 8);
      }
      core::ptr::drop_in_place<core::iter::adapters::map::Map<alloc::vec::into_iter::IntoIter<uu_sort::merge::ClosedPlainTmpFile>,alloc::boxed::Box<dyn core::ops::function::FnMut<(uu_sort::merge::ClosedPlainTmpFile,)>+Output = core::result::Result<uu_sort::merge::PlainTmpMergeInput,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>>(&v68);
      core::ptr::drop_in_place<alloc::vec::Vec<std::sync::mpsc::Receiver<uu_sort::chunks::Chunk>>>(&v52);
      core::ptr::drop_in_place<alloc::vec::Vec<core::option::Option<uu_sort::merge::ReaderFile<uu_sort::merge::PlainTmpMergeInput>>>>(&v50);
      if ( (_QWORD)v58 )
      {
        if ( (_QWORD)v58 == 1LL )
          std::sync::mpmc::counter::Receiver<C>::release((char *)&v58 + 8);
        else
          std::sync::mpmc::counter::Receiver<C>::release((char *)&v58 + 8);
      }
      else
      {
        std::sync::mpmc::counter::Receiver<C>::release((char *)&v58 + 8);
      }
      if ( (_QWORD)v49 )
      {
        if ( (_QWORD)v49 == 1LL )
          std::sync::mpmc::counter::Sender<C>::release((char *)&v49 + 8);
        else
          std::sync::mpmc::counter::Sender<C>::release((char *)&v49 + 8);
        return v48;
      }
      else
      {
        std::sync::mpmc::counter::Sender<C>::release((char *)&v49 + 8);
        return v48;
      }
    }
    v77 = v55;
    *(_QWORD *)&v78 = v15;
    *((_QWORD *)&v78 + 1) = *(_QWORD *)v87;
    v79 = *(_OWORD *)&v87[8];
    *(_QWORD *)&v80 = 0LL;
    *((_QWORD *)&v80 + 1) = 1LL;
    v81 = 0LL;
    v21 = v51;
    if ( v51 == (_QWORD)v50 )
      alloc::raw_vec::RawVec<T,A>::grow_one(&v50, *((_QWORD *)&v55 + 1), *(_QWORD *)&v87[16], *(_QWORD *)v87);
    v22 = *((_QWORD *)&v50 + 1);
    v23 = 9 * v21;
    v24 = v77;
    v25 = v78;
    v26 = v79;
    v27 = v80;
    *(_QWORD *)(*((_QWORD *)&v50 + 1) + 8 * v23 + 64) = v81;
    *(_OWORD *)(v22 + 8 * v23 + 48) = v27;
    *(_OWORD *)(v22 + 8 * v23 + 32) = v26;
    *(_OWORD *)(v22 + 8 * v23 + 16) = v25;
    *(_OWORD *)(v22 + 8 * v23) = v24;
    v51 = v21 + 1;
    uu_sort::chunks::RecycledChunk::new(v94, 0x2000LL);
    v10 = v17;
    v102 = v16;
    v110 = v95;
    v109 = v94[6];
    v108 = v94[5];
    v107 = v94[4];
    v106 = v94[3];
    v105 = v94[2];
    v104 = v94[1];
    v103 = v94[0];
    std::sync::mpmc::Sender<T>::send(v92, &v49, &v102);
    if ( *((_QWORD *)&v92[0] + 1) != 0x8000000000000000LL )
    {
      v90[7] = v92[7];
      v90[6] = v92[6];
      v90[5] = v92[5];
      v90[4] = v92[4];
      v90[3] = v92[3];
      v90[2] = v92[2];
      v90[1] = v92[1];
      v90[0] = v92[0];
      core::result::unwrap_failed(aCalledResultUn_6, 43LL, v90, &off_1D4AD8, &off_1D4D18);
    }
  }
  core::ptr::drop_in_place<core::iter::adapters::map::Map<alloc::vec::into_iter::IntoIter<uu_sort::merge::ClosedPlainTmpFile>,alloc::boxed::Box<dyn core::ops::function::FnMut<(uu_sort::merge::ClosedPlainTmpFile,)>+Output = core::result::Result<uu_sort::merge::PlainTmpMergeInput,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>>(&v68);
  v28 = v51;
  for ( i = 0LL; v28 != i; ++i )
  {
    uu_sort::chunks::RecycledChunk::new(v96, 0x2000LL);
    v111 = i;
    v119 = v97;
    v118 = v96[6];
    v117 = v96[5];
    v116 = v96[4];
    v115 = v96[3];
    v114 = v96[2];
    v113 = v96[1];
    v112 = v96[0];
    std::sync::mpmc::Sender<T>::send(v93, &v49, &v111);
    if ( *((_QWORD *)&v93[0] + 1) != 0x8000000000000000LL )
    {
      v91[7] = v93[7];
      v91[6] = v93[6];
      v91[5] = v93[5];
      v91[4] = v93[4];
      v91[3] = v93[3];
      v91[2] = v93[2];
      v91[1] = v93[1];
      v91[0] = v93[0];
      core::result::unwrap_failed(aCalledResultUn_6, 43LL, v91, &off_1D4AD8, &off_1D4D00);
    }
  }
  <uu_sort::GlobalSettings as core::clone::Clone>::clone(src, v59);
  v99[0] = v58;
  v99[1] = v50;
  v100 = v51;
  memcpy(dest, src, sizeof(dest));
  v47.m256i_i64[2] = 0x8000000000000000LL;
  v47.m256i_i64[0] = 0LL;
  std::thread::Builder::spawn_unchecked_(v61, &v47, v99, 0LL);
  if ( !*(_QWORD *)v61 )
  {
    *(_QWORD *)v61 = *(_QWORD *)&v61[8];
    core::result::unwrap_failed(
      "failed to spawn threadmain",
      22LL,
      v61,
      &anon_fe38f741e54badf7015918e7aa68e0c9_11_llvm_9495795450009312203,
      &anon_e73ee028dc74ef313b0965e1e543fc57_5_llvm_12031147188011335587);
  }
  v75 = *(_OWORD *)v61;
  v76 = *(_QWORD *)&v61[16];
  *(_QWORD *)&v56 = 0LL;
  *((_QWORD *)&v56 + 1) = 8LL;
  v57 = 0LL;
  v30 = (__int64 *)*((_QWORD *)&v52 + 1);
  v31 = v53;
  v63 = *((_QWORD *)&v52 + 1);
  v64 = (__int64 *)*((_QWORD *)&v52 + 1);
  v65 = v52;
  v66 = *((_QWORD *)&v52 + 1) + 16 * v53;
  v67 = 0LL;
  if ( v53 )
  {
    do
    {
      v64 = v30 + 2;
      v36 = *v30;
      if ( *v30 == 3 )
        break;
      v37 = v30[1];
      v47.m256i_i64[0] = *v30;
      v47.m256i_i64[1] = v37;
      v38 = v67;
      if ( v67 == -1 )
        core::panicking::panic_const::panic_const_add_overflow(
          &anon_63ca0f90b115037567b298c459bc5907_6_llvm_5466747653277509712,
          v37,
          v31,
          v36);
      ++v67;
      *(_QWORD *)&v60 = v36;
      *((_QWORD *)&v60 + 1) = v37;
      if ( v36 )
      {
        if ( v36 == 1 )
          std::sync::mpmc::list::Channel<T>::recv(&v47, v37, v31, 1000000000LL);
        else
          std::sync::mpmc::zero::Channel<T>::recv(&v47, v37, v31, 1000000000LL);
      }
      else
      {
        std::sync::mpmc::array::Channel<T>::recv(&v47, v37, v31, 1000000000LL);
      }
      if ( (v47.m256i_i8[0] & 1) != 0 || (v39 = v47.m256i_i64[1]) == 0 )
      {
        if ( (_QWORD)v60 )
        {
          if ( (_QWORD)v60 == 1LL )
            std::sync::mpmc::counter::Receiver<C>::release((char *)&v60 + 8);
          else
            std::sync::mpmc::counter::Receiver<C>::release((char *)&v60 + 8);
        }
        else
        {
          std::sync::mpmc::counter::Receiver<C>::release((char *)&v60 + 8);
        }
      }
      else
      {
        v47.m256i_i64[0] = 1LL;
        v47.m256i_i64[1] = 1LL;
        v47.m256i_i64[2] = v39;
        v40 = alloc::alloc::Global::alloc_impl(1LL, 8LL, 24LL, 0LL);
        if ( !v40 )
          alloc::alloc::handle_alloc_error(8LL, 24LL);
        *(_QWORD *)(v40 + 16) = v47.m256i_i64[2];
        *(_OWORD *)v40 = *(_OWORD *)v47.m256i_i8;
        v83 = (unsigned __int64)v40;
        v82 = v60;
        v84 = v38;
        v41 = v57;
        if ( v57 == (_QWORD)v56 )
          alloc::raw_vec::RawVec<T,A>::grow_one(&v56);
        v32 = *((_QWORD *)&v56 + 1);
        v33 = 5 * v41;
        v34 = v82;
        v35 = v83;
        v31 = v84;
        *(_QWORD *)(*((_QWORD *)&v56 + 1) + 8 * v33 + 32) = v84;
        *(_OWORD *)(v32 + 8 * v33 + 16) = v35;
        *(_OWORD *)(v32 + 8 * v33) = v34;
        v57 = v41 + 1;
      }
      v30 = v64;
    }
    while ( v64 != (__int64 *)v66 );
  }
  <alloc::vec::into_iter::IntoIter<T,A> as core::ops::drop::Drop>::drop(&v63);
  v42 = v57;
  v47.m256i_i64[2] = v57;
  *(_OWORD *)v47.m256i_i8 = v56;
  v47.m256i_i64[3] = v59;
  if ( v57 >= 2 )
  {
    v43 = (v57 >> 1) - 1;
    do
    {
      binary_heap_plus::binary_heap::BinaryHeap<T,C>::sift_down_range(&v47, v43, v42);
      v4 = v43-- != 0;
    }
    while ( v4 );
  }
  v85 = v47;
  result = v48;
  *(_OWORD *)v48 = v49;
  v45 = *(_OWORD *)&v85.m256i_u64[2];
  *((_OWORD *)result + 1) = *(_OWORD *)v85.m256i_i8;
  *((_OWORD *)result + 2) = v45;
  *((_OWORD *)result + 3) = v75;
  result[8] = v76;
  result[9] = 0LL;
  return result;
}
