void *__fastcall uu_id::uu_app(void *a1)
{
  __int64 v1; // rax
  _BYTE v3[640]; // [rsp+8h] [rbp-AC0h] BYREF
  const char *v4; // [rsp+288h] [rbp-840h] BYREF
  __int64 v5; // [rsp+290h] [rbp-838h]
  const char *v6; // [rsp+298h] [rbp-830h]
  __int64 v7; // [rsp+2A0h] [rbp-828h]
  const char *v8; // [rsp+2A8h] [rbp-820h]
  __int64 v9; // [rsp+2B0h] [rbp-818h]
  const char *v10; // [rsp+2B8h] [rbp-810h]
  __int64 v11; // [rsp+2C0h] [rbp-808h]
  const char *v12; // [rsp+2C8h] [rbp-800h]
  __int64 v13; // [rsp+2D0h] [rbp-7F8h]
  const char *v14; // [rsp+2D8h] [rbp-7F0h]
  __int64 v15; // [rsp+2E0h] [rbp-7E8h]
  _BYTE dest[700]; // [rsp+508h] [rbp-5C0h] BYREF
  __int64 v17; // [rsp+7C4h] [rbp-304h]
  int v18; // [rsp+7CCh] [rbp-2FCh]
  _BYTE src[700]; // [rsp+7D0h] [rbp-2F8h] BYREF
  __int64 v20; // [rsp+A8Ch] [rbp-3Ch]
  int v21; // [rsp+A94h] [rbp-34h]

  v1 = uucore::util_name();
  clap_builder::builder::command::Command::new(dest, v1);
  clap_builder::builder::command::Command::version(src, dest);
  clap_builder::builder::command::Command::about(dest, src);
  uucore::format_usage(v3, aOptionUser, 24LL);
  clap_builder::builder::command::Command::override_usage(src, dest);
  memcpy(dest, src, sizeof(dest));
  v17 = v20 | 0x8800000088LL;
  v18 = v21;
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::short(v3, src, 65LL);
  v4 = aGroup_0;
  v5 = 5LL;
  v6 = aUser;
  v7 = 4LL;
  v8 = aHumanReadable_0;
  v9 = 14LL;
  v10 = aPassword;
  v11 = 8LL;
  v12 = aGroups_2;
  v13 = 6LL;
  v14 = aZero_0;
  v15 = 4LL;
  clap_builder::builder::arg::Arg::conflicts_with_all(src, v3);
  clap_builder::builder::arg::Arg::help(v3, src);
  clap_builder::builder::arg::Arg::action(&v4, v3, 2LL);
  clap_builder::builder::command::Command::arg(src, dest);
  clap_builder::builder::arg::Arg::new(dest);
  clap_builder::builder::arg::Arg::short(v3, dest, 117LL);
  clap_builder::builder::arg::Arg::long(dest, v3);
  clap_builder::builder::arg::Arg::conflicts_with(v3, dest);
  clap_builder::builder::arg::Arg::help(dest, v3);
  clap_builder::builder::arg::Arg::action(v3, dest, 2LL);
  clap_builder::builder::command::Command::arg(dest, src);
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::short(v3, src, 103LL);
  clap_builder::builder::arg::Arg::long(src, v3);
  clap_builder::builder::arg::Arg::conflicts_with(v3, src);
  clap_builder::builder::arg::Arg::help(src, v3);
  clap_builder::builder::arg::Arg::action(v3, src, 2LL);
  clap_builder::builder::command::Command::arg(src, dest);
  clap_builder::builder::arg::Arg::new(dest);
  clap_builder::builder::arg::Arg::short(v3, dest, 71LL);
  clap_builder::builder::arg::Arg::long(dest, v3);
  v4 = aGroup_0;
  v5 = 5LL;
  v6 = aUser;
  v7 = 4LL;
  v8 = aContext_0;
  v9 = 7LL;
  v10 = aHumanReadable_0;
  v11 = 14LL;
  v12 = aPassword;
  v13 = 8LL;
  v14 = aAudit_0;
  v15 = 5LL;
  clap_builder::builder::arg::Arg::conflicts_with_all(v3, dest);
  clap_builder::builder::arg::Arg::help(dest, v3);
  clap_builder::builder::arg::Arg::action(v3, dest, 2LL);
  clap_builder::builder::command::Command::arg(dest, src);
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::short(v3, src, 112LL);
  clap_builder::builder::arg::Arg::help(src, v3);
  clap_builder::builder::arg::Arg::action(v3, src, 2LL);
  clap_builder::builder::command::Command::arg(src, dest);
  clap_builder::builder::arg::Arg::new(dest);
  clap_builder::builder::arg::Arg::short(v3, dest, 110LL);
  clap_builder::builder::arg::Arg::long(dest, v3);
  clap_builder::builder::arg::Arg::help(v3, dest);
  clap_builder::builder::arg::Arg::action(&v4, v3, 2LL);
  clap_builder::builder::command::Command::arg(dest, src);
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::short(v3, src, 80LL);
  clap_builder::builder::arg::Arg::help(src, v3);
  clap_builder::builder::arg::Arg::conflicts_with(v3, src);
  clap_builder::builder::arg::Arg::action(&v4, v3, 2LL);
  clap_builder::builder::command::Command::arg(src, dest);
  clap_builder::builder::arg::Arg::new(dest);
  clap_builder::builder::arg::Arg::short(v3, dest, 114LL);
  clap_builder::builder::arg::Arg::long(dest, v3);
  clap_builder::builder::arg::Arg::help(v3, dest);
  clap_builder::builder::arg::Arg::action(&v4, v3, 2LL);
  clap_builder::builder::command::Command::arg(dest, src);
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::short(v3, src, 122LL);
  clap_builder::builder::arg::Arg::long(src, v3);
  clap_builder::builder::arg::Arg::help(v3, src);
  clap_builder::builder::arg::Arg::action(&v4, v3, 2LL);
  clap_builder::builder::command::Command::arg(src, dest);
  clap_builder::builder::arg::Arg::new(dest);
  clap_builder::builder::arg::Arg::short(v3, dest, 90LL);
  clap_builder::builder::arg::Arg::long(dest, v3);
  v4 = aGroup_0;
  v5 = 5LL;
  v6 = aUser;
  v7 = 4LL;
  clap_builder::builder::arg::Arg::conflicts_with_all(v3, dest);
  clap_builder::builder::arg::Arg::help(dest, v3);
  clap_builder::builder::arg::Arg::action(v3, dest, 2LL);
  clap_builder::builder::command::Command::arg(dest, src);
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::action(v3, src, 1LL);
  clap_builder::builder::arg::Arg::value_name(src, v3);
  clap_builder::builder::arg::Arg::value_hint(v3, src);
  clap_builder::builder::command::Command::arg(a1, dest);
  return a1;
}