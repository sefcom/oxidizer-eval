__int64 __fastcall backdoorautomater::sanitizer::sanitize_ex_stderr(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // [rsp+0h] [rbp-48h] BYREF
  _QWORD v3[2]; // [rsp+8h] [rbp-40h] BYREF
  _QWORD v4[6]; // [rsp+18h] [rbp-30h] BYREF

  v2 = a1;
  result = <&str as core::str::pattern::Pattern>::is_contained_in(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 16));
  if ( (_BYTE)result )
  {
    v3[0] = &v2;
    v3[1] = <&T as core::fmt::Display>::fmt;
    v4[0] = &off_22A700;
    v4[1] = 1LL;
    v4[4] = 0LL;
    v4[2] = v3;
    v4[3] = 1LL;
    core::panicking::panic_fmt(v4, &off_22A710);
  }
  return result;
}