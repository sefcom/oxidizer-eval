__int64 __fastcall bat::config::config_file(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 result; // rax
  _BYTE v5[8]; // [rsp+0h] [rbp-38h] BYREF
  __int64 v6; // [rsp+8h] [rbp-30h]
  __int128 v7; // [rsp+10h] [rbp-28h]
  __int128 v8; // [rsp+20h] [rbp-18h]

  std::env::var(v5, aBatConfigPath, 15LL);
  if ( (v5[0] & 1) != 0 )
  {
    core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::env::VarError>>(v5);
    return bat::config::config_file::{{closure}}(a1, aBatConfigPath, v2, v3);
  }
  else
  {
    result = v6;
    v8 = v7;
    if ( __OFSUB__(-v6, 1LL) )
    {
      return bat::config::config_file::{{closure}}(a1, aBatConfigPath, v1, -v6);
    }
    else
    {
      *(_OWORD *)(a1 + 8) = v8;
      *(_QWORD *)a1 = result;
    }
  }
  return result;
}