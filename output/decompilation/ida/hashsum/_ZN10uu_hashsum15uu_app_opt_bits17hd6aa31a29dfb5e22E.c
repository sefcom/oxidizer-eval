__int64 __fastcall uu_hashsum::uu_app_opt_bits(void *dest, const void *a2)
{
  _BYTE v3[640]; // [rsp+0h] [rbp-7E8h] BYREF
  _BYTE src[640]; // [rsp+280h] [rbp-568h] BYREF
  _BYTE desta[744]; // [rsp+500h] [rbp-2E8h] BYREF

  memcpy(desta, a2, 0x2C8uLL);
  clap_builder::builder::arg::Arg::new(v3);
  clap_builder::builder::arg::Arg::long(src, v3);
  clap_builder::builder::arg::Arg::help(v3, src);
  clap_builder::builder::arg::Arg::value_name(src, v3);
  clap_builder::builder::arg::Arg::value_parser(v3, src);
  return clap_builder::builder::command::Command::arg(dest, desta);
}