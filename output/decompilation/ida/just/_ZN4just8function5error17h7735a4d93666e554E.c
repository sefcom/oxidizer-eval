_QWORD *__fastcall just::function::error(_QWORD *a1, __int64 a2, __int64 a3)
{
  <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(a1 + 1, a3);
  *a1 = 1LL;
  return a1;
}