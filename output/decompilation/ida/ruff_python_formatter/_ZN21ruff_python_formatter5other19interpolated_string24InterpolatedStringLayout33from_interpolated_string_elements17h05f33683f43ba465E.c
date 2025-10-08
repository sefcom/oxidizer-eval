__int64 __fastcall ruff_python_formatter::other::interpolated_string::InterpolatedStringLayout::from_interpolated_string_elements(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  unsigned __int8 v4; // al
  _QWORD v6[2]; // [rsp+8h] [rbp-10h] BYREF

  v6[0] = a1;
  v6[1] = a1 + 80 * a2;
  v4 = core::iter::traits::iterator::Iterator::try_fold(v6, a3, a4);
  return <core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(v4, 1LL);
}