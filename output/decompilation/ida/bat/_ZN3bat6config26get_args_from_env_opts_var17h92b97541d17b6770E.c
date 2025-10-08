__int64 __fastcall bat::config::get_args_from_env_opts_var(_QWORD *a1)
{
  __int64 result; // rax
  __int64 v2; // [rsp+0h] [rbp-48h] BYREF
  _BYTE v3[24]; // [rsp+8h] [rbp-40h]
  __int128 v4; // [rsp+20h] [rbp-28h]

  std::env::var(&v2, aBatOpts, 8LL);
  if ( (v2 & 1) != 0 )
  {
    result = core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::env::VarError>>(&v2);
LABEL_4:
    *a1 = 0x8000000000000001LL;
    return result;
  }
  result = *(_QWORD *)v3;
  v4 = *(_OWORD *)&v3[8];
  if ( *(_QWORD *)v3 == 0x8000000000000000LL )
    goto LABEL_4;
  *(_OWORD *)v3 = v4;
  v2 = result;
  return ((__int64 (__fastcall *)(_QWORD *, __int64 *))bat::config::get_args_from_env_opts_var::{{closure}})(a1, &v2);
}