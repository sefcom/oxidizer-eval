__int64 __fastcall uu_uptime::print_uptime(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  _QWORD v3[2]; // [rsp+8h] [rbp-60h] BYREF
  _QWORD v4[2]; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v5[7]; // [rsp+30h] [rbp-38h] BYREF

  uucore::features::uptime::get_formatted_uptime(v3, a1, a2);
  result = v3[1];
  if ( !__OFSUB__(-v3[0], 1LL) )
  {
    v4[0] = v3;
    v4[1] = <alloc::string::String as core::fmt::Display>::fmt;
    v5[0] = &off_108310;
    v5[1] = 2LL;
    v5[4] = 0LL;
    v5[2] = v4;
    v5[3] = 1LL;
    std::io::stdio::_print(v5);
    core::ptr::drop_in_place<alloc::string::String>(v3);
    return 0LL;
  }
  return result;
}