__int64 __fastcall uu_du::file_as_vec(__int64 a1)
{
  unsigned int v1; // eax
  _BYTE v3[16]; // [rsp+8h] [rbp-50h] BYREF
  _BYTE v4[64]; // [rsp+18h] [rbp-40h] BYREF

  std::fs::File::open(v3);
  v1 = core::result::Result<T,E>::expect(v3);
  std::io::buffered::bufreader::BufReader<R>::with_capacity(v4, 0x2000LL, v1);
  return <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(a1, v4);
}
