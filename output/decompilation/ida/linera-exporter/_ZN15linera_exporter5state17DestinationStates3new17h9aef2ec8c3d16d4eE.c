__int64 linera_exporter::state::DestinationStates::new()
{
  _QWORD v1[2]; // [rsp+8h] [rbp-80h] BYREF
  _BYTE v2[72]; // [rsp+18h] [rbp-70h] BYREF
  _BYTE v3[40]; // [rsp+60h] [rbp-28h] BYREF

  <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(v3);
  core::iter::traits::iterator::Iterator::collect(v2, v3);
  v1[0] = 1LL;
  v1[1] = 1LL;
  return alloc::boxed::Box<T>::new(v1);
}