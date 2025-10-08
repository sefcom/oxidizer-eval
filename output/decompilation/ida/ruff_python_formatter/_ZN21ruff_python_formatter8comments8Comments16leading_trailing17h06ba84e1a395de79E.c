__int64 __fastcall ruff_python_formatter::comments::Comments::leading_trailing(__int64 a1)
{
  _QWORD v2[7]; // [rsp+0h] [rbp-38h] BYREF

  ruff_python_formatter::comments::Comments::leading_dangling_trailing(v2);
  return core::iter::traits::iterator::Iterator::chain(a1, v2[0], v2[0] + 12LL * v2[1], v2[4], v2[5]);
}