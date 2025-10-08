__int64 __fastcall uu_chmod::uu_app(__int64 a1)
{
  __int64 v1; // rax
  _BYTE dest[700]; // [rsp+8h] [rbp-AB0h] BYREF
  __int64 v4; // [rsp+2C4h] [rbp-7F4h]
  int v5; // [rsp+2CCh] [rbp-7ECh]
  _BYTE src[700]; // [rsp+2D0h] [rbp-7E8h] BYREF
  __int64 v7; // [rsp+58Ch] [rbp-52Ch]
  int v8; // [rsp+594h] [rbp-524h]
  _BYTE v9[640]; // [rsp+598h] [rbp-520h] BYREF
  _BYTE v10[672]; // [rsp+818h] [rbp-2A0h] BYREF

  v1 = uucore::util_name();
  clap_builder::builder::command::Command::new(dest, v1);
  clap_builder::builder::command::Command::version(src, dest);
  clap_builder::builder::command::Command::about(dest, src);
  uucore::format_usage(v9, aOptionModeMode, 112LL);
  clap_builder::builder::command::Command::override_usage(src, dest);
  memcpy(dest, src, sizeof(dest));
  v4 = v7 | 0x408008804080088LL;
  v5 = v8;
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::long(v9, src);
  clap_builder::builder::arg::Arg::help(src, v9);
  clap_builder::builder::arg::Arg::action(v9, src, 5LL);
  clap_builder::builder::command::Command::arg(src, dest);
  clap_builder::builder::arg::Arg::new(dest);
  clap_builder::builder::arg::Arg::long(v9, dest);
  clap_builder::builder::arg::Arg::short(dest, v9, 99LL);
  clap_builder::builder::arg::Arg::help(v9, dest);
  clap_builder::builder::arg::Arg::action(v10, v9, 2LL);
  clap_builder::builder::command::Command::arg(dest, src);
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::long(v9, src);
  clap_builder::builder::arg::Arg::visible_alias(src, v9);
  clap_builder::builder::arg::Arg::short(v9, src, 102LL);
  clap_builder::builder::arg::Arg::help(src, v9);
  clap_builder::builder::arg::Arg::action(v9, src, 2LL);
  clap_builder::builder::command::Command::arg(src, dest);
  clap_builder::builder::arg::Arg::new(dest);
  clap_builder::builder::arg::Arg::long(v9, dest);
  clap_builder::builder::arg::Arg::short(dest, v9, 118LL);
  clap_builder::builder::arg::Arg::help(v9, dest);
  clap_builder::builder::arg::Arg::action(v10, v9, 2LL);
  clap_builder::builder::command::Command::arg(dest, src);
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::long(v9, src);
  clap_builder::builder::arg::Arg::help(src, v9);
  clap_builder::builder::arg::Arg::action(v9, src, 2LL);
  clap_builder::builder::command::Command::arg(src, dest);
  clap_builder::builder::arg::Arg::new(dest);
  clap_builder::builder::arg::Arg::long(v9, dest);
  clap_builder::builder::arg::Arg::help(dest, v9);
  clap_builder::builder::arg::Arg::action(v9, dest, 2LL);
  clap_builder::builder::command::Command::arg(dest, src);
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::long(v9, src);
  clap_builder::builder::arg::Arg::short(src, v9, 82LL);
  clap_builder::builder::arg::Arg::help(v9, src);
  clap_builder::builder::arg::Arg::action(v10, v9, 2LL);
  clap_builder::builder::command::Command::arg(src, dest);
  clap_builder::builder::arg::Arg::new(dest);
  clap_builder::builder::arg::Arg::long(v9, dest);
  clap_builder::builder::arg::Arg::value_hint(dest, v9);
  clap_builder::builder::arg::Arg::help(v9, dest);
  clap_builder::builder::command::Command::arg(dest, src);
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::required_unless_present(v9, src);
  clap_builder::builder::command::Command::arg(src, dest);
  clap_builder::builder::arg::Arg::new(dest);
  clap_builder::builder::arg::Arg::required_unless_present(v9, dest);
  clap_builder::builder::arg::Arg::action(dest, v9, 1LL);
  clap_builder::builder::arg::Arg::value_hint(v9, dest);
  clap_builder::builder::command::Command::arg(dest, src);
  uucore::features::perms::common_args(src);
  clap_builder::builder::command::Command::args(a1, dest, src);
  return a1;
}