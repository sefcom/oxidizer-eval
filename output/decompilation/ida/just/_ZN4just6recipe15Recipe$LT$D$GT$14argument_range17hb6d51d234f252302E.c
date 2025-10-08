__int64 __fastcall just::recipe::Recipe<D>::argument_range(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r12
  __int64 result; // rax

  v4 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::fold(a2, a2 + 208 * a3);
  result = just::recipe::Recipe<D>::max_arguments(a2, a3);
  *(_QWORD *)a1 = v4;
  *(_QWORD *)(a1 + 8) = result;
  *(_BYTE *)(a1 + 16) = 0;
  return result;
}