__int64 __fastcall uu_sort::merge::FileMerger::write_all_to(__int128 *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // r14
  __int128 v10; // [rsp+0h] [rbp-58h] BYREF
  __int64 v11; // [rsp+10h] [rbp-48h]
  _BYTE v12[56]; // [rsp+20h] [rbp-38h] BYREF

  while ( uu_sort::merge::FileMerger::write_next((__int64)a1, a2, a3) )
    ;
  v10 = *a1;
  core::ptr::drop_in_place<std::sync::mpsc::Sender<(usize,uu_sort::chunks::RecycledChunk)>>(&v10);
  v11 = *((_QWORD *)a1 + 8);
  v10 = a1[3];
  ((void (__fastcall *)(_BYTE *, __int128 *, __int64, __int64, __int64, __int64))std::thread::JoinInner<T>::join)(
    v12,
    &v10,
    v4,
    v5,
    v6,
    v7);
  v8 = core::result::Result<T,E>::unwrap(v12);
  core::ptr::drop_in_place<binary_heap_plus::binary_heap::BinaryHeap<uu_sort::merge::MergeableFile,uu_sort::merge::FileComparator>>(a1 + 1);
  core::ptr::drop_in_place<core::option::Option<uu_sort::merge::PreviousLine>>((char *)a1 + 72);
  return v8;
}
