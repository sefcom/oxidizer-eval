__int64 __fastcall just::namepath::Namepath::join(__int64 a1, __int64 a2, __int64 a3)
{
  _BYTE v4[104]; // [rsp+0h] [rbp-68h] BYREF

  core::iter::traits::iterator::Iterator::chain(v4, a2, a2 + 72 * a3);
  return core::iter::traits::iterator::Iterator::collect(a1, v4);
}