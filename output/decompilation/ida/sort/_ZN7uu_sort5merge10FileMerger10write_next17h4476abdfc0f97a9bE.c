__int64 __fastcall uu_sort::merge::FileMerger::write_next(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // r13
  __int64 v7; // rax
  __int128 v8; // xmm0
  __int64 v9; // rax
  __int64 result; // rax
  __int64 v11; // rax
  __int64 v12; // r12
  __int64 *v13; // r13
  __int64 v14; // r15
  __int64 v15; // rdx
  _QWORD v16[2]; // [rsp+0h] [rbp-188h] BYREF
  __int128 v17; // [rsp+10h] [rbp-178h] BYREF
  __int64 v18; // [rsp+20h] [rbp-168h]
  __int64 v19; // [rsp+28h] [rbp-160h] BYREF
  __int64 v20; // [rsp+30h] [rbp-158h] BYREF
  __int128 *v21; // [rsp+38h] [rbp-150h]
  __int64 v22; // [rsp+40h] [rbp-148h]
  _QWORD v23[25]; // [rsp+C0h] [rbp-C8h] BYREF

  if ( *(_QWORD *)(a2 + 32) )
  {
    v6 = *(_QWORD *)(a2 + 24);
    alloc::rc::RcInnerPtr::inc_strong(*(_QWORD *)(v6 + 16));
    v7 = *(_QWORD *)(v6 + 16);
    v8 = *(_OWORD *)(v6 + 24);
    v18 = *(_QWORD *)(a2 + 88);
    v17 = *(_OWORD *)(a2 + 72);
    *(_QWORD *)(a2 + 72) = v7;
    *(_OWORD *)(a2 + 80) = v8;
    v19 = v6;
    v20 = a3;
    v21 = &v17;
    v22 = a4;
    v9 = uu_sort::merge::FileMerger::write_next::{{closure}}(
           &v19,
           *(_QWORD *)(*(_QWORD *)(v7 + 16) + 32LL),
           *(_QWORD *)(*(_QWORD *)(v7 + 16) + 40LL));
    if ( v9 )
    {
      *(_QWORD *)(a1 + 8) = v9;
      *(_BYTE *)a1 = 1;
      return core::ptr::drop_in_place<core::option::Option<uu_sort::merge::PreviousLine>>(&v17);
    }
    if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 16) + 16LL) + 40LL) == *(_QWORD *)(v6 + 24) + 1LL )
    {
      v11 = std::sync::mpmc::Receiver<T>::recv(*(_QWORD *)v6, *(_QWORD *)(v6 + 8));
      v16[0] = v11;
      if ( v11 )
      {
        v23[0] = v11;
        if ( !*(_QWORD *)(a2 + 32) )
          core::option::unwrap_failed(&off_18C9D0);
        v19 = 1LL;
        v20 = 1LL;
        v21 = (__int128 *)v11;
        v12 = alloc::boxed::Box<T>::new(&v19);
        v13 = (__int64 *)(*(_QWORD *)(a2 + 24) + 16LL);
        core::ptr::drop_in_place<alloc::rc::Rc<uu_sort::chunks::Chunk>>(v13);
        *v13 = v12;
        *(_QWORD *)(*(_QWORD *)(a2 + 24) + 24LL) = 0LL;
        core::ptr::drop_in_place<binary_heap_plus::binary_heap::PeekMut<uu_sort::merge::MergeableFile,uu_sort::merge::FileComparator>>(
          a2 + 16,
          1LL);
      }
      else
      {
        core::ptr::drop_in_place<core::result::Result<uu_sort::chunks::Chunk,std::sync::mpsc::RecvError>>(v16);
        binary_heap_plus::binary_heap::BinaryHeap<T,C>::pop(&v19, a2 + 16);
        core::ptr::drop_in_place<core::option::Option<uu_sort::merge::MergeableFile>>(&v19);
      }
    }
    else
    {
      if ( !*(_QWORD *)(a2 + 32) )
        core::option::unwrap_failed(&off_18C9B8);
      ++*(_QWORD *)(*(_QWORD *)(a2 + 24) + 24LL);
      core::ptr::drop_in_place<binary_heap_plus::binary_heap::PeekMut<uu_sort::merge::MergeableFile,uu_sort::merge::FileComparator>>(
        a2 + 16,
        1LL);
    }
    if ( (_QWORD)v17 )
    {
      v14 = v18;
      v16[0] = alloc::rc::Rc<T,A>::try_unwrap(v17);
      v16[1] = v15;
      if ( (v16[0] & 1) != 0 )
        goto LABEL_17;
      uu_sort::chunks::Chunk::recycle((__int64)&v20, v15);
      v19 = v14;
      std::sync::mpmc::Sender<T>::send(v23, *(_QWORD *)a2, *(_QWORD *)(a2 + 8), &v19);
      if ( !__OFSUB__(0LL, v23[1]) )
        core::ptr::drop_in_place<core::result::Result<(),std::sync::mpsc::SendError<(usize,uu_sort::chunks::RecycledChunk)>>>(v23);
      if ( (v16[0] & 1) != 0 )
LABEL_17:
        core::ptr::drop_in_place<core::result::Result<uu_sort::chunks::Chunk,alloc::rc::Rc<uu_sort::chunks::Chunk>>>(v16);
    }
    result = *(_QWORD *)(a2 + 32);
  }
  else
  {
    result = 0LL;
  }
  *(_BYTE *)(a1 + 1) = result != 0;
  *(_BYTE *)a1 = 0;
  return result;
}