void __fastcall backdoorautomater::sanitizer::sanitize_system_command(__int64 a1)
{
  __int64 v1; // [rsp+0h] [rbp-48h] BYREF
  _QWORD v2[2]; // [rsp+8h] [rbp-40h] BYREF
  _QWORD v3[6]; // [rsp+18h] [rbp-30h] BYREF

  v1 = a1;
  if ( *(_QWORD *)(a1 + 16) )
  {
    v2[0] = &v1;
    v2[1] = <&T as core::fmt::Display>::fmt;
    v3[0] = &off_22A678;
    v3[1] = 2LL;
    v3[4] = 0LL;
    v3[2] = v2;
    v3[3] = 1LL;
    core::panicking::panic_fmt(v3, &off_22A698);
  }
}