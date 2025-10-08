__int64 __fastcall uu_od::inputdecoder::MemoryDecoder::get_full_buffer(_QWORD *a1, __int64 a2)
{
  return <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(
           a2,
           a1[1] + a1[2],
           *(_QWORD *)(*a1 + 8LL),
           *(_QWORD *)(*a1 + 16LL),
           &off_1022C8);
}