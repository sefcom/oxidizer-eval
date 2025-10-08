void *__fastcall uu_basenc::uu_app(void *dest)
{
  _BYTE v2[640]; // [rsp+8h] [rbp-FB0h] BYREF
  _BYTE v3[640]; // [rsp+288h] [rbp-D30h] BYREF
  _BYTE desta[712]; // [rsp+508h] [rbp-AB0h] BYREF
  _BYTE src[712]; // [rsp+7D0h] [rbp-7E8h] BYREF
  _BYTE v6[640]; // [rsp+A98h] [rbp-520h] BYREF
  _BYTE v7[672]; // [rsp+D18h] [rbp-2A0h] BYREF

  uu_base32::base_common::base_app(src, aEncodeDecodeDa, 297LL, aOptionFile, 21LL);
  clap_builder::builder::arg::Arg::new(desta);
  clap_builder::builder::arg::Arg::long(v7, desta);
  clap_builder::builder::arg::Arg::help(v2, v7);
  clap_builder::builder::arg::Arg::action(v6, v2);
  <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::fold(v3);
  memcpy(desta, src, sizeof(desta));
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta);
  clap_builder::builder::arg::Arg::long(v7, desta);
  clap_builder::builder::arg::Arg::help(v2, v7);
  clap_builder::builder::arg::Arg::action(v6, v2);
  <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::fold(v3);
  memcpy(desta, src, sizeof(desta));
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta);
  clap_builder::builder::arg::Arg::long(v7, desta);
  clap_builder::builder::arg::Arg::help(v2, v7);
  clap_builder::builder::arg::Arg::action(v6, v2);
  <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::fold(v3);
  memcpy(desta, src, sizeof(desta));
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta);
  clap_builder::builder::arg::Arg::long(v7, desta);
  clap_builder::builder::arg::Arg::help(v2, v7);
  clap_builder::builder::arg::Arg::action(v6, v2);
  <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::fold(v3);
  memcpy(desta, src, sizeof(desta));
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta);
  clap_builder::builder::arg::Arg::long(v7, desta);
  clap_builder::builder::arg::Arg::help(v2, v7);
  clap_builder::builder::arg::Arg::action(v6, v2);
  <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::fold(v3);
  memcpy(desta, src, sizeof(desta));
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta);
  clap_builder::builder::arg::Arg::long(v7, desta);
  clap_builder::builder::arg::Arg::help(v2, v7);
  clap_builder::builder::arg::Arg::action(v6, v2);
  <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::fold(v3);
  memcpy(desta, src, sizeof(desta));
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta);
  clap_builder::builder::arg::Arg::long(v7, desta);
  clap_builder::builder::arg::Arg::help(v2, v7);
  clap_builder::builder::arg::Arg::action(v6, v2);
  <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::fold(v3);
  memcpy(desta, src, sizeof(desta));
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(desta);
  clap_builder::builder::arg::Arg::long(v7, desta);
  clap_builder::builder::arg::Arg::help(v2, v7);
  clap_builder::builder::arg::Arg::action(v6, v2);
  <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::fold(v3);
  memcpy(desta, src, sizeof(desta));
  clap_builder::builder::command::Command::arg(src, desta);
  memcpy(dest, src, 0x2C8uLL);
  return dest;
}