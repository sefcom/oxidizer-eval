void *__fastcall uu_dd::uu_app(void *dest, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  _BYTE src[700]; // [rsp+8h] [rbp-830h] BYREF
  __int64 v7; // [rsp+2C4h] [rbp-574h]
  int v8; // [rsp+2CCh] [rbp-56Ch]
  _BYTE desta[700]; // [rsp+2D0h] [rbp-568h] BYREF
  __int64 v10; // [rsp+58Ch] [rbp-2ACh]
  int v11; // [rsp+594h] [rbp-2A4h]
  _BYTE v12[672]; // [rsp+598h] [rbp-2A0h] BYREF

  v4 = uucore::util_name(dest, a2, a3, a4);
  clap_builder::builder::command::Command::new(src, v4);
  clap_builder::builder::command::Command::version(desta, src);
  clap_builder::builder::command::Command::about(src, desta);
  uucore::format_usage(v12, aOperandOption, 25LL);
  clap_builder::builder::command::Command::override_usage(desta, src);
  clap_builder::builder::command::Command::after_help(src, desta);
  memcpy(desta, src, sizeof(desta));
  v10 = v7 | 0x8000000080LL;
  v11 = v8;
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::num_args(v12, src);
  clap_builder::builder::command::Command::arg(dest, desta);
  return dest;
}