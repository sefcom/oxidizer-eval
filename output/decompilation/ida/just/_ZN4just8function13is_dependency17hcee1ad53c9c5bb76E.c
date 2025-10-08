_QWORD *__fastcall just::function::is_dependency(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rax
  const char *v3; // rsi

  v2 = *(unsigned __int8 *)(*(_QWORD *)a2 + 72LL);
  v3 = aFalse;
  if ( v2 )
    v3 = aTrue;
  <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(a1 + 1, v3);
  *a1 = 0LL;
  return a1;
}