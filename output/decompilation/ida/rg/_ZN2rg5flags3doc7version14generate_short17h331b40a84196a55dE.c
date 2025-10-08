__int64 __fastcall rg::flags::doc::version::generate_short(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdx
  _QWORD v5[2]; // [rsp+0h] [rbp-68h] BYREF
  _BYTE v6[24]; // [rsp+10h] [rbp-58h] BYREF
  _QWORD v7[8]; // [rsp+28h] [rbp-40h] BYREF

  rg::flags::doc::version::generate_digits((__int64)v6, a2, a3);
  v5[0] = v6;
  v5[1] = <alloc::string::String as core::fmt::Display>::fmt;
  v7[0] = &off_3EAAB8;
  v7[1] = 1LL;
  v7[4] = 0LL;
  v7[2] = v5;
  v7[3] = 1LL;
  core::option::Option<T>::map_or_else(a1, 0LL, v3, v7);
  return core::ptr::drop_in_place<alloc::string::String>(v6);
}