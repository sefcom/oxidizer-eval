__int64 zoxide::config::echo()
{
  __int64 result; // rax
  _QWORD v1[3]; // [rsp+0h] [rbp-18h] BYREF

  std::env::var_os(v1, aZoEcho, 8LL);
  result = 0LL;
  if ( !__OFSUB__(0LL, v1[0]) )
    return zoxide::config::resolve_symlinks::{{closure}}(v1);
  return result;
}