bool __fastcall uu_sort::merge::FileMerger::write_next(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r14
  __int64 v5; // r12
  __m128i v6; // xmm1
  __int64 v7; // rax
  __int64 v8; // r14
  __int64 *v9; // r15
  __int64 v11; // r14
  __int64 v12; // rdx
  __int64 v13; // [rsp+8h] [rbp-180h]
  _QWORD v14[2]; // [rsp+10h] [rbp-178h] BYREF
  __m128i v15; // [rsp+20h] [rbp-168h] BYREF
  __int64 v16; // [rsp+30h] [rbp-158h]
  __int64 v17; // [rsp+40h] [rbp-148h] BYREF
  __int128 v18; // [rsp+48h] [rbp-140h]
  __int128 v19; // [rsp+58h] [rbp-130h]
  __int128 v20; // [rsp+68h] [rbp-120h]
  __int128 v21; // [rsp+78h] [rbp-110h]
  __int128 v22; // [rsp+88h] [rbp-100h]
  __int128 v23; // [rsp+98h] [rbp-F0h]
  __m128i v24; // [rsp+A8h] [rbp-E0h]
  __int64 v25; // [rsp+B8h] [rbp-D0h]
  _OWORD v26[6]; // [rsp+C0h] [rbp-C8h] BYREF
  __m128i v27; // [rsp+120h] [rbp-68h] BYREF
  __int64 v28; // [rsp+130h] [rbp-58h]
  __m128i v29[4]; // [rsp+140h] [rbp-48h] BYREF

  if ( !*(_QWORD *)(a1 + 32) )
    return 0;
  v4 = *(_QWORD *)(a1 + 24);
  v5 = *(_QWORD *)(v4 + 16);
  alloc::rc::RcInnerPtr::inc_strong(v5);
  v6 = *(__m128i *)(v4 + 24);
  v16 = *(_QWORD *)(a1 + 88);
  v15 = _mm_loadu_si128((const __m128i *)(a1 + 72));
  *(_QWORD *)(a1 + 72) = v5;
  v29[0] = v6;
  *(__m128i *)(a1 + 80) = v6;
  v17 = v4;
  *(_QWORD *)&v18 = a2;
  *((_QWORD *)&v18 + 1) = &v15;
  *(_QWORD *)&v19 = a3;
  uu_sort::merge::FileMerger::write_next::{{closure}}(
    &v17,
    *(_QWORD *)(*(_QWORD *)(v5 + 16) + 32LL),
    *(_QWORD *)(*(_QWORD *)(v5 + 16) + 40LL));
  if ( *(_QWORD *)(*(_QWORD *)(v5 + 16) + 40LL) == _mm_load_si128(v29).m128i_u64[0] + 1 )
  {
    v7 = std::sync::mpmc::Receiver<T>::recv(v4);
    v13 = v7;
    if ( v7 )
    {
      v14[0] = v7;
      if ( !*(_QWORD *)(a1 + 32) )
        core::option::unwrap_failed(&off_200468);
      *(_QWORD *)&v26[0] = a1 + 16;
      BYTE8(v26[0]) = 0;
      v17 = 1LL;
      *(_QWORD *)&v18 = 1LL;
      *((_QWORD *)&v18 + 1) = v7;
      v8 = alloc::boxed::Box<T>::new(&v17);
      BYTE8(v26[0]) = 1;
      v9 = (__int64 *)(*(_QWORD *)(a1 + 24) + 16LL);
      core::ptr::drop_in_place<alloc::rc::Rc<uu_sort::chunks::Chunk>>(v9);
      *v9 = v8;
      BYTE8(v26[0]) = 1;
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)&v26[0] + 8LL) + 24LL) = 0LL;
      core::ptr::drop_in_place<binary_heap_plus::binary_heap::PeekMut<uu_sort::merge::MergeableFile,uu_sort::merge::FileComparator>>(v26);
    }
    else
    {
      binary_heap_plus::binary_heap::BinaryHeap<T,C>::pop(&v17, a1 + 16);
      core::ptr::drop_in_place<core::option::Option<uu_sort::merge::MergeableFile>>(&v17);
    }
  }
  else
  {
    if ( !*(_QWORD *)(a1 + 32) )
      core::option::unwrap_failed(&off_200450);
    v17 = a1 + 16;
    LOBYTE(v18) = 1;
    ++*(_QWORD *)(*(_QWORD *)(a1 + 24) + 24LL);
    core::ptr::drop_in_place<binary_heap_plus::binary_heap::PeekMut<uu_sort::merge::MergeableFile,uu_sort::merge::FileComparator>>(&v17);
  }
  if ( v15.m128i_i64[0] )
  {
    v11 = v16;
    v14[0] = alloc::rc::Rc<T,A>::try_unwrap();
    v14[1] = v12;
    if ( v14[0] )
      goto LABEL_14;
    uu_sort::chunks::Chunk::recycle(v26, v12);
    v17 = v11;
    v18 = v26[0];
    v19 = v26[1];
    v20 = v26[2];
    v21 = v26[3];
    v22 = v26[4];
    v23 = v26[5];
    v24 = _mm_loadu_si128(&v27);
    v25 = v28;
    std::sync::mpmc::Sender<T>::send(v26, a1, &v17);
    if ( *((_QWORD *)&v26[0] + 1) != 0x8000000000000000LL )
      core::ptr::drop_in_place<core::result::Result<(),std::sync::mpsc::SendError<(usize,uu_sort::chunks::RecycledChunk)>>>(v26);
    if ( v14[0] )
LABEL_14:
      core::ptr::drop_in_place<core::result::Result<uu_sort::chunks::Chunk,alloc::rc::Rc<uu_sort::chunks::Chunk>>>(v14);
  }
  return *(_QWORD *)(a1 + 32) != 0LL;
}
