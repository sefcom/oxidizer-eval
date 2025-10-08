__int64 __fastcall uu_od::peekreader::PeekReader<R>::write_to_tempbuffer(__int64 a1, __int64 a2, __int64 a3)
{
  _BYTE v5[24]; // [rsp+8h] [rbp-60h] BYREF
  _BYTE v6[72]; // [rsp+20h] [rbp-48h] BYREF

  alloc::vec::Vec<T,A>::drain(v6, a1 + 112);
  core::iter::traits::iterator::Iterator::collect(v5, v6);
  <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
    a1 + 112,
    a2,
    a2 + a3);
  <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(v6, v5);
  return <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<T,alloc::vec::into_iter::IntoIter<T>>>::spec_extend(
           a1 + 112,
           v6);
}