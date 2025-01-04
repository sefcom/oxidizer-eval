__int64 __fastcall uu_tail::chunks::BytesChunk::get_buffer(__int64 a1)
{
  return <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(
           0LL,
           *(_QWORD *)(a1 + 0x2000),
           a1,
           0x2000LL,
           &off_1BC848);
}
