__int64 __fastcall uu_more::uumain::uumain::{{closure}}(__int64 a1, __int64 a2)
{
  __int64 v3; // [rsp+0h] [rbp-B8h] BYREF
  _BYTE v4[48]; // [rsp+8h] [rbp-B0h] BYREF
  _BYTE v5[48]; // [rsp+38h] [rbp-80h] BYREF
  _QWORD v6[6]; // [rsp+68h] [rbp-50h] BYREF
  __int64 v7; // [rsp+98h] [rbp-20h]
  __int64 v8; // [rsp+A0h] [rbp-18h] BYREF

  v3 = a2;
  v7 = crossterm::terminal::disable_raw_mode(a1);
  if ( v7 )
  {
    v8 = v7;
    core::result::unwrap_failed(aCalledResultUn, 43LL, &v8, &off_1454A8, &off_145838);
  }
  core::fmt::Arguments::new_const(v4, &off_145850);
  std::io::stdio::_print(v4);
  v6[4] = &v3;
  v6[5] = <&T as core::fmt::Display>::fmt;
  v6[2] = &v3;
  v6[3] = <&T as core::fmt::Display>::fmt;
  v6[0] = &v3;
  v6[1] = <&T as core::fmt::Display>::fmt;
  core::fmt::Arguments::new_v1(v5, &unk_145618, v6);
  return std::io::stdio::_print(v5);
}
