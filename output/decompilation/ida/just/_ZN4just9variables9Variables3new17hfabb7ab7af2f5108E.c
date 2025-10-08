_QWORD *__fastcall just::variables::Variables::new(_QWORD *a1, __int64 a2)
{
  _QWORD *result; // rax

  result = (_QWORD *)alloc::alloc::Global::alloc_impl(8LL, 8LL);
  if ( !result )
    alloc::alloc::handle_alloc_error(8LL, 8LL);
  *result = a2;
  *a1 = 1LL;
  a1[1] = result;
  a1[2] = 1LL;
  return result;
}