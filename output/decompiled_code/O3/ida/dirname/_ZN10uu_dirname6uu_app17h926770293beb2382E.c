void *__fastcall uu_dirname::uu_app(void *dest)
{
  __int64 v1; // rax
  _DWORD desta[175]; // [rsp+8h] [rbp-A50h] BYREF
  __int64 v4; // [rsp+2C4h] [rbp-794h]
  int v5; // [rsp+2CCh] [rbp-78Ch]
  _BYTE v6[584]; // [rsp+2D0h] [rbp-788h] BYREF
  int v7; // [rsp+518h] [rbp-540h]
  int v8; // [rsp+51Ch] [rbp-53Ch]
  _BYTE src[700]; // [rsp+520h] [rbp-538h] BYREF
  __int64 v10; // [rsp+7DCh] [rbp-27Ch]
  int v11; // [rsp+7E4h] [rbp-274h]
  _BYTE v12[624]; // [rsp+7E8h] [rbp-270h] BYREF

  v1 = uucore::util_name();
  clap_builder::builder::command::Command::new(desta, v1);
  clap_builder::builder::command::Command::about(src, desta);
  clap_builder::builder::command::Command::version(desta, src);
  uucore::format_usage(
    v6,
    "{} [OPTION] NAME...separate output with NUL rather than newlinedir/rustc/8bfcae730a5db2438bbda72796175bba21427be1/li"
    "brary/core/src/str/pattern.rs \n"
    "{}src/uucore/src/lib/lib.rsmanpage\n",
    19LL);
  clap_builder::builder::command::Command::override_usage(src, desta);
  memcpy(desta, src, sizeof(desta));
  v4 = v10 | 0x8800000088LL;
  v5 = v11;
  clap_builder::builder::arg::Arg::new(src, aZero_0, 4LL);
  clap_builder::builder::arg::Arg::long(v6, src);
  clap_builder::builder::arg::Arg::short(src, v6);
  clap_builder::builder::arg::Arg::help(v6, src);
  clap_builder::builder::arg::Arg::action(v12, v6, 2LL);
  clap_builder::builder::command::Command::arg(src, desta);
  clap_builder::builder::arg::Arg::new(
    desta,
    "dir/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/core/src/str/pattern.rs \n"
    "{}src/uucore/src/lib/lib.rsmanpage\n",
    3LL);
  memcpy(v6, desta, sizeof(v6));
  v7 = desta[146] | 4;
  v8 = desta[147];
  clap_builder::builder::arg::Arg::action(desta, v6, 1LL);
  clap_builder::builder::arg::Arg::value_hint(v6, desta);
  clap_builder::builder::command::Command::arg(dest, src);
  return dest;
}
