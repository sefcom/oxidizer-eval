__int64 __fastcall uu_od::peekreader::PeekReader<R>::write_to_tempbuffer(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 slice; // rax
  _BYTE v6[24]; // [rsp+8h] [rbp-80h] BYREF
  _BYTE v7[32]; // [rsp+20h] [rbp-68h] BYREF
  _BYTE v8[72]; // [rsp+40h] [rbp-48h] BYREF

  alloc::vec::Vec<T,A>::drain(v8, a1 + 72);
  <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(v6, v8);
  slice = core::slice::iter::Iter<T>::make_slice(a2, a2 + a3);
  alloc::vec::Vec<T,A>::append_elements(a1 + 72, slice);
  <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(v7, v6);
  return <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<T,alloc::vec::into_iter::IntoIter<T>>>::spec_extend(
           a1 + 72,
           v7);
}
