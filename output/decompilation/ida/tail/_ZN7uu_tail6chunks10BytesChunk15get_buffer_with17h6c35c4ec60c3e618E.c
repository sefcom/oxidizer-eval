__int64 __fastcall uu_tail::chunks::BytesChunk::get_buffer_with(__int64 a1, __int64 a2)
{
  return <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(
           a2,
           *(_QWORD *)(a1 + 0x2000),
           a1,
           0x2000LL,
           &off_1BC860);
}
