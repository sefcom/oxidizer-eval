_DWORD *__fastcall ruff_python_formatter::expression::binary_like::OperandOrOperator::unwrap_operator(_DWORD *a1)
{
  _DWORD *v2; // [rsp+0h] [rbp-48h] BYREF
  _QWORD v3[2]; // [rsp+8h] [rbp-40h] BYREF
  _QWORD v4[6]; // [rsp+18h] [rbp-30h] BYREF

  if ( *a1 != 3 )
  {
    v2 = a1;
    v3[0] = &v2;
    v3[1] = <&T as core::fmt::Debug>::fmt;
    v4[0] = &off_57D6C0;
    v4[1] = 2LL;
    v4[4] = 0LL;
    v4[2] = v3;
    v4[3] = 1LL;
    core::panicking::panic_fmt(v4, &off_57D6E0);
  }
  return a1 + 2;
}