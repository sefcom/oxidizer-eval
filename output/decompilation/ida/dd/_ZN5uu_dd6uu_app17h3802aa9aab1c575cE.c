void *__fastcall uu_dd::uu_app(void *dest)
{
  __int64 v1; // rax
  _BYTE v3[700]; // [rsp+0h] [rbp-7F8h] BYREF
  __int64 v4; // [rsp+2BCh] [rbp-53Ch]
  int v5; // [rsp+2C4h] [rbp-534h]
  _BYTE desta[700]; // [rsp+2C8h] [rbp-530h] BYREF
  __int64 v7; // [rsp+584h] [rbp-274h]
  int v8; // [rsp+58Ch] [rbp-26Ch]
  _BYTE v9[616]; // [rsp+590h] [rbp-268h] BYREF

  v1 = uucore::util_name();
  clap_builder::builder::command::Command::new(v3, v1);
  clap_builder::builder::command::Command::version(desta, v3);
  clap_builder::builder::command::Command::about(v3, desta);
  uucore::format_usage(v9, aOperandOption, 25LL);
  clap_builder::builder::command::Command::override_usage(desta, v3);
  clap_builder::builder::command::Command::after_help(v3, desta);
  memcpy(desta, v3, sizeof(desta));
  v7 = v4 | 0x8000000080LL;
  v8 = v5;
  clap_builder::builder::arg::Arg::new(v3, "operandsESTRPIPENotFoundTimedOut", 8LL);
  clap_builder::builder::arg::Arg::num_args(v9, v3);
  clap_builder::builder::command::Command::arg(dest, desta);
  return dest;
}
