_QWORD *__fastcall uu_sort::ext_sort::write_lines(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  _QWORD *result; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  char v9; // [rsp+7h] [rbp-41h] BYREF
  _QWORD v10[8]; // [rsp+8h] [rbp-40h] BYREF

  v10[0] = a1;
  v10[1] = a1 + 24 * a2;
  for ( result = (_QWORD *)<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v10);
        result;
        result = (_QWORD *)<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v10) )
  {
    v7 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(a3, *result, result[1]);
    core::result::Result<T,E>::unwrap(v7, &off_201F70);
    v9 = a4;
    v8 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(a3, &v9, 1LL);
    core::result::Result<T,E>::unwrap(v8, &off_201F88);
  }
  return result;
}
