__int64 __fastcall uu_hashsum::uu_app_b3sum_opts(void *dest, const void *a2)
{
  _BYTE v3[592]; // [rsp+0h] [rbp-778h] BYREF
  _BYTE src[592]; // [rsp+250h] [rbp-528h] BYREF
  _BYTE desta[728]; // [rsp+4A0h] [rbp-2D8h] BYREF

  memcpy(desta, a2, 0x2C8uLL);
  clap_builder::builder::arg::Arg::new(v3, "no-namescapacitys", 8LL);
  clap_builder::builder::arg::Arg::long(src, v3);
  clap_builder::builder::arg::Arg::help(v3, src);
  clap_builder::builder::arg::Arg::action(src, v3, 2LL);
  return clap_builder::builder::command::Command::arg(dest, desta);
}
