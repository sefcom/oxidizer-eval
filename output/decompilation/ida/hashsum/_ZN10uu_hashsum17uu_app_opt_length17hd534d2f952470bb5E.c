__int64 __fastcall uu_hashsum::uu_app_opt_length(void *dest, const void *a2)
{
  _BYTE src[592]; // [rsp+20h] [rbp-778h] BYREF
  _BYTE v4[592]; // [rsp+270h] [rbp-528h] BYREF
  _BYTE desta[728]; // [rsp+4C0h] [rbp-2D8h] BYREF

  memcpy(desta, a2, 0x2C8uLL);
  clap_builder::builder::arg::Arg::new(src, aLength_0, 6LL);
  clap_builder::builder::arg::Arg::long(v4, src);
  alloc::boxed::Box<T>::new();
  clap_builder::builder::arg::Arg::value_parser(src, v4);
  clap_builder::builder::arg::Arg::short(v4, src, 108LL);
  clap_builder::builder::arg::Arg::help(src, v4);
  clap_builder::builder::arg::Arg::overrides_with(v4, src);
  clap_builder::builder::arg::Arg::action(src, v4, 0LL);
  return clap_builder::builder::command::Command::arg(dest, desta);
}
