__int64 __fastcall uu_hashsum::uu_app_opt_bits(void *dest, const void *a2)
{
  _BYTE src[592]; // [rsp+8h] [rbp-770h] BYREF
  _BYTE v4[592]; // [rsp+258h] [rbp-520h] BYREF
  _BYTE desta[720]; // [rsp+4A8h] [rbp-2D0h] BYREF

  memcpy(desta, a2, 0x2C8uLL);
  clap_builder::builder::arg::Arg::new(src, aBits, 4LL);
  clap_builder::builder::arg::Arg::long(v4, src);
  clap_builder::builder::arg::Arg::help(src, v4);
  clap_builder::builder::arg::Arg::value_name(v4, src);
  clap_builder::builder::arg::Arg::value_parser(src, v4);
  return clap_builder::builder::command::Command::arg(dest, desta);
}
