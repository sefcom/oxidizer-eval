char __fastcall uu_sort::merge::merge_without_limit(__int64 a1, _OWORD *a2, __int64 a3)
{
  unsigned __int128 v3; // kr00_16
  __int128 v4; // xmm1
  __int128 v5; // xmm2
  __int128 v6; // xmm3
  __int64 v7; // r12
  unsigned __int64 v8; // r14
  __int64 v9; // r12
  __int64 v10; // rax
  __int64 v11; // rcx
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm2
  __int64 v15; // rax
  __int64 v16; // rcx
  char *v17; // rax
  char *v18; // r13
  __int64 v19; // r15
  __int64 v20; // rax
  __int64 v21; // rcx
  double v22; // xmm0_8
  _QWORD *v23; // rax
  signed __int64 v24; // rax
  __int64 v25; // rcx
  signed __int64 v26; // rtt
  char v27; // al
  __int64 v28; // rbx
  unsigned __int64 v29; // r12
  __int64 v30; // rax
  __int128 *v31; // rax
  __int64 v32; // rax
  __int64 v33; // rcx
  __int128 v34; // xmm0
  __int128 v35; // xmm1
  __int128 v36; // xmm0
  __int64 v37; // r13
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // r13
  __int64 v41; // r13
  char v42; // al
  __int64 i; // rsi
  __int128 v44; // xmm0
  __int64 v45; // rcx
  __int128 v46; // xmm0
  char result; // al
  __int64 v48; // rbx
  char v49; // al
  __int64 v50; // rbx
  signed __int64 v51; // rax
  __int64 v52; // rcx
  signed __int64 v53; // rtt
  __int128 v54; // [rsp+58h] [rbp-550h] BYREF
  __int64 v55; // [rsp+68h] [rbp-540h]
  __int64 v56; // [rsp+70h] [rbp-538h] BYREF
  __int64 v57; // [rsp+78h] [rbp-530h]
  __int64 v58; // [rsp+80h] [rbp-528h]
  unsigned __int64 v59; // [rsp+88h] [rbp-520h]
  __int128 v60; // [rsp+90h] [rbp-518h] BYREF
  __int128 v61; // [rsp+A0h] [rbp-508h] BYREF
  _BYTE v62[80]; // [rsp+B0h] [rbp-4F8h] BYREF
  __int128 v63; // [rsp+100h] [rbp-4A8h]
  unsigned __int64 v64; // [rsp+110h] [rbp-498h]
  __int128 v65; // [rsp+120h] [rbp-488h] BYREF
  __int64 v66; // [rsp+130h] [rbp-478h]
  __int64 v67; // [rsp+138h] [rbp-470h]
  __int64 v68; // [rsp+140h] [rbp-468h]
  __int64 v69; // [rsp+148h] [rbp-460h]
  __int64 v70; // [rsp+150h] [rbp-458h]
  __int64 v71; // [rsp+158h] [rbp-450h]
  _OWORD v72[10]; // [rsp+160h] [rbp-448h] BYREF
  _OWORD src[47]; // [rsp+200h] [rbp-3A8h] BYREF
  _BYTE v74[24]; // [rsp+4F0h] [rbp-B8h]
  __int128 v75; // [rsp+508h] [rbp-A0h]
  __int128 v76; // [rsp+518h] [rbp-90h]
  __int128 v77; // [rsp+528h] [rbp-80h]
  __int64 v78; // [rsp+538h] [rbp-70h]

  v66 = a3;
  v67 = a1;
  std::sync::mpmc::channel(src);
  v61 = src[0];
  v3 = src[1];
  v68 = v3 >> 64;
  v69 = v3;
  v65 = src[1];
  *(_QWORD *)&v54 = 0LL;
  *((_QWORD *)&v54 + 1) = 8LL;
  v55 = 0LL;
  v56 = 0LL;
  v57 = 8LL;
  v58 = 0LL;
  v4 = a2[1];
  v5 = a2[2];
  v6 = a2[3];
  *(_OWORD *)v62 = *a2;
  v63 = a2[5];
  *(_OWORD *)&v62[64] = a2[4];
  *(_OWORD *)&v62[48] = v6;
  *(_OWORD *)&v62[32] = v5;
  *(_OWORD *)&v62[16] = v4;
  v7 = *(_QWORD *)v62;
  v70 = *((_QWORD *)&v63 + 1);
  v71 = v63;
  v8 = 0LL;
  v59 = 0x8000000000000000LL;
  if ( *(_QWORD *)v62 != 0x8000000000000001LL )
  {
    *((_QWORD *)&src[4] + 1) = *(_QWORD *)&v62[72];
    *(_OWORD *)((char *)&src[3] + 8) = *(_OWORD *)&v62[56];
    *(_OWORD *)((char *)&src[2] + 8) = *(_OWORD *)&v62[40];
    *(_OWORD *)((char *)&src[1] + 8) = *(_OWORD *)&v62[24];
    *(_OWORD *)((char *)src + 8) = *(_OWORD *)&v62[8];
    goto LABEL_10;
  }
  while ( 1 )
  {
    itertools::groupbylazy::IntoChunks<I>::step(src, v71, v70);
    v7 = *(_QWORD *)&src[0];
    if ( *(_QWORD *)&src[0] == 0x8000000000000001LL )
      break;
LABEL_10:
    v78 = *((_QWORD *)&src[4] + 1);
    v77 = *(_OWORD *)((char *)&src[3] + 8);
    v76 = *(_OWORD *)((char *)&src[2] + 8);
    v75 = *(_OWORD *)((char *)&src[1] + 8);
    *(_OWORD *)&v74[8] = *(_OWORD *)((char *)src + 8);
    *(_QWORD *)v74 = v7;
    std::sync::mpmc::array::Channel<T>::with_capacity(src, 2LL);
    *(_QWORD *)&src[32] = 1LL;
    *((_QWORD *)&src[32] + 1) = 1LL;
    LOBYTE(src[33]) = 0;
    v17 = (char *)_rust_alloc(640LL, 128LL);
    if ( !v17 )
    {
      *(_QWORD *)v62 = 0x8000000000000001LL;
      v64 = v8 + 1;
      alloc::alloc::handle_alloc_error(128LL, 640LL);
    }
    v18 = v17;
    memcpy(v17, src, 0x280uLL);
    *(_QWORD *)&v60 = 0LL;
    *((_QWORD *)&v60 + 1) = v18;
    *(_QWORD *)&src[0] = 0LL;
    *((_QWORD *)&src[0] + 1) = v18;
    v19 = v58;
    if ( v58 == v56 )
      alloc::raw_vec::RawVec<T,A>::grow_one(&v56);
    v20 = v57;
    v21 = 16 * v19;
    *(_QWORD *)(v57 + v21) = 0LL;
    *(_QWORD *)(v20 + v21 + 8) = v18;
    v58 = v19 + 1;
    v22 = *(double *)&v74[8];
    if ( v7 == v59 )
    {
      *(_QWORD *)v62 = 0x8000000000000001LL;
      v64 = v8 + 1;
      v23 = (_QWORD *)v67;
      *(_OWORD *)(v67 + 8) = *(_OWORD *)&v74[8];
      *v23 = 3LL;
      if ( !_InterlockedDecrement64((volatile signed __int64 *)v18 + 64) )
      {
        v24 = *((_QWORD *)v18 + 16);
        v25 = *((_QWORD *)v18 + 50);
        do
        {
          v26 = v24;
          v24 = _InterlockedCompareExchange64((volatile signed __int64 *)v18 + 16, v25 | v24, v24);
        }
        while ( v26 != v24 );
        if ( (v24 & *((_QWORD *)v18 + 50)) == 0 )
          std::sync::mpmc::waker::SyncWaker::disconnect(v18 + 320);
        v27 = v18[528];
        v18[528] = 1;
        if ( v27 )
          v22 = core::ptr::drop_in_place<alloc::boxed::Box<std::sync::mpmc::counter::Counter<std::sync::mpmc::array::Channel<uu_sort::chunks::Chunk>>>>(v18);
      }
      core::ptr::drop_in_place<itertools::groupbylazy::Chunk<core::iter::adapters::map::Map<alloc::vec::into_iter::IntoIter<uu_sort::merge::ClosedCompressedTmpFile>,alloc::boxed::Box<dyn core::ops::function::FnMut<(uu_sort::merge::ClosedCompressedTmpFile,)>+Output = core::result::Result<uu_sort::merge::CompressedTmpMergeInput,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>>>(v62);
      <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v56);
      if ( v56 )
        _rust_dealloc(v57, 16 * v56, 8LL);
      <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v54, v22);
      if ( (_QWORD)v54 )
        _rust_dealloc(*((_QWORD *)&v54 + 1), 120 * v54, 8LL);
      if ( (_QWORD)v65 == 2LL )
      {
        std::sync::mpmc::counter::Receiver<C>::release((char *)&v65 + 8);
      }
      else if ( (_DWORD)v65 == 1 )
      {
        std::sync::mpmc::counter::Receiver<C>::release((char *)&v65 + 8);
      }
      else
      {
        v48 = *((_QWORD *)&v65 + 1);
        if ( !_InterlockedDecrement64((volatile signed __int64 *)(*((_QWORD *)&v65 + 1) + 520LL)) )
        {
          std::sync::mpmc::array::Channel<T>::disconnect_receivers(v48);
          v49 = *(_BYTE *)(v48 + 528);
          *(_BYTE *)(v48 + 528) = 1;
          if ( v49 )
            core::ptr::drop_in_place<alloc::boxed::Box<std::sync::mpmc::counter::Counter<std::sync::mpmc::array::Channel<(usize,uu_sort::chunks::RecycledChunk)>>>>(v48);
        }
      }
      result = v61;
      if ( (_QWORD)v61 == 2LL )
        return std::sync::mpmc::counter::Sender<C>::release((char *)&v61 + 8);
      if ( (_DWORD)v61 == 1 )
        return std::sync::mpmc::counter::Sender<C>::release((char *)&v61 + 8);
      v50 = *((_QWORD *)&v61 + 1);
      if ( !_InterlockedDecrement64((volatile signed __int64 *)(*((_QWORD *)&v61 + 1) + 512LL)) )
      {
        v51 = *(_QWORD *)(v50 + 128);
        v52 = *(_QWORD *)(v50 + 400);
        do
        {
          v53 = v51;
          v51 = _InterlockedCompareExchange64((volatile signed __int64 *)(v50 + 128), v52 | v51, v51);
        }
        while ( v53 != v51 );
        if ( (v51 & *(_QWORD *)(v50 + 400)) == 0 )
          std::sync::mpmc::waker::SyncWaker::disconnect(v50 + 320);
        result = *(_BYTE *)(v50 + 528);
        *(_BYTE *)(v50 + 528) = 1;
        if ( result )
          return core::ptr::drop_in_place<alloc::boxed::Box<std::sync::mpmc::counter::Counter<std::sync::mpmc::array::Channel<(usize,uu_sort::chunks::RecycledChunk)>>>>(v50);
      }
      return result;
    }
    *((_QWORD *)&src[5] + 1) = v78;
    *(_OWORD *)((char *)&src[4] + 8) = v77;
    *(_OWORD *)((char *)&src[3] + 8) = v76;
    *(_OWORD *)((char *)&src[2] + 8) = v75;
    *(_QWORD *)&src[0] = 0LL;
    *((_QWORD *)&src[0] + 1) = v18;
    *(_QWORD *)&src[1] = v7;
    *(_OWORD *)((char *)&src[1] + 8) = *(_OWORD *)&v74[8];
    *(_QWORD *)&src[6] = 0LL;
    *((_QWORD *)&src[6] + 1) = 1LL;
    *(_QWORD *)&src[7] = 0LL;
    v9 = v55;
    if ( v55 == (_QWORD)v54 )
      alloc::raw_vec::RawVec<T,A>::grow_one(&v54, *(double *)&v74[8]);
    v10 = *((_QWORD *)&v54 + 1);
    v11 = 120 * v9;
    *(_QWORD *)(*((_QWORD *)&v54 + 1) + v11 + 112) = *(_QWORD *)&src[7];
    *(_OWORD *)(v10 + v11 + 96) = src[6];
    *(_OWORD *)(v10 + v11 + 80) = src[5];
    *(_OWORD *)(v10 + v11 + 64) = src[4];
    v12 = src[0];
    v13 = src[1];
    v14 = src[2];
    *(_OWORD *)(v10 + v11 + 48) = src[3];
    *(_OWORD *)(v10 + v11 + 32) = v14;
    *(_OWORD *)(v10 + v11 + 16) = v13;
    *(_OWORD *)(v10 + v11) = v12;
    v55 = v9 + 1;
    v15 = _rust_alloc_zeroed(0x2000LL, 1LL);
    if ( !v15 )
    {
      *(_QWORD *)v62 = 0x8000000000000001LL;
      v64 = v8 + 1;
      alloc::raw_vec::handle_error(1LL, 0x2000LL);
    }
    src[1] = 8uLL;
    src[3] = 0LL;
    src[4] = 8uLL;
    src[0] = v8;
    *((_QWORD *)&src[2] + 1) = 8LL;
    *((_QWORD *)&src[5] + 1) = 8LL;
    *(_QWORD *)&src[6] = 0LL;
    *((_QWORD *)&src[6] + 1) = 0x2000LL;
    *(_QWORD *)&src[7] = v15;
    *((_QWORD *)&src[7] + 1) = 0x2000LL;
    std::sync::mpmc::Sender<T>::send(v72, &v61, src, v16);
    if ( *((_QWORD *)&v72[0] + 1) != v59 )
    {
      *(_QWORD *)v62 = 0x8000000000000001LL;
      v64 = v8 + 1;
      src[7] = v72[7];
      src[6] = v72[6];
      src[5] = v72[5];
      src[4] = v72[4];
      src[3] = v72[3];
      src[2] = v72[2];
      src[1] = v72[1];
      src[0] = v72[0];
      core::result::unwrap_failed(aCalledResultUn_4, 43LL, src, &off_1931F0, &off_193440);
    }
    ++v8;
  }
  *(_QWORD *)v62 = 0x8000000000000001LL;
  v64 = v8;
  core::ptr::drop_in_place<itertools::groupbylazy::Chunk<core::iter::adapters::map::Map<alloc::vec::into_iter::IntoIter<uu_sort::merge::ClosedCompressedTmpFile>,alloc::boxed::Box<dyn core::ops::function::FnMut<(uu_sort::merge::ClosedCompressedTmpFile,)>+Output = core::result::Result<uu_sort::merge::CompressedTmpMergeInput,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>>>(v62);
  v28 = v55;
  if ( v55 )
  {
    v29 = 0LL;
    do
    {
      v30 = _rust_alloc_zeroed(0x2000LL, 1LL);
      if ( !v30 )
        alloc::raw_vec::handle_error(1LL, 0x2000LL);
      src[1] = 8uLL;
      src[3] = 0LL;
      src[4] = 8uLL;
      src[0] = v29;
      *((_QWORD *)&src[2] + 1) = 8LL;
      *((_QWORD *)&src[5] + 1) = 8LL;
      *(_QWORD *)&src[6] = 0LL;
      *((_QWORD *)&src[6] + 1) = 0x2000LL;
      *(_QWORD *)&src[7] = v30;
      *((_QWORD *)&src[7] + 1) = 0x2000LL;
      std::sync::mpmc::Sender<T>::send(v72, &v61, src, (char *)src + 8);
      if ( *((_QWORD *)&v72[0] + 1) != v59 )
      {
        src[7] = v72[7];
        src[6] = v72[6];
        src[5] = v72[5];
        src[4] = v72[4];
        src[3] = v72[3];
        src[2] = v72[2];
        src[1] = v72[1];
        src[0] = v72[0];
        core::result::unwrap_failed(aCalledResultUn_4, 43LL, src, &off_1931F0, &off_193428);
      }
      ++v29;
    }
    while ( v28 != v29 );
  }
  <uu_sort::GlobalSettings as core::clone::Clone>::clone(v72, v66);
  *(_QWORD *)&src[0] = v69;
  *((_QWORD *)&src[0] + 1) = v68;
  src[1] = v54;
  *(_QWORD *)&src[2] = v55;
  memcpy((char *)&src[2] + 8, v72, 0xA0uLL);
  *(_QWORD *)&v72[1] = v59;
  *(_QWORD *)&v72[0] = 0LL;
  std::thread::Builder::spawn_unchecked(v62, v72, src);
  if ( !*(_QWORD *)v62 )
  {
    *(_QWORD *)&v72[0] = *(_QWORD *)&v62[8];
    core::result::unwrap_failed(aFailedToSpawnT, 22LL, v72, &off_1931D0, &off_193410);
  }
  *(_QWORD *)&v74[16] = *(_QWORD *)&v62[16];
  *(_OWORD *)v74 = *(_OWORD *)v62;
  *(_QWORD *)v62 = 0LL;
  *(_QWORD *)&v62[8] = 8LL;
  *(_QWORD *)&v62[16] = 0LL;
  v31 = (__int128 *)v57;
  *(_QWORD *)&v72[0] = v57;
  *((_QWORD *)&v72[0] + 1) = v57;
  *(_QWORD *)&v72[1] = v56;
  *((_QWORD *)&v72[1] + 1) = v57 + 16 * v58;
  *(_QWORD *)&v72[2] = 0LL;
  if ( v58 )
  {
    do
    {
      *((_QWORD *)&v72[0] + 1) = v31 + 1;
      v36 = *v31;
      v37 = (*(_QWORD *)&v72[2])++;
      v60 = v36;
      v38 = std::sync::mpmc::Receiver<T>::recv(&v60);
      if ( v38 )
      {
        *(_QWORD *)&src[0] = 1LL;
        *((_QWORD *)&src[0] + 1) = 1LL;
        *(_QWORD *)&src[1] = v38;
        v39 = _rust_alloc(24LL, 8LL);
        if ( !v39 )
          alloc::alloc::handle_alloc_error(8LL, 24LL);
        *(_QWORD *)(v39 + 16) = *(_QWORD *)&src[1];
        *(_OWORD *)v39 = src[0];
        src[1] = (unsigned __int64)v39;
        src[0] = v60;
        *(_QWORD *)&src[2] = v37;
        v40 = *(_QWORD *)&v62[16];
        if ( *(_QWORD *)&v62[16] == *(_QWORD *)v62 )
          alloc::raw_vec::RawVec<T,A>::grow_one(v62);
        v32 = *(_QWORD *)&v62[8];
        v33 = 5 * v40;
        v34 = src[0];
        v35 = src[1];
        *(_QWORD *)(*(_QWORD *)&v62[8] + 8 * v33 + 32) = *(_QWORD *)&src[2];
        *(_OWORD *)(v32 + 8 * v33 + 16) = v35;
        *(_OWORD *)(v32 + 8 * v33) = v34;
        *(_QWORD *)&v62[16] = v40 + 1;
      }
      else if ( (_QWORD)v60 )
      {
        if ( (_DWORD)v60 == 1 )
          std::sync::mpmc::counter::Receiver<C>::release((char *)&v60 + 8);
        else
          std::sync::mpmc::counter::Receiver<C>::release((char *)&v60 + 8);
      }
      else
      {
        v41 = *((_QWORD *)&v60 + 1);
        if ( !_InterlockedDecrement64((volatile signed __int64 *)(*((_QWORD *)&v60 + 1) + 520LL)) )
        {
          std::sync::mpmc::array::Channel<T>::disconnect_receivers(v41);
          v42 = *(_BYTE *)(v41 + 528);
          *(_BYTE *)(v41 + 528) = 1;
          if ( v42 )
            core::ptr::drop_in_place<alloc::boxed::Box<std::sync::mpmc::counter::Counter<std::sync::mpmc::array::Channel<uu_sort::chunks::Chunk>>>>(v41);
        }
      }
      v31 = (__int128 *)*((_QWORD *)&v72[0] + 1);
    }
    while ( *((_QWORD *)&v72[0] + 1) != *((_QWORD *)&v72[1] + 1) );
  }
  <alloc::vec::into_iter::IntoIter<T,A> as core::ops::drop::Drop>::drop(v72);
  *(_QWORD *)&src[1] = *(_QWORD *)&v62[16];
  src[0] = *(_OWORD *)v62;
  *((_QWORD *)&src[1] + 1) = v66;
  if ( *(_QWORD *)&v62[16] )
  {
    for ( i = (*(_QWORD *)&v62[16] >> 1) - 1LL; i != -1; --i )
      binary_heap_plus::binary_heap::BinaryHeap<T,C>::sift_down_range(src, i, *(_QWORD *)&src[1]);
  }
  v44 = src[0];
  v45 = v67;
  *(_OWORD *)(v67 + 32) = src[1];
  *(_OWORD *)(v45 + 16) = v44;
  v46 = v61;
  *(_OWORD *)(v45 + 48) = *(_OWORD *)v74;
  result = v74[16];
  *(_QWORD *)(v45 + 64) = *(_QWORD *)&v74[16];
  *(_OWORD *)v45 = v46;
  *(_QWORD *)(v45 + 72) = 0LL;
  return result;
}
