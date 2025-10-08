__int64 fuel_core_e2e_client::main()
{
  _BYTE v1[104]; // [rsp+8h] [rbp-130h] BYREF
  _BYTE v2[200]; // [rsp+70h] [rbp-C8h] BYREF

  fuel_core_e2e_client::load_config_env(v2);
  libtest_mimic::args::Arguments::from_args(v1);
  return fuel_core_e2e_client::main_body(v2, v1);
}