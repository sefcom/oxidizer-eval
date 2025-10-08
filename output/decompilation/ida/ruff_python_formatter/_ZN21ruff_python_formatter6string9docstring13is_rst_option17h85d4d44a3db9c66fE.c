__int64 __fastcall ruff_python_formatter::string::docstring::is_rst_option(__int64 a1, __int64 a2)
{
  __int64 started; // rbx
  __int64 v3; // rdx
  __int64 v4; // r14
  __int64 v5; // rax
  __int64 v6; // rdx
  unsigned __int8 v7; // al
  _QWORD v9[2]; // [rsp+0h] [rbp-28h] BYREF
  char v10; // [rsp+10h] [rbp-18h]

  started = core::str::<impl str>::trim_start_matches(a1, a2);
  v4 = v3;
  LODWORD(v9[0]) = 0;
  v5 = core::char::methods::encode_utf8_raw(58LL, v9);
  if ( !(unsigned __int8)core::slice::<impl [T]>::starts_with(started, v4, v5, v6) )
    return 0LL;
  v9[0] = started;
  v9[1] = started + v4;
  v10 = 0;
  v7 = ((__int64 (__fastcall *)(_QWORD *))<core::iter::adapters::take_while::TakeWhile<I,P> as core::iter::traits::iterator::Iterator>::try_fold)(v9);
  return <core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(v7, 1LL);
}