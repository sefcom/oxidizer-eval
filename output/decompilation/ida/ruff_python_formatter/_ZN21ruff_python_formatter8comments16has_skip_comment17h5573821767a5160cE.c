__int64 __fastcall ruff_python_formatter::comments::has_skip_comment(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD v5[2]; // [rsp+8h] [rbp-10h] BYREF

  v5[0] = a1;
  v5[1] = a1 + 12 * a2;
  return <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::any(v5, a3, a4);
}