char __fastcall uu_sort::merge::merge_without_limit(__int64 a1, _OWORD *a2, __int64 a3)
{
  unsigned __int128 v3; // kr00_16
  __int128 v4; // xmm1
  __int128 v5; // xmm2
  __int64 v6; // rbx
  unsigned __int64 v7; // r15
  _OWORD *v8; // r12
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm2
  __int64 v15; // rax
  __int64 v16; // rcx
  unsigned __int64 v17; // r14
  char *v18; // rax
  char *v19; // r15
  _OWORD *v20; // r13
  _OWORD *v21; // rsi
  __int64 v22; // r12
  __int64 v23; // rax
  __int64 v24; // rcx
  double v25; // xmm0_8
  _QWORD *v26; // rax
  signed __int64 v27; // rax
  __int64 v28; // rcx
  signed __int64 v29; // rtt
  char v30; // al
  _QWORD *v31; // rax
  __int64 v32; // rcx
  unsigned __int64 v33; // rdx
  __int64 v34; // rdi
  __int64 i; // r15
  _QWORD *v36; // rcx
  unsigned __int64 v37; // rax
  __int64 v38; // rbx
  unsigned __int64 v39; // r12
  __int64 v40; // rax
  __int64 v41; // rcx
  __int128 *v42; // rax
  __int64 v43; // rax
  __int64 v44; // rcx
  __int128 v45; // xmm0
  __int128 v46; // xmm1
  __int128 v47; // xmm0
  __int64 v48; // r13
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // r13
  __int64 v52; // r13
  char v53; // al
  unsigned __int64 j; // rsi
  __int128 v55; // xmm0
  __int64 v56; // rcx
  __int128 v57; // xmm0
  char result; // al
  __int64 v59; // rbx
  char v60; // al
  __int64 v61; // rbx
  signed __int64 v62; // rax
  __int64 v63; // rcx
  signed __int64 v64; // rtt
  __m256i v65; // [rsp+70h] [rbp-4B8h] BYREF
  __int128 v66; // [rsp+90h] [rbp-498h]
  unsigned __int64 v67; // [rsp+A0h] [rbp-488h]
  __int128 v68; // [rsp+A8h] [rbp-480h] BYREF
  __int64 v69; // [rsp+B8h] [rbp-470h]
  __int64 v70; // [rsp+C0h] [rbp-468h] BYREF
  __int64 v71; // [rsp+C8h] [rbp-460h]
  __int64 v72; // [rsp+D0h] [rbp-458h]
  unsigned __int64 v73; // [rsp+D8h] [rbp-450h]
  __int128 v74; // [rsp+E0h] [rbp-448h] BYREF
  __int128 v75; // [rsp+F0h] [rbp-438h] BYREF
  unsigned __int64 v76; // [rsp+100h] [rbp-428h]
  __int128 v77; // [rsp+108h] [rbp-420h] BYREF
  __int64 v78; // [rsp+118h] [rbp-410h]
  __int64 v79; // [rsp+120h] [rbp-408h]
  _QWORD *v80; // [rsp+128h] [rbp-400h]
  _BYTE v81[24]; // [rsp+130h] [rbp-3F8h]
  __int64 v82; // [rsp+148h] [rbp-3E0h]
  __int64 v83; // [rsp+150h] [rbp-3D8h]
  __int64 v84; // [rsp+158h] [rbp-3D0h]
  _OWORD v85[10]; // [rsp+160h] [rbp-3C8h] BYREF
  _OWORD src[32]; // [rsp+200h] [rbp-328h] BYREF
  __int64 v87; // [rsp+400h] [rbp-128h]
  __int64 v88; // [rsp+408h] [rbp-120h]
  char v89; // [rsp+410h] [rbp-118h]

  v78 = a3;
  v79 = a1;
  std::sync::mpmc::channel(src);
  v75 = src[0];
  v3 = src[1];
  v83 = v3 >> 64;
  v84 = v3;
  v77 = src[1];
  *(_QWORD *)&v68 = 0LL;
  *((_QWORD *)&v68 + 1) = 8LL;
  v69 = 0LL;
  v70 = 0LL;
  v71 = 8LL;
  v72 = 0LL;
  v4 = a2[1];
  v5 = a2[2];
  *(_OWORD *)v65.m256i_i8 = *a2;
  v66 = v5;
  *(_OWORD *)&v65.m256i_u64[2] = v4;
  v6 = v65.m256i_i64[0];
  v76 = *((_QWORD *)&v5 + 1);
  v80 = (_QWORD *)v5;
  v7 = 0LL;
  v8 = src;
  v73 = 0x8000000000000000LL;
  if ( v65.m256i_i64[0] != 0x8000000000000001LL )
  {
    *((_QWORD *)&src[1] + 1) = v65.m256i_i64[3];
    *(_OWORD *)((char *)src + 8) = *(_OWORD *)&v65.m256i_u64[1];
    goto LABEL_10;
  }
  while ( 1 )
  {
    itertools::groupbylazy::IntoChunks<I>::step(v8, v80, v76);
    v6 = *(_QWORD *)&src[0];
    if ( *(_QWORD *)&src[0] == 0x8000000000000001LL )
      break;
LABEL_10:
    v82 = *((_QWORD *)&src[1] + 1);
    *(_OWORD *)&v81[8] = *(_OWORD *)((char *)src + 8);
    *(_QWORD *)v81 = v6;
    std::sync::mpmc::array::Channel<T>::with_capacity(v8, 2LL);
    v17 = v7;
    v87 = 1LL;
    v88 = 1LL;
    v89 = 0;
    v18 = (char *)_rust_alloc(640LL, 128LL);
    if ( !v18 )
    {
      v65.m256i_i64[0] = 0x8000000000000001LL;
      v67 = v7 + 1;
      alloc::alloc::handle_alloc_error(128LL, 640LL);
    }
    v19 = v18;
    v20 = v8;
    v21 = v8;
    memcpy(v18, v8, 0x280uLL);
    *(_QWORD *)&v74 = 0LL;
    *((_QWORD *)&v74 + 1) = v19;
    *(_QWORD *)&src[0] = 0LL;
    *((_QWORD *)&src[0] + 1) = v19;
    v22 = v72;
    if ( v72 == v70 )
      alloc::raw_vec::RawVec<T,A>::grow_one(&v70);
    v23 = v71;
    v24 = 16 * v22;
    *(_QWORD *)(v71 + v24) = 0LL;
    *(_QWORD *)(v23 + v24 + 8) = v19;
    v72 = v22 + 1;
    v25 = *(double *)&v81[8];
    if ( v6 == v73 )
    {
      v65.m256i_i64[0] = 0x8000000000000001LL;
      v67 = v17 + 1;
      v26 = (_QWORD *)v79;
      *(_OWORD *)(v79 + 8) = *(_OWORD *)&v81[8];
      *v26 = 3LL;
      if ( !_InterlockedDecrement64((volatile signed __int64 *)v19 + 64) )
      {
        v27 = *((_QWORD *)v19 + 16);
        v28 = *((_QWORD *)v19 + 50);
        do
        {
          v29 = v27;
          v27 = _InterlockedCompareExchange64((volatile signed __int64 *)v19 + 16, v28 | v27, v27);
        }
        while ( v29 != v27 );
        if ( (v27 & *((_QWORD *)v19 + 50)) == 0 )
          std::sync::mpmc::waker::SyncWaker::disconnect(v19 + 320);
        v30 = v19[528];
        v19[528] = 1;
        if ( v30 )
          v25 = core::ptr::drop_in_place<alloc::boxed::Box<std::sync::mpmc::counter::Counter<std::sync::mpmc::array::Channel<uu_sort::chunks::Chunk>>>>(v19);
      }
      v31 = (_QWORD *)v66;
      if ( *(_QWORD *)v66 )
        core::cell::panic_already_borrowed(&anon_5e1370f02050f3d3373ac32d9310e55d_1_llvm_10414264628066819742);
      v32 = *((_QWORD *)&v66 + 1);
      v33 = *(_QWORD *)(v66 + 176);
      if ( v33 == -1LL || v33 < *((_QWORD *)&v66 + 1) )
        *(_QWORD *)(v66 + 176) = *((_QWORD *)&v66 + 1);
      *v31 = 0LL;
      if ( v65.m256i_i64[0] != 0x8000000000000001LL )
        core::ptr::drop_in_place<core::result::Result<uu_sort::merge::PlainTmpMergeInput,alloc::boxed::Box<dyn uucore::mods::error::UError>>>(
          &v65,
          v21,
          v33,
          v32,
          v25);
      <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v70);
      if ( v70 )
        _rust_dealloc(v71, 16 * v70, 8LL);
      v34 = *((_QWORD *)&v68 + 1);
      for ( i = v69 + 1; i != 1; --i )
      {
        core::ptr::drop_in_place<core::option::Option<uu_sort::merge::ReaderFile<uu_sort::merge::PlainTmpMergeInput>>>(v25);
        v34 += 72LL;
      }
      if ( (_QWORD)v68 )
        _rust_dealloc(*((_QWORD *)&v68 + 1), 72 * v68, 8LL);
      if ( (_QWORD)v77 == 2LL )
      {
        std::sync::mpmc::counter::Receiver<C>::release((char *)&v77 + 8);
      }
      else if ( (_DWORD)v77 == 1 )
      {
        std::sync::mpmc::counter::Receiver<C>::release((char *)&v77 + 8);
      }
      else
      {
        v59 = *((_QWORD *)&v77 + 1);
        if ( !_InterlockedDecrement64((volatile signed __int64 *)(*((_QWORD *)&v77 + 1) + 520LL)) )
        {
          std::sync::mpmc::array::Channel<T>::disconnect_receivers(v59);
          v60 = *(_BYTE *)(v59 + 528);
          *(_BYTE *)(v59 + 528) = 1;
          if ( v60 )
            core::ptr::drop_in_place<alloc::boxed::Box<std::sync::mpmc::counter::Counter<std::sync::mpmc::array::Channel<(usize,uu_sort::chunks::RecycledChunk)>>>>(v59);
        }
      }
      result = v75;
      if ( (_QWORD)v75 == 2LL )
        return std::sync::mpmc::counter::Sender<C>::release((char *)&v75 + 8);
      if ( (_DWORD)v75 == 1 )
        return std::sync::mpmc::counter::Sender<C>::release((char *)&v75 + 8);
      v61 = *((_QWORD *)&v75 + 1);
      if ( !_InterlockedDecrement64((volatile signed __int64 *)(*((_QWORD *)&v75 + 1) + 512LL)) )
      {
        v62 = *(_QWORD *)(v61 + 128);
        v63 = *(_QWORD *)(v61 + 400);
        do
        {
          v64 = v62;
          v62 = _InterlockedCompareExchange64((volatile signed __int64 *)(v61 + 128), v63 | v62, v62);
        }
        while ( v64 != v62 );
        if ( (v62 & *(_QWORD *)(v61 + 400)) == 0 )
          std::sync::mpmc::waker::SyncWaker::disconnect(v61 + 320);
        result = *(_BYTE *)(v61 + 528);
        *(_BYTE *)(v61 + 528) = 1;
        if ( result )
          return core::ptr::drop_in_place<alloc::boxed::Box<std::sync::mpmc::counter::Counter<std::sync::mpmc::array::Channel<(usize,uu_sort::chunks::RecycledChunk)>>>>(v61);
      }
      return result;
    }
    *(_QWORD *)&src[0] = 0LL;
    *((_QWORD *)&src[0] + 1) = v19;
    *(_QWORD *)&src[1] = v6;
    *(_OWORD *)((char *)&src[1] + 8) = *(_OWORD *)&v81[8];
    *((_QWORD *)&src[2] + 1) = v82;
    *(_QWORD *)&src[3] = 0LL;
    *((_QWORD *)&src[3] + 1) = 1LL;
    *(_QWORD *)&src[4] = 0LL;
    v9 = v69;
    if ( v69 == (_QWORD)v68 )
      alloc::raw_vec::RawVec<T,A>::grow_one(&v68, *(double *)&v81[8]);
    v10 = *((_QWORD *)&v68 + 1);
    v11 = 9 * v9;
    *(_QWORD *)(*((_QWORD *)&v68 + 1) + 8 * v11 + 64) = *(_QWORD *)&src[4];
    v12 = src[0];
    v13 = src[1];
    v14 = src[2];
    *(_OWORD *)(v10 + 8 * v11 + 48) = src[3];
    *(_OWORD *)(v10 + 8 * v11 + 32) = v14;
    *(_OWORD *)(v10 + 8 * v11 + 16) = v13;
    *(_OWORD *)(v10 + 8 * v11) = v12;
    v69 = v9 + 1;
    v15 = _rust_alloc_zeroed(0x2000LL, 1LL);
    if ( !v15 )
    {
      v65.m256i_i64[0] = 0x8000000000000001LL;
      v67 = v17 + 1;
      alloc::raw_vec::handle_error(1LL, 0x2000LL);
    }
    v8 = v20;
    src[1] = 8uLL;
    src[3] = 0LL;
    src[4] = 8uLL;
    src[0] = v17;
    *((_QWORD *)&src[2] + 1) = 8LL;
    *((_QWORD *)&src[5] + 1) = 8LL;
    *(_QWORD *)&src[6] = 0LL;
    *((_QWORD *)&src[6] + 1) = 0x2000LL;
    *(_QWORD *)&src[7] = v15;
    *((_QWORD *)&src[7] + 1) = 0x2000LL;
    std::sync::mpmc::Sender<T>::send(v85, &v75, v20, v16);
    if ( *((_QWORD *)&v85[0] + 1) != v73 )
    {
      v65.m256i_i64[0] = 0x8000000000000001LL;
      v67 = v17 + 1;
      src[7] = v85[7];
      src[6] = v85[6];
      src[5] = v85[5];
      src[4] = v85[4];
      src[3] = v85[3];
      src[2] = v85[2];
      src[1] = v85[1];
      src[0] = v85[0];
      core::result::unwrap_failed(aCalledResultUn_4, 43LL, src, &off_1931F0, &off_193440);
    }
    v7 = v17 + 1;
  }
  v36 = v80;
  if ( *v80 )
    core::cell::panic_already_borrowed(&anon_5e1370f02050f3d3373ac32d9310e55d_1_llvm_10414264628066819742);
  v37 = v80[22];
  if ( v37 == -1LL || v37 < v76 )
    v80[22] = v76;
  *v36 = 0LL;
  v38 = v69;
  if ( v69 )
  {
    v39 = 0LL;
    do
    {
      v40 = _rust_alloc_zeroed(0x2000LL, 1LL);
      if ( !v40 )
        alloc::raw_vec::handle_error(1LL, 0x2000LL);
      src[1] = 8uLL;
      src[3] = 0LL;
      src[4] = 8uLL;
      src[0] = v39;
      *((_QWORD *)&src[2] + 1) = 8LL;
      *((_QWORD *)&src[5] + 1) = 8LL;
      *(_QWORD *)&src[6] = 0LL;
      *((_QWORD *)&src[6] + 1) = 0x2000LL;
      *(_QWORD *)&src[7] = v40;
      *((_QWORD *)&src[7] + 1) = 0x2000LL;
      std::sync::mpmc::Sender<T>::send(v85, &v75, src, v41);
      if ( *((_QWORD *)&v85[0] + 1) != v73 )
      {
        src[7] = v85[7];
        src[6] = v85[6];
        src[5] = v85[5];
        src[4] = v85[4];
        src[3] = v85[3];
        src[2] = v85[2];
        src[1] = v85[1];
        src[0] = v85[0];
        core::result::unwrap_failed(aCalledResultUn_4, 43LL, src, &off_1931F0, &off_193428);
      }
      ++v39;
    }
    while ( v38 != v39 );
  }
  <uu_sort::GlobalSettings as core::clone::Clone>::clone(v85, v78);
  *(_QWORD *)&src[0] = v84;
  *((_QWORD *)&src[0] + 1) = v83;
  src[1] = v68;
  *(_QWORD *)&src[2] = v69;
  memcpy((char *)&src[2] + 8, v85, 0xA0uLL);
  *(_QWORD *)&v85[1] = v73;
  *(_QWORD *)&v85[0] = 0LL;
  std::thread::Builder::spawn_unchecked(&v65, v85, src);
  if ( !v65.m256i_i64[0] )
  {
    *(_QWORD *)&v85[0] = v65.m256i_i64[1];
    core::result::unwrap_failed(aFailedToSpawnT, 22LL, v85, &off_1931D0, &off_193410);
  }
  *(_QWORD *)&v81[16] = v65.m256i_i64[2];
  *(_OWORD *)v81 = *(_OWORD *)v65.m256i_i8;
  v65.m256i_i64[0] = 0LL;
  *(_OWORD *)&v65.m256i_u64[1] = 8uLL;
  v42 = (__int128 *)v71;
  *(_QWORD *)&v85[0] = v71;
  *((_QWORD *)&v85[0] + 1) = v71;
  *(_QWORD *)&v85[1] = v70;
  *((_QWORD *)&v85[1] + 1) = v71 + 16 * v72;
  *(_QWORD *)&v85[2] = 0LL;
  if ( v72 )
  {
    do
    {
      *((_QWORD *)&v85[0] + 1) = v42 + 1;
      v47 = *v42;
      v48 = (*(_QWORD *)&v85[2])++;
      v74 = v47;
      v49 = std::sync::mpmc::Receiver<T>::recv(&v74);
      if ( v49 )
      {
        *(_QWORD *)&src[0] = 1LL;
        *((_QWORD *)&src[0] + 1) = 1LL;
        *(_QWORD *)&src[1] = v49;
        v50 = _rust_alloc(24LL, 8LL);
        if ( !v50 )
          alloc::alloc::handle_alloc_error(8LL, 24LL);
        *(_QWORD *)(v50 + 16) = *(_QWORD *)&src[1];
        *(_OWORD *)v50 = src[0];
        src[1] = (unsigned __int64)v50;
        src[0] = v74;
        *(_QWORD *)&src[2] = v48;
        v51 = v65.m256i_i64[2];
        if ( v65.m256i_i64[2] == v65.m256i_i64[0] )
          alloc::raw_vec::RawVec<T,A>::grow_one(&v65);
        v43 = v65.m256i_i64[1];
        v44 = 5 * v51;
        v45 = src[0];
        v46 = src[1];
        *(_QWORD *)(v65.m256i_i64[1] + 8 * v44 + 32) = *(_QWORD *)&src[2];
        *(_OWORD *)(v43 + 8 * v44 + 16) = v46;
        *(_OWORD *)(v43 + 8 * v44) = v45;
        v65.m256i_i64[2] = v51 + 1;
      }
      else if ( (_QWORD)v74 )
      {
        if ( (_DWORD)v74 == 1 )
          std::sync::mpmc::counter::Receiver<C>::release((char *)&v74 + 8);
        else
          std::sync::mpmc::counter::Receiver<C>::release((char *)&v74 + 8);
      }
      else
      {
        v52 = *((_QWORD *)&v74 + 1);
        if ( !_InterlockedDecrement64((volatile signed __int64 *)(*((_QWORD *)&v74 + 1) + 520LL)) )
        {
          std::sync::mpmc::array::Channel<T>::disconnect_receivers(v52);
          v53 = *(_BYTE *)(v52 + 528);
          *(_BYTE *)(v52 + 528) = 1;
          if ( v53 )
            core::ptr::drop_in_place<alloc::boxed::Box<std::sync::mpmc::counter::Counter<std::sync::mpmc::array::Channel<uu_sort::chunks::Chunk>>>>(v52);
        }
      }
      v42 = (__int128 *)*((_QWORD *)&v85[0] + 1);
    }
    while ( *((_QWORD *)&v85[0] + 1) != *((_QWORD *)&v85[1] + 1) );
  }
  <alloc::vec::into_iter::IntoIter<T,A> as core::ops::drop::Drop>::drop(v85);
  *(_QWORD *)&src[1] = v65.m256i_i64[2];
  src[0] = *(_OWORD *)v65.m256i_i8;
  *((_QWORD *)&src[1] + 1) = v78;
  if ( v65.m256i_i64[2] )
  {
    for ( j = ((unsigned __int64)v65.m256i_i64[2] >> 1) - 1; j != -1LL; --j )
      binary_heap_plus::binary_heap::BinaryHeap<T,C>::sift_down_range(src, j, *(_QWORD *)&src[1]);
  }
  v55 = src[0];
  v56 = v79;
  *(_OWORD *)(v79 + 32) = src[1];
  *(_OWORD *)(v56 + 16) = v55;
  v57 = v75;
  *(_OWORD *)(v56 + 48) = *(_OWORD *)v81;
  result = v81[16];
  *(_QWORD *)(v56 + 64) = *(_QWORD *)&v81[16];
  *(_OWORD *)v56 = v57;
  *(_QWORD *)(v56 + 72) = 0LL;
  return result;
}
