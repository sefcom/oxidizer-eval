__int64 __fastcall ruff_python_formatter::string::normalize::is_fstring_with_quoted_debug_expression(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rcx
  unsigned __int8 v3; // al
  _QWORD v5[2]; // [rsp+8h] [rbp-10h] BYREF

  v2 = *(_QWORD *)(a1 + 8) + 80LL * *(_QWORD *)(a1 + 16);
  v5[0] = *(_QWORD *)(a1 + 8);
  v5[1] = v2;
  v3 = core::iter::traits::iterator::Iterator::try_fold(v5, a2, a1);
  return <core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(v3, 1LL);
}