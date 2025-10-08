__int64 __fastcall uu_chgrp::uu_app(__int64 a1)
{
  __int64 v1; // rax
  _BYTE v3[700]; // [rsp+0h] [rbp-AB8h] BYREF
  __int64 v4; // [rsp+2BCh] [rbp-7FCh]
  int v5; // [rsp+2C4h] [rbp-7F4h]
  _BYTE src[700]; // [rsp+2C8h] [rbp-7F0h] BYREF
  __int64 v7; // [rsp+584h] [rbp-534h]
  int v8; // [rsp+58Ch] [rbp-52Ch]
  _BYTE dest[640]; // [rsp+590h] [rbp-528h] BYREF
  _BYTE v10[680]; // [rsp+810h] [rbp-2A8h] BYREF

  v1 = uucore::util_name();
  clap_builder::builder::command::Command::new(v3, v1);
  clap_builder::builder::command::Command::version(src, v3);
  clap_builder::builder::command::Command::about(v3, src);
  uucore::format_usage(dest, aOptionGroupFil, 69LL);
  clap_builder::builder::command::Command::override_usage(src, v3);
  memcpy(v3, src, sizeof(v3));
  v4 = v7 | 0x8008000080080LL;
  v5 = v8;
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::long(dest, src);
  clap_builder::builder::arg::Arg::help(src, dest);
  clap_builder::builder::arg::Arg::action(dest, src, 5LL);
  clap_builder::builder::command::Command::arg(src, v3);
  clap_builder::builder::arg::Arg::new(v3);
  clap_builder::builder::arg::Arg::short(dest, v3, 99LL);
  clap_builder::builder::arg::Arg::long(v3, dest);
  clap_builder::builder::arg::Arg::help(dest, v3);
  clap_builder::builder::arg::Arg::action(v10, dest, 2LL);
  clap_builder::builder::command::Command::arg(v3, src);
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::short(dest, src, 102LL);
  clap_builder::builder::arg::Arg::long(src, dest);
  clap_builder::builder::arg::Arg::action(dest, src, 2LL);
  clap_builder::builder::command::Command::arg(src, v3);
  clap_builder::builder::arg::Arg::new(v3);
  clap_builder::builder::arg::Arg::long(dest, v3);
  clap_builder::builder::arg::Arg::help(v3, dest);
  clap_builder::builder::arg::Arg::action(dest, v3, 2LL);
  clap_builder::builder::command::Command::arg(v3, src);
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::short(dest, src, 118LL);
  clap_builder::builder::arg::Arg::long(src, dest);
  clap_builder::builder::arg::Arg::help(dest, src);
  clap_builder::builder::arg::Arg::action(v10, dest, 2LL);
  clap_builder::builder::command::Command::arg(src, v3);
  clap_builder::builder::arg::Arg::new(v3);
  clap_builder::builder::arg::Arg::long(dest, v3);
  clap_builder::builder::arg::Arg::help(v3, dest);
  clap_builder::builder::arg::Arg::action(dest, v3, 2LL);
  clap_builder::builder::command::Command::arg(v3, src);
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::long(dest, src);
  clap_builder::builder::arg::Arg::help(src, dest);
  clap_builder::builder::arg::Arg::action(dest, src, 2LL);
  clap_builder::builder::command::Command::arg(src, v3);
  clap_builder::builder::arg::Arg::new(v3);
  clap_builder::builder::arg::Arg::long(dest, v3);
  clap_builder::builder::arg::Arg::value_name(v3, dest);
  clap_builder::builder::arg::Arg::value_hint(dest, v3);
  clap_builder::builder::arg::Arg::help(v10, dest);
  clap_builder::builder::command::Command::arg(v3, src);
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::long(dest, src);
  clap_builder::builder::arg::Arg::value_name(src, dest);
  clap_builder::builder::arg::Arg::help(dest, src);
  clap_builder::builder::command::Command::arg(src, v3);
  clap_builder::builder::arg::Arg::new(v3);
  clap_builder::builder::arg::Arg::short(dest, v3, 82LL);
  clap_builder::builder::arg::Arg::long(v3, dest);
  clap_builder::builder::arg::Arg::help(dest, v3);
  clap_builder::builder::arg::Arg::action(v10, dest, 2LL);
  clap_builder::builder::command::Command::arg(v3, src);
  uucore::features::perms::common_args(src);
  clap_builder::builder::command::Command::args(a1, v3, src);
  return a1;
}