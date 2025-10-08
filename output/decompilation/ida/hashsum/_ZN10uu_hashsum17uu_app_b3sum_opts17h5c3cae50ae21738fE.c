__int64 __fastcall uu_hashsum::uu_app_b3sum_opts(void *dest, const void *a2)
{
  _BYTE v3[640]; // [rsp+0h] [rbp-7E8h] BYREF
  _BYTE desta[712]; // [rsp+280h] [rbp-568h] BYREF
  _BYTE src[672]; // [rsp+548h] [rbp-2A0h] BYREF

  memcpy(desta, a2, sizeof(desta));
  clap_builder::builder::arg::Arg::new(v3);
  clap_builder::builder::arg::Arg::long(src, v3);
  clap_builder::builder::arg::Arg::help(v3, src);
  clap_builder::builder::arg::Arg::action(src, v3, 2LL);
  return clap_builder::builder::command::Command::arg(dest, desta);
}