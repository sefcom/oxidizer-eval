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
  char *v15; // r12
  __int64 v16; // r15
  __int64 v17; // rax
  __int64 v18; // r13
  __int64 v19; // r14
  _OWORD *v20; // r15
  char *v21; // rax
  char *v22; // rbx
  __int64 v23; // r12
  __int128 *v24; // rax
  __int64 v25; // rcx
  double v26; // xmm0_8
  __int64 v27; // rbx
  __int64 v28; // rax
  __int64 v29; // rcx
  __int128 v30; // xmm0
  __int128 v31; // xmm1
  __int128 v32; // xmm2
  __int64 v33; // rax
  __int64 v34; // r14
  unsigned __int64 v35; // rbx
  __int64 v36; // rax
  __int64 v37; // rcx
  __int128 *v38; // rax
  __int64 v39; // rax
  __int64 v40; // rcx
  __int128 v41; // xmm0
  __int128 v42; // xmm1
  __int128 v43; // xmm0
  __int64 v44; // rbx
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rbx
  __int64 v48; // rbx
  char v49; // al
  unsigned __int64 i; // rsi
  __int128 v51; // xmm0
  __int64 v52; // rcx
  __int128 v53; // xmm0
  char result; // al
  _QWORD *v55; // rax
  signed __int64 v56; // rax
  __int64 v57; // rcx
  signed __int64 v58; // rtt
  char v59; // al
  __int64 v60; // rdi
  __int64 j; // r14
  __int64 v62; // rbx
  char v63; // al
  __int64 v64; // rbx
  signed __int64 v65; // rax
  __int64 v66; // rcx
  signed __int64 v67; // rtt
  unsigned __int64 v68; // [rsp+50h] [rbp-4D8h]
  __int64 v69; // [rsp+58h] [rbp-4D0h]
  unsigned __int64 v70; // [rsp+60h] [rbp-4C8h]
  __int128 v71; // [rsp+68h] [rbp-4C0h] BYREF
  __int64 v72; // [rsp+78h] [rbp-4B0h]
  __int128 v73; // [rsp+80h] [rbp-4A8h] BYREF
  __int128 v74; // [rsp+90h] [rbp-498h]
  __int128 v75; // [rsp+A0h] [rbp-488h]
  unsigned __int64 v76; // [rsp+B0h] [rbp-478h]
  unsigned __int64 v77; // [rsp+B8h] [rbp-470h] BYREF
  __int128 *v78; // [rsp+C0h] [rbp-468h]
  __int64 v79; // [rsp+C8h] [rbp-460h]
  __int128 v80; // [rsp+D0h] [rbp-458h] BYREF
  __int128 v81; // [rsp+E0h] [rbp-448h] BYREF
  __int128 v82; // [rsp+F0h] [rbp-438h] BYREF
  __int128 *v83; // [rsp+100h] [rbp-428h]
  __int64 v84; // [rsp+108h] [rbp-420h]
  __int64 v85; // [rsp+110h] [rbp-418h]
  __int64 v86; // [rsp+118h] [rbp-410h]
  _BYTE v87[24]; // [rsp+120h] [rbp-408h]
  __int64 v88; // [rsp+138h] [rbp-3F0h]
  _OWORD v89[10]; // [rsp+148h] [rbp-3E0h] BYREF
  __int64 v90; // [rsp+1E8h] [rbp-340h]
  __int64 v91; // [rsp+1F0h] [rbp-338h]
  unsigned __int64 v92; // [rsp+1F8h] [rbp-330h]
  _OWORD src[50]; // [rsp+200h] [rbp-328h] BYREF

  v85 = a3;
  v3 = a2;
  v84 = a1;
  v83 = a2;
  std::sync::mpmc::channel(src);
  v81 = src[0];
  v82 = src[1];
  v4 = *((_QWORD *)a2 + 3);
  v5 = *((_QWORD *)a2 + 1);
  v6 = *((_QWORD *)v3 + 3) - v5;
  v7 = v6 / 0x18;
  v8 = v4 - v5;
  v90 = *((_QWORD *)&src[1] + 1);
  v91 = *(_QWORD *)&src[1];
  if ( v8 )
  {
    if ( v8 > 0x2AAAAAAAAAAAAAA8LL )
    {
      v9 = 0LL;
    }
    else
    {
      v9 = 8LL;
      v10 = _rust_alloc(72 * v7, 8LL);
      if ( v10 )
      {
        *(_QWORD *)&v71 = v6 / 0x18;
        *((_QWORD *)&v71 + 1) = v10;
        v72 = 0LL;
        v11 = _rust_alloc(16 * v7, 8LL);
        v3 = v83;
        if ( !v11 )
          alloc::raw_vec::handle_error(8LL, 16 * v7);
        goto LABEL_7;
      }
    }
    alloc::raw_vec::handle_error(v9, 72 * v7);
  }
  *(_QWORD *)&v71 = 0LL;
  *((_QWORD *)&v71 + 1) = 8LL;
  v72 = 0LL;
  v11 = 8LL;
LABEL_7:
  v77 = v6 / 0x18;
  v78 = (__int128 *)v11;
  v79 = 0LL;
  v12 = *v3;
  v13 = v3[1];
  v75 = v3[2];
  v74 = v13;
  v73 = v12;
  v76 = 0LL;
  v14 = *((_QWORD *)&v12 + 1);
  v86 = *((_QWORD *)&v13 + 1);
  if ( *((_QWORD *)&v12 + 1) == *((_QWORD *)&v13 + 1) )
  {
LABEL_23:
    core::ptr::drop_in_place<core::iter::adapters::map::Map<alloc::vec::into_iter::IntoIter<uu_sort::merge::ClosedPlainTmpFile>,alloc::boxed::Box<dyn core::ops::function::FnMut<(uu_sort::merge::ClosedPlainTmpFile,)>+Output = core::result::Result<uu_sort::merge::PlainTmpMergeInput,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>>(
      &v73,
      *(double *)&v12);
    v34 = v72;
    if ( v72 )
    {
      v35 = 0LL;
      do
      {
        v36 = _rust_alloc_zeroed(0x2000LL, 1LL);
        if ( !v36 )
          alloc::raw_vec::handle_error(1LL, 0x2000LL);
        src[1] = 8uLL;
        src[3] = 0LL;
        src[4] = 8uLL;
        src[0] = v35;
        *((_QWORD *)&src[2] + 1) = 8LL;
        *((_QWORD *)&src[5] + 1) = 8LL;
        *(_QWORD *)&src[6] = 0LL;
        *((_QWORD *)&src[6] + 1) = 0x2000LL;
        *(_QWORD *)&src[7] = v36;
        *((_QWORD *)&src[7] + 1) = 0x2000LL;
        std::sync::mpmc::Sender<T>::send(v89, &v81, src, v37);
        if ( *((_QWORD *)&v89[0] + 1) != 0x8000000000000000LL )
        {
          src[7] = v89[7];
          src[6] = v89[6];
          src[5] = v89[5];
          src[4] = v89[4];
          src[3] = v89[3];
          src[2] = v89[2];
          src[1] = v89[1];
          src[0] = v89[0];
          core::result::unwrap_failed(aCalledResultUn_4, 43LL, src, &off_1931F0, &off_193428);
        }
        ++v35;
      }
      while ( v34 != v35 );
    }
    <uu_sort::GlobalSettings as core::clone::Clone>::clone(v89, v85);
    *(_QWORD *)&src[0] = v91;
    *((_QWORD *)&src[0] + 1) = v90;
    src[1] = v71;
    *(_QWORD *)&src[2] = v72;
    memcpy((char *)&src[2] + 8, v89, 0xA0uLL);
    *(_QWORD *)&v89[1] = 0x8000000000000000LL;
    *(_QWORD *)&v89[0] = 0LL;
    std::thread::Builder::spawn_unchecked(&v73, v89, src);
    if ( !(_QWORD)v73 )
    {
      *(_QWORD *)&v89[0] = *((_QWORD *)&v73 + 1);
      core::result::unwrap_failed(aFailedToSpawnT, 22LL, v89, &off_1931D0, &off_193410);
    }
    *(_QWORD *)&v87[16] = v74;
    *(_OWORD *)v87 = v73;
    *(_QWORD *)&v73 = 0LL;
    *((_QWORD *)&v73 + 1) = 8LL;
    *(_QWORD *)&v74 = 0LL;
    v38 = v78;
    *(_QWORD *)&v89[0] = v78;
    *((_QWORD *)&v89[0] + 1) = v78;
    *(_QWORD *)&v89[1] = v77;
    *((_QWORD *)&v89[1] + 1) = &v78[v79];
    *(_QWORD *)&v89[2] = 0LL;
    if ( v79 )
    {
      do
      {
        *((_QWORD *)&v89[0] + 1) = v38 + 1;
        v43 = *v38;
        v44 = (*(_QWORD *)&v89[2])++;
        v80 = v43;
        v45 = std::sync::mpmc::Receiver<T>::recv(&v80);
        if ( v45 )
        {
          *(_QWORD *)&src[0] = 1LL;
          *((_QWORD *)&src[0] + 1) = 1LL;
          *(_QWORD *)&src[1] = v45;
          v46 = _rust_alloc(24LL, 8LL);
          if ( !v46 )
            alloc::alloc::handle_alloc_error(8LL, 24LL);
          *(_QWORD *)(v46 + 16) = *(_QWORD *)&src[1];
          *(_OWORD *)v46 = src[0];
          src[1] = (unsigned __int64)v46;
          src[0] = v80;
          *(_QWORD *)&src[2] = v44;
          v47 = v74;
          if ( (_QWORD)v74 == (_QWORD)v73 )
            alloc::raw_vec::RawVec<T,A>::grow_one(&v73);
          v39 = *((_QWORD *)&v73 + 1);
          v40 = 5 * v47;
          v41 = src[0];
          v42 = src[1];
          *(_QWORD *)(*((_QWORD *)&v73 + 1) + 8 * v40 + 32) = *(_QWORD *)&src[2];
          *(_OWORD *)(v39 + 8 * v40 + 16) = v42;
          *(_OWORD *)(v39 + 8 * v40) = v41;
          *(_QWORD *)&v74 = v47 + 1;
        }
        else if ( (_QWORD)v80 )
        {
          if ( (_DWORD)v80 == 1 )
            std::sync::mpmc::counter::Receiver<C>::release((char *)&v80 + 8);
          else
            std::sync::mpmc::counter::Receiver<C>::release((char *)&v80 + 8);
        }
        else
        {
          v48 = *((_QWORD *)&v80 + 1);
          if ( !_InterlockedDecrement64((volatile signed __int64 *)(*((_QWORD *)&v80 + 1) + 520LL)) )
          {
            std::sync::mpmc::array::Channel<T>::disconnect_receivers(v48);
            v49 = *(_BYTE *)(v48 + 528);
            *(_BYTE *)(v48 + 528) = 1;
            if ( v49 )
              core::ptr::drop_in_place<alloc::boxed::Box<std::sync::mpmc::counter::Counter<std::sync::mpmc::array::Channel<uu_sort::chunks::Chunk>>>>(v48);
          }
        }
        v38 = (__int128 *)*((_QWORD *)&v89[0] + 1);
      }
      while ( *((_QWORD *)&v89[0] + 1) != *((_QWORD *)&v89[1] + 1) );
    }
    <alloc::vec::into_iter::IntoIter<T,A> as core::ops::drop::Drop>::drop(v89);
    *(_QWORD *)&src[1] = v74;
    src[0] = v73;
    *((_QWORD *)&src[1] + 1) = v85;
    if ( (_QWORD)v74 )
    {
      for ( i = ((unsigned __int64)v74 >> 1) - 1; i != -1LL; --i )
        binary_heap_plus::binary_heap::BinaryHeap<T,C>::sift_down_range(src, i, *(_QWORD *)&src[1]);
    }
    v51 = src[0];
    v52 = v84;
    *(_OWORD *)(v84 + 32) = src[1];
    *(_OWORD *)(v52 + 16) = v51;
    v53 = v81;
    *(_OWORD *)(v52 + 48) = *(_OWORD *)v87;
    result = v87[16];
    *(_QWORD *)(v52 + 64) = *(_QWORD *)&v87[16];
    *(_OWORD *)v52 = v53;
    *(_QWORD *)(v52 + 72) = 0LL;
    return result;
  }
  v15 = (char *)src + 8;
  v16 = *((_QWORD *)&v12 + 1) + 24LL;
  v70 = 0LL;
  v92 = 0x8000000000000001LL;
  while ( 1 )
  {
    v17 = *(_QWORD *)(v16 - 24);
    if ( v17 == 0x8000000000000000LL )
      goto LABEL_22;
    v18 = v16 - 24;
    v12 = *(_OWORD *)(v16 - 24 + 8);
    *(_OWORD *)((char *)v89 + 8) = v12;
    *(_QWORD *)&v89[0] = v17;
    (*(void (__fastcall **)(_OWORD *, _QWORD, _OWORD *))(*((_QWORD *)&v75 + 1) + 32LL))(src, v75, v89);
    v19 = *(_QWORD *)&src[0];
    if ( *(_QWORD *)&src[0] == v92 )
    {
      v16 = v14 + 24;
      goto LABEL_22;
    }
    v69 = v16;
    v88 = *((_QWORD *)v15 + 2);
    *(_OWORD *)&v87[8] = *(_OWORD *)v15;
    v68 = v70 + 1;
    *(_QWORD *)v87 = *(_QWORD *)&src[0];
    std::sync::mpmc::array::Channel<T>::with_capacity(src, 2LL);
    v20 = v15;
    *(_QWORD *)&src[32] = 1LL;
    *((_QWORD *)&src[32] + 1) = 1LL;
    LOBYTE(src[33]) = 0;
    v21 = (char *)_rust_alloc(640LL, 128LL);
    if ( !v21 )
    {
      *((_QWORD *)&v73 + 1) = v69;
      v76 = v70 + 1;
      alloc::alloc::handle_alloc_error(128LL, 640LL);
    }
    v22 = v21;
    memcpy(v21, src, 0x280uLL);
    *(_QWORD *)&v80 = 0LL;
    *((_QWORD *)&v80 + 1) = v22;
    *(_QWORD *)&src[0] = 0LL;
    *((_QWORD *)&src[0] + 1) = v22;
    v23 = v79;
    if ( v79 == v77 )
      alloc::raw_vec::RawVec<T,A>::grow_one(&v77);
    v24 = v78;
    v25 = v23;
    *(_QWORD *)&v78[v25] = 0LL;
    *((_QWORD *)&v24[v25] + 1) = v22;
    v79 = v23 + 1;
    v26 = *(double *)&v87[8];
    if ( v19 == 0x8000000000000000LL )
      break;
    *(_QWORD *)&src[0] = 0LL;
    *((_QWORD *)&src[0] + 1) = v22;
    *(_QWORD *)&src[1] = v19;
    *(_OWORD *)((char *)&src[1] + 8) = *(_OWORD *)&v87[8];
    *((_QWORD *)&src[2] + 1) = v88;
    *(_QWORD *)&src[3] = 0LL;
    *((_QWORD *)&src[3] + 1) = 1LL;
    *(_QWORD *)&src[4] = 0LL;
    v27 = v72;
    if ( v72 == (_QWORD)v71 )
      alloc::raw_vec::RawVec<T,A>::grow_one(&v71, *(double *)&v87[8]);
    v28 = *((_QWORD *)&v71 + 1);
    v29 = 9 * v27;
    *(_QWORD *)(*((_QWORD *)&v71 + 1) + 8 * v29 + 64) = *(_QWORD *)&src[4];
    v30 = src[0];
    v31 = src[1];
    v32 = src[2];
    *(_OWORD *)(v28 + 8 * v29 + 48) = src[3];
    *(_OWORD *)(v28 + 8 * v29 + 32) = v32;
    *(_OWORD *)(v28 + 8 * v29 + 16) = v31;
    *(_OWORD *)(v28 + 8 * v29) = v30;
    v72 = v27 + 1;
    v33 = _rust_alloc_zeroed(0x2000LL, 1LL);
    if ( !v33 )
    {
      *((_QWORD *)&v73 + 1) = v69;
      v76 = v70 + 1;
      alloc::raw_vec::handle_error(1LL, 0x2000LL);
    }
    v15 = (char *)v20;
    *(_QWORD *)&v12 = 0LL;
    v20[1] = 0LL;
    *(_OWORD *)((char *)v20 + 40) = 0LL;
    v20[4] = 0LL;
    src[0] = v70;
    *(_QWORD *)&src[1] = 8LL;
    *((_QWORD *)&src[2] + 1) = 8LL;
    *(_QWORD *)&src[4] = 8LL;
    *((_QWORD *)&src[5] + 1) = 8LL;
    *(_QWORD *)&src[6] = 0LL;
    *((_QWORD *)&src[6] + 1) = 0x2000LL;
    *(_QWORD *)&src[7] = v33;
    *((_QWORD *)&src[7] + 1) = 0x2000LL;
    std::sync::mpmc::Sender<T>::send(v89, &v81, src, v70);
    if ( *((_QWORD *)&v89[0] + 1) != 0x8000000000000000LL )
    {
      *((_QWORD *)&v73 + 1) = v69;
      v76 = v70 + 1;
      src[7] = v89[7];
      src[6] = v89[6];
      src[5] = v89[5];
      src[4] = v89[4];
      src[3] = v89[3];
      src[2] = v89[2];
      src[1] = v89[1];
      src[0] = v89[0];
      core::result::unwrap_failed(aCalledResultUn_4, 43LL, src, &off_1931F0, &off_193440);
    }
    v16 = v69 + 24;
    ++v70;
    v14 = v18 + 24;
    if ( v18 + 24 == v86 )
    {
      v16 = v86;
      v70 = v68;
LABEL_22:
      *((_QWORD *)&v73 + 1) = v16;
      v76 = v70;
      goto LABEL_23;
    }
  }
  *((_QWORD *)&v73 + 1) = v69;
  v76 = v70 + 1;
  v55 = (_QWORD *)v84;
  *(_OWORD *)(v84 + 8) = *(_OWORD *)&v87[8];
  *v55 = 3LL;
  if ( !_InterlockedDecrement64((volatile signed __int64 *)v22 + 64) )
  {
    v56 = *((_QWORD *)v22 + 16);
    v57 = *((_QWORD *)v22 + 50);
    do
    {
      v58 = v56;
      v56 = _InterlockedCompareExchange64((volatile signed __int64 *)v22 + 16, v57 | v56, v56);
    }
    while ( v58 != v56 );
    if ( (v56 & *((_QWORD *)v22 + 50)) == 0 )
      std::sync::mpmc::waker::SyncWaker::disconnect(v22 + 320);
    v59 = v22[528];
    v22[528] = 1;
    if ( v59 )
      v26 = core::ptr::drop_in_place<alloc::boxed::Box<std::sync::mpmc::counter::Counter<std::sync::mpmc::array::Channel<uu_sort::chunks::Chunk>>>>(v22);
  }
  core::ptr::drop_in_place<core::iter::adapters::map::Map<alloc::vec::into_iter::IntoIter<uu_sort::merge::ClosedPlainTmpFile>,alloc::boxed::Box<dyn core::ops::function::FnMut<(uu_sort::merge::ClosedPlainTmpFile,)>+Output = core::result::Result<uu_sort::merge::PlainTmpMergeInput,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>>(
    &v73,
    v26);
  <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v77);
  if ( v77 )
    _rust_dealloc(v78, 16 * v77, 8LL);
  v60 = *((_QWORD *)&v71 + 1);
  for ( j = v72 + 1; j != 1; --j )
  {
    core::ptr::drop_in_place<core::option::Option<uu_sort::merge::ReaderFile<uu_sort::merge::PlainTmpMergeInput>>>(v26);
    v60 += 72LL;
  }
  if ( (_QWORD)v71 )
    _rust_dealloc(*((_QWORD *)&v71 + 1), 72 * v71, 8LL);
  if ( (_QWORD)v82 == 2LL )
  {
    std::sync::mpmc::counter::Receiver<C>::release((char *)&v82 + 8);
  }
  else if ( (_DWORD)v82 == 1 )
  {
    std::sync::mpmc::counter::Receiver<C>::release((char *)&v82 + 8);
  }
  else
  {
    v62 = *((_QWORD *)&v82 + 1);
    if ( !_InterlockedDecrement64((volatile signed __int64 *)(*((_QWORD *)&v82 + 1) + 520LL)) )
    {
      std::sync::mpmc::array::Channel<T>::disconnect_receivers(v62);
      v63 = *(_BYTE *)(v62 + 528);
      *(_BYTE *)(v62 + 528) = 1;
      if ( v63 )
        core::ptr::drop_in_place<alloc::boxed::Box<std::sync::mpmc::counter::Counter<std::sync::mpmc::array::Channel<(usize,uu_sort::chunks::RecycledChunk)>>>>(v62);
    }
  }
  result = v81;
  if ( (_QWORD)v81 == 2LL )
    return std::sync::mpmc::counter::Sender<C>::release((char *)&v81 + 8);
  if ( (_DWORD)v81 == 1 )
    return std::sync::mpmc::counter::Sender<C>::release((char *)&v81 + 8);
  v64 = *((_QWORD *)&v81 + 1);
  if ( !_InterlockedDecrement64((volatile signed __int64 *)(*((_QWORD *)&v81 + 1) + 512LL)) )
  {
    v65 = *(_QWORD *)(v64 + 128);
    v66 = *(_QWORD *)(v64 + 400);
    do
    {
      v67 = v65;
      v65 = _InterlockedCompareExchange64((volatile signed __int64 *)(v64 + 128), v66 | v65, v65);
    }
    while ( v67 != v65 );
    if ( (v65 & *(_QWORD *)(v64 + 400)) == 0 )
      std::sync::mpmc::waker::SyncWaker::disconnect(v64 + 320);
    result = *(_BYTE *)(v64 + 528);
    *(_BYTE *)(v64 + 528) = 1;
    if ( result )
      return core::ptr::drop_in_place<alloc::boxed::Box<std::sync::mpmc::counter::Counter<std::sync::mpmc::array::Channel<(usize,uu_sort::chunks::RecycledChunk)>>>>(v64);
  }
  return result;
}
