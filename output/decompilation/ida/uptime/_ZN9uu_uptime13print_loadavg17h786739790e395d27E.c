__int64 uu_uptime::print_loadavg()
{
  __int128 v1; // [rsp+0h] [rbp-78h] BYREF
  __int64 v2; // [rsp+10h] [rbp-68h]
  __int128 v3; // [rsp+18h] [rbp-60h] BYREF
  __int64 v4; // [rsp+28h] [rbp-50h]
  _QWORD v5[2]; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v6[7]; // [rsp+40h] [rbp-38h] BYREF

  uucore::features::uptime::get_formatted_loadavg(&v3);
  if ( __OFSUB__(0LL, (_QWORD)v3) )
    return core::ptr::drop_in_place<core::result::Result<alloc::string::String,alloc::boxed::Box<dyn uucore::mods::error::UError>>>(&v3);
  v2 = v4;
  v1 = v3;
  v5[0] = &v1;
  v5[1] = <alloc::string::String as core::fmt::Display>::fmt;
  v6[0] = &unk_108278;
  v6[1] = 2LL;
  v6[4] = 0LL;
  v6[2] = v5;
  v6[3] = 1LL;
  std::io::stdio::_print(v6);
  return core::ptr::drop_in_place<alloc::string::String>(&v1);
}