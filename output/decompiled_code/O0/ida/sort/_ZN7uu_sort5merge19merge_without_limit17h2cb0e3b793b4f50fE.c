_QWORD *__fastcall uu_sort::merge::merge_without_limit(_QWORD *a1, __int128 *a2, __int64 a3)
{
  unsigned __int64 v3; // rax
  bool v4; // cf
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rax
  __int128 v8; // xmm1
  __int128 v9; // xmm2
  __int64 *v10; // rax
  __int64 v11; // rcx
  __int128 v12; // xmm0
  __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rbp
  __int64 v16; // r13
  __int128 v17; // kr00_16
  __int64 v18; // r15
  __int64 v19; // rax
  __int64 v20; // rbp
  __int64 v21; // rax
  __int64 v22; // rcx
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm2
  __int128 v26; // xmm3
  __int128 v27; // xmm4
  __int128 v28; // xmm5
  __int128 v29; // xmm6
  __int64 v30; // r13
  __int64 i; // rbx
  __int64 *v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rax
  __int64 v35; // rcx
  __int128 v36; // xmm0
  __int128 v37; // xmm1
  __int64 v38; // rcx
  __int64 v39; // rsi
  __int64 v40; // r12
  __int64 v41; // rax
  __int64 v42; // rax
  unsigned __int64 v43; // r12
  unsigned __int64 v44; // rbx
  _QWORD *v45; // r12
  __int64 v46; // r14
  __int128 v47; // kr10_16
  _QWORD *v49; // rdx
  _BYTE v50[40]; // [rsp+0h] [rbp-918h] BYREF
  __int128 v51; // [rsp+28h] [rbp-8F0h]
  __int128 v52; // [rsp+38h] [rbp-8E0h]
  __int64 v53; // [rsp+48h] [rbp-8D0h]
  __int128 v54; // [rsp+58h] [rbp-8C0h] BYREF
  __int128 v55; // [rsp+68h] [rbp-8B0h] BYREF
  __int64 v56; // [rsp+78h] [rbp-8A0h]
  __int64 v57; // [rsp+80h] [rbp-898h] BYREF
  __int64 *v58; // [rsp+88h] [rbp-890h]
  __int64 v59; // [rsp+90h] [rbp-888h]
  _QWORD *v60; // [rsp+98h] [rbp-880h]
  __int128 *v61; // [rsp+A0h] [rbp-878h]
  __int128 v62; // [rsp+A8h] [rbp-870h] BYREF
  __int128 v63; // [rsp+B8h] [rbp-860h] BYREF
  unsigned __int64 v64; // [rsp+C8h] [rbp-850h]
  __int128 v65; // [rsp+D0h] [rbp-848h] BYREF
  __int64 v66; // [rsp+E0h] [rbp-838h]
  __int128 v67; // [rsp+E8h] [rbp-830h] BYREF
  __int64 *v68; // [rsp+F8h] [rbp-820h] BYREF
  __int64 *v69; // [rsp+100h] [rbp-818h]
  __int64 v70; // [rsp+108h] [rbp-810h]
  __int64 *v71; // [rsp+110h] [rbp-808h]
  __int64 v72; // [rsp+118h] [rbp-800h]
  __int128 v73; // [rsp+120h] [rbp-7F8h] BYREF
  __int128 v74; // [rsp+130h] [rbp-7E8h]
  __int128 v75; // [rsp+140h] [rbp-7D8h]
  __int64 v76; // [rsp+150h] [rbp-7C8h]
  unsigned __int64 v77; // [rsp+160h] [rbp-7B8h]
  __int128 v78; // [rsp+168h] [rbp-7B0h]
  __int64 v79; // [rsp+178h] [rbp-7A0h]
  __int128 v80; // [rsp+180h] [rbp-798h]
  __int128 v81; // [rsp+190h] [rbp-788h]
  __int128 v82; // [rsp+1A0h] [rbp-778h]
  __int128 v83; // [rsp+1B0h] [rbp-768h]
  __int64 v84; // [rsp+1C0h] [rbp-758h]
  __int128 v85; // [rsp+1C8h] [rbp-750h]
  __int128 v86; // [rsp+1D8h] [rbp-740h]
  __int64 v87; // [rsp+1E8h] [rbp-730h]
  __int128 v88; // [rsp+1F0h] [rbp-728h]
  __int128 v89; // [rsp+200h] [rbp-718h]
  __int128 v90; // [rsp+218h] [rbp-700h]
  _BYTE v91[80]; // [rsp+228h] [rbp-6F0h] BYREF
  __int128 v92; // [rsp+278h] [rbp-6A0h]
  __int64 v93; // [rsp+288h] [rbp-690h]
  _BYTE v94[24]; // [rsp+290h] [rbp-688h] BYREF
  __int128 v95; // [rsp+2A8h] [rbp-670h]
  __int128 v96; // [rsp+2B8h] [rbp-660h]
  __int128 v97; // [rsp+2C8h] [rbp-650h]
  __int64 v98; // [rsp+2D8h] [rbp-640h]
  _OWORD v99[8]; // [rsp+2E0h] [rbp-638h] BYREF
  _OWORD v100[8]; // [rsp+360h] [rbp-5B8h] BYREF
  _OWORD v101[8]; // [rsp+3E0h] [rbp-538h] BYREF
  _OWORD v102[9]; // [rsp+460h] [rbp-4B8h] BYREF
  __int128 v103; // [rsp+4F0h] [rbp-428h]
  __int64 v104; // [rsp+500h] [rbp-418h]
  __int64 v105; // [rsp+510h] [rbp-408h]
  __int128 v106; // [rsp+518h] [rbp-400h]
  __int128 v107; // [rsp+528h] [rbp-3F0h]
  __int128 v108; // [rsp+538h] [rbp-3E0h]
  __int128 v109; // [rsp+548h] [rbp-3D0h]
  __int64 v110; // [rsp+558h] [rbp-3C0h]
  _OWORD v111[7]; // [rsp+560h] [rbp-3B8h] BYREF
  __int64 v112; // [rsp+5D0h] [rbp-348h]
  _OWORD v113[7]; // [rsp+5D8h] [rbp-340h] BYREF
  __int64 v114; // [rsp+648h] [rbp-2D0h]
  __int64 v115; // [rsp+650h] [rbp-2C8h] BYREF
  __int128 v116; // [rsp+658h] [rbp-2C0h]
  __int128 v117; // [rsp+668h] [rbp-2B0h]
  __int64 v118; // [rsp+678h] [rbp-2A0h]
  _OWORD v119[2]; // [rsp+680h] [rbp-298h] BYREF
  __int64 v120; // [rsp+6A0h] [rbp-278h]
  _BYTE dest[160]; // [rsp+6A8h] [rbp-270h] BYREF
  __int64 v122; // [rsp+748h] [rbp-1D0h] BYREF
  __int128 v123; // [rsp+750h] [rbp-1C8h]
  __int128 v124; // [rsp+760h] [rbp-1B8h]
  __int128 v125; // [rsp+770h] [rbp-1A8h]
  __int128 v126; // [rsp+780h] [rbp-198h]
  __int128 v127; // [rsp+790h] [rbp-188h]
  __int128 v128; // [rsp+7A0h] [rbp-178h]
  __int128 v129; // [rsp+7B0h] [rbp-168h]
  __int64 v130; // [rsp+7C0h] [rbp-158h]
  __int64 v131; // [rsp+7C8h] [rbp-150h] BYREF
  __int128 v132; // [rsp+7D0h] [rbp-148h]
  __int128 v133; // [rsp+7E0h] [rbp-138h]
  __int128 v134; // [rsp+7F0h] [rbp-128h]
  __int128 v135; // [rsp+800h] [rbp-118h]
  __int128 v136; // [rsp+810h] [rbp-108h]
  __int128 v137; // [rsp+820h] [rbp-F8h]
  __int128 v138; // [rsp+830h] [rbp-E8h]
  __int64 v139; // [rsp+840h] [rbp-D8h]
  _BYTE src[208]; // [rsp+848h] [rbp-D0h] BYREF

  v66 = a3;
  v61 = a2;
  std::sync::mpmc::channel(v50);
  v54 = *(_OWORD *)v50;
  v65 = *(_OWORD *)&v50[16];
  v3 = *((_QWORD *)a2 + 3);
  v4 = v3 < *((_QWORD *)a2 + 1);
  v5 = v3 - *((_QWORD *)a2 + 1);
  if ( v4 )
    goto LABEL_66;
  alloc::raw_vec::RawVec<T,A>::try_allocate_in(v50, v5 / 0x30, 0LL);
  if ( *(_QWORD *)v50 )
    alloc::raw_vec::handle_error(*(_QWORD *)&v50[8], *(_QWORD *)&v50[16]);
  v55 = *(_OWORD *)&v50[8];
  v56 = 0LL;
  v6 = *((_QWORD *)v61 + 3);
  v4 = v6 < *((_QWORD *)v61 + 1);
  v7 = v6 - *((_QWORD *)v61 + 1);
  if ( v4 )
LABEL_66:
    core::panicking::panic_nounwind(anon_ff3add0fc2121d489142e144a6a370f6_24_llvm_5182399808099546885, 71LL);
  alloc::raw_vec::RawVec<T,A>::try_allocate_in(v50, v7 / 0x30, 0LL);
  if ( *(_QWORD *)v50 )
    alloc::raw_vec::handle_error(*(_QWORD *)&v50[8], *(_QWORD *)&v50[16]);
  v57 = *(_QWORD *)&v50[8];
  v58 = *(__int64 **)&v50[16];
  v59 = 0LL;
  v8 = v61[1];
  v9 = v61[2];
  v73 = *v61;
  v74 = v8;
  v75 = v9;
  v76 = 0LL;
  v77 = 0x8000000000000001LL;
  v60 = a1;
  while ( 1 )
  {
    v10 = (__int64 *)*((_QWORD *)&v73 + 1);
    if ( *((_QWORD *)&v73 + 1) == *((_QWORD *)&v74 + 1) )
      break;
    *((_QWORD *)&v73 + 1) += 48LL;
    v11 = *v10;
    if ( *v10 == 0x8000000000000000LL )
      break;
    v104 = v10[5];
    v12 = *(_OWORD *)(v10 + 1);
    v103 = *(_OWORD *)(v10 + 3);
    v102[8] = v12;
    v115 = v11;
    v118 = v104;
    v117 = v103;
    v116 = v12;
    v13 = v75;
    (*(void (__fastcall **)(_BYTE *, _QWORD, __int64 *))(*((_QWORD *)&v75 + 1) + 32LL))(v50, v75, &v115);
    v15 = *(_QWORD *)v50;
    v80 = *(_OWORD *)&v50[8];
    v81 = *(_OWORD *)&v50[24];
    v82 = v51;
    v83 = v52;
    v84 = v53;
    if ( *(_QWORD *)v50 == v77 )
      break;
    v98 = v84;
    v97 = v83;
    v96 = v82;
    v95 = v81;
    *(_OWORD *)&v94[8] = v80;
    *(_QWORD *)v94 = *(_QWORD *)v50;
    v16 = v76;
    if ( v76 == -1 )
      core::panicking::panic_const::panic_const_add_overflow(
        &anon_63ca0f90b115037567b298c459bc5907_6_llvm_5466747653277509712,
        v13,
        v14,
        &v94[8]);
    ++v76;
    v110 = v84;
    v109 = v83;
    v108 = v82;
    v107 = v81;
    v106 = v80;
    v105 = *(_QWORD *)v50;
    std::sync::mpmc::sync_channel(v50, 2LL);
    v17 = *(_OWORD *)&v50[16];
    v62 = *(_OWORD *)v50;
    *(_OWORD *)v50 = *(_OWORD *)&v50[16];
    v18 = v59;
    if ( v59 == v57 )
      alloc::raw_vec::RawVec<T,A>::grow_one(&v57);
    *(_OWORD *)&v58[2 * v18] = v17;
    v59 = v18 + 1;
    v19 = *((_QWORD *)&v106 + 1);
    if ( v15 == 0x8000000000000000LL )
    {
      v49 = v60;
      v60[1] = v106;
      v49[2] = v19;
      *v49 = 3LL;
      if ( (_QWORD)v62 )
      {
        if ( (_QWORD)v62 == 1LL )
          std::sync::mpmc::counter::Sender<C>::release((char *)&v62 + 8);
        else
          std::sync::mpmc::counter::Sender<C>::release((char *)&v62 + 8);
      }
      else
      {
        std::sync::mpmc::counter::Sender<C>::release((char *)&v62 + 8);
      }
      core::ptr::drop_in_place<core::iter::adapters::map::Map<alloc::vec::into_iter::IntoIter<uu_sort::merge::ClosedCompressedTmpFile>,alloc::boxed::Box<dyn core::ops::function::FnMut<(uu_sort::merge::ClosedCompressedTmpFile,)>+Output = core::result::Result<uu_sort::merge::CompressedTmpMergeInput,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>>(&v73);
      core::ptr::drop_in_place<alloc::vec::Vec<std::sync::mpsc::Receiver<uu_sort::chunks::Chunk>>>(&v57);
      v45 = v60;
      core::ptr::drop_in_place<alloc::vec::Vec<core::option::Option<uu_sort::merge::ReaderFile<uu_sort::merge::CompressedTmpMergeInput>>>>(&v55);
      if ( (_QWORD)v65 )
      {
        if ( (_QWORD)v65 == 1LL )
          std::sync::mpmc::counter::Receiver<C>::release((char *)&v65 + 8);
        else
          std::sync::mpmc::counter::Receiver<C>::release((char *)&v65 + 8);
      }
      else
      {
        std::sync::mpmc::counter::Receiver<C>::release((char *)&v65 + 8);
      }
      if ( (_QWORD)v54 )
      {
        if ( (_QWORD)v54 == 1LL )
          std::sync::mpmc::counter::Sender<C>::release((char *)&v54 + 8);
        else
          std::sync::mpmc::counter::Sender<C>::release((char *)&v54 + 8);
      }
      else
      {
        std::sync::mpmc::counter::Sender<C>::release((char *)&v54 + 8);
      }
      return v45;
    }
    *(_QWORD *)&v91[72] = v110;
    *(_OWORD *)&v91[56] = v109;
    *(_OWORD *)&v91[40] = v108;
    *(_OWORD *)&v91[24] = v107;
    v90 = v62;
    *(_QWORD *)v91 = v15;
    *(_OWORD *)&v91[8] = v106;
    *(_QWORD *)&v92 = 0LL;
    *((_QWORD *)&v92 + 1) = 1LL;
    v93 = 0LL;
    v20 = v56;
    if ( v56 == (_QWORD)v55 )
      alloc::raw_vec::RawVec<T,A>::grow_one(&v55, &v91[24], *((_QWORD *)&v62 + 1), v106);
    v21 = *((_QWORD *)&v55 + 1);
    v22 = 120 * v20;
    v23 = v90;
    v24 = *(_OWORD *)v91;
    v25 = *(_OWORD *)&v91[16];
    v26 = *(_OWORD *)&v91[32];
    v27 = *(_OWORD *)&v91[48];
    v28 = *(_OWORD *)&v91[64];
    v29 = v92;
    *(_QWORD *)(*((_QWORD *)&v55 + 1) + v22 + 112) = v93;
    *(_OWORD *)(v21 + v22 + 96) = v29;
    *(_OWORD *)(v21 + v22 + 80) = v28;
    *(_OWORD *)(v21 + v22 + 64) = v27;
    *(_OWORD *)(v21 + v22 + 48) = v26;
    *(_OWORD *)(v21 + v22 + 32) = v25;
    *(_OWORD *)(v21 + v22 + 16) = v24;
    *(_OWORD *)(v21 + v22) = v23;
    v56 = v20 + 1;
    uu_sort::chunks::RecycledChunk::new(v111, 0x2000LL);
    v122 = v16;
    v130 = v112;
    v129 = v111[6];
    v128 = v111[5];
    v127 = v111[4];
    v126 = v111[3];
    v125 = v111[2];
    v124 = v111[1];
    v123 = v111[0];
    std::sync::mpmc::Sender<T>::send(v101, &v54, &v122);
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
      core::result::unwrap_failed(aCalledResultUn_6, 43LL, v99, &off_1D4AD8, &off_1D4D18);
    }
  }
  core::ptr::drop_in_place<core::iter::adapters::map::Map<alloc::vec::into_iter::IntoIter<uu_sort::merge::ClosedCompressedTmpFile>,alloc::boxed::Box<dyn core::ops::function::FnMut<(uu_sort::merge::ClosedCompressedTmpFile,)>+Output = core::result::Result<uu_sort::merge::CompressedTmpMergeInput,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>>(&v73);
  v30 = v56;
  for ( i = 0LL; v30 != i; ++i )
  {
    uu_sort::chunks::RecycledChunk::new(v113, 0x2000LL);
    v131 = i;
    v139 = v114;
    v138 = v113[6];
    v137 = v113[5];
    v136 = v113[4];
    v135 = v113[3];
    v134 = v113[2];
    v133 = v113[1];
    v132 = v113[0];
    std::sync::mpmc::Sender<T>::send(v102, &v54, &v131);
    if ( *((_QWORD *)&v102[0] + 1) != 0x8000000000000000LL )
    {
      v100[7] = v102[7];
      v100[6] = v102[6];
      v100[5] = v102[5];
      v100[4] = v102[4];
      v100[3] = v102[3];
      v100[2] = v102[2];
      v100[1] = v102[1];
      v100[0] = v102[0];
      core::result::unwrap_failed(aCalledResultUn_6, 43LL, v100, &off_1D4AD8, &off_1D4D00);
    }
  }
  <uu_sort::GlobalSettings as core::clone::Clone>::clone(src, v66);
  v119[0] = v65;
  v119[1] = v55;
  v120 = v56;
  memcpy(dest, src, sizeof(dest));
  *(_QWORD *)&v50[16] = 0x8000000000000000LL;
  *(_QWORD *)v50 = 0LL;
  std::thread::Builder::spawn_unchecked_(v94, v50, v119, 0LL);
  if ( !*(_QWORD *)v94 )
  {
    *(_QWORD *)v94 = *(_QWORD *)&v94[8];
    core::result::unwrap_failed(
      "failed to spawn threadmain",
      22LL,
      v94,
      &anon_fe38f741e54badf7015918e7aa68e0c9_11_llvm_9495795450009312203,
      &anon_e73ee028dc74ef313b0965e1e543fc57_5_llvm_12031147188011335587);
  }
  v78 = *(_OWORD *)v94;
  v79 = *(_QWORD *)&v94[16];
  *(_QWORD *)&v63 = 0LL;
  *((_QWORD *)&v63 + 1) = 8LL;
  v64 = 0LL;
  v32 = v58;
  v33 = v59;
  v68 = v58;
  v69 = v58;
  v70 = v57;
  v71 = &v58[2 * v59];
  v72 = 0LL;
  if ( v59 )
  {
    do
    {
      v69 = v32 + 2;
      v38 = *v32;
      if ( *v32 == 3 )
        break;
      v39 = v32[1];
      *(_QWORD *)v50 = *v32;
      *(_QWORD *)&v50[8] = v39;
      v40 = v72;
      if ( v72 == -1 )
        core::panicking::panic_const::panic_const_add_overflow(
          &anon_63ca0f90b115037567b298c459bc5907_6_llvm_5466747653277509712,
          v39,
          v33,
          v38);
      ++v72;
      *(_QWORD *)&v67 = v38;
      *((_QWORD *)&v67 + 1) = v39;
      if ( v38 )
      {
        if ( v38 == 1 )
          std::sync::mpmc::list::Channel<T>::recv(v50, v39, v33, 1000000000LL);
        else
          std::sync::mpmc::zero::Channel<T>::recv(v50, v39, v33, 1000000000LL);
      }
      else
      {
        std::sync::mpmc::array::Channel<T>::recv(v50, v39, v33, 1000000000LL);
      }
      if ( (v50[0] & 1) != 0 || (v41 = *(_QWORD *)&v50[8]) == 0 )
      {
        if ( (_QWORD)v67 )
        {
          if ( (_QWORD)v67 == 1LL )
            std::sync::mpmc::counter::Receiver<C>::release((char *)&v67 + 8);
          else
            std::sync::mpmc::counter::Receiver<C>::release((char *)&v67 + 8);
        }
        else
        {
          std::sync::mpmc::counter::Receiver<C>::release((char *)&v67 + 8);
        }
      }
      else
      {
        *(_QWORD *)v50 = 1LL;
        *(_QWORD *)&v50[8] = 1LL;
        *(_QWORD *)&v50[16] = v41;
        v42 = alloc::alloc::Global::alloc_impl(1LL, 8LL, 24LL, 0LL);
        if ( !v42 )
          alloc::alloc::handle_alloc_error(8LL, 24LL);
        *(_QWORD *)(v42 + 16) = *(_QWORD *)&v50[16];
        *(_OWORD *)v42 = *(_OWORD *)v50;
        v86 = (unsigned __int64)v42;
        v85 = v67;
        v87 = v40;
        v43 = v64;
        if ( v64 == (_QWORD)v63 )
          alloc::raw_vec::RawVec<T,A>::grow_one(&v63);
        v34 = *((_QWORD *)&v63 + 1);
        v35 = 5 * v43;
        v36 = v85;
        v37 = v86;
        v33 = v87;
        *(_QWORD *)(*((_QWORD *)&v63 + 1) + 8 * v35 + 32) = v87;
        *(_OWORD *)(v34 + 8 * v35 + 16) = v37;
        *(_OWORD *)(v34 + 8 * v35) = v36;
        v64 = v43 + 1;
      }
      v32 = v69;
    }
    while ( v69 != v71 );
  }
  <alloc::vec::into_iter::IntoIter<T,A> as core::ops::drop::Drop>::drop(&v68);
  v44 = v64;
  *(_QWORD *)&v50[16] = v64;
  *(_OWORD *)v50 = v63;
  *(_QWORD *)&v50[24] = v66;
  v45 = v60;
  if ( v64 >= 2 )
  {
    v46 = (v64 >> 1) - 1;
    do
    {
      binary_heap_plus::binary_heap::BinaryHeap<T,C>::sift_down_range(v50, v46, v44);
      v4 = v46-- != 0;
    }
    while ( v4 );
  }
  v89 = *(_OWORD *)&v50[16];
  v88 = *(_OWORD *)v50;
  *(_OWORD *)v45 = v54;
  v47 = v89;
  *((_OWORD *)v45 + 1) = v88;
  *((_OWORD *)v45 + 2) = v47;
  *((_OWORD *)v45 + 3) = v78;
  v45[8] = v79;
  v45[9] = 0LL;
  return v45;
}
