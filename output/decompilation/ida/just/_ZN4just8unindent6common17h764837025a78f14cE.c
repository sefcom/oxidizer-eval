__int64 __fastcall just::unindent::common(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // al
  __int64 v5; // rdx
  __int64 v6; // r15
  __int64 result; // rax
  _QWORD v8[3]; // [rsp+0h] [rbp-78h] BYREF
  _BYTE v9[96]; // [rsp+18h] [rbp-60h] BYREF

  v8[2] = 0LL;
  v8[0] = a1;
  v8[1] = a1 + a2;
  ((void (__fastcall *)(_BYTE *, _QWORD *, __int64, __int64))core::iter::traits::iterator::Iterator::zip)(
    v9,
    v8,
    a3,
    a3 + a4);
  v9[64] = 0;
  v4 = <core::iter::adapters::take_while::TakeWhile<I,P> as core::iter::traits::iterator::Iterator>::fold(v9);
  v6 = v5;
  if ( (v4 & 1) == 0 )
    v6 = 0LL;
  result = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(
             0LL,
             v6,
             a1,
             a2);
  if ( !result )
    core::str::slice_error_fail(a1, a2, 0LL, v6, &off_431910);
  return result;
}