__int64 __fastcall uu_sort::merge::FileMerger::write_all_to(__int64 *a1, unsigned __int64 a2, _QWORD *a3)
{
  bool v4; // al
  __int64 v5; // rbp
  _QWORD *v6; // r12
  bool v7; // zf
  unsigned __int64 v8; // r15
  __int128 v9; // xmm0
  __int64 v10; // rax
  unsigned __int64 v11; // rsi
  unsigned __int8 **v12; // rbx
  _QWORD *v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rbx
  __int64 v17; // r12
  _QWORD *v18; // r15
  __int64 v19; // rsi
  __int64 v20; // r15
  __int64 v21; // rbx
  __int64 v22; // rbx
  char v23; // al
  __int64 v24; // rax
  __int64 v25; // rbx
  signed __int64 v26; // rax
  __int64 v27; // rcx
  signed __int64 v28; // rtt
  char v29; // al
  __int64 v30; // r15
  _QWORD *v31; // rbx
  char v33; // [rsp+7h] [rbp-1E1h]
  _QWORD *v34; // [rsp+8h] [rbp-1E0h]
  __int128 *v35; // [rsp+10h] [rbp-1D8h]
  char **v36; // [rsp+18h] [rbp-1D0h]
  __int128 v37; // [rsp+20h] [rbp-1C8h]
  __int64 v38; // [rsp+30h] [rbp-1B8h]
  _BYTE v40[24]; // [rsp+40h] [rbp-1A8h] BYREF
  __int128 v41; // [rsp+58h] [rbp-190h]
  __int128 v42; // [rsp+68h] [rbp-180h]
  __int128 v43; // [rsp+78h] [rbp-170h]
  __int128 v44; // [rsp+88h] [rbp-160h]
  __int128 v45; // [rsp+98h] [rbp-150h]
  __int128 v46; // [rsp+A8h] [rbp-140h]
  __int64 v47; // [rsp+B8h] [rbp-130h]
  _OWORD v48[7]; // [rsp+C0h] [rbp-128h] BYREF
  __int64 v49; // [rsp+130h] [rbp-B8h]
  __int64 v50; // [rsp+138h] [rbp-B0h] BYREF
  _OWORD v51[10]; // [rsp+140h] [rbp-A8h] BYREF

  v34 = a1 + 2;
  v35 = (__int128 *)(a1 + 9);
  v33 = *(_BYTE *)(a2 + 132);
  v4 = a1[4] == 0;
  v36 = &off_1934D0;
  while ( !v4 )
  {
    v5 = a1[3];
    v6 = *(_QWORD **)(v5 + 16);
    v7 = (*v6)++ == -1LL;
    if ( v7 )
      BUG();
    v8 = *(_QWORD *)(v5 + 24);
    v9 = *(_OWORD *)(v5 + 24);
    v38 = a1[11];
    v37 = *v35;
    a1[9] = (__int64)v6;
    *((_OWORD *)a1 + 5) = v9;
    v10 = v6[2];
    v11 = *(_QWORD *)(v10 + 40);
    if ( v8 >= v11 )
      goto LABEL_64;
    v12 = (unsigned __int8 **)(*(_QWORD *)(v10 + 32) + 24 * v8);
    if ( !v33 || !(_QWORD)v37 )
      goto LABEL_11;
    v13 = *(_QWORD **)(v37 + 16);
    v11 = v13[5];
    if ( *((_QWORD *)&v37 + 1) >= v11 )
    {
      v8 = *((_QWORD *)&v37 + 1);
      v36 = &off_1934E8;
LABEL_64:
      core::panicking::panic_bounds_check(v8, v11, v36);
    }
    if ( (unsigned __int8)uu_sort::compare_by(
                            (unsigned __int8 **)(v13[4] + 24LL * *((_QWORD *)&v37 + 1)),
                            v12,
                            a2,
                            v13 + 6,
                            (_QWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 16) + 16LL) + 48LL)) )
LABEL_11:
      uu_sort::Line::print((__int64)v12, a3, a2);
    if ( *(_QWORD *)(v6[2] + 40LL) != v8 + 1 )
    {
      if ( !a1[4] )
        core::option::unwrap_failed(&off_1934A0);
      ++*(_QWORD *)(a1[3] + 24);
      binary_heap_plus::binary_heap::BinaryHeap<T,C>::sift_down_range(v34, 0LL, a1[4]);
      goto LABEL_22;
    }
    v14 = std::sync::mpmc::Receiver<T>::recv(v5);
    *(_QWORD *)&v48[0] = v14;
    if ( !v14 )
    {
      binary_heap_plus::binary_heap::BinaryHeap<T,C>::pop(v40, v34);
      v20 = *(_QWORD *)v40;
      if ( *(_QWORD *)v40 == 3LL )
        goto LABEL_40;
      v21 = *(_QWORD *)&v40[16];
      v7 = (**(_QWORD **)&v40[16])-- == 1LL;
      if ( v7
        && (self_cell::unsafe_self_cell::UnsafeSelfCell<ContainedIn,Owner,DependentStatic>::drop_joined(v21 + 16),
            v7 = *(_QWORD *)(v21 + 8) == 1LL,
            --*(_QWORD *)(v21 + 8),
            v7) )
      {
        _rust_dealloc(v21, 24LL, 8LL);
        if ( v20 )
          goto LABEL_33;
      }
      else if ( v20 )
      {
LABEL_33:
        if ( (_DWORD)v20 == 1 )
          std::sync::mpmc::counter::Receiver<C>::release(&v40[8]);
        else
          std::sync::mpmc::counter::Receiver<C>::release(&v40[8]);
LABEL_40:
        if ( *(_QWORD *)&v48[0] )
          self_cell::unsafe_self_cell::UnsafeSelfCell<ContainedIn,Owner,DependentStatic>::drop_joined(v48);
        goto LABEL_22;
      }
      v22 = *(_QWORD *)&v40[8];
      if ( !_InterlockedDecrement64((volatile signed __int64 *)(*(_QWORD *)&v40[8] + 520LL)) )
      {
        std::sync::mpmc::array::Channel<T>::disconnect_receivers(v22);
        v23 = *(_BYTE *)(v22 + 528);
        *(_BYTE *)(v22 + 528) = 1;
        if ( v23 )
          core::ptr::drop_in_place<alloc::boxed::Box<std::sync::mpmc::counter::Counter<std::sync::mpmc::array::Channel<uu_sort::chunks::Chunk>>>>(v22);
      }
      goto LABEL_40;
    }
    v50 = v14;
    if ( !a1[4] )
      core::option::unwrap_failed(&off_1934B8);
    *(_QWORD *)v40 = 1LL;
    *(_QWORD *)&v40[8] = 1LL;
    *(_QWORD *)&v40[16] = v14;
    v15 = _rust_alloc(24LL, 8LL);
    if ( !v15 )
      alloc::alloc::handle_alloc_error(8LL, 24LL);
    v16 = v15;
    *(_QWORD *)(v15 + 16) = *(_QWORD *)&v40[16];
    *(_OWORD *)v15 = *(_OWORD *)v40;
    v17 = a1[3];
    v18 = *(_QWORD **)(v17 + 16);
    v7 = (*v18)-- == 1LL;
    if ( v7 )
    {
      self_cell::unsafe_self_cell::UnsafeSelfCell<ContainedIn,Owner,DependentStatic>::drop_joined(v18 + 2);
      v7 = v18[1]-- == 1LL;
      if ( v7 )
        _rust_dealloc(v18, 24LL, 8LL);
    }
    *(_QWORD *)(v17 + 16) = v16;
    *(_QWORD *)(a1[3] + 24) = 0LL;
    binary_heap_plus::binary_heap::BinaryHeap<T,C>::sift_down_range(v34, 0LL, a1[4]);
LABEL_22:
    if ( (_QWORD)v37 )
    {
      if ( *(_QWORD *)v37 == 1LL )
      {
        v19 = *(_QWORD *)(v37 + 16);
        *(_QWORD *)v37 = 0LL;
        if ( (_QWORD)v37 != -1LL )
        {
          v7 = (*(_QWORD *)(v37 + 8))-- == 1LL;
          if ( v7 )
            _rust_dealloc(v37, 24LL, 8LL);
        }
        uu_sort::chunks::Chunk::recycle(v48, v19);
        *(_QWORD *)v40 = v38;
        v47 = v49;
        v46 = v48[6];
        v45 = v48[5];
        v44 = v48[4];
        v43 = v48[3];
        v42 = v48[2];
        v41 = v48[1];
        *(_OWORD *)&v40[8] = v48[0];
        std::sync::mpmc::Sender<T>::send(&v50, a1, v40, &v40[16]);
        if ( *(_QWORD *)&v51[0] != 0x8000000000000000LL )
          core::ptr::drop_in_place<uu_sort::chunks::RecycledChunk>(v51);
      }
      else
      {
        --*(_QWORD *)v37;
      }
    }
    v4 = 0;
    if ( !a1[4] )
      break;
  }
  v24 = *a1;
  v25 = a1[1];
  *(_QWORD *)v40 = v24;
  *(_QWORD *)&v40[8] = v25;
  if ( v24 )
  {
    if ( (_DWORD)v24 == 1 )
      std::sync::mpmc::counter::Sender<C>::release(&v40[8]);
    else
      std::sync::mpmc::counter::Sender<C>::release(&v40[8]);
  }
  else if ( !_InterlockedDecrement64((volatile signed __int64 *)(v25 + 512)) )
  {
    v26 = *(_QWORD *)(v25 + 128);
    v27 = *(_QWORD *)(v25 + 400);
    do
    {
      v28 = v26;
      v26 = _InterlockedCompareExchange64((volatile signed __int64 *)(v25 + 128), v27 | v26, v26);
    }
    while ( v28 != v26 );
    if ( (v26 & *(_QWORD *)(v25 + 400)) == 0 )
      std::sync::mpmc::waker::SyncWaker::disconnect(v25 + 320);
    v29 = *(_BYTE *)(v25 + 528);
    *(_BYTE *)(v25 + 528) = 1;
    if ( v29 )
      core::ptr::drop_in_place<alloc::boxed::Box<std::sync::mpmc::counter::Counter<std::sync::mpmc::array::Channel<(usize,uu_sort::chunks::RecycledChunk)>>>>(v25);
  }
  *(_QWORD *)&v40[16] = a1[8];
  *(_OWORD *)v40 = *((_OWORD *)a1 + 3);
  std::thread::JoinInner<T>::join(&v50, v40);
  if ( v50 )
  {
    *(_OWORD *)v40 = v51[0];
    core::result::unwrap_failed(aCalledResultUn_4, 43LL, v40, &off_193210, &off_193488);
  }
  v30 = *(_QWORD *)&v51[0];
  <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(v34);
  if ( *v34 )
    _rust_dealloc(a1[3], 40LL * *v34, 8LL);
  v31 = *(_QWORD **)v35;
  if ( *(_QWORD *)v35 )
  {
    v7 = (*v31)-- == 1LL;
    if ( v7 )
    {
      self_cell::unsafe_self_cell::UnsafeSelfCell<ContainedIn,Owner,DependentStatic>::drop_joined(v31 + 2);
      v7 = v31[1]-- == 1LL;
      if ( v7 )
        _rust_dealloc(v31, 24LL, 8LL);
    }
  }
  return v30;
}
