void *__fastcall uu_hostname::uu_app(void *a1)
{
  __int64 v1; // rax
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  _BYTE dest[700]; // [rsp+48h] [rbp-840h] BYREF
  __int64 v20; // [rsp+304h] [rbp-584h]
  int v21; // [rsp+30Ch] [rbp-57Ch]
  _BYTE v22[640]; // [rsp+310h] [rbp-578h] BYREF
  _BYTE src[700]; // [rsp+590h] [rbp-2F8h] BYREF
  __int64 v24; // [rsp+84Ch] [rbp-3Ch]
  int v25; // [rsp+854h] [rbp-34h]

  v1 = uucore::util_name();
  clap_builder::builder::command::Command::new(dest, v1);
  clap_builder::builder::command::Command::version(src, dest);
  clap_builder::builder::command::Command::about(dest, src);
  uucore::format_usage(v22, aOptionHostname, 25LL);
  clap_builder::builder::command::Command::override_usage(src, dest);
  memcpy(dest, src, sizeof(dest));
  v20 = v24 | 0x8000000080LL;
  v21 = v25;
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::short(v22, src, 100LL);
  clap_builder::builder::arg::Arg::long(src, v22);
  clap_builder::builder::arg::Arg::overrides_with_all(v22, src);
  clap_builder::builder::arg::Arg::help(src, v22);
  clap_builder::builder::arg::Arg::action(
    v22,
    src,
    v2,
    v3,
    v4,
    v5,
    aDomain,
    6LL,
    aIpAddress,
    10LL,
    aFqdn,
    4LL,
    aShort,
    5LL);
  clap_builder::builder::command::Command::arg(src, dest);
  clap_builder::builder::arg::Arg::new(dest);
  clap_builder::builder::arg::Arg::short(v22, dest, 105LL);
  clap_builder::builder::arg::Arg::long(dest, v22);
  clap_builder::builder::arg::Arg::overrides_with_all(v22, dest);
  clap_builder::builder::arg::Arg::help(dest, v22);
  clap_builder::builder::arg::Arg::action(
    v22,
    dest,
    v6,
    v7,
    v8,
    v9,
    aDomain,
    6LL,
    aIpAddress,
    10LL,
    aFqdn,
    4LL,
    aShort,
    5LL);
  clap_builder::builder::command::Command::arg(dest, src);
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::short(v22, src, 102LL);
  clap_builder::builder::arg::Arg::long(src, v22);
  clap_builder::builder::arg::Arg::overrides_with_all(v22, src);
  clap_builder::builder::arg::Arg::help(src, v22);
  clap_builder::builder::arg::Arg::action(
    v22,
    src,
    v10,
    v11,
    v12,
    v13,
    aDomain,
    6LL,
    aIpAddress,
    10LL,
    aFqdn,
    4LL,
    aShort,
    5LL);
  clap_builder::builder::command::Command::arg(src, dest);
  clap_builder::builder::arg::Arg::new(dest);
  clap_builder::builder::arg::Arg::short(v22, dest, 115LL);
  clap_builder::builder::arg::Arg::long(dest, v22);
  clap_builder::builder::arg::Arg::overrides_with_all(v22, dest);
  clap_builder::builder::arg::Arg::help(dest, v22);
  clap_builder::builder::arg::Arg::action(
    v22,
    dest,
    v14,
    v15,
    v16,
    v17,
    aDomain,
    6LL,
    aIpAddress,
    10LL,
    aFqdn,
    4LL,
    aShort,
    5LL);
  clap_builder::builder::command::Command::arg(dest, src);
  clap_builder::builder::arg::Arg::new(src);
  clap_builder::builder::arg::Arg::value_parser(v22, src);
  clap_builder::builder::arg::Arg::value_hint(src, v22);
  clap_builder::builder::command::Command::arg(a1, dest);
  return a1;
}