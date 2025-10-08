void *__fastcall uu_hashsum::uu_app_custom(void *a1)
{
  __int64 i; // r14
  _BYTE v3[640]; // [rsp+10h] [rbp-B08h] BYREF
  _BYTE v4[712]; // [rsp+290h] [rbp-888h] BYREF
  _BYTE src[712]; // [rsp+558h] [rbp-5C0h] BYREF
  _BYTE dest[760]; // [rsp+820h] [rbp-2F8h] BYREF

  uu_hashsum::uu_app_common(dest);
  uu_hashsum::uu_app_opt_bits(v4, dest);
  uu_hashsum::uu_app_b3sum_opts(src, v4);
  for ( i = 24LL; i != 504; i += 32LL )
  {
    memcpy(dest, src, 0x2C8uLL);
    clap_builder::builder::arg::Arg::new(v4);
    clap_builder::builder::arg::Arg::long(v3, v4);
    clap_builder::builder::arg::Arg::help(v4, v3);
    clap_builder::builder::arg::Arg::action(v3, v4, 2LL);
    clap_builder::builder::command::Command::arg(src, dest);
  }
  memcpy(a1, src, 0x2C8uLL);
  return a1;
}