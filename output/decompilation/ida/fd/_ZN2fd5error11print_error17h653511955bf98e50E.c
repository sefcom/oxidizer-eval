__int64 __fastcall fd::error::print_error(__int64 a1)
{
  _QWORD v2[2]; // [rsp+8h] [rbp-60h] BYREF
  _QWORD v3[6]; // [rsp+18h] [rbp-50h] BYREF
  _BYTE v4[32]; // [rsp+48h] [rbp-20h] BYREF

  core::ops::function::FnMut::call_mut(v4, a1);
  v2[0] = v4;
  v2[1] = <alloc::string::String as core::fmt::Display>::fmt;
  v3[0] = &off_402140;
  v3[1] = 2LL;
  v3[4] = 0LL;
  v3[2] = v2;
  v3[3] = 1LL;
  std::io::stdio::_eprint(v3);
  return core::ptr::drop_in_place<alloc::string::String>(v4);
}