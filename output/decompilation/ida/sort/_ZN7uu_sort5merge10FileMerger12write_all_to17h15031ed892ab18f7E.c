__int64 __fastcall uu_sort::merge::FileMerger::write_all_to(__int128 *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r14
  __int128 v6; // [rsp+0h] [rbp-68h] BYREF
  __int64 v7; // [rsp+10h] [rbp-58h]
  __int64 v8; // [rsp+20h] [rbp-48h] BYREF
  __int64 v9; // [rsp+28h] [rbp-40h]

  while ( 1 )
  {
    uu_sort::merge::FileMerger::write_next(&v6, a1, a2, a3);
    <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
      &v8,
      &v6);
    v4 = v8;
    if ( v8 )
      break;
    if ( !(_BYTE)v9 )
    {
      v6 = *a1;
      core::ptr::drop_in_place<std::sync::mpsc::Sender<(usize,uu_sort::chunks::RecycledChunk)>>(&v6);
      v7 = *((_QWORD *)a1 + 8);
      v6 = a1[3];
      ((void (__fastcall *)(__int64 *, __int128 *))std::thread::JoinInner<T>::join)(&v8, &v6);
      v4 = core::result::Result<T,E>::unwrap(&v8);
      core::ptr::drop_in_place<binary_heap_plus::binary_heap::BinaryHeap<uu_sort::merge::MergeableFile,uu_sort::merge::FileComparator>>(a1 + 1);
      core::ptr::drop_in_place<core::option::Option<uu_sort::merge::PreviousLine>>((char *)a1 + 72);
      return v4;
    }
  }
  core::ptr::drop_in_place<uu_sort::merge::FileMerger>(a1);
  return v4;
}