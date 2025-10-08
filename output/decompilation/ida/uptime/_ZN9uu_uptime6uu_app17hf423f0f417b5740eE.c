void *__fastcall uu_uptime::uu_app(void *dest)
{
  __int64 v1; // rax
  _BYTE desta[700]; // [rsp+8h] [rbp-AF0h] BYREF
  __int64 v4; // [rsp+2C4h] [rbp-834h]
  int v5; // [rsp+2CCh] [rbp-82Ch]
  _BYTE src[700]; // [rsp+2D0h] [rbp-828h] BYREF
  __int64 v7; // [rsp+58Ch] [rbp-56Ch]
  int v8; // [rsp+594h] [rbp-564h]
  _BYTE v9[712]; // [rsp+598h] [rbp-560h] BYREF
  __int64 v10[83]; // [rsp+860h] [rbp-298h] BYREF

  v1 = uucore::util_name();
  clap_builder::builder::command::Command::new(v9, v1);
  clap_builder::builder::command::Command::version(src, v9);
  clap_builder::builder::command::Command::about(v9, src);
  uucore::format_usage(
    desta,
    "{} [OPTION]...system up sincefile to search boot time from: \n"
    "up ???? days ??:??,couldn't get boot time\n"
    "%Y-%m-%d %H:%M:%Ssrc/uu/uptime/src/uptime.rs,     couldn't get boot time: couldn't get boot time: Is a directorycoul"
    "dn't get boot time: Illegal seek",
    14LL);
  clap_builder::builder::command::Command::override_usage(src, v9);
  memcpy(desta, src, sizeof(desta));
  v4 = v7 | 0x8000000080LL;
  v5 = v8;
  clap_builder::builder::arg::Arg::new(v9);
  clap_builder::builder::arg::Arg::short(src, v9);
  clap_builder::builder::arg::Arg::long(v9, src);
  clap_builder::builder::arg::Arg::help(src, v9);
  clap_builder::builder::arg::Arg::action(v10, src, 2LL);
  clap_builder::builder::command::Command::arg(v9, desta);
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::help(desta, src);
  clap_builder::builder::arg::Arg::action(src, desta, 0LL);
  clap_builder::builder::arg::Arg::num_args(desta, src);
  v10[0] = 2LL;
  clap_builder::builder::arg::Arg::value_parser(src, desta);
  clap_builder::builder::arg::Arg::value_hint(desta, src);
  clap_builder::builder::command::Command::arg(dest, v9);
  return dest;
}