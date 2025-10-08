__int64 __fastcall check_docs::filter_unused_ends(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  _QWORD v6[5]; // [rsp+0h] [rbp-28h] BYREF

  v6[0] = a2;
  v6[1] = a2 + 56 * a3;
  v6[2] = a4;
  v6[3] = a5;
  ((void (__fastcall *)(__int64, _QWORD *))core::iter::traits::iterator::Iterator::collect)(a1, v6);
  return a1;
}