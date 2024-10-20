_QWORD *__fastcall uu_sort::merge::merge_without_limit(_QWORD *a1, _OWORD *a2, __int64 a3)
{
  __int128 *v3; // rsi
  __int64 v4; // rdx
  unsigned __int64 v5; // rcx
  __int128 v6; // xmm1
  __int128 v7; // xmm2
  __int128 v8; // xmm3
  __int64 *v9; // rbx
  __int64 v10; // r15
  __int64 v11; // rbp
  __int64 v12; // r15
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm2
  __int64 *v16; // r13
  __int128 v17; // kr00_16
  __int64 v18; // rbx
  __int64 v19; // rax
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int64 v22; // rbp
  __int64 v23; // rax
  __int64 v24; // rcx
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int128 v27; // xmm2
  __int128 v28; // xmm3
  __int128 v29; // xmm4
  __int128 v30; // xmm5
  __int128 v31; // xmm6
  _QWORD *v32; // rax
  unsigned __int64 v33; // rdx
  __int64 v34; // r13
  __int64 i; // rbx
  __int64 *v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rax
  __int64 v39; // rcx
  __int128 v40; // xmm0
  __int128 v41; // xmm1
  __int64 v42; // rcx
  __int64 v43; // rsi
  __int64 v44; // r12
  __int64 v45; // rax
  __int64 v46; // rax
  unsigned __int64 v47; // r12
  unsigned __int64 v48; // rbx
  __int64 v49; // r14
  _QWORD *v51; // rdx
  __int128 v52; // kr10_16
  _QWORD *v53; // rdx
  _QWORD *v54; // rax
  unsigned __int64 v55; // rdx
  __m256i v57; // [rsp+0h] [rbp-8F8h] BYREF
  __int128 v58; // [rsp+20h] [rbp-8D8h]
  __int128 v59; // [rsp+30h] [rbp-8C8h]
  __int128 v60; // [rsp+40h] [rbp-8B8h]
  __int128 v61; // [rsp+58h] [rbp-8A0h] BYREF
  __int128 v62; // [rsp+68h] [rbp-890h] BYREF
  __int64 v63; // [rsp+78h] [rbp-880h]
  __int128 v64; // [rsp+80h] [rbp-878h] BYREF
  __int64 v65; // [rsp+90h] [rbp-868h]
  _QWORD *v66; // [rsp+98h] [rbp-860h]
  __int128 v67; // [rsp+A0h] [rbp-858h] BYREF
  __int128 v68; // [rsp+B0h] [rbp-848h] BYREF
  unsigned __int64 v69; // [rsp+C0h] [rbp-838h]
  __int128 v70; // [rsp+C8h] [rbp-830h] BYREF
  _OWORD *v71; // [rsp+D8h] [rbp-820h]
  __int64 v72; // [rsp+E0h] [rbp-818h]
  __int128 v73; // [rsp+E8h] [rbp-810h] BYREF
  __int64 v74; // [rsp+F8h] [rbp-800h] BYREF
  __int64 *v75; // [rsp+100h] [rbp-7F8h]
  __int64 v76; // [rsp+108h] [rbp-7F0h]
  __int64 v77; // [rsp+110h] [rbp-7E8h]
  __int64 v78; // [rsp+118h] [rbp-7E0h]
  __m256i v79; // [rsp+120h] [rbp-7D8h] BYREF
  __int128 v80; // [rsp+140h] [rbp-7B8h]
  __int128 v81; // [rsp+150h] [rbp-7A8h]
  __int128 v82; // [rsp+160h] [rbp-798h]
  __int128 v83; // [rsp+170h] [rbp-788h]
  __int64 v84; // [rsp+180h] [rbp-778h]
  _BYTE v85[80]; // [rsp+190h] [rbp-768h] BYREF
  unsigned __int64 v86; // [rsp+1E8h] [rbp-710h]
  __int128 v87; // [rsp+1F0h] [rbp-708h]
  __int64 v88; // [rsp+200h] [rbp-6F8h]
  __int128 v89; // [rsp+208h] [rbp-6F0h]
  __int128 v90; // [rsp+218h] [rbp-6E0h]
  __int64 v91; // [rsp+228h] [rbp-6D0h]
  __m256i v92; // [rsp+230h] [rbp-6C8h]
  __int128 v93; // [rsp+258h] [rbp-6A0h]
  __int128 v94; // [rsp+268h] [rbp-690h]
  _BYTE v95[64]; // [rsp+278h] [rbp-680h] BYREF
  __int128 v96; // [rsp+2B8h] [rbp-640h]
  __int64 v97; // [rsp+2C8h] [rbp-630h]
  _OWORD v98[8]; // [rsp+2D0h] [rbp-628h] BYREF
  _OWORD v99[8]; // [rsp+350h] [rbp-5A8h] BYREF
  _OWORD v100[8]; // [rsp+3D0h] [rbp-528h] BYREF
  _OWORD v101[13]; // [rsp+450h] [rbp-4A8h] BYREF
  _OWORD v102[7]; // [rsp+520h] [rbp-3D8h] BYREF
  __int64 v103; // [rsp+590h] [rbp-368h]
  _OWORD v104[7]; // [rsp+598h] [rbp-360h] BYREF
  __int64 v105; // [rsp+608h] [rbp-2F0h]
  __int64 v106; // [rsp+610h] [rbp-2E8h]
  __int64 v107; // [rsp+618h] [rbp-2E0h] BYREF
  __int64 v108; // [rsp+620h] [rbp-2D8h]
  _OWORD v109[2]; // [rsp+660h] [rbp-298h] BYREF
  __int64 v110; // [rsp+680h] [rbp-278h]
  _BYTE dest[160]; // [rsp+688h] [rbp-270h] BYREF
  __int64 v112; // [rsp+728h] [rbp-1D0h] BYREF
  __int128 v113; // [rsp+730h] [rbp-1C8h]
  __int128 v114; // [rsp+740h] [rbp-1B8h]
  __int128 v115; // [rsp+750h] [rbp-1A8h]
  __int128 v116; // [rsp+760h] [rbp-198h]
  __int128 v117; // [rsp+770h] [rbp-188h]
  __int128 v118; // [rsp+780h] [rbp-178h]
  __int128 v119; // [rsp+790h] [rbp-168h]
  __int64 v120; // [rsp+7A0h] [rbp-158h]
  __int64 v121; // [rsp+7A8h] [rbp-150h] BYREF
  __int128 v122; // [rsp+7B0h] [rbp-148h]
  __int128 v123; // [rsp+7C0h] [rbp-138h]
  __int128 v124; // [rsp+7D0h] [rbp-128h]
  __int128 v125; // [rsp+7E0h] [rbp-118h]
  __int128 v126; // [rsp+7F0h] [rbp-108h]
  __int128 v127; // [rsp+800h] [rbp-F8h]
  __int128 v128; // [rsp+810h] [rbp-E8h]
  __int64 v129; // [rsp+820h] [rbp-D8h]
  _BYTE src[208]; // [rsp+828h] [rbp-D0h] BYREF

  v72 = a3;
  v71 = a2;
  v66 = a1;
  std::sync::mpmc::channel(&v57);
  v61 = *(_OWORD *)v57.m256i_i8;
  v70 = *(_OWORD *)&v57.m256i_u64[2];
  alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v57, 0LL, 0LL);
  if ( v57.m256i_i64[0] )
    alloc::raw_vec::handle_error(v57.m256i_i64[1], v57.m256i_i64[2]);
  v62 = *(_OWORD *)&v57.m256i_u64[1];
  v63 = 0LL;
  v3 = 0LL;
  alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v57, 0LL, 0LL);
  if ( v57.m256i_i64[0] )
    alloc::raw_vec::handle_error(v57.m256i_i64[1], v57.m256i_i64[2]);
  v5 = 0x8000000000000000LL;
  v64 = *(_OWORD *)&v57.m256i_u64[1];
  v65 = 0LL;
  v6 = v71[1];
  v7 = v71[2];
  v8 = v71[3];
  *(_OWORD *)v79.m256i_i8 = *v71;
  *(_OWORD *)&v79.m256i_u64[2] = v6;
  v80 = v7;
  v81 = v8;
  v82 = v71[4];
  v83 = v71[5];
  v84 = 0LL;
  v9 = &v107;
  v10 = 0x8000000000000001LL;
  v86 = 0x8000000000000001LL;
  while ( 1 )
  {
    v57 = v79;
    v60 = v82;
    v59 = v81;
    v58 = v80;
    v79.m256i_i64[0] = v10;
    if ( v57.m256i_i64[0] == v10 )
    {
      core::ptr::drop_in_place<core::option::Option<core::result::Result<uu_sort::merge::CompressedTmpMergeInput,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>(&v57);
      v3 = (__int128 *)v83;
      itertools::groupbylazy::IntoChunks<I>::step(v85, v83, *((_QWORD *)&v83 + 1));
    }
    else
    {
      *(_OWORD *)&v85[64] = v60;
      *(_OWORD *)&v85[48] = v59;
      *(_OWORD *)&v85[32] = v58;
      *(__m256i *)v85 = v57;
    }
    v11 = *(_QWORD *)v85;
    if ( *(_QWORD *)v85 == v10 )
      break;
    v101[12] = *(_OWORD *)&v85[64];
    v101[11] = *(_OWORD *)&v85[48];
    v101[10] = *(_OWORD *)&v85[32];
    v101[9] = *(_OWORD *)&v85[16];
    v101[8] = *(_OWORD *)v85;
    v12 = v84;
    if ( v84 == -1 )
      core::panicking::panic_const::panic_const_add_overflow(
        &anon_63ca0f90b115037567b298c459bc5907_6_llvm_5466747653277509712,
        v3,
        v4,
        v5);
    ++v84;
    v9[8] = *(_QWORD *)&v85[72];
    v13 = *(_OWORD *)&v85[8];
    v14 = *(_OWORD *)&v85[24];
    v15 = *(_OWORD *)&v85[40];
    *((_OWORD *)v9 + 3) = *(_OWORD *)&v85[56];
    *((_OWORD *)v9 + 2) = v15;
    *((_OWORD *)v9 + 1) = v14;
    v16 = v9;
    *(_OWORD *)v9 = v13;
    v106 = v11;
    std::sync::mpmc::sync_channel(&v57, 2LL);
    v17 = *(_OWORD *)&v57.m256i_u64[2];
    v67 = *(_OWORD *)v57.m256i_i8;
    *(_OWORD *)v57.m256i_i8 = *(_OWORD *)&v57.m256i_u64[2];
    v18 = v65;
    if ( v65 == (_QWORD)v64 )
      alloc::raw_vec::RawVec<T,A>::grow_one(&v64);
    *(_OWORD *)(*((_QWORD *)&v64 + 1) + 16 * v18) = v17;
    v65 = v18 + 1;
    v19 = v108;
    if ( v11 == 0x8000000000000000LL )
    {
      v53 = v66;
      v66[1] = v107;
      v53[2] = v19;
      *v53 = 3LL;
      if ( (_QWORD)v67 )
      {
        if ( (_QWORD)v67 == 1LL )
          std::sync::mpmc::counter::Sender<C>::release((char *)&v67 + 8);
        else
          std::sync::mpmc::counter::Sender<C>::release((char *)&v67 + 8);
      }
      else
      {
        std::sync::mpmc::counter::Sender<C>::release((char *)&v67 + 8);
      }
      v54 = (_QWORD *)v83;
      if ( *(_QWORD *)v83 )
        core::cell::panic_already_borrowed(&anon_106514630be1c9ef1de9e84b8238e531_28_llvm_16179947721019886102);
      v55 = *(_QWORD *)(v83 + 224);
      if ( v55 == -1LL || v55 < *((_QWORD *)&v83 + 1) )
        *(_QWORD *)(v83 + 224) = *((_QWORD *)&v83 + 1);
      *v54 = 0LL;
      core::ptr::drop_in_place<core::option::Option<core::result::Result<uu_sort::merge::CompressedTmpMergeInput,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>(&v79);
      core::ptr::drop_in_place<alloc::vec::Vec<std::sync::mpsc::Receiver<uu_sort::chunks::Chunk>>>(&v64);
      core::ptr::drop_in_place<alloc::vec::Vec<core::option::Option<uu_sort::merge::ReaderFile<uu_sort::merge::CompressedTmpMergeInput>>>>(&v62);
      if ( (_QWORD)v70 )
      {
        if ( (_QWORD)v70 == 1LL )
          std::sync::mpmc::counter::Receiver<C>::release((char *)&v70 + 8);
        else
          std::sync::mpmc::counter::Receiver<C>::release((char *)&v70 + 8);
      }
      else
      {
        std::sync::mpmc::counter::Receiver<C>::release((char *)&v70 + 8);
      }
      if ( (_QWORD)v61 )
      {
        if ( (_QWORD)v61 == 1LL )
          std::sync::mpmc::counter::Sender<C>::release((char *)&v61 + 8);
        else
          std::sync::mpmc::counter::Sender<C>::release((char *)&v61 + 8);
      }
      else
      {
        std::sync::mpmc::counter::Sender<C>::release((char *)&v61 + 8);
      }
      return v66;
    }
    v9 = v16;
    *(_QWORD *)&v95[56] = v16[8];
    v20 = *((_OWORD *)v16 + 1);
    v21 = *((_OWORD *)v16 + 2);
    *(_OWORD *)&v95[40] = *((_OWORD *)v16 + 3);
    *(_OWORD *)&v95[24] = v21;
    *(_OWORD *)&v95[8] = v20;
    v93 = v67;
    *(_QWORD *)&v94 = v11;
    *((_QWORD *)&v94 + 1) = v107;
    *(_QWORD *)v95 = v108;
    *(_QWORD *)&v96 = 0LL;
    *((_QWORD *)&v96 + 1) = 1LL;
    v97 = 0LL;
    v22 = v63;
    if ( v63 == (_QWORD)v62 )
      alloc::raw_vec::RawVec<T,A>::grow_one(&v62, &v95[8], *((_QWORD *)&v67 + 1), v107);
    v23 = *((_QWORD *)&v62 + 1);
    v24 = 120 * v22;
    v25 = v93;
    v26 = v94;
    v27 = *(_OWORD *)v95;
    v28 = *(_OWORD *)&v95[16];
    v29 = *(_OWORD *)&v95[32];
    v30 = *(_OWORD *)&v95[48];
    v31 = v96;
    *(_QWORD *)(*((_QWORD *)&v62 + 1) + v24 + 112) = v97;
    *(_OWORD *)(v23 + v24 + 96) = v31;
    *(_OWORD *)(v23 + v24 + 80) = v30;
    *(_OWORD *)(v23 + v24 + 64) = v29;
    *(_OWORD *)(v23 + v24 + 48) = v28;
    *(_OWORD *)(v23 + v24 + 32) = v27;
    *(_OWORD *)(v23 + v24 + 16) = v26;
    *(_OWORD *)(v23 + v24) = v25;
    v63 = v22 + 1;
    uu_sort::chunks::RecycledChunk::new(v102, 0x2000LL);
    v112 = v12;
    v120 = v103;
    v119 = v102[6];
    v118 = v102[5];
    v117 = v102[4];
    v116 = v102[3];
    v115 = v102[2];
    v114 = v102[1];
    v113 = v102[0];
    v3 = &v61;
    std::sync::mpmc::Sender<T>::send(v100, &v61, &v112);
    v10 = v86;
    if ( *((_QWORD *)&v100[0] + 1) != 0x8000000000000000LL )
    {
      v98[7] = v100[7];
      v98[6] = v100[6];
      v98[5] = v100[5];
      v98[4] = v100[4];
      v98[3] = v100[3];
      v98[2] = v100[2];
      v98[1] = v100[1];
      v98[0] = v100[0];
      core::result::unwrap_failed(aCalledResultUn_6, 43LL, v98, &off_1D4AD8, &off_1D4D18);
    }
  }
  v32 = (_QWORD *)v83;
  if ( *(_QWORD *)v83 )
    core::cell::panic_already_borrowed(&anon_106514630be1c9ef1de9e84b8238e531_28_llvm_16179947721019886102);
  v33 = *(_QWORD *)(v83 + 224);
  if ( v33 == -1LL || v33 < *((_QWORD *)&v83 + 1) )
    *(_QWORD *)(v83 + 224) = *((_QWORD *)&v83 + 1);
  *v32 = 0LL;
  core::ptr::drop_in_place<core::option::Option<core::result::Result<uu_sort::merge::CompressedTmpMergeInput,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>(&v79);
  v34 = v63;
  for ( i = 0LL; v34 != i; ++i )
  {
    uu_sort::chunks::RecycledChunk::new(v104, 0x2000LL);
    v121 = i;
    v129 = v105;
    v128 = v104[6];
    v127 = v104[5];
    v126 = v104[4];
    v125 = v104[3];
    v124 = v104[2];
    v123 = v104[1];
    v122 = v104[0];
    std::sync::mpmc::Sender<T>::send(v101, &v61, &v121);
    if ( *((_QWORD *)&v101[0] + 1) != 0x8000000000000000LL )
    {
      v99[7] = v101[7];
      v99[6] = v101[6];
      v99[5] = v101[5];
      v99[4] = v101[4];
      v99[3] = v101[3];
      v99[2] = v101[2];
      v99[1] = v101[1];
      v99[0] = v101[0];
      core::result::unwrap_failed(aCalledResultUn_6, 43LL, v99, &off_1D4AD8, &off_1D4D00);
    }
  }
  <uu_sort::GlobalSettings as core::clone::Clone>::clone(src, v72);
  v109[0] = v70;
  v109[1] = v62;
  v110 = v63;
  memcpy(dest, src, sizeof(dest));
  v57.m256i_i64[2] = 0x8000000000000000LL;
  v57.m256i_i64[0] = 0LL;
  std::thread::Builder::spawn_unchecked_(v85, &v57, v109, 0LL);
  if ( !*(_QWORD *)v85 )
  {
    *(_QWORD *)v85 = *(_QWORD *)&v85[8];
    core::result::unwrap_failed(
      "failed to spawn threadmain",
      22LL,
      v85,
      &anon_fe38f741e54badf7015918e7aa68e0c9_11_llvm_9495795450009312203,
      &anon_e73ee028dc74ef313b0965e1e543fc57_5_llvm_12031147188011335587);
  }
  v87 = *(_OWORD *)v85;
  v88 = *(_QWORD *)&v85[16];
  *(_QWORD *)&v68 = 0LL;
  *((_QWORD *)&v68 + 1) = 8LL;
  v69 = 0LL;
  v36 = (__int64 *)*((_QWORD *)&v64 + 1);
  v37 = v65;
  v74 = *((_QWORD *)&v64 + 1);
  v75 = (__int64 *)*((_QWORD *)&v64 + 1);
  v76 = v64;
  v77 = *((_QWORD *)&v64 + 1) + 16 * v65;
  v78 = 0LL;
  if ( v65 )
  {
    do
    {
      v75 = v36 + 2;
      v42 = *v36;
      if ( *v36 == 3 )
        break;
      v43 = v36[1];
      v57.m256i_i64[0] = *v36;
      v57.m256i_i64[1] = v43;
      v44 = v78;
      if ( v78 == -1 )
        core::panicking::panic_const::panic_const_add_overflow(
          &anon_63ca0f90b115037567b298c459bc5907_6_llvm_5466747653277509712,
          v43,
          v37,
          v42);
      ++v78;
      *(_QWORD *)&v73 = v42;
      *((_QWORD *)&v73 + 1) = v43;
      if ( v42 )
      {
        if ( v42 == 1 )
          std::sync::mpmc::list::Channel<T>::recv(&v57, v43, v37, 1000000000LL);
        else
          std::sync::mpmc::zero::Channel<T>::recv(&v57, v43, v37, 1000000000LL);
      }
      else
      {
        std::sync::mpmc::array::Channel<T>::recv(&v57, v43, v37, 1000000000LL);
      }
      if ( (v57.m256i_i8[0] & 1) != 0 || (v45 = v57.m256i_i64[1]) == 0 )
      {
        if ( (_QWORD)v73 )
        {
          if ( (_QWORD)v73 == 1LL )
            std::sync::mpmc::counter::Receiver<C>::release((char *)&v73 + 8);
          else
            std::sync::mpmc::counter::Receiver<C>::release((char *)&v73 + 8);
        }
        else
        {
          std::sync::mpmc::counter::Receiver<C>::release((char *)&v73 + 8);
        }
      }
      else
      {
        v57.m256i_i64[0] = 1LL;
        v57.m256i_i64[1] = 1LL;
        v57.m256i_i64[2] = v45;
        v46 = alloc::alloc::Global::alloc_impl(1LL, 8LL, 24LL, 0LL);
        if ( !v46 )
          alloc::alloc::handle_alloc_error(8LL, 24LL);
        *(_QWORD *)(v46 + 16) = v57.m256i_i64[2];
        *(_OWORD *)v46 = *(_OWORD *)v57.m256i_i8;
        v90 = (unsigned __int64)v46;
        v89 = v73;
        v91 = v44;
        v47 = v69;
        if ( v69 == (_QWORD)v68 )
          alloc::raw_vec::RawVec<T,A>::grow_one(&v68);
        v38 = *((_QWORD *)&v68 + 1);
        v39 = 5 * v47;
        v40 = v89;
        v41 = v90;
        v37 = v91;
        *(_QWORD *)(*((_QWORD *)&v68 + 1) + 8 * v39 + 32) = v91;
        *(_OWORD *)(v38 + 8 * v39 + 16) = v41;
        *(_OWORD *)(v38 + 8 * v39) = v40;
        v69 = v47 + 1;
      }
      v36 = v75;
    }
    while ( v75 != (__int64 *)v77 );
  }
  <alloc::vec::into_iter::IntoIter<T,A> as core::ops::drop::Drop>::drop(&v74);
  v48 = v69;
  v57.m256i_i64[2] = v69;
  *(_OWORD *)v57.m256i_i8 = v68;
  v57.m256i_i64[3] = v72;
  if ( v69 >= 2 )
  {
    v49 = (v69 >> 1) - 1;
    do
      binary_heap_plus::binary_heap::BinaryHeap<T,C>::sift_down_range(&v57, v49, v48);
    while ( v49-- != 0 );
  }
  v92 = v57;
  v51 = v66;
  *(_OWORD *)v66 = v61;
  v52 = *(_OWORD *)&v92.m256i_u64[2];
  *((_OWORD *)v51 + 1) = *(_OWORD *)v92.m256i_i8;
  *((_OWORD *)v51 + 2) = v52;
  *((_OWORD *)v51 + 3) = v87;
  v51[8] = v88;
  v51[9] = 0LL;
  return v66;
}
