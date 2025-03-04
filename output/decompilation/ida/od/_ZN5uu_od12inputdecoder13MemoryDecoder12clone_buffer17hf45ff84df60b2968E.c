__int64 __fastcall uu_od::inputdecoder::MemoryDecoder::clone_buffer(_QWORD *a1, __int64 a2)
{
  <alloc::vec::Vec<T,A> as core::clone::Clone>::clone_from(a2, *a1);
  return alloc::vec::Vec<T,A>::resize(a2, a1[1], 0LL);
}
