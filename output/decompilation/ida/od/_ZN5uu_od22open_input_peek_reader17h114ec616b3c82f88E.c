_QWORD *__fastcall uu_od::open_input_peek_reader(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int128 v10[4]; // [rsp+8h] [rbp-40h] BYREF

  <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(v10, a2, a2 + 24 * a3);
  uu_od::multifilereader::MultifileReader::new((_OWORD *)a1 + 1, v10);
  *a1 = a5;
  a1[1] = a6;
  a1[8] = a4;
  a1[9] = 0LL;
  a1[10] = 1LL;
  a1[11] = 0LL;
  return a1;
}
