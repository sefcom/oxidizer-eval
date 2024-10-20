__int64 __fastcall uu_sort::merge::FileMerger::write_all(__int128 *a1, unsigned __int64 a2, __int64 *a3)
{
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  __int128 v6; // xmm2
  bool v7; // al
  __int64 v8; // r14
  _QWORD *v9; // rbx
  bool v10; // zf
  unsigned __int64 v11; // rbp
  __int128 v12; // xmm0
  __int64 v13; // rax
  unsigned __int64 v14; // rsi
  unsigned __int8 **v15; // r13
  _QWORD *v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // r14
  __int64 v20; // rbx
  _QWORD *v21; // r13
  __int64 v22; // rdi
  __int64 v23; // rbx
  __int64 v24; // rsi
  __int64 v25; // rcx
  __int64 v26; // rbx
  __int64 v27; // r14
  __int64 v28; // r14
  char v29; // al
  __int64 v30; // r14
  signed __int64 v31; // rax
  __int64 v32; // rcx
  signed __int64 v33; // rtt
  char v34; // al
  __int64 v35; // r14
  __int64 v36; // rbx
  char v38; // [rsp+Fh] [rbp-269h]
  __int128 v39; // [rsp+10h] [rbp-268h] BYREF
  __int128 v40; // [rsp+20h] [rbp-258h] BYREF
  __int128 v41; // [rsp+30h] [rbp-248h]
  __int128 v42; // [rsp+40h] [rbp-238h]
  __m256i v43; // [rsp+50h] [rbp-228h]
  char **v44; // [rsp+78h] [rbp-200h]
  __int128 v45; // [rsp+80h] [rbp-1F8h]
  __int64 v46; // [rsp+90h] [rbp-1E8h]
  _BYTE v47[24]; // [rsp+A0h] [rbp-1D8h] BYREF
  __int128 v48; // [rsp+B8h] [rbp-1C0h]
  __int128 v49; // [rsp+C8h] [rbp-1B0h]
  __int128 v50; // [rsp+D8h] [rbp-1A0h]
  __int128 v51; // [rsp+E8h] [rbp-190h]
  __int128 v52; // [rsp+F8h] [rbp-180h]
  __int128 v53; // [rsp+108h] [rbp-170h]
  __int64 v54; // [rsp+118h] [rbp-160h]
  _OWORD v55[7]; // [rsp+120h] [rbp-158h] BYREF
  __int64 v56; // [rsp+190h] [rbp-E8h]
  _QWORD v57[6]; // [rsp+198h] [rbp-E0h] BYREF
  __int64 v58; // [rsp+1C8h] [rbp-B0h] BYREF
  _OWORD v59[10]; // [rsp+1D0h] [rbp-A8h] BYREF

  uu_sort::Output::into_write((__int64)v57, a3);
  v43 = *(__m256i *)((_BYTE *)a1 + 2);
  v4 = *a1;
  v5 = a1[1];
  v6 = a1[2];
  v42 = a1[3];
  v41 = v6;
  v40 = v5;
  v39 = v4;
  v38 = *(_BYTE *)(a2 + 132);
  v7 = (_QWORD)v6 == 0LL;
  v44 = &off_1934D0;
  while ( !v7 )
  {
    v8 = *((_QWORD *)&v40 + 1);
    v9 = *(_QWORD **)(*((_QWORD *)&v40 + 1) + 16LL);
    v10 = (*v9)++ == -1LL;
    if ( v10 )
      BUG();
    v11 = *(_QWORD *)(v8 + 24);
    v12 = *(_OWORD *)(v8 + 24);
    v46 = v43.m256i_i64[3];
    v45 = *(_OWORD *)&v43.m256i_u64[1];
    v43.m256i_i64[1] = (__int64)v9;
    *(_OWORD *)&v43.m256i_u64[2] = v12;
    v13 = v9[2];
    v14 = *(_QWORD *)(v13 + 40);
    if ( v11 >= v14 )
      goto LABEL_64;
    v15 = (unsigned __int8 **)(*(_QWORD *)(v13 + 32) + 24 * v11);
    if ( !v38 || !(_QWORD)v45 )
      goto LABEL_11;
    v16 = *(_QWORD **)(v45 + 16);
    v14 = v16[5];
    if ( *((_QWORD *)&v45 + 1) >= v14 )
    {
      v11 = *((_QWORD *)&v45 + 1);
      v44 = &off_1934E8;
LABEL_64:
      core::panicking::panic_bounds_check(v11, v14, v44);
    }
    if ( (unsigned __int8)uu_sort::compare_by(
                            (unsigned __int8 **)(v16[4] + 24LL * *((_QWORD *)&v45 + 1)),
                            v15,
                            a2,
                            v16 + 6,
                            (_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 16) + 16LL) + 48LL)) )
LABEL_11:
      uu_sort::Line::print((__int64)v15, v57, a2);
    if ( *(_QWORD *)(v9[2] + 40LL) != v11 + 1 )
    {
      if ( !(_QWORD)v41 )
        core::option::unwrap_failed(&off_1934A0);
      ++*(_QWORD *)(*((_QWORD *)&v40 + 1) + 24LL);
      binary_heap_plus::binary_heap::BinaryHeap<T,C>::sift_down_range(&v40, 0LL, v41);
      goto LABEL_22;
    }
    v17 = std::sync::mpmc::Receiver<T>::recv(v8);
    *(_QWORD *)&v55[0] = v17;
    if ( !v17 )
    {
      binary_heap_plus::binary_heap::BinaryHeap<T,C>::pop(v47, &v40);
      v26 = *(_QWORD *)v47;
      if ( *(_QWORD *)v47 == 3LL )
        goto LABEL_40;
      v27 = *(_QWORD *)&v47[16];
      v10 = (**(_QWORD **)&v47[16])-- == 1LL;
      if ( v10
        && (self_cell::unsafe_self_cell::UnsafeSelfCell<ContainedIn,Owner,DependentStatic>::drop_joined(v27 + 16),
            v10 = *(_QWORD *)(v27 + 8) == 1LL,
            --*(_QWORD *)(v27 + 8),
            v10) )
      {
        _rust_dealloc(v27, 24LL, 8LL);
        if ( v26 )
          goto LABEL_33;
      }
      else if ( v26 )
      {
LABEL_33:
        if ( (_DWORD)v26 == 1 )
          std::sync::mpmc::counter::Receiver<C>::release(&v47[8]);
        else
          std::sync::mpmc::counter::Receiver<C>::release(&v47[8]);
LABEL_40:
        if ( *(_QWORD *)&v55[0] )
          self_cell::unsafe_self_cell::UnsafeSelfCell<ContainedIn,Owner,DependentStatic>::drop_joined(v55);
        goto LABEL_22;
      }
      v28 = *(_QWORD *)&v47[8];
      if ( !_InterlockedDecrement64((volatile signed __int64 *)(*(_QWORD *)&v47[8] + 520LL)) )
      {
        std::sync::mpmc::array::Channel<T>::disconnect_receivers(v28);
        v29 = *(_BYTE *)(v28 + 528);
        *(_BYTE *)(v28 + 528) = 1;
        if ( v29 )
          core::ptr::drop_in_place<alloc::boxed::Box<std::sync::mpmc::counter::Counter<std::sync::mpmc::array::Channel<uu_sort::chunks::Chunk>>>>(v28);
      }
      goto LABEL_40;
    }
    v58 = v17;
    if ( !(_QWORD)v41 )
      core::option::unwrap_failed(&off_1934B8);
    *(_QWORD *)v47 = 1LL;
    *(_QWORD *)&v47[8] = 1LL;
    *(_QWORD *)&v47[16] = v17;
    v18 = _rust_alloc(24LL, 8LL);
    if ( !v18 )
      alloc::alloc::handle_alloc_error(8LL, 24LL);
    v19 = v18;
    *(_QWORD *)(v18 + 16) = *(_QWORD *)&v47[16];
    *(_OWORD *)v18 = *(_OWORD *)v47;
    v20 = *((_QWORD *)&v40 + 1);
    v21 = *(_QWORD **)(*((_QWORD *)&v40 + 1) + 16LL);
    v10 = (*v21)-- == 1LL;
    if ( v10 )
    {
      self_cell::unsafe_self_cell::UnsafeSelfCell<ContainedIn,Owner,DependentStatic>::drop_joined(v21 + 2);
      v10 = v21[1]-- == 1LL;
      if ( v10 )
        _rust_dealloc(v21, 24LL, 8LL);
    }
    *(_QWORD *)(v20 + 16) = v19;
    *(_QWORD *)(*((_QWORD *)&v40 + 1) + 24LL) = 0LL;
    binary_heap_plus::binary_heap::BinaryHeap<T,C>::sift_down_range(&v40, 0LL, v41);
LABEL_22:
    v22 = v45;
    if ( (_QWORD)v45 )
    {
      if ( *(_QWORD *)v45 == 1LL )
      {
        v23 = v46;
        v24 = *(_QWORD *)(v45 + 16);
        *(_QWORD *)v45 = 0LL;
        if ( v22 != -1 )
        {
          v10 = (*(_QWORD *)(v22 + 8))-- == 1LL;
          if ( v10 )
            _rust_dealloc(v22, 24LL, 8LL);
        }
        uu_sort::chunks::Chunk::recycle(v55, v24);
        *(_QWORD *)v47 = v23;
        v54 = v56;
        v53 = v55[6];
        v52 = v55[5];
        v51 = v55[4];
        v50 = v55[3];
        v49 = v55[2];
        v48 = v55[1];
        *(_OWORD *)&v47[8] = v55[0];
        std::sync::mpmc::Sender<T>::send(&v58, &v39, v47, v25);
        if ( *(_QWORD *)&v59[0] != 0x8000000000000000LL )
          core::ptr::drop_in_place<uu_sort::chunks::RecycledChunk>(v59);
      }
      else
      {
        --*(_QWORD *)v45;
      }
    }
    v7 = 0;
    if ( !(_QWORD)v41 )
      break;
  }
  v30 = *((_QWORD *)&v39 + 1);
  *(_OWORD *)v47 = v39;
  if ( (_QWORD)v39 )
  {
    if ( (_DWORD)v39 == 1 )
      std::sync::mpmc::counter::Sender<C>::release(&v47[8]);
    else
      std::sync::mpmc::counter::Sender<C>::release(&v47[8]);
  }
  else if ( !_InterlockedDecrement64((volatile signed __int64 *)(*((_QWORD *)&v39 + 1) + 512LL)) )
  {
    v31 = *(_QWORD *)(v30 + 128);
    v32 = *(_QWORD *)(v30 + 400);
    do
    {
      v33 = v31;
      v31 = _InterlockedCompareExchange64((volatile signed __int64 *)(v30 + 128), v32 | v31, v31);
    }
    while ( v33 != v31 );
    if ( (v31 & *(_QWORD *)(v30 + 400)) == 0 )
      std::sync::mpmc::waker::SyncWaker::disconnect(v30 + 320);
    v34 = *(_BYTE *)(v30 + 528);
    *(_BYTE *)(v30 + 528) = 1;
    if ( v34 )
      core::ptr::drop_in_place<alloc::boxed::Box<std::sync::mpmc::counter::Counter<std::sync::mpmc::array::Channel<(usize,uu_sort::chunks::RecycledChunk)>>>>(v30);
  }
  *(_QWORD *)&v47[16] = v43.m256i_i64[0];
  *(_OWORD *)v47 = v42;
  std::thread::JoinInner<T>::join(&v58, v47);
  if ( v58 )
  {
    *(_OWORD *)v47 = v59[0];
    core::result::unwrap_failed(aCalledResultUn_4, 43LL, v47, &off_193210, &off_193488);
  }
  v35 = *(_QWORD *)&v59[0];
  <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v40);
  if ( (_QWORD)v40 )
    _rust_dealloc(*((_QWORD *)&v40 + 1), 40 * v40, 8LL);
  v36 = v43.m256i_i64[1];
  if ( v43.m256i_i64[1] )
  {
    v10 = (*(_QWORD *)v43.m256i_i64[1])-- == 1LL;
    if ( v10 )
    {
      self_cell::unsafe_self_cell::UnsafeSelfCell<ContainedIn,Owner,DependentStatic>::drop_joined(v36 + 16);
      v10 = (*(_QWORD *)(v36 + 8))-- == 1LL;
      if ( v10 )
        _rust_dealloc(v36, 24LL, 8LL);
    }
  }
  core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<alloc::boxed::Box<dyn std::io::Write>>>(v57);
  return v35;
}
