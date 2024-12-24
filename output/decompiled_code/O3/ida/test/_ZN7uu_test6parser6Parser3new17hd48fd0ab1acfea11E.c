unsigned __int64 __fastcall uu_test::parser::Parser::new(_QWORD *a1)
{
  unsigned __int64 result; // rax

  <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(a1 + 6);
  result = 0x8000000000000001LL;
  a1[3] = 0x8000000000000001LL;
  *a1 = 0LL;
  a1[1] = 8LL;
  a1[2] = 0LL;
  return result;
}
