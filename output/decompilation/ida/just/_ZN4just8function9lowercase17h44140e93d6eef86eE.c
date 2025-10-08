_QWORD *__fastcall just::function::lowercase(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  alloc::str::<impl str>::to_lowercase(a1 + 1, a3, a4);
  *a1 = 0LL;
  return a1;
}