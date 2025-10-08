__int64 __fastcall uu_env::apply_removal_of_all_env_vars(__int64 a1)
{
  __int64 result; // rax
  _BYTE v2[32]; // [rsp+8h] [rbp-70h] BYREF
  _QWORD v3[10]; // [rsp+28h] [rbp-50h] BYREF

  if ( *(_BYTE *)(a1 + 152) )
  {
    std::env::vars_os(v2);
    while ( 1 )
    {
      <std::env::VarsOs as core::iter::traits::iterator::Iterator>::next(v3, v2);
      if ( __OFSUB__(0LL, v3[0]) )
        break;
      std::env::remove_var(v3);
      core::ptr::drop_in_place<core::option::Option<(std::ffi::os_str::OsString,std::ffi::os_str::OsString)>>(v3);
    }
    core::ptr::drop_in_place<core::option::Option<(std::ffi::os_str::OsString,std::ffi::os_str::OsString)>>(v3);
    return core::ptr::drop_in_place<std::env::VarsOs>(v2);
  }
  return result;
}