__int64 __fastcall ruff_python_formatter::comments::Comments::has_trailing_own_line(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rdx
  __int64 v5; // [rsp+0h] [rbp-18h] BYREF
  __int64 v6; // [rsp+8h] [rbp-10h]

  v5 = <T as core::convert::Into<U>>::into(a2);
  v6 = v2;
  v5 = ruff_python_formatter::comments::map::MultiMap<K,V>::trailing((_QWORD *)(a1 + 16));
  v6 = v5 + 12 * v3;
  return <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::any(&v5, &v5);
}