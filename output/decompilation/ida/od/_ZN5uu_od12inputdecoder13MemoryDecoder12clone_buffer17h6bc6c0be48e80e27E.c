__int64 __fastcall uu_od::inputdecoder::MemoryDecoder::clone_buffer(_QWORD *a1, __int64 a2)
{
  <alloc::vec::Vec<T,A> as core::clone::Clone>::clone_from(a2, *(_QWORD *)(*a1 + 8LL), *(_QWORD *)(*a1 + 16LL));
  return alloc::vec::Vec<T,A>::resize(a2, a1[1]);
}