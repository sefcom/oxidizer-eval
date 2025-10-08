__int64 __fastcall just::unindent::indentation(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // r15
  __int64 result; // rax
  _QWORD v5[3]; // [rsp+0h] [rbp-38h] BYREF
  char v6; // [rsp+18h] [rbp-20h]

  v5[0] = a1;
  v5[1] = a1 + a2;
  v5[2] = 0LL;
  v6 = 0;
  v3 = 0LL;
  if ( (((__int64 (__fastcall *)(_QWORD *))<core::iter::adapters::take_while::TakeWhile<I,P> as core::iter::traits::iterator::Iterator>::fold)(v5) & 1) != 0 )
    v3 = v2;
  result = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeTo<usize>>::get(
             v3,
             a1);
  if ( !result )
    core::str::slice_error_fail(a1, a2, 0LL, v3, &off_4318F8);
  return result;
}