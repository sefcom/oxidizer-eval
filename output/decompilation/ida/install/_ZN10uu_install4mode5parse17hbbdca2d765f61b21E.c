__int64 __fastcall uu_install::mode::parse(__int64 a1, __int64 a2, __int64 a3, unsigned __int8 a4, unsigned int a5)
{
  unsigned __int8 v8; // al
  _QWORD v10[7]; // [rsp+0h] [rbp-38h] BYREF

  v10[0] = a2;
  v10[1] = a2 + a3;
  v8 = core::iter::traits::iterator::Iterator::try_fold(v10);
  if ( (unsigned __int8)<core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(v8) )
    return uucore::features::mode::parse_numeric(a1, 0LL, a2, a3, a4);
  else
    return uucore::features::mode::parse_symbolic(a1, 0LL, a2, a3, a5, a4);
}