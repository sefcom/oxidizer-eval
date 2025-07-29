void __fastcall backdoorautomater::sanitizer::sanitize_return_fn(__int64 a1)
{
  __int64 v1; // [rsp+8h] [rbp-50h] BYREF
  _QWORD v2[2]; // [rsp+10h] [rbp-48h] BYREF
  _QWORD v3[7]; // [rsp+20h] [rbp-38h] BYREF

  if ( a1 )
  {
    v1 = a1;
    v2[0] = &v1;
    v2[1] = <std::io::error::Error as core::fmt::Display>::fmt;
    v3[0] = &off_22A6B0;
    v3[1] = 2LL;
    v3[4] = 0LL;
    v3[2] = v2;
    v3[3] = 1LL;
    core::panicking::panic_fmt(v3, &off_22A6D0);
  }
}