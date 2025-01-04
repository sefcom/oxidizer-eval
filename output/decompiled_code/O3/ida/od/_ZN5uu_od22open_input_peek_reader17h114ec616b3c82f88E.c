        __int64 a6)
{
  _BYTE v10[64]; // [rsp+8h] [rbp-40h] BYREF

  <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(v10, a2, a2 + 24 * a3);
  uu_od::multifilereader::MultifileReader::new(a1 + 2, v10);
  *a1 = a5;
  a1[1] = a6;
  a1[8] = a4;
  a1[9] = 0LL;
  a1[10] = 1LL;
  a1[11] = 0LL;
  return a1;
}
