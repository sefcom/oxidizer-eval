_QWORD *__fastcall uu_od::open_input_peek_reader(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  _QWORD v10[2]; // [rsp+0h] [rbp-88h] BYREF
  _OWORD v11[3]; // [rsp+10h] [rbp-78h] BYREF
  __int64 v12; // [rsp+40h] [rbp-48h]
  __int128 v13[4]; // [rsp+48h] [rbp-40h] BYREF

  core::iter::traits::iterator::Iterator::collect(v13, a2, a2 + 24 * a3);
  uu_od::multifilereader::MultifileReader::new(v11, v13);
  v12 = a4;
  v10[0] = a5;
  v10[1] = a6;
  std::io::buffered::bufreader::BufReader<R>::with_capacity(a1, v10);
  a1[14] = 0LL;
  a1[15] = 1LL;
  a1[16] = 0LL;
  return a1;
}