__int64 __fastcall uu_du::file_as_vec(__int64 a1)
{
  unsigned int v1; // eax
  _BYTE v3[64]; // [rsp+8h] [rbp-40h] BYREF

  std::fs::File::open(v3);
  v1 = core::result::Result<T,E>::expect(v3);
  std::io::buffered::bufreader::BufReader<R>::with_capacity(v3, v1);
  return core::iter::traits::iterator::Iterator::collect(a1, v3);
}