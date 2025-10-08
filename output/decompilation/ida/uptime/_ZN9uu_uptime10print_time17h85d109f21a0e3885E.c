__int64 uu_uptime::print_time()
{
  _QWORD v1[2]; // [rsp+8h] [rbp-60h] BYREF
  _QWORD v2[6]; // [rsp+18h] [rbp-50h] BYREF
  _BYTE v3[32]; // [rsp+48h] [rbp-20h] BYREF

  uucore::features::uptime::get_formatted_time(v3);
  v1[0] = v3;
  v1[1] = <alloc::string::String as core::fmt::Display>::fmt;
  v2[0] = &off_1082F0;
  v2[1] = 2LL;
  v2[4] = 0LL;
  v2[2] = v1;
  v2[3] = 1LL;
  std::io::stdio::_print(v2);
  return core::ptr::drop_in_place<alloc::string::String>(v3);
}