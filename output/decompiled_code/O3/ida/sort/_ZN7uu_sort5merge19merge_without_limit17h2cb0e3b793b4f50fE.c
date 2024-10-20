char __fastcall uu_sort::merge::merge_without_limit(__int64 a1, __int128 *a2, __int64 a3)
{
  __int128 *v3; // r12
  __int64 v4; // rcx
  __int64 v5; // rsi
  unsigned __int64 v6; // kr00_8
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rcx
  __int64 v9; // r12
  __int64 v10; // rax
  __int64 v11; // rax
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int64 v14; // rbx
  char *v15; // r13
  __int64 v16; // r15
  __int64 v17; // rax
  __int64 v18; // r12
  __int64 v19; // r14
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm2
  char *v23; // r15
  char *v24; // rax
  char *v25; // rbx
  __int64 v26; // r13
  __int128 *v27; // rax
  __int64 v28; // rcx
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  __int128 v31; // xmm2
  __int64 v32; // rbx
  __int64 v33; // rax
  __int64 v34; // rcx
  __int128 v35; // xmm0
  __int128 v36; // xmm1
  __int128 v37; // xmm2
  __int64 v38; // rax
  __int64 v39; // r14
  unsigned __int64 v40; // rbx
  __int64 v41; // rax
  __int64 v42; // rcx
  __int128 *v43; // rax
  __int64 v44; // rax
  __int64 v45; // rcx
  __int128 v46; // xmm0
  __int128 v47; // xmm1
  __int128 v48; // xmm0
  __int64 v49; // rbx
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rbx
  __int64 v53; // rbx
  char v54; // al
  __int64 i; // rsi
  __int128 v56; // xmm0
  __int64 v57; // rcx
  __int128 v58; // xmm0
  char result; // al
  _QWORD *v60; // rax
  signed __int64 v61; // rax
  __int64 v62; // rcx
  signed __int64 v63; // rtt
  char v64; // al
  __int64 v65; // rbx
  char v66; // al
  __int64 v67; // rbx
  signed __int64 v68; // rax
  __int64 v69; // rcx
  signed __int64 v70; // rtt
  unsigned __int64 v71; // [rsp+28h] [rbp-500h]
  __int64 v72; // [rsp+30h] [rbp-4F8h]
  unsigned __int64 v73; // [rsp+38h] [rbp-4F0h]
  __int128 v74; // [rsp+40h] [rbp-4E8h] BYREF
  __int64 v75; // [rsp+50h] [rbp-4D8h]
  unsigned __int64 v76; // [rsp+58h] [rbp-4D0h] BYREF
  __int128 *v77; // [rsp+60h] [rbp-4C8h]
  __int64 v78; // [rsp+68h] [rbp-4C0h]
  __int128 v79; // [rsp+70h] [rbp-4B8h] BYREF
  __int128 v80; // [rsp+80h] [rbp-4A8h] BYREF
  __int128 v81; // [rsp+90h] [rbp-498h]
  __int128 v82; // [rsp+A0h] [rbp-488h]
  unsigned __int64 v83; // [rsp+B0h] [rbp-478h]
  __int128 v84; // [rsp+B8h] [rbp-470h] BYREF
  __int128 v85; // [rsp+C8h] [rbp-460h] BYREF
  __int128 *v86; // [rsp+D8h] [rbp-450h]
  __int64 v87; // [rsp+E0h] [rbp-448h]
  __int64 v88; // [rsp+E8h] [rbp-440h]
  __int64 v89; // [rsp+F0h] [rbp-438h]
  _OWORD v90[10]; // [rsp+F8h] [rbp-430h] BYREF
  _BYTE v91[24]; // [rsp+198h] [rbp-390h] BYREF
  __int128 v92; // [rsp+1B0h] [rbp-378h]
  __int128 v93; // [rsp+1C0h] [rbp-368h]
  __int128 v94; // [rsp+1D0h] [rbp-358h]
  __int64 v95; // [rsp+1E0h] [rbp-348h]
  __int64 v96; // [rsp+1E8h] [rbp-340h]
  __int64 v97; // [rsp+1F0h] [rbp-338h]
  unsigned __int64 v98; // [rsp+1F8h] [rbp-330h]
  _OWORD src[50]; // [rsp+200h] [rbp-328h] BYREF

  v88 = a3;
  v3 = a2;
  v87 = a1;
  v86 = a2;
  std::sync::mpmc::channel(src);
  v84 = src[0];
  v97 = *(_QWORD *)&src[1];
  v85 = src[1];
  v4 = *((_QWORD *)a2 + 3);
  v5 = *((_QWORD *)a2 + 1);
  v6 = *((_QWORD *)v3 + 3) - v5;
  v96 = *((_QWORD *)&src[1] + 1);
  v7 = v6 / 0x30;
  v8 = v4 - v5;
  if ( v8 )
  {
    if ( v8 > 0x3333333333333330LL )
    {
      v9 = 0LL;
    }
    else
    {
      v9 = 8LL;
      v10 = _rust_alloc(120 * v7, 8LL);
      if ( v10 )
      {
        *(_QWORD *)&v74 = v6 / 0x30;
        *((_QWORD *)&v74 + 1) = v10;
        v75 = 0LL;
        v11 = _rust_alloc(16 * v7, 8LL);
        v3 = v86;
        if ( !v11 )
          alloc::raw_vec::handle_error(8LL, 16 * v7);
        goto LABEL_7;
      }
    }
    alloc::raw_vec::handle_error(v9, 120 * v7);
  }
  *(_QWORD *)&v74 = 0LL;
  *((_QWORD *)&v74 + 1) = 8LL;
  v75 = 0LL;
  v11 = 8LL;
LABEL_7:
  v76 = v6 / 0x30;
  v77 = (__int128 *)v11;
  v78 = 0LL;
  v12 = *v3;
  v13 = v3[1];
  v82 = v3[2];
  v81 = v13;
  v80 = v12;
  v83 = 0LL;
  v14 = *((_QWORD *)&v12 + 1);
  v89 = *((_QWORD *)&v13 + 1);
  if ( *((_QWORD *)&v12 + 1) == *((_QWORD *)&v13 + 1) )
  {
LABEL_23:
    core::ptr::drop_in_place<core::iter::adapters::map::Map<alloc::vec::into_iter::IntoIter<uu_sort::merge::ClosedCompressedTmpFile>,alloc::boxed::Box<dyn core::ops::function::FnMut<(uu_sort::merge::ClosedCompressedTmpFile,)>+Output = core::result::Result<uu_sort::merge::CompressedTmpMergeInput,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>>(
      &v80,
      *(double *)&v12);
    v39 = v75;
    if ( v75 )
    {
      v40 = 0LL;
      do
      {
        v41 = _rust_alloc_zeroed(0x2000LL, 1LL);
        if ( !v41 )
          alloc::raw_vec::handle_error(1LL, 0x2000LL);
        src[1] = 8uLL;
        src[3] = 0LL;
        src[4] = 8uLL;
        src[0] = v40;
        *((_QWORD *)&src[2] + 1) = 8LL;
        *((_QWORD *)&src[5] + 1) = 8LL;
        *(_QWORD *)&src[6] = 0LL;
        *((_QWORD *)&src[6] + 1) = 0x2000LL;
        *(_QWORD *)&src[7] = v41;
        *((_QWORD *)&src[7] + 1) = 0x2000LL;
        std::sync::mpmc::Sender<T>::send(v90, &v84, src, v42);
        if ( *((_QWORD *)&v90[0] + 1) != 0x8000000000000000LL )
        {
          src[7] = v90[7];
          src[6] = v90[6];
          src[5] = v90[5];
          src[4] = v90[4];
          src[3] = v90[3];
          src[2] = v90[2];
          src[1] = v90[1];
          src[0] = v90[0];
          core::result::unwrap_failed(aCalledResultUn_4, 43LL, src, &off_1931F0, &off_193428);
        }
        ++v40;
      }
      while ( v39 != v40 );
    }
    <uu_sort::GlobalSettings as core::clone::Clone>::clone(v90, v88);
    *(_QWORD *)&src[0] = v97;
    *((_QWORD *)&src[0] + 1) = v96;
    src[1] = v74;
    *(_QWORD *)&src[2] = v75;
    memcpy((char *)&src[2] + 8, v90, 0xA0uLL);
    *(_QWORD *)&v90[1] = 0x8000000000000000LL;
    *(_QWORD *)&v90[0] = 0LL;
    std::thread::Builder::spawn_unchecked(v91, v90, src);
    if ( !*(_QWORD *)v91 )
    {
      *(_QWORD *)&v90[0] = *(_QWORD *)&v91[8];
      core::result::unwrap_failed(aFailedToSpawnT, 22LL, v90, &off_1931D0, &off_193410);
    }
    *(_QWORD *)&v81 = *(_QWORD *)&v91[16];
    v80 = *(_OWORD *)v91;
    *(_QWORD *)v91 = 0LL;
    *(_QWORD *)&v91[8] = 8LL;
    *(_QWORD *)&v91[16] = 0LL;
    v43 = v77;
    *(_QWORD *)&v90[0] = v77;
    *((_QWORD *)&v90[0] + 1) = v77;
    *(_QWORD *)&v90[1] = v76;
    *((_QWORD *)&v90[1] + 1) = &v77[v78];
    *(_QWORD *)&v90[2] = 0LL;
    if ( v78 )
    {
      do
      {
        *((_QWORD *)&v90[0] + 1) = v43 + 1;
        v48 = *v43;
        v49 = (*(_QWORD *)&v90[2])++;
        v79 = v48;
        v50 = std::sync::mpmc::Receiver<T>::recv(&v79);
        if ( v50 )
        {
          *(_QWORD *)&src[0] = 1LL;
          *((_QWORD *)&src[0] + 1) = 1LL;
          *(_QWORD *)&src[1] = v50;
          v51 = _rust_alloc(24LL, 8LL);
          if ( !v51 )
            alloc::alloc::handle_alloc_error(8LL, 24LL);
          *(_QWORD *)(v51 + 16) = *(_QWORD *)&src[1];
          *(_OWORD *)v51 = src[0];
          src[1] = (unsigned __int64)v51;
          src[0] = v79;
          *(_QWORD *)&src[2] = v49;
          v52 = *(_QWORD *)&v91[16];
          if ( *(_QWORD *)&v91[16] == *(_QWORD *)v91 )
            alloc::raw_vec::RawVec<T,A>::grow_one(v91);
          v44 = *(_QWORD *)&v91[8];
          v45 = 5 * v52;
          v46 = src[0];
          v47 = src[1];
          *(_QWORD *)(*(_QWORD *)&v91[8] + 8 * v45 + 32) = *(_QWORD *)&src[2];
          *(_OWORD *)(v44 + 8 * v45 + 16) = v47;
          *(_OWORD *)(v44 + 8 * v45) = v46;
          *(_QWORD *)&v91[16] = v52 + 1;
        }
        else if ( (_QWORD)v79 )
        {
          if ( (_DWORD)v79 == 1 )
            std::sync::mpmc::counter::Receiver<C>::release((char *)&v79 + 8);
          else
            std::sync::mpmc::counter::Receiver<C>::release((char *)&v79 + 8);
        }
        else
        {
          v53 = *((_QWORD *)&v79 + 1);
          if ( !_InterlockedDecrement64((volatile signed __int64 *)(*((_QWORD *)&v79 + 1) + 520LL)) )
          {
            std::sync::mpmc::array::Channel<T>::disconnect_receivers(v53);
            v54 = *(_BYTE *)(v53 + 528);
            *(_BYTE *)(v53 + 528) = 1;
            if ( v54 )
              core::ptr::drop_in_place<alloc::boxed::Box<std::sync::mpmc::counter::Counter<std::sync::mpmc::array::Channel<uu_sort::chunks::Chunk>>>>(v53);
          }
        }
        v43 = (__int128 *)*((_QWORD *)&v90[0] + 1);
      }
      while ( *((_QWORD *)&v90[0] + 1) != *((_QWORD *)&v90[1] + 1) );
    }
    <alloc::vec::into_iter::IntoIter<T,A> as core::ops::drop::Drop>::drop(v90);
    *(_QWORD *)&src[1] = *(_QWORD *)&v91[16];
    src[0] = *(_OWORD *)v91;
    *((_QWORD *)&src[1] + 1) = v88;
    if ( *(_QWORD *)&v91[16] )
    {
      for ( i = (*(_QWORD *)&v91[16] >> 1) - 1LL; i != -1; --i )
        binary_heap_plus::binary_heap::BinaryHeap<T,C>::sift_down_range(src, i, *(_QWORD *)&src[1]);
    }
    v56 = src[0];
    v57 = v87;
    *(_OWORD *)(v87 + 32) = src[1];
    *(_OWORD *)(v57 + 16) = v56;
    v58 = v84;
    *(_OWORD *)(v57 + 48) = v80;
    result = v81;
    *(_QWORD *)(v57 + 64) = v81;
    *(_OWORD *)v57 = v58;
    *(_QWORD *)(v57 + 72) = 0LL;
    return result;
  }
  v15 = (char *)src + 8;
  v16 = *((_QWORD *)&v12 + 1) + 48LL;
  v73 = 0LL;
  v98 = 0x8000000000000001LL;
  while ( 1 )
  {
    v17 = *(_QWORD *)(v16 - 48);
    if ( v17 == 0x8000000000000000LL )
      goto LABEL_22;
    v18 = v16 - 48;
    *((_QWORD *)&v90[2] + 1) = *(_QWORD *)(v16 - 48 + 40);
    v12 = *(_OWORD *)(v16 - 48 + 8);
    *(_OWORD *)((char *)&v90[1] + 8) = *(_OWORD *)(v16 - 48 + 24);
    *(_OWORD *)((char *)v90 + 8) = v12;
    *(_QWORD *)&v90[0] = v17;
    (*(void (__fastcall **)(_OWORD *, _QWORD, _OWORD *))(*((_QWORD *)&v82 + 1) + 32LL))(src, v82, v90);
    v19 = *(_QWORD *)&src[0];
    if ( *(_QWORD *)&src[0] == v98 )
    {
      v16 = v14 + 48;
      goto LABEL_22;
    }
    v72 = v16;
    v95 = *((_QWORD *)v15 + 8);
    v20 = *(_OWORD *)v15;
    v21 = *((_OWORD *)v15 + 1);
    v22 = *((_OWORD *)v15 + 2);
    v94 = *((_OWORD *)v15 + 3);
    v93 = v22;
    v92 = v21;
    *(_OWORD *)&v91[8] = v20;
    v71 = v73 + 1;
    *(_QWORD *)v91 = *(_QWORD *)&src[0];
    std::sync::mpmc::array::Channel<T>::with_capacity(src, 2LL);
    v23 = v15;
    *(_QWORD *)&src[32] = 1LL;
    *((_QWORD *)&src[32] + 1) = 1LL;
    LOBYTE(src[33]) = 0;
    v24 = (char *)_rust_alloc(640LL, 128LL);
    if ( !v24 )
    {
      *((_QWORD *)&v80 + 1) = v72;
      v83 = v73 + 1;
      alloc::alloc::handle_alloc_error(128LL, 640LL);
    }
    v25 = v24;
    memcpy(v24, src, 0x280uLL);
    *(_QWORD *)&v79 = 0LL;
    *((_QWORD *)&v79 + 1) = v25;
    *(_QWORD *)&src[0] = 0LL;
    *((_QWORD *)&src[0] + 1) = v25;
    v26 = v78;
    if ( v78 == v76 )
      alloc::raw_vec::RawVec<T,A>::grow_one(&v76);
    v27 = v77;
    v28 = v26;
    *(_QWORD *)&v77[v28] = 0LL;
    *((_QWORD *)&v27[v28] + 1) = v25;
    v78 = v26 + 1;
    v29 = *(_OWORD *)&v91[8];
    if ( v19 == 0x8000000000000000LL )
      break;
    v15 = v23;
    *((_QWORD *)v23 + 10) = v95;
    v30 = v92;
    v31 = v93;
    *((_OWORD *)v23 + 4) = v94;
    *((_OWORD *)v23 + 3) = v31;
    *((_OWORD *)v23 + 2) = v30;
    *(_QWORD *)&src[0] = 0LL;
    *((_QWORD *)&src[0] + 1) = v25;
    *(_QWORD *)&src[1] = v19;
    *(_OWORD *)((char *)&src[1] + 8) = v29;
    *(_QWORD *)&src[6] = 0LL;
    *((_QWORD *)&src[6] + 1) = 1LL;
    *(_QWORD *)&src[7] = 0LL;
    v32 = v75;
    if ( v75 == (_QWORD)v74 )
      alloc::raw_vec::RawVec<T,A>::grow_one(&v74, *(double *)&v29);
    v33 = *((_QWORD *)&v74 + 1);
    v34 = 120 * v32;
    *(_QWORD *)(*((_QWORD *)&v74 + 1) + v34 + 112) = *(_QWORD *)&src[7];
    *(_OWORD *)(v33 + v34 + 96) = src[6];
    *(_OWORD *)(v33 + v34 + 80) = src[5];
    *(_OWORD *)(v33 + v34 + 64) = src[4];
    v35 = src[0];
    v36 = src[1];
    v37 = src[2];
    *(_OWORD *)(v33 + v34 + 48) = src[3];
    *(_OWORD *)(v33 + v34 + 32) = v37;
    *(_OWORD *)(v33 + v34 + 16) = v36;
    *(_OWORD *)(v33 + v34) = v35;
    v75 = v32 + 1;
    v38 = _rust_alloc_zeroed(0x2000LL, 1LL);
    if ( !v38 )
    {
      *((_QWORD *)&v80 + 1) = v72;
      v83 = v73 + 1;
      alloc::raw_vec::handle_error(1LL, 0x2000LL);
    }
    *(_QWORD *)&v12 = 0LL;
    *((_OWORD *)v23 + 1) = 0LL;
    *(_OWORD *)(v23 + 40) = 0LL;
    *((_OWORD *)v23 + 4) = 0LL;
    src[0] = v73;
    *(_QWORD *)&src[1] = 8LL;
    *((_QWORD *)&src[2] + 1) = 8LL;
    *(_QWORD *)&src[4] = 8LL;
    *((_QWORD *)&src[5] + 1) = 8LL;
    *(_QWORD *)&src[6] = 0LL;
    *((_QWORD *)&src[6] + 1) = 0x2000LL;
    *(_QWORD *)&src[7] = v38;
    *((_QWORD *)&src[7] + 1) = 0x2000LL;
    std::sync::mpmc::Sender<T>::send(v90, &v84, src, v73);
    if ( *((_QWORD *)&v90[0] + 1) != 0x8000000000000000LL )
    {
      *((_QWORD *)&v80 + 1) = v72;
      v83 = v73 + 1;
      src[7] = v90[7];
      src[6] = v90[6];
      src[5] = v90[5];
      src[4] = v90[4];
      src[3] = v90[3];
      src[2] = v90[2];
      src[1] = v90[1];
      src[0] = v90[0];
      core::result::unwrap_failed(aCalledResultUn_4, 43LL, src, &off_1931F0, &off_193440);
    }
    v16 = v72 + 48;
    ++v73;
    v14 = v18 + 48;
    if ( v18 + 48 == v89 )
    {
      v16 = v89;
      v73 = v71;
LABEL_22:
      *((_QWORD *)&v80 + 1) = v16;
      v83 = v73;
      goto LABEL_23;
    }
  }
  *((_QWORD *)&v80 + 1) = v72;
  v83 = v73 + 1;
  v60 = (_QWORD *)v87;
  *(_OWORD *)(v87 + 8) = *(_OWORD *)&v91[8];
  *v60 = 3LL;
  if ( !_InterlockedDecrement64((volatile signed __int64 *)v25 + 64) )
  {
    v61 = *((_QWORD *)v25 + 16);
    v62 = *((_QWORD *)v25 + 50);
    do
    {
      v63 = v61;
      v61 = _InterlockedCompareExchange64((volatile signed __int64 *)v25 + 16, v62 | v61, v61);
    }
    while ( v63 != v61 );
    if ( (v61 & *((_QWORD *)v25 + 50)) == 0 )
      std::sync::mpmc::waker::SyncWaker::disconnect(v25 + 320);
    v64 = v25[528];
    v25[528] = 1;
    if ( v64 )
      *(double *)&v29 = core::ptr::drop_in_place<alloc::boxed::Box<std::sync::mpmc::counter::Counter<std::sync::mpmc::array::Channel<uu_sort::chunks::Chunk>>>>(v25);
  }
  core::ptr::drop_in_place<core::iter::adapters::map::Map<alloc::vec::into_iter::IntoIter<uu_sort::merge::ClosedCompressedTmpFile>,alloc::boxed::Box<dyn core::ops::function::FnMut<(uu_sort::merge::ClosedCompressedTmpFile,)>+Output = core::result::Result<uu_sort::merge::CompressedTmpMergeInput,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>>(
    &v80,
    *(double *)&v29);
  <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v76);
  if ( v76 )
    _rust_dealloc(v77, 16 * v76, 8LL);
  <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v74, *(double *)&v29);
  if ( (_QWORD)v74 )
    _rust_dealloc(*((_QWORD *)&v74 + 1), 120 * v74, 8LL);
  if ( (_QWORD)v85 == 2LL )
  {
    std::sync::mpmc::counter::Receiver<C>::release((char *)&v85 + 8);
  }
  else if ( (_DWORD)v85 == 1 )
  {
    std::sync::mpmc::counter::Receiver<C>::release((char *)&v85 + 8);
  }
  else
  {
    v65 = *((_QWORD *)&v85 + 1);
    if ( !_InterlockedDecrement64((volatile signed __int64 *)(*((_QWORD *)&v85 + 1) + 520LL)) )
    {
      std::sync::mpmc::array::Channel<T>::disconnect_receivers(v65);
      v66 = *(_BYTE *)(v65 + 528);
      *(_BYTE *)(v65 + 528) = 1;
      if ( v66 )
        core::ptr::drop_in_place<alloc::boxed::Box<std::sync::mpmc::counter::Counter<std::sync::mpmc::array::Channel<(usize,uu_sort::chunks::RecycledChunk)>>>>(v65);
    }
  }
  result = v84;
  if ( (_QWORD)v84 == 2LL )
    return std::sync::mpmc::counter::Sender<C>::release((char *)&v84 + 8);
  if ( (_DWORD)v84 == 1 )
    return std::sync::mpmc::counter::Sender<C>::release((char *)&v84 + 8);
  v67 = *((_QWORD *)&v84 + 1);
  if ( !_InterlockedDecrement64((volatile signed __int64 *)(*((_QWORD *)&v84 + 1) + 512LL)) )
  {
    v68 = *(_QWORD *)(v67 + 128);
    v69 = *(_QWORD *)(v67 + 400);
    do
    {
      v70 = v68;
      v68 = _InterlockedCompareExchange64((volatile signed __int64 *)(v67 + 128), v69 | v68, v68);
    }
    while ( v70 != v68 );
    if ( (v68 & *(_QWORD *)(v67 + 400)) == 0 )
      std::sync::mpmc::waker::SyncWaker::disconnect(v67 + 320);
    result = *(_BYTE *)(v67 + 528);
    *(_BYTE *)(v67 + 528) = 1;
    if ( result )
      return core::ptr::drop_in_place<alloc::boxed::Box<std::sync::mpmc::counter::Counter<std::sync::mpmc::array::Channel<(usize,uu_sort::chunks::RecycledChunk)>>>>(v67);
  }
  return result;
}
