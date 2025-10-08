__int64 __fastcall just::unindent::blank(__int64 a1, __int64 a2)
{
  unsigned __int8 v2; // al
  _QWORD v4[2]; // [rsp+8h] [rbp-10h] BYREF

  v4[0] = a1;
  v4[1] = a1 + a2;
  v2 = core::iter::traits::iterator::Iterator::try_fold(v4);
  return <core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(v2, 0LL);
}