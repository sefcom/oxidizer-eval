_QWORD *__fastcall fuel_core_e2e_client::load_config_env(_QWORD *a1)
{
  __int64 v1; // r14
  _QWORD v3[3]; // [rsp+0h] [rbp-E8h] BYREF
  __int64 v4; // [rsp+18h] [rbp-D0h] BYREF
  _BYTE src[184]; // [rsp+20h] [rbp-C8h] BYREF

  std::env::var_os(v3, aFuelCoreE2eCon, 20LL);
  if ( __OFSUB__(0LL, v3[0]) )
  {
    <fuel_core_e2e_client::config::SuiteConfig as core::default::Default>::default(a1);
  }
  else
  {
    fuel_core_e2e_client::load_config_env::{{closure}}(&v4, v3);
    v1 = v4;
    memcpy(a1 + 1, src, 0xB8uLL);
    *a1 = v1;
  }
  return a1;
}