__int64 __fastcall uu_hashsum::uu_app_opt_length(void *dest, const void *a2)
{
  _BYTE v3[640]; // [rsp+18h] [rbp-7E0h] BYREF
  _BYTE src[640]; // [rsp+298h] [rbp-560h] BYREF
  _BYTE desta[736]; // [rsp+518h] [rbp-2E0h] BYREF

  memcpy(desta, a2, 0x2C8uLL);
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::long(v3, src);
  alloc::boxed::Box<T>::new(core::num::<impl core::str::traits::FromStr for usize>::from_str);
  clap_builder::builder::arg::Arg::value_parser(src, v3);
  clap_builder::builder::arg::Arg::short(v3, src, 108LL);
  clap_builder::builder::arg::Arg::help(src, v3);
  clap_builder::builder::arg::Arg::overrides_with(v3, src);
  clap_builder::builder::arg::Arg::action(src, v3, 0LL);
  return clap_builder::builder::command::Command::arg(dest, desta);
}