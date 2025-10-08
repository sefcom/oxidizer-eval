__int64 __fastcall linera_exporter::storage::BlockProcessorStorage<S>::new_committee(__int64 a1)
{
  _BYTE v2[48]; // [rsp+8h] [rbp-30h] BYREF

  <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(v2);
  return <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::fold(v2, a1 + 1024);
}