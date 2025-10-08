__int64 __fastcall bat::config::get_args_from_config_file(__int64 a1)
{
  __int64 v2; // [rsp+8h] [rbp-50h] BYREF
  __int64 v3; // [rsp+10h] [rbp-48h]
  __int64 v4; // [rsp+18h] [rbp-40h]
  __int64 v5; // [rsp+20h] [rbp-38h] BYREF
  __int64 v6; // [rsp+28h] [rbp-30h]
  __int64 v7; // [rsp+30h] [rbp-28h]
  _BYTE v8[32]; // [rsp+38h] [rbp-20h] BYREF

  v5 = 0LL;
  v6 = 1LL;
  v7 = 0LL;
  bat::config::system_config_file((__int64)v8);
  std::fs::read_to_string(&v2, v8);
  if ( __OFSUB__(0LL, v2) )
  {
    core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::io::error::Error>>(&v2);
  }
  else
  {
    <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
      &v5,
      v3,
      v3 + v4);
    alloc::string::String::push(&v5, 10LL);
    core::ptr::drop_in_place<alloc::string::String>(&v2);
  }
  bat::config::config_file((__int64)v8);
  std::fs::read_to_string(&v2, v8);
  if ( v2 == 0x8000000000000000LL )
  {
    core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::io::error::Error>>(&v2);
  }
  else
  {
    <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
      &v5,
      v3,
      v3 + v4);
    core::ptr::drop_in_place<alloc::string::String>(&v2);
  }
  bat::config::get_args_from_str(a1, v6, v7);
  return core::ptr::drop_in_place<alloc::string::String>(&v5);
}